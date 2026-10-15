/**
 * nhl_07_recomp - Recompiled code chunk 144
 * Functions: 250 (0x00262AC0 - 0x0026B680)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00262AC0
 * Original: 0x00262AC0 - 0x00262ACC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262AC0: ;
    PUSH32(esp, 0x00262AC5u); RECOMP_ABI_CALL(0x000240CEu, sub_000240CE); /* call 0x000240CE */

loc_00262AC5: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002D16F(); return; /* tail jmp 0x0002D16F */

}

/**
 * sub_00262AD0
 * Original: 0x00262AD0 - 0x00262BCF (255 bytes, 98 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00262AD9u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00262AD9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x14);
    ebx = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00262AECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262AE9u); } /* indirect call */
    }

loc_00262AEC: ;
    ebp = MEM32(esp + 0x18);
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00262AF4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00262AFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262AFCu); } /* indirect call */
    }

loc_00262AFF: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00262B0C; /* jle: less or equal (signed <=) */

loc_00262B07: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00262B19; /* je: equal / zero */

loc_00262B0B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00262B0C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00262AF4; /* jl: less (signed <) */

loc_00262B12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00262B19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebx = 0xF;
    MEM32(esp + 0x18) = 0xA;
    if (CMP_LE(_fas, _fbs)) goto loc_00262B38; /* jle: less or equal (signed <=) */

loc_00262B2B: ;
    ebx = 0x19;
    MEM32(esp + 0x18) = 0xF;

loc_00262B38: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00262B41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262B3Eu); } /* indirect call */
    }

loc_00262B41: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00262B4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262B49u); } /* indirect call */
    }

loc_00262B4C: ;
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00262B8C; /* jle: less or equal (signed <=) */

loc_00262B65: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2F;
    PUSH32(esp, 0x00262B74u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00262B74: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00262B80; /* jns: not sign (positive) */

loc_00262B7B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00262B80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00262BB7; /* jle: less or equal (signed <=) */

loc_00262B84: ;
    MEM32(ebx) = 0x2E;
    goto loc_00262BB7;

loc_00262B8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00262BC8; /* jge: greater or equal (signed >=) */

loc_00262B92: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2D;
    PUSH32(esp, 0x00262BA1u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00262BA1: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00262BAD; /* jns: not sign (positive) */

loc_00262BA8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00262BAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00262BB7; /* jle: less or equal (signed <=) */

loc_00262BB1: ;
    MEM32(ebx) = 0x2B;

loc_00262BB7: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00262BC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262BBFu); } /* indirect call */
    }

loc_00262BC2: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_00262BC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00262C10
 * Original: 0x00262C10 - 0x00262D1E (270 bytes, 107 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00262C19u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00262C19: ;
    ebp = eax;
    ebp = ebp & 0x80000001u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00262C28; /* jns: not sign (positive) */

loc_00262C23: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFEu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00262C28: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00262C31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262C2Eu); } /* indirect call */
    }

loc_00262C31: ;
    ebx = MEM32(esp + 0x18);
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00262C40: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00262C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262C48u); } /* indirect call */
    }

loc_00262C4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00262C68; /* jne: not equal / not zero */

loc_00262C50: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00262C5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262C58u); } /* indirect call */
    }

loc_00262C5B: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00262C68; /* jle: less or equal (signed <=) */

loc_00262C63: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00262C75; /* je: equal / zero */

loc_00262C67: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00262C68: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00262C40; /* jl: less (signed <) */

loc_00262C6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00262C75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebp = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00262C84; /* jle: less or equal (signed <=) */

loc_00262C7F: ;
    ebp = 0x28;

loc_00262C84: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00262C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262C8Au); } /* indirect call */
    }

loc_00262C8D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00262C98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262C95u); } /* indirect call */
    }

loc_00262C98: ;
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00262CDB; /* jle: less or equal (signed <=) */

loc_00262CB2: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2F;
    PUSH32(esp, 0x00262CC2u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00262CC2: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00262CCE; /* jns: not sign (positive) */

loc_00262CC9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00262CCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00262D06; /* jle: less or equal (signed <=) */

loc_00262CD2: ;
    MEM32(ebp) = 0x2E;
    goto loc_00262D06;

loc_00262CDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00262D17; /* jge: greater or equal (signed >=) */

loc_00262CDF: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2D;
    PUSH32(esp, 0x00262CEFu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00262CEF: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00262CFB; /* jns: not sign (positive) */

loc_00262CF6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00262CFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00262D06; /* jle: less or equal (signed <=) */

loc_00262CFF: ;
    MEM32(ebp) = 0x2C;

loc_00262D06: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00262D11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262D0Eu); } /* indirect call */
    }

loc_00262D11: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_00262D17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00262D70
 * Original: 0x00262D70 - 0x00262EA4 (308 bytes, 101 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262D70: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x1C4;
    if (CMP_NE(_fa, _fb)) goto loc_00262E0A; /* jne: not equal / not zero */

loc_00262D8B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00262D90: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00262DE7; /* je: equal / zero */

loc_00262D94: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00262D90; /* jl: less (signed <) */

loc_00262D9D: ;
    edi = MEM32(esi + 0x278);
    ecx = edi + edi * 2;
    ebx = esi + ecx * 4;
    MEM32(ebx + 0x1C4) = edx;
    edx = edi + edi * 2 + 0x72;
    MEM32(esi + edx * 4) = 1;
    PUSH32(esp, 0x00262DBFu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00262DBF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edi + 1;
    ecx = 0xF;
    POP32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1CC) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x278) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00262DE7: ;
    ecx = eax + eax * 2 + 0x72;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    eax = eax + eax * 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + eax * 4 + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + eax * 4 + 0x1CC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00262E9E; /* jge: greater or equal (signed >=) */

loc_00262E01: ;
    POP32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00262E0A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00262E10: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00262E23; /* je: equal / zero */

loc_00262E14: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00262E10; /* jl: less (signed <) */

loc_00262E1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00262E23: ;
    edx = 0xE;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x278) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00262E7F; /* jge: greater or equal (signed >=) */

loc_00262E35: ;
    eax = eax + eax * 2;
    ecx = esi + eax * 4 + 0x1C4;
    PUSH32(esp, ebp);

loc_00262E40: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00262E7E; /* je: equal / zero */

loc_00262E44: ;
    eax = MEM32(esi + 0x278);
    eax = eax + eax * 2;
    eax = esi + eax * 4;
    ebx = eax + 0x1D0;
    ebp = MEM32(ebx);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esi + 0x278);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x278) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00262E40; /* jl: less (signed <) */

loc_00262E7E: ;
    POP32(esp, ebp);

loc_00262E7F: ;
    eax = MEM32(esi + 0x278);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4;
    edx = eax + eax * 2 + 0x72;
    MEM32(ecx + 0x1C4) = edi;
    MEM32(ecx + 0x1CC) = edi;
    MEM32(esi + edx * 4) = edi;

loc_00262E9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00262F00
 * Original: 0x00262F00 - 0x00262F3C (60 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, 1);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1C4;

loc_00262F10: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00262F22; /* je: equal / zero */

loc_00262F14: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00262F10; /* jl: less (signed <) */

loc_00262F1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00262F22: ;
    esi = edx + edx * 2 + 0x72;
    esi = MEM32(ecx + esi * 4);
    edx = edx + edx * 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 4 + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + edx * 4 + 0x1CC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00262F37; /* jl: less (signed <) */

loc_00262F35: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00262F37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00262F50
 * Original: 0x00262F50 - 0x00262F57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262F50(void)
{

loc_00262F50: ;
    SET_LO8(eax, MEM8(ecx + 0x1C0));
    esp += 4; return; /* ret */

}

/**
 * sub_00262F60
 * Original: 0x00262F60 - 0x00262F83 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262F60(void)
{

loc_00262F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x58) = 9;
    PUSH32(esp, 0x00262F6Fu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00262F6F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00262F7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262F77u); } /* indirect call */
    }

loc_00262F7A: ;
    MEM8(esi + 0x1C0) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00262F90
 * Original: 0x00262F90 - 0x00262F97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262F90(void)
{

loc_00262F90: ;
    eax = MEM32(ecx + 0x1B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00262FA0
 * Original: 0x00262FA0 - 0x00263043 (163 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262FA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00262FABu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00262FAB: ;
    ecx = eax;
    PUSH32(esp, 0x00262FB2u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00262FB2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00262FBCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00262FBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, 0x00262FC6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00262FC6: ;
    ecx = eax;
    PUSH32(esp, 0x00262FCDu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00262FCD: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00262FDBu); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_00262FDB: ;
    eax = 1;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = 3;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x10) = edi;
    ecx = 2;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = 4;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x0026301Cu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026301C: ;
    ecx = eax;
    PUSH32(esp, 0x00263023u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00263023: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00263030; /* je: equal / zero */

loc_00263027: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026302Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026302D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00263030: ;
    PUSH32(esp, 0x00263035u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00263035: ;
    ecx = eax;
    PUSH32(esp, 0x0026303Cu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026303C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00263070
 * Original: 0x00263070 - 0x002630AC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263070: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    edx = 1;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0xC;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x38) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002630C0
 * Original: 0x002630C0 - 0x00263103 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002630C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002630C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002630D5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002630D5: ;
    ecx = eax;
    PUSH32(esp, 0x002630DCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002630DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002630E5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002630E5: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x80F0C8;
    MEM32(esi + 8) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00263120
 * Original: 0x00263120 - 0x0026314D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00263120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00263140; /* je: equal / zero */

loc_00263130: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00263136u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00263136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00263140: ;
    PUSH32(esp, 0x00263145u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00263145: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00263160
 * Original: 0x00263160 - 0x00263171 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263160(void)
{

loc_00263160: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 8) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00263180
 * Original: 0x00263180 - 0x00263209 (137 bytes, 52 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263180: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002631F8; /* jge: greater or equal (signed >=) */

loc_00263195: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002631A0;

    /* nop */

loc_002631A0: ;
    eax = ZX8(MEM8(esi + 8));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 0x80F0D0);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x002631CBu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002631CB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x10), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002631EA; /* je: equal / zero */

loc_002631D5: ;
    ecx = ZX16(MEM16(esp + 8));
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002631EA; /* jb: below (unsigned <) */

loc_002631E1: ;
    edx = ZX16(MEM16(esp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00263200; /* jbe: below or equal (unsigned <=) */

loc_002631EA: ;
    ecx = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    MEM32(esi + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002631A0; /* jl: less (signed <) */

loc_002631F8: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00263200: ;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00263230
 * Original: 0x00263230 - 0x00263297 (103 bytes, 29 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263230: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(esp + 0x18));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0x80F0D0);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00263267u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263267: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026328F; /* je: equal / zero */

loc_00263272: ;
    ecx = ZX16(MEM16(esp));
    edx = MEM32(esp + 0x1C);
    eax = ZX16(MEM16(esp + 4));
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0026328F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002632B0
 * Original: 0x002632B0 - 0x002632E5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002632B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002632B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002632C5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002632C5: ;
    ecx = eax;
    PUSH32(esp, 0x002632CCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002632CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002632D5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002632D5: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80F144;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00263300
 * Original: 0x00263300 - 0x0026332D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00263300: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00263320; /* je: equal / zero */

loc_00263310: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00263316u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00263316: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00263320: ;
    PUSH32(esp, 0x00263325u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00263325: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00263340
 * Original: 0x00263340 - 0x00263387 (71 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263340: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x1C));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x80F1B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026335Eu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026335E: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x80F148);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026337Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026337D: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002633A0
 * Original: 0x002633A0 - 0x002633D6 (54 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002633A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002633A0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_GE(_fas, _fbs)) goto loc_002633C8; /* jge: greater or equal (signed >=) */

loc_002633B1: ;
    eax = MEM32(ecx + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x9C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x27;
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
    esp += 12; return; /* ret 8 */

loc_002633C8: ;
    ecx = 0x27;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002633F0
 * Original: 0x002633F0 - 0x00263591 (417 bytes, 137 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002633F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002633F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00263406u); RECOMP_ABI_CALL(0x000262ACu, sub_000262AC); /* call 0x000262AC */

loc_00263406: ;
    esi = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x18);
    edi = esi + 0x56;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x28) = LO8(ebx);
    edx = edi;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM16(edx + 8) = LO16(ecx);
    MEM32(esi + 0x94) = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002634AE; /* jne: not equal / not zero */

loc_0026342F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = esi + 0x99;
    PUSH32(esp, edx);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    ebp = esi + 0x2A;
    PUSH32(esp, ebp);
    eax = esi + 0x8E;
    PUSH32(esp, eax);
    ecx = esi + 0x8D;
    PUSH32(esp, ecx);
    edx = esi + 0x8C;
    PUSH32(esp, edx);
    eax = esi + 0x8F;
    PUSH32(esp, eax);
    ecx = esi + 0x6A;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esi + 0x2E;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, 0x80F4C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00263487u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263487: ;
    SET_LO16(ebp, MEM16(ebp));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x28) = LO8(ebx);
    MEM32(esi + 0x90) = 0;
    MEM16(esi + 0x88) = LO16(ebp);
    MEM16(esi + 0x8A) = LO16(ebp);
    goto loc_0026354A;

loc_002634AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026354A; /* jne: not equal / not zero */

loc_002634B7: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = esi + 0x98;
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ebp = esi + 0x8A;
    PUSH32(esp, ebp);
    ebx = esi + 0x88;
    PUSH32(esp, ebx);
    ecx = esi + 0x2A;
    PUSH32(esp, ecx);
    edx = esi + 0x8F;
    PUSH32(esp, edx);
    eax = esi + 0x6A;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x2E;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, 0x80F368);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002634FDu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002634FD: ;
    edx = esi + 0x60;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00263507: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00263507; /* jne: not equal / not zero */

loc_00263511: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx) = MEM16(ebx) + 0xC8;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fb = (uint32_t)(0xC8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebp) = MEM16(ebp) + 0xC8;
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x2C);
    MEM8(esi + 0x99) = LO8(ecx);
    MEM8(esi + 0x8C) = 2;
    MEM8(esi + 0x8D) = LO8(ecx);
    MEM8(esi + 0x8E) = LO8(ecx);
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi + 0x90) = 1;

loc_0026354A: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 8;
    PUSH32(esp, edx);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x80F1F0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00263584u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263584: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263600
 * Original: 0x00263600 - 0x002637A0 (416 bytes, 135 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00263600: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, 0x80C4C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00263635u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263635: ;
    eax = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = eax;
    eax = esi + 0x56;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x28) = LO8(ebx);
    MEM32(esi + 0x94) = 0;
    ebp = eax;
    MEM32(ebp) = edi;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + 4) = edi;
    MEM16(ebp + 8) = LO16(edi);
    if (CMP_NE(_fa, _fb)) goto loc_002636E2; /* jne: not equal / not zero */

loc_0026366E: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = esi + 0x99;
    PUSH32(esp, ecx);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    edi = esi + 0x2A;
    PUSH32(esp, edi);
    ecx = esi + 0x8E;
    PUSH32(esp, ecx);
    edx = esi + 0x8D;
    PUSH32(esp, edx);
    ecx = esi + 0x8C;
    PUSH32(esp, ecx);
    edx = esi + 0x8F;
    PUSH32(esp, edx);
    ecx = esi + 0x6A;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x2E;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, 0x80F4C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002636C2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002636C2: ;
    SET_LO16(edi, MEM16(edi));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x90) = 0;
    MEM16(esi + 0x88) = LO16(edi);
    MEM16(esi + 0x8A) = LO16(edi);
    goto loc_00263756;

loc_002636E2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00263759; /* jne: not equal / not zero */

loc_002636E7: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    edi = esi + 0x8A;
    PUSH32(esp, edi);
    ebp = esi + 0x88;
    PUSH32(esp, ebp);
    ecx = esi + 0x2A;
    PUSH32(esp, ecx);
    edx = esi + 0x8F;
    PUSH32(esp, edx);
    ecx = esi + 0x6A;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x2E;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, 0x80F7F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00263729u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263729: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebp) = MEM16(ebp) + 0xC8;
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi) = MEM16(edi) + 0xC8;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(esi + 0x8C) = 2;
    MEM8(esi + 0x8D) = 0;
    MEM8(esi + 0x8E) = 0;
    MEM32(esi + 0x90) = 1;

loc_00263756: ;
    MEM8(esi + 0x28) = LO8(ebx);

loc_00263759: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 8;
    PUSH32(esp, edx);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x80F678);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00263793u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263793: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263810
 * Original: 0x00263810 - 0x0026386D (93 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263810: ;
    eax = MEM32(0x8FA520);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026383D; /* je: equal / zero */

loc_00263821: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00263826u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00263823u); } /* indirect call */
    }

loc_00263826: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026383D; /* je: equal / zero */

loc_0026382A: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0026383Bu); RECOMP_ABI_CALL(0x000262ACu, sub_000262AC); /* call 0x000262AC */

loc_0026383B: ;
    goto loc_0026384E;

loc_0026383D: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0026384Eu); RECOMP_ABI_CALL(0x0002D2EBu, sub_0002D2EB); /* call 0x0002D2EB */

loc_0026384E: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esp + 8) = edx;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00263890
 * Original: 0x00263890 - 0x002638FB (107 bytes, 38 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263890: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = 0;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002638C7; /* je: equal / zero */

loc_002638A9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002638AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002638ABu); } /* indirect call */
    }

loc_002638AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002638C7; /* je: equal / zero */

loc_002638B2: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x80F978);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_002638DA;

loc_002638C7: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x80F944);
    eax = esp + 0x14;
    PUSH32(esp, eax);

loc_002638DA: ;
    PUSH32(esp, 0x002638DFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002638DF: ;
    ecx = MEM32(esi + 4);
    edi = ZX16(MEM16(esp + 0x18));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002638F0u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_002638F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00263920
 * Original: 0x00263920 - 0x00263923 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263920(void)
{

loc_00263920: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263930
 * Original: 0x00263930 - 0x0026394D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263930: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, 0x9C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00263947u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_00263947: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00263960
 * Original: 0x00263960 - 0x00263ADC (380 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263960: ;
    eax = MEM32(0x8FA520);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002639CE; /* je: equal / zero */

loc_00263971: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00263976u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00263973u); } /* indirect call */
    }

loc_00263976: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002639CE; /* je: equal / zero */

loc_0026397A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x98;
    PUSH32(esp, ecx);
    edx = eax + 0x2C;
    PUSH32(esp, edx);
    ecx = eax + 0x8A;
    PUSH32(esp, ecx);
    edx = eax + 0x88;
    PUSH32(esp, edx);
    ecx = eax + 0x2A;
    PUSH32(esp, ecx);
    edx = eax + 0x8F;
    PUSH32(esp, edx);
    ecx = eax + 0x6A;
    PUSH32(esp, ecx);
    edx = eax + 0x56;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x80F368);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    goto loc_00263A21;

loc_002639CE: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x9C);
    eax = ecx + edx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = eax + 0x98;
    PUSH32(esp, edx);
    ecx = eax + 0x2C;
    PUSH32(esp, ecx);
    edx = eax + 0x8A;
    PUSH32(esp, edx);
    ecx = eax + 0x88;
    PUSH32(esp, ecx);
    edx = eax + 0x2A;
    PUSH32(esp, edx);
    ecx = eax + 0x8F;
    PUSH32(esp, ecx);
    edx = eax + 0x6A;
    PUSH32(esp, edx);
    ecx = eax + 0x56;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x80F7F0);
    edx = esp + 0x34;
    PUSH32(esp, edx);

loc_00263A21: ;
    PUSH32(esp, 0x00263A26u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263A26: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    MEM8(eax + ecx + 0x8C) = 2;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x9C);
    MEM8(edx + eax + 0x8D) = 0;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x9C);
    MEM8(ecx + edx + 0x8E) = 0;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    _fb = (uint32_t)(0xC8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + ecx + 0x88) = MEM16(eax + ecx + 0x88) + 0xC8;
    _fa = (uint32_t)(MEM16(eax + ecx + 0x88)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = MEM32(esi + 8);
    eax = eax + ecx + 0x88;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x9C);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx + eax + 0x8A) = MEM16(edx + eax + 0x8A) + 0xC8;
    _fa = (uint32_t)(MEM16(edx + eax + 0x8A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = MEM32(esi + 8);
    eax = edx + eax + 0x8A;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x9C);
    edx = MEM32(esi + 0xC);
    SET_LO8(eax, MEM8(esp + 0x4C));
    MEM8(ecx + edx + 0x28) = LO8(eax);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x9C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edx + 0x90) = 1;
    _fa = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 4), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00263AD5; /* je: equal / zero */

loc_00263AD2: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00263AD5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263B40
 * Original: 0x00263B40 - 0x00263B83 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00263B55u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00263B55: ;
    ecx = eax;
    PUSH32(esp, 0x00263B5Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00263B5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00263B65u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00263B65: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80F9AC;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00263BA0
 * Original: 0x00263BA0 - 0x00263BE6 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00263BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80F9AC;
    if (CMP_EQ(_fa, _fb)) goto loc_00263BBC; /* je: equal / zero */

loc_00263BB0: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00263BBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00263BB9u); } /* indirect call */
    }

loc_00263BBC: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00263BD9; /* je: equal / zero */

loc_00263BC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00263BCFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00263BCF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00263BD9: ;
    PUSH32(esp, 0x00263BDEu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00263BDE: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00263C00
 * Original: 0x00263C00 - 0x00263C26 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00263C1D; /* je: equal / zero */

loc_00263C0A: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00263C16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00263C13u); } /* indirect call */
    }

loc_00263C16: ;
    MEM32(esi + 0xC) = 0;

loc_00263C1D: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00263C30
 * Original: 0x00263C30 - 0x00263C86 (86 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263C30: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x28));
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x80F9B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00263C77u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263C77: ;
    _fa = (uint32_t)(MEM16(esp + 0x38)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x38), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00263CA0
 * Original: 0x00263CA0 - 0x00263CF6 (86 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263CA0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x28));
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x80FB08);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00263CE7u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263CE7: ;
    _fa = (uint32_t)(MEM16(esp + 0x38)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x38), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00263D10
 * Original: 0x00263D10 - 0x00263D15 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263D10: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263D20
 * Original: 0x00263D20 - 0x00263D6E (78 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263D20: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00263D37; /* je: equal / zero */

loc_00263D2E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00263D33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00263D30u); } /* indirect call */
    }

loc_00263D33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00263D3F; /* jne: not equal / not zero */

loc_00263D37: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00263D3F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x80FC60);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00263D5Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263D5D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263D90
 * Original: 0x00263D90 - 0x00263E24 (148 bytes, 46 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263D90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x80FDE8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00263DB2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263DB2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 4), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00263E1B; /* jne: not equal / not zero */

loc_00263DBD: ;
    eax = MEM32(esp + 0x18);
    edx = ZX8(MEM8(eax + 0x98));
    ecx = ZX16(MEM16(eax + 0x2C));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = ZX16(MEM16(eax + 0x8A));
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x88));
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0xC8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = ZX16(MEM16(eax + 0x2A));
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x8F);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = eax + 0x6A;
    PUSH32(esp, edx);
    ecx = eax + 0x56;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, 0x80FCB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00263E18u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00263E18: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00263E1B: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263E50
 * Original: 0x00263E50 - 0x00263E85 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00263E65u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00263E65: ;
    ecx = eax;
    PUSH32(esp, 0x00263E6Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00263E6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00263E75u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00263E75: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80FE3C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00263EA0
 * Original: 0x00263EA0 - 0x00263ECD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00263EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00263EC0; /* je: equal / zero */

loc_00263EB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00263EB6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00263EB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00263EC0: ;
    PUSH32(esp, 0x00263EC5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00263EC5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00263EE0
 * Original: 0x00263EE0 - 0x00263EE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263EE0(void)
{

loc_00263EE0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00263EF0
 * Original: 0x00263EF0 - 0x00263EF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263EF0(void)
{

loc_00263EF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00263F00
 * Original: 0x00263F00 - 0x00263F03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263F00(void)
{

loc_00263F00: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00263F10
 * Original: 0x00263F10 - 0x00263F17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263F10(void)
{

loc_00263F10: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00263F20
 * Original: 0x00263F20 - 0x00263F41 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263F20: ;
    edx = MEM32(ecx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00263F3E; /* jge: greater or equal (signed >=) */

loc_00263F29: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 4) = eax;
    edx = MEM32(ecx);
    eax = 1;
    MEM32(ecx + edx * 4 + 0x7C) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00263F3E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00263F50
 * Original: 0x00263F50 - 0x00263F6B (27 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263F50: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00263F68; /* jl: less (signed <) */

loc_00263F5A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00263F68; /* jge: greater or equal (signed >=) */

loc_00263F5E: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + edx * 4 + 4) = eax;
    SET_LO8(eax, 1);

loc_00263F68: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263F80
 * Original: 0x00263F80 - 0x00263F9D (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263F80: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00263F9A; /* jl: less (signed <) */

loc_00263F8A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00263F9A; /* jge: greater or equal (signed >=) */

loc_00263F8E: ;
    eax = MEM32(ecx + edx * 4 + 4);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);

loc_00263F9A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263FB0
 * Original: 0x00263FB0 - 0x00263FDE (46 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263FB0: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00263FCC; /* jle: less or equal (signed <=) */

loc_00263FB9: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00263FC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00263FD2; /* je: equal / zero */

loc_00263FC4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00263FC0; /* jl: less (signed <) */

loc_00263FCC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00263FD2: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00263FF0
 * Original: 0x00263FF0 - 0x00264012 (34 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00263FF0: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026400F; /* jl: less (signed <) */

loc_00263FFA: ;
    PUSH32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026400E; /* jge: greater or equal (signed >=) */

loc_00263FFF: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026400E; /* jge: greater or equal (signed >=) */

loc_00264008: ;
    MEM32(ecx + edx * 4 + 0x7C) = esi;
    SET_LO8(eax, 1);

loc_0026400E: ;
    POP32(esp, esi);

loc_0026400F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00264020
 * Original: 0x00264020 - 0x0026403D (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264020: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026403A; /* jl: less (signed <) */

loc_0026402A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026403A; /* jge: greater or equal (signed >=) */

loc_0026402E: ;
    eax = MEM32(ecx + edx * 4 + 0x7C);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);

loc_0026403A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00264050
 * Original: 0x00264050 - 0x0026408E (62 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00264050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    ecx = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00264089; /* jle: less or equal (signed <=) */

loc_00264064: ;
    PUSH32(esp, ebp);
    ebp = esi;
    PUSH32(esp, edi);
    edi = esi + 0x7C;
    edx = eax + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00264070: ;
    ecx = MEM32(edx + ebp);
    MEM32(edx) = ecx;
    ecx = MEM32(edi);
    MEM32(edx + 0x78) = ecx;
    ecx = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00264070; /* jl: less (signed <) */

loc_00264087: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00264089: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002640A0
 * Original: 0x002640A0 - 0x002640C7 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002640A0(void)
{

loc_002640A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    MEM32(0x8C2260) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x8C2264) = ecx;
    MEM32(0x8C2268) = edx;
    MEM32(0x8C226C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002640D0
 * Original: 0x002640D0 - 0x002641BD (237 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002640D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002640D0: ;
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
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0xC4) = ecx;
    MEM32(eax + 0xC8) = ecx;
    MEM32(eax + 0xCC) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = ecx;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xDC) = ecx;
    MEM32(eax + 0xE0) = ecx;
    MEM32(eax + 0xE4) = ecx;
    MEM32(eax + 0xE8) = 2;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xB4) = ecx;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0xBC) = ecx;
    MEM32(eax + 0xB0) = ecx;
    MEM32(eax + 0xC0) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0x88) = ecx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x9C) = ecx;
    MEM32(eax + 0xA0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00264200
 * Original: 0x00264200 - 0x0026429D (157 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264200: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0026420Du); RECOMP_ABI_CALL(0x0002B9AAu, sub_0002B9AA); /* call 0x0002B9AA */

loc_0026420D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = 2;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002642D0
 * Original: 0x002642D0 - 0x0026430E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002642D0(void)
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

loc_002642D0: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x34);
    eax = MEM32(ecx + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00264309; /* jle: less or equal (signed <=) */

loc_002642EE: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x54); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x50); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00264309: ;
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
 * sub_00264320
 * Original: 0x00264320 - 0x0026434F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264320(void)
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

loc_00264320: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0026434A; /* jle: less or equal (signed <=) */

loc_00264330: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x48); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_0026434A: ;
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
 * sub_00264360
 * Original: 0x00264360 - 0x00264398 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264360(void)
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

loc_00264360: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00264393; /* jle: less or equal (signed <=) */

loc_00264370: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4C);
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);

loc_00264393: ;
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
 * sub_002643B0
 * Original: 0x002643B0 - 0x002643DF (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002643B0(void)
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

loc_002643B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_002643DA; /* jle: less or equal (signed <=) */

loc_002643C0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_002643DA: ;
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
 * sub_002643F0
 * Original: 0x002643F0 - 0x0026441F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002643F0(void)
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

loc_002643F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0026441A; /* jle: less or equal (signed <=) */

loc_00264400: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x74); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_0026441A: ;
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
 * sub_00264430
 * Original: 0x00264430 - 0x0026445F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264430(void)
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

loc_00264430: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0026445A; /* jle: less or equal (signed <=) */

loc_00264440: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x3C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_0026445A: ;
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
 * sub_00264470
 * Original: 0x00264470 - 0x002644A5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264470(void)
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

loc_00264470: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x34);
    eax = MEM32(ecx + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_002644A0; /* jle: less or equal (signed <=) */

loc_0026448E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x3C); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_002644A0: ;
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
 * sub_002644C0
 * Original: 0x002644C0 - 0x002644F5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002644C0(void)
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

loc_002644C0: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x34);
    eax = MEM32(ecx + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_002644F0; /* jle: less or equal (signed <=) */

loc_002644DE: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x40); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_002644F0: ;
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
 * sub_00264510
 * Original: 0x00264510 - 0x0026453F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264510: ;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(ecx + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x8C2264));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x8C2268));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x8C226C));
    ecx = MEM32(ecx + 0x28);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x8C2260));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00264550
 * Original: 0x00264550 - 0x0026464A (250 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00264550: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00264647; /* ja: above (unsigned >) */

loc_0026455E: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x26464C); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00264566u) goto loc_00264566;
    if (_jt == 0x002645B6u) goto loc_002645B6;
    if (_jt == 0x002645FEu) goto loc_002645FE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00264566: ;
    eax = MEM32(ecx + 0xA4);
    esi = MEM32(ecx + 0xB0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    MEM32(ecx + 0xA4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xA8) = eax;
    MEM32(ecx + 0xAC) = eax;
    eax = MEM32(ecx + 0xB4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ecx + 0xB0) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_002645A0; /* jle: less or equal (signed <=) */

loc_0026459A: ;
    MEM32(ecx + 0xB4) = edx;

loc_002645A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC0) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00264646; /* jle: less or equal (signed <=) */

loc_002645AC: ;
    MEM32(ecx + 0xC0) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002645B6: ;
    edx = MEM32(ecx + 0xB0);
    esi = MEM32(ecx + 0xAC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xAC) = esi;
    _fa = (uint32_t)(MEM32(ecx + 0xB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xB4), eax (32-bit) */
    MEM32(ecx + 0xA4) = eax;
    MEM32(ecx + 0xB0) = edx;
    MEM32(ecx + 0xA8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002645EC; /* jge: greater or equal (signed >=) */

loc_002645E6: ;
    MEM32(ecx + 0xB4) = eax;

loc_002645EC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC0) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00264646; /* jle: less or equal (signed <=) */

loc_002645F4: ;
    MEM32(ecx + 0xC0) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002645FE: ;
    esi = MEM32(ecx + 0xA8);
    edx = MEM32(ecx + 0xAC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xA4) = eax;
    MEM32(ecx + 0xB0) = eax;
    eax = esi;
    MEM32(ecx + 0xA8) = esi;
    esi = MEM32(ecx + 0xB8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ecx + 0xAC) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00264638; /* jle: less or equal (signed <=) */

loc_00264632: ;
    MEM32(ecx + 0xB8) = eax;

loc_00264638: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xBC) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00264646; /* jle: less or equal (signed <=) */

loc_00264640: ;
    MEM32(ecx + 0xBC) = edx;

loc_00264646: ;
    POP32(esp, esi);

loc_00264647: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026464A
 * Original: 0x0026464A - 0x002646A0 (86 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026464A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026464A: ;
    edi = edi;
    SET_LO16(ebp, LO16(ebp) + 1);
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -33544635) = MEM8(esi + -33544635) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + -33544635)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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

}

/**
 * sub_002646A0
 * Original: 0x002646A0 - 0x00264708 (104 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002646A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002646A0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x7C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646B3; /* jne: not equal / not zero */

loc_002646AE: ;
    eax = 1;

loc_002646B3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x80), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646BC; /* jne: not equal / not zero */

loc_002646BB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002646BC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646C5; /* jne: not equal / not zero */

loc_002646C4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002646C5: ;
    _fa = (uint32_t)(MEM32(ecx + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x88), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646CE; /* jne: not equal / not zero */

loc_002646CD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002646CE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646D7; /* jne: not equal / not zero */

loc_002646D6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002646D7: ;
    _fa = (uint32_t)(MEM32(ecx + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x90), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646E0; /* jne: not equal / not zero */

loc_002646DF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002646E0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x94), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646E9; /* jne: not equal / not zero */

loc_002646E8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002646E9: ;
    _fa = (uint32_t)(MEM32(ecx + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x98), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646F2; /* jne: not equal / not zero */

loc_002646F1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002646F2: ;
    _fa = (uint32_t)(MEM32(ecx + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x9C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002646FB; /* jne: not equal / not zero */

loc_002646FA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002646FB: ;
    _fa = (uint32_t)(MEM32(ecx + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA0), edx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00264705; /* jne: not equal / not zero */

loc_00264704: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00264705: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00264730
 * Original: 0x00264730 - 0x00264769 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264730: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00264745u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00264745: ;
    ecx = eax;
    PUSH32(esp, 0x0026474Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026474C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00264755u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00264755: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80FE40;
    MEM8(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00264780
 * Original: 0x00264780 - 0x002647AD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00264780: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_002647A0; /* je: equal / zero */

loc_00264790: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00264796u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00264796: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_002647A0: ;
    PUSH32(esp, 0x002647A5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002647A5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_002647C0
 * Original: 0x002647C0 - 0x002647D9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002647C0(void)
{

loc_002647C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002647C8u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002647C8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002647D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002647D0u); } /* indirect call */
    }

loc_002647D3: ;
    MEM8(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002647E0
 * Original: 0x002647E0 - 0x002647F9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002647E0(void)
{

loc_002647E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002647E8u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002647E8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002647F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002647F0u); } /* indirect call */
    }

loc_002647F3: ;
    MEM8(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00264800
 * Original: 0x00264800 - 0x002648B3 (179 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264800: ;
    edx = ecx;
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1EC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x00264810u); RECOMP_ABI_CALL(0x000341C7u, sub_000341C7); /* call 0x000341C7 */

loc_00264810: ;
    eax = MEM32(edx);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1FC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1FC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1FC);
    PUSH32(esp, ecx);
    ecx = edx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00264833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00264830u); } /* indirect call */
    }

loc_00264833: ;
    edx = MEM32(esp + 0xE0);
    eax = MEM32(esp + 0xD8);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xD4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xD0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xD0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x118;
    PUSH32(esp, 0x80FE58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026489Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0026489D: ;
    edx = esp + 0x120;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002648AAu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002648AA: ;
    _fb = (uint32_t)(0x224) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x224;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002648E0
 * Original: 0x002648E0 - 0x00264A2E (334 bytes, 114 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002648E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002648E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0xC0;
    PUSH32(esp, edx);
    eax = esi + 0xBC;
    PUSH32(esp, eax);
    ecx = esi + 0xB8;
    PUSH32(esp, ecx);
    edx = esi + 0xB4;
    PUSH32(esp, edx);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esi + 0xAC;
    PUSH32(esp, ecx);
    edx = esi + 0xA8;
    PUSH32(esp, edx);
    eax = esi + 0xA4;
    PUSH32(esp, eax);
    ecx = esi + 0xA0;
    PUSH32(esp, ecx);
    edx = esi + 0x9C;
    PUSH32(esp, edx);
    eax = esi + 0x98;
    PUSH32(esp, eax);
    ecx = esi + 0x94;
    PUSH32(esp, ecx);
    edx = esi + 0x90;
    PUSH32(esp, edx);
    eax = esi + 0x8C;
    PUSH32(esp, eax);
    ecx = esi + 0x88;
    PUSH32(esp, ecx);
    edx = esi + 0x84;
    PUSH32(esp, edx);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0x7C;
    PUSH32(esp, ecx);
    edx = esi + 0xDC;
    PUSH32(esp, edx);
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    ecx = esi + 0xD8;
    PUSH32(esp, ecx);
    edx = esi + 0xD4;
    PUSH32(esp, edx);
    eax = esi + 0xCC;
    PUSH32(esp, eax);
    ecx = esi + 0xD0;
    PUSH32(esp, ecx);
    edx = esi + 0xC8;
    PUSH32(esp, edx);
    eax = esi + 0xC4;
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    eax = esi + 0x38;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0xB0;
    PUSH32(esp, 0x80FE80);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002649F8u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002649F8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x64) = ecx;
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    MEM32(esi + 0x78) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00264A24; /* jne: not equal / not zero */

loc_00264A1A: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00264A24: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00264A90
 * Original: 0x00264A90 - 0x00264BDE (334 bytes, 114 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264A90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0xC0;
    PUSH32(esp, edx);
    eax = esi + 0xBC;
    PUSH32(esp, eax);
    ecx = esi + 0xB8;
    PUSH32(esp, ecx);
    edx = esi + 0xB4;
    PUSH32(esp, edx);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esi + 0xAC;
    PUSH32(esp, ecx);
    edx = esi + 0xA8;
    PUSH32(esp, edx);
    eax = esi + 0xA4;
    PUSH32(esp, eax);
    ecx = esi + 0xA0;
    PUSH32(esp, ecx);
    edx = esi + 0x9C;
    PUSH32(esp, edx);
    eax = esi + 0x98;
    PUSH32(esp, eax);
    ecx = esi + 0x94;
    PUSH32(esp, ecx);
    edx = esi + 0x90;
    PUSH32(esp, edx);
    eax = esi + 0x8C;
    PUSH32(esp, eax);
    ecx = esi + 0x88;
    PUSH32(esp, ecx);
    edx = esi + 0x84;
    PUSH32(esp, edx);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0x7C;
    PUSH32(esp, ecx);
    edx = esi + 0xDC;
    PUSH32(esp, edx);
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    ecx = esi + 0xD8;
    PUSH32(esp, ecx);
    edx = esi + 0xD4;
    PUSH32(esp, edx);
    eax = esi + 0xCC;
    PUSH32(esp, eax);
    ecx = esi + 0xD0;
    PUSH32(esp, ecx);
    edx = esi + 0xC8;
    PUSH32(esp, edx);
    eax = esi + 0xC4;
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    eax = esi + 0x38;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0xB0;
    PUSH32(esp, 0x8103C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00264BA8u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00264BA8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x64) = ecx;
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    MEM32(esi + 0x78) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00264BD4; /* jne: not equal / not zero */

loc_00264BCA: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00264BD4: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00264C40
 * Original: 0x00264C40 - 0x00264DB3 (371 bytes, 117 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264C40: ;
    eax = MEM32(0x8FA520);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00264C60; /* je: equal / zero */

loc_00264C57: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00264C5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00264C59u); } /* indirect call */
    }

loc_00264C5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00264C73; /* jne: not equal / not zero */

loc_00264C60: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00264C71u); RECOMP_ABI_CALL(0x0002D2EBu, sub_0002D2EB); /* call 0x0002D2EB */

loc_00264C71: ;
    goto loc_00264C84;

loc_00264C73: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00264C84u); RECOMP_ABI_CALL(0x000262ACu, sub_000262AC); /* call 0x000262AC */

loc_00264C84: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    esi = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00264CE7; /* jne: not equal / not zero */

loc_00264C98: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00264CE7; /* jg: greater (signed >) */

loc_00264C9D: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, ecx);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, 0x810900);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00264CE2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00264CE2: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00264CE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x17 (32-bit) */
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00264DA8; /* jne: not equal / not zero */

loc_00264D9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00264DA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00264E10
 * Original: 0x00264E10 - 0x00264F83 (371 bytes, 117 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264E10: ;
    eax = MEM32(0x8FA520);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00264E30; /* je: equal / zero */

loc_00264E27: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00264E2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00264E29u); } /* indirect call */
    }

loc_00264E2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00264E43; /* jne: not equal / not zero */

loc_00264E30: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00264E41u); RECOMP_ABI_CALL(0x0002D2EBu, sub_0002D2EB); /* call 0x0002D2EB */

loc_00264E41: ;
    goto loc_00264E54;

loc_00264E43: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00264E54u); RECOMP_ABI_CALL(0x000262ACu, sub_000262AC); /* call 0x000262AC */

loc_00264E54: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    esi = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00264EB7; /* jne: not equal / not zero */

loc_00264E68: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00264EB7; /* jg: greater (signed >) */

loc_00264E6D: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, ecx);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, 0x810AB8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00264EB2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00264EB2: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00264EB7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x17 (32-bit) */
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00264F78; /* jne: not equal / not zero */

loc_00264F6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00264F78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00264FE0
 * Original: 0x00264FE0 - 0x00265015 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264FE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00264FF5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00264FF5: ;
    ecx = eax;
    PUSH32(esp, 0x00264FFCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00264FFC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00265005u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265005: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x810C70;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265030
 * Original: 0x00265030 - 0x0026505D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265030: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00265050; /* je: equal / zero */

loc_00265040: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265046u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00265046: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00265050: ;
    PUSH32(esp, 0x00265055u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00265055: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00265070
 * Original: 0x00265070 - 0x002652B5 (581 bytes, 189 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265070: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002652AE; /* jl: less (signed <) */

loc_00265089: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    edi = MEM32(esi + 0x5C);
    ecx = MEM32(esi + 0xBC);
    edx = MEM32(esi + 0xB8);
    ebx = eax + -2006;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = MEM32(esi + 0xC0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xB4);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xAC);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xA8);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0xA4);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xA0);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x90);
    PUSH32(esp, edx);
    ecx = MEM32(esi + 0x8C);
    PUSH32(esp, eax);
    edx = MEM32(esi + 0x88);
    eax = MEM32(esi + 0x84);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x7C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xD8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xCC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xD0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    PUSH32(esp, 0x811130);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265194u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00265194: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0xC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002652AC; /* jne: not equal / not zero */

loc_002651A6: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xBC);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xB8);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xB0);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xAC);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xA4);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x9C);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x98);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0x94);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x8C);
    eax = MEM32(esi + 0x88);
    PUSH32(esp, edx);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    edx = MEM32(esi + 0x80);
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xD8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xD4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xCC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xD0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x810C78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002652A6u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002652A6: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002652AC: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002652AE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265350
 * Original: 0x00265350 - 0x00265592 (578 bytes, 189 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265350: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026558B; /* jl: less (signed <) */

loc_00265369: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    edi = MEM32(esi + 0x5C);
    ecx = MEM32(esi + 0xBC);
    edx = MEM32(esi + 0xB8);
    ebx = eax + -2006;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = MEM32(esi + 0xC0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xB4);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xAC);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xA8);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0xA4);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xA0);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x90);
    PUSH32(esp, edx);
    ecx = MEM32(esi + 0x8C);
    PUSH32(esp, eax);
    edx = MEM32(esi + 0x88);
    eax = MEM32(esi + 0x84);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x7C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xD8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xCC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xD0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    PUSH32(esp, 0x811AA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265474u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00265474: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265589; /* jne: not equal / not zero */

loc_00265483: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xBC);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xB8);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xB0);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xAC);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0xA4);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x9C);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x98);
    PUSH32(esp, edx);
    eax = MEM32(esi + 0x94);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x8C);
    eax = MEM32(esi + 0x88);
    PUSH32(esp, edx);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    edx = MEM32(esi + 0x80);
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xD8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xD4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xCC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xD0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x8115E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00265583u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00265583: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00265589: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0026558B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265630
 * Original: 0x00265630 - 0x00265643 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265630: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00265650
 * Original: 0x00265650 - 0x0026567C (44 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ebx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265676; /* jle: less or equal (signed <=) */

loc_00265661: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x0026566Cu); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_0026566C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265661; /* jl: less (signed <) */

loc_00265676: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00265690
 * Original: 0x00265690 - 0x00265702 (114 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265690: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_002656EC; /* jl: less (signed <) */

loc_002656A1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002656A5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002656F9; /* jge: greater or equal (signed >=) */

loc_002656AE: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + ebx * 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(eax + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_002656D6; /* jle: less or equal (signed <=) */

loc_002656BE: ;
    edx = MEM32(eax + 0x10);
    edi = ecx;

loc_002656C3: ;
    ecx = MEM32(edx);
    PUSH32(esp, 0x002656CAu); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_002656CA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002656C3; /* jne: not equal / not zero */

loc_002656D2: ;
    edx = MEM32(esp + 0x14);

loc_002656D6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002656DF; /* jl: less (signed <) */

loc_002656DA: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002656A5;

loc_002656DF: ;
    ecx = MEM32(ebp + 0x10);
    ebp = MEM32(ecx + ebx * 4);
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002656A1; /* jge: greater or equal (signed >=) */

loc_002656EC: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + edx * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002656F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265720
 * Original: 0x00265720 - 0x002657B7 (151 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 4);
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002657A8; /* jl: less (signed <) */

loc_0026572F: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002657B2; /* jle: less or equal (signed <=) */

loc_00265742: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00265745: ;
    edx = MEM32(ebp + 0x10);
    esi = MEM32(edx + eax * 4);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_00265773; /* jle: less or equal (signed <=) */

loc_00265755: ;
    edx = MEM32(esi + 0x10);
    ebx = eax;
    /* nop */

loc_00265760: ;
    ecx = MEM32(edx);
    PUSH32(esp, 0x00265767u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_00265767: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00265760; /* jne: not equal / not zero */

loc_0026576F: ;
    ecx = MEM32(esp + 0x18);

loc_00265773: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026578A; /* jge: greater or equal (signed >=) */

loc_00265777: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00265784u); RECOMP_ABI_CALL(0x00036904u, sub_00036904); /* call 0x00036904 */

loc_00265784: ;
    ecx = MEM32(esp + 0x18);
    goto loc_00265790;

loc_0026578A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;

loc_00265790: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00265745; /* jl: less (signed <) */

loc_002657A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_002657A8: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esp + 0x10);
    MEM32(edx + ecx * 4) = eax;

loc_002657B2: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002657E0
 * Original: 0x002657E0 - 0x0026582D (77 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002657E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002657E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002657F9; /* je: equal / zero */

loc_002657EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002657F0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002657F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_002657F9: ;
    edi = MEM32(esp + 0xC);
    eax = edi;
    edx = eax + 1;

loc_00265802: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265802; /* jne: not equal / not zero */

loc_00265809: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265814u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265814: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    /* nop */

loc_00265820: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265820; /* jne: not equal / not zero */

loc_0026582A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265840
 * Original: 0x00265840 - 0x002658BC (124 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00265840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265840: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00265857; /* je: equal / zero */

loc_0026584C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265852u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00265852: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebp;

loc_00265857: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026586A; /* je: equal / zero */

loc_0026585E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265864u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00265864: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebp;

loc_0026586A: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002658B3; /* je: equal / zero */

loc_0026586F: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002658A3; /* jle: less or equal (signed <=) */

loc_00265879: ;
    PUSH32(esp, edi);
    /* nop */

loc_00265880: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026589A; /* je: equal / zero */

loc_0026588A: ;
    ecx = edi;
    PUSH32(esp, 0x00265891u); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_00265891: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00265897u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00265897: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026589A: ;
    eax = MEM32(esi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265880; /* jl: less (signed <) */

loc_002658A2: ;
    POP32(esp, edi);

loc_002658A3: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002658ACu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002658AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebp;
    POP32(esp, ebx);

loc_002658B3: ;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 0xC) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002658E0
 * Original: 0x002658E0 - 0x0026593A (90 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002658E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002658E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002658FA; /* je: equal / zero */

loc_002658EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002658F0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002658F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_002658FA: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00265936; /* jle: less or equal (signed <=) */

loc_00265905: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265910u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265910: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265936; /* jle: less or equal (signed <=) */

loc_0026591F: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);

loc_00265924: ;
    edx = MEM32(esi + 8);
    edi = MEM32(ecx + eax * 4);
    MEM32(edx + eax * 4) = edi;
    edx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265924; /* jl: less (signed <) */

loc_00265935: ;
    POP32(esp, edi);

loc_00265936: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00265950
 * Original: 0x00265950 - 0x0026595A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265950(void)
{

loc_00265950: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265960
 * Original: 0x00265960 - 0x00265963 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265960(void)
{

loc_00265960: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265970
 * Original: 0x00265970 - 0x00265AA8 (312 bytes, 126 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265970: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x110);
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x811F58);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026599Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0026599A: ;
    eax = esp + 0x20;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_002659A3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002659A3; /* jne: not equal / not zero */

loc_002659AA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002659B5: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002659B5; /* jne: not equal / not zero */

loc_002659BD: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    ecx = eax;
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
    eax = MEM32(ebx + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265A22; /* jle: less or equal (signed <=) */

loc_002659D4: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + ebp * 4);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x811F54);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002659EAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002659EA: ;
    eax = esp + 0x20;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_002659F3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002659F3; /* jne: not equal / not zero */

loc_002659FA: ;
    edi = MEM32(esp + 0x118);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00265A04: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265A04; /* jne: not equal / not zero */

loc_00265A0C: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    ecx = eax;
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
    eax = MEM32(ebx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002659D4; /* jl: less (signed <) */

loc_00265A22: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x811F54);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00265A35u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00265A35: ;
    eax = esp + 0x20;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = edi;

loc_00265A40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265A40; /* jne: not equal / not zero */

loc_00265A47: ;
    ebp = MEM32(esp + 0x118);
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00265A53: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265A53; /* jne: not equal / not zero */

loc_00265A5B: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    ecx = eax;
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
    eax = MEM32(ebx + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00265A9C; /* jle: less or equal (signed <=) */

loc_00265A73: ;
    eax = ebp;
    edx = eax + 1;

loc_00265A78: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265A78; /* jne: not equal / not zero */

loc_00265A7F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + esi * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265A94u); RECOMP_ABI_CALL(0x00033880u, sub_00033880); /* call 0x00033880 */

loc_00265A94: ;
    eax = MEM32(ebx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265A73; /* jl: less (signed <) */

loc_00265A9C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00265B00
 * Original: 0x00265B00 - 0x00265C6F (367 bytes, 148 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265B00: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0x811F60);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00265B27u); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_00265B27: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x23);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00265B31u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_00265B31: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = esp + 0x14;
    edx = eax + 1;
    edi = edi;

loc_00265B40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265B40; /* jne: not equal / not zero */

loc_00265B47: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265B52u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265B52: ;
    edi = MEM32(esp + 0x124);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    ecx = esp + 0x14;
    edx = eax;

loc_00265B64: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265B64; /* jne: not equal / not zero */

loc_00265B6E: ;
    eax = MEM32(esi);
    ebx = edi + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x811F54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265B7Fu); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_00265B7F: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x23);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00265B89u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_00265B89: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00265BDB; /* je: equal / zero */

loc_00265B95: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265BA0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265BA0: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265BDB; /* jle: less or equal (signed <=) */

loc_00265BAE: ;
    edi = edi;

loc_00265BB0: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(esi);
    eax = edx + ebp * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x811F54);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00265BC4u); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_00265BC4: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x23);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00265BCEu); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_00265BCE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = MEM32(ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265BB0; /* jl: less (signed <) */

loc_00265BDB: ;
    eax = MEM32(esi);
    ebx = edi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x811F54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265BECu); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_00265BEC: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x23);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00265BF6u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_00265BF6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00265C62; /* je: equal / zero */

loc_00265C02: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265C0Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265C0D: ;
    MEM32(edi + 0x10) = eax;
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265C62; /* jle: less or equal (signed <=) */

loc_00265C1B: ;
    goto loc_00265C20;

    /* nop */

loc_00265C20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00265C29u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265C29: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00265C42; /* je: equal / zero */

loc_00265C32: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    goto loc_00265C44;

loc_00265C42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00265C44: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + ebp * 4) = eax;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + ebp * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00265C5Bu); RECOMP_ABI_CALL(0x00013553u, sub_00013553); /* call 0x00013553 */

loc_00265C5B: ;
    eax = MEM32(ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265C20; /* jl: less (signed <) */

loc_00265C62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00265CD0
 * Original: 0x00265CD0 - 0x00265D20 (80 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265CD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00265CE1u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00265CE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265CEF; /* jne: not equal / not zero */

loc_00265CE8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00265CEF: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265D18; /* jle: less or equal (signed <=) */

loc_00265CF9: ;
    /* nop */

loc_00265D00: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00265D0Cu); RECOMP_ABI_CALL(0x0002959Cu, sub_0002959C); /* call 0x0002959C */

loc_00265D0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265D1A; /* jne: not equal / not zero */

loc_00265D10: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265D00; /* jl: less (signed <) */

loc_00265D18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00265D1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265D40
 * Original: 0x00265D40 - 0x00265D90 (80 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265D40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00265D51u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00265D51: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265D5F; /* jne: not equal / not zero */

loc_00265D58: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00265D5F: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265D88; /* jle: less or equal (signed <=) */

loc_00265D69: ;
    /* nop */

loc_00265D70: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00265D7Cu); RECOMP_ABI_CALL(0x0002959Cu, sub_0002959C); /* call 0x0002959C */

loc_00265D7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265D8A; /* jne: not equal / not zero */

loc_00265D80: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265D70; /* jl: less (signed <) */

loc_00265D88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00265D8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265DB0
 * Original: 0x00265DB0 - 0x00265DDE (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00265DD8; /* jle: less or equal (signed <=) */

loc_00265DC3: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, 0x00265DCEu); RECOMP_ABI_CALL(0x000263B0u, sub_000263B0); /* call 0x000263B0 */

loc_00265DCE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265DC3; /* jl: less (signed <) */

loc_00265DD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00265DF0
 * Original: 0x00265DF0 - 0x00265E43 (83 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265DF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00265E0B; /* jne: not equal / not zero */

loc_00265E03: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00265E0B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00265E3A; /* jle: less or equal (signed <=) */

loc_00265E1C: ;
    /* nop */

loc_00265E20: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00265E2Du); RECOMP_ABI_CALL(0x00027DB4u, sub_00027DB4); /* call 0x00027DB4 */

loc_00265E2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265E3C; /* jne: not equal / not zero */

loc_00265E31: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265E20; /* jl: less (signed <) */

loc_00265E3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00265E3C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00265E60
 * Original: 0x00265E60 - 0x00265F1F (191 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265E60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00265E69u); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_00265E69: ;
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    edx = eax + 1;

loc_00265E72: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265E72; /* jne: not equal / not zero */

loc_00265E79: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265E84u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265E84: ;
    MEM32(esi) = eax;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00265E90;

    /* nop */

loc_00265E90: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265E90; /* jne: not equal / not zero */

loc_00265E9A: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265ED4; /* jle: less or equal (signed <=) */

loc_00265EA1: ;
    MEM32(esi + 4) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265EAFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265EAF: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265ED4; /* jle: less or equal (signed <=) */

loc_00265EBE: ;
    edi = edi;

loc_00265EC0: ;
    ecx = MEM32(ebx + 8);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265EC0; /* jl: less (signed <) */

loc_00265ED4: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265F1A; /* jle: less or equal (signed <=) */

loc_00265EDB: ;
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265EEAu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265EEA: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00265F19; /* jle: less or equal (signed <=) */

loc_00265EF9: ;
    /* nop */

loc_00265F00: ;
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00265F0Bu); RECOMP_ABI_CALL(0x0002A7F3u, sub_0002A7F3); /* call 0x0002A7F3 */

loc_00265F0B: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00265F00; /* jl: less (signed <) */

loc_00265F19: ;
    POP32(esp, edi);

loc_00265F1A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265F50
 * Original: 0x00265F50 - 0x00265F56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265F50(void)
{

loc_00265F50: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00265F60
 * Original: 0x00265F60 - 0x00265FE4 (132 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265F60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    MEM32(ecx + 0x18) = 1;
    MEM32(ecx + 0x1C) = 0;
    PUSH32(esp, 0x00265F7Fu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00265F7F: ;
    ecx = eax;
    PUSH32(esp, 0x00265F86u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00265F86: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00265F8Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00265F8F: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0xF);
    esi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, 0x80F1B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265FA7u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00265FA7: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0xF);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    PUSH32(esp, 0x80F148);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00265FBFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00265FBF: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00265FCF; /* je: equal / zero */

loc_00265FC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00265FCCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00265FCC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00265FCF: ;
    PUSH32(esp, 0x00265FD4u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00265FD4: ;
    ecx = eax;
    PUSH32(esp, 0x00265FDBu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00265FDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266010
 * Original: 0x00266010 - 0x00266013 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266010(void)
{

loc_00266010: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266020
 * Original: 0x00266020 - 0x002660D3 (179 bytes, 64 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00266020: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x5C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002660CB; /* je: equal / zero */

loc_00266032: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0026603Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026603Cu); } /* indirect call */
    }

loc_0026603F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00266048u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00266046u); } /* indirect call */
    }

loc_00266048: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00266051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026604Eu); } /* indirect call */
    }

loc_00266051: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00266059u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00266057u); } /* indirect call */
    }

loc_00266059: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0x1C);
    esi = eax;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x80F010);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x48) = LO8(ebx);
    PUSH32(esp, 0x0026608Bu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026608B: ;
    edx = MEM32(esp + 0x28);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM32(esp + 0x3C) = 1;
    MEM32(esp + 0x40) = 3;
    MEM32(esp + 0x44) = 5;
    MEM32(esp + 0x48) = 7;
    eax = MEM32(esp + edx * 4 + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002660C6u); RECOMP_ABI_CALL(0x0001F3D0u, sub_0001F3D0); /* call 0x0001F3D0 */

loc_002660C6: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_002660CB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266100
 * Original: 0x00266100 - 0x00266113 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266100(void)
{

loc_00266100: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x7F6ED4);
    PUSH32(esp, 0x00266110u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_00266110: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266120
 * Original: 0x00266120 - 0x00266148 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266120: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00266133: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00266133; /* jne: not equal / not zero */

loc_0026613D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266160
 * Original: 0x00266160 - 0x00266188 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266160: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00266173: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00266173; /* jne: not equal / not zero */

loc_0026617D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002661A0
 * Original: 0x002661A0 - 0x002661D0 (48 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002661A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002661A0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002661C9; /* ja: above (unsigned >) */

loc_002661AA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2661D0); /* switch: 4 entries, 3 targets */
    if (_jt == 0x002661B1u) goto loc_002661B1;
    if (_jt == 0x002661B9u) goto loc_002661B9;
    if (_jt == 0x002661C1u) goto loc_002661C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002661B1: ;
    eax = 2;
    esp += 12; return; /* ret 8 */

loc_002661B9: ;
    eax = 4;
    esp += 12; return; /* ret 8 */

loc_002661C1: ;
    eax = 8;
    esp += 12; return; /* ret 8 */

loc_002661C9: ;
    eax = MEM32(esp + 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026620D
 * Original: 0x0026620D - 0x00266215 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026620D(void)
{

loc_0026620D: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266220
 * Original: 0x00266220 - 0x0026627B (91 bytes, 22 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266220: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0x1C);
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 0xB) = LO8(eax);
    eax = esp + 0xB;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x80F010);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026624Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026624D: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x24) = 3;
    MEM32(esp + 0x28) = 5;
    MEM32(esp + 0x2C) = 7;
    eax = MEM32(esp + eax * 4 + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002662A0
 * Original: 0x002662A0 - 0x002662C6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002662A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002662A0: ;
    ecx = MEM32(ecx + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002662C0; /* je: equal / zero */

loc_002662AA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002662BA; /* je: equal / zero */

loc_002662AF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002662C5; /* jne: not equal / not zero */

loc_002662B4: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_002662BA: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_002662C0: ;
    eax = 3;

loc_002662C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002662D0
 * Original: 0x002662D0 - 0x002662E7 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002662D0(void)
{

loc_002662D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 1;
    MEM32(ecx) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002662F0
 * Original: 0x002662F0 - 0x00266364 (116 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002662F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002662F0: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00266361; /* ja: above (unsigned >) */

loc_002662FA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x266364); /* switch: 7 entries, 5 targets */
    if (_jt == 0x00266301u) goto loc_00266301;
    if (_jt == 0x0026630Eu) goto loc_0026630E;
    if (_jt == 0x00266326u) goto loc_00266326;
    if (_jt == 0x00266342u) goto loc_00266342;
    if (_jt == 0x00266361u) goto loc_00266361;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00266301: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_0026630E: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00266326: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00266342: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;

loc_00266361: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002663B0
 * Original: 0x002663B0 - 0x00266453 (163 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002663B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002663B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002663BBu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002663BB: ;
    ecx = eax;
    PUSH32(esp, 0x002663C2u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002663C2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002663CCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002663CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, 0x002663D6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002663D6: ;
    ecx = eax;
    PUSH32(esp, 0x002663DDu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002663DD: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002663EBu); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_002663EB: ;
    eax = 1;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = 3;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x10) = edi;
    ecx = 2;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = 5;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x0026642Cu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026642C: ;
    ecx = eax;
    PUSH32(esp, 0x00266433u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00266433: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266440; /* je: equal / zero */

loc_00266437: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026643Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026643D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00266440: ;
    PUSH32(esp, 0x00266445u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266445: ;
    ecx = eax;
    PUSH32(esp, 0x0026644Cu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026644C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266480
 * Original: 0x00266480 - 0x002664B5 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266480: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 2;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 1;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 8;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002664D0
 * Original: 0x002664D0 - 0x00266580 (176 bytes, 49 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002664D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002664D0: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266506; /* je: equal / zero */

loc_002664E1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002664E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002664E3u); } /* indirect call */
    }

loc_002664E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266506; /* je: equal / zero */

loc_002664EA: ;
    eax = MEM32(esp + 0x1AC);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x811FC0);
    goto loc_00266520;

loc_00266506: ;
    eax = MEM32(esp + 0x1AC);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x811F68);

loc_00266520: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026652Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026652A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00266541u); RECOMP_ABI_CALL(0x0002F352u, sub_0002F352); /* call 0x0002F352 */

loc_00266541: ;
    ecx = MEM32(esp + 0x1BC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    edi = edi;

loc_00266550: ;
    edx = MEM32(eax + 0x7FEB50);
    esi = MEM32(esp + eax + 0x10);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB54);
    esi = MEM32(esp + eax + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98 (32-bit) */
    MEM32(ecx + edx * 4 + 4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00266550; /* jl: less (signed <) */

loc_00266576: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002665B0
 * Original: 0x002665B0 - 0x00266601 (81 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002665B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002665B0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002665C4u); RECOMP_ABI_CALL(0x00015E52u, sub_00015E52); /* call 0x00015E52 */

loc_002665C4: ;
    ecx = MEM32(esp + 0xA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_002665D1: ;
    edx = MEM32(eax + 0x7FEB50);
    esi = MEM32(esp + eax + 4);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB54);
    esi = MEM32(esp + eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98 (32-bit) */
    MEM32(ecx + edx * 4 + 4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_002665D1; /* jl: less (signed <) */

loc_002665F7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266620
 * Original: 0x00266620 - 0x00266635 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266620: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026662Fu); RECOMP_ABI_CALL(0x000164C4u, sub_000164C4); /* call 0x000164C4 */

loc_0026662F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266640
 * Original: 0x00266640 - 0x00266681 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266640: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00266655u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266655: ;
    ecx = eax;
    PUSH32(esp, 0x0026665Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026665C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00266665u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00266665: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x812014;
    PUSH32(esp, 0x00266676u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266676: ;
    ecx = eax;
    PUSH32(esp, 0x0026667Du); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026667D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002666A0
 * Original: 0x002666A0 - 0x002666DF (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002666A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002666A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x812014;
    PUSH32(esp, 0x002666AEu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002666AE: ;
    ecx = eax;
    PUSH32(esp, 0x002666B5u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_002666B5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_002666D2; /* je: equal / zero */

loc_002666C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002666C8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002666C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_002666D2: ;
    PUSH32(esp, 0x002666D7u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002666D7: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_002666F0
 * Original: 0x002666F0 - 0x002667E0 (240 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002666F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002666F0: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00266700: ;
    edx = MEM32(eax + 0x7FEB50);
    edx = MEM32(ecx + edx * 4 + 4);
    MEM32(esp + eax + 0xC) = edx;
    edx = MEM32(eax + 0x7FEB54);
    edx = MEM32(ecx + edx * 4 + 4);
    MEM32(esp + eax + 0x10) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00266700; /* jl: less (signed <) */

loc_00266726: ;
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0026673Au); RECOMP_ABI_CALL(0x0001A051u, sub_0001A051); /* call 0x0001A051 */

loc_0026673A: ;
    edx = MEM32(0x8FA520);
    ecx = MEM32(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002667AE; /* je: equal / zero */

loc_00266749: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0026674Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026674Bu); } /* indirect call */
    }

loc_0026674E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002667AE; /* je: equal / zero */

loc_00266752: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1B0);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x8120B8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00266777u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00266777: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 4), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002667A2; /* jne: not equal / not zero */

loc_00266782: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x812068);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026679Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026679F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002667A2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002667AE: ;
    edx = MEM32(esp + 0x1AC);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x812018);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002667D2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002667D2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266820
 * Original: 0x00266820 - 0x00266861 (65 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266820: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00266835u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266835: ;
    ecx = eax;
    PUSH32(esp, 0x0026683Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026683C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00266845u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00266845: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x812104;
    PUSH32(esp, 0x00266856u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266856: ;
    ecx = eax;
    PUSH32(esp, 0x0026685Du); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026685D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266880
 * Original: 0x00266880 - 0x002668BF (63 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00266880: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x812104;
    PUSH32(esp, 0x0026688Eu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026688E: ;
    ecx = eax;
    PUSH32(esp, 0x00266895u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00266895: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_002668B2; /* je: equal / zero */

loc_002668A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002668A8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002668A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_002668B2: ;
    PUSH32(esp, 0x002668B7u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002668B7: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_002668D0
 * Original: 0x002668D0 - 0x002668E2 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002668D0(void)
{

loc_002668D0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    MEM32(0x8FA540) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002668F0
 * Original: 0x002668F0 - 0x002668FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002668F0(void)
{

loc_002668F0: ;
    MEM32(0x8FA540) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00266900
 * Original: 0x00266900 - 0x00266910 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266900(void)
{

loc_00266900: ;
    eax = ecx;
    MEM32(eax) = 0x812108;
    MEM32(eax + 4) = 0x138C;
    esp += 4; return; /* ret */

}

/**
 * sub_00266920
 * Original: 0x00266920 - 0x00266927 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266920(void)
{

loc_00266920: ;
    MEM32(ecx) = 0x812108;
    esp += 4; return; /* ret */

}

/**
 * sub_00266930
 * Original: 0x00266930 - 0x00266965 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266930: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00266945u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266945: ;
    ecx = eax;
    PUSH32(esp, 0x0026694Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026694C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00266955u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00266955: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x81210C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266980
 * Original: 0x00266980 - 0x002669AD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00266980: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_002669A0; /* je: equal / zero */

loc_00266990: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266996u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00266996: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_002669A0: ;
    PUSH32(esp, 0x002669A5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002669A5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_002669C0
 * Original: 0x002669C0 - 0x00266A00 (64 bytes, 24 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002669C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002669C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x812110);
    PUSH32(esp, edx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x002669E7u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002669E7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002669F7; /* je: equal / zero */

loc_002669EE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002669F7: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266A10
 * Original: 0x00266A10 - 0x00266A53 (67 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00266A25u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266A25: ;
    ecx = eax;
    PUSH32(esp, 0x00266A2Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00266A2C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00266A35u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00266A35: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812164;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266A70
 * Original: 0x00266A70 - 0x00266A91 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266A70: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00266A7E; /* je: equal / zero */

loc_00266A7B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00266A7E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00266A8B; /* je: equal / zero */

loc_00266A82: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00266A88u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00266A88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00266A8B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266AA0
 * Original: 0x00266AA0 - 0x00266BC1 (289 bytes, 108 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00266AA0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00266ACB; /* je: equal / zero */

loc_00266AB2: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266AC5; /* je: equal / zero */

loc_00266AB9: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266AC2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00266AC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00266AC5: ;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;

loc_00266ACB: ;
    ebp = MEM32(esp + 0x30);
    eax = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 5;
    if ((_fa == 0)) goto loc_00266AEE; /* je: equal / zero */

loc_00266ADA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00266AE7; /* je: equal / zero */

loc_00266ADD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00266AF0; /* jne: not equal / not zero */

loc_00266AE0: ;
    edi = 4;
    goto loc_00266AF0;

loc_00266AE7: ;
    edi = 3;
    goto loc_00266AF0;

loc_00266AEE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00266AF0: ;
    PUSH32(esp, 0x00266AF5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266AF5: ;
    ecx = eax;
    PUSH32(esp, 0x00266AFCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00266AFC: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x8121F0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00266B16u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00266B16: ;
    edi = ZX16(MEM16(esp + 0x24));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00266B9E; /* je: equal / zero */

loc_00266B25: ;
    edx = edi;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00266B34u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00266B34: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266B4E; /* je: equal / zero */

loc_00266B3B: ;
    PUSH32(esp, 0x16CDF);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00266B4Eu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00266B4E: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 0xC) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00266B9E; /* jle: less or equal (signed <=) */

loc_00266B5A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00266B60: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);
    edx = eax + 8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x812180);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00266B8Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00266B8A: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + edx) = ebp;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00266B60; /* jl: less (signed <) */

loc_00266B9E: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266BA8u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_00266BA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00266BB0u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266BB0: ;
    ecx = eax;
    PUSH32(esp, 0x00266BB7u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00266BB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266C10
 * Original: 0x00266C10 - 0x00266CB6 (166 bytes, 53 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266C10: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00266C19u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266C19: ;
    ecx = eax;
    PUSH32(esp, 0x00266C20u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00266C20: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x8122D8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00266C3Eu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00266C3E: ;
    esi = MEM32(esp + 0x40);
    PUSH32(esp, 0xDEADDEADu);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 8;
    PUSH32(esp, edx);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x812248);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00266C6Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00266C6C: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00266C90; /* je: equal / zero */

loc_00266C78: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00266C88; /* je: equal / zero */

loc_00266C7D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00266C96; /* jne: not equal / not zero */

loc_00266C80: ;
    MEM32(esi) = 2;
    goto loc_00266C96;

loc_00266C88: ;
    MEM32(esi) = 1;
    goto loc_00266C96;

loc_00266C90: ;
    MEM32(esi) = 0;

loc_00266C96: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266CA0u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_00266CA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00266CA8u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266CA8: ;
    ecx = eax;
    PUSH32(esp, 0x00266CAFu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00266CAF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266CE0
 * Original: 0x00266CE0 - 0x00266D09 (41 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266CE0: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266D20
 * Original: 0x00266D20 - 0x00266D6C (76 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266D20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x00266D34u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266D34: ;
    ecx = eax;
    PUSH32(esp, 0x00266D3Bu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00266D3B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00266D43u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00266D43: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM8(esi + 8) = LO8(ebx);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi) = 0x81232C;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00266D80
 * Original: 0x00266D80 - 0x00266D84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266D80(void)
{

loc_00266D80: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00266D90
 * Original: 0x00266D90 - 0x00266D94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266D90(void)
{

loc_00266D90: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00266DA0
 * Original: 0x00266DA0 - 0x00266DB9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266DA0(void)
{

loc_00266DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00266DA8u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00266DA8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00266DB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00266DB0u); } /* indirect call */
    }

loc_00266DB3: ;
    MEM8(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266DC0
 * Original: 0x00266DC0 - 0x00266DD9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266DC0(void)
{

loc_00266DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00266DC8u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00266DC8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00266DD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00266DD0u); } /* indirect call */
    }

loc_00266DD3: ;
    MEM8(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266DE0
 * Original: 0x00266DE0 - 0x00266DFE (30 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x10);
    ecx = 8;
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266E10
 * Original: 0x00266E10 - 0x00266E2F (31 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266E10(void)
{

loc_00266E10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = eax + eax * 4;
    esi = ecx + eax * 8;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266E40
 * Original: 0x00266E40 - 0x00266F58 (280 bytes, 100 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266E40: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00266E61; /* je: equal / zero */

loc_00266E4E: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266E57u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00266E57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_00266E61: ;
    PUSH32(esp, 0x00266E66u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266E66: ;
    ecx = eax;
    PUSH32(esp, 0x00266E6Du); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00266E6D: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x812468);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00266E8Bu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00266E8B: ;
    edi = ZX16(MEM16(esp + 0x1C));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00266F37; /* je: equal / zero */

loc_00266E9E: ;
    eax = edi;
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266EB2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00266EB2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266ECE; /* je: equal / zero */

loc_00266EB9: ;
    PUSH32(esp, 0x304BE);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00266ECCu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00266ECC: ;
    goto loc_00266ED0;

loc_00266ECE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00266ED0: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x1C) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00266F36; /* jle: less or equal (signed <=) */

loc_00266EDC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00266EE0: ;
    ecx = MEM32(esi + 0x1C);
    eax = edi + ecx;
    PUSH32(esp, 0xDEADDEADu);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    ecx = eax + 0x18;
    PUSH32(esp, ecx);
    edx = eax + 0x14;
    PUSH32(esp, edx);
    ecx = eax + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = eax + 8;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x812358);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00266F1Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00266F1D: ;
    eax = MEM32(esp + 0x5C);
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + edx + 0xC) = eax;
    eax = MEM32(esi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00266EE0; /* jl: less (signed <) */

loc_00266F36: ;
    POP32(esp, ebx);

loc_00266F37: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00266F41u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_00266F41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00266F49u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266F49: ;
    ecx = eax;
    PUSH32(esp, 0x00266F50u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00266F50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266FA0
 * Original: 0x00266FA0 - 0x002670C0 (288 bytes, 102 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266FA0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00266FC1; /* je: equal / zero */

loc_00266FAE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266FB7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00266FB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = 0;

loc_00266FC1: ;
    PUSH32(esp, 0x00266FC6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00266FC6: ;
    ecx = eax;
    PUSH32(esp, 0x00266FCDu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00266FCD: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x812638);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00266FEBu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00266FEB: ;
    edi = ZX16(MEM16(esp + 0x1C));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0026709F; /* je: equal / zero */

loc_00266FFE: ;
    PUSH32(esp, ebx);
    eax = edi + edi * 4;
    ecx = eax * 8 + 4;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00267014u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00267014: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267030; /* je: equal / zero */

loc_0026701B: ;
    PUSH32(esp, 0x1A411);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x0026702Eu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0026702E: ;
    goto loc_00267032;

loc_00267030: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00267032: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x20) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026709E; /* jle: less or equal (signed <=) */

loc_0026703E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00267040: ;
    edx = MEM32(esi + 0x20);
    eax = edi + edx;
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax + 0x24;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    ecx = eax + 0x1C;
    PUSH32(esp, ecx);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    ecx = eax + 0x14;
    PUSH32(esp, ecx);
    edx = eax + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = eax + 8;
    PUSH32(esp, edx);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x8124E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267085u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00267085: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + ecx + 0xC) = edx;
    eax = MEM32(esi + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00267040; /* jl: less (signed <) */

loc_0026709E: ;
    POP32(esp, ebx);

loc_0026709F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002670A9u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_002670A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002670B1u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002670B1: ;
    ecx = eax;
    PUSH32(esp, 0x002670B8u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_002670B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267110
 * Original: 0x00267110 - 0x00267137 (39 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267110: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0026712A; /* je: equal / zero */

loc_0026711A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00267134; /* jne: not equal / not zero */

loc_0026711D: ;
    eax = MEM32(ecx + 0x24);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 12; return; /* ret 8 */

loc_0026712A: ;
    edx = MEM32(ecx + 0x28);
    eax = MEM32(esp + 4);
    eax = MEM32(edx + eax * 4);

loc_00267134: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00267140
 * Original: 0x00267140 - 0x00267177 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267140: ;
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(edx + 0x190) = eax;
    MEM32(edx + 0x194) = eax;
    MEM32(edx + 0x198) = eax;
    MEM32(edx + 0x19C) = eax;
    ecx = 0x32;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x32;
    edi = edx + 0xC8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267190
 * Original: 0x00267190 - 0x002671D1 (65 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267190: ;
    eax = MEM32(esp + 4);
    edx = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(edx + 0x190) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x194) = ecx;
    MEM32(edx + 0x198) = eax;
    MEM32(edx + 0x19C) = eax;
    ecx = 0x32;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x32;
    edi = edx + 0xC8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002671F0
 * Original: 0x002671F0 - 0x00267280 (144 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002671F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002671F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + ebp * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ebp * 4), 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00267205; /* jne: not equal / not zero */

loc_002671FF: ;
    MEM32(ebx + 0x198) = MEM32(ebx + 0x198) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x198)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00267205: ;
    eax = MEM32(ebx + ebp * 4);
    eax = eax * 4 + 4;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267217u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00267217: ;
    esi = MEM32(ebx + ebp * 4 + 0xC8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00267259; /* je: equal / zero */

loc_00267229: ;
    ecx = MEM32(ebx + ebp * 4);
    ecx = ecx * 4 + 4;
    PUSH32(esp, edi);
    edi = eax;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    ecx = eax;
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
    ecx = MEM32(ebx + ebp * 4 + 0xC8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00267251u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00267251: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00267259: ;
    edx = MEM32(ebx + ebp * 4);
    ecx = MEM32(esp + 0x14);
    MEM32(ebx + ebp * 4 + 0xC8) = eax;
    MEM32(eax + edx * 4) = ecx;
    MEM32(ebx + ebp * 4) = MEM32(ebx + ebp * 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + ebp * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x19C);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(ebx + 0x19C) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002672B0
 * Original: 0x002672B0 - 0x002672D0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002672B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002672B0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x32;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_002672C0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002672CF; /* jg: greater (signed >) */

loc_002672C5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002672C0; /* jg: greater (signed >) */

loc_002672CD: ;
    eax = edx;

loc_002672CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002672E0
 * Original: 0x002672E0 - 0x002672F5 (21 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002672E0(void)
{

loc_002672E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0xC8);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + edx * 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00267300
 * Original: 0x00267300 - 0x0026730A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267300(void)
{

loc_00267300: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267310
 * Original: 0x00267310 - 0x002673CC (188 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267310: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002673C5; /* je: equal / zero */

loc_00267320: ;
    ecx = MEM32(eax + 0x194);
    MEM32(ebx + 0x194) = ecx;
    edx = MEM32(eax + 0x190);
    MEM32(ebx + 0x190) = edx;
    ecx = MEM32(eax + 0x198);
    PUSH32(esp, ebp);
    MEM32(ebx + 0x198) = ecx;
    edx = MEM32(eax + 0x19C);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(ebx + 0x19C) = edx;
    edi = ebx + 0xC8;
    MEM32(esp + 0x10) = eax;

loc_00267365: ;
    eax = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267378; /* je: equal / zero */

loc_0026736D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267373u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00267373: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = esi;

loc_00267378: ;
    _fa = (uint32_t)(MEM32(edi + -200)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + -200), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267386; /* je: equal / zero */

loc_00267380: ;
    MEM32(edi + -200) = esi;

loc_00267386: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002673AE; /* jle: less or equal (signed <=) */

loc_0026738F: ;
    /* nop */

loc_00267390: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + edi);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x002673A3u); RECOMP_ABI_CALL(0x00014255u, sub_00014255); /* call 0x00014255 */

loc_002673A3: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00267390; /* jl: less (signed <) */

loc_002673AE: ;
    ecx = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x32 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00267365; /* jl: less (signed <) */

loc_002673C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002673C5: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267400
 * Original: 0x00267400 - 0x00267437 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00267406: ;
    _fa = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + esi * 4), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026742E; /* jle: less or equal (signed <=) */

loc_0026740C: ;
    eax = MEM32(edi + esi * 4 + 0xC8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267419u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00267419: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + esi * 4 + 0xC8) = 0;
    MEM32(edi + esi * 4) = 0;

loc_0026742E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00267406; /* jl: less (signed <) */

loc_00267434: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267450
 * Original: 0x00267450 - 0x002674C5 (117 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267450: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00267470: ;
    eax = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002674B7; /* jle: less or equal (signed <=) */

loc_00267477: ;
    esi = eax * 4;
    edx = esi + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00267489; /* jle: less or equal (signed <=) */

loc_00267485: ;
    esi = ebp;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00267489: ;
    eax = MEM32(ecx + ebx * 4 + 0xC8);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026749Cu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0026749C: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002674BD; /* jge: greater or equal (signed >=) */

loc_002674A5: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx + esi * 4;
    MEM32(esp + 0x18) = eax;

loc_002674B7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00267470; /* jl: less (signed <) */

loc_002674BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002674F0
 * Original: 0x002674F0 - 0x002674FE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002674F0(void)
{

loc_002674F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xC8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267510
 * Original: 0x00267510 - 0x00267543 (51 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267510: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 1;
    goto loc_00267520;

    /* nop */

loc_00267520: ;
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00267538; /* jge: greater or equal (signed >=) */

loc_00267527: ;
    edx = MEM32(ecx + eax * 4 + 0xC8);
    esi = MEM32(edx + esi * 4 + -4);
    MEM32(edx + edi * 4) = esi;
    MEM32(ecx + eax * 4) = MEM32(ecx + eax * 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00267538: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00267520; /* jl: less (signed <) */

loc_0026753E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267550
 * Original: 0x00267550 - 0x00267557 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267550(void)
{

loc_00267550: ;
    MEM32(ecx) = 0x8059D8;
    esp += 4; return; /* ret */

}

/**
 * sub_00267560
 * Original: 0x00267560 - 0x00267563 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267560(void)
{

loc_00267560: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267570
 * Original: 0x00267570 - 0x00267574 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267570(void)
{

loc_00267570: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00267580
 * Original: 0x00267580 - 0x00267583 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267580(void)
{

loc_00267580: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267590
 * Original: 0x00267590 - 0x0026759A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267590(void)
{

loc_00267590: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002675A0
 * Original: 0x002675A0 - 0x002675AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002675A0(void)
{

loc_002675A0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002675B0
 * Original: 0x002675B0 - 0x002675BF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002675B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002675B0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2BC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002675D0
 * Original: 0x002675D0 - 0x002675D9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002675D0(void)
{

loc_002675D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002675E0
 * Original: 0x002675E0 - 0x002675EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002675E0(void)
{

loc_002675E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002675F0
 * Original: 0x002675F0 - 0x002675FB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002675F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002675F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00267600
 * Original: 0x00267600 - 0x00267604 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267600(void)
{

loc_00267600: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00267610
 * Original: 0x00267610 - 0x00267680 (112 bytes, 40 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267610: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x80C1A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267644u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00267644: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00267667; /* jne: not equal / not zero */

loc_00267653: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00267660u); RECOMP_ABI_CALL(0x000359EBu, sub_000359EB); /* call 0x000359EB */

loc_00267660: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00267667: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00267679; /* jne: not equal / not zero */

loc_0026766C: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00267679u); RECOMP_ABI_CALL(0x0002CADAu, sub_0002CADA); /* call 0x0002CADA */

loc_00267679: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002676A0
 * Original: 0x002676A0 - 0x00267710 (112 bytes, 40 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002676A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002676A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x80C218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002676D4u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002676D4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002676F7; /* jne: not equal / not zero */

loc_002676E3: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002676F0u); RECOMP_ABI_CALL(0x000359EBu, sub_000359EB); /* call 0x000359EB */

loc_002676F0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002676F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00267709; /* jne: not equal / not zero */

loc_002676FC: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00267709u); RECOMP_ABI_CALL(0x0001E462u, sub_0001E462); /* call 0x0001E462 */

loc_00267709: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00267730
 * Original: 0x00267730 - 0x00267765 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267730: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00267745u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00267745: ;
    ecx = eax;
    PUSH32(esp, 0x0026774Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026774C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00267755u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00267755: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x8126B0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267780
 * Original: 0x00267780 - 0x002677AD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267780: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_002677A0; /* je: equal / zero */

loc_00267790: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267796u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00267796: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_002677A0: ;
    PUSH32(esp, 0x002677A5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002677A5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_002677C0
 * Original: 0x002677C0 - 0x0026781A (90 bytes, 27 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002677C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002677C0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0x80C218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002677F1u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002677F1: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    edx = esp + 0x34;
    PUSH32(esp, 0x8126B4);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, 0x00267812u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00267812: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267830
 * Original: 0x00267830 - 0x002678D9 (169 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267830: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = ZX16(MEM16(esi + 0x78));
    PUSH32(esp, edi);
    edx = ZX8(MEM8(esi + 0x5E));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x5D));
    edi = ecx;
    ecx = ZX16(MEM16(esi + 0x76));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x71));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x70));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x6F));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x6E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x6D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x6C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x6B));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x6A));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x69));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x68));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x67));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x66));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x65));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x63));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x62));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x61));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x60));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0x5A));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x70;
    PUSH32(esp, 0x8126F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002678C4u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002678C4: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E);
    ecx = edi;
    PUSH32(esp, 0x002678D1u); RECOMP_ABI_CALL(0x0002C634u, sub_0002C634); /* call 0x0002C634 */

loc_002678D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267910
 * Original: 0x00267910 - 0x00267972 (98 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267910: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00267943; /* je: equal / zero */

loc_0026791F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00267924u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267921u); } /* indirect call */
    }

loc_00267924: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267943; /* je: equal / zero */

loc_00267928: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x812A48);
    goto loc_0026795C;

loc_00267943: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8129D8);

loc_0026795C: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00267966u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00267966: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00267990
 * Original: 0x00267990 - 0x002679C5 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267990: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002679A5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002679A5: ;
    ecx = eax;
    PUSH32(esp, 0x002679ACu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002679AC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002679B5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002679B5: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812AB8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002679E0
 * Original: 0x002679E0 - 0x00267A0D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002679E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002679E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00267A00; /* je: equal / zero */

loc_002679F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002679F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002679F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00267A00: ;
    PUSH32(esp, 0x00267A05u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00267A05: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00267A20
 * Original: 0x00267A20 - 0x00267A3F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267A20: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80061C;
    if (TEST_Z(_fa, _fb)) goto loc_00267A39; /* je: equal / zero */

loc_00267A30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00267A36u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00267A36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00267A39: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267A50
 * Original: 0x00267A50 - 0x00267AAD (93 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00267A65u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00267A65: ;
    ecx = eax;
    PUSH32(esp, 0x00267A6Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00267A6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00267A75u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00267A75: ;
    MEM32(esi + 4) = eax;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x812ABC;
    if (CMP_EQ(_fa, _fb)) goto loc_00267AA3; /* je: equal / zero */

loc_00267A89: ;
    PUSH32(esp, 0x00267A8Eu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00267A8E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00267A99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267A96u); } /* indirect call */
    }

loc_00267A99: ;
    MEM8(esi + 8) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00267AA3: ;
    MEM8(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267AD0
 * Original: 0x00267AD0 - 0x00267B1A (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x812ABC;
    if (CMP_EQ(_fa, _fb)) goto loc_00267AF0; /* je: equal / zero */

loc_00267AE0: ;
    PUSH32(esp, 0x00267AE5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00267AE5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00267AF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267AEDu); } /* indirect call */
    }

loc_00267AF0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00267B0D; /* je: equal / zero */

loc_00267AFD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267B03u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00267B03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00267B0D: ;
    PUSH32(esp, 0x00267B12u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00267B12: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00267B30
 * Original: 0x00267B30 - 0x00267B65 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00267B45u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00267B45: ;
    ecx = eax;
    PUSH32(esp, 0x00267B4Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00267B4C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00267B55u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00267B55: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812AC0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267B80
 * Original: 0x00267B80 - 0x00267BAD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00267BA0; /* je: equal / zero */

loc_00267B90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267B96u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00267B96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00267BA0: ;
    PUSH32(esp, 0x00267BA5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00267BA5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00267BC0
 * Original: 0x00267BC0 - 0x0026806B (1195 bytes, 467 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267BC0: ;
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00267BD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267BD1u); } /* indirect call */
    }

loc_00267BD4: ;
    ebx = MEM32(esp + 0x224);
    ecx = ebx;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00267BE6u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00267BE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026805F; /* jle: less or equal (signed <=) */

loc_00267BEE: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x22C);

loc_00267BF6: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267C05u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267C05: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x230)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x230) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026804E; /* jne: not equal / not zero */

loc_00267C16: ;
    eax = esp + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x60);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267C28u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267C28: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267C37u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267C37: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x120);
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x234);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00267C57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267C54u); } /* indirect call */
    }

loc_00267C57: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267C66u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267C66: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x234);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00267C7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267C7Au); } /* indirect call */
    }

loc_00267C7D: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267C8Cu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267C8C: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x234);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267CA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267CA0u); } /* indirect call */
    }

loc_00267CA3: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x61);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267CB2u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267CB2: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x234);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00267CC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267CC6u); } /* indirect call */
    }

loc_00267CC9: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267CD8u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267CD8: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x234);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267CEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267CECu); } /* indirect call */
    }

loc_00267CEF: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267CFEu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267CFE: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x234);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00267D15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267D12u); } /* indirect call */
    }

loc_00267D15: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x66);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267D24u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267D24: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x234);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267D3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267D38u); } /* indirect call */
    }

loc_00267D3B: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x65);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267D4Au); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267D4A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x234);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00267D61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267D5Eu); } /* indirect call */
    }

loc_00267D61: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x69);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267D70u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267D70: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x234);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267D87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267D84u); } /* indirect call */
    }

loc_00267D87: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6A);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267D96u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267D96: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x234);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00267DADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267DAAu); } /* indirect call */
    }

loc_00267DAD: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x67);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267DBCu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267DBC: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x234);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267DD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267DD0u); } /* indirect call */
    }

loc_00267DD3: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x68);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267DE2u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267DE2: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x234);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00267DF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267DF6u); } /* indirect call */
    }

loc_00267DF9: ;
    eax = MEM32(esp + 0x234);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026804E; /* jne: not equal / not zero */

loc_00267E08: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x77);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267E17u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267E17: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267E28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267E25u); } /* indirect call */
    }

loc_00267E28: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x79);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267E37u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267E37: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267E48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267E45u); } /* indirect call */
    }

loc_00267E48: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x78);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267E57u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267E57: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267E68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267E65u); } /* indirect call */
    }

loc_00267E68: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267E77u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267E77: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267E88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267E85u); } /* indirect call */
    }

loc_00267E88: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7D);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267E97u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267E97: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267EA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267EA5u); } /* indirect call */
    }

loc_00267EA8: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267EB7u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267EB7: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00267EC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267EC5u); } /* indirect call */
    }

loc_00267EC8: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x83);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267EDAu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267EDA: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00267EE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267EE6u); } /* indirect call */
    }

loc_00267EE9: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x85);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267EFBu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267EFB: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00267F0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267F07u); } /* indirect call */
    }

loc_00267F0A: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x84);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267F1Cu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267F1C: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00267F2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267F28u); } /* indirect call */
    }

loc_00267F2B: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6F);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267F3Au); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267F3A: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00267F49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267F46u); } /* indirect call */
    }

loc_00267F49: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x71);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267F58u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267F58: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00267F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267F64u); } /* indirect call */
    }

loc_00267F67: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x72);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267F76u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267F76: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00267F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267F82u); } /* indirect call */
    }

loc_00267F85: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x70);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267F94u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267F94: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00267FA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267FA0u); } /* indirect call */
    }

loc_00267FA3: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026804E; /* jne: not equal / not zero */

loc_00267FB1: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x59);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00267FC0u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00267FC0: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00267FCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267FCCu); } /* indirect call */
    }

loc_00267FCF: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00267FE2; /* jne: not equal / not zero */

loc_00267FDE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00268027;

loc_00267FE2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00267FE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267FE4u); } /* indirect call */
    }

loc_00267FE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267FDE; /* je: equal / zero */

loc_00267FEB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00267FF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267FF3u); } /* indirect call */
    }

loc_00267FF6: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00268027; /* je: equal / zero */

loc_00268000: ;
    eax = MEM32(ecx + 0x5C);
    edx = MEM32(esi);
    ebp = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    { uint32_t _icall_target = MEM32(ebp + 0x7C); PUSH32(esp, 0x0026800Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026800Cu); } /* indirect call */
    }

loc_0026800F: ;
    ebp = MEM32(esp + 0x22C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x13);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00268023u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268020u); } /* indirect call */
    }

loc_00268023: ;
    ecx = MEM32(esp + 0x18);

loc_00268027: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0026802Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268029u); } /* indirect call */
    }

loc_0026802C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026804E; /* jne: not equal / not zero */

loc_00268031: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026804E; /* jne: not equal / not zero */

loc_00268038: ;
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00268043u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268040u); } /* indirect call */
    }

loc_00268043: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0026804Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026804Bu); } /* indirect call */
    }

loc_0026804E: ;
    ecx = ebx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00268056u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00268056: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00267BF6; /* jl: less (signed <) */

loc_0026805E: ;
    POP32(esp, ebp);

loc_0026805F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002681A0
 * Original: 0x002681A0 - 0x002682BA (282 bytes, 93 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002681A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002681A0: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002681B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002681B1u); } /* indirect call */
    }

loc_002681B4: ;
    esi = MEM32(esp + 0x124);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    ebx = eax;
    MEM32(esp + 0x14) = ebp;
    MEM8(esp + 0xF) = 0;
    PUSH32(esp, 0x002681CFu); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_002681CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002682AE; /* jle: less or equal (signed <=) */

loc_002681D7: ;
    PUSH32(esp, edi);
    goto loc_002681E0;

    /* nop */

loc_002681E0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002682AD; /* jne: not equal / not zero */

loc_002681EC: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x002681FBu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002681FB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edi;

loc_00268201: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00268296; /* jne: not equal / not zero */

loc_0026820D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00268210: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00268281; /* jne: not equal / not zero */

loc_00268218: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x12C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + edx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026827B; /* jne: not equal / not zero */

loc_0026822E: ;
    ecx = MEM32(esp + 0x130);
    edx = MEM32(ebx);
    eax = ebp + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00268245u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268242u); } /* indirect call */
    }

loc_00268245: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esp + 0x134));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026826F; /* je: equal / zero */

loc_00268259: ;
    edx = MEM32(esp + 0x128);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026826Fu); RECOMP_ABI_CALL(0x0002C40Eu, sub_0002C40E); /* call 0x0002C40E */

loc_0026826F: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026827B; /* jne: not equal / not zero */

loc_00268276: ;
    MEM8(esp + 0x13) = 1;

loc_0026827B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00268210; /* jl: less (signed <) */

loc_00268281: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00268201; /* jl: less (signed <) */

loc_00268296: ;
    esi = MEM32(esp + 0x128);
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002682A5u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_002682A5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002681E0; /* jl: less (signed <) */

loc_002682AD: ;
    POP32(esp, edi);

loc_002682AE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00268300
 * Original: 0x00268300 - 0x00268412 (274 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268300: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00268313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268310u); } /* indirect call */
    }

loc_00268313: ;
    esi = MEM32(esp + 0x120);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ebx;
    MEM8(esp + 0xB) = LO8(ebx);
    PUSH32(esp, 0x0026832Fu); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_0026832F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00268407; /* jle: less or equal (signed <=) */

loc_00268337: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_00268340: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00268405; /* jne: not equal / not zero */

loc_0026834C: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0026835Bu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0026835B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00268360: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002683EE; /* jne: not equal / not zero */

loc_0026836C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00268370: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002683E4; /* jne: not equal / not zero */

loc_00268378: ;
    ecx = MEM32(esp + 0x12C);
    eax = MEM32(esp + 0x20);
    edx = ebp + edi * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + edx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002683DE; /* jne: not equal / not zero */

loc_0026838C: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    esi = ebp + 0x12;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x002683A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002683A5u); } /* indirect call */
    }

loc_002683A8: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esp + 0x134));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002683D2; /* je: equal / zero */

loc_002683BC: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x002683D2u); RECOMP_ABI_CALL(0x0002FA46u, sub_0002FA46); /* call 0x0002FA46 */

loc_002683D2: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002683DE; /* jne: not equal / not zero */

loc_002683D9: ;
    MEM8(esp + 0x13) = 1;

loc_002683DE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00268370; /* jl: less (signed <) */

loc_002683E4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00268360; /* jl: less (signed <) */

loc_002683EE: ;
    esi = MEM32(esp + 0x128);
    ecx = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002683FDu); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_002683FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00268340; /* jl: less (signed <) */

loc_00268405: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00268407: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00268460
 * Original: 0x00268460 - 0x0026848B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268460: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80094C;
    PUSH32(esp, 0x0026846Eu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026846E: ;
    ecx = eax;
    PUSH32(esp, 0x00268475u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00268475: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00268485; /* je: equal / zero */

loc_0026847C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00268482u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00268482: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00268485: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002684A0
 * Original: 0x002684A0 - 0x002685B7 (279 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002684A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002684A0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x41455443);
    edi = ecx;
    PUSH32(esp, 0x002684B1u); RECOMP_ABI_CALL(0x0001CF7Cu, sub_0001CF7C); /* call 0x0001CF7C */

loc_002684B1: ;
    esi = MEM32(esp + 0x44);
    ecx = MEM32(esi + 0x6C);
    SET_LO8(edx, MEM8(esi + 0x88));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    eax = ZX8(MEM8(esi + 0xC4));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esi + 0x84));
    _fb = (uint32_t)(0x38) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x38);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x80);
    _fb = (uint32_t)(0x38) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x38);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ZX8(LO8(ecx));
    ecx = ZX8(MEM8(esi + 0x62));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x22;
    PUSH32(esp, edx);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, 0x812C20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026850Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026850A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00268517u); RECOMP_ABI_CALL(0x0001CB0Du, sub_0001CB0D); /* call 0x0001CB0D */

loc_00268517: ;
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edi = eax;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, 0x80F678);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00268563u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00268563: ;
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    PUSH32(esp, 0x812AC8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002685AAu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002685AA: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00268600
 * Original: 0x00268600 - 0x002686BD (189 bytes, 66 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268600: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x80C4C0);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00268637u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00268637: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0xC4));
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esi + 0x84));
    MEM32(esp + 0x44) = edx;
    SET_LO8(edx, MEM8(esi + 0x88));
    _fb = (uint32_t)(0x38) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x38);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x80);
    _fb = (uint32_t)(0x38) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x38);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ZX8(LO8(ecx));
    ecx = ZX8(MEM8(esi + 0x62));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x22;
    PUSH32(esp, edx);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x64;
    PUSH32(esp, 0x812D58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026869Eu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026869E: ;
    eax = MEM32(esp + 0x70);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002686B3; /* je: equal / zero */

loc_002686A9: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002686B3: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002686F0
 * Original: 0x002686F0 - 0x00268780 (144 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002686F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002686F0: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0026873B; /* je: equal / zero */

loc_00268709: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0026870Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026870Bu); } /* indirect call */
    }

loc_0026870E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026873B; /* je: equal / zero */

loc_00268712: ;
    PUSH32(esp, 0x414C504C);
    PUSH32(esp, 0x0026871Cu); RECOMP_ABI_CALL(0x0001CF7Cu, sub_0001CF7C); /* call 0x0001CF7C */

loc_0026871C: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    eax = esp + 0x20;
    PUSH32(esp, 0x812EF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00268736u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00268736: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00268762;

loc_0026873B: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xFA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esi) = ecx;
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x812E88);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026875Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026875F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00268762: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268775; /* je: equal / zero */

loc_0026876A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00268775: ;
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
 * sub_002687B0
 * Original: 0x002687B0 - 0x002687E5 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002687B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002687B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002687C5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002687C5: ;
    ecx = eax;
    PUSH32(esp, 0x002687CCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002687CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002687D5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002687D5: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812F68;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268800
 * Original: 0x00268800 - 0x0026882D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268800: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00268820; /* je: equal / zero */

loc_00268810: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00268816u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00268816: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00268820: ;
    PUSH32(esp, 0x00268825u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268825: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00268840
 * Original: 0x00268840 - 0x00268867 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268840: ;
    eax = MEM32(0x8FA520);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026885F; /* je: equal / zero */

loc_0026884E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00268853u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268850u); } /* indirect call */
    }

loc_00268853: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026885F; /* je: equal / zero */

loc_00268857: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002AA0F(); return; /* tail jmp 0x0002AA0F */

loc_0026885F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001814D(); return; /* tail jmp 0x0001814D */

}

/**
 * sub_00268870
 * Original: 0x00268870 - 0x00268875 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268870: ;
    g_seh_ebp = ebp; sub_0001A79F(); return; /* tail jmp 0x0001A79F */

}

/**
 * sub_00268880
 * Original: 0x00268880 - 0x00268885 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268880: ;
    g_seh_ebp = ebp; sub_000189C2(); return; /* tail jmp 0x000189C2 */

}

/**
 * sub_00268890
 * Original: 0x00268890 - 0x002688CD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268890: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x002688A4u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002688A4: ;
    ecx = eax;
    PUSH32(esp, 0x002688ABu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002688AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002688B3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002688B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x812F6C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002688E0
 * Original: 0x002688E0 - 0x0026893C (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002688E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002688E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi) = 0x812F6C;
    if (CMP_EQ(_fa, _fb)) goto loc_00268902; /* je: equal / zero */

loc_002688F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002688F9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002688F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 8) = edi;

loc_00268902: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268915; /* je: equal / zero */

loc_00268909: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026890Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026890F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = edi;

loc_00268915: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_0026892E; /* je: equal / zero */

loc_00268922: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00268928u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00268928: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;

loc_0026892E: ;
    PUSH32(esp, 0x00268933u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268933: ;
    POP32(esp, edi);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00268960
 * Original: 0x00268960 - 0x00268995 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268960: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00268975u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268975: ;
    ecx = eax;
    PUSH32(esp, 0x0026897Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026897C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00268985u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00268985: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812F70;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002689B0
 * Original: 0x002689B0 - 0x002689DD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002689B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002689B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_002689D0; /* je: equal / zero */

loc_002689C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002689C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002689C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_002689D0: ;
    PUSH32(esp, 0x002689D5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002689D5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_002689F0
 * Original: 0x002689F0 - 0x00268A25 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002689F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002689F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00268A05u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268A05: ;
    ecx = eax;
    PUSH32(esp, 0x00268A0Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00268A0C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00268A15u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00268A15: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812F74;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268A40
 * Original: 0x00268A40 - 0x00268A6D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00268A60; /* je: equal / zero */

loc_00268A50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00268A56u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00268A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00268A60: ;
    PUSH32(esp, 0x00268A65u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268A65: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00268A80
 * Original: 0x00268A80 - 0x00268ABC (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268A80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00268A91; /* jne: not equal / not zero */

loc_00268A88: ;
    eax = MEM32(ecx + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_00268A91: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00268AB3; /* je: equal / zero */

loc_00268A96: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00268AAA; /* je: equal / zero */

loc_00268A99: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00268AA1; /* je: equal / zero */

loc_00268A9C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00268AA1: ;
    eax = ecx + 0x184;
    esp += 8; return; /* ret 4 */

loc_00268AAA: ;
    eax = ecx + 0x170;
    esp += 8; return; /* ret 4 */

loc_00268AB3: ;
    eax = ecx + 0x15C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00268AD0
 * Original: 0x00268AD0 - 0x00268B1A (74 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268AD0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268B15; /* je: equal / zero */

loc_00268ADB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00268AE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268AE5u); } /* indirect call */
    }

loc_00268AE8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00268AF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268AF0u); } /* indirect call */
    }

loc_00268AF2: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00268AFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268AF8u); } /* indirect call */
    }

loc_00268AFB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00268B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00268B03u); } /* indirect call */
    }

loc_00268B05: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx + 0x158;
    PUSH32(esp, 0x00268B13u); RECOMP_ABI_CALL(0x000156A5u, sub_000156A5); /* call 0x000156A5 */

loc_00268B13: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00268B15: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00268B30
 * Original: 0x00268B30 - 0x00268D27 (503 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268B30: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268CB7; /* je: equal / zero */

loc_00268B3F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268B4A: ;
    MEM32(eax + ecx * 4 + 4) = 0x5F;
    edx = MEM32(eax);
    ecx = 1;
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268B6B: ;
    MEM32(eax + edx * 4 + 4) = 0x60;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268B87: ;
    MEM32(eax + edx * 4 + 4) = 0x61;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268BA3: ;
    MEM32(eax + edx * 4 + 4) = 0x62;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268BBF: ;
    MEM32(eax + edx * 4 + 4) = 0x63;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268BDB: ;
    MEM32(eax + edx * 4 + 4) = 0x64;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268BF7: ;
    MEM32(eax + edx * 4 + 4) = 0x65;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268C13: ;
    MEM32(eax + edx * 4 + 4) = 0x66;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268C2F: ;
    MEM32(eax + edx * 4 + 4) = 0x67;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268C47: ;
    MEM32(eax + edx * 4 + 4) = 0x68;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268C5F: ;
    MEM32(eax + edx * 4 + 4) = 0x69;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268C77: ;
    MEM32(eax + edx * 4 + 4) = 0x6A;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268C8F: ;
    MEM32(eax + edx * 4 + 4) = 0x6B;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00268CB7; /* jge: greater or equal (signed >=) */

loc_00268CA7: ;
    MEM32(eax + edx * 4 + 4) = 0x6C;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00268CB7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268D22; /* je: equal / zero */

loc_00268CC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00268CC2: ;
    MEM32(esp + eax * 4 + 4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00268CC2; /* jl: less (signed <) */

loc_00268CCC: ;
    PUSH32(esp, 0x7FFEBC);
    ecx = esi;
    PUSH32(esp, 0x00268CD8u); RECOMP_ABI_CALL(0x0002D1B0u, sub_0002D1B0); /* call 0x0002D1B0 */

loc_00268CD8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268CEF; /* je: equal / zero */

loc_00268CDF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00268CE5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00268CE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_00268CEF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    MEM32(esi + 4) = 0xE;
    PUSH32(esp, 0x00268CFFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00268CFF: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00268D22; /* jle: less or equal (signed <=) */

loc_00268D0E: ;
    edi = edi;

loc_00268D10: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + eax * 4 + 4);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00268D10; /* jl: less (signed <) */

loc_00268D22: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268DB0
 * Original: 0x00268DB0 - 0x00268E4F (159 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268DB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00268DBBu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268DBB: ;
    ecx = eax;
    PUSH32(esp, 0x00268DC2u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00268DC2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00268DCCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00268DCC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, 0x00268DD6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268DD6: ;
    ecx = eax;
    PUSH32(esp, 0x00268DDDu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00268DDD: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00268DEBu); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_00268DEB: ;
    eax = 1;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = 3;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x10) = edi;
    ecx = 2;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x00268E28u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268E28: ;
    ecx = eax;
    PUSH32(esp, 0x00268E2Fu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00268E2F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268E3C; /* je: equal / zero */

loc_00268E33: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00268E39u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00268E39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00268E3C: ;
    PUSH32(esp, 0x00268E41u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268E41: ;
    ecx = eax;
    PUSH32(esp, 0x00268E48u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00268E48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268E80
 * Original: 0x00268E80 - 0x00268E84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268E80(void)
{

loc_00268E80: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00268E90
 * Original: 0x00268E90 - 0x00268ECC (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268E90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00268EA1; /* jne: not equal / not zero */

loc_00268E98: ;
    eax = MEM32(ecx + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_00268EA1: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00268EC3; /* je: equal / zero */

loc_00268EA6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00268EBA; /* je: equal / zero */

loc_00268EA9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00268EB1; /* je: equal / zero */

loc_00268EAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00268EB1: ;
    eax = ecx + 0x184;
    esp += 8; return; /* ret 4 */

loc_00268EBA: ;
    eax = ecx + 0x170;
    esp += 8; return; /* ret 4 */

loc_00268EC3: ;
    eax = ecx + 0x15C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00268EE0
 * Original: 0x00268EE0 - 0x00268F15 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00268EF5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268EF5: ;
    ecx = eax;
    PUSH32(esp, 0x00268EFCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00268EFC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00268F05u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00268F05: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812F80;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268F30
 * Original: 0x00268F30 - 0x00268F5D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00268F50; /* je: equal / zero */

loc_00268F40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00268F46u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00268F46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00268F50: ;
    PUSH32(esp, 0x00268F55u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268F55: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00268F70
 * Original: 0x00268F70 - 0x00268FA5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00268F85u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268F85: ;
    ecx = eax;
    PUSH32(esp, 0x00268F8Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00268F8C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00268F95u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00268F95: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812F84;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268FC0
 * Original: 0x00268FC0 - 0x00268FED (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00268FE0; /* je: equal / zero */

loc_00268FD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00268FD6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00268FD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00268FE0: ;
    PUSH32(esp, 0x00268FE5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00268FE5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00269000
 * Original: 0x00269000 - 0x00269042 (66 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269000: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00269020; /* je: equal / zero */

loc_00269010: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00269016u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269016: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00269020: ;
    PUSH32(esp, 0x00269025u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269025: ;
    ecx = eax;
    PUSH32(esp, 0x0026902Cu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026902C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026903C; /* je: equal / zero */

loc_00269033: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00269039u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269039: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026903C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00269060
 * Original: 0x00269060 - 0x002690A2 (66 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269060: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00269080; /* je: equal / zero */

loc_00269070: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00269076u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269076: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00269080: ;
    PUSH32(esp, 0x00269085u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269085: ;
    ecx = eax;
    PUSH32(esp, 0x0026908Cu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026908C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026909C; /* je: equal / zero */

loc_00269093: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00269099u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269099: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026909C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002690C0
 * Original: 0x002690C0 - 0x002690F5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002690C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002690C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002690D5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002690D5: ;
    ecx = eax;
    PUSH32(esp, 0x002690DCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002690DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002690E5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002690E5: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812F88;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269110
 * Original: 0x00269110 - 0x0026913D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269110: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00269130; /* je: equal / zero */

loc_00269120: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00269126u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269126: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00269130: ;
    PUSH32(esp, 0x00269135u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269135: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00269150
 * Original: 0x00269150 - 0x00269185 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269150: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00269165u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269165: ;
    ecx = eax;
    PUSH32(esp, 0x0026916Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026916C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00269175u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269175: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x812F8C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002691A0
 * Original: 0x002691A0 - 0x002691CD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002691A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002691A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_002691C0; /* je: equal / zero */

loc_002691B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002691B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002691B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_002691C0: ;
    PUSH32(esp, 0x002691C5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002691C5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_002691E0
 * Original: 0x002691E0 - 0x00269222 (66 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002691E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002691E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00269200; /* je: equal / zero */

loc_002691F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002691F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002691F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00269200: ;
    PUSH32(esp, 0x00269205u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269205: ;
    ecx = eax;
    PUSH32(esp, 0x0026920Cu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026920C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026921C; /* je: equal / zero */

loc_00269213: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00269219u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269219: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026921C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00269240
 * Original: 0x00269240 - 0x00269282 (66 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00269260; /* je: equal / zero */

loc_00269250: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00269256u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269256: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00269260: ;
    PUSH32(esp, 0x00269265u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269265: ;
    ecx = eax;
    PUSH32(esp, 0x0026926Cu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026926C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026927C; /* je: equal / zero */

loc_00269273: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00269279u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269279: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026927C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002692A0
 * Original: 0x002692A0 - 0x0026930A (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002692A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002692A0: ;
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x64);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00269301; /* jle: less or equal (signed <=) */

loc_002692B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx + 0xE0;
    goto loc_002692C3;

loc_002692BF: ;
    ecx = MEM32(esp + 0x10);

loc_002692C3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002692D0; /* jl: less (signed <) */

loc_002692C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002692D0; /* jge: greater or equal (signed >=) */

loc_002692CE: ;
    edi = MEM32(ebx);

loc_002692D0: ;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x002692DAu); RECOMP_ABI_CALL(0x0002BAA9u, sub_0002BAA9); /* call 0x0002BAA9 */

loc_002692DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = esp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_002692E9; /* je: equal / zero */

loc_002692E2: ;
    PUSH32(esp, 0x002692E7u); RECOMP_ABI_CALL(0x00036BFCu, sub_00036BFC); /* call 0x00036BFC */

loc_002692E7: ;
    goto loc_002692EE;

loc_002692E9: ;
    PUSH32(esp, 0x002692EEu); RECOMP_ABI_CALL(0x000282AAu, sub_000282AA); /* call 0x000282AA */

loc_002692EE: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x002692F7u); RECOMP_ABI_CALL(0x000149D5u, sub_000149D5); /* call 0x000149D5 */

loc_002692F7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002692BF; /* jl: less (signed <) */

loc_002692FF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00269301: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269330
 * Original: 0x00269330 - 0x002693AC (124 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269330: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026933Eu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026933E: ;
    ecx = eax;
    PUSH32(esp, 0x00269345u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00269345: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0026934Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026934E: ;
    edi = ZX8(MEM8(esp + 0x24));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(esp + 0x30);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x80F1B8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00269370u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00269370: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    edx = esp + 0x34;
    PUSH32(esp, 0x80F148);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00269387u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00269387: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269397; /* je: equal / zero */

loc_0026938E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00269394u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269394: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00269397: ;
    PUSH32(esp, 0x0026939Cu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026939C: ;
    ecx = eax;
    PUSH32(esp, 0x002693A3u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_002693A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002693D0
 * Original: 0x002693D0 - 0x0026945D (141 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002693D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002693D0: ;
    eax = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002693E7u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_002693E7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x63);
    ecx = esp + 8;
    PUSH32(esp, 0x002693F4u); RECOMP_ABI_CALL(0x0002DAF2u, sub_0002DAF2); /* call 0x0002DAF2 */

loc_002693F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0x00269401u); RECOMP_ABI_CALL(0x000344D8u, sub_000344D8); /* call 0x000344D8 */

loc_00269401: ;
    ecx = esp;
    PUSH32(esp, 0x00269409u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00269409: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026944C; /* jle: less or equal (signed <=) */

loc_0026940D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x194);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + -1;
    edi = eax;
    /* nop */

loc_00269420: ;
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00269434u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00269434: ;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00269445u); RECOMP_ABI_CALL(0x00014255u, sub_00014255); /* call 0x00014255 */

loc_00269445: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00269420; /* jne: not equal / not zero */

loc_00269449: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0026944C: ;
    ecx = esp;
    PUSH32(esp, 0x00269454u); RECOMP_ABI_CALL(0x00036616u, sub_00036616); /* call 0x00036616 */

loc_00269454: ;
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00269480
 * Original: 0x00269480 - 0x00269539 (185 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269480: ;
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00269531; /* ja: above (unsigned >) */

loc_00269498: ;
    ecx = ZX8(MEM8(ecx + 0x269548));
    { uint32_t _jt = MEM32(ecx * 4 + 0x26953C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x002694A6u) goto loc_002694A6;
    if (_jt == 0x002694D5u) goto loc_002694D5;
    if (_jt == 0x00269531u) goto loc_00269531;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002694A6: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x002694C9u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_002694C9: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 6 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269531; /* je: equal / zero */

loc_002694D5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1E (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002694E4; /* jle: less or equal (signed <=) */

loc_002694DF: ;
    ebx = 0x1E;

loc_002694E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_002694F2; /* je: equal / zero */

loc_002694ED: ;
    edi = 5;

loc_002694F2: ;
    PUSH32(esp, 0x002694F7u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002694F7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026952B; /* jl: less (signed <) */

loc_002694FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026952B; /* jge: greater or equal (signed >=) */

loc_00269503: ;
    eax = MEM32(esi + edx * 4 + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026952B; /* je: equal / zero */

loc_0026950E: ;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00269518u); RECOMP_ABI_CALL(0x0002BAA9u, sub_0002BAA9); /* call 0x0002BAA9 */

loc_00269518: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00269521u); RECOMP_ABI_CALL(0x00026289u, sub_00026289); /* call 0x00026289 */

loc_00269521: ;
    ecx = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026952Bu); RECOMP_ABI_CALL(0x000149D5u, sub_000149D5); /* call 0x000149D5 */

loc_0026952B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002694F2; /* jne: not equal / not zero */

loc_0026952F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00269531: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269590
 * Original: 0x00269590 - 0x00269622 (146 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269590: ;
    _fb = (uint32_t)(0x1BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1BC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = MEM32(ebp + 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002695AAu); RECOMP_ABI_CALL(0x00026E87u, sub_00026E87); /* call 0x00026E87 */

loc_002695AA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00269612; /* jle: less or equal (signed <=) */

loc_002695B0: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xE0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002695B6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002695C6; /* jl: less (signed <) */

loc_002695BA: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002695C6; /* jge: greater or equal (signed >=) */

loc_002695C3: ;
    edi = MEM32(ebp);

loc_002695C6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002695E8; /* je: equal / zero */

loc_002695CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x002695D6u); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_002695D6: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x002695DFu); RECOMP_ABI_CALL(0x0001721Bu, sub_0001721B); /* call 0x0001721B */

loc_002695DF: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x002695E8u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_002695E8: ;
    PUSH32(esp, esi);
    ecx = esp + 0x74;
    PUSH32(esp, 0x002695F2u); RECOMP_ABI_CALL(0x0002BAA9u, sub_0002BAA9); /* call 0x0002BAA9 */

loc_002695F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    PUSH32(esp, 0x00269601u); RECOMP_ABI_CALL(0x0002304Du, sub_0002304D); /* call 0x0002304D */

loc_00269601: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x0026960Au); RECOMP_ABI_CALL(0x000149D5u, sub_000149D5); /* call 0x000149D5 */

loc_0026960A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002695B6; /* jl: less (signed <) */

loc_00269612: ;
    PUSH32(esp, 0x00269617u); RECOMP_ABI_CALL(0x00020A32u, sub_00020A32); /* call 0x00020A32 */

loc_00269617: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1BC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269650
 * Original: 0x00269650 - 0x002696B2 (98 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269650: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x7F6ED4);
    ecx = edi;
    PUSH32(esp, 0x00269663u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_00269663: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x7F6EC0);
    ecx = edi;
    PUSH32(esp, 0x00269671u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_00269671: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002696AE; /* jle: less or equal (signed <=) */

loc_0026967D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00269685: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026968F; /* jl: less (signed <) */

loc_00269689: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026968F; /* jge: greater or equal (signed >=) */

loc_0026968D: ;
    esi = MEM32(edx);

loc_0026968F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002696A0; /* je: equal / zero */

loc_00269693: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00269685; /* jl: less (signed <) */

loc_0026969B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_002696A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F6E94);
    ecx = edi;
    PUSH32(esp, 0x002696ADu); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_002696AD: ;
    POP32(esp, esi);

loc_002696AE: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002696D0
 * Original: 0x002696D0 - 0x00269758 (136 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002696D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002696D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x002696ECu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_002696EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00269701u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_00269701: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00269746; /* jne: not equal / not zero */

loc_0026970B: ;
    goto loc_00269710;

    /* nop */

loc_00269710: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0026972Eu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0026972E: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269710; /* je: equal / zero */

loc_00269734: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00269746: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00269780
 * Original: 0x00269780 - 0x002697EA (106 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0026979Du); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0026979D: ;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002697DC; /* je: equal / zero */

loc_002697A3: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x002697C8u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_002697C8: ;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002697A3; /* jne: not equal / not zero */

loc_002697CE: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_002697DC: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00269810
 * Original: 0x00269810 - 0x00269A07 (503 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269810: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269997; /* je: equal / zero */

loc_0026981F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_0026982A: ;
    MEM32(eax + ecx * 4 + 4) = 0x5F;
    edx = MEM32(eax);
    ecx = 1;
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_0026984B: ;
    MEM32(eax + edx * 4 + 4) = 0x60;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_00269867: ;
    MEM32(eax + edx * 4 + 4) = 0x61;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_00269883: ;
    MEM32(eax + edx * 4 + 4) = 0x62;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_0026989F: ;
    MEM32(eax + edx * 4 + 4) = 0x63;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_002698BB: ;
    MEM32(eax + edx * 4 + 4) = 0x64;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_002698D7: ;
    MEM32(eax + edx * 4 + 4) = 0x65;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_002698F3: ;
    MEM32(eax + edx * 4 + 4) = 0x66;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_0026990F: ;
    MEM32(eax + edx * 4 + 4) = 0x67;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_00269927: ;
    MEM32(eax + edx * 4 + 4) = 0x68;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_0026993F: ;
    MEM32(eax + edx * 4 + 4) = 0x69;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_00269957: ;
    MEM32(eax + edx * 4 + 4) = 0x6A;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_0026996F: ;
    MEM32(eax + edx * 4 + 4) = 0x6B;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00269997; /* jge: greater or equal (signed >=) */

loc_00269987: ;
    MEM32(eax + edx * 4 + 4) = 0x6C;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00269997: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269A02; /* je: equal / zero */

loc_002699A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002699A2: ;
    MEM32(esp + eax * 4 + 4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002699A2; /* jl: less (signed <) */

loc_002699AC: ;
    PUSH32(esp, 0x7FFEBC);
    ecx = esi;
    PUSH32(esp, 0x002699B8u); RECOMP_ABI_CALL(0x0002D1B0u, sub_0002D1B0); /* call 0x0002D1B0 */

loc_002699B8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002699CF; /* je: equal / zero */

loc_002699BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002699C5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002699C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_002699CF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    MEM32(esi + 4) = 0xE;
    PUSH32(esp, 0x002699DFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002699DF: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00269A02; /* jle: less or equal (signed <=) */

loc_002699EE: ;
    edi = edi;

loc_002699F0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + eax * 4 + 4);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002699F0; /* jl: less (signed <) */

loc_00269A02: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269A90
 * Original: 0x00269A90 - 0x00269B2F (159 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269A90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00269A9Bu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269A9B: ;
    ecx = eax;
    PUSH32(esp, 0x00269AA2u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00269AA2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00269AACu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269AAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, 0x00269AB6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269AB6: ;
    ecx = eax;
    PUSH32(esp, 0x00269ABDu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00269ABD: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00269ACBu); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_00269ACB: ;
    eax = 1;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = 3;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x10) = edi;
    ecx = 2;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x00269B08u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269B08: ;
    ecx = eax;
    PUSH32(esp, 0x00269B0Fu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00269B0F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269B1C; /* je: equal / zero */

loc_00269B13: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00269B19u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269B19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00269B1C: ;
    PUSH32(esp, 0x00269B21u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00269B21: ;
    ecx = eax;
    PUSH32(esp, 0x00269B28u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00269B28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269B60
 * Original: 0x00269B60 - 0x00269B7F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269B60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8059F4;
    if (TEST_Z(_fa, _fb)) goto loc_00269B79; /* je: equal / zero */

loc_00269B70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00269B76u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269B76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00269B79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00269B90
 * Original: 0x00269B90 - 0x00269E01 (625 bytes, 223 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269B90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edi + 0x10;
    if (CMP_AE(_fa, _fb)) goto loc_00269DF9; /* jae: above or equal (unsigned >=) */

loc_00269BA6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00269BB0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269BB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00269BC4; /* je: equal / zero */

loc_00269BB7: ;
    PUSH32(esp, 0xC);
    ecx = eax;
    PUSH32(esp, 0x00269BC0u); RECOMP_ABI_CALL(0x0002B725u, sub_0002B725); /* call 0x0002B725 */

loc_00269BC0: ;
    ebp = eax;
    goto loc_00269BC6;

loc_00269BC4: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00269BC6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00269BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00269BCCu); } /* indirect call */
    }

loc_00269BCF: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00269BDFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269BDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00269BF8; /* je: equal / zero */

loc_00269BE6: ;
    MEM32(eax) = 0x80EF68;
    MEM32(eax + 4) = esi;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    goto loc_00269BFA;

loc_00269BF8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00269BFA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00269C03u); RECOMP_ABI_CALL(0x0002FECEu, sub_0002FECE); /* call 0x0002FECE */

loc_00269C03: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00269DBA; /* jb: below (unsigned <) */

loc_00269C10: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edi);
    esi = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00269C1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00269C1Cu); } /* indirect call */
    }

loc_00269C1F: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00269C2Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269C2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00269C40; /* je: equal / zero */

loc_00269C32: ;
    MEM32(eax) = 0x80EF78;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ebx;
    goto loc_00269C42;

loc_00269C40: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00269C42: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00269C4Au); RECOMP_ABI_CALL(0x0002FECEu, sub_0002FECE); /* call 0x0002FECE */

loc_00269C4A: ;
    eax = MEM32(edi + 4);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + -2006;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C);
    if (CMP_LE(_fas, _fbs)) goto loc_00269CB9; /* jle: less or equal (signed <=) */

loc_00269C5C: ;
    PUSH32(esp, 0x00269C61u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269C61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00269C77; /* je: equal / zero */

loc_00269C68: ;
    MEM32(eax) = 0x80EF38;
    MEM32(eax + 4) = esi;
    MEM8(eax + 0x38) = 0;
    goto loc_00269C79;

loc_00269C77: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00269C79: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00269C9A; /* jge: greater or equal (signed >=) */

loc_00269C81: ;
    MEM32(eax + ecx * 4 + 8) = 0x3F;
    ecx = MEM32(eax + 4);
    MEM32(eax + ecx * 8 + 0x18) = esi;
    edx = MEM32(eax + 4);
    MEM32(eax + edx * 8 + 0x1C) = esi;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00269C9A: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00269CA2u); RECOMP_ABI_CALL(0x0002FECEu, sub_0002FECE); /* call 0x0002FECE */

loc_00269CA2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00269CA8u); RECOMP_ABI_CALL(0x0001391Du, sub_0001391D); /* call 0x0001391D */

loc_00269CA8: ;
    ecx = eax;
    PUSH32(esp, 0x00269CAFu); RECOMP_ABI_CALL(0x00017C6Bu, sub_00017C6B); /* call 0x00017C6B */

loc_00269CAF: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00269CB9: ;
    PUSH32(esp, 0x00269CBEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269CBE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00269CD4; /* je: equal / zero */

loc_00269CC5: ;
    MEM32(eax) = 0x80EF38;
    MEM32(eax + 4) = esi;
    MEM8(eax + 0x38) = 0;
    goto loc_00269CD6;

loc_00269CD4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00269CD6: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00269D0C; /* jge: greater or equal (signed >=) */

loc_00269CDE: ;
    MEM32(eax + ecx * 4 + 8) = 0x13;
    ecx = ebx + 1;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x80000003u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00269CF6; /* jns: not sign (positive) */

loc_00269CF1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00269CF6: ;
    edx = MEM32(eax + 4);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + edx * 8 + 0x18) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(eax + ecx * 8 + 0x1C) = esi;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00269D0C: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00269D14u); RECOMP_ABI_CALL(0x0002FECEu, sub_0002FECE); /* call 0x0002FECE */

loc_00269D14: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = esp + 0x20;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x00269D28u); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_00269D28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00269D30u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269D30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00269D46; /* je: equal / zero */

loc_00269D37: ;
    MEM32(eax) = 0x80EF38;
    MEM32(eax + 4) = esi;
    MEM8(eax + 0x38) = 0;
    goto loc_00269D48;

loc_00269D46: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00269D48: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esp + 0x14);
    if (CMP_GE(_fas, _fbs)) goto loc_00269D6D; /* jge: greater or equal (signed >=) */

loc_00269D54: ;
    MEM32(eax + ecx * 4 + 8) = 0x14;
    ecx = MEM32(eax + 4);
    MEM32(eax + ecx * 8 + 0x18) = edx;
    edx = MEM32(eax + 4);
    MEM32(eax + edx * 8 + 0x1C) = ebx;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00269D6D: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00269D75u); RECOMP_ABI_CALL(0x0002FECEu, sub_0002FECE); /* call 0x0002FECE */

loc_00269D75: ;
    ecx = esp + 0x10;
    esi = esp + 0x18;
    PUSH32(esp, 0x00269D82u); RECOMP_ABI_CALL(0x00254D20u, sub_00254D20); /* call 0x00254D20 */

loc_00269D82: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00269D8Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269D8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00269DA7; /* je: equal / zero */

loc_00269D92: ;
    ecx = edi + 0x14;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = 0x80EF68;
    MEM32(eax + 8) = ecx;
    goto loc_00269DA9;

loc_00269DA7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00269DA9: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00269DB1u); RECOMP_ABI_CALL(0x0002FECEu, sub_0002FECE); /* call 0x0002FECE */

loc_00269DB1: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00269DBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00269DB7u); } /* indirect call */
    }

loc_00269DBA: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00269DC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00269DC4u); } /* indirect call */
    }

loc_00269DC7: ;
    PUSH32(esp, 0x00269DCCu); RECOMP_ABI_CALL(0x0001391Du, sub_0001391D); /* call 0x0001391D */

loc_00269DCC: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00269CA2; /* jle: less or equal (signed <=) */

loc_00269DD7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00269CAF; /* je: equal / zero */

loc_00269DDF: ;
    ecx = ebp;
    PUSH32(esp, 0x00269DE6u); RECOMP_ABI_CALL(0x000153EEu, sub_000153EE); /* call 0x000153EE */

loc_00269DE6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00269DECu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269DEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00269DF9: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269EA0
 * Original: 0x00269EA0 - 0x0026A15C (700 bytes, 230 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269EA0: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0xB);
    edi = ecx;
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x80F010);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ebx;
    esi = edi + 4;
    MEM8(esp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x00269ED8u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00269ED8: ;
    eax = MEM32(esp + 0x28);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x2C) = ecx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax;
    MEM32(esp + 0x34) = edx;
    edx = ZX8(HI8(eax));
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xC);
    eax = esp + 0x2F;
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = ecx;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = edx;
    edx = esp + 0x5C;
    PUSH32(esp, 0x80F010);
    PUSH32(esp, edx);
    MEM8(esp + 0x3F) = LO8(ebx);
    PUSH32(esp, 0x00269F31u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00269F31: ;
    eax = MEM32(esp + 0x40);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x54) = ecx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x58) = edx;
    edx = ZX8(HI8(eax));
    eax = MEM32(esi);
    MEM32(esp + 0x5C) = ecx;
    ecx = esp + 0x70;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00269F71: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00269F71; /* jne: not equal / not zero */

loc_00269F7B: ;
    ecx = esi;
    PUSH32(esp, 0x00269F82u); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_00269F82: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00269F8Eu); RECOMP_ABI_CALL(0x0002D1B0u, sub_0002D1B0); /* call 0x0002D1B0 */

loc_00269F8E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269FA1; /* je: equal / zero */

loc_00269F95: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00269F9Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00269F9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebx;

loc_00269FA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    MEM32(esi + 4) = 8;
    PUSH32(esp, 0x00269FB0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00269FB0: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00269FD2; /* jle: less or equal (signed <=) */

loc_00269FBF: ;
    /* nop */

loc_00269FC0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + eax * 4 + 0x14);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00269FC0; /* jl: less (signed <) */

loc_00269FD2: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0xF);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, 0x80F010);
    PUSH32(esp, edx);
    esi = edi + 0x18;
    MEM8(esp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x00269FF9u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00269FF9: ;
    eax = MEM32(esp + 0x28);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x2C) = ecx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x30) = edx;
    edx = ZX8(HI8(eax));
    eax = MEM32(esi);
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x58;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0026A040: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A040; /* jne: not equal / not zero */

loc_0026A04A: ;
    ecx = esi;
    PUSH32(esp, 0x0026A051u); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_0026A051: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0026A05Du); RECOMP_ABI_CALL(0x0002D1B0u, sub_0002D1B0); /* call 0x0002D1B0 */

loc_0026A05D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A070; /* je: equal / zero */

loc_0026A064: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A06Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026A06A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebx;

loc_0026A070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    MEM32(esi + 4) = 4;
    PUSH32(esp, 0x0026A07Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026A07F: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026A0A2; /* jle: less or equal (signed <=) */

loc_0026A08E: ;
    edi = edi;

loc_0026A090: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + eax * 4 + 0x14);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026A090; /* jl: less (signed <) */

loc_0026A0A2: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0x11);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, 0x80F010);
    PUSH32(esp, edx);
    esi = edi + 0x2C;
    MEM8(esp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x0026A0C9u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026A0C9: ;
    eax = MEM32(esp + 0x28);
    ecx = eax;
    edx = ZX8(HI8(eax));
    eax = MEM32(esi);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esp + 0x58;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0026A0F0;

    /* nop */

loc_0026A0F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A0F0; /* jne: not equal / not zero */

loc_0026A0FA: ;
    ecx = esi;
    PUSH32(esp, 0x0026A101u); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_0026A101: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0026A10Du); RECOMP_ABI_CALL(0x0002D1B0u, sub_0002D1B0); /* call 0x0002D1B0 */

loc_0026A10D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A120; /* je: equal / zero */

loc_0026A114: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A11Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026A11A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebx;

loc_0026A120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    MEM32(esi + 4) = 2;
    PUSH32(esp, 0x0026A12Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026A12F: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026A152; /* jle: less or equal (signed <=) */

loc_0026A13E: ;
    edi = edi;

loc_0026A140: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + eax * 4 + 0x14);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026A140; /* jl: less (signed <) */

loc_0026A152: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026A210
 * Original: 0x0026A210 - 0x0026A30B (251 bytes, 84 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A210: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0026A22Eu); RECOMP_ABI_CALL(0x00036E4Fu, sub_00036E4F); /* call 0x00036E4F */

loc_0026A22E: ;
    ecx = MEM32(esp + 0xCC);
    PUSH32(esp, 8);
    edi = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0026A245u); RECOMP_ABI_CALL(0x000376ECu, sub_000376EC); /* call 0x000376EC */

loc_0026A245: ;
    edx = MEM32(esp + 0xC4);
    ebx = MEM32(esi + 0x44);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0026A263u); RECOMP_ABI_CALL(0x000324B2u, sub_000324B2); /* call 0x000324B2 */

loc_0026A263: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A27Au); RECOMP_ABI_CALL(0x00034668u, sub_00034668); /* call 0x00034668 */

loc_0026A27A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0026A282u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026A282: ;
    ecx = eax;
    PUSH32(esp, 0x0026A289u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026A289: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0026A292u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026A292: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0xB);
    esi = eax;
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x20;
    PUSH32(esp, 0x80F1B8);
    PUSH32(esp, ecx);
    edi = eax;
    ebx = eax;
    PUSH32(esp, 0x0026A2B2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026A2B2: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x38;
    PUSH32(esp, 0x80F148);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026A2CAu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026A2CA: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0026A2D2u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0026A2D2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0026A2DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A2DAu); } /* indirect call */
    }

loc_0026A2DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A2EA; /* je: equal / zero */

loc_0026A2E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026A2E7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026A2E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026A2EA: ;
    PUSH32(esp, 0x0026A2EFu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026A2EF: ;
    ecx = eax;
    PUSH32(esp, 0x0026A2F6u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026A2F6: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x0026A2FFu); RECOMP_ABI_CALL(0x00022D9Bu, sub_00022D9B); /* call 0x00022D9B */

loc_0026A2FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0026A350
 * Original: 0x0026A350 - 0x0026A42C (220 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A350: ;
    _fb = (uint32_t)(0xBA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xBA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xD0;
    PUSH32(esp, 0x0026A366u); RECOMP_ABI_CALL(0x00016E51u, sub_00016E51); /* call 0x00016E51 */

loc_0026A366: ;
    PUSH32(esp, 0x0026A36Bu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026A36B: ;
    ecx = eax;
    PUSH32(esp, 0x0026A372u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026A372: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0026A37Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026A37B: ;
    ebp = MEM32(esp + 0xBBC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esp + 0xD4;
    ebx = eax;
    MEM32(esp + 0x20) = 0x7FA120;
    PUSH32(esp, 0x0026A39Cu); RECOMP_ABI_CALL(0x00018AEEu, sub_00018AEE); /* call 0x00018AEE */

loc_0026A39C: ;
    ecx = 0x1D;
    esi = esp + 0xD0;
    edi = esp + 0x5C;
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
    eax = MEM32(esp + 0x98);
    PUSH32(esp, 0x32);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0026A3CDu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0026A3CD: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xFFFFF82Au;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x8007D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026A3EFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026A3EF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0x7FA120;
    if (CMP_EQ(_fa, _fb)) goto loc_0026A407; /* je: equal / zero */

loc_0026A3FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026A404u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026A404: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026A407: ;
    PUSH32(esp, 0x0026A40Cu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026A40C: ;
    ecx = eax;
    PUSH32(esp, 0x0026A413u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026A413: ;
    ecx = esp + 0xD0;
    PUSH32(esp, 0x0026A41Fu); RECOMP_ABI_CALL(0x000183EBu, sub_000183EB); /* call 0x000183EB */

loc_0026A41F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xBA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xBA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026A470
 * Original: 0x0026A470 - 0x0026A490 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A470: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ecx) = 0x805AC0;
    if (CMP_EQ(_fa, _fb)) goto loc_0026A48E; /* je: equal / zero */

loc_0026A47E: ;
    ecx = esi;
    PUSH32(esp, 0x0026A485u); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_0026A485: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026A48Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026A48B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026A48E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A4A0
 * Original: 0x0026A4A0 - 0x0026A537 (151 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A4A0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0026A4CF; /* jle: less or equal (signed <=) */

loc_0026A4B4: ;
    edx = MEM32(ebx + 0x10);
    edi = eax;
    /* nop */

loc_0026A4C0: ;
    ecx = MEM32(edx);
    PUSH32(esp, 0x0026A4C7u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_0026A4C7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0026A4C0; /* jne: not equal / not zero */

loc_0026A4CF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026A4E6; /* jle: less or equal (signed <=) */

loc_0026A4D5: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0026A4DDu); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0026A4DD: ;
    MEM32(esp + edi * 4 + 0xC) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026A4D5; /* jl: less (signed <) */

loc_0026A4E6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026A50D; /* jle: less or equal (signed <=) */

loc_0026A4EC: ;
    /* nop */

loc_0026A4F0: ;
    PUSH32(esp, 0x0026A4F5u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0026A4F5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(esp + edi * 4 + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    eax = esp + edx * 4 + 0xC;
    edx = MEM32(eax);
    MEM32(esp + edi * 4 + 8) = edx;
    MEM32(eax) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0026A4F0; /* jl: less (signed <) */

loc_0026A50D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026A52E; /* jle: less or equal (signed <=) */

loc_0026A513: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);

loc_0026A518: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0026A520u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0026A520: ;
    ecx = MEM32(esp + edi * 4 + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + eax * 4) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0026A518; /* jl: less (signed <) */

loc_0026A52D: ;
    POP32(esp, ebp);

loc_0026A52E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026A560
 * Original: 0x0026A560 - 0x0026A5C5 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A560: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = 0x864700;
    MEM32(esi + 0x3C) = 0xCF850;
    MEM32(esi + 0x34) = 0x29F6300;
    MEM32(esi + 0x30) = 0x6DDD0;
    MEM32(esi + 0x38) = 0x1AB3F00;
    MEM32(esi) = 0x812F90;
    PUSH32(esp, 0x0026A5B2u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0026A5B2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x19);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0026A5BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A5BAu); } /* indirect call */
    }

loc_0026A5BD: ;
    MEM8(esi + 0x40) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A5E0
 * Original: 0x0026A5E0 - 0x0026A5E5 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A5E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A5E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026A5F0
 * Original: 0x0026A5F0 - 0x0026A5F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A5F0(void)
{

loc_0026A5F0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A600
 * Original: 0x0026A600 - 0x0026A603 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A600: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026A610
 * Original: 0x0026A610 - 0x0026A613 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0026A610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A610: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026A620
 * Original: 0x0026A620 - 0x0026A627 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A620(void)
{

loc_0026A620: ;
    MEM32(ecx) = 0x80EFA8;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A630
 * Original: 0x0026A630 - 0x0026A663 (51 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A630(void)
{

loc_0026A630: ;
    ecx = MEM32(0x8F5AD0);
    eax = 2;
    MEM32(0x8C2260) = eax;
    MEM32(0x8C2264) = 1;
    MEM32(0x8C2268) = 1;
    MEM32(0x8C226C) = eax;
    PUSH32(esp, 0x0026A65Eu); RECOMP_ABI_CALL(0x00035D97u, sub_00035D97); /* call 0x00035D97 */

loc_0026A65E: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026A670
 * Original: 0x0026A670 - 0x0026A6A7 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A670: ;
    eax = MEM32(0x8FA520);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A6A4; /* jne: not equal / not zero */

loc_0026A679: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0026A682u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026A682: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A697; /* je: equal / zero */

loc_0026A689: ;
    MEM32(eax) = 0;
    MEM32(0x8FA520) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0026A697: ;
    MEM32(0x8FA520) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0026A6A4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026A6C0
 * Original: 0x0026A6C0 - 0x0026A6D9 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A6C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0026A6D3; /* je: equal / zero */

loc_0026A6CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026A6D0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026A6D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026A6D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026A6E0
 * Original: 0x0026A6E0 - 0x0026A7BC (220 bytes, 66 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A6E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026A7B9; /* ja: above (unsigned >) */

loc_0026A6F0: ;
    eax = ZX8(MEM8(eax + 0x26A7F0));
    { uint32_t _jt = MEM32(eax * 4 + 0x26A7BC); /* switch: 13 entries, 13 targets */
    if (_jt == 0x0026A6FEu) goto loc_0026A6FE;
    if (_jt == 0x0026A70Eu) goto loc_0026A70E;
    if (_jt == 0x0026A71Eu) goto loc_0026A71E;
    if (_jt == 0x0026A72Eu) goto loc_0026A72E;
    if (_jt == 0x0026A73Eu) goto loc_0026A73E;
    if (_jt == 0x0026A74Eu) goto loc_0026A74E;
    if (_jt == 0x0026A75Eu) goto loc_0026A75E;
    if (_jt == 0x0026A76Eu) goto loc_0026A76E;
    if (_jt == 0x0026A77Eu) goto loc_0026A77E;
    if (_jt == 0x0026A78Eu) goto loc_0026A78E;
    if (_jt == 0x0026A79Eu) goto loc_0026A79E;
    if (_jt == 0x0026A7AEu) goto loc_0026A7AE;
    if (_jt == 0x0026A7B9u) goto loc_0026A7B9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026A6FE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026A708u); RECOMP_ABI_CALL(0x00018350u, sub_00018350); /* call 0x00018350 */

loc_0026A708: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A70E: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026A718u); RECOMP_ABI_CALL(0x000127E3u, sub_000127E3); /* call 0x000127E3 */

loc_0026A718: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A71E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A728u); RECOMP_ABI_CALL(0x0002928Bu, sub_0002928B); /* call 0x0002928B */

loc_0026A728: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A72E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026A738u); RECOMP_ABI_CALL(0x0002E259u, sub_0002E259); /* call 0x0002E259 */

loc_0026A738: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A73E: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026A748u); RECOMP_ABI_CALL(0x00013698u, sub_00013698); /* call 0x00013698 */

loc_0026A748: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A74E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A758u); RECOMP_ABI_CALL(0x0002E6C3u, sub_0002E6C3); /* call 0x0002E6C3 */

loc_0026A758: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A75E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026A768u); RECOMP_ABI_CALL(0x00031300u, sub_00031300); /* call 0x00031300 */

loc_0026A768: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A76E: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026A778u); RECOMP_ABI_CALL(0x0002C17Au, sub_0002C17A); /* call 0x0002C17A */

loc_0026A778: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A77E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A788u); RECOMP_ABI_CALL(0x00020F8Cu, sub_00020F8C); /* call 0x00020F8C */

loc_0026A788: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A78E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026A798u); RECOMP_ABI_CALL(0x00014D09u, sub_00014D09); /* call 0x00014D09 */

loc_0026A798: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A79E: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026A7A8u); RECOMP_ABI_CALL(0x00030685u, sub_00030685); /* call 0x00030685 */

loc_0026A7A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026A7AE: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A7B8u); RECOMP_ABI_CALL(0x0001E930u, sub_0001E930); /* call 0x0001E930 */

loc_0026A7B8: ;
    POP32(esp, ecx);

loc_0026A7B9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026A8F0
 * Original: 0x0026A8F0 - 0x0026AA0B (283 bytes, 113 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A8F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0026A906u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A903u); } /* indirect call */
    }

loc_0026A906: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0026A910: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0026A91Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A919u); } /* indirect call */
    }

loc_0026A91C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0026A92Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A927u); } /* indirect call */
    }

loc_0026A92A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0026A938u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A935u); } /* indirect call */
    }

loc_0026A938: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0026A946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A943u); } /* indirect call */
    }

loc_0026A946: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0x22);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x30;
    PUSH32(esp, 0x80F010);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = 0;
    MEM8(esp + 0x2B) = 0;
    PUSH32(esp, 0x0026A975u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026A975: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A9DA; /* je: equal / zero */

loc_0026A980: ;
    eax = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A98C; /* jne: not equal / not zero */

loc_0026A987: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026A9DA; /* jl: less (signed <) */

loc_0026A98C: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026A996: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A9C0; /* jne: not equal / not zero */

loc_0026A99D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0026A9AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A9A7u); } /* indirect call */
    }

loc_0026A9AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A9B3; /* jne: not equal / not zero */

loc_0026A9AF: ;
    MEM32(esp + 0x14) = ebx;

loc_0026A9B3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026A996; /* jl: less (signed <) */

loc_0026A9B9: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A9DA; /* je: equal / zero */

loc_0026A9C0: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0026A9C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A9C6u); } /* indirect call */
    }

loc_0026A9C9: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0026A9DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A9D7u); } /* indirect call */
    }

loc_0026A9DA: ;
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A9F7; /* jne: not equal / not zero */

loc_0026A9E5: ;
    edx = MEM32(esi);
    eax = 0x38;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0026A9F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A9F4u); } /* indirect call */
    }

loc_0026A9F7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026A910; /* jl: less (signed <) */

loc_0026AA01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026AA60
 * Original: 0x0026AA60 - 0x0026AA9D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AA60(void)
{

loc_0026AA60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0026AA79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026AA73u); } /* indirect call */
    }

loc_0026AA79: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0x158;
    PUSH32(esp, 0x0026AA8Bu); RECOMP_ABI_CALL(0x00030E37u, sub_00030E37); /* call 0x00030E37 */

loc_0026AA8B: ;
    POP32(esp, edi);
    MEM32(esi + 0x5C) = 2;
    MEM32(esi + 0x58) = 3;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026AAB0
 * Original: 0x0026AAB0 - 0x0026AB1C (108 bytes, 28 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AAB0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0x21);
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0xF) = LO8(eax);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x80F010);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026AAE0u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026AAE0: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x158;
    MEM32(0x8C2260) = 3;
    MEM32(0x8C2264) = 1;
    MEM32(0x8C2268) = eax;
    MEM32(0x8C226C) = 2;
    PUSH32(esp, 0x0026AB15u); RECOMP_ABI_CALL(0x0001A092u, sub_0001A092); /* call 0x0001A092 */

loc_0026AB15: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026AB40
 * Original: 0x0026AB40 - 0x0026AD37 (503 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AB40: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026ACC7; /* je: equal / zero */

loc_0026AB4F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AB5A: ;
    MEM32(eax + ecx * 4 + 4) = 0x43;
    edx = MEM32(eax);
    ecx = 1;
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AB7B: ;
    MEM32(eax + edx * 4 + 4) = 0x44;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AB97: ;
    MEM32(eax + edx * 4 + 4) = 0x45;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026ABB3: ;
    MEM32(eax + edx * 4 + 4) = 0x46;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026ABCF: ;
    MEM32(eax + edx * 4 + 4) = 0x47;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026ABEB: ;
    MEM32(eax + edx * 4 + 4) = 0x48;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AC07: ;
    MEM32(eax + edx * 4 + 4) = 0x49;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AC23: ;
    MEM32(eax + edx * 4 + 4) = 0x4A;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AC3F: ;
    MEM32(eax + edx * 4 + 4) = 0x50;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AC57: ;
    MEM32(eax + edx * 4 + 4) = 0x4B;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AC6F: ;
    MEM32(eax + edx * 4 + 4) = 0x4C;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AC87: ;
    MEM32(eax + edx * 4 + 4) = 0x4D;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026AC9F: ;
    MEM32(eax + edx * 4 + 4) = 0x4E;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC7; /* jge: greater or equal (signed >=) */

loc_0026ACB7: ;
    MEM32(eax + edx * 4 + 4) = 0x4F;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026ACC7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AD32; /* je: equal / zero */

loc_0026ACD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026ACD2: ;
    MEM32(esp + eax * 4 + 4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026ACD2; /* jl: less (signed <) */

loc_0026ACDC: ;
    PUSH32(esp, 0x7FFED4);
    ecx = esi;
    PUSH32(esp, 0x0026ACE8u); RECOMP_ABI_CALL(0x0002D1B0u, sub_0002D1B0); /* call 0x0002D1B0 */

loc_0026ACE8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026ACFF; /* je: equal / zero */

loc_0026ACEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026ACF5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026ACF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_0026ACFF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    MEM32(esi + 4) = 0xE;
    PUSH32(esp, 0x0026AD0Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026AD0F: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026AD32; /* jle: less or equal (signed <=) */

loc_0026AD1E: ;
    edi = edi;

loc_0026AD20: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + eax * 4 + 4);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026AD20; /* jl: less (signed <) */

loc_0026AD32: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026ADC0
 * Original: 0x0026ADC0 - 0x0026AE60 (160 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026ADC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026ADC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026ADCBu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026ADCB: ;
    ecx = eax;
    PUSH32(esp, 0x0026ADD2u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026ADD2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0026ADDCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026ADDC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0026ADE6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026ADE6: ;
    ecx = eax;
    PUSH32(esp, 0x0026ADEDu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026ADED: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0026ADFBu); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_0026ADFB: ;
    eax = 1;
    MEM32(esi + 4) = eax;
    edx = 3;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x10) = ebx;
    ecx = 2;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, 0x0026AE39u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026AE39: ;
    ecx = eax;
    PUSH32(esp, 0x0026AE40u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026AE40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AE4D; /* je: equal / zero */

loc_0026AE44: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026AE4Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026AE4A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026AE4D: ;
    PUSH32(esp, 0x0026AE52u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026AE52: ;
    ecx = eax;
    PUSH32(esp, 0x0026AE59u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026AE59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026AE90
 * Original: 0x0026AE90 - 0x0026AEFA (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026AE90: ;
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x64);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0026AEF1; /* jle: less or equal (signed <=) */

loc_0026AEA5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx + 0xE0;
    goto loc_0026AEB3;

loc_0026AEAF: ;
    ecx = MEM32(esp + 0x10);

loc_0026AEB3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026AEC0; /* jl: less (signed <) */

loc_0026AEB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026AEC0; /* jge: greater or equal (signed >=) */

loc_0026AEBE: ;
    edi = MEM32(ebx);

loc_0026AEC0: ;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0026AECAu); RECOMP_ABI_CALL(0x0002BAA9u, sub_0002BAA9); /* call 0x0002BAA9 */

loc_0026AECA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = esp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_0026AED9; /* je: equal / zero */

loc_0026AED2: ;
    PUSH32(esp, 0x0026AED7u); RECOMP_ABI_CALL(0x00036BFCu, sub_00036BFC); /* call 0x00036BFC */

loc_0026AED7: ;
    goto loc_0026AEDE;

loc_0026AED9: ;
    PUSH32(esp, 0x0026AEDEu); RECOMP_ABI_CALL(0x000282AAu, sub_000282AA); /* call 0x000282AA */

loc_0026AEDE: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0026AEE7u); RECOMP_ABI_CALL(0x000149D5u, sub_000149D5); /* call 0x000149D5 */

loc_0026AEE7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026AEAF; /* jl: less (signed <) */

loc_0026AEEF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0026AEF1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026AF20
 * Original: 0x0026AF20 - 0x0026AF9C (124 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AF20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026AF2Eu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026AF2E: ;
    ecx = eax;
    PUSH32(esp, 0x0026AF35u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026AF35: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0026AF3Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026AF3E: ;
    edi = ZX8(MEM8(esp + 0x24));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(esp + 0x30);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x80F1B8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0026AF60u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026AF60: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    edx = esp + 0x34;
    PUSH32(esp, 0x80F148);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026AF77u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026AF77: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AF87; /* je: equal / zero */

loc_0026AF7E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026AF84u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026AF84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026AF87: ;
    PUSH32(esp, 0x0026AF8Cu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026AF8C: ;
    ecx = eax;
    PUSH32(esp, 0x0026AF93u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026AF93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026AFC0
 * Original: 0x0026AFC0 - 0x0026B04D (141 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AFC0: ;
    eax = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0026AFD7u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0026AFD7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x63);
    ecx = esp + 8;
    PUSH32(esp, 0x0026AFE4u); RECOMP_ABI_CALL(0x0002DAF2u, sub_0002DAF2); /* call 0x0002DAF2 */

loc_0026AFE4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0x0026AFF1u); RECOMP_ABI_CALL(0x000344D8u, sub_000344D8); /* call 0x000344D8 */

loc_0026AFF1: ;
    ecx = esp;
    PUSH32(esp, 0x0026AFF9u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_0026AFF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026B03C; /* jle: less or equal (signed <=) */

loc_0026AFFD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x194);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + -1;
    edi = eax;
    /* nop */

loc_0026B010: ;
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0026B024u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0026B024: ;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0026B035u); RECOMP_ABI_CALL(0x00014255u, sub_00014255); /* call 0x00014255 */

loc_0026B035: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0026B010; /* jne: not equal / not zero */

loc_0026B039: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0026B03C: ;
    ecx = esp;
    PUSH32(esp, 0x0026B044u); RECOMP_ABI_CALL(0x00036616u, sub_00036616); /* call 0x00036616 */

loc_0026B044: ;
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026B070
 * Original: 0x0026B070 - 0x0026B129 (185 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026B070: ;
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026B121; /* ja: above (unsigned >) */

loc_0026B088: ;
    ecx = ZX8(MEM8(ecx + 0x26B138));
    { uint32_t _jt = MEM32(ecx * 4 + 0x26B12C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0026B096u) goto loc_0026B096;
    if (_jt == 0x0026B0C5u) goto loc_0026B0C5;
    if (_jt == 0x0026B121u) goto loc_0026B121;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026B096: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0026B0B9u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0026B0B9: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 6 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B121; /* je: equal / zero */

loc_0026B0C5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1E (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0026B0D4; /* jle: less or equal (signed <=) */

loc_0026B0CF: ;
    ebx = 0x1E;

loc_0026B0D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0026B0E2; /* je: equal / zero */

loc_0026B0DD: ;
    edi = 5;

loc_0026B0E2: ;
    PUSH32(esp, 0x0026B0E7u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0026B0E7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026B11B; /* jl: less (signed <) */

loc_0026B0EE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026B11B; /* jge: greater or equal (signed >=) */

loc_0026B0F3: ;
    eax = MEM32(esi + edx * 4 + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B11B; /* je: equal / zero */

loc_0026B0FE: ;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0026B108u); RECOMP_ABI_CALL(0x0002BAA9u, sub_0002BAA9); /* call 0x0002BAA9 */

loc_0026B108: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0026B111u); RECOMP_ABI_CALL(0x00026289u, sub_00026289); /* call 0x00026289 */

loc_0026B111: ;
    ecx = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026B11Bu); RECOMP_ABI_CALL(0x000149D5u, sub_000149D5); /* call 0x000149D5 */

loc_0026B11B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026B0E2; /* jne: not equal / not zero */

loc_0026B11F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0026B121: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026B180
 * Original: 0x0026B180 - 0x0026B212 (146 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026B180: ;
    _fb = (uint32_t)(0x1BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1BC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = MEM32(ebp + 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026B19Au); RECOMP_ABI_CALL(0x00026E87u, sub_00026E87); /* call 0x00026E87 */

loc_0026B19A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026B202; /* jle: less or equal (signed <=) */

loc_0026B1A0: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xE0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026B1A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026B1B6; /* jl: less (signed <) */

loc_0026B1AA: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026B1B6; /* jge: greater or equal (signed >=) */

loc_0026B1B3: ;
    edi = MEM32(ebp);

loc_0026B1B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B1D8; /* je: equal / zero */

loc_0026B1BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0026B1C6u); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_0026B1C6: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0026B1CFu); RECOMP_ABI_CALL(0x0001721Bu, sub_0001721B); /* call 0x0001721B */

loc_0026B1CF: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0026B1D8u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_0026B1D8: ;
    PUSH32(esp, esi);
    ecx = esp + 0x74;
    PUSH32(esp, 0x0026B1E2u); RECOMP_ABI_CALL(0x0002BAA9u, sub_0002BAA9); /* call 0x0002BAA9 */

loc_0026B1E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    PUSH32(esp, 0x0026B1F1u); RECOMP_ABI_CALL(0x0002304Du, sub_0002304D); /* call 0x0002304D */

loc_0026B1F1: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x0026B1FAu); RECOMP_ABI_CALL(0x000149D5u, sub_000149D5); /* call 0x000149D5 */

loc_0026B1FA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026B1A6; /* jl: less (signed <) */

loc_0026B202: ;
    PUSH32(esp, 0x0026B207u); RECOMP_ABI_CALL(0x00020A32u, sub_00020A32); /* call 0x00020A32 */

loc_0026B207: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1BC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026B240
 * Original: 0x0026B240 - 0x0026B2A2 (98 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B240: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0x7F6ED4);
    ecx = edi;
    PUSH32(esp, 0x0026B253u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_0026B253: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x7F6EC0);
    ecx = edi;
    PUSH32(esp, 0x0026B261u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_0026B261: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026B29E; /* jle: less or equal (signed <=) */

loc_0026B26D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026B275: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026B27F; /* jl: less (signed <) */

loc_0026B279: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026B27F; /* jge: greater or equal (signed >=) */

loc_0026B27D: ;
    esi = MEM32(edx);

loc_0026B27F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B290; /* je: equal / zero */

loc_0026B283: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026B275; /* jl: less (signed <) */

loc_0026B28B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0026B290: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F6E94);
    ecx = edi;
    PUSH32(esp, 0x0026B29Du); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_0026B29D: ;
    POP32(esp, esi);

loc_0026B29E: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026B2C0
 * Original: 0x0026B2C0 - 0x0026B348 (136 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B2C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x0026B2DCu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0026B2DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0026B2F1u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0026B2F1: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026B336; /* jne: not equal / not zero */

loc_0026B2FB: ;
    goto loc_0026B300;

    /* nop */

loc_0026B300: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0026B31Eu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0026B31E: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B300; /* je: equal / zero */

loc_0026B324: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0026B336: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026B370
 * Original: 0x0026B370 - 0x0026B3DA (106 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B370: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0026B38Du); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0026B38D: ;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B3CC; /* je: equal / zero */

loc_0026B393: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0026B3B8u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0026B3B8: ;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026B393; /* jne: not equal / not zero */

loc_0026B3BE: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0026B3CC: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026B400
 * Original: 0x0026B400 - 0x0026B5F7 (503 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B400: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B587; /* je: equal / zero */

loc_0026B40F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B41A: ;
    MEM32(eax + ecx * 4 + 4) = 0x43;
    edx = MEM32(eax);
    ecx = 1;
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B43B: ;
    MEM32(eax + edx * 4 + 4) = 0x44;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B457: ;
    MEM32(eax + edx * 4 + 4) = 0x45;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B473: ;
    MEM32(eax + edx * 4 + 4) = 0x46;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B48F: ;
    MEM32(eax + edx * 4 + 4) = 0x47;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B4AB: ;
    MEM32(eax + edx * 4 + 4) = 0x48;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B4C7: ;
    MEM32(eax + edx * 4 + 4) = 0x49;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B4E3: ;
    MEM32(eax + edx * 4 + 4) = 0x4A;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B4FF: ;
    MEM32(eax + edx * 4 + 4) = 0x50;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B517: ;
    MEM32(eax + edx * 4 + 4) = 0x4B;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B52F: ;
    MEM32(eax + edx * 4 + 4) = 0x4C;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B547: ;
    MEM32(eax + edx * 4 + 4) = 0x4D;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B55F: ;
    MEM32(eax + edx * 4 + 4) = 0x4E;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    MEM32(eax) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026B587; /* jge: greater or equal (signed >=) */

loc_0026B577: ;
    MEM32(eax + edx * 4 + 4) = 0x4F;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + 0x7C) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026B587: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B5F2; /* je: equal / zero */

loc_0026B590: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026B592: ;
    MEM32(esp + eax * 4 + 4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026B592; /* jl: less (signed <) */

loc_0026B59C: ;
    PUSH32(esp, 0x7FFED4);
    ecx = esi;
    PUSH32(esp, 0x0026B5A8u); RECOMP_ABI_CALL(0x0002D1B0u, sub_0002D1B0); /* call 0x0002D1B0 */

loc_0026B5A8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B5BF; /* je: equal / zero */

loc_0026B5AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026B5B5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026B5B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_0026B5BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    MEM32(esi + 4) = 0xE;
    PUSH32(esp, 0x0026B5CFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026B5CF: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026B5F2; /* jle: less or equal (signed <=) */

loc_0026B5DE: ;
    edi = edi;

loc_0026B5E0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + eax * 4 + 4);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026B5E0; /* jl: less (signed <) */

loc_0026B5F2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026B680
 * Original: 0x0026B680 - 0x0026B720 (160 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B680: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026B68Bu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026B68B: ;
    ecx = eax;
    PUSH32(esp, 0x0026B692u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026B692: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0026B69Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026B69C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0026B6A6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026B6A6: ;
    ecx = eax;
    PUSH32(esp, 0x0026B6ADu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026B6AD: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0026B6BBu); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_0026B6BB: ;
    eax = 1;
    MEM32(esi + 4) = eax;
    edx = 3;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x10) = ebx;
    ecx = 2;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, 0x0026B6F9u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026B6F9: ;
    ecx = eax;
    PUSH32(esp, 0x0026B700u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026B700: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B70D; /* je: equal / zero */

loc_0026B704: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026B70Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0026B70A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026B70D: ;
    PUSH32(esp, 0x0026B712u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026B712: ;
    ecx = eax;
    PUSH32(esp, 0x0026B719u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0026B719: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
