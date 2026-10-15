#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
/**
 * sub_00556922
 * Original: 0x00556922 - 0x00556A0C (234 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556922(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556922: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x20);
    edx = MEM32(edx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi);
    edi = 0x8B;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005569F0; /* jg: greater (signed >) */

loc_00556947: ;
    if (CMP_EQ(_fa, _fb)) goto loc_005569E9; /* je: equal / zero */

loc_0055694D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5A (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005569B1; /* jg: greater (signed >) */

loc_00556952: ;
    if (CMP_EQ(_fa, _fb)) goto loc_005569A4; /* je: equal / zero */

loc_00556954: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00556999; /* je: equal / zero */

loc_00556959: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00556990; /* je: equal / zero */

loc_0055695C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00556987; /* je: equal / zero */

loc_0055695F: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055697E; /* je: equal / zero */

loc_00556962: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00556975; /* je: equal / zero */

loc_00556965: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00556A01; /* jne: not equal / not zero */

loc_0055696C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_005569A0;

loc_00556975: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_005569A0;

loc_0055697E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    goto loc_005569A0;

loc_00556987: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    goto loc_005569A0;

loc_00556990: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    goto loc_005569A0;

loc_00556999: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */

loc_005569A0: ;
    MEM32(esi) = edx;
    goto loc_005569FF;

loc_005569A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005569E5; /* je: equal / zero */

loc_005569A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005569E5; /* je: equal / zero */

loc_005569AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005569FD;

loc_005569B1: ;
    _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x5B;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005569DF; /* je: equal / zero */

loc_005569B6: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005569DB; /* je: equal / zero */

loc_005569BB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005569D7; /* je: equal / zero */

loc_005569BE: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005569CF; /* je: equal / zero */

loc_005569C1: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00556A01; /* jne: not equal / not zero */

loc_005569C4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005569CBu); RECOMP_ABI_CALL(0x0054EFD8u, sub_0054EFD8); /* call 0x0054EFD8 */

loc_005569CB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_005569FD;

loc_005569CF: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_005569FD;

loc_005569D7: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_005569FD;

loc_005569DB: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005569FD;

loc_005569DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005569AC; /* jne: not equal / not zero */

loc_005569E3: ;
    goto loc_005569A8;

loc_005569E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005569FD;

loc_005569E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) eax = ecx; /* cmovl */
    goto loc_005569FD;

loc_005569F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556A01; /* jne: not equal / not zero */

loc_005569F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = ecx; /* cmovg */

loc_005569FD: ;
    MEM32(esi) = eax;

loc_005569FF: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00556A01: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax + 0x20) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00180990
 * Original: 0x00180990 - 0x00180FAF (1567 bytes, 480 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180990: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10C));
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    SET_LO16(ecx, MEM16(ebp + 0x44));
    eax = ZX16(LO16(ecx));
    _fb = (uint32_t)(0xFFFFFFEDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFEDu)) >> 32) & 1);
    eax = eax + 0xFFFFFFEDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00180FA7; /* ja: above (unsigned >) */

loc_001809B1: ;
    eax = ZX8(MEM8(eax + 0x180FF4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x180FB0); /* switch: 17 entries, 17 targets */
    if (_jt == 0x001809C2u) goto loc_001809C2;
    if (_jt == 0x001809E5u) goto loc_001809E5;
    if (_jt == 0x001809F5u) goto loc_001809F5;
    if (_jt == 0x00180A33u) goto loc_00180A33;
    if (_jt == 0x00180A53u) goto loc_00180A53;
    if (_jt == 0x00180A7Fu) goto loc_00180A7F;
    if (_jt == 0x00180ABFu) goto loc_00180ABF;
    if (_jt == 0x00180B11u) goto loc_00180B11;
    if (_jt == 0x00180B7Fu) goto loc_00180B7F;
    if (_jt == 0x00180BC4u) goto loc_00180BC4;
    if (_jt == 0x00180BF0u) goto loc_00180BF0;
    if (_jt == 0x00180C81u) goto loc_00180C81;
    if (_jt == 0x00180D32u) goto loc_00180D32;
    if (_jt == 0x00180DFEu) goto loc_00180DFE;
    if (_jt == 0x00180E89u) goto loc_00180E89;
    if (_jt == 0x00180EC0u) goto loc_00180EC0;
    if (_jt == 0x00180FA4u) goto loc_00180FA4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001809C2: ;
    PUSH32(esp, 0x001809C7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001809C7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001809CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001809CBu); } /* indirect call */
    }

loc_001809CE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001809D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001809D2u); } /* indirect call */
    }

loc_001809D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_001809DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_001809E3: ;
    goto loc_00180A53;

loc_001809E5: ;
    PUSH32(esp, 0x001809EAu); RECOMP_ABI_CALL(0x0001FCDBu, sub_0001FCDB); /* call 0x0001FCDB */

loc_001809EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001809F5: ;
    SET_LO8(edx, MEM8(0x8F0870));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00180A53; /* jne: not equal / not zero */

loc_00180A04: ;
    ecx = ebp;
    PUSH32(esp, 0x00180A0Bu); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00180A0B: ;
    ecx = MEM32(eax);
    esi = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x00180A19u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180A19: ;
    ecx = eax;
    PUSH32(esp, 0x00180A20u); RECOMP_ABI_CALL(0x00023741u, sub_00023741); /* call 0x00023741 */

loc_00180A20: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00180A28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180A25u); } /* indirect call */
    }

loc_00180A28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00180A33: ;
    PUSH32(esp, 0x00180A38u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180A38: ;
    ecx = eax;
    PUSH32(esp, 0x00180A3Fu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00180A3F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00180A4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180A45u); } /* indirect call */
    }

loc_00180A4B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180A53: ;
    ecx = ZX16(MEM16(ebp + 0x44));
    eax = MEM32(0x8F0A88);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x8F0878) = ecx;
    _fb = (uint32_t)(0xFFFFFFC5u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFC5u)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFC5u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00180F94; /* ja: above (unsigned >) */

loc_00180A71: ;
    ecx = ZX8(MEM8(ecx + 0x181048));
    { uint32_t _jt = MEM32(ecx * 4 + 0x181034); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00180ED6u) goto loc_00180ED6;
    if (_jt == 0x00180F04u) goto loc_00180F04;
    if (_jt == 0x00180F27u) goto loc_00180F27;
    if (_jt == 0x00180F41u) goto loc_00180F41;
    if (_jt == 0x00180F94u) goto loc_00180F94;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00180A7F: ;
    PUSH32(esp, 0x00180A84u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180A84: ;
    ecx = eax;
    PUSH32(esp, 0x00180A8Bu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00180A8B: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x00180A99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180A93u); } /* indirect call */
    }

loc_00180A99: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00180AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180AA1u); } /* indirect call */
    }

loc_00180AA7: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180AB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180ABD: ;
    goto loc_00180A53;

loc_00180ABF: ;
    ecx = ebp;
    PUSH32(esp, 0x00180AC6u); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00180AC6: ;
    edi = MEM32(eax);
    ebx = MEM32(eax + 4);
    PUSH32(esp, 0x00180AD0u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180AD0: ;
    ecx = eax;
    PUSH32(esp, 0x00180AD7u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00180AD7: ;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x148); PUSH32(esp, 0x00180AE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180ADEu); } /* indirect call */
    }

loc_00180AE4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00180AFB; /* jne: not equal / not zero */

loc_00180AE8: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x00180AF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180AEDu); } /* indirect call */
    }

loc_00180AF3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180AFB: ;
    ecx = MEM32(0x8F0A9C);
    PUSH32(esp, 0x00180B06u); RECOMP_ABI_CALL(0x000359F0u, sub_000359F0); /* call 0x000359F0 */

loc_00180B06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00180B11: ;
    ecx = MEM32(0x8F0A9C);
    PUSH32(esp, 0x00180B1Cu); RECOMP_ABI_CALL(0x000359F0u, sub_000359F0); /* call 0x000359F0 */

loc_00180B1C: ;
    PUSH32(esp, 0x00180B21u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180B21: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180B28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180B25u); } /* indirect call */
    }

loc_00180B28: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180B2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180B2Cu); } /* indirect call */
    }

loc_00180B2F: ;
    ecx = ebp;
    esi = eax;
    PUSH32(esp, 0x00180B38u); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00180B38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180B51: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180B5A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180B63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180B6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180B75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_00180A4B;

loc_00180B7F: ;
    PUSH32(esp, 0x00180B84u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180B84: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180B8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180B88u); } /* indirect call */
    }

loc_00180B8B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180B8Fu); } /* indirect call */
    }

loc_00180B92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_00180B9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_00180BA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_00180BAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_00180BB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180BBF: ;
    goto loc_00180A53;

loc_00180BC4: ;
    PUSH32(esp, 0x00180BC9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180BC9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180BD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180BCDu); } /* indirect call */
    }

loc_00180BD0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180BD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180BD4u); } /* indirect call */
    }

loc_00180BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180FA4; /* je: equal / zero */

loc_00180BE0: ;
    ecx = MEM32(0x8F0A9C);
    PUSH32(esp, 0x00180BEBu); RECOMP_ABI_CALL(0x000359F0u, sub_000359F0); /* call 0x000359F0 */

loc_00180BEB: ;
    goto loc_00180A53;

loc_00180BF0: ;
    PUSH32(esp, 0x00180BF5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180BF5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180BFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180BF9u); } /* indirect call */
    }

loc_00180BFC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180C03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C00u); } /* indirect call */
    }

loc_00180C03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_00180C0C: ;
    PUSH32(esp, 0x00180C11u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180C11: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180C18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C15u); } /* indirect call */
    }

loc_00180C18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180C1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C1Cu); } /* indirect call */
    }

loc_00180C1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_00180C28: ;
    PUSH32(esp, 0x00180C2Du); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180C2D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180C34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C31u); } /* indirect call */
    }

loc_00180C34: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180C3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C38u); } /* indirect call */
    }

loc_00180C3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_00180C44: ;
    PUSH32(esp, 0x00180C49u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180C49: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180C50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C4Du); } /* indirect call */
    }

loc_00180C50: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180C57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C54u); } /* indirect call */
    }

loc_00180C57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180A53; /* je: equal / zero */

loc_00180C60: ;
    PUSH32(esp, 0x00180C65u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180C65: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180C6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C69u); } /* indirect call */
    }

loc_00180C6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C70u); } /* indirect call */
    }

loc_00180C73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180C7C: ;
    goto loc_00180A53;

loc_00180C81: ;
    PUSH32(esp, 0x00180C86u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180C86: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C8Au); } /* indirect call */
    }

loc_00180C8D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180C94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180C91u); } /* indirect call */
    }

loc_00180C94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180CFD; /* je: equal / zero */

loc_00180C99: ;
    PUSH32(esp, 0x00180C9Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180C9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180CA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180CA2u); } /* indirect call */
    }

loc_00180CA5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180CACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180CA9u); } /* indirect call */
    }

loc_00180CAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180CFD; /* je: equal / zero */

loc_00180CB1: ;
    PUSH32(esp, 0x00180CB6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180CB6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180CBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180CBAu); } /* indirect call */
    }

loc_00180CBD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180CC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180CC1u); } /* indirect call */
    }

loc_00180CC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180CFD; /* je: equal / zero */

loc_00180CC9: ;
    PUSH32(esp, 0x00180CCEu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180CCE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180CD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180CD2u); } /* indirect call */
    }

loc_00180CD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180CDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180CD9u); } /* indirect call */
    }

loc_00180CDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180CFD; /* je: equal / zero */

loc_00180CE1: ;
    PUSH32(esp, 0x00180CE6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180CE6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180CEAu); } /* indirect call */
    }

loc_00180CED: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180CF1u); } /* indirect call */
    }

loc_00180CF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180CFD: ;
    SET_LO8(edx, MEM8(0x8F0870));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(0x8F0A88);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00180A4B; /* jle: less or equal (signed <=) */

loc_00180D16: ;
    ecx = 0x8F0878;
    goto loc_00180D20;

    /* nop */

loc_00180D20: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x47 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180D27; /* jne: not equal / not zero */

loc_00180D25: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00180D27: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00180D20; /* jne: not equal / not zero */

loc_00180D2D: ;
    goto loc_00180A4B;

loc_00180D32: ;
    PUSH32(esp, 0x00180D37u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180D37: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180D3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D3Bu); } /* indirect call */
    }

loc_00180D3E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D42u); } /* indirect call */
    }

loc_00180D45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180DAE; /* je: equal / zero */

loc_00180D4A: ;
    PUSH32(esp, 0x00180D4Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180D4F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180D56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D53u); } /* indirect call */
    }

loc_00180D56: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180D5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D5Au); } /* indirect call */
    }

loc_00180D5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180DAE; /* je: equal / zero */

loc_00180D62: ;
    PUSH32(esp, 0x00180D67u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180D67: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180D6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D6Bu); } /* indirect call */
    }

loc_00180D6E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180D75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D72u); } /* indirect call */
    }

loc_00180D75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180DAE; /* je: equal / zero */

loc_00180D7A: ;
    PUSH32(esp, 0x00180D7Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180D7F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180D86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D83u); } /* indirect call */
    }

loc_00180D86: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D8Au); } /* indirect call */
    }

loc_00180D8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180DAE; /* je: equal / zero */

loc_00180D92: ;
    PUSH32(esp, 0x00180D97u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180D97: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180D9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180D9Bu); } /* indirect call */
    }

loc_00180D9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180DA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180DA2u); } /* indirect call */
    }

loc_00180DA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180DAE: ;
    SET_LO8(eax, MEM8(0x8F0870));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180DBB: ;
    ecx = ebp;
    PUSH32(esp, 0x00180DC2u); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00180DC2: ;
    edi = MEM32(eax);
    PUSH32(esp, 0x00180DC9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180DC9: ;
    ecx = eax;
    PUSH32(esp, 0x00180DD0u); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_00180DD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00180DE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180DDDu); } /* indirect call */
    }

loc_00180DE0: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00180DEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180DEBu); } /* indirect call */
    }

loc_00180DEE: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 0x55 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00180FA4; /* jle: less or equal (signed <=) */

loc_00180DF9: ;
    goto loc_00180A53;

loc_00180DFE: ;
    PUSH32(esp, 0x00180E03u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180E03: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180E0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E07u); } /* indirect call */
    }

loc_00180E0A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180E11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E0Eu); } /* indirect call */
    }

loc_00180E11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180E7A; /* je: equal / zero */

loc_00180E16: ;
    PUSH32(esp, 0x00180E1Bu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180E1B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180E22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E1Fu); } /* indirect call */
    }

loc_00180E22: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180E29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E26u); } /* indirect call */
    }

loc_00180E29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180E7A; /* je: equal / zero */

loc_00180E2E: ;
    PUSH32(esp, 0x00180E33u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180E33: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180E3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E37u); } /* indirect call */
    }

loc_00180E3A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180E41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E3Eu); } /* indirect call */
    }

loc_00180E41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180E7A; /* je: equal / zero */

loc_00180E46: ;
    PUSH32(esp, 0x00180E4Bu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180E4B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180E52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E4Fu); } /* indirect call */
    }

loc_00180E52: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180E59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E56u); } /* indirect call */
    }

loc_00180E59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180E7A; /* je: equal / zero */

loc_00180E5E: ;
    PUSH32(esp, 0x00180E63u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180E63: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180E6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E67u); } /* indirect call */
    }

loc_00180E6A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180E71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E6Eu); } /* indirect call */
    }

loc_00180E71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180E7A: ;
    SET_LO8(eax, MEM8(0x8F0870));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_00180A4B;

loc_00180E89: ;
    PUSH32(esp, 0x00180E8Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00180E8E: ;
    ecx = eax;
    PUSH32(esp, 0x00180E95u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00180E95: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x134); PUSH32(esp, 0x00180EA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180E9Bu); } /* indirect call */
    }

loc_00180EA1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180EA9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x130); PUSH32(esp, 0x00180EB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00180EADu); } /* indirect call */
    }

loc_00180EB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00180FA4; /* jne: not equal / not zero */

loc_00180EBB: ;
    goto loc_00180A53;

loc_00180EC0: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x38 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180A53; /* jne: not equal / not zero */

loc_00180ECA: ;
    MEM8(0x8F0AA0) = 1;
    goto loc_00180A53;

loc_00180ED6: ;
    ecx = ebp;
    PUSH32(esp, 0x00180EDDu); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00180EDD: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    ebx = MEM32(eax + 8);
    eax = MEM32(0x8F0A88);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(eax + 0x8F087C) = LO8(ecx);
    MEM8(eax + 0x8F087D) = LO8(edx);
    MEM8(eax + 0x8F087E) = LO8(ebx);
    goto loc_00180F9E;

loc_00180F04: ;
    ecx = ebp;
    PUSH32(esp, 0x00180F0Bu); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00180F0B: ;
    ecx = MEM32(0x8F0A88);
    edx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x8F087C) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x8F0880) = eax;
    goto loc_00180F9E;

loc_00180F27: ;
    ecx = ebp;
    PUSH32(esp, 0x00180F2Eu); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00180F2E: ;
    ecx = MEM32(0x8F0A88);
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(ecx + 0x8F087C) = LO8(eax);
    goto loc_00180F9E;

loc_00180F41: ;
    ecx = ebp;
    PUSH32(esp, 0x00180F48u); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00180F48: ;
    SET_LO16(edx, MEM16(eax));
    ecx = MEM32(0x8F0A88);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM16(ecx + 0x8F087C) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(ecx + 0x8F087E) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(ecx + 0x8F0880) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 6));
    MEM16(ecx + 0x8F0882) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 8));
    MEM16(ecx + 0x8F0884) = LO16(edx);
    SET_LO16(eax, MEM16(eax + 0xA));
    MEM16(ecx + 0x8F0886) = LO16(eax);
    goto loc_00180F9E;

loc_00180F94: ;
    MEM32(eax + 0x8F087C) = 0;

loc_00180F9E: ;
    MEM32(0x8F0A88) = MEM32(0x8F0A88) + 1;
    _fa = (uint32_t)(MEM32(0x8F0A88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00180FA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00180FA7: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00597EFA
 * Original: 0x00597EFA - 0x00597F0C (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597EFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597EFA: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00597F05; /* jne: not equal / not zero */

loc_00597F02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00597F05: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x10) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00373D00
 * Original: 0x00373D00 - 0x00373D3C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x902534);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00373D0Fu); RECOMP_ABI_CALL(0x00021509u, sub_00021509); /* call 0x00021509 */

loc_00373D0F: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00373D1Bu); RECOMP_ABI_CALL(0x0002938Au, sub_0002938A); /* call 0x0002938A */

loc_00373D1B: ;
    PUSH32(esp, 0x00373D20u); RECOMP_ABI_CALL(0x00031B1Bu, sub_00031B1B); /* call 0x00031B1B */

loc_00373D20: ;
    ecx = eax;
    PUSH32(esp, 0x00373D27u); RECOMP_ABI_CALL(0x0001A1E1u, sub_0001A1E1); /* call 0x0001A1E1 */

loc_00373D27: ;
    ecx = MEM32(esi + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373D37; /* je: equal / zero */

loc_00373D31: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00373D37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373D34u); } /* indirect call */
    }

loc_00373D37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EFF45
 * Original: 0x004EFF45 - 0x004EFF59 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFF45(void)
{

loc_004EFF45: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax);
    PUSH32(esp, 0x004EFF58u); RECOMP_ABI_CALL(0x004EFE37u, sub_004EFE37); /* call 0x004EFE37 */

loc_004EFF58: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BD70
 * Original: 0x0020BD70 - 0x0020BD8E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BD70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020BD78u); RECOMP_ABI_CALL(0x00029D67u, sub_00029D67); /* call 0x00029D67 */

loc_0020BD78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020BD88; /* je: equal / zero */

loc_0020BD7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BD85u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020BD85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020BD88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E7F0
 * Original: 0x0021E7F0 - 0x0021E80E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0021E7F8u); RECOMP_ABI_CALL(0x0002DF98u, sub_0002DF98); /* call 0x0002DF98 */

loc_0021E7F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E808; /* je: equal / zero */

loc_0021E7FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021E805u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021E805: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021E808: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00222980
 * Original: 0x00222980 - 0x0022299E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222980: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00222988u); RECOMP_ABI_CALL(0x00016A0Fu, sub_00016A0F); /* call 0x00016A0F */

loc_00222988: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00222998; /* je: equal / zero */

loc_0022298F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00222995u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00222995: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00222998: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00381DB0
 * Original: 0x00381DB0 - 0x00381DCE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00381DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00381DB8u); RECOMP_ABI_CALL(0x00022E9Au, sub_00022E9A); /* call 0x00022E9A */

loc_00381DB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00381DC8; /* je: equal / zero */

loc_00381DBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00381DC5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00381DC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00381DC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027EF90
 * Original: 0x0027EF90 - 0x0027EFB2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EF90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80EFA8;
    if (TEST_Z(_fa, _fb)) goto loc_0027EFAC; /* je: equal / zero */

loc_0027EFA0: ;
    ecx = MEM32(0x8FA540);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0027EFACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027EFA9u); } /* indirect call */
    }

loc_0027EFAC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207A30
 * Original: 0x00207A30 - 0x00207A31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A30(void)
{

loc_00207A30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AE30
 * Original: 0x0022AE30 - 0x0022AE31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE30(void)
{

loc_0022AE30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCB30
 * Original: 0x003DCB30 - 0x003DCB31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCB30(void)
{

loc_003DCB30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A270
 * Original: 0x0022A270 - 0x0022A443 (467 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A270: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022A440; /* ja: above (unsigned >) */

loc_0022A27D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x22A444); /* switch: 15 entries, 15 targets */
    if (_jt == 0x0022A284u) goto loc_0022A284;
    if (_jt == 0x0022A29Eu) goto loc_0022A29E;
    if (_jt == 0x0022A2BDu) goto loc_0022A2BD;
    if (_jt == 0x0022A2DBu) goto loc_0022A2DB;
    if (_jt == 0x0022A2F9u) goto loc_0022A2F9;
    if (_jt == 0x0022A317u) goto loc_0022A317;
    if (_jt == 0x0022A335u) goto loc_0022A335;
    if (_jt == 0x0022A353u) goto loc_0022A353;
    if (_jt == 0x0022A371u) goto loc_0022A371;
    if (_jt == 0x0022A38Fu) goto loc_0022A38F;
    if (_jt == 0x0022A3ADu) goto loc_0022A3AD;
    if (_jt == 0x0022A3CBu) goto loc_0022A3CB;
    if (_jt == 0x0022A3E9u) goto loc_0022A3E9;
    if (_jt == 0x0022A407u) goto loc_0022A407;
    if (_jt == 0x0022A425u) goto loc_0022A425;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022A284: ;
    eax = MEM32(0x8F6A68);
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A29E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    ecx = edx * 4;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A2BD: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x1C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A2DB: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x3000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A2F9: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x600;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A317: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A335: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x2000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A353: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x10000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A371: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xC000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A38F: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xC0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A3AD: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x700000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A3CB: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A3E9: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xC000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A407: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x10000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A425: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1D) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x60000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;

loc_0022A440: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022A840
 * Original: 0x0022A840 - 0x0022AC70 (1072 bytes, 289 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A840: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022AC6D; /* ja: above (unsigned >) */

loc_0022A84D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x22AC70); /* switch: 36 entries, 36 targets */
    if (_jt == 0x0022A854u) goto loc_0022A854;
    if (_jt == 0x0022A86Eu) goto loc_0022A86E;
    if (_jt == 0x0022A88Du) goto loc_0022A88D;
    if (_jt == 0x0022A8ABu) goto loc_0022A8AB;
    if (_jt == 0x0022A8C9u) goto loc_0022A8C9;
    if (_jt == 0x0022A8E7u) goto loc_0022A8E7;
    if (_jt == 0x0022A905u) goto loc_0022A905;
    if (_jt == 0x0022A923u) goto loc_0022A923;
    if (_jt == 0x0022A941u) goto loc_0022A941;
    if (_jt == 0x0022A95Bu) goto loc_0022A95B;
    if (_jt == 0x0022A979u) goto loc_0022A979;
    if (_jt == 0x0022A997u) goto loc_0022A997;
    if (_jt == 0x0022A9B5u) goto loc_0022A9B5;
    if (_jt == 0x0022A9D3u) goto loc_0022A9D3;
    if (_jt == 0x0022A9F1u) goto loc_0022A9F1;
    if (_jt == 0x0022AA0Fu) goto loc_0022AA0F;
    if (_jt == 0x0022AA2Au) goto loc_0022AA2A;
    if (_jt == 0x0022AA44u) goto loc_0022AA44;
    if (_jt == 0x0022AA62u) goto loc_0022AA62;
    if (_jt == 0x0022AA80u) goto loc_0022AA80;
    if (_jt == 0x0022AA9Eu) goto loc_0022AA9E;
    if (_jt == 0x0022AABCu) goto loc_0022AABC;
    if (_jt == 0x0022AADAu) goto loc_0022AADA;
    if (_jt == 0x0022AAF8u) goto loc_0022AAF8;
    if (_jt == 0x0022AB13u) goto loc_0022AB13;
    if (_jt == 0x0022AB2Du) goto loc_0022AB2D;
    if (_jt == 0x0022AB4Bu) goto loc_0022AB4B;
    if (_jt == 0x0022AB69u) goto loc_0022AB69;
    if (_jt == 0x0022AB87u) goto loc_0022AB87;
    if (_jt == 0x0022ABA5u) goto loc_0022ABA5;
    if (_jt == 0x0022ABC3u) goto loc_0022ABC3;
    if (_jt == 0x0022ABE1u) goto loc_0022ABE1;
    if (_jt == 0x0022ABFCu) goto loc_0022ABFC;
    if (_jt == 0x0022AC16u) goto loc_0022AC16;
    if (_jt == 0x0022AC34u) goto loc_0022AC34;
    if (_jt == 0x0022AC52u) goto loc_0022AC52;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022A854: ;
    eax = MEM32(0x8F6A08);
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A08) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A86E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A08);
    ecx = edx * 8;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A08) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A88D: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x780;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A08) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A8AB: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A08) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A8C9: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x78000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A08) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A8E7: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x780000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A08) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A905: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x7800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A08) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A923: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x78000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A08) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A941: ;
    eax = MEM32(0x8F6A0C);
    ecx = MEM32(esp + 8);
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A0C) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A95B: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A0C) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A979: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A0C) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A997: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A0C) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A9B5: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A0C) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A9D3: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A0C) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A9F1: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A0C) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AA0F: ;
    eax = MEM32(0x8F6A0C);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8F6A0C) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AA2A: ;
    eax = MEM32(0x8F6A10);
    ecx = MEM32(esp + 8);
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A10) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AA44: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A10) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AA62: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A10) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AA80: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A10) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AA9E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A10) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AABC: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A10) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AADA: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A10) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AAF8: ;
    eax = MEM32(0x8F6A10);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8F6A10) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AB13: ;
    eax = MEM32(0x8F6A14);
    ecx = MEM32(esp + 8);
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A14) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AB2D: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A14) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AB4B: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A14) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AB69: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A14) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AB87: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A14) = eax;
    esp += 12; return; /* ret 8 */

loc_0022ABA5: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A14) = eax;
    esp += 12; return; /* ret 8 */

loc_0022ABC3: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A14) = eax;
    esp += 12; return; /* ret 8 */

loc_0022ABE1: ;
    eax = MEM32(0x8F6A14);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8F6A14) = eax;
    esp += 12; return; /* ret 8 */

loc_0022ABFC: ;
    eax = MEM32(0x8F6A18);
    ecx = MEM32(esp + 8);
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A18) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AC16: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A18);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A18) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AC34: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A18) = eax;
    esp += 12; return; /* ret 8 */

loc_0022AC52: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A18);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A18) = eax;

loc_0022AC6D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00230070
 * Original: 0x00230070 - 0x00230288 (536 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230070: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002318E0
 * Original: 0x002318E0 - 0x00231EBD (1501 bytes, 395 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002318E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002318E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00231EBA; /* ja: above (unsigned >) */

loc_002318ED: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x231EC0); /* switch: 29 entries, 29 targets */
    if (_jt == 0x002318F4u) goto loc_002318F4;
    if (_jt == 0x0023192Fu) goto loc_0023192F;
    if (_jt == 0x0023196Au) goto loc_0023196A;
    if (_jt == 0x002319A5u) goto loc_002319A5;
    if (_jt == 0x002319E1u) goto loc_002319E1;
    if (_jt == 0x00231A19u) goto loc_00231A19;
    if (_jt == 0x00231A3Fu) goto loc_00231A3F;
    if (_jt == 0x00231A65u) goto loc_00231A65;
    if (_jt == 0x00231A8Bu) goto loc_00231A8B;
    if (_jt == 0x00231AB1u) goto loc_00231AB1;
    if (_jt == 0x00231AD7u) goto loc_00231AD7;
    if (_jt == 0x00231B0Fu) goto loc_00231B0F;
    if (_jt == 0x00231B4Bu) goto loc_00231B4B;
    if (_jt == 0x00231B83u) goto loc_00231B83;
    if (_jt == 0x00231BA9u) goto loc_00231BA9;
    if (_jt == 0x00231BCFu) goto loc_00231BCF;
    if (_jt == 0x00231BF5u) goto loc_00231BF5;
    if (_jt == 0x00231C30u) goto loc_00231C30;
    if (_jt == 0x00231C6Cu) goto loc_00231C6C;
    if (_jt == 0x00231CA4u) goto loc_00231CA4;
    if (_jt == 0x00231CCAu) goto loc_00231CCA;
    if (_jt == 0x00231CF0u) goto loc_00231CF0;
    if (_jt == 0x00231D2Bu) goto loc_00231D2B;
    if (_jt == 0x00231D66u) goto loc_00231D66;
    if (_jt == 0x00231DA1u) goto loc_00231DA1;
    if (_jt == 0x00231DD9u) goto loc_00231DD9;
    if (_jt == 0x00231E12u) goto loc_00231E12;
    if (_jt == 0x00231E4Bu) goto loc_00231E4B;
    if (_jt == 0x00231E84u) goto loc_00231E84;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002318F4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231901u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231901: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C10);
    eax = eax + ecx + 0x8F5C10;
    edx = edx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_0023192F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023193Cu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_0023193C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C10;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0xFFC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_0023196A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231977u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231977: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C10;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x3F00000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_002319A5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002319B2u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002319B2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C10);
    eax = eax + ecx + 0x8F5C10;
    ecx = MEM32(esp + 0x10);
    edx = edx & 0x3FFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    esp += 20; return; /* ret 16 */

loc_002319E1: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002319EEu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002319EE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C14);
    eax = eax + ecx + 0x8F5C14;
    edx = edx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231A19: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231A26u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231A26: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C14;
    goto loc_00231DFA;

loc_00231A3F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231A4Cu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231A4C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C14;
    goto loc_00231E33;

loc_00231A65: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231A72u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231A72: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C14;
    goto loc_00231D11;

loc_00231A8B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231A98u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231A98: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C14;
    goto loc_00231D4C;

loc_00231AB1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231ABEu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231ABE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C20;
    goto loc_00231D4C;

loc_00231AD7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231AE4u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231AE4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C24);
    eax = eax + ecx + 0x8F5C24;
    edx = edx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231B0F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231B1Cu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231B1C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C14);
    eax = eax + ecx + 0x8F5C14;
    ecx = MEM32(esp + 0x10);
    edx = edx & 0x3FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1E) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    esp += 20; return; /* ret 16 */

loc_00231B4B: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231B58u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231B58: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C18);
    eax = eax + ecx + 0x8F5C18;
    edx = edx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231B83: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231B90u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231B90: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C18;
    goto loc_00231DFA;

loc_00231BA9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231BB6u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231BB6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C18;
    goto loc_00231E33;

loc_00231BCF: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231BDCu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231BDC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C18;
    goto loc_00231D11;

loc_00231BF5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231C02u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231C02: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C18;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0xF000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231C30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231C3Du); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231C3D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C18);
    eax = eax + ecx + 0x8F5C18;
    ecx = MEM32(esp + 0x10);
    edx = edx & 0xFFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    esp += 20; return; /* ret 16 */

loc_00231C6C: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231C79u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231C79: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C1C);
    eax = eax + ecx + 0x8F5C1C;
    edx = edx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231CA4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231CB1u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231CB1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C1C;
    goto loc_00231DFA;

loc_00231CCA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231CD7u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231CD7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C1C;
    goto loc_00231E33;

loc_00231CF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231CFDu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231CFD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C1C;

loc_00231D11: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0xFC0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231D2B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231D38u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231D38: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C1C;

loc_00231D4C: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x3F000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231D66: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231D73u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231D73: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C1C;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1E) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x40000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231DA1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231DAEu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231DAE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    edx = MEM32(eax + ecx + 0x8F5C20);
    eax = eax + ecx + 0x8F5C20;
    edx = edx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231DD9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231DE6u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231DE6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C20;

loc_00231DFA: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xFC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231E12: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231E1Fu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231E1F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C20;

loc_00231E33: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x3F000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231E4B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231E58u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231E58: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C20;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x3C0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

loc_00231E84: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231E91u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231E91: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C20;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x16) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xC00000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;

loc_00231EBA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0042AFC0
 * Original: 0x0042AFC0 - 0x0042B015 (85 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042AFC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042B009; /* ja: above (unsigned >) */

loc_0042AFCC: ;
    edx = ZX8(MEM8(edx + 0x42B034));
    { uint32_t _jt = MEM32(edx * 4 + 0x42B018); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042AFDAu) goto loc_0042AFDA;
    if (_jt == 0x0042AFE3u) goto loc_0042AFE3;
    if (_jt == 0x0042AFEEu) goto loc_0042AFEE;
    if (_jt == 0x0042AFF7u) goto loc_0042AFF7;
    if (_jt == 0x0042B000u) goto loc_0042B000;
    if (_jt == 0x0042B009u) goto loc_0042B009;
    if (_jt == 0x0042B012u) goto loc_0042B012;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042AFDA: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00013B75u); return; /* original tail jmp */

loc_0042AFE3: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00021171u); return; /* original tail jmp */

loc_0042AFEE: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001287Eu); return; /* original tail jmp */

loc_0042AFF7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00033D08u); return; /* original tail jmp */

loc_0042B000: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00033385u); return; /* original tail jmp */

loc_0042B009: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00029263u); return; /* original tail jmp */

loc_0042B012: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0041FB30
 * Original: 0x0041FB30 - 0x0041FB6C (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041FB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041FB30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0041FB69; /* ja: above (unsigned >) */

loc_0041FB3E: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x41FB6C); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0041FB45u) goto loc_0041FB45;
    if (_jt == 0x0041FB4Eu) goto loc_0041FB4E;
    if (_jt == 0x0041FB57u) goto loc_0041FB57;
    if (_jt == 0x0041FB60u) goto loc_0041FB60;
    if (_jt == 0x0041FB69u) goto loc_0041FB69;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0041FB45: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001E813u); return; /* original tail jmp */

loc_0041FB4E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00020681u); return; /* original tail jmp */

loc_0041FB57: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0002CF85u); return; /* original tail jmp */

loc_0041FB60: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00027D55u); return; /* original tail jmp */

loc_0041FB69: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004264B0
 * Original: 0x004264B0 - 0x00426515 (101 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004264B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004264B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00426509; /* ja: above (unsigned >) */

loc_004264BC: ;
    edx = ZX8(MEM8(edx + 0x42653C));
    { uint32_t _jt = MEM32(edx * 4 + 0x426518); /* switch: 9 entries, 9 targets */
    if (_jt == 0x004264CAu) goto loc_004264CA;
    if (_jt == 0x004264D3u) goto loc_004264D3;
    if (_jt == 0x004264DCu) goto loc_004264DC;
    if (_jt == 0x004264E5u) goto loc_004264E5;
    if (_jt == 0x004264EEu) goto loc_004264EE;
    if (_jt == 0x004264F7u) goto loc_004264F7;
    if (_jt == 0x00426500u) goto loc_00426500;
    if (_jt == 0x00426509u) goto loc_00426509;
    if (_jt == 0x00426512u) goto loc_00426512;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004264CA: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000303E2u); return; /* original tail jmp */

loc_004264D3: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00032534u); return; /* original tail jmp */

loc_004264DC: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0002F16Du); return; /* original tail jmp */

loc_004264E5: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00024AD8u); return; /* original tail jmp */

loc_004264EE: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001464Cu); return; /* original tail jmp */

loc_004264F7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00031F99u); return; /* original tail jmp */

loc_00426500: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00026810u); return; /* original tail jmp */

loc_00426509: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00016294u); return; /* original tail jmp */

loc_00426512: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042AEF0
 * Original: 0x0042AEF0 - 0x0042AF55 (101 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042AEF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042AF49; /* ja: above (unsigned >) */

loc_0042AEFC: ;
    edx = ZX8(MEM8(edx + 0x42AF7C));
    { uint32_t _jt = MEM32(edx * 4 + 0x42AF58); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0042AF0Au) goto loc_0042AF0A;
    if (_jt == 0x0042AF13u) goto loc_0042AF13;
    if (_jt == 0x0042AF1Cu) goto loc_0042AF1C;
    if (_jt == 0x0042AF25u) goto loc_0042AF25;
    if (_jt == 0x0042AF2Eu) goto loc_0042AF2E;
    if (_jt == 0x0042AF37u) goto loc_0042AF37;
    if (_jt == 0x0042AF40u) goto loc_0042AF40;
    if (_jt == 0x0042AF49u) goto loc_0042AF49;
    if (_jt == 0x0042AF52u) goto loc_0042AF52;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042AF0A: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00013049u); return; /* original tail jmp */

loc_0042AF13: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00032A1Bu); return; /* original tail jmp */

loc_0042AF1C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001BF14u); return; /* original tail jmp */

loc_0042AF25: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000145EDu); return; /* original tail jmp */

loc_0042AF2E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00033A47u); return; /* original tail jmp */

loc_0042AF37: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000295F6u); return; /* original tail jmp */

loc_0042AF40: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001E7B9u); return; /* original tail jmp */

loc_0042AF49: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00029263u); return; /* original tail jmp */

loc_0042AF52: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F2A0
 * Original: 0x0042F2A0 - 0x0042F329 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F2A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042F326; /* ja: above (unsigned >) */

loc_0042F2AE: ;
    edx = ZX8(MEM8(edx + 0x42F348));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F32C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F2BCu) goto loc_0042F2BC;
    if (_jt == 0x0042F2C5u) goto loc_0042F2C5;
    if (_jt == 0x0042F2CEu) goto loc_0042F2CE;
    if (_jt == 0x0042F2E4u) goto loc_0042F2E4;
    if (_jt == 0x0042F2FAu) goto loc_0042F2FA;
    if (_jt == 0x0042F310u) goto loc_0042F310;
    if (_jt == 0x0042F326u) goto loc_0042F326;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F2BC: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00014903u); return; /* original tail jmp */

loc_0042F2C5: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00032E67u); return; /* original tail jmp */

loc_0042F2CE: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F2DB; /* je: equal / zero */

loc_0042F2D6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F326; /* jne: not equal / not zero */

loc_0042F2DB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000183AFu); return; /* original tail jmp */

loc_0042F2E4: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F2F1; /* je: equal / zero */

loc_0042F2EC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F326; /* jne: not equal / not zero */

loc_0042F2F1: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00034A37u); return; /* original tail jmp */

loc_0042F2FA: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F307; /* je: equal / zero */

loc_0042F302: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F326; /* jne: not equal / not zero */

loc_0042F307: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00028CE6u); return; /* original tail jmp */

loc_0042F310: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F31D; /* je: equal / zero */

loc_0042F318: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F326; /* jne: not equal / not zero */

loc_0042F31D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000217B1u); return; /* original tail jmp */

loc_0042F326: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F490
 * Original: 0x0042F490 - 0x0042F519 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F490: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042F516; /* ja: above (unsigned >) */

loc_0042F49E: ;
    edx = ZX8(MEM8(edx + 0x42F538));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F51C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F4ACu) goto loc_0042F4AC;
    if (_jt == 0x0042F4B5u) goto loc_0042F4B5;
    if (_jt == 0x0042F4BEu) goto loc_0042F4BE;
    if (_jt == 0x0042F4D4u) goto loc_0042F4D4;
    if (_jt == 0x0042F4EAu) goto loc_0042F4EA;
    if (_jt == 0x0042F500u) goto loc_0042F500;
    if (_jt == 0x0042F516u) goto loc_0042F516;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F4AC: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00014903u); return; /* original tail jmp */

loc_0042F4B5: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00016B7Cu); return; /* original tail jmp */

loc_0042F4BE: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F4CB; /* je: equal / zero */

loc_0042F4C6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F516; /* jne: not equal / not zero */

loc_0042F4CB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000143E0u); return; /* original tail jmp */

loc_0042F4D4: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F4E1; /* je: equal / zero */

loc_0042F4DC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F516; /* jne: not equal / not zero */

loc_0042F4E1: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0002587Fu); return; /* original tail jmp */

loc_0042F4EA: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F4F7; /* je: equal / zero */

loc_0042F4F2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F516; /* jne: not equal / not zero */

loc_0042F4F7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001339Bu); return; /* original tail jmp */

loc_0042F500: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F50D; /* je: equal / zero */

loc_0042F508: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F516; /* jne: not equal / not zero */

loc_0042F50D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00024542u); return; /* original tail jmp */

loc_0042F516: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F580
 * Original: 0x0042F580 - 0x0042F609 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F580: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042F606; /* ja: above (unsigned >) */

loc_0042F58E: ;
    edx = ZX8(MEM8(edx + 0x42F628));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F60C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F59Cu) goto loc_0042F59C;
    if (_jt == 0x0042F5A5u) goto loc_0042F5A5;
    if (_jt == 0x0042F5AEu) goto loc_0042F5AE;
    if (_jt == 0x0042F5C4u) goto loc_0042F5C4;
    if (_jt == 0x0042F5DAu) goto loc_0042F5DA;
    if (_jt == 0x0042F5F0u) goto loc_0042F5F0;
    if (_jt == 0x0042F606u) goto loc_0042F606;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F59C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00014903u); return; /* original tail jmp */

loc_0042F5A5: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00023363u); return; /* original tail jmp */

loc_0042F5AE: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5BB; /* je: equal / zero */

loc_0042F5B6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F606; /* jne: not equal / not zero */

loc_0042F5BB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0002D2B9u); return; /* original tail jmp */

loc_0042F5C4: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5D1; /* je: equal / zero */

loc_0042F5CC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F606; /* jne: not equal / not zero */

loc_0042F5D1: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00017A9Au); return; /* original tail jmp */

loc_0042F5DA: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5E7; /* je: equal / zero */

loc_0042F5E2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F606; /* jne: not equal / not zero */

loc_0042F5E7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001B7E9u); return; /* original tail jmp */

loc_0042F5F0: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5FD; /* je: equal / zero */

loc_0042F5F8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F606; /* jne: not equal / not zero */

loc_0042F5FD: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001170Du); return; /* original tail jmp */

loc_0042F606: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F930
 * Original: 0x0042F930 - 0x0042F9B9 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F930: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042F9B6; /* ja: above (unsigned >) */

loc_0042F93E: ;
    edx = ZX8(MEM8(edx + 0x42F9D8));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F9BC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F94Cu) goto loc_0042F94C;
    if (_jt == 0x0042F955u) goto loc_0042F955;
    if (_jt == 0x0042F95Eu) goto loc_0042F95E;
    if (_jt == 0x0042F974u) goto loc_0042F974;
    if (_jt == 0x0042F98Au) goto loc_0042F98A;
    if (_jt == 0x0042F9A0u) goto loc_0042F9A0;
    if (_jt == 0x0042F9B6u) goto loc_0042F9B6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F94C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00014903u); return; /* original tail jmp */

loc_0042F955: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00031EE5u); return; /* original tail jmp */

loc_0042F95E: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F96B; /* je: equal / zero */

loc_0042F966: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F9B6; /* jne: not equal / not zero */

loc_0042F96B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00036526u); return; /* original tail jmp */

loc_0042F974: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F981; /* je: equal / zero */

loc_0042F97C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F9B6; /* jne: not equal / not zero */

loc_0042F981: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000115DCu); return; /* original tail jmp */

loc_0042F98A: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F997; /* je: equal / zero */

loc_0042F992: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F9B6; /* jne: not equal / not zero */

loc_0042F997: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0001244Bu); return; /* original tail jmp */

loc_0042F9A0: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F9AD; /* je: equal / zero */

loc_0042F9A8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F9B6; /* jne: not equal / not zero */

loc_0042F9AD: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00022657u); return; /* original tail jmp */

loc_0042F9B6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042FA20
 * Original: 0x0042FA20 - 0x0042FA89 (105 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FA20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042FA86; /* ja: above (unsigned >) */

loc_0042FA2E: ;
    edx = ZX8(MEM8(edx + 0x42FAB0));
    { uint32_t _jt = MEM32(edx * 4 + 0x42FA8C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0042FA3Cu) goto loc_0042FA3C;
    if (_jt == 0x0042FA45u) goto loc_0042FA45;
    if (_jt == 0x0042FA4Eu) goto loc_0042FA4E;
    if (_jt == 0x0042FA57u) goto loc_0042FA57;
    if (_jt == 0x0042FA60u) goto loc_0042FA60;
    if (_jt == 0x0042FA69u) goto loc_0042FA69;
    if (_jt == 0x0042FA74u) goto loc_0042FA74;
    if (_jt == 0x0042FA7Du) goto loc_0042FA7D;
    if (_jt == 0x0042FA86u) goto loc_0042FA86;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042FA3C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0003664Du); return; /* original tail jmp */

loc_0042FA45: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00023629u); return; /* original tail jmp */

loc_0042FA4E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0002EE48u); return; /* original tail jmp */

loc_0042FA57: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00030775u); return; /* original tail jmp */

loc_0042FA60: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000241E1u); return; /* original tail jmp */

loc_0042FA69: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00021171u); return; /* original tail jmp */

loc_0042FA74: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x00037160u); return; /* original tail jmp */

loc_0042FA7D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x000152B3u); return; /* original tail jmp */

loc_0042FA86: ;
    esp += 8; return; /* ret 4 */

}

recomp_func_t nhl07_lookup_recovered(uint32_t address) {
    if(address==0x00556922u)return sub_00556922;
    if(address==0x00180990u)return sub_00180990;
    if(address==0x00597EFAu)return sub_00597EFA;
    if(address==0x00373D00u)return sub_00373D00;
    if(address==0x004EFF45u)return sub_004EFF45;
    if(address==0x0020BD70u)return sub_0020BD70;
    if(address==0x0021E7F0u)return sub_0021E7F0;
    if(address==0x00222980u)return sub_00222980;
    if(address==0x00381DB0u)return sub_00381DB0;
    if(address==0x0027EF90u)return sub_0027EF90;
    if(address==0x00207A30u)return sub_00207A30;
    if(address==0x0022AE30u)return sub_0022AE30;
    if(address==0x003DCB30u)return sub_003DCB30;
    if(address==0x0022A270u)return sub_0022A270;
    if(address==0x0022A840u)return sub_0022A840;
    if(address==0x00230070u)return sub_00230070;
    if(address==0x002318E0u)return sub_002318E0;
    if(address==0x0042AFC0u)return sub_0042AFC0;
    if(address==0x0041FB30u)return sub_0041FB30;
    if(address==0x004264B0u)return sub_004264B0;
    if(address==0x0042AEF0u)return sub_0042AEF0;
    if(address==0x0042F2A0u)return sub_0042F2A0;
    if(address==0x0042F490u)return sub_0042F490;
    if(address==0x0042F580u)return sub_0042F580;
    if(address==0x0042F930u)return sub_0042F930;
    if(address==0x0042FA20u)return sub_0042FA20;
    return NULL;
}
