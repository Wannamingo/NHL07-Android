/**
 * nhl_07_recomp - Recompiled code chunk 161
 * Functions: 250 (0x00317460 - 0x0031E0F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00317460
 * Original: 0x00317460 - 0x0031748D (45 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317460: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317487; /* je: equal / zero */

loc_0031746A: ;
    edx = MEM32(esp + 8);
    MEM32(esi + 8) = 0;
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00317480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031747Eu); } /* indirect call */
    }

loc_00317480: ;
    MEM32(esi + 4) = 0;

loc_00317487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317463
 * Original: 0x00317463 - 0x0031748D (42 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317463(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317463: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317487; /* je: equal / zero */

loc_0031746A: ;
    edx = MEM32(esp + 8);
    MEM32(esi + 8) = 0;
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00317480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031747Eu); } /* indirect call */
    }

loc_00317480: ;
    MEM32(esi + 4) = 0;

loc_00317487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317468
 * Original: 0x00317468 - 0x0031748D (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317468(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317468: ;
    if (_flags /* je: equal / zero */) goto loc_00317487;

loc_0031746A: ;
    edx = MEM32(esp + 8);
    MEM32(esi + 8) = 0;
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00317480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031747Eu); } /* indirect call */
    }

loc_00317480: ;
    MEM32(esi + 4) = 0;

loc_00317487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003174A0
 * Original: 0x003174A0 - 0x003174B6 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003174A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003174A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x28) = MEM32(eax + 0x28) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003174C0
 * Original: 0x003174C0 - 0x003174C9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003174C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003174C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x28) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003174D0
 * Original: 0x003174D0 - 0x003174ED (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003174D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003174D0: ;
    eax = ecx;
    MEM32(eax + 0x28) = MEM32(eax + 0x28) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 4);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x2C);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x2C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317500
 * Original: 0x00317500 - 0x00317519 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00317500: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(edx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317520
 * Original: 0x00317520 - 0x00317558 (56 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317520: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031752D; /* jg: greater (signed >) */

loc_00317527: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x10);

loc_0031752D: ;
    SET_LO8(edx, MEM8(ecx + 0x24));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317543; /* je: equal / zero */

loc_00317534: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317543: ;
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317555; /* je: equal / zero */

loc_0031754A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

loc_00317555: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00317570
 * Original: 0x00317570 - 0x0031757D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317570: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031757C; /* je: equal / zero */

loc_00317576: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031757Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031757Au); } /* indirect call */
    }

loc_0031757C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00317580
 * Original: 0x00317580 - 0x00317587 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317580: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00317590
 * Original: 0x00317590 - 0x00317596 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317590(void)
{

loc_00317590: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003175A0
 * Original: 0x003175A0 - 0x0031762D (141 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003175A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003175A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    edx = esp + 0xC;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003175B2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003175B2; /* jne: not equal / not zero */

loc_003175BC: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    esi = esp + 0xC;
    MEM32(esp + 0x30) = 0;
    ebp = 0x18;
    if (CMP_L(_fas, _fbs)) goto loc_00317624; /* jl: less (signed <) */

loc_003175D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00317624; /* jg: greater (signed >) */

loc_003175D7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    /* nop */

loc_003175E0: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003175E8u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_003175E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003175F5; /* jge: greater or equal (signed >=) */

loc_003175F2: ;
    MEM8(ebx) = 0;

loc_003175F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003175FBu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_003175FB: ;
    esi = MEM32(esp + 0x38);
    ecx = ebp;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 0x34) = esi;
    esi = ebx + 1;
    if (CMP_L(_fas, _fbs)) goto loc_003175E0; /* jl: less (signed <) */

loc_00317618: ;
    eax = MEM32(esp + 0x34);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00317624: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00317650
 * Original: 0x00317650 - 0x003176A9 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317650: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    PUSH32(esp, esi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ZX8(LO8(edx));
    esi = edx;
    MEM32(esp + 0x18) = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    esi = ZX8(HI8(eax));
    edi = esi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x826F10);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x003176A0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003176A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003176C0
 * Original: 0x003176C0 - 0x00317703 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003176C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003176C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003176EE; /* je: equal / zero */

loc_003176C8: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = SX8(HI8(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    ecx = SX8(LO8(eax));
    edx = SX8(HI8(eax));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x826F28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003176EAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003176EA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003176EE: ;
    edx = MEM32(0x826F20);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    SET_LO8(eax, MEM8(0x826F24));
    MEM8(ecx + 4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00317720
 * Original: 0x00317720 - 0x00317754 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317720: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317750; /* je: equal / zero */

loc_0031772B: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = SX8(HI8(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    ecx = SX8(LO8(eax));
    edx = SX8(HI8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x826F28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031774Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0031774D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00317750: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00317770
 * Original: 0x00317770 - 0x0031778B (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317770: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317789; /* je: equal / zero */

loc_00317785: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00317789: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003177A0
 * Original: 0x003177A0 - 0x003177A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003177A0(void)
{

loc_003177A0: ;
    eax = MEM32(0x8F4510);
    esp += 4; return; /* ret */

}

/**
 * sub_003177B0
 * Original: 0x003177B0 - 0x00317838 (136 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003177B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003177B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031780D; /* jne: not equal / not zero */

loc_003177BB: ;
    eax = MEM32(0x8FC624);
    ecx = MEM32(eax + 0xA4);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1770);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003177DFu); RECOMP_ABI_CALL(0x004552B0u, sub_004552B0); /* call 0x004552B0 */

loc_003177DF: ;
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(0x8FC624);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317834; /* je: equal / zero */

loc_003177EF: ;
    MEM32(0x8FC620) = 8;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003177FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003177FDu); } /* indirect call */
    }

loc_003177FF: ;
    MEM32(0x8FC624) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031780D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317834; /* jne: not equal / not zero */

loc_00317811: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x1770);
    PUSH32(esp, 0x1770);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031782Eu); RECOMP_ABI_CALL(0x004552B0u, sub_004552B0); /* call 0x004552B0 */

loc_0031782E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;

loc_00317834: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317860
 * Original: 0x00317860 - 0x00317871 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317860: ;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031786Du); RECOMP_ABI_CALL(0x00455360u, sub_00455360); /* call 0x00455360 */

loc_0031786D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00317880
 * Original: 0x00317880 - 0x003178A3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317880: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6D696372);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317893u); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_00317893: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031789Eu); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_0031789E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003178B0
 * Original: 0x003178B0 - 0x003178D3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003178B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003178B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6D696372);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003178C3u); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_003178C3: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003178CEu); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_003178CE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003178E0
 * Original: 0x003178E0 - 0x00317912 (50 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003178E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003178E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    edx = MEM32(ecx + 0x20);
    MEM32(ecx + 0x20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003178F6; /* jbe: below or equal (unsigned <=) */

loc_003178EF: ;
    MEM32(ecx + 0x20) = 0x64;

loc_003178F6: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031790F; /* je: equal / zero */

loc_003178FD: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x706C6179);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031790Cu); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_0031790C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031790F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317920
 * Original: 0x00317920 - 0x0031793F (31 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317920: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317926u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00317926: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0031792Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031792Cu); } /* indirect call */
    }

loc_0031792F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031793B; /* jl: less (signed <) */

loc_00317934: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0031793Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317938u); } /* indirect call */
    }

loc_0031793B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317950
 * Original: 0x00317950 - 0x00317982 (50 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317950: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    edx = MEM32(ecx + 0x24);
    MEM32(ecx + 0x24) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00317966; /* jbe: below or equal (unsigned <=) */

loc_0031795F: ;
    MEM32(ecx + 0x24) = 0x64;

loc_00317966: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031797F; /* je: equal / zero */

loc_0031796D: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x6761696E);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031797Cu); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_0031797C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031797F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031795F
 * Original: 0x0031795F - 0x00317982 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031795F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031795F: ;
    MEM32(ecx + 0x24) = 0x64;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031797F; /* je: equal / zero */

loc_0031796D: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x6761696E);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031797Cu); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_0031797C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031797F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317990
 * Original: 0x00317990 - 0x003179D6 (70 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317990: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003179A0u); RECOMP_ABI_CALL(0x006BE9AEu, sub_006BE9AE); /* call 0x006BE9AE */

loc_003179A0: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x826F34);
    MEM32(esp + 0x14) = 3;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x003179C5u); RECOMP_ABI_CALL(0x006BB602u, sub_006BB602); /* call 0x006BB602 */

loc_003179C5: ;
    edx = MEM32(esp);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003179D2u); RECOMP_ABI_CALL(0x00454F70u, sub_00454F70); /* call 0x00454F70 */

loc_003179D2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003179F0
 * Original: 0x003179F0 - 0x00317A20 (48 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003179F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003179F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x826F40)); /* fmul dword ptr [0x826f40] */
    esi = ecx;
    PUSH32(esp, 0x00317A02u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00317A02: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00317A1Cu); RECOMP_ABI_CALL(0x006BB15Fu, sub_006BB15F); /* call 0x006BB15F */

loc_00317A1C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00317A30
 * Original: 0x00317A30 - 0x00317B12 (226 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317A30: ;
    eax = MEM32(0x8FC630);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00317A3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317A3Cu); } /* indirect call */
    }

loc_00317A3F: ;
    _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00317B10; /* jbe: below or equal (unsigned <=) */

loc_00317A4D: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x68736574);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317A5Du); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_00317A5D: ;
    ecx = MEM32(0x8F4510);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00317A71; /* jle: less or equal (signed <=) */

loc_00317A6A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317A71; /* jne: not equal / not zero */

loc_00317A6E: ;
    PUSH32(esp, ecx);
    goto loc_00317AA5;

loc_00317A71: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00317A86; /* jle: less or equal (signed <=) */

loc_00317A75: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317A86; /* jne: not equal / not zero */

loc_00317A7A: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x706F7274);
    PUSH32(esp, edx);
    goto loc_00317AAE;

loc_00317A86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00317A9B; /* jle: less or equal (signed <=) */

loc_00317A8A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317A9B; /* jne: not equal / not zero */

loc_00317A8F: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x706F7274);
    PUSH32(esp, eax);
    goto loc_00317AAE;

loc_00317A9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00317AB6; /* jle: less or equal (signed <=) */

loc_00317A9F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317AB6; /* jne: not equal / not zero */

loc_00317AA4: ;
    PUSH32(esp, ecx);

loc_00317AA5: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x706F7274);
    PUSH32(esp, ecx);

loc_00317AAE: ;
    PUSH32(esp, 0x00317AB3u); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_00317AB3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00317AB6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00317ABCu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00317ABC: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x68736574);
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 0x00317ACEu); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_00317ACE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317AEC; /* je: equal / zero */

loc_00317AD5: ;
    eax = MEM32(edi + 0x3C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317AEC; /* jne: not equal / not zero */

loc_00317ADF: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, eax);
    goto loc_00317AF7;

loc_00317AEC: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, ecx);

loc_00317AF7: ;
    PUSH32(esp, 0x00317AFCu); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_00317AFC: ;
    edx = MEM32(0x8FC630);
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00317B0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317B09u); } /* indirect call */
    }

loc_00317B0C: ;
    MEM32(esi + 0x30) = eax;
    POP32(esp, edi);

loc_00317B10: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317B50
 * Original: 0x00317B50 - 0x00317B84 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x68736574);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317B63u); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_00317B63: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317B6F; /* jne: not equal / not zero */

loc_00317B6A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317B6F: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x706F7274);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00317B7Fu); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_00317B7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317BA0
 * Original: 0x00317BA0 - 0x00317BBD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317BA0: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0x98;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00317BB0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317BB0; /* jne: not equal / not zero */

loc_00317BBA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317BD0
 * Original: 0x00317BD0 - 0x00317C76 (166 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317BD0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM16(esp + 0xA) = LO16(eax);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, 1);
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0xD) = LO8(eax);
    PUSH32(esp, 0x10);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    MEM16(esp + 0x18) = 2;
    MEM8(esp + 0x1C) = 0x18;
    PUSH32(esp, 0x00317C17u); RECOMP_ABI_CALL(0x00456DD0u, sub_00456DD0); /* call 0x00456DD0 */

loc_00317C17: ;
    ebx = ZX8(MEM8(esp + 0x2C));
    edx = ZX8(MEM8(esp + 0x2D));
    eax = ZX8(MEM8(esp + 0x2E));
    ecx = ZX8(MEM8(esp + 0x2F));
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(LO8(ebx));
    PUSH32(esp, edx);
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = ebx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ZX8(LO8(edx));
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    edx = esi + 0x98;
    PUSH32(esp, 0x826F10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00317C67u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00317C67: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00317CA0
 * Original: 0x00317CA0 - 0x00317D0B (107 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00317CA8u); RECOMP_ABI_CALL(0x00454800u, sub_00454800); /* call 0x00454800 */

loc_00317CA8: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317D09; /* jne: not equal / not zero */

loc_00317CAE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6F6E6C6E);
    PUSH32(esp, 0x00317CBCu); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_00317CBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317D09; /* je: equal / zero */

loc_00317CC3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x61646472);
    PUSH32(esp, 0x00317CD1u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_00317CD1: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = SX8(LO8(edx));
    edx = eax;
    PUSH32(esp, ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x24) = eax;
    ecx = SX8(LO8(edx));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x18) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, 0x826F10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317CFFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00317CFF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = 2;

loc_00317D09: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317D30
 * Original: 0x00317D30 - 0x00317D33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D30(void)
{

loc_00317D30: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317D40
 * Original: 0x00317D40 - 0x00317D44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D40(void)
{

loc_00317D40: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00317D50
 * Original: 0x00317D50 - 0x00317D53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D50(void)
{

loc_00317D50: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317D60
 * Original: 0x00317D60 - 0x00317D6A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317D60: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00317D70
 * Original: 0x00317D70 - 0x00317D95 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317D70: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317D8B; /* je: equal / zero */

loc_00317D77: ;
    ecx = MEM32(esp + 4);
    goto loc_00317D80;

    /* nop */

loc_00317D80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317D90; /* je: equal / zero */

loc_00317D84: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317D80; /* jne: not equal / not zero */

loc_00317D8B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00317D90: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317DA0
 * Original: 0x00317DA0 - 0x00317DA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317DA0(void)
{

loc_00317DA0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317DB0
 * Original: 0x00317DB0 - 0x00317DB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317DB0(void)
{

loc_00317DB0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00317DC0
 * Original: 0x00317DC0 - 0x00317DC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317DC0(void)
{

loc_00317DC0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317DD0
 * Original: 0x00317DD0 - 0x00317DD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317DD0(void)
{

loc_00317DD0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00317DE0
 * Original: 0x00317DE0 - 0x00317E05 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317DE0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317DFB; /* je: equal / zero */

loc_00317DE7: ;
    ecx = MEM32(esp + 4);
    goto loc_00317DF0;

    /* nop */

loc_00317DF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317E00; /* je: equal / zero */

loc_00317DF4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317DF0; /* jne: not equal / not zero */

loc_00317DFB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00317E00: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317E10
 * Original: 0x00317E10 - 0x00317E14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E10(void)
{

loc_00317E10: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00317E20
 * Original: 0x00317E20 - 0x00317E2B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317E20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00317E30
 * Original: 0x00317E30 - 0x00317E5B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317E30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317E53; /* je: equal / zero */

loc_00317E4B: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00317E53: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317E70
 * Original: 0x00317E70 - 0x00317E74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E70(void)
{

loc_00317E70: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00317E80
 * Original: 0x00317E80 - 0x00317E8B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317E80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00317E90
 * Original: 0x00317E90 - 0x00317E94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E90(void)
{

loc_00317E90: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00317EA0
 * Original: 0x00317EA0 - 0x00317EAB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317EA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00317EB0
 * Original: 0x00317EB0 - 0x00317EDB (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317EB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317ED3; /* je: equal / zero */

loc_00317ECB: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00317ED3: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317EF0
 * Original: 0x00317EF0 - 0x00317F44 (84 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, esi);
    MEM32(edi) = 0x826F60;
    PUSH32(esp, 0x826F44);
    if (CMP_B(_fa, _fb)) goto loc_00317F1B; /* jb: below (unsigned <) */

loc_00317F0E: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    goto loc_00317F23;

loc_00317F1B: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);

loc_00317F23: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00317F28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317F25u); } /* indirect call */
    }

loc_00317F28: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x00317F37u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00317F37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = esi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00317F60
 * Original: 0x00317F60 - 0x00317F64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317F60(void)
{

loc_00317F60: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00317F70
 * Original: 0x00317F70 - 0x00317F74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317F70(void)
{

loc_00317F70: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00317F80
 * Original: 0x00317F80 - 0x00317FC0 (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317F80: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    PUSH32(esp, edi);
    MEM32(ecx) = 0x826F60;
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317F97u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00317F97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00317FB5; /* jl: less (signed <) */

loc_00317FA2: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00317FB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317FAFu); } /* indirect call */
    }

loc_00317FB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317FB5: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00317FBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317FBAu); } /* indirect call */
    }

loc_00317FBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317FD0
 * Original: 0x00317FD0 - 0x00318004 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317FD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_00317FF5; /* jb: below (unsigned <) */

loc_00317FE3: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00317FF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317FF1u); } /* indirect call */
    }

loc_00317FF4: ;
    esp += 4; return; /* ret */

loc_00317FF5: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318003u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318000u); } /* indirect call */
    }

loc_00318003: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318020
 * Original: 0x00318020 - 0x0031805B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318020: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318032u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00318032: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00318050; /* jl: less (signed <) */

loc_0031803D: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031804Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031804Au); } /* indirect call */
    }

loc_0031804D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318050: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00318058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318055u); } /* indirect call */
    }

loc_00318058: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318070
 * Original: 0x00318070 - 0x003180A4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318070: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_00318095; /* jb: below (unsigned <) */

loc_00318083: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318094u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318091u); } /* indirect call */
    }

loc_00318094: ;
    esp += 4; return; /* ret */

loc_00318095: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003180A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003180A0u); } /* indirect call */
    }

loc_003180A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003180C0
 * Original: 0x003180C0 - 0x003180FB (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003180C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003180C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003180D2u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_003180D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_003180F0; /* jl: less (signed <) */

loc_003180DD: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003180EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003180EAu); } /* indirect call */
    }

loc_003180ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003180F0: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003180F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003180F5u); } /* indirect call */
    }

loc_003180F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318110
 * Original: 0x00318110 - 0x00318144 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318110: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_00318135; /* jb: below (unsigned <) */

loc_00318123: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318131u); } /* indirect call */
    }

loc_00318134: ;
    esp += 4; return; /* ret */

loc_00318135: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318143u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318140u); } /* indirect call */
    }

loc_00318143: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318160
 * Original: 0x00318160 - 0x0031819B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318160: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318172u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00318172: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00318190; /* jl: less (signed <) */

loc_0031817D: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031818Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031818Au); } /* indirect call */
    }

loc_0031818D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318190: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00318198u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318195u); } /* indirect call */
    }

loc_00318198: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003181B0
 * Original: 0x003181B0 - 0x003181E4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003181B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003181B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_003181D5; /* jb: below (unsigned <) */

loc_003181C3: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003181D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003181D1u); } /* indirect call */
    }

loc_003181D4: ;
    esp += 4; return; /* ret */

loc_003181D5: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003181E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003181E0u); } /* indirect call */
    }

loc_003181E3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318200
 * Original: 0x00318200 - 0x00318234 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318200: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_00318225; /* jb: below (unsigned <) */

loc_00318213: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318224u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318221u); } /* indirect call */
    }

loc_00318224: ;
    esp += 4; return; /* ret */

loc_00318225: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318233u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318230u); } /* indirect call */
    }

loc_00318233: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318250
 * Original: 0x00318250 - 0x0031829D (77 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318250: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00318258u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_00318258: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318297; /* je: equal / zero */

loc_0031825F: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031826Cu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031826C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031828E; /* jl: less (signed <) */

loc_00318277: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00318287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318284u); } /* indirect call */
    }

loc_00318287: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031828E: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00318296u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318293u); } /* indirect call */
    }

loc_00318296: ;
    POP32(esp, edi);

loc_00318297: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003182B0
 * Original: 0x003182B0 - 0x00318305 (85 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003182B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003182B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003182BF; /* je: equal / zero */

loc_003182B9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003182BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003182BDu); } /* indirect call */
    }

loc_003182BF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003182FF; /* je: equal / zero */

loc_003182C6: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003182D3u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_003182D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_003182F6; /* jl: less (signed <) */

loc_003182DE: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003182EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003182ECu); } /* indirect call */
    }

loc_003182EF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003182F6: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003182FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003182FBu); } /* indirect call */
    }

loc_003182FE: ;
    POP32(esp, edi);

loc_003182FF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318320
 * Original: 0x00318320 - 0x0031833F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318320: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x826DB0;
    if (TEST_Z(_fa, _fb)) goto loc_00318339; /* je: equal / zero */

loc_00318330: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318336u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00318336: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00318339: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318350
 * Original: 0x00318350 - 0x0031836F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318350: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x826DC8;
    if (TEST_Z(_fa, _fb)) goto loc_00318369; /* je: equal / zero */

loc_00318360: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318366u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00318366: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00318369: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318380
 * Original: 0x00318380 - 0x003183B4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318380: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_003183A5; /* jb: below (unsigned <) */

loc_00318393: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003183A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003183A1u); } /* indirect call */
    }

loc_003183A4: ;
    esp += 4; return; /* ret */

loc_003183A5: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003183B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003183B0u); } /* indirect call */
    }

loc_003183B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003183D0
 * Original: 0x003183D0 - 0x00318404 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003183D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003183D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_003183F5; /* jb: below (unsigned <) */

loc_003183E3: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003183F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003183F1u); } /* indirect call */
    }

loc_003183F4: ;
    esp += 4; return; /* ret */

loc_003183F5: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318403u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318400u); } /* indirect call */
    }

loc_00318403: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318420
 * Original: 0x00318420 - 0x0031845B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318420: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318432u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00318432: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00318450; /* jl: less (signed <) */

loc_0031843D: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031844Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031844Au); } /* indirect call */
    }

loc_0031844D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318450: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00318458u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318455u); } /* indirect call */
    }

loc_00318458: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318470
 * Original: 0x00318470 - 0x003184A4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318470: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_00318495; /* jb: below (unsigned <) */

loc_00318483: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318494u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318491u); } /* indirect call */
    }

loc_00318494: ;
    esp += 4; return; /* ret */

loc_00318495: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003184A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003184A0u); } /* indirect call */
    }

loc_003184A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003184C0
 * Original: 0x003184C0 - 0x003184FC (60 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003184C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003184C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x826E2C;
    if (CMP_EQ(_fa, _fb)) goto loc_003184DD; /* je: equal / zero */

loc_003184D3: ;
    MEM32(esi + 0xB4) = 0;

loc_003184DD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F0C50;
    if (TEST_Z(_fa, _fb)) goto loc_003184F6; /* je: equal / zero */

loc_003184EA: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003184F6u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_003184F6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318510
 * Original: 0x00318510 - 0x0031858C (124 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318510: ;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xFFFFFFFDu;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esi);
    MEM8(esp + 0xA) = 4;
    MEM16(esp + 8) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00318538u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318535u); } /* indirect call */
    }

loc_00318538: ;
    eax = MEM32(esp + 0x224);
    SET_LO8(ecx, LO8(eax));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x224);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edx, ZX8(LO8(ecx)));
    PUSH32(esp, eax);
    ecx = esp + 0x15;
    PUSH32(esp, ecx);
    MEM16(esp + 0x14) = LO16(edx);
    PUSH32(esp, 0x0031855Fu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031855F: ;
    edx = MEM32(0x8FC638);
    SET_LO8(eax, MEM8(edx + 8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318582; /* je: equal / zero */

loc_0031856F: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031857Fu); RECOMP_ABI_CALL(0x004578F0u, sub_004578F0); /* call 0x004578F0 */

loc_0031857F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00318582: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003185B0
 * Original: 0x003185B0 - 0x00318668 (184 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003185B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003185B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8FC62C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x80);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0xB) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003185DA; /* jne: not equal / not zero */

loc_003185CC: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318662; /* jne: not equal / not zero */

loc_003185D8: ;
    goto loc_0031861B;

loc_003185DA: ;
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003185F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003185F0u); } /* indirect call */
    }

loc_003185F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003185F8; /* je: equal / zero */

loc_003185F6: ;
    SET_LO8(ebx, 1);

loc_003185F8: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00318617; /* jle: less or equal (signed <=) */

loc_00318600: ;
    ecx = MEM32(esi + 0x248);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318617; /* je: equal / zero */

loc_0031860A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00318617u); RECOMP_ABI_CALL(0x0001452Au, sub_0001452A); /* call 0x0001452A */

loc_00318617: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031865E; /* je: equal / zero */

loc_0031861B: ;
    ecx = MEM32(esi + 0x248);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x244) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_0031863C; /* je: equal / zero */

loc_0031862F: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00318634u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318632u); } /* indirect call */
    }

loc_00318634: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318641; /* je: equal / zero */

loc_00318638: ;
    SET_LO8(ebx, 1);
    goto loc_00318645;

loc_0031863C: ;
    MEM8(esp + 0xB) = 1;

loc_00318641: ;
    SET_LO8(ebx, MEM8(esp + 0xB));

loc_00318645: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318656; /* je: equal / zero */

loc_0031864C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00318656u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318654u); } /* indirect call */
    }

loc_00318656: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0031865E: ;
    SET_LO8(eax, MEM8(esp + 0xB));

loc_00318662: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003186A0
 * Original: 0x003186A0 - 0x0031871B (123 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003186A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003186A0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0xD;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x8FC628);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x003186C5u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_003186C5: ;
    edx = 1;
    eax = esp + 0xC;
    MEM32(esi + 0x244) = edx;
    MEM8(esp + 0xC) = LO8(ebx);
    edi = eax + 1;
    goto loc_003186E0;

    /* nop */

loc_003186E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003186E0; /* jne: not equal / not zero */

loc_003186E7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00318705; /* jae: above or equal (unsigned >=) */

loc_003186EE: ;
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    SET_LO8(ebx, LO8(edx));
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003186FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003186FCu); } /* indirect call */
    }

loc_003186FF: ;
    MEM32(esi + 0x23C) = eax;

loc_00318705: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x00318710u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00318710: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00318740
 * Original: 0x00318740 - 0x0031879E (94 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318740: ;
    eax = MEM32(ecx + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318777; /* je: equal / zero */

loc_00318749: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318751; /* je: equal / zero */

loc_0031874E: ;
    MEM32(ecx + 0x20) = edx;

loc_00318751: ;
    MEM32(ecx + 0x244) = edx;
    MEM32(ecx + 0x1C) = edx;
    eax = MEM32(0x8FC638);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031879D; /* je: equal / zero */

loc_00318764: ;
    PUSH32(esp, 0x00318769u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00318769: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00318770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031876Du); } /* indirect call */
    }

loc_00318770: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00318777: ;
    eax = MEM32(0x8FC638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031879D; /* je: equal / zero */

loc_00318780: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031879D; /* jne: not equal / not zero */

loc_00318785: ;
    _fa = (uint32_t)(MEM8(eax + 9)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 9), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031879D; /* je: equal / zero */

loc_0031878A: ;
    PUSH32(esp, 0x0031878Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0031878F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00318796u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318793u); } /* indirect call */
    }

loc_00318796: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_0031879D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003187C0
 * Original: 0x003187C0 - 0x0031889B (219 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003187C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003187C0: ;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x003187D5u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_003187D5: ;
    eax = MEM32(esi + 0x244);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003187E7; /* je: equal / zero */

loc_003187E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318840; /* jne: not equal / not zero */

loc_003187E7: ;
    eax = 0xFFFFFFFEu;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(0x8FC638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0xE) = 4;
    MEM16(esp + 0xC) = 2;
    MEM8(esp + 0x11) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00318814; /* je: equal / zero */

loc_0031880E: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esp + 0x11) = LO8(ecx);

loc_00318814: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318845; /* je: equal / zero */

loc_00318819: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031882Au); RECOMP_ABI_CALL(0x004578F0u, sub_004578F0); /* call 0x004578F0 */

loc_0031882A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x14;

loc_00318832: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00318839u); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_00318839: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00318832; /* jne: not equal / not zero */

loc_0031883F: ;
    POP32(esp, edi);

loc_00318840: ;
    eax = MEM32(0x8FC638);

loc_00318845: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318866; /* je: equal / zero */

loc_0031884A: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318852; /* je: equal / zero */

loc_0031884F: ;
    MEM32(esi + 0x20) = ebx;

loc_00318852: ;
    MEM32(esi + 0x244) = ebx;
    MEM32(esi + 0x1C) = ebx;
    ecx = MEM32(0x8FC638);
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), LO8(ebx) (8-bit) */
    goto loc_00318872;

loc_00318866: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318887; /* je: equal / zero */

loc_0031886A: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318887; /* jne: not equal / not zero */

loc_0031886F: ;
    _fa = (uint32_t)(MEM8(eax + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 9), LO8(ebx) (8-bit) */

loc_00318872: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00318887; /* je: equal / zero */

loc_00318874: ;
    PUSH32(esp, 0x00318879u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00318879: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00318880u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031887Du); } /* indirect call */
    }

loc_00318880: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00318887u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318884u); } /* indirect call */
    }

loc_00318887: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x00318892u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00318892: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003188E0
 * Original: 0x003188E0 - 0x0031897D (157 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003188E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003188E0: ;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x003188F7u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_003188F7: ;
    _fa = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x244), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318965; /* jne: not equal / not zero */

loc_00318900: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00318907u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318904u); } /* indirect call */
    }

loc_00318907: ;
    ecx = MEM32(esp + 0x228);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, ZX8(LO8(edx)));
    MEM16(esp + 0xC) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x228);
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    edx = esp + 0x19;
    PUSH32(esp, edx);
    MEM8(esp + 0x1A) = 4;
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, 0x0031893Eu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031893E: ;
    eax = MEM32(0x8FC638);
    SET_LO8(ecx, MEM8(eax + 8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318965; /* je: equal / zero */

loc_0031894D: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031895Du); RECOMP_ABI_CALL(0x004578F0u, sub_004578F0); /* call 0x004578F0 */

loc_0031895D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */

loc_00318965: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x00318970u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00318970: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003189B0
 * Original: 0x003189B0 - 0x003189F8 (72 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003189B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003189B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003189F2; /* je: equal / zero */

loc_003189BA: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003189C7u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_003189C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_003189E9; /* jl: less (signed <) */

loc_003189D2: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003189E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003189DFu); } /* indirect call */
    }

loc_003189E2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003189E9: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003189F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003189EEu); } /* indirect call */
    }

loc_003189F1: ;
    POP32(esp, edi);

loc_003189F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318A10
 * Original: 0x00318A10 - 0x00318A33 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318A10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x00318A1Au); RECOMP_ABI_CALL(0x00457E80u, sub_00457E80); /* call 0x00457E80 */

loc_00318A1A: ;
    MEM32(esi + 0x3C) = eax;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM8(esi + 8) = LO8(eax);
    MEM8(esi + 9) = LO8(eax);
    PUSH32(esp, 0x00318A2Fu); RECOMP_ABI_CALL(0x0001E692u, sub_0001E692); /* call 0x0001E692 */

loc_00318A2F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318A40
 * Original: 0x00318A40 - 0x00318AC4 (132 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318A40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00318A4Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00318A4Au); } /* indirect call */
    }

loc_00318A4D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00318A6C; /* jle: less or equal (signed <=) */

loc_00318A54: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = ecx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00318A61u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00318A5Eu); } /* indirect call */
    }

loc_00318A61: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00318A6C: ;
    if (CMP_L(_fas, _fbs)) goto loc_00318A87; /* jl: less (signed <) */

loc_00318A6E: ;
    edx = MEM32(0x8FC630);
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00318A7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318A78u); } /* indirect call */
    }

loc_00318A7B: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00318ABF; /* jbe: below or equal (unsigned <=) */

loc_00318A87: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x18) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_00318AAC; /* jae: above or equal (unsigned >=) */

loc_00318A97: ;
    eax = MEM32(esi + 0x48);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 0x44) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00318AA1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00318A9Eu); } /* indirect call */
    }

loc_00318AA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00318AAC: ;
    eax = MEM32(esi + 0x48);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi) = 3;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00318AB9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00318AB6u); } /* indirect call */
    }

loc_00318AB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;

loc_00318ABF: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00318AF0
 * Original: 0x00318AF0 - 0x00318B25 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00318B06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318B03u); } /* indirect call */
    }

loc_00318B06: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(edi) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318B1Cu); RECOMP_ABI_CALL(0x00457F70u, sub_00457F70); /* call 0x00457F70 */

loc_00318B1C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318B40
 * Original: 0x00318B40 - 0x00318B97 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318B40: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x00318B6Eu); RECOMP_ABI_CALL(0x00457FB0u, sub_00457FB0); /* call 0x00457FB0 */

loc_00318B6E: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318B90; /* jne: not equal / not zero */

loc_00318B7C: ;
    edx = ZX16(MEM16(esp + 0x52));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318B90; /* jne: not equal / not zero */

loc_00318B86: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00318B90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00318BB0
 * Original: 0x00318BB0 - 0x00318C1A (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318BB0: ;
    eax = MEM32(0x8FC630);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00318BBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318BBCu); } /* indirect call */
    }

loc_00318BBF: ;
    _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00318C18; /* jbe: below or equal (unsigned <=) */

loc_00318BC9: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00318BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318BD2u); } /* indirect call */
    }

loc_00318BD5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6F6E6C6E);
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x00318BE6u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_00318BE6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318C18; /* jne: not equal / not zero */

loc_00318BED: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x636F6E6E);
    PUSH32(esp, 0x00318BF9u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_00318BF9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D647570) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D647570 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318C0B; /* jne: not equal / not zero */

loc_00318C03: ;
    MEM32(esi) = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318C0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D6C7374) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D6C7374 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318C18; /* jne: not equal / not zero */

loc_00318C12: ;
    MEM32(esi) = 4;

loc_00318C18: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318C40
 * Original: 0x00318C40 - 0x00318C71 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318C40: ;
    eax = MEM32(0x8FC63C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318C70; /* jne: not equal / not zero */

loc_00318C49: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00318C52u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00318C52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318C66; /* je: equal / zero */

loc_00318C59: ;
    ecx = eax;
    PUSH32(esp, 0x00318C60u); RECOMP_ABI_CALL(0x00012B5Du, sub_00012B5D); /* call 0x00012B5D */

loc_00318C60: ;
    MEM32(0x8FC63C) = eax;
    esp += 4; return; /* ret */

loc_00318C66: ;
    MEM32(0x8FC63C) = 0;

loc_00318C70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318C80
 * Original: 0x00318C80 - 0x00318CA6 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318C90; /* je: equal / zero */

loc_00318C8A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00318C90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318C8Eu); } /* indirect call */
    }

loc_00318C90: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318CA0; /* je: equal / zero */

loc_00318C97: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318C9Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00318C9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00318CA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318CB0
 * Original: 0x00318CB0 - 0x00318CF0 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318CB0: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00318CC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318CC4u); } /* indirect call */
    }

loc_00318CC7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318CE4; /* je: equal / zero */

loc_00318CCD: ;
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x00318CD6u); RECOMP_ABI_CALL(0x0001B6D1u, sub_0001B6D1); /* call 0x0001B6D1 */

loc_00318CD6: ;
    MEM32(esi) = 0x826E00;
    MEM32(0x8FC640) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318CE4: ;
    MEM32(0x8FC640) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318D00
 * Original: 0x00318D00 - 0x00318D27 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x826E00;
    PUSH32(esp, 0x00318D0Eu); RECOMP_ABI_CALL(0x0001AD58u, sub_0001AD58); /* call 0x0001AD58 */

loc_00318D0E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318D21; /* je: equal / zero */

loc_00318D15: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318D21u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_00318D21: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318D30
 * Original: 0x00318D30 - 0x00318D46 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318D30: ;
    eax = MEM32(0x8FC630);
    edx = MEM32(eax);
    eax = MEM32(edx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 4)); }
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318D50
 * Original: 0x00318D50 - 0x00318DD8 (136 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318D50: ;
    eax = MEM32(0x8FC630);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00318D5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318D5Cu); } /* indirect call */
    }

loc_00318D5F: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00318DD6; /* jb: below (unsigned <) */

loc_00318D6B: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00318D78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318D75u); } /* indirect call */
    }

loc_00318D78: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00318D87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318D84u); } /* indirect call */
    }

loc_00318D87: ;
    edi = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00318DD5; /* je: equal / zero */

loc_00318D93: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00318DC9; /* ja: above (unsigned >) */

loc_00318DA1: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00318DB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318DB1u); } /* indirect call */
    }

loc_00318DB4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318DC9; /* je: equal / zero */

loc_00318DBB: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318DC9; /* je: equal / zero */

loc_00318DC2: ;
    ecx = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00318DA1; /* jbe: below or equal (unsigned <=) */

loc_00318DC9: ;
    edx = MEM32(esi + 8);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00318D93; /* jne: not equal / not zero */

loc_00318DD5: ;
    POP32(esp, edi);

loc_00318DD6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318E00
 * Original: 0x00318E00 - 0x00318E97 (151 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00318E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318E15u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00318E15: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0x1F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = edx + 0x23C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x21C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318E49u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00318E49: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00318E64; /* jne: not equal / not zero */

loc_00318E56: ;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    goto loc_00318E70;

loc_00318E64: ;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;

loc_00318E70: ;
    edx = MEM32(0x8FC630);
    MEM32(0x8FC620) = 4;
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00318E87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318E84u); } /* indirect call */
    }

loc_00318E87: ;
    MEM32(esi + 0xA8) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00318EC0
 * Original: 0x00318EC0 - 0x00318F02 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00318EC0: ;
    eax = MEM32(0x8FC630);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00318ED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318ECDu); } /* indirect call */
    }

loc_00318ED0: ;
    esi = eax;
    PUSH32(esp, 0x00318ED7u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00318ED7: ;
    ecx = MEM32(0x8FC630);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x410));
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(MEM32(edi + 0xA8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(MEM32(edi + 0xA8)));
    esi = esi - MEM32(edi + 0xA8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318F20
 * Original: 0x00318F20 - 0x00318FAD (141 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318F20: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x29;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x6C);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esi + 0x1C);
    MEM32(eax + ecx * 4) = 1;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    MEM8(esp + 8) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 9) = edx;
    MEM32(esp + 0xD) = edx;
    MEM32(esp + 0x11) = edx;
    MEM32(esp + 0x15) = edx;
    MEM32(esp + 0x19) = edx;
    MEM32(esp + 0x1D) = edx;
    MEM32(esp + 0x21) = edx;
    PUSH32(esp, eax);
    MEM16(esp + 0x29) = LO16(edx);
    PUSH32(esp, ecx);
    MEM8(esp + 0x2F) = LO8(edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, 0x826F74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318F92u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00318F92: ;
    ecx = MEM32(0x8FC630);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00318FA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318F9Fu); } /* indirect call */
    }

loc_00318FA2: ;
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318FD0
 * Original: 0x00318FD0 - 0x00318FDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318FD0: ;
    MEM32(ecx) = 0x826E3C;
    g_seh_ebp = ebp; sub_00022B7F(); return; /* tail jmp 0x00022B7F */

}

/**
 * sub_00318FE0
 * Original: 0x00318FE0 - 0x00318FE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318FE0: ;
    g_seh_ebp = ebp; sub_00022E90(); return; /* tail jmp 0x00022E90 */

}

/**
 * sub_00318FF0
 * Original: 0x00318FF0 - 0x0031900F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318FF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x826E54;
    if (TEST_Z(_fa, _fb)) goto loc_00319009; /* je: equal / zero */

loc_00319000: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319006u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00319006: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00319009: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319020
 * Original: 0x00319020 - 0x0031915C (316 bytes, 107 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319020: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x138);
    esi = MEM32(ecx + 4);
    ecx = MEM32(edi + 0x38);
    edx = MEM32(ecx);
    eax = esp + 0x34;
    MEM32(esp + 0x14) = 0x100;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00319056u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319053u); } /* indirect call */
    }

loc_00319056: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x44);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031907F; /* jne: not equal / not zero */

loc_00319075: ;
    ecx = MEM32(0x8C42C4);
    MEM32(esp + 0x28) = ecx;

loc_0031907F: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC8 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, 5);
    PUSH32(esp, 0x8C42C8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x003190ADu); RECOMP_ABI_CALL(0x0002FF78u, sub_0002FF78); /* call 0x0002FF78 */

loc_003190AD: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC8 (32-bit) */
    ebx = MEM32(esp + 0x1C);
    if (CMP_LE(_fas, _fbs)) goto loc_003190DC; /* jle: less or equal (signed <=) */

loc_003190BC: ;
    MEM32(esp + 0x10) = esi;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = ebx + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003190D4u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003190D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003190E0;

loc_003190DC: ;
    esi = MEM32(esp + 0x18);

loc_003190E0: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx) = 0;
    ecx = MEM32(edi + 0x38);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    ebp = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003190F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003190F2u); } /* indirect call */
    }

loc_003190F5: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esp + ebp + 0x39;
    ebp = MEM32(esp + 0x13C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0031910Cu); RECOMP_ABI_CALL(0x000239CBu, sub_000239CB); /* call 0x000239CB */

loc_0031910C: ;
    eax = MEM32(esp + 0x10);
    MEM8(ebx) = LO8(eax);
    ecx = MEM32(edi + 0x38);
    edx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00319122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031911Fu); } /* indirect call */
    }

loc_00319122: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031914D; /* je: equal / zero */

loc_00319126: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00319132u); RECOMP_ABI_CALL(0x00022E90u, sub_00022E90); /* call 0x00022E90 */

loc_00319132: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031913E; /* jne: not equal / not zero */

loc_00319136: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0031913Eu); RECOMP_ABI_CALL(0x00019FCAu, sub_00019FCA); /* call 0x00019FCA */

loc_0031913E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0031914D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003191B0
 * Original: 0x003191B0 - 0x003191CA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003191B0(void)
{

loc_003191B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003191C0u); RECOMP_ABI_CALL(0x00032476u, sub_00032476); /* call 0x00032476 */

loc_003191C0: ;
    ecx = esi + 0x20;
    MEM32(eax + 0x10) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003191D0
 * Original: 0x003191D0 - 0x00319298 (200 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003191D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003191D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    ebx = 4;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003191F0u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003191F0: ;
    edi = MEM32(esi + 4);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;
    edi = MEM32(esp + 0x24);
    MEM32(edi + 0x44) = edx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00319217u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00319217: ;
    ebp = MEM32(esi + 4);
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ebp;
    MEM32(edi + 0x48) = edx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031923Au); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031923A: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(edi + 0x4C) = edx;
    eax = MEM32(esi + 8);
    ebp = MEM32(esi + 4);
    ecx = eax + ebp;
    eax = ecx;
    ebx = eax + 1;
    /* nop */

loc_00319260: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319260; /* jne: not equal / not zero */

loc_00319267: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = eax + ebp + 1;
    MEM32(esi + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0031927F; /* jne: not equal / not zero */

loc_00319274: ;
    MEM8(edi + 4) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0031927F: ;
    edx = edi + 4;
    eax = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00319286: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319286; /* jne: not equal / not zero */

loc_00319290: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003192D0
 * Original: 0x003192D0 - 0x003192D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003192D0(void)
{

loc_003192D0: ;
    eax = ecx;
    MEM32(eax) = 0x826F80;
    esp += 4; return; /* ret */

}

/**
 * sub_003192E0
 * Original: 0x003192E0 - 0x003192E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003192E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003192E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003192F0
 * Original: 0x003192F0 - 0x00319312 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003192F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003192F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x826E88;
    if (TEST_Z(_fa, _fb)) goto loc_0031930C; /* je: equal / zero */

loc_00319300: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031930Cu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031930C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319320
 * Original: 0x00319320 - 0x003193F6 (214 bytes, 75 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319320: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x28) = eax;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = 0x826FB0;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_00319384; /* jb: below (unsigned <) */

loc_00319376: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_0031938D;

loc_00319384: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031938D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00319392u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031938Fu); } /* indirect call */
    }

loc_00319392: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031939D; /* je: equal / zero */

loc_00319396: ;
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031939F;

loc_0031939D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031939F: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x28);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826F94);
    if (CMP_B(_fa, _fb)) goto loc_003193C4; /* jb: below (unsigned <) */

loc_003193B6: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_003193CD;

loc_003193C4: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_003193CD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003193D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003193CFu); } /* indirect call */
    }

loc_003193D2: ;
    ecx = MEM32(esi + 0x28);
    MEM32(esi + 0x20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003193EE; /* jle: less or equal (signed <=) */

loc_003193DE: ;
    edi = edi;

loc_003193E0: ;
    ecx = MEM32(esi + 0x20);
    MEM32(ecx + eax * 4) = ebx;
    ecx = MEM32(esi + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003193E0; /* jl: less (signed <) */

loc_003193EE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00319430
 * Original: 0x00319430 - 0x00319464 (52 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319430: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00319451; /* je: equal / zero */

loc_0031943B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031945E; /* je: equal / zero */

loc_00319442: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319448u); RECOMP_ABI_CALL(0x00033C3Bu, sub_00033C3B); /* call 0x00033C3B */

loc_00319448: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00319451: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031945E; /* je: equal / zero */

loc_00319455: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031945Bu); RECOMP_ABI_CALL(0x0001F583u, sub_0001F583); /* call 0x0001F583 */

loc_0031945B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031945E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319480
 * Original: 0x00319480 - 0x0031954B (203 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319480: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x826FB0;
    if (CMP_EQ(_fa, _fb)) goto loc_0031949C; /* je: equal / zero */

loc_00319490: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00319499u); RECOMP_ABI_CALL(0x00033C3Bu, sub_00033C3B); /* call 0x00033C3B */

loc_00319499: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031949C: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003194C0; /* jle: less or equal (signed <=) */

loc_003194A7: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003194B8; /* je: equal / zero */

loc_003194B1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003194B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003194B5u); } /* indirect call */
    }

loc_003194B8: ;
    eax = MEM32(esi + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003194A7; /* jl: less (signed <) */

loc_003194C0: ;
    edi = MEM32(esi + 0x20);
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003194CFu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_003194CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_003194EC; /* jl: less (signed <) */

loc_003194DA: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003194EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003194E7u); } /* indirect call */
    }

loc_003194EA: ;
    goto loc_003194F4;

loc_003194EC: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003194F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003194F1u); } /* indirect call */
    }

loc_003194F4: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031952D; /* je: equal / zero */

loc_003194FB: ;
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319507u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00319507: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00319525; /* jl: less (signed <) */

loc_00319512: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00319523u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319520u); } /* indirect call */
    }

loc_00319523: ;
    goto loc_0031952D;

loc_00319525: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031952Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031952Au); } /* indirect call */
    }

loc_0031952D: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00319535u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319532u); } /* indirect call */
    }

loc_00319535: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00319549; /* je: equal / zero */

loc_0031953B: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319549; /* je: equal / zero */

loc_00319542: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00319549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319546u); } /* indirect call */
    }

loc_00319549: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00319580
 * Original: 0x00319580 - 0x003196F9 (377 bytes, 132 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031958Fu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031958F: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF9Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFF9Du (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003195AA; /* jne: not equal / not zero */

loc_00319595: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x003195A0u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_003195A0: ;
    eax = 7;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_003195AA: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003195C6; /* jne: not equal / not zero */

loc_003195B1: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x003195BCu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_003195BC: ;
    eax = 6;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_003195C6: ;
    eax = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x18)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x18))); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003195EF; /* jne: not equal / not zero */

loc_003195D3: ;
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x003195E5u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_003195E5: ;
    eax = 3;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_003195EF: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031960Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031960Au); } /* indirect call */
    }

loc_0031960C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031964D; /* je: equal / zero */

loc_00319612: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319632; /* jne: not equal / not zero */

loc_00319617: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x30) = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x00319629u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00319629: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_00319632: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319639; /* jne: not equal / not zero */

loc_00319637: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00319639: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x00319644u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00319644: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_0031964D: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(esi + 4);
    MEM32(edx + eax) = ecx;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(esp + 0xC);
    MEM32(edx + eax + 0x10) = ecx;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(esp + 0x18);
    MEM32(edx + eax + 8) = ecx;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(esp + 0x14);
    MEM32(edx + eax + 4) = ecx;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM32(edx + eax + 0x14) = ebx;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + edx + 0xC) = eax;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    MEM32(ecx + edx + 0x18) = 0;
    eax = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x18)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x18))); }
    eax = MEM32(esi + 0x24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003196E5; /* jle: less or equal (signed <=) */

loc_003196D2: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x003196DDu); RECOMP_ABI_CALL(0x0001E4C1u, sub_0001E4C1); /* call 0x0001E4C1 */

loc_003196DD: ;
    eax = MEM32(esi + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003196D2; /* jl: less (signed <) */

loc_003196E5: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x003196F0u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_003196F0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00319760
 * Original: 0x00319760 - 0x003197FB (155 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319760: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031977E; /* je: equal / zero */

loc_00319771: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00319779u); RECOMP_ABI_CALL(0x0001742Du, sub_0001742D); /* call 0x0001742D */

loc_00319779: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319771; /* jne: not equal / not zero */

loc_0031977E: ;
    eax = MEM32(esi + 0x24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003197D8; /* jle: less or equal (signed <=) */

loc_00319787: ;
    eax = MEM32(esi + 0x20);
    /* nop */

loc_00319790: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003197A1; /* je: equal / zero */

loc_00319794: ;
    ecx = MEM32(esi + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319790; /* jl: less (signed <) */

loc_0031979F: ;
    goto loc_003197D8;

loc_003197A1: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003197AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003197A7u); } /* indirect call */
    }

loc_003197AA: ;
    ecx = MEM32(esi + 0x24);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003197C7; /* jge: greater or equal (signed >=) */

loc_003197B2: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + edi * 4 + 4);
    eax = edx + edi * 4;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003197B2; /* jl: less (signed <) */

loc_003197C7: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = eax;
    MEM32(ecx + eax * 4) = 0;

loc_003197D8: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF9Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFF9Du (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003197F5; /* jne: not equal / not zero */

loc_003197DE: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003197F5; /* jne: not equal / not zero */

loc_003197E5: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003197F5; /* jne: not equal / not zero */

loc_003197EC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003197F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003197F2u); } /* indirect call */
    }

loc_003197F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319830
 * Original: 0x00319830 - 0x0031988E (94 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031986E; /* je: equal / zero */

loc_0031983B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319848u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00319848: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00319865; /* jl: less (signed <) */

loc_00319853: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00319863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319860u); } /* indirect call */
    }

loc_00319863: ;
    goto loc_0031986D;

loc_00319865: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031986Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031986Au); } /* indirect call */
    }

loc_0031986D: ;
    POP32(esp, ebx);

loc_0031986E: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF9Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0xFFFFFF9Du (32-bit) */
    MEM32(edi + 0x2C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0031988B; /* jne: not equal / not zero */

loc_0031987B: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031988B; /* jne: not equal / not zero */

loc_00319882: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031988Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319888u); } /* indirect call */
    }

loc_0031988B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003198B0
 * Original: 0x003198B0 - 0x003198DD (45 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003198B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003198B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    edx = MEM32(eax + 0x14);
    ebx = MEM32(eax + 0xC);
    ebp = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003198D6u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_003198D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003198F0
 * Original: 0x003198F0 - 0x00319995 (165 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003198F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003198F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x10) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x826FBC;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_00319936; /* jb: below (unsigned <) */

loc_00319928: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_0031993F;

loc_00319936: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031993F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00319944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319941u); } /* indirect call */
    }

loc_00319944: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031998E; /* jle: less or equal (signed <=) */

loc_00319950: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_00319955: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_00319972; /* jb: below (unsigned <) */

loc_00319965: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    goto loc_0031997A;

loc_00319972: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);

loc_0031997A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031997Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031997Cu); } /* indirect call */
    }

loc_0031997F: ;
    ecx = MEM32(esi + 4);
    MEM32(ecx + ebx * 4) = eax;
    eax = MEM32(esi + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319955; /* jl: less (signed <) */

loc_0031998D: ;
    POP32(esp, edi);

loc_0031998E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003199C0
 * Original: 0x003199C0 - 0x003199C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003199C0(void)
{

loc_003199C0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003199D0
 * Original: 0x003199D0 - 0x00319A78 (168 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003199D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003199D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x826FBC;
    if (CMP_LE(_fas, _fbs)) goto loc_00319A31; /* jle: less or equal (signed <=) */

loc_003199E4: ;
    PUSH32(esp, ebp);
    goto loc_003199F0;

    /* nop */
    edi = edi;

loc_003199F0: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + ebx * 4);
    ebp = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319A02u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00319A02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00319A20; /* jl: less (signed <) */

loc_00319A0D: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00319A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319A1Bu); } /* indirect call */
    }

loc_00319A1E: ;
    goto loc_00319A28;

loc_00319A20: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00319A28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319A25u); } /* indirect call */
    }

loc_00319A28: ;
    eax = MEM32(esi + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003199F0; /* jl: less (signed <) */

loc_00319A30: ;
    POP32(esp, ebp);

loc_00319A31: ;
    edi = MEM32(esi + 4);
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319A40u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00319A40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00319A66; /* jl: less (signed <) */

loc_00319A4B: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00319A5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319A59u); } /* indirect call */
    }

loc_00319A5C: ;
    POP32(esp, edi);
    MEM32(esi) = 0x826E88;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00319A66: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00319A6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319A6Bu); } /* indirect call */
    }

loc_00319A6E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x826E88;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00319AB0
 * Original: 0x00319AB0 - 0x00319B16 (102 bytes, 33 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319AB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00319B06; /* jle: less or equal (signed <=) */

loc_00319AB9: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826FD0);
    if (CMP_B(_fa, _fb)) goto loc_00319ADD; /* jb: below (unsigned <) */

loc_00319ACF: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_00319AE6;

loc_00319ADD: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_00319AE6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00319AEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319AE8u); } /* indirect call */
    }

loc_00319AEB: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x00319AFDu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00319AFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00319B06: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00319B30
 * Original: 0x00319B30 - 0x00319B73 (67 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319B30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319B6F; /* je: equal / zero */

loc_00319B39: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319B46u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00319B46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00319B66; /* jl: less (signed <) */

loc_00319B51: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00319B61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319B5Eu); } /* indirect call */
    }

loc_00319B61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00319B66: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00319B6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319B6Bu); } /* indirect call */
    }

loc_00319B6E: ;
    POP32(esp, edi);

loc_00319B6F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319B90
 * Original: 0x00319B90 - 0x00319C1D (141 bytes, 58 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00319B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319B90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00319C0B; /* jle: less or equal (signed <=) */

loc_00319B9F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_00319BC1; /* jne: not equal / not zero */

loc_00319BAB: ;
    PUSH32(esp, 0x826FFC);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00319BBBu); RECOMP_ABI_CALL(0x000144ADu, sub_000144AD); /* call 0x000144AD */

loc_00319BBB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;

loc_00319BC1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00319BD5u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00319BD5: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 8) = ecx;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00319C00; /* jne: not equal / not zero */

loc_00319BE7: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00319C00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00319C0B: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    MEM32(ecx) = 0;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00319C40
 * Original: 0x00319C40 - 0x00319C83 (67 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319C40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319C7F; /* je: equal / zero */

loc_00319C49: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319C56u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00319C56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00319C76; /* jl: less (signed <) */

loc_00319C61: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00319C71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319C6Eu); } /* indirect call */
    }

loc_00319C71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00319C76: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00319C7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319C7Bu); } /* indirect call */
    }

loc_00319C7E: ;
    POP32(esp, edi);

loc_00319C7F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319CA0
 * Original: 0x00319CA0 - 0x00319D68 (200 bytes, 64 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319CA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x827030);
    if (CMP_B(_fa, _fb)) goto loc_00319CDF; /* jb: below (unsigned <) */

loc_00319CD1: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE0);
    goto loc_00319CE8;

loc_00319CDF: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_00319CE8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00319CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319CEAu); } /* indirect call */
    }

loc_00319CED: ;
    ecx = MEM32(esi + 0x10);
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00319D12; /* jle: less or equal (signed <=) */

loc_00319CF9: ;
    /* nop */

loc_00319D00: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + eax * 8) = 0;
    ecx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319D00; /* jl: less (signed <) */

loc_00319D12: ;
    eax = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82701C);
    if (CMP_B(_fa, _fb)) goto loc_00319D35; /* jb: below (unsigned <) */

loc_00319D27: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE0);
    goto loc_00319D3E;

loc_00319D35: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_00319D3E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00319D43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319D40u); } /* indirect call */
    }

loc_00319D43: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00319D62; /* jle: less or equal (signed <=) */

loc_00319D4F: ;
    /* nop */

loc_00319D50: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319D50; /* jl: less (signed <) */

loc_00319D62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00319DA0
 * Original: 0x00319DA0 - 0x00319E80 (224 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00319DEA; /* jle: less or equal (signed <=) */

loc_00319DAD: ;
    /* nop */

loc_00319DB0: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + edi * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319DE2; /* je: equal / zero */

loc_00319DBA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00319DC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319DBEu); } /* indirect call */
    }

loc_00319DC1: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + edi * 8 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00319DCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319DCAu); } /* indirect call */
    }

loc_00319DCD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319DE2; /* je: equal / zero */

loc_00319DD1: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + edi * 8 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319DE2; /* je: equal / zero */

loc_00319DDC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00319DE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319DE0u); } /* indirect call */
    }

loc_00319DE2: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319DB0; /* jl: less (signed <) */

loc_00319DEA: ;
    edi = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319DFAu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00319DFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00319E17; /* jl: less (signed <) */

loc_00319E05: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00319E15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319E12u); } /* indirect call */
    }

loc_00319E15: ;
    goto loc_00319E1F;

loc_00319E17: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00319E1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319E1Cu); } /* indirect call */
    }

loc_00319E1F: ;
    eax = MEM32(esi + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00319E48; /* jle: less or equal (signed <=) */

loc_00319E29: ;
    /* nop */

loc_00319E30: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319E40; /* je: equal / zero */

loc_00319E3A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00319E40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319E3Eu); } /* indirect call */
    }

loc_00319E40: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319E30; /* jl: less (signed <) */

loc_00319E48: ;
    esi = MEM32(esi + 8);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319E57u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_00319E57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00319E75; /* jl: less (signed <) */

loc_00319E62: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00319E72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319E6Fu); } /* indirect call */
    }

loc_00319E72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00319E75: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00319E7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319E7Au); } /* indirect call */
    }

loc_00319E7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00319EC0
 * Original: 0x00319EC0 - 0x0031A00E (334 bytes, 130 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319EC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319ED1u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00319ED1: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00319EE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319EE4u); } /* indirect call */
    }

loc_00319EE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00319F0C; /* je: equal / zero */

loc_00319EEF: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00319F0Au); RECOMP_ABI_CALL(0x0001DBB1u, sub_0001DBB1); /* call 0x0001DBB1 */

loc_00319F0A: ;
    goto loc_00319F0E;

loc_00319F0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00319F0E: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + edi * 8) = eax;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x24);
    MEM32(edx + edi * 8 + 4) = eax;
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x14);
    eax = MEM32(0x8FC63C);
    ebp = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 0xC);
    ebx = MEM32(edx + edi * 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00319F40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319F3Du); } /* indirect call */
    }

loc_00319F40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319F4B; /* je: equal / zero */

loc_00319F44: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebp;
    goto loc_00319F4D;

loc_00319F4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00319F4D: ;
    MEM32(ebx + 0x2C) = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319F6F; /* je: equal / zero */

loc_00319F57: ;
    ecx = eax;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(ecx + 0x14);
    edx = MEM32(ecx);
    eax = eax + edi * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00319F6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319F6Cu); } /* indirect call */
    }

loc_00319F6F: ;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00319FF6; /* jle: less or equal (signed <=) */

loc_00319F7C: ;
    /* nop */

loc_00319F80: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(ecx + ebp * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebp * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319FEA; /* je: equal / zero */

loc_00319F89: ;
    edx = MEM32(esi);
    edx = MEM32(edx + 0x28);
    eax = ecx;
    ecx = MEM32(eax + ebp * 4);
    eax = MEM32(esi + 0x14);
    ebx = MEM32(ecx);
    eax = eax + edi * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 4); PUSH32(esp, 0x00319FA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319FA3u); } /* indirect call */
    }

loc_00319FA6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319FEA; /* je: equal / zero */

loc_00319FAC: ;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00319FE6; /* jle: less or equal (signed <=) */

loc_00319FB5: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319FDA; /* je: equal / zero */

loc_00319FBF: ;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319FDA; /* je: equal / zero */

loc_00319FC9: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00319FD4u); RECOMP_ABI_CALL(0x00032476u, sub_00032476); /* call 0x00032476 */

loc_00319FD4: ;
    ecx = edi + 0x20;
    MEM32(eax + 0x10) = ecx;

loc_00319FDA: ;
    eax = MEM32(esi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319FB5; /* jl: less (signed <) */

loc_00319FE2: ;
    edi = MEM32(esp + 0x14);

loc_00319FE6: ;
    ebp = MEM32(esp + 0x20);

loc_00319FEA: ;
    eax = MEM32(esi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00319F80; /* jl: less (signed <) */

loc_00319FF6: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031A001u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031A001: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + edi * 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0031A070
 * Original: 0x0031A070 - 0x0031A0A7 (55 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A070: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031A07Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031A07E: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0031A091u); RECOMP_ABI_CALL(0x0001742Du, sub_0001742D); /* call 0x0001742D */

loc_0031A091: ;
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0031A09Bu); RECOMP_ABI_CALL(0x0002A0AFu, sub_0002A0AF); /* call 0x0002A0AF */

loc_0031A09B: ;
    ecx = MEM32(0x8FC628);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_0031A0C0
 * Original: 0x0031A0C0 - 0x0031A175 (181 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A0C0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esi) = 0x827090;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0x827070);
    if (CMP_B(_fa, _fb)) goto loc_0031A105; /* jb: below (unsigned <) */

loc_0031A0F7: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE0);
    goto loc_0031A10E;

loc_0031A105: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031A10E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031A113u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A110u); } /* indirect call */
    }

loc_0031A113: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x827048);
    if (CMP_B(_fa, _fb)) goto loc_0031A139; /* jb: below (unsigned <) */

loc_0031A12B: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_0031A142;

loc_0031A139: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031A142: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031A147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A144u); } /* indirect call */
    }

loc_0031A147: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031A16F; /* jle: less or equal (signed <=) */

loc_0031A153: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + eax * 4) = 0;
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031A153; /* jl: less (signed <) */

loc_0031A16F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0031A1B0
 * Original: 0x0031A1B0 - 0x0031A22A (122 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A1B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    MEM32(esi) = 0x827090;
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A1CAu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031A1CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0031A1E7; /* jl: less (signed <) */

loc_0031A1D5: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031A1E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A1E2u); } /* indirect call */
    }

loc_0031A1E5: ;
    goto loc_0031A1EF;

loc_0031A1E7: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031A1EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A1ECu); } /* indirect call */
    }

loc_0031A1EF: ;
    esi = MEM32(esi + 8);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A1FEu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031A1FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031A21E; /* jl: less (signed <) */

loc_0031A209: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031A21Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A217u); } /* indirect call */
    }

loc_0031A21A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A21E: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031A226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A223u); } /* indirect call */
    }

loc_0031A226: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A250
 * Original: 0x0031A250 - 0x0031A2DF (143 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A250: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0031A277u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A274u); } /* indirect call */
    }

loc_0031A277: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A2D5; /* je: equal / zero */

loc_0031A27B: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A2D5; /* je: equal / zero */

loc_0031A281: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031A294u); RECOMP_ABI_CALL(0x00032476u, sub_00032476); /* call 0x00032476 */

loc_0031A294: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x826DF4);
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031A2ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A2A9u); } /* indirect call */
    }

loc_0031A2AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A2C2; /* je: equal / zero */

loc_0031A2B0: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = 0x826ED8;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebp;
    goto loc_0031A2C4;

loc_0031A2C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031A2C4: ;
    ecx = MEM32(edi + 0xC);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edx + esi * 4);
    POP32(esp, esi);
    MEM32(ebx + 0x10) = eax;
    POP32(esp, ebx);

loc_0031A2D5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031A310
 * Original: 0x0031A310 - 0x0031A377 (103 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A310: ;
    eax = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031A332u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A32Fu); } /* indirect call */
    }

loc_0031A332: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A363; /* je: equal / zero */

loc_0031A336: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    ebx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0031A351u); RECOMP_ABI_CALL(0x0001DBB1u, sub_0001DBB1); /* call 0x0001DBB1 */

loc_0031A351: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + edi * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0031A363: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + edi * 4) = eax;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + edi * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A390
 * Original: 0x0031A390 - 0x0031A3C3 (51 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A390: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x826E60;
    MEM32(eax + 0x44) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0031A3AD; /* jne: not equal / not zero */

loc_0031A3A7: ;
    MEM8(eax + 4) = LO8(edx);
    esp += 12; return; /* ret 8 */

loc_0031A3AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0031A3B4: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(esi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A3B4; /* jne: not equal / not zero */

loc_0031A3BE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A3D0
 * Original: 0x0031A3D0 - 0x0031A41D (77 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A3D0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x44) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax) = 0x826E60;
    if (CMP_NE(_fa, _fb)) goto loc_0031A3FB; /* jne: not equal / not zero */

loc_0031A3E9: ;
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax) = 0x8270A0;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    esp += 12; return; /* ret 8 */

loc_0031A3FB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0031A402: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(esi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A402; /* jne: not equal / not zero */

loc_0031A40C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(eax) = 0x8270A0;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A430
 * Original: 0x0031A430 - 0x0031A452 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A430: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x826E60;
    if (TEST_Z(_fa, _fb)) goto loc_0031A44C; /* je: equal / zero */

loc_0031A440: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A44Cu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031A44C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A460
 * Original: 0x0031A460 - 0x0031A4EF (143 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A460: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0031A4BF; /* je: equal / zero */

loc_0031A46D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x64);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0031A4A8; /* js: sign (negative) */

loc_0031A47F: ;
    edi = eax + 1;
    ebx = 0x826E60;

loc_0031A487: ;
    ecx = MEM32(esi + -8);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x826EF0;
    if (CMP_EQ(_fa, _fb)) goto loc_0031A49E; /* je: equal / zero */

loc_0031A497: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0031A49Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A49Bu); } /* indirect call */
    }

loc_0031A49E: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ebx;
    if ((_fa != 0)) goto loc_0031A487; /* jne: not equal / not zero */

loc_0031A4A4: ;
    SET_LO8(ebx, MEM8(esp + 0x14));

loc_0031A4A8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A4B6; /* je: equal / zero */

loc_0031A4AD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031A4B3u); RECOMP_ABI_CALL(0x000367BAu, sub_000367BA); /* call 0x000367BA */

loc_0031A4B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031A4B6: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0031A4BF: ;
    ecx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x826EF0;
    if (CMP_EQ(_fa, _fb)) goto loc_0031A4D3; /* je: equal / zero */

loc_0031A4CC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031A4D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A4D0u); } /* indirect call */
    }

loc_0031A4D3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(edi + 0xC) = 0x826E60;
    if (TEST_Z(_fa, _fb)) goto loc_0031A4E8; /* je: equal / zero */

loc_0031A4DF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A4E5u); RECOMP_ABI_CALL(0x0002C805u, sub_0002C805); /* call 0x0002C805 */

loc_0031A4E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031A4E8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A520
 * Original: 0x0031A520 - 0x0031A56D (77 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A520: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031A528u); RECOMP_ABI_CALL(0x00032C91u, sub_00032C91); /* call 0x00032C91 */

loc_0031A528: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A567; /* je: equal / zero */

loc_0031A52F: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A53Cu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031A53C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031A55E; /* jl: less (signed <) */

loc_0031A547: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031A557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A554u); } /* indirect call */
    }

loc_0031A557: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031A55E: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031A566u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A563u); } /* indirect call */
    }

loc_0031A566: ;
    POP32(esp, edi);

loc_0031A567: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A580
 * Original: 0x0031A580 - 0x0031A5B6 (54 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A580: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031A5B2; /* je: equal / zero */

loc_0031A58D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_0031A597: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 0x40) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031A5A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A5A4u); } /* indirect call */
    }

loc_0031A5A6: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031A597; /* jne: not equal / not zero */

loc_0031A5B0: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0031A5B2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A5D0
 * Original: 0x0031A5D0 - 0x0031A628 (88 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A5D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A5D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    edi = MEM32(ecx + 0x10);
    PUSH32(esp, 4);
    edx = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031A5ECu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031A5EC: ;
    PUSH32(esp, 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031A5FCu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031A5FC: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = MEM32(esp + 0x20);
    MEM32(eax + ecx + 0x60) = edx;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + ecx + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0031A622u); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031A622: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A640
 * Original: 0x0031A640 - 0x0031A6E6 (166 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A640: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x60);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    MEM32(esp + 0x6C) = ebx;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM32(esp + 0x28) = 0x8270A0;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0031A685u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031A685: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x0031A69Eu); RECOMP_ABI_CALL(0x00030FEAu, sub_00030FEA); /* call 0x00030FEA */

loc_0031A69E: ;
    esi = MEM32(esp + 0x60);
    ecx = MEM32(edi + 0x20);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x64);
    ebp = MEM32(esi + ecx + 0x50);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    ecx = esi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031A6BBu); RECOMP_ABI_CALL(0x000366B1u, sub_000366B1); /* call 0x000366B1 */

loc_0031A6BB: ;
    eax = MEM32(esp + 0x70);
    MEM32(esi + 0x50) = ebp;
    MEM32(esi + 8) = 5;
    MEM32(esi + 0x60) = eax;
    esi = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(edi + 0x10) = esi;
    PUSH32(esp, 0x0031A6DCu); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031A6DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A710
 * Original: 0x0031A710 - 0x0031A75D (77 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031A72Au); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031A72A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edx;
    edx = eax + ecx + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0031A759u); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031A759: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A770
 * Original: 0x0031A770 - 0x0031A819 (169 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A770: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031A813; /* ja: above (unsigned >) */

loc_0031A789: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x31A81C); /* switch: 10 entries, 6 targets */
    if (_jt == 0x0031A790u) goto loc_0031A790;
    if (_jt == 0x0031A7C6u) goto loc_0031A7C6;
    if (_jt == 0x0031A7ECu) goto loc_0031A7EC;
    if (_jt == 0x0031A7FBu) goto loc_0031A7FB;
    if (_jt == 0x0031A80Au) goto loc_0031A80A;
    if (_jt == 0x0031A813u) goto loc_0031A813;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031A790: ;
    eax = MEM32(esi + 0x24);
    edx = MEM32(esi + -8);
    ecx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 0x40) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031A7A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A7A1u); } /* indirect call */
    }

loc_0031A7A4: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx + 0x44);
    ecx = MEM32(esi + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = 0;
    MEM32(eax + 0x60) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031A7C6: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0031A7E6u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031A7E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031A7EC: ;
    PUSH32(esp, eax);
    ecx = esi + -8;
    PUSH32(esp, 0x0031A7F5u); RECOMP_ABI_CALL(0x0001E665u, sub_0001E665); /* call 0x0001E665 */

loc_0031A7F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031A7FB: ;
    PUSH32(esp, eax);
    ecx = esi + -8;
    PUSH32(esp, 0x0031A804u); RECOMP_ABI_CALL(0x000143D6u, sub_000143D6); /* call 0x000143D6 */

loc_0031A804: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031A80A: ;
    PUSH32(esp, eax);
    ecx = esi + -8;
    PUSH32(esp, 0x0031A813u); RECOMP_ABI_CALL(0x00034BA4u, sub_00034BA4); /* call 0x00034BA4 */

loc_0031A813: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A8C0
 * Original: 0x0031A8C0 - 0x0031A9EC (300 bytes, 88 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A8C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0031A9DF; /* ja: above (unsigned >) */

loc_0031A8DA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x31A9EC); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0031A8E1u) goto loc_0031A8E1;
    if (_jt == 0x0031A966u) goto loc_0031A966;
    if (_jt == 0x0031A97Eu) goto loc_0031A97E;
    if (_jt == 0x0031A9DFu) goto loc_0031A9DF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031A8E1: ;
    eax = MEM32(esp + 0xA4);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0xA0);
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(eax));
    eax = SX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = 1;
    if ((_fa != 0)) goto loc_0031A9DF; /* jne: not equal / not zero */

loc_0031A90B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    MEM32(esp + 0x60) = ebx;
    MEM8(esp + 0x20) = LO8(ebx);
    MEM32(esp + 0x1C) = 0x8270A0;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0x0031A933u); RECOMP_ABI_CALL(0x00030FEAu, sub_00030FEA); /* call 0x00030FEA */

loc_0031A933: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0031A93Fu); RECOMP_ABI_CALL(0x00032A98u, sub_00032A98); /* call 0x00032A98 */

loc_0031A93F: ;
    ecx = MEM32(esi + 4);
    edx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x5C);
    MEM32(esi + 8) = 5;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0031A956u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A953u); } /* indirect call */
    }

loc_0031A956: ;
    MEM32(esi + 0x5C) = ebx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031A966: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x5C) = ebx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031A97E: ;
    ecx = MEM32(esi + 0x50);
    eax = esp + 0x18;
    MEM32(esp + 0x10) = eax;
    eax = 2;
    PUSH32(esp, 4);
    edx = esp + 0x18;
    MEM32(esi + 8) = eax;
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 0x21;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x80;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x0031A9B2u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031A9B2: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = 5;
    PUSH32(esp, 0x0031A9CDu); RECOMP_ABI_CALL(0x00036652u, sub_00036652); /* call 0x00036652 */

loc_0031A9CD: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0031A9DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A9DCu); } /* indirect call */
    }

loc_0031A9DF: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031AAC0
 * Original: 0x0031AAC0 - 0x0031AB0D (77 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AAC0(void)
{

loc_0031AAC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031AACFu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031AACF: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031AADBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AAD8u); } /* indirect call */
    }

loc_0031AADB: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031AAFDu); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031AAFD: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031AB08u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031AB08: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031AB20
 * Original: 0x0031AB20 - 0x0031ABEB (203 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AB20: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031AB3Fu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031AB3F: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031AB4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AB4Bu); } /* indirect call */
    }

loc_0031AB4E: ;
    _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8FC630);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    ecx = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 8)); }
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031ABE2; /* jl: less (signed <) */

loc_0031AB6B: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(esi + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    MEM32(ecx + edx + 0x60) = edi;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 0x44);
    PUSH32(esp, 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0031AB9Cu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031AB9C: ;
    PUSH32(esp, 4);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x0031ABB1u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031ABB1: ;
    edx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 7);
    PUSH32(esp, 0x8C42F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031ABD2u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031ABD2: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0031ABE2u); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031ABE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031AC20
 * Original: 0x0031AC20 - 0x0031AC6E (78 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AC20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AC46; /* je: equal / zero */

loc_0031AC32: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AC68; /* jne: not equal / not zero */

loc_0031AC37: ;
    PUSH32(esp, edx);
    ecx = edi + -8;
    PUSH32(esp, 0x0031AC40u); RECOMP_ABI_CALL(0x000179C3u, sub_000179C3); /* call 0x000179C3 */

loc_0031AC40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0031AC46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(edi + -8);
    ecx = edi + -8;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0031AC54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AC51u); } /* indirect call */
    }

loc_0031AC54: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(edi + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x60) = ecx;
    POP32(esp, esi);

loc_0031AC68: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031AC90
 * Original: 0x0031AC90 - 0x0031ACCD (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AC90: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031ACCB; /* je: equal / zero */

loc_0031AC97: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031ACA4u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031ACA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031ACC2; /* jl: less (signed <) */

loc_0031ACAF: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031ACBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031ACBCu); } /* indirect call */
    }

loc_0031ACBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031ACC2: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031ACCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031ACC7u); } /* indirect call */
    }

loc_0031ACCA: ;
    POP32(esp, edi);

loc_0031ACCB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031ACE0
 * Original: 0x0031ACE0 - 0x0031ADAE (206 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ACE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031ACE0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 2 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0031AD5E; /* je: equal / zero */

loc_0031ACED: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebx);
    ebx = edi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = edi + ecx * 4;
    if ((_fas < 0)) goto loc_0031AD44; /* js: sign (negative) */

loc_0031ACFD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;

loc_0031AD02: ;
    esi = MEM32(ebp + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AD3E; /* je: equal / zero */

loc_0031AD0C: ;
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031AD18u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031AD18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031AD36; /* jl: less (signed <) */

loc_0031AD23: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031AD34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AD31u); } /* indirect call */
    }

loc_0031AD34: ;
    goto loc_0031AD3E;

loc_0031AD36: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031AD3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AD3Bu); } /* indirect call */
    }

loc_0031AD3E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031AD02; /* jne: not equal / not zero */

loc_0031AD44: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AD54; /* je: equal / zero */

loc_0031AD4B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031AD51u); RECOMP_ABI_CALL(0x0001F399u, sub_0001F399); /* call 0x0001F399 */

loc_0031AD51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031AD54: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0031AD5E: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AD95; /* je: equal / zero */

loc_0031AD64: ;
    ebp = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031AD70u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031AD70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031AD8D; /* jl: less (signed <) */

loc_0031AD7B: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031AD8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AD88u); } /* indirect call */
    }

loc_0031AD8B: ;
    goto loc_0031AD95;

loc_0031AD8D: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031AD95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AD92u); } /* indirect call */
    }

loc_0031AD95: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031ADA5; /* je: equal / zero */

loc_0031AD9C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031ADA2u); RECOMP_ABI_CALL(0x0002AB59u, sub_0002AB59); /* call 0x0002AB59 */

loc_0031ADA2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031ADA5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031ADF0
 * Original: 0x0031ADF0 - 0x0031AE15 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ADF0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AE0B; /* je: equal / zero */

loc_0031ADF7: ;
    ecx = MEM32(esp + 4);
    goto loc_0031AE00;

    /* nop */

loc_0031AE00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AE10; /* je: equal / zero */

loc_0031AE04: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AE00; /* jne: not equal / not zero */

loc_0031AE0B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0031AE10: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031AE20
 * Original: 0x0031AE20 - 0x0031AE42 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AE20: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0C30;
    if (TEST_Z(_fa, _fb)) goto loc_0031AE3C; /* je: equal / zero */

loc_0031AE30: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031AE3Cu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031AE3C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031AE50
 * Original: 0x0031AE50 - 0x0031AED8 (136 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AE50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AE69; /* je: equal / zero */

loc_0031AE5E: ;
    edx = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AED2; /* jne: not equal / not zero */

loc_0031AE69: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AE8C; /* jne: not equal / not zero */

loc_0031AE70: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = 0x8C42E4;
    eax = MEM32(esi + 8);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 0x10);
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0031AE8C: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031AEA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AEA0u); } /* indirect call */
    }

loc_0031AEA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AEB8; /* je: equal / zero */

loc_0031AEA7: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0031AEB6u); RECOMP_ABI_CALL(0x000177A2u, sub_000177A2); /* call 0x000177A2 */

loc_0031AEB6: ;
    goto loc_0031AEBA;

loc_0031AEB8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031AEBA: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 8);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 0x10);
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0031AED2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031AF00
 * Original: 0x0031AF00 - 0x0031AF22 (34 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AF00: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AF10; /* jne: not equal / not zero */

loc_0031AF0B: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0031AF10: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(eax + 0x2C);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031AF30
 * Original: 0x0031AF30 - 0x0031AF95 (101 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AF30: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031AF92; /* jne: not equal / not zero */

loc_0031AF39: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x44);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x18), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AF60; /* je: equal / zero */

loc_0031AF4C: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x18);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x18) = ecx;

loc_0031AF60: ;
    ecx = eax + -20;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031AF70; /* jg: greater (signed >) */

loc_0031AF6A: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x10);

loc_0031AF70: ;
    SET_LO8(edx, MEM8(ecx + 0x24));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AF7C; /* je: equal / zero */

loc_0031AF77: ;
    edx = MEM32(ecx + 0x28);
    goto loc_0031AF84;

loc_0031AF7C: ;
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AF92; /* je: equal / zero */

loc_0031AF83: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0031AF84: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AF92; /* je: equal / zero */

loc_0031AF8D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031AF92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AF8Fu); } /* indirect call */
    }

loc_0031AF92: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031AFB0
 * Original: 0x0031AFB0 - 0x0031AFF1 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AFB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    edi = ecx;
    PUSH32(esp, 0x0031AFBBu); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_0031AFBB: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AFD9; /* je: equal / zero */

loc_0031AFC4: ;
    MEM32(esi) = 0x7FC498;
    PUSH32(esp, 0x0031AFCFu); RECOMP_ABI_CALL(0x00448938u, sub_00448938); /* call 0x00448938 */

loc_0031AFCF: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    ecx = esi;
    goto loc_0031AFDB;

loc_0031AFD9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031AFDB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E8);
    MEM32(edi) = ecx;
    eax = MEM32(ecx);
    PUSH32(esp, 0x3E8);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0031AFECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AFE9u); } /* indirect call */
    }

loc_0031AFEC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B010
 * Original: 0x0031B010 - 0x0031B01D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B010: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B020
 * Original: 0x0031B020 - 0x0031B04B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B020: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B043; /* je: equal / zero */

loc_0031B03B: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0031B043: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B060
 * Original: 0x0031B060 - 0x0031B0A7 (71 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B060: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B0A4; /* je: equal / zero */

loc_0031B068: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B078; /* je: equal / zero */

loc_0031B070: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_0031B07E;

loc_0031B078: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0031B07E: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B08D; /* je: equal / zero */

loc_0031B085: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_0031B093;

loc_0031B08D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0031B093: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_0031B0A4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B0C0
 * Original: 0x0031B0C0 - 0x0031B0CD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B0C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B0D0
 * Original: 0x0031B0D0 - 0x0031B0FB (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B0D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B0F3; /* je: equal / zero */

loc_0031B0EB: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0031B0F3: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B110
 * Original: 0x0031B110 - 0x0031B157 (71 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B110: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B154; /* je: equal / zero */

loc_0031B118: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B128; /* je: equal / zero */

loc_0031B120: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_0031B12E;

loc_0031B128: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0031B12E: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B13D; /* je: equal / zero */

loc_0031B135: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_0031B143;

loc_0031B13D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0031B143: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_0031B154: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B170
 * Original: 0x0031B170 - 0x0031B17D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B170: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B180
 * Original: 0x0031B180 - 0x0031B1AB (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B180: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B1A3; /* je: equal / zero */

loc_0031B19B: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0031B1A3: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B1C0
 * Original: 0x0031B1C0 - 0x0031B207 (71 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B1C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B204; /* je: equal / zero */

loc_0031B1C8: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B1D8; /* je: equal / zero */

loc_0031B1D0: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_0031B1DE;

loc_0031B1D8: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0031B1DE: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B1ED; /* je: equal / zero */

loc_0031B1E5: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_0031B1F3;

loc_0031B1ED: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0031B1F3: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_0031B204: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B220
 * Original: 0x0031B220 - 0x0031B27A (90 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    MEM32(edi) = 0x826F60;
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B23Au); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031B23A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031B257; /* jl: less (signed <) */

loc_0031B245: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031B255u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B252u); } /* indirect call */
    }

loc_0031B255: ;
    goto loc_0031B25F;

loc_0031B257: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031B25Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B25Cu); } /* indirect call */
    }

loc_0031B25F: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B272; /* je: equal / zero */

loc_0031B266: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B272u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031B272: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B290
 * Original: 0x0031B290 - 0x0031B2EE (94 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B290: ;
    eax = MEM32(0x8FE150);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x244) = 2;
    ecx = MEM32(0x8FC630);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031B2B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B2AFu); } /* indirect call */
    }

loc_0031B2B2: ;
    MEM32(esi + 0x240) = eax;
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B2EA; /* jne: not equal / not zero */

loc_0031B2C2: ;
    eax = MEM32(0x8FC62C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B2E9; /* je: equal / zero */

loc_0031B2D2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031B2D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B2D6u); } /* indirect call */
    }

loc_0031B2D9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0031B2E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B2DEu); } /* indirect call */
    }

loc_0031B2E1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0031B2E9u); RECOMP_ABI_CALL(0x0001452Au, sub_0001452A); /* call 0x0001452A */

loc_0031B2E9: ;
    POP32(esp, edi);

loc_0031B2EA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B310
 * Original: 0x0031B310 - 0x0031B366 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B310: ;
    eax = MEM32(0x8FC638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B365; /* jne: not equal / not zero */

loc_0031B319: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031B330u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B32Du); } /* indirect call */
    }

loc_0031B330: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B35A; /* je: equal / zero */

loc_0031B336: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0031B33Du); RECOMP_ABI_CALL(0x00457E80u, sub_00457E80); /* call 0x00457E80 */

loc_0031B33D: ;
    MEM32(esi + 0x3C) = eax;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM8(esi + 8) = LO8(eax);
    MEM8(esi + 9) = LO8(eax);
    PUSH32(esp, 0x0031B352u); RECOMP_ABI_CALL(0x0001E692u, sub_0001E692); /* call 0x0001E692 */

loc_0031B352: ;
    MEM32(0x8FC638) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031B35A: ;
    MEM32(0x8FC638) = 0;
    POP32(esp, esi);

loc_0031B365: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B380
 * Original: 0x0031B380 - 0x0031B3D5 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B380: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC638);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B3D3; /* je: equal / zero */

loc_0031B38B: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B398u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031B398: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031B3C0; /* jl: less (signed <) */

loc_0031B3A3: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031B3B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B3B0u); } /* indirect call */
    }

loc_0031B3B3: ;
    POP32(esp, edi);
    MEM32(0x8FC638) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031B3C0: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031B3C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B3C5u); } /* indirect call */
    }

loc_0031B3C8: ;
    MEM32(0x8FC638) = 0;
    POP32(esp, edi);

loc_0031B3D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B3F0
 * Original: 0x0031B3F0 - 0x0031B492 (162 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B3F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0031B3F9u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031B3F9: ;
    edi = eax + 0x3C4;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B488; /* je: equal / zero */

loc_0031B408: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B40Eu); RECOMP_ABI_CALL(0x0001E17Eu, sub_0001E17E); /* call 0x0001E17E */

loc_0031B40E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031B44C; /* jne: not equal / not zero */

loc_0031B418: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B422u); RECOMP_ABI_CALL(0x004580A0u, sub_004580A0); /* call 0x004580A0 */

loc_0031B422: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031B432; /* jne: not equal / not zero */

loc_0031B42C: ;
    MEM32(esi) = 3;

loc_0031B432: ;
    ecx = MEM32(0x8FC630);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031B43Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B43Cu); } /* indirect call */
    }

loc_0031B43F: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031B44C: ;
    ecx = MEM32(esi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x44) = 2;
    MEM32(esi + 0x10) = ecx;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    edi = esi + 0x2C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031B469u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B466u); } /* indirect call */
    }

loc_0031B469: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(edi) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031B47Fu); RECOMP_ABI_CALL(0x00457F70u, sub_00457F70); /* call 0x00457F70 */

loc_0031B47F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031B488: ;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B4C0
 * Original: 0x0031B4C0 - 0x0031B4EE (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B4C0: ;
    eax = MEM32(0x8FC63C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B4ED; /* je: equal / zero */

loc_0031B4C9: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031B4D9; /* je: equal / zero */

loc_0031B4D3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031B4D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B4D7u); } /* indirect call */
    }

loc_0031B4D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B4DFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0031B4DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FC63C) = 0;
    POP32(esp, esi);

loc_0031B4ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B500
 * Original: 0x0031B500 - 0x0031B546 (70 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B500: ;
    eax = MEM32(0x8FC630);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031B50Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B50Cu); } /* indirect call */
    }

loc_0031B50F: ;
    ecx = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B53C; /* je: equal / zero */

loc_0031B532: ;
    MEM32(ecx + 4) = eax;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031B53C: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B560
 * Original: 0x0031B560 - 0x0031B5D6 (118 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B560: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B57B; /* je: equal / zero */

loc_0031B56B: ;
    goto loc_0031B570;

    /* nop */

loc_0031B570: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B57B; /* je: equal / zero */

loc_0031B574: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B570; /* jne: not equal / not zero */

loc_0031B57B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B586; /* jne: not equal / not zero */

loc_0031B580: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_0031B586: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B592; /* jne: not equal / not zero */

loc_0031B58B: ;
    MEM32(ecx + 4) = 0;

loc_0031B592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B5D3; /* je: equal / zero */

loc_0031B596: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B5A6; /* je: equal / zero */

loc_0031B59E: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_0031B5AC;

loc_0031B5A6: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;

loc_0031B5AC: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B5BB; /* je: equal / zero */

loc_0031B5B3: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_0031B5C1;

loc_0031B5BB: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x14) = edx;

loc_0031B5C1: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_0031B5D3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B600
 * Original: 0x0031B600 - 0x0031B60B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B600: ;
    ecx = MEM32(0x8FC644);
    g_seh_ebp = ebp; sub_00018125(); return; /* tail jmp 0x00018125 */

}

/**
 * sub_0031B610
 * Original: 0x0031B610 - 0x0031B64C (60 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B610: ;
    eax = MEM32(0x8FC624);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031B648; /* je: equal / zero */

loc_0031B61C: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xB0) = eax;
    PUSH32(esp, 0x0031B62Bu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031B62B: ;
    MEM8(esi + 0xAC) = 1;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B63Eu); RECOMP_ABI_CALL(0x0001B70Du, sub_0001B70D); /* call 0x0001B70D */

loc_0031B63E: ;
    MEM32(0x8FC620) = 1;

loc_0031B648: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031B660
 * Original: 0x0031B660 - 0x0031B682 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B660: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xAC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B680; /* je: equal / zero */

loc_0031B66D: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B679u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031B679: ;
    MEM8(esi + 0xAC) = 0;

loc_0031B680: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B690
 * Original: 0x0031B690 - 0x0031B6B6 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B690: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x826E2C;
    MEM32(0x8FC620) = ecx;
    MEM32(eax + 0xB4) = ecx;
    MEM8(eax + 0xAC) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B6C0
 * Original: 0x0031B6C0 - 0x0031B6EB (43 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B6C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 8) = 0x7F0C50;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x8270B8;
    MEM32(eax + 8) = 0x8270AC;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B700
 * Original: 0x0031B700 - 0x0031B708 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B700: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002DAAC(); return; /* tail jmp 0x0002DAAC */

}

/**
 * sub_0031B710
 * Original: 0x0031B710 - 0x0031B771 (97 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0031B720u); RECOMP_ABI_CALL(0x00032AE3u, sub_00032AE3); /* call 0x00032AE3 */

loc_0031B720: ;
    ecx = MEM32(0x8FC630);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    edi = MEM32(0x8FC644);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031B736u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B733u); } /* indirect call */
    }

loc_0031B736: ;
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = 0;
    MEM32(edi + 0x14) = esi;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B760; /* je: equal / zero */

loc_0031B753: ;
    MEM32(eax + 4) = esi;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031B760: ;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B790
 * Original: 0x0031B790 - 0x0031B7C5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B790: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B7C3; /* je: equal / zero */

loc_0031B79A: ;
    ecx = MEM32(0x8FC644);
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031B7A9u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031B7A9: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    MEM32(esi + 0x20) = 0;
    PUSH32(esp, 0x0031B7B9u); RECOMP_ABI_CALL(0x004545D0u, sub_004545D0); /* call 0x004545D0 */

loc_0031B7B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_0031B7C3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B7E0
 * Original: 0x0031B7E0 - 0x0031B8AF (207 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B7E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 8) = 0x7F0C50;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x2C) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = 0x8270D4;
    MEM32(esi + 8) = 0x8270C8;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = 0xE4A;
    MEM8(esi + 0x34) = LO8(ebx);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_0031B839; /* jb: below (unsigned <) */

loc_0031B82B: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_0031B842;

loc_0031B839: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031B842: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031B847u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B844u); } /* indirect call */
    }

loc_0031B847: ;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x2C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_0031B86C; /* jb: below (unsigned <) */

loc_0031B85E: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_0031B875;

loc_0031B86C: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031B875: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031B87Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B877u); } /* indirect call */
    }

loc_0031B87A: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(esi + 0x1C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031B8A8; /* jle: less or equal (signed <=) */

loc_0031B886: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    goto loc_0031B890;

    /* nop */

loc_0031B890: ;
    edx = MEM32(esi + 0x28);
    edi = MEM32(ecx + eax * 4);
    MEM32(edx + eax * 4) = edi;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + eax * 4) = ebx;
    edx = MEM32(esi + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031B890; /* jl: less (signed <) */

loc_0031B8A7: ;
    POP32(esp, edi);

loc_0031B8A8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031B8F0
 * Original: 0x0031B8F0 - 0x0031B8F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B8F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00015ECF(); return; /* tail jmp 0x00015ECF */

}

/**
 * sub_0031B900
 * Original: 0x0031B900 - 0x0031B98F (143 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B900: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B989; /* jne: not equal / not zero */

loc_0031B90A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(ebx + 0x20) = eax;
    eax = MEM32(ebx + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0031B930; /* jle: less or equal (signed <=) */

loc_0031B91C: ;
    /* nop */

loc_0031B920: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0031B928u); RECOMP_ABI_CALL(0x0001FE6Bu, sub_0001FE6B); /* call 0x0001FE6B */

loc_0031B928: ;
    eax = MEM32(ebx + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031B920; /* jl: less (signed <) */

loc_0031B930: ;
    ecx = MEM32(0x8FC630);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    edi = MEM32(0x8FC644);
    esi = ebx + 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031B946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B943u); } /* indirect call */
    }

loc_0031B946: ;
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = 0;
    MEM32(edi + 0x14) = esi;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B974; /* je: equal / zero */

loc_0031B963: ;
    MEM32(eax + 4) = esi;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(ebx + 0x34) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0031B974: ;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(ebx + 0x34) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0031B989: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B9C0
 * Original: 0x0031B9C0 - 0x0031BA1C (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BA1A; /* je: equal / zero */

loc_0031B9CA: ;
    PUSH32(esp, edi);
    eax = esi + 8;
    MEM32(esi + 0x20) = 0;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031B9E1u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031B9E1: ;
    eax = MEM32(esi + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031BA15; /* jle: less or equal (signed <=) */

loc_0031B9EA: ;
    /* nop */

loc_0031B9F0: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BA0D; /* je: equal / zero */

loc_0031B9FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031BA00u); RECOMP_ABI_CALL(0x004545D0u, sub_004545D0); /* call 0x004545D0 */

loc_0031BA00: ;
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + edi * 4) = 0;

loc_0031BA0D: ;
    eax = MEM32(esi + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031B9F0; /* jl: less (signed <) */

loc_0031BA15: ;
    MEM8(esi + 0x34) = 0;
    POP32(esp, edi);

loc_0031BA1A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BA40
 * Original: 0x0031BA40 - 0x0031BA64 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x826E3C;
    PUSH32(esp, 0x0031BA4Eu); RECOMP_ABI_CALL(0x00022B7Fu, sub_00022B7F); /* call 0x00022B7F */

loc_0031BA4E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BA5E; /* je: equal / zero */

loc_0031BA55: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BA5Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0031BA5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031BA5E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031BA70
 * Original: 0x0031BA70 - 0x0031BAE7 (119 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BA70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0031BA7Bu); RECOMP_ABI_CALL(0x0003404Bu, sub_0003404B); /* call 0x0003404B */

loc_0031BA7B: ;
    esi = ebx + 0x84;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi) = 0x7F0C50;
    MEM32(esi + 0xC) = ebp;
    MEM32(ebx) = 0x8270F0;
    MEM32(esi) = 0x8270E4;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    edi = MEM32(0x8FC644);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031BAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BAADu); } /* indirect call */
    }

loc_0031BAB0: ;
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = ebp;
    MEM32(edi + 0x14) = esi;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BAD6; /* je: equal / zero */

loc_0031BAC9: ;
    MEM32(eax + 4) = esi;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031BAD6: ;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BB10
 * Original: 0x0031BB10 - 0x0031BB1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BB10: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00029CF9(); return; /* tail jmp 0x00029CF9 */

}

/**
 * sub_0031BB20
 * Original: 0x0031BB20 - 0x0031BB57 (55 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x84;
    MEM32(esi) = 0x8270F0;
    MEM32(edi) = 0x8270E4;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031BB42u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031BB42: ;
    MEM32(edi) = 0x7F0C50;
    POP32(esp, edi);
    MEM32(esi) = 0x826E3C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00022B7F(); return; /* tail jmp 0x00022B7F */

}

/**
 * sub_0031BB70
 * Original: 0x0031BB70 - 0x0031BBFA (138 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BB70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031BBAD; /* je: equal / zero */

loc_0031BB7D: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BBAD; /* je: equal / zero */

loc_0031BB85: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031BB9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BB97u); } /* indirect call */
    }

loc_0031BB9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BBF2; /* je: equal / zero */

loc_0031BB9E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0031BBA7u); RECOMP_ABI_CALL(0x00026B7Bu, sub_00026B7B); /* call 0x00026B7B */

loc_0031BBA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0031BBAD: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031BBC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BBBFu); } /* indirect call */
    }

loc_0031BBC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BBF2; /* je: equal / zero */

loc_0031BBC6: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 8) = 0x7F0C50;
    POP32(esp, edi);
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = esi;
    POP32(esp, esi);
    MEM32(eax) = 0x8270B8;
    MEM32(eax + 8) = 0x8270AC;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0031BBF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031BC20
 * Original: 0x0031BC20 - 0x0031BC53 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BC20: ;
    eax = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0x827114;
    esi = eax + 4;
    MEM32(eax) = 0x826E60;
    MEM32(eax + 0x44) = 0xFFFFFFFFu;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0031BC40;

    /* nop */

loc_0031BC40: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(esi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BC40; /* jne: not equal / not zero */

loc_0031BC4A: ;
    POP32(esp, esi);
    MEM32(eax) = 0x827108;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BC60
 * Original: 0x0031BC60 - 0x0031BC65 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BC60(void)
{

loc_0031BC60: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031BC70
 * Original: 0x0031BC70 - 0x0031BC92 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BC70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x826E60;
    if (TEST_Z(_fa, _fb)) goto loc_0031BC8C; /* je: equal / zero */

loc_0031BC80: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BC8Cu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031BC8C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031BCA0
 * Original: 0x0031BCA0 - 0x0031BCAA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BCA0(void)
{

loc_0031BCA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x0031BCA9u); RECOMP_ABI_CALL(0x0001BBFEu, sub_0001BBFE); /* call 0x0001BBFE */

loc_0031BCA9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BCB0
 * Original: 0x0031BCB0 - 0x0031BD75 (197 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BCB0: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0031BCCFu); RECOMP_ABI_CALL(0x000289B2u, sub_000289B2); /* call 0x000289B2 */

loc_0031BCCF: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x1C) = 0x826E84;
    MEM32(esi + 0x20) = 0x7F0C74;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x24) = 0x7F0C50;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x44) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = 0x827148;
    MEM32(esi + 0x1C) = 0x827144;
    MEM32(esi + 0x20) = 0x827140;
    MEM32(esi + 0x24) = 0x827134;
    MEM32(esi + 0x38) = ecx;
    MEM8(esi + 0x3C) = LO8(ebx);
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = edx;
    PUSH32(esp, 0x827118);
    if (CMP_B(_fa, _fb)) goto loc_0031BD44; /* jb: below (unsigned <) */

loc_0031BD36: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_0031BD4D;

loc_0031BD44: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031BD4D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031BD52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BD4Fu); } /* indirect call */
    }

loc_0031BD52: ;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0x40) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031BD6E; /* jle: less or equal (signed <=) */

loc_0031BD5E: ;
    edi = edi;

loc_0031BD60: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + eax * 4) = ebx;
    ecx = MEM32(esi + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031BD60; /* jl: less (signed <) */

loc_0031BD6E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0031BDB0
 * Original: 0x0031BDB0 - 0x0031BDB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BDB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0003025C(); return; /* tail jmp 0x0003025C */

}

/**
 * sub_0031BDC0
 * Original: 0x0031BDC0 - 0x0031BE4B (139 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031BDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BDC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = esi + 0x24;
    MEM32(esi) = 0x827148;
    MEM32(esi + 0x1C) = 0x827144;
    MEM32(esi + 0x20) = 0x827140;
    MEM32(ebp) = 0x827134;
    if (CMP_EQ(_fa, _fb)) goto loc_0031BDF5; /* je: equal / zero */

loc_0031BDE9: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031BDF5u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031BDF5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031BE06u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031BE06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0031BE23; /* jl: less (signed <) */

loc_0031BE11: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031BE21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BE1Eu); } /* indirect call */
    }

loc_0031BE21: ;
    goto loc_0031BE2B;

loc_0031BE23: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031BE2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BE28u); } /* indirect call */
    }

loc_0031BE2B: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0031BE3B; /* je: equal / zero */

loc_0031BE34: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031BE3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BE38u); } /* indirect call */
    }

loc_0031BE3B: ;
    ecx = esi;
    POP32(esp, esi);
    MEM32(ebp) = 0x7F0C50;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0001D3C3(); return; /* tail jmp 0x0001D3C3 */

}

/**
 * sub_0031BE70
 * Original: 0x0031BE70 - 0x0031BEA0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x3C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0031BE9E; /* jle: less or equal (signed <=) */

loc_0031BE7E: ;
    edi = edi;

loc_0031BE80: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0031BE8Du); RECOMP_ABI_CALL(0x0002009Bu, sub_0002009B); /* call 0x0002009B */

loc_0031BE8D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BE9A; /* je: equal / zero */

loc_0031BE91: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031BE80; /* jg: greater (signed >) */

loc_0031BE98: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031BE9A: ;
    MEM8(esi + 0x3C) = 1;

loc_0031BE9E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BEB0
 * Original: 0x0031BEB0 - 0x0031BFC4 (276 bytes, 99 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BEB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 5);
    PUSH32(esp, 0x8C42C8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = 0x100;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0031BEEAu); RECOMP_ABI_CALL(0x00017A3Bu, sub_00017A3B); /* call 0x00017A3B */

loc_0031BEEA: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8C42C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x8C42C4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BEF9; /* jne: not equal / not zero */

loc_0031BEF6: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0031BEF9: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031BF56; /* jge: greater or equal (signed >=) */

loc_0031BF01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BF5B; /* je: equal / zero */

loc_0031BF06: ;
    edx = MEM32(esi + 0x4C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = MEM32(edx + 0x20);
    ebp = edx + eax + 0xC;

loc_0031BF13: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031BF62; /* jge: greater or equal (signed >=) */

loc_0031BF17: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BF67; /* je: equal / zero */

loc_0031BF1C: ;
    eax = MEM32(esi + 0x4C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    edx = MEM32(eax + 0x20);
    ebx = edx + ecx + 0xC;

loc_0031BF29: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_0031BF6E; /* je: equal / zero */

loc_0031BF39: ;
    PUSH32(esp, 4);
    eax = edi + esi;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031BF49u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031BF49: ;
    eax = ZX8(MEM8(edi + esi + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031BF76;

loc_0031BF56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BF06; /* jne: not equal / not zero */

loc_0031BF5B: ;
    ebp = 0x8C42F0;
    goto loc_0031BF13;

loc_0031BF62: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BF1C; /* jne: not equal / not zero */

loc_0031BF67: ;
    ebx = 0x8C42F0;
    goto loc_0031BF29;

loc_0031BF6E: ;
    eax = ZX8(MEM8(edi + esi));
    MEM32(esp + 0x38) = eax;

loc_0031BF76: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 8);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(ecx + edx * 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BFB8; /* je: equal / zero */

loc_0031BF89: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031BFA0u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031BFA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BFB8; /* je: equal / zero */

loc_0031BFA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BFB8; /* je: equal / zero */

loc_0031BFA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0031BFB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C010
 * Original: 0x0031C010 - 0x0031C098 (136 bytes, 50 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C010: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    edi = esp + 8;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031C041u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C03Eu); } /* indirect call */
    }

loc_0031C041: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C08E; /* je: equal / zero */

loc_0031C045: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = edi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0031C055u); RECOMP_ABI_CALL(0x000116AEu, sub_000116AE); /* call 0x000116AE */

loc_0031C055: ;
    edi = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C072; /* je: equal / zero */

loc_0031C05F: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0031C06Bu); RECOMP_ABI_CALL(0x00032476u, sub_00032476); /* call 0x00032476 */

loc_0031C06B: ;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = edx;

loc_0031C072: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0031C07Du); RECOMP_ABI_CALL(0x00032476u, sub_00032476); /* call 0x00032476 */

loc_0031C07D: ;
    ecx = esi + 0x20;
    POP32(esp, ebx);
    MEM32(eax + 0x10) = ecx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031C08E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031C0C0
 * Original: 0x0031C0C0 - 0x0031C0F9 (57 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C0C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0031C0F3; /* jle: less or equal (signed <=) */

loc_0031C0D2: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C0EB; /* je: equal / zero */

loc_0031C0DC: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C0E5u); RECOMP_ABI_CALL(0x00032476u, sub_00032476); /* call 0x00032476 */

loc_0031C0E5: ;
    ecx = esi + 0x20;
    MEM32(eax + 0x10) = ecx;

loc_0031C0EB: ;
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C0D2; /* jl: less (signed <) */

loc_0031C0F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C110
 * Original: 0x0031C110 - 0x0031C132 (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C110: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;

loc_0031C118: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0031C120u); RECOMP_ABI_CALL(0x00019FCAu, sub_00019FCA); /* call 0x00019FCA */

loc_0031C120: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C118; /* jne: not equal / not zero */

loc_0031C124: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C12Du); RECOMP_ABI_CALL(0x0001BBFEu, sub_0001BBFE); /* call 0x0001BBFE */

loc_0031C12D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C140
 * Original: 0x0031C140 - 0x0031C18F (79 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031C140: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = edi + -36;
    MEM8(esi + 0x3C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0031C170; /* jle: less or equal (signed <=) */

loc_0031C152: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0031C15Fu); RECOMP_ABI_CALL(0x0002009Bu, sub_0002009B); /* call 0x0002009B */

loc_0031C15F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C16C; /* je: equal / zero */

loc_0031C163: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0031C152; /* jg: greater (signed >) */

loc_0031C16A: ;
    goto loc_0031C170;

loc_0031C16C: ;
    MEM8(esi + 0x3C) = 1;

loc_0031C170: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0031C18C; /* jne: not equal / not zero */

loc_0031C177: ;
    ecx = MEM32(0x8FC644);
    eax = edi + -36;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C18Cu); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031C18C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C1B0
 * Original: 0x0031C1B0 - 0x0031C1D1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031C1B8u); RECOMP_ABI_CALL(0x00030577u, sub_00030577); /* call 0x00030577 */

loc_0031C1B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C1CB; /* je: equal / zero */

loc_0031C1BF: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C1CBu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031C1CB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C1E0
 * Original: 0x0031C1E0 - 0x0031C201 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031C1E8u); RECOMP_ABI_CALL(0x0002F51Eu, sub_0002F51E); /* call 0x0002F51E */

loc_0031C1E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C1FB; /* je: equal / zero */

loc_0031C1EF: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C1FBu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031C1FB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C210
 * Original: 0x0031C210 - 0x0031C296 (134 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C210: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C21Fu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031C21F: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(esi);
    edx = MEM32(ecx);
    edi = MEM32(eax + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031C23Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C238u); } /* indirect call */
    }

loc_0031C23B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C250; /* je: equal / zero */

loc_0031C23F: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0031C24Eu); RECOMP_ABI_CALL(0x000289B2u, sub_000289B2); /* call 0x000289B2 */

loc_0031C24E: ;
    goto loc_0031C252;

loc_0031C250: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031C252: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031C289; /* jle: less or equal (signed <=) */

loc_0031C25E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_0031C260: ;
    edx = MEM32(esi + 0x14);
    eax = edx + edi * 8;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C27F; /* je: equal / zero */

loc_0031C26C: ;
    ebp = MEM32(esi);
    ebp = MEM32(ebp + 0x28);
    eax = MEM32(eax + 4);
    ecx = MEM32(esi + 0xC);
    ebx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebx + 4); PUSH32(esp, 0x0031C27Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C27Cu); } /* indirect call */
    }

loc_0031C27F: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C260; /* jl: less (signed <) */

loc_0031C287: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0031C289: ;
    ecx = MEM32(0x8FC628);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_0031C2C0
 * Original: 0x0031C2C0 - 0x0031C2E4 (36 bytes, 13 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C2C0(void)
{

loc_0031C2C0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C2DEu); RECOMP_ABI_CALL(0x0002DC0Au, sub_0002DC0A); /* call 0x0002DC0A */

loc_0031C2DE: ;
    eax = MEM32(eax + 0x2C);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0031C2F0
 * Original: 0x0031C2F0 - 0x0031C3DE (238 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C2F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0031C373; /* jle: less or equal (signed <=) */

loc_0031C304: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + esi * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax + esi * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0031C367; /* je: equal / zero */

loc_0031C311: ;
    edx = MEM32(edi);
    edx = MEM32(edx + 0x28);
    eax = MEM32(eax + 4);
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0031C327u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C324u); } /* indirect call */
    }

loc_0031C327: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C367; /* je: equal / zero */

loc_0031C32D: ;
    eax = MEM32(edi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031C367; /* jle: less or equal (signed <=) */

loc_0031C336: ;
    ecx = MEM32(edi + 8);
    esi = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C35B; /* je: equal / zero */

loc_0031C340: ;
    edx = MEM32(edi);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C35B; /* je: equal / zero */

loc_0031C34A: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0031C355u); RECOMP_ABI_CALL(0x00032476u, sub_00032476); /* call 0x00032476 */

loc_0031C355: ;
    ecx = esi + 0x20;
    MEM32(eax + 0x10) = ecx;

loc_0031C35B: ;
    eax = MEM32(edi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C336; /* jl: less (signed <) */

loc_0031C363: ;
    esi = MEM32(esp + 0x10);

loc_0031C367: ;
    eax = MEM32(edi + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0031C304; /* jl: less (signed <) */

loc_0031C373: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0031C3D6; /* jle: less or equal (signed <=) */

loc_0031C380: ;
    ecx = MEM32(edi + 8);
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C3CA; /* je: equal / zero */

loc_0031C38A: ;
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C3CA; /* je: equal / zero */

loc_0031C392: ;
    edx = MEM32(edi);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C3CA; /* je: equal / zero */

loc_0031C39C: ;
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031C3CA; /* jle: less or equal (signed <=) */

loc_0031C3A5: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(edx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C3BE; /* je: equal / zero */

loc_0031C3AF: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C3B8u); RECOMP_ABI_CALL(0x00032476u, sub_00032476); /* call 0x00032476 */

loc_0031C3B8: ;
    ecx = ebp + 0x20;
    MEM32(eax + 0x10) = ecx;

loc_0031C3BE: ;
    eax = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C3A5; /* jl: less (signed <) */

loc_0031C3C6: ;
    eax = MEM32(esp + 0x10);

loc_0031C3CA: ;
    ecx = MEM32(edi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0031C380; /* jl: less (signed <) */

loc_0031C3D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C420
 * Original: 0x0031C420 - 0x0031C441 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031C428u); RECOMP_ABI_CALL(0x0001D3C3u, sub_0001D3C3); /* call 0x0001D3C3 */

loc_0031C428: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C43B; /* je: equal / zero */

loc_0031C42F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C43Bu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031C43B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C450
 * Original: 0x0031C450 - 0x0031C4CC (124 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C450: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = MEM32(edi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0031C496; /* jle: less or equal (signed <=) */

loc_0031C461: ;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    /* nop */

loc_0031C470: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C481; /* je: equal / zero */

loc_0031C477: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C470; /* jl: less (signed <) */

loc_0031C47F: ;
    goto loc_0031C494;

loc_0031C481: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C494; /* je: equal / zero */

loc_0031C48B: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C494u); RECOMP_ABI_CALL(0x0001BBFEu, sub_0001BBFE); /* call 0x0001BBFE */

loc_0031C494: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0031C496: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0031C4A6u); RECOMP_ABI_CALL(0x0001CFCCu, sub_0001CFCC); /* call 0x0001CFCC */

loc_0031C4A6: ;
    edx = MEM32(edi + 4);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C4C7; /* je: equal / zero */

loc_0031C4B3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031C4BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C4B7u); } /* indirect call */
    }

loc_0031C4BA: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + eax * 4) = 0;

loc_0031C4C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031C4F0
 * Original: 0x0031C4F0 - 0x0031C68E (414 bytes, 148 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C4F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 4) = 0x7F0C30;
    MEM32(esi + 8) = 0x7F0C74;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827170;
    MEM32(esi + 4) = 0x82715C;
    MEM32(esi + 8) = 0x827158;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, edi);
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x34) = ebx;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C54F; /* jne: not equal / not zero */

loc_0031C543: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0031C54Au); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_0031C54A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031C581;

loc_0031C54F: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_0031C573; /* jb: below (unsigned <) */

loc_0031C565: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE0);
    goto loc_0031C57C;

loc_0031C573: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031C57C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031C581u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C57Eu); } /* indirect call */
    }

loc_0031C581: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C5CE; /* je: equal / zero */

loc_0031C585: ;
    PUSH32(esp, ebp);
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ebp = eax + 4;
    MEM32(eax) = edi;
    ecx = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0031C5C9; /* jl: less (signed <) */

loc_0031C594: ;
    eax = ecx + 0x10;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0x8270A0;
    /* nop */

loc_0031C5A0: ;
    MEM32(ecx) = 0x826EF0;
    MEM32(eax + -12) = ebx;
    MEM32(eax + -8) = ebx;
    MEM32(eax + 0x40) = ebx;
    MEM8(eax) = LO8(ebx);
    MEM32(eax + -4) = edi;
    MEM32(eax + 0x44) = ebx;
    MEM32(eax + 0x48) = ebx;
    MEM32(eax + 0x4C) = ebx;
    MEM32(eax + 0x50) = ebx;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031C5A0; /* jne: not equal / not zero */

loc_0031C5C9: ;
    eax = ebp;
    POP32(esp, ebp);
    goto loc_0031C5D0;

loc_0031C5CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031C5D0: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esi + 0x20) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031C5FD; /* jle: less or equal (signed <=) */

loc_0031C5E2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031C5E4: ;
    edx = MEM32(esi + 0x20);
    MEM32(ecx + edx + 4) = esi;
    edx = MEM32(esi + 0x20);
    MEM32(ecx + edx + 0x50) = eax;
    edx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C5E4; /* jl: less (signed <) */

loc_0031C5FD: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031C612u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C60Fu); } /* indirect call */
    }

loc_0031C612: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C629; /* je: equal / zero */

loc_0031C616: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0031C627u); RECOMP_ABI_CALL(0x0002E74Au, sub_0002E74A); /* call 0x0002E74A */

loc_0031C627: ;
    goto loc_0031C62B;

loc_0031C629: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031C62B: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031C643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C640u); } /* indirect call */
    }

loc_0031C643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C654; /* je: equal / zero */

loc_0031C647: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x1E);
    ecx = eax;
    PUSH32(esp, 0x0031C652u); RECOMP_ABI_CALL(0x000177A2u, sub_000177A2); /* call 0x000177A2 */

loc_0031C652: ;
    goto loc_0031C656;

loc_0031C654: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031C656: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031C668u); RECOMP_ABI_CALL(0x0002DC0Au, sub_0002DC0A); /* call 0x0002DC0A */

loc_0031C668: ;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(0x8FC62C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0031C680u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C67Du); } /* indirect call */
    }

loc_0031C680: ;
    MEM32(esi + 0x24) = eax;
    MEM32(eax + 4) = esi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0031C700
 * Original: 0x0031C700 - 0x0031C703 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C700(void)
{

loc_0031C700: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C710
 * Original: 0x0031C710 - 0x0031C713 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C710: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0031C720
 * Original: 0x0031C720 - 0x0031C728 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C720: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002FEC4(); return; /* tail jmp 0x0002FEC4 */

}

/**
 * sub_0031C730
 * Original: 0x0031C730 - 0x0031C766 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C730: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031C73Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031C73E: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0031C746u); RECOMP_ABI_CALL(0x0002AEBAu, sub_0002AEBA); /* call 0x0002AEBA */

loc_0031C746: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x0031C75Au); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031C75A: ;
    ecx = MEM32(0x8FC628);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_0031C780
 * Original: 0x0031C780 - 0x0031C7B6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C780: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031C78Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031C78E: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0031C796u); RECOMP_ABI_CALL(0x000270E4u, sub_000270E4); /* call 0x000270E4 */

loc_0031C796: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x0031C7AAu); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031C7AA: ;
    ecx = MEM32(0x8FC628);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_0031C7D0
 * Original: 0x0031C7D0 - 0x0031C82D (93 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C7D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = ebx;
    MEM32(esi + 0x38) = edi;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C7F4; /* je: equal / zero */

loc_0031C7EF: ;
    MEM32(eax + 4) = edi;
    goto loc_0031C7F7;

loc_0031C7F4: ;
    MEM32(esi + 0x34) = edi;

loc_0031C7F7: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031C826; /* jle: less or equal (signed <=) */

loc_0031C803: ;
    ecx = MEM32(esi + 0x20);
    eax = ecx + ebx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C81B; /* jne: not equal / not zero */

loc_0031C80F: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031C81Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C819u); } /* indirect call */
    }

loc_0031C81B: ;
    eax = MEM32(esi + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x64;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C803; /* jl: less (signed <) */

loc_0031C826: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C850
 * Original: 0x0031C850 - 0x0031C8AF (95 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C850: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x40) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C85F; /* jne: not equal / not zero */

loc_0031C859: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x40) = edx;

loc_0031C85F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C86B; /* jne: not equal / not zero */

loc_0031C864: ;
    MEM32(ecx + 0x3C) = 0;

loc_0031C86B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C8AC; /* je: equal / zero */

loc_0031C86F: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031C87F; /* je: equal / zero */

loc_0031C877: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_0031C885;

loc_0031C87F: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;

loc_0031C885: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C894; /* je: equal / zero */

loc_0031C88C: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_0031C89A;

loc_0031C894: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x38) = edx;

loc_0031C89A: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_0031C8AC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C8D0
 * Original: 0x0031C8D0 - 0x0031C8FB (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C8D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C8F3; /* je: equal / zero */

loc_0031C8EB: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0031C8F3: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C910
 * Original: 0x0031C910 - 0x0031C957 (71 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C910: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C954; /* je: equal / zero */

loc_0031C918: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031C928; /* je: equal / zero */

loc_0031C920: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_0031C92E;

loc_0031C928: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0031C92E: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C93D; /* je: equal / zero */

loc_0031C935: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_0031C943;

loc_0031C93D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0031C943: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_0031C954: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C970
 * Original: 0x0031C970 - 0x0031C97D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C970: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C980
 * Original: 0x0031C980 - 0x0031C9AC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C980: ;
    MEM32(ecx) = 0x7F0DB0;
    edx = MEM32(0x8FC648);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C9AB; /* je: equal / zero */

loc_0031C990: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C9AB; /* je: equal / zero */

loc_0031C997: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C9A3; /* je: equal / zero */

loc_0031C99B: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C997; /* jne: not equal / not zero */

loc_0031C9A2: ;
    esp += 4; return; /* ret */

loc_0031C9A3: ;
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x0031C9ABu); RECOMP_ABI_CALL(0x00035757u, sub_00035757); /* call 0x00035757 */

loc_0031C9AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C9C0
 * Original: 0x0031C9C0 - 0x0031CA20 (96 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C9C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031C9D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C9CEu); } /* indirect call */
    }

loc_0031C9D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CA1B; /* je: equal / zero */

loc_0031C9D4: ;
    edx = MEM32(0x8FC648);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C9EC; /* je: equal / zero */

loc_0031C9E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CA1B; /* je: equal / zero */

loc_0031C9E5: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C9E1; /* jne: not equal / not zero */

loc_0031C9EC: ;
    MEM32(esi + 0x10) = edi;
    ecx = MEM32(edx + 8);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 4) = 0;
    MEM32(edx + 8) = esi;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CA13; /* je: equal / zero */

loc_0031CA06: ;
    MEM32(ecx + 4) = esi;
    ecx = MEM32(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031CA13: ;
    ecx = MEM32(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 4) = esi;
    MEM32(edx) = ecx;

loc_0031CA1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031CA40
 * Original: 0x0031CA40 - 0x0031CAC3 (131 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CA40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CABF; /* je: equal / zero */

loc_0031CA4E: ;
    PUSH32(esp, ebp);
    /* nop */

loc_0031CA50: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    ebp = MEM32(esi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0031CA7E; /* je: equal / zero */

loc_0031CA5B: ;
    goto loc_0031CA60;

    /* nop */

loc_0031CA60: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031CA6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CA69u); } /* indirect call */
    }

loc_0031CA6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CA7E; /* jne: not equal / not zero */

loc_0031CA6F: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031CA76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CA74u); } /* indirect call */
    }

loc_0031CA76: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CA60; /* jne: not equal / not zero */

loc_0031CA7E: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CAB8; /* jne: not equal / not zero */

loc_0031CA86: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CA95; /* je: equal / zero */

loc_0031CA8D: ;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    goto loc_0031CA9B;

loc_0031CA95: ;
    eax = MEM32(esi + 4);
    MEM32(edi + 4) = eax;

loc_0031CA9B: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CAAA; /* je: equal / zero */

loc_0031CAA2: ;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    goto loc_0031CAB0;

loc_0031CAAA: ;
    edx = MEM32(esi + 8);
    MEM32(edi + 8) = edx;

loc_0031CAB0: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0031CAB8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    esi = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0031CA50; /* jne: not equal / not zero */

loc_0031CABE: ;
    POP32(esp, ebp);

loc_0031CABF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CAF0
 * Original: 0x0031CAF0 - 0x0031CAFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CAF0: ;
    ecx = MEM32(0x8FC648);
    g_seh_ebp = ebp; sub_000264E1(); return; /* tail jmp 0x000264E1 */

}

/**
 * sub_0031CB00
 * Original: 0x0031CB00 - 0x0031CB56 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CB00: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031CB16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CB13u); } /* indirect call */
    }

loc_0031CB16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CB35; /* je: equal / zero */

loc_0031CB1A: ;
    MEM32(eax) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(0x8FC648) = eax;
    goto loc_0031CB3F;

loc_0031CB35: ;
    MEM32(0x8FC648) = 0;

loc_0031CB3F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2AB0E);
    PUSH32(esp, 0x0031CB52u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_0031CB52: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0031CB70
 * Original: 0x0031CB70 - 0x0031CBD2 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CB70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2AB0E);
    PUSH32(esp, 0x0031CB7Bu); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_0031CB7B: ;
    esi = MEM32(0x8FC648);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CBC6; /* je: equal / zero */

loc_0031CB88: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CB95u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031CB95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031CBBD; /* jl: less (signed <) */

loc_0031CBA0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031CBB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CBADu); } /* indirect call */
    }

loc_0031CBB0: ;
    POP32(esp, edi);
    MEM32(0x8FC648) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031CBBD: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031CBC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CBC2u); } /* indirect call */
    }

loc_0031CBC5: ;
    POP32(esp, edi);

loc_0031CBC6: ;
    MEM32(0x8FC648) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CBF0
 * Original: 0x0031CBF0 - 0x0031CC8B (155 bytes, 61 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CBF0: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031CC0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CC07u); } /* indirect call */
    }

loc_0031CC0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0031CC37; /* je: equal / zero */

loc_0031CC16: ;
    ecx = MEM32(ebp);
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax) = 0x826EFC;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = edx;
    ebx = eax;
    goto loc_0031CC39;

loc_0031CC37: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031CC39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_0031CC48; /* jne: not equal / not zero */

loc_0031CC41: ;
    eax = 0x8C42E4;
    goto loc_0031CC6F;

loc_0031CC48: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031CC5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CC5Bu); } /* indirect call */
    }

loc_0031CC5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CC6D; /* je: equal / zero */

loc_0031CC62: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0031CC6Bu); RECOMP_ABI_CALL(0x000177A2u, sub_000177A2); /* call 0x000177A2 */

loc_0031CC6B: ;
    goto loc_0031CC6F;

loc_0031CC6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031CC6F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0031CC83u); RECOMP_ABI_CALL(0x0002DC0Au, sub_0002DC0A); /* call 0x0002DC0A */

loc_0031CC83: ;
    eax = MEM32(eax + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CCC0
 * Original: 0x0031CCC0 - 0x0031CD3F (127 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CCC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    MEM32(esi) = 0x827194;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031CCF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CCF2u); } /* indirect call */
    }

loc_0031CCF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CD17; /* je: equal / zero */

loc_0031CCF9: ;
    ecx = MEM32(edi);
    MEM32(eax) = 0x826EFC;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 4;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0x10) = esi;
    goto loc_0031CD19;

loc_0031CD17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031CD19: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 0x8C42E4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0031CD32u); RECOMP_ABI_CALL(0x0002DC0Au, sub_0002DC0A); /* call 0x0002DC0A */

loc_0031CD32: ;
    edx = MEM32(eax + 0x2C);
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031CD60
 * Original: 0x0031CD60 - 0x0031CE39 (217 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CD60: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi) = 0x8271A0;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM8(esi + 0x2D) = 1;
    MEM32(esi + 0x30) = ebx;
    PUSH32(esp, 0x0031CD8Fu); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_0031CD8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031CDBB; /* jne: not equal / not zero */

loc_0031CD96: ;
    ecx = esi;
    PUSH32(esp, 0x0031CD9Du); RECOMP_ABI_CALL(0x00023471u, sub_00023471); /* call 0x00023471 */

loc_0031CD9D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0031CDA4u); RECOMP_ABI_CALL(0x00454F90u, sub_00454F90); /* call 0x00454F90 */

loc_0031CDA4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6D696372);
    PUSH32(esp, eax);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0031CDB4u); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_0031CDB4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x2C) = 1;

loc_0031CDBB: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x706C6179);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CDCAu); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_0031CDCA: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6761696E);
    PUSH32(esp, ecx);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0031CDDCu); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_0031CDDC: ;
    MEM32(esi + 0x24) = eax;
    edi = MEM32(0x8FC624);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x14) = edx;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    edi = MEM32(0x8FC644);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031CE04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031CE01u); } /* indirect call */
    }

loc_0031CE04: ;
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(edi + 0x14) = esi;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CE29; /* je: equal / zero */

loc_0031CE1D: ;
    MEM32(eax + 4) = esi;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031CE29: ;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CE70
 * Original: 0x0031CE70 - 0x0031CECD (93 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6D696372);
    PUSH32(esp, eax);
    MEM32(esi) = 0x8271A0;
    PUSH32(esp, 0x0031CE89u); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_0031CE89: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031CE94u); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_0031CE94: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CEA5; /* je: equal / zero */

loc_0031CE9E: ;
    MEM32(esi + 0x1C) = 0;

loc_0031CEA5: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CEB9; /* je: equal / zero */

loc_0031CEAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CEB2u); RECOMP_ABI_CALL(0x006B8EA1u, sub_006B8EA1); /* call 0x006B8EA1 */

loc_0031CEB2: ;
    MEM32(esi + 0x18) = 0;

loc_0031CEB9: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CEC5u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031CEC5: ;
    MEM32(esi) = 0x7F0C50;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CEF0
 * Original: 0x0031CEF0 - 0x0031CF8D (157 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CEF0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF50; /* jne: not equal / not zero */

loc_0031CEFB: ;
    ecx = MEM32(0x8FC624);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031CF3A; /* je: equal / zero */

loc_0031CF08: ;
    MEM32(ecx + 0xB0) = 0;
    PUSH32(esp, 0x0031CF17u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031CF17: ;
    MEM8(esi + 0xAC) = 1;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CF2Au); RECOMP_ABI_CALL(0x0001B70Du, sub_0001B70D); /* call 0x0001B70D */

loc_0031CF2A: ;
    ecx = MEM32(0x8FC624);
    MEM32(0x8FC620) = 1;

loc_0031CF3A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1770);
    PUSH32(esp, 0x0031CF46u); RECOMP_ABI_CALL(0x0002F49Cu, sub_0002F49C); /* call 0x0002F49C */

loc_0031CF46: ;
    POP32(esp, esi);
    MEM32(edi + 0x14) = 2;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031CF50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF76; /* jne: not equal / not zero */

loc_0031CF55: ;
    eax = MEM32(0x8FC620);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF68; /* jne: not equal / not zero */

loc_0031CF5F: ;
    MEM32(edi + 0x14) = 3;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031CF68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF8B; /* jne: not equal / not zero */

loc_0031CF6D: ;
    MEM32(edi + 0x14) = 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031CF76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF8B; /* jne: not equal / not zero */

loc_0031CF7B: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0031CF84u); RECOMP_ABI_CALL(0x00028D18u, sub_00028D18); /* call 0x00028D18 */

loc_0031CF84: ;
    MEM32(edi + 0x14) = 5;

loc_0031CF8B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CFC0
 * Original: 0x0031CFC0 - 0x0031CFF1 (49 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031CFC8u); RECOMP_ABI_CALL(0x00025951u, sub_00025951); /* call 0x00025951 */

loc_0031CFC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi) = 0x8271B8;
    MEM32(esi + 0x84) = 0x8271AC;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    PUSH32(esp, 0x0031CFEDu); RECOMP_ABI_CALL(0x000319A4u, sub_000319A4); /* call 0x000319A4 */

loc_0031CFED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D000
 * Original: 0x0031D000 - 0x0031D007 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D000(void)
{

loc_0031D000: ;
    eax = MEM32(ecx + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D010
 * Original: 0x0031D010 - 0x0031D01B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D010: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002758F(); return; /* tail jmp 0x0002758F */

}

/**
 * sub_0031D020
 * Original: 0x0031D020 - 0x0031D09D (125 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x84;
    MEM32(esi) = 0x8271B8;
    MEM32(edi) = 0x8271AC;
    ebx = 0x14;
    /* nop */

loc_0031D040: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0031D047u); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_0031D047: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031D040; /* jne: not equal / not zero */

loc_0031D04D: ;
    MEM32(esi) = 0x8270F0;
    MEM32(edi) = 0x8270E4;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D065u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031D065: ;
    MEM32(edi) = 0x7F0C50;
    MEM32(esi) = 0x826E3C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x1E;
    /* nop */

loc_0031D080: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D093; /* je: equal / zero */

loc_0031D086: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0031D08Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D08Au); } /* indirect call */
    }

loc_0031D08D: ;
    MEM32(esi) = 0;

loc_0031D093: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031D080; /* jne: not equal / not zero */

loc_0031D099: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D0C0
 * Original: 0x0031D0C0 - 0x0031D13D (125 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D0C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8FC62C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 4;

loc_0031D0D0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D0DF; /* je: equal / zero */

loc_0031D0D4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D0D0; /* jl: less (signed <) */

loc_0031D0DD: ;
    goto loc_0031D0E3;

loc_0031D0DF: ;
    MEM32(esi + eax * 4 + 4) = ecx;

loc_0031D0E3: ;
    MEM32(ecx + 0x244) = ebx;
    MEM8(ecx + 0x2A) = 4;
    MEM16(ecx + 0x28) = LO16(ebx);
    MEM32(ecx + 0x1C) = ebx;
    MEM32(ecx + 0x20) = ebx;
    eax = MEM32(0x8FC630);
    edi = MEM32(0x8FC644);
    esi = ecx + 8;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031D10Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D109u); } /* indirect call */
    }

loc_0031D10C: ;
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(edi + 0x14) = esi;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D12F; /* je: equal / zero */

loc_0031D125: ;
    MEM32(eax + 4) = esi;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031D12F: ;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D160
 * Original: 0x0031D160 - 0x0031D1C3 (99 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D160: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x8271DC;
    MEM32(edi) = 0x8271D0;
    PUSH32(esp, 0x0031D178u); RECOMP_ABI_CALL(0x00023C82u, sub_00023C82); /* call 0x00023C82 */

loc_0031D178: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D184u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031D184: ;
    edx = MEM32(0x8FC62C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx + 4;
    /* nop */

loc_0031D190: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D1AC; /* je: equal / zero */

loc_0031D194: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D190; /* jl: less (signed <) */

loc_0031D19D: ;
    MEM32(edi) = 0x7F0C50;
    POP32(esp, edi);
    MEM32(esi) = 0x826DB0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D1AC: ;
    MEM32(edx + eax * 4 + 4) = 0;
    MEM32(edi) = 0x7F0C50;
    POP32(esp, edi);
    MEM32(esi) = 0x826DB0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D1E0
 * Original: 0x0031D1E0 - 0x0031D1E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D1E0(void)
{

loc_0031D1E0: ;
    eax = 0xE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D1F0
 * Original: 0x0031D1F0 - 0x0031D1F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D1F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00029F0B(); return; /* tail jmp 0x00029F0B */

}

/**
 * sub_0031D200
 * Original: 0x0031D200 - 0x0031D37F (383 bytes, 126 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D200: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D37B; /* je: equal / zero */

loc_0031D20E: ;
    PUSH32(esp, 0x0031D213u); RECOMP_ABI_CALL(0x0003265Bu, sub_0003265B); /* call 0x0003265B */

loc_0031D213: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0031D21Au); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0031D21A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D37B; /* je: equal / zero */

loc_0031D225: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D374; /* je: equal / zero */

loc_0031D230: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031D23Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D239u); } /* indirect call */
    }

loc_0031D23C: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031D374; /* jbe: below or equal (unsigned <=) */

loc_0031D24D: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D269; /* jne: not equal / not zero */

loc_0031D254: ;
    ecx = esi;
    PUSH32(esp, 0x0031D25Bu); RECOMP_ABI_CALL(0x00019426u, sub_00019426); /* call 0x00019426 */

loc_0031D25B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D269; /* je: equal / zero */

loc_0031D25F: ;
    MEM32(esi) = 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D269: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D292; /* jne: not equal / not zero */

loc_0031D270: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0031D282; /* jne: not equal / not zero */

loc_0031D279: ;
    PUSH32(esp, 0x0031D27Eu); RECOMP_ABI_CALL(0x00030B9Eu, sub_00030B9E); /* call 0x00030B9E */

loc_0031D27E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D282: ;
    MEM32(esi + 0x44) = 2;
    PUSH32(esp, 0x0031D28Eu); RECOMP_ABI_CALL(0x0002477Cu, sub_0002477C); /* call 0x0002477C */

loc_0031D28E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D292: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D2B8; /* jne: not equal / not zero */

loc_0031D297: ;
    ecx = esi;
    PUSH32(esp, 0x0031D29Eu); RECOMP_ABI_CALL(0x0001A2B3u, sub_0001A2B3); /* call 0x0001A2B3 */

loc_0031D29E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D37B; /* je: equal / zero */

loc_0031D2A6: ;
    ecx = esi;
    MEM32(esi + 0x44) = 2;
    PUSH32(esp, 0x0031D2B4u); RECOMP_ABI_CALL(0x0002477Cu, sub_0002477C); /* call 0x0002477C */

loc_0031D2B4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D2B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D332; /* jne: not equal / not zero */

loc_0031D2BD: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031D2C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D2C6u); } /* indirect call */
    }

loc_0031D2C9: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031D30D; /* jbe: below or equal (unsigned <=) */

loc_0031D2D5: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x18) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_0031D303; /* jae: above or equal (unsigned >=) */

loc_0031D2E5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0031D2F5u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_0031D2F5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0031D2FFu); RECOMP_ABI_CALL(0x0002477Cu, sub_0002477C); /* call 0x0002477C */

loc_0031D2FF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D303: ;
    MEM32(esi) = 3;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D30D: ;
    ecx = esi;
    PUSH32(esp, 0x0031D314u); RECOMP_ABI_CALL(0x00024510u, sub_00024510); /* call 0x00024510 */

loc_0031D314: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D37B; /* je: equal / zero */

loc_0031D318: ;
    MEM32(esi + 0x44) = 3;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031D32Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D328u); } /* indirect call */
    }

loc_0031D32B: ;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D332: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D37B; /* jne: not equal / not zero */

loc_0031D337: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0031D347u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_0031D347: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031D356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D353u); } /* indirect call */
    }

loc_0031D356: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031D37B; /* jbe: below or equal (unsigned <=) */

loc_0031D362: ;
    ecx = esi;
    MEM32(esi + 0x44) = 2;
    PUSH32(esp, 0x0031D370u); RECOMP_ABI_CALL(0x0002477Cu, sub_0002477C); /* call 0x0002477C */

loc_0031D370: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D374: ;
    MEM32(esi + 0x44) = 0;

loc_0031D37B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031D3E0
 * Original: 0x0031D3E0 - 0x0031D3EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D3E0: ;
    ecx = MEM32(0x8FC644);
    g_seh_ebp = ebp; sub_00018125(); return; /* tail jmp 0x00018125 */

}

/**
 * sub_0031D3F0
 * Original: 0x0031D3F0 - 0x0031D430 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D42E; /* jne: not equal / not zero */

loc_0031D3F8: ;
    PUSH32(esp, 0x0031D3FDu); RECOMP_ABI_CALL(0x0059E42Fu, sub_0059E42F); /* call 0x0059E42F */

loc_0031D3FD: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    if ((_fa != 0)) goto loc_0031D419; /* jne: not equal / not zero */

loc_0031D414: ;
    eax = 1;

loc_0031D419: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2EB37);
    PUSH32(esp, 0x0031D428u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_0031D428: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = 1;

loc_0031D42E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D440
 * Original: 0x0031D440 - 0x0031D451 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D440: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D450; /* je: equal / zero */

loc_0031D445: ;
    PUSH32(esp, 0x2EB37);
    PUSH32(esp, 0x0031D44Fu); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_0031D44F: ;
    POP32(esp, ecx);

loc_0031D450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D460
 * Original: 0x0031D460 - 0x0031D4C0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D460: ;
    eax = MEM32(0x8FC624);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D4BC; /* jne: not equal / not zero */

loc_0031D46C: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031D484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D481u); } /* indirect call */
    }

loc_0031D484: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D4B6; /* je: equal / zero */

loc_0031D488: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0xB4) = ebx;
    MEM8(eax + 0xAC) = LO8(ebx);
    MEM32(eax) = 0x826E2C;
    MEM32(0x8FC624) = eax;
    MEM32(0x8FC620) = 3;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031D4B6: ;
    MEM32(0x8FC624) = ebx;

loc_0031D4BC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D4E0
 * Original: 0x0031D4E0 - 0x0031D52F (79 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D4E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x8270B8;
    MEM32(edi) = 0x8270AC;
    if (CMP_EQ(_fa, _fb)) goto loc_0031D520; /* je: equal / zero */

loc_0031D4FA: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D506u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031D506: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = 0;
    PUSH32(esp, 0x0031D516u); RECOMP_ABI_CALL(0x004545D0u, sub_004545D0); /* call 0x004545D0 */

loc_0031D516: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_0031D520: ;
    MEM32(edi) = 0x7F0C50;
    POP32(esp, edi);
    MEM32(esi) = 0x826DC8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D550
 * Original: 0x0031D550 - 0x0031D5F0 (160 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x8270D4;
    MEM32(esi + 8) = 0x8270C8;
    PUSH32(esp, 0x0031D567u); RECOMP_ABI_CALL(0x0001C946u, sub_0001C946); /* call 0x0001C946 */

loc_0031D567: ;
    edi = MEM32(esi + 0x28);
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D576u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031D576: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0031D593; /* jl: less (signed <) */

loc_0031D581: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031D591u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D58Eu); } /* indirect call */
    }

loc_0031D591: ;
    goto loc_0031D59B;

loc_0031D593: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031D59Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D598u); } /* indirect call */
    }

loc_0031D59B: ;
    edi = MEM32(esi + 0x1C);
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D5AAu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031D5AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0031D5D7; /* jl: less (signed <) */

loc_0031D5B5: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031D5C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D5C3u); } /* indirect call */
    }

loc_0031D5C6: ;
    MEM32(esi + 8) = 0x7F0C50;
    POP32(esp, edi);
    MEM32(esi) = 0x826DC8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031D5D7: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031D5DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D5DCu); } /* indirect call */
    }

loc_0031D5DF: ;
    MEM32(esi + 8) = 0x7F0C50;
    POP32(esp, edi);
    MEM32(esi) = 0x826DC8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D620
 * Original: 0x0031D620 - 0x0031D66F (79 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D620: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x84;
    MEM32(esi) = 0x8270F0;
    MEM32(edi) = 0x8270E4;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D642u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031D642: ;
    MEM32(edi) = 0x7F0C50;
    ecx = esi;
    MEM32(esi) = 0x826E3C;
    PUSH32(esp, 0x0031D655u); RECOMP_ABI_CALL(0x00022B7Fu, sub_00022B7F); /* call 0x00022B7F */

loc_0031D655: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D668; /* je: equal / zero */

loc_0031D65C: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D668u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031D668: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031D690
 * Original: 0x0031D690 - 0x0031D6B1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031D698u); RECOMP_ABI_CALL(0x0002E641u, sub_0002E641); /* call 0x0002E641 */

loc_0031D698: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D6AB; /* je: equal / zero */

loc_0031D69F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D6ABu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031D6AB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031D6C0
 * Original: 0x0031D6C0 - 0x0031D706 (70 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D6C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D6D0u); RECOMP_ABI_CALL(0x000205BEu, sub_000205BE); /* call 0x000205BE */

loc_0031D6D0: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D6FD; /* jne: not equal / not zero */

loc_0031D6D7: ;
    PUSH32(esp, 0x0031D6DCu); RECOMP_ABI_CALL(0x0002B8E7u, sub_0002B8E7); /* call 0x0002B8E7 */

loc_0031D6DC: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D6FD; /* je: equal / zero */

loc_0031D6E3: ;
    ecx = esi + -32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D6EF; /* je: equal / zero */

loc_0031D6EA: ;
    eax = esi + 4;
    goto loc_0031D6F1;

loc_0031D6EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031D6F1: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D6FDu); RECOMP_ABI_CALL(0x0001B70Du, sub_0001B70D); /* call 0x0001B70D */

loc_0031D6FD: ;
    eax = 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031D720
 * Original: 0x0031D720 - 0x0031D797 (119 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D720: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D743; /* je: equal / zero */

loc_0031D72C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D78F; /* jl: less (signed <) */

loc_0031D730: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0031D73Du); RECOMP_ABI_CALL(0x00016CA3u, sub_00016CA3); /* call 0x00016CA3 */

loc_0031D73D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031D743: ;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + 0x28);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, esi);
    esi = MEM32(ecx + -8);
    ecx = MEM32(ecx + 0x30);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x10;
    MEM32(esp + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    MEM32(esp + 4) = 0x826E78;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x1C) = 0xFFFFFFFEu;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031D78Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D78Cu); } /* indirect call */
    }

loc_0031D78E: ;
    POP32(esp, esi);

loc_0031D78F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031D7C0
 * Original: 0x0031D7C0 - 0x0031D81C (92 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D7C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edx + 0x24);
    esi = MEM32(edi + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031D817; /* jle: less or equal (signed <=) */

loc_0031D7D4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x20);
    edx = ebx;
    PUSH32(esp, ebp);
    goto loc_0031D7E0;

    /* nop */

loc_0031D7E0: ;
    ebp = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D7F6; /* je: equal / zero */

loc_0031D7E7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D7E0; /* jl: less (signed <) */

loc_0031D7EF: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031D7F6: ;
    esi = MEM32(ebx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D815; /* je: equal / zero */

loc_0031D7FD: ;
    /* nop */

loc_0031D800: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0031D808u); RECOMP_ABI_CALL(0x00019FCAu, sub_00019FCA); /* call 0x00019FCA */

loc_0031D808: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D800; /* jne: not equal / not zero */

loc_0031D80C: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D815u); RECOMP_ABI_CALL(0x0001BBFEu, sub_0001BBFE); /* call 0x0001BBFE */

loc_0031D815: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0031D817: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031D840
 * Original: 0x0031D840 - 0x0031D89C (92 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D840: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edx + 0x24);
    esi = MEM32(edi + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031D886; /* jle: less or equal (signed <=) */

loc_0031D854: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x20);
    edx = ebx;
    PUSH32(esp, ebp);
    goto loc_0031D860;

    /* nop */

loc_0031D860: ;
    ebp = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D871; /* je: equal / zero */

loc_0031D867: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D860; /* jl: less (signed <) */

loc_0031D86F: ;
    goto loc_0031D884;

loc_0031D871: ;
    esi = MEM32(ebx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D884; /* je: equal / zero */

loc_0031D878: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0031D880u); RECOMP_ABI_CALL(0x00019FCAu, sub_00019FCA); /* call 0x00019FCA */

loc_0031D880: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D878; /* jne: not equal / not zero */

loc_0031D884: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0031D886: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0031D897u); RECOMP_ABI_CALL(0x000356A8u, sub_000356A8); /* call 0x000356A8 */

loc_0031D897: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031D8C0
 * Original: 0x0031D8C0 - 0x0031D962 (162 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D8C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D8D1u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031D8D1: ;
    eax = MEM32(esi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x2C) (32-bit) */
    ebx = MEM32(edi + 0x44);
    ebp = 0x8C42F0;
    if (CMP_EQ(_fa, _fb)) goto loc_0031D8E6; /* je: equal / zero */

loc_0031D8E4: ;
    ebp = edi;

loc_0031D8E6: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031D8FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D8FAu); } /* indirect call */
    }

loc_0031D8FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D91E; /* je: equal / zero */

loc_0031D901: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0031D91Cu); RECOMP_ABI_CALL(0x0002250Du, sub_0002250D); /* call 0x0002250D */

loc_0031D91C: ;
    goto loc_0031D920;

loc_0031D91E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031D920: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + ebx * 4) = eax;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(edx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ebx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D939; /* je: equal / zero */

loc_0031D92F: ;
    eax = edx;
    eax = MEM32(eax + ebx * 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031D93B;

loc_0031D939: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031D93B: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + ebx * 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0031D950u); RECOMP_ABI_CALL(0x00031CABu, sub_00031CAB); /* call 0x00031CAB */

loc_0031D950: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031D95Bu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031D95B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031D990
 * Original: 0x0031D990 - 0x0031DA94 (260 bytes, 99 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D9A0u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031D9A0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ecx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0031D9C5; /* je: equal / zero */

loc_0031D9B0: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + ebx * 8 + 4);
    ecx = eax;
    eax = edx + ebx * 8;
    eax = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031D9C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031D9C2u); } /* indirect call */
    }

loc_0031D9C5: ;
    ecx = MEM32(esi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0031DA3C; /* jle: less or equal (signed <=) */

loc_0031D9D2: ;
    PUSH32(esp, ebp);

loc_0031D9D3: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DA2B; /* je: equal / zero */

loc_0031D9DD: ;
    edi = MEM32(esi + 0x14);
    edi = MEM32(edi + ebx * 8);
    edi = MEM32(edi + 4);
    eax = MEM32(eax + 8);
    ebp = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DA12; /* je: equal / zero */

loc_0031D9F0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031DA12; /* jle: less or equal (signed <=) */

loc_0031D9F6: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DA06; /* je: equal / zero */

loc_0031DA00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031DA06u); RECOMP_ABI_CALL(0x00030BC1u, sub_00030BC1); /* call 0x00030BC1 */

loc_0031DA06: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D9F6; /* jl: less (signed <) */

loc_0031DA0E: ;
    edx = MEM32(esp + 0x14);

loc_0031DA12: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + ebx * 8 + 4);
    eax = edx + ebx * 8;
    eax = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031DA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DA28u); } /* indirect call */
    }

loc_0031DA2B: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0031D9D3; /* jl: less (signed <) */

loc_0031DA3B: ;
    POP32(esp, ebp);

loc_0031DA3C: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + ebx * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DA4D; /* je: equal / zero */

loc_0031DA46: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031DA4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DA4Au); } /* indirect call */
    }

loc_0031DA4D: ;
    eax = MEM32(esi + 0x14);
    MEM32(eax + ebx * 8) = 0;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + ebx * 8 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0031DA63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DA60u); } /* indirect call */
    }

loc_0031DA63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DA78; /* je: equal / zero */

loc_0031DA67: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + ebx * 8 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DA78; /* je: equal / zero */

loc_0031DA72: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031DA78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DA76u); } /* indirect call */
    }

loc_0031DA78: ;
    eax = MEM32(esi + 0x14);
    MEM32(eax + ebx * 8 + 4) = 0;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031DA8Eu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031DA8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031DAE0
 * Original: 0x0031DAE0 - 0x0031DBCA (234 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DAE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x827170;
    MEM32(esi + 4) = 0x82715C;
    MEM32(esi + 8) = 0x827158;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031DB02u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031DB02: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031DB0Du); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031DB0D: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0031DB15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DB12u); } /* indirect call */
    }

loc_0031DB15: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031DB20u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031DB20: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DB2E; /* je: equal / zero */

loc_0031DB27: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031DB2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DB2Bu); } /* indirect call */
    }

loc_0031DB2E: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0031DB3Eu); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_0031DB3E: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DB80; /* je: equal / zero */

loc_0031DB45: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0031DB4Du); RECOMP_ABI_CALL(0x00032C91u, sub_00032C91); /* call 0x00032C91 */

loc_0031DB4D: ;
    ebx = MEM32(0x8FC63C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DB59u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031DB59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0031DB77; /* jl: less (signed <) */

loc_0031DB64: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031DB75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DB72u); } /* indirect call */
    }

loc_0031DB75: ;
    goto loc_0031DB7F;

loc_0031DB77: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031DB7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DB7Cu); } /* indirect call */
    }

loc_0031DB7F: ;
    POP32(esp, ebx);

loc_0031DB80: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031DBB6; /* je: equal / zero */

loc_0031DB88: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0031DBAD; /* je: equal / zero */

loc_0031DB92: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0031DB99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DB96u); } /* indirect call */
    }

loc_0031DB99: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031DBA4u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031DBA4: ;
    MEM32(esi + 4) = 0x7F0C30;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031DBAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DBB3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0031DBB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031DBB6: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031DBC1u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031DBC1: ;
    MEM32(esi + 4) = 0x7F0C30;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DC10
 * Original: 0x0031DC10 - 0x0031DC52 (66 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DC1Fu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031DC1F: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DC31u); RECOMP_ABI_CALL(0x00033DB2u, sub_00033DB2); /* call 0x00033DB2 */

loc_0031DC31: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x0031DC42u); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031DC42: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031DC4Du); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031DC4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031DC70
 * Original: 0x0031DC70 - 0x0031DECE (606 bytes, 185 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031DC70: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0031DEC1; /* ja: above (unsigned >) */

loc_0031DC8E: ;
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(eax * 4 + 0x31DED0); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0031DC96u) goto loc_0031DC96;
    if (_jt == 0x0031DD7Du) goto loc_0031DD7D;
    if (_jt == 0x0031DD92u) goto loc_0031DD92;
    if (_jt == 0x0031DE03u) goto loc_0031DE03;
    if (_jt == 0x0031DE3Du) goto loc_0031DE3D;
    if (_jt == 0x0031DE52u) goto loc_0031DE52;
    if (_jt == 0x0031DE77u) goto loc_0031DE77;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031DC96: ;
    eax = MEM32(esp + 0xA8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0xA4);
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(eax));
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 1;
    MEM32(esp + 0x14) = ebx;
    if ((_fa != 0)) goto loc_0031DEC0; /* jne: not equal / not zero */

loc_0031DCC3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0031DCD1u); RECOMP_ABI_CALL(0x0002FD93u, sub_0002FD93); /* call 0x0002FD93 */

loc_0031DCD1: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DCEE; /* je: equal / zero */

loc_0031DCD9: ;
    eax = MEM32(esi + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    edx = eax + 0x70;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0031DCEAu); RECOMP_ABI_CALL(0x00032A98u, sub_00032A98); /* call 0x00032A98 */

loc_0031DCEA: ;
    ecx = MEM32(esp + 0xC);

loc_0031DCEE: ;
    eax = MEM32(esi + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    MEM32(ecx + eax + 8) = 5;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    eax = ecx + edx + 0xC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM32(esi + 0x28) = eax;
    MEM32(esp + 0x64) = ebx;
    MEM8(esp + 0x24) = LO8(ebx);
    MEM32(esp + 0x20) = 0x8270A0;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    PUSH32(esp, 0x0031DD35u); RECOMP_ABI_CALL(0x00030FEAu, sub_00030FEA); /* call 0x00030FEA */

loc_0031DD35: ;
    ecx = MEM32(esi + 0x20);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031DD42u); RECOMP_ABI_CALL(0x00032A98u, sub_00032A98); /* call 0x00032A98 */

loc_0031DD42: ;
    eax = MEM32(esi + 0x20);
    ecx = esi;
    MEM32(eax + 8) = 5;
    PUSH32(esp, 0x0031DD53u); RECOMP_ABI_CALL(0x0002503Cu, sub_0002503C); /* call 0x0002503C */

loc_0031DD53: ;
    edi = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x5C);
    edx = MEM32(esi);
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0031DD65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DD62u); } /* indirect call */
    }

loc_0031DD65: ;
    MEM32(edi + 0x5C) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x48) = 5;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031DD7D: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x48) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031DD92: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DDCE; /* je: equal / zero */

loc_0031DD97: ;
    PUSH32(esp, 0x0031DD9Cu); RECOMP_ABI_CALL(0x0001230Bu, sub_0001230B); /* call 0x0001230B */

loc_0031DD9C: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x8FC624);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031DDACu); RECOMP_ABI_CALL(0x0002FE15u, sub_0002FE15); /* call 0x0002FE15 */

loc_0031DDAC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x8FC624);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DDBDu); RECOMP_ABI_CALL(0x0002F49Cu, sub_0002F49C); /* call 0x0002F49C */

loc_0031DDBD: ;
    POP32(esp, ebx);
    MEM32(esi + 0x48) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031DDCE: ;
    ecx = MEM32(0x8FC624);
    PUSH32(esp, 0x0031DDD9u); RECOMP_ABI_CALL(0x00027265u, sub_00027265); /* call 0x00027265 */

loc_0031DDD9: ;
    PUSH32(esp, 0x0031DDDEu); RECOMP_ABI_CALL(0x00016433u, sub_00016433); /* call 0x00016433 */

loc_0031DDDE: ;
    MEM32(esi + 0x48) = 3;
    PUSH32(esp, 0x0031DDEAu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0031DDEA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x77);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031DDF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DDF2u); } /* indirect call */
    }

loc_0031DDF5: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031DE03: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(0x8FC624);
    esi = MEM32(eax + 0x98);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x9C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031DE24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DE22u); } /* indirect call */
    }

loc_0031DE24: ;
    ecx = MEM32(0x8FC624);
    PUSH32(esp, 0x0031DE2Fu); RECOMP_ABI_CALL(0x00027265u, sub_00027265); /* call 0x00027265 */

loc_0031DE2F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031DE3D: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x48) = 3;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031DE52: ;
    MEM32(esi + 0x48) = 4;
    PUSH32(esp, 0x0031DE5Eu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0031DE5E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x79);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031DE69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DE66u); } /* indirect call */
    }

loc_0031DE69: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0031DE77: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x1C;
    ebx = 1;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = 0x80;
    MEM32(esp + 0x1C) = eax;
    MEM8(esp + 0x20) = LO8(ebx);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0031DEA4u); RECOMP_ABI_CALL(0x00036652u, sub_00036652); /* call 0x00036652 */

loc_0031DEA4: ;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x48) = 2;
    ecx = MEM32(edx + 0x5C);
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0031DEC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DEBDu); } /* indirect call */
    }

loc_0031DEC0: ;
    POP32(esp, ebx);

loc_0031DEC1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031DECE
 * Original: 0x0031DECE - 0x0031DF90 (194 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DECE(void)
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

loc_0031DECE: ;
    edi = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) ^ eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    /* FPU: fnsave dword ptr [ecx] */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x520031DE) = MEM8(0x520031DE) + HI8(ebx);
    _fa = (uint32_t)(MEM8(0x520031DE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM16(ecx)); /* fidiv word ptr [ecx] */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + -35) = MEM8(ebp + -35) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebp + -35)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) ^ eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0031DEC4(); return; } /* ja: above (unsigned >) */

loc_0031DEE6: ;
    MEM32(eax) = MEM32(eax) ^ eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    fp_top() = RECOMP_FP_PC(fp_top() / MEMD(ecx)); /* fdiv qword ptr [ecx] */
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_0031DF90
 * Original: 0x0031DF90 - 0x0031E0A4 (276 bytes, 81 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DF90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFAu (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031E04E; /* je: equal / zero */

loc_0031DFA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031DFE1; /* jne: not equal / not zero */

loc_0031DFA5: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0031DFABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031DFA8u); } /* indirect call */
    }

loc_0031DFAB: ;
    eax = MEM32(esi + 0x44);
    edi = 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031DFE7; /* je: equal / zero */

loc_0031DFB7: ;
    PUSH32(esp, 0x0031DFBCu); RECOMP_ABI_CALL(0x0001230Bu, sub_0001230B); /* call 0x0001230B */

loc_0031DFBC: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FC624);
    PUSH32(esp, 0x0031DFCCu); RECOMP_ABI_CALL(0x0002FE15u, sub_0002FE15); /* call 0x0002FE15 */

loc_0031DFCC: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x8FC624);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031DFDDu); RECOMP_ABI_CALL(0x0002F49Cu, sub_0002F49C); /* call 0x0002F49C */

loc_0031DFDD: ;
    MEM32(esi + 0x44) = edi;
    POP32(esp, edi);

loc_0031DFE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0031DFE7: ;
    ecx = MEM32(0x8FC624);
    SET_LO8(eax, MEM8(ecx + 0xAC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = ecx + 0xAC;
    if (CMP_EQ(_fa, _fb)) goto loc_0031E012; /* je: equal / zero */

loc_0031DFFD: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FC644);
    PUSH32(esp, 0x0031E009u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031E009: ;
    MEM8(edi) = 0;
    ecx = MEM32(0x8FC624);

loc_0031E012: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E030; /* je: equal / zero */

loc_0031E016: ;
    MEM32(0x8FC620) = 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031E026u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E024u); } /* indirect call */
    }

loc_0031E026: ;
    MEM32(0x8FC624) = 0;

loc_0031E030: ;
    MEM32(esi + 0x44) = 3;
    PUSH32(esp, 0x0031E03Cu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0031E03C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x77);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031E047u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E044u); } /* indirect call */
    }

loc_0031E047: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0031E04E: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(0x8FC624);
    edx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 0x28);
    MEM32(eax) = edx;
    eax = MEM32(0x8FC624);
    edx = MEM32(eax + 0x9C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE4A);
    MEM32(ecx + 0x24) = edx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031E076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E074u); } /* indirect call */
    }

loc_0031E076: ;
    eax = MEM32(0x8FC624);
    SET_LO8(ecx, MEM8(eax + 0xAC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax + 0xAC;
    if (CMP_EQ(_fa, _fb)) goto loc_0031DFE1; /* je: equal / zero */

loc_0031E08F: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E09Bu); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_0031E09B: ;
    MEM8(esi) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031E0F0
 * Original: 0x0031E0F0 - 0x0031E253 (355 bytes, 115 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E0F0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E104u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031E104: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    ebx = MEM32(esp + 0x48);
    if (CMP_LE(_fas, _fbs)) goto loc_0031E16A; /* jle: less or equal (signed <=) */

loc_0031E10E: ;
    eax = esp + 0x1C;
    PUSH32(esp, 4);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0x23;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x54) = 0;
    PUSH32(esp, 0x0031E135u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031E135: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x0031E14Au); RECOMP_ABI_CALL(0x00036652u, sub_00036652); /* call 0x00036652 */

loc_0031E14A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x8C42F0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x0031E16Au); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031E16A: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031E175u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031E175: ;
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031E183u); RECOMP_ABI_CALL(0x00033DB2u, sub_00033DB2); /* call 0x00033DB2 */

loc_0031E183: ;
    edi = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x0031E195u); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031E195: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031E1A0u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031E1A0: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    MEM32(esp + 0x48) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0031E236; /* jle: less or equal (signed <=) */

loc_0031E1AD: ;
    /* nop */

loc_0031E1B0: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + ebp + 8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    edi = eax + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_0031E21F; /* jne: not equal / not zero */

loc_0031E1C1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E21F; /* je: equal / zero */

loc_0031E1C6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E21F; /* je: equal / zero */

loc_0031E1CA: ;
    edx = MEM32(eax + 0x60);
    PUSH32(esp, 4);
    eax = esp + 0x48;
    ecx = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0x23;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x50) = edx;
    PUSH32(esp, 0x0031E1EEu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031E1EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x0031E203u); RECOMP_ABI_CALL(0x00036652u, sub_00036652); /* call 0x00036652 */

loc_0031E203: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E21Fu); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031E21F: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x64;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x48) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0031E1B0; /* jl: less (signed <) */

loc_0031E236: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031E23Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E23Bu); } /* indirect call */
    }

loc_0031E23E: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031E249u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031E249: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}
