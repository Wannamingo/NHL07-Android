/**
 * nhl_07_recomp - Recompiled code chunk 134
 * Functions: 250 (0x0020C86A - 0x00211EB0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0020C86A
 * Original: 0x0020C86A - 0x0020C8D0 (102 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C86A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C86A: ;
    edi = edi;
    eax = eax | 0x160020C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    RECOMP_UNIMPL("enter 0x20, 0x1c", 0x0020C871u); /* TODO: enter 0x20, 0x1c */
    RECOMP_UNIMPL("enter 0x20, 0x22", 0x0020C875u); /* TODO: enter 0x20, 0x22 */
    RECOMP_UNIMPL("enter 0x20, 0x28", 0x0020C879u); /* TODO: enter 0x20, 0x28 */
    RECOMP_UNIMPL("enter 0x20, 0x2e", 0x0020C87Du); /* TODO: enter 0x20, 0x2e */
    RECOMP_UNIMPL("enter 0x20, 0x34", 0x0020C881u); /* TODO: enter 0x20, 0x34 */
    RECOMP_UNIMPL("enter 0x20, -0x34", 0x0020C885u); /* TODO: enter 0x20, -0x34 */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_0020C8D0
 * Original: 0x0020C8D0 - 0x0020C922 (82 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x7F7EC8;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C8EE; /* je: equal / zero */

loc_0020C8E1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0020C8E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C8E5u); } /* indirect call */
    }

loc_0020C8E7: ;
    MEM32(esi + 8) = 0;

loc_0020C8EE: ;
    ecx = esi;
    PUSH32(esp, 0x0020C8F5u); RECOMP_ABI_CALL(0x00026469u, sub_00026469); /* call 0x00026469 */

loc_0020C8F5: ;
    edi = MEM32(esi + 0x831C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C919; /* je: equal / zero */

loc_0020C8FF: ;
    ecx = edi;
    PUSH32(esp, 0x0020C906u); RECOMP_ABI_CALL(0x0002FB18u, sub_0002FB18); /* call 0x0002FB18 */

loc_0020C906: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020C90Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020C90C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x831C) = 0;

loc_0020C919: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7F7B08;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020C940
 * Original: 0x0020C940 - 0x0020C9CF (143 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C940: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0020C9A1; /* ja: above (unsigned >) */

loc_0020C94C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20C9D0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0020C953u) goto loc_0020C953;
    if (_jt == 0x0020C95Cu) goto loc_0020C95C;
    if (_jt == 0x0020C965u) goto loc_0020C965;
    if (_jt == 0x0020C96Eu) goto loc_0020C96E;
    if (_jt == 0x0020C977u) goto loc_0020C977;
    if (_jt == 0x0020C980u) goto loc_0020C980;
    if (_jt == 0x0020C989u) goto loc_0020C989;
    if (_jt == 0x0020C992u) goto loc_0020C992;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020C953: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    goto loc_0020C999;

loc_0020C95C: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    goto loc_0020C999;

loc_0020C965: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    goto loc_0020C999;

loc_0020C96E: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    goto loc_0020C999;

loc_0020C977: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    goto loc_0020C999;

loc_0020C980: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    goto loc_0020C999;

loc_0020C989: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    goto loc_0020C999;

loc_0020C992: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);

loc_0020C999: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x0020C9A1u); RECOMP_ABI_CALL(0x000327A0u, sub_000327A0); /* call 0x000327A0 */

loc_0020C9A1: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020C9BE; /* je: equal / zero */

loc_0020C9AA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020C9CB; /* jne: not equal / not zero */

loc_0020C9AD: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x2B04F);
    PUSH32(esp, 0x0020C9BAu); RECOMP_ABI_CALL(0x00024DB2u, sub_00024DB2); /* call 0x00024DB2 */

loc_0020C9BA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020C9BE: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x25302);
    PUSH32(esp, 0x0020C9CBu); RECOMP_ABI_CALL(0x00024DB2u, sub_00024DB2); /* call 0x00024DB2 */

loc_0020C9CB: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020CA20
 * Original: 0x0020CA20 - 0x0020CB75 (341 bytes, 111 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CA20: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CB66; /* je: equal / zero */

loc_0020CA34: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x21C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_0020CAE8; /* ja: above (unsigned >) */

loc_0020CA46: ;
    eax = ZX8(MEM8(ebx + 0x20CB84));
    { uint32_t _jt = MEM32(eax * 4 + 0x20CB78); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0020CA54u) goto loc_0020CA54;
    if (_jt == 0x0020CAA4u) goto loc_0020CAA4;
    if (_jt == 0x0020CAE8u) goto loc_0020CAE8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020CA54: ;
    ecx = MEM32(esp + 0x21C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0020CA64u); RECOMP_ABI_CALL(0x00020677u, sub_00020677); /* call 0x00020677 */

loc_0020CA64: ;
    ecx = MEM32(0x8B4CF4);
    edi = MEM32(esp + 0x21C);
    PUSH32(esp, 1);
    esi = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = edx;
    PUSH32(esp, 0x0020CA84u); RECOMP_ABI_CALL(0x0001297Du, sub_0001297D); /* call 0x0001297D */

loc_0020CA84: ;
    eax = MEM32(0x8B4CF0);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CA9Eu); RECOMP_ABI_CALL(0x0001297Du, sub_0001297D); /* call 0x0001297D */

loc_0020CA9E: ;
    POP32(esp, edi);
    goto loc_0020CB2F;

loc_0020CAA4: ;
    eax = MEM32(esp + 0x21C);
    esi = MEM32(ebx * 4 + 0x8B4CF0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020CACC; /* je: equal / zero */

loc_0020CAB8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020CAC5; /* je: equal / zero */

loc_0020CABB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020CACE; /* jne: not equal / not zero */

loc_0020CABE: ;
    ecx = 2;
    goto loc_0020CACE;

loc_0020CAC5: ;
    ecx = 1;
    goto loc_0020CACE;

loc_0020CACC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020CACE: ;
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x228);
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x0020CAE6u); RECOMP_ABI_CALL(0x0001297Du, sub_0001297D); /* call 0x0001297D */

loc_0020CAE6: ;
    goto loc_0020CB2F;

loc_0020CAE8: ;
    ecx = MEM32(esp + 0x21C);
    esi = MEM32(ebx * 4 + 0x8B4CF0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020CB10; /* je: equal / zero */

loc_0020CAFC: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020CB09; /* je: equal / zero */

loc_0020CAFF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020CB12; /* jne: not equal / not zero */

loc_0020CB02: ;
    eax = 2;
    goto loc_0020CB12;

loc_0020CB09: ;
    eax = 1;
    goto loc_0020CB12;

loc_0020CB10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020CB12: ;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x228);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x0020CB2Au); RECOMP_ABI_CALL(0x0001297Du, sub_0001297D); /* call 0x0001297D */

loc_0020CB2A: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 0x32;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020CB2F: ;
    eax = MEM32(esp + 0x228);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x230);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0020CB58u); RECOMP_ABI_CALL(0x00014F0Cu, sub_00014F0C); /* call 0x00014F0C */

loc_0020CB58: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0020CB66: ;
    eax = 2;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020CBF0
 * Original: 0x0020CBF0 - 0x0020CEC6 (726 bytes, 219 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CBF0: ;
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CEB6; /* je: equal / zero */

loc_0020CC07: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x428);
    eax = ebp + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0020CE58; /* ja: above (unsigned >) */

loc_0020CC1E: ;
    eax = ZX8(MEM8(eax + 0x20CEE8));
    { uint32_t _jt = MEM32(eax * 4 + 0x20CEC8); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0020CC2Cu) goto loc_0020CC2C;
    if (_jt == 0x0020CC5Cu) goto loc_0020CC5C;
    if (_jt == 0x0020CCBCu) goto loc_0020CCBC;
    if (_jt == 0x0020CD1Cu) goto loc_0020CD1C;
    if (_jt == 0x0020CD7Cu) goto loc_0020CD7C;
    if (_jt == 0x0020CDDCu) goto loc_0020CDDC;
    if (_jt == 0x0020CE37u) goto loc_0020CE37;
    if (_jt == 0x0020CE58u) goto loc_0020CE58;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020CC2C: ;
    eax = MEM32(0x8B4CF4);
    edi = MEM32(esp + 0x428);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CC44u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CC44: ;
    edx = MEM32(0x8B4CF0);
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    goto loc_0020CE6D;

loc_0020CC5C: ;
    edx = MEM32(0x8B4EA8);
    edi = MEM32(esp + 0x428);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CC75u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CC75: ;
    ecx = MEM32(0x8B4EB0);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CC8Du); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CC8D: ;
    eax = MEM32(0x8B4EAC);
    ecx = MEM32(esi + 8);
    edx = esp + 0x320;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CCA4u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CCA4: ;
    edx = MEM32(0x8B4EB4);
    ecx = esp + 0x21C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    goto loc_0020CE6D;

loc_0020CCBC: ;
    edx = MEM32(0x8B4EB8);
    edi = MEM32(esp + 0x428);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CCD5u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CCD5: ;
    ecx = MEM32(0x8B4EC0);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CCEDu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CCED: ;
    eax = MEM32(0x8B4EBC);
    ecx = MEM32(esi + 8);
    edx = esp + 0x320;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CD04u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CD04: ;
    edx = MEM32(0x8B4EC4);
    ecx = esp + 0x21C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    goto loc_0020CE6D;

loc_0020CD1C: ;
    edx = MEM32(0x8B4EC8);
    edi = MEM32(esp + 0x428);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CD35u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CD35: ;
    ecx = MEM32(0x8B4ED0);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CD4Du); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CD4D: ;
    eax = MEM32(0x8B4ECC);
    ecx = MEM32(esi + 8);
    edx = esp + 0x320;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CD64u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CD64: ;
    edx = MEM32(0x8B4ED4);
    ecx = esp + 0x21C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    goto loc_0020CE6D;

loc_0020CD7C: ;
    edx = MEM32(0x8B4ED8);
    edi = MEM32(esp + 0x428);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CD95u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CD95: ;
    ecx = MEM32(0x8B4EE0);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CDADu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CDAD: ;
    eax = MEM32(0x8B4EDC);
    ecx = MEM32(esi + 8);
    edx = esp + 0x320;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CDC4u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CDC4: ;
    edx = MEM32(0x8B4EE4);
    ecx = esp + 0x21C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    goto loc_0020CE6D;

loc_0020CDDC: ;
    PUSH32(esp, 1);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0020CDE7u); RECOMP_ABI_CALL(0x000349D8u, sub_000349D8); /* call 0x000349D8 */

loc_0020CDE7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0020CDF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CDF2u); } /* indirect call */
    }

loc_0020CDF5: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020CE23; /* jbe: below or equal (unsigned <=) */

loc_0020CDFF: ;
    /* nop */

loc_0020CE00: ;
    eax = MEM32(0x8B4D14);
    ecx = MEM32(esi + 8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020CE14u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CE14: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020CE00; /* jb: below (unsigned <) */

loc_0020CE23: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0020CE31u); RECOMP_ABI_CALL(0x000344D8u, sub_000344D8); /* call 0x000344D8 */

loc_0020CE31: ;
    MEM32(esp + 0x14) = ebx;
    goto loc_0020CE72;

loc_0020CE37: ;
    eax = MEM32(ebp * 4 + 0x8B4CF0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x42C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020CE51u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CE51: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x32;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020CE72;

loc_0020CE58: ;
    edx = MEM32(ebp * 4 + 0x8B4CF0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x42C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0020CE6D: ;
    PUSH32(esp, 0x0020CE72u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020CE72: ;
    ecx = esp + 0x21C;
    PUSH32(esp, ecx);
    edx = esp + 0x324;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x43C);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x43C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020CEA7u); RECOMP_ABI_CALL(0x00014F0Cu, sub_00014F0C); /* call 0x00014F0C */

loc_0020CEA7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020CEB6: ;
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020CEC6
 * Original: 0x0020CEC6 - 0x0020D050 (394 bytes, 356 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CEC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CEC6: ;
    edi = edi;
    _fb = (uint32_t)(0xCC) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0xCC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("aaa", 0x0020CECCu); /* TODO: aaa */
    RECOMP_UNIMPL("into", 0x0020CECDu); /* TODO: into */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esp);
    /* int3: debug-trap slide byte, stepped over */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp = 0x1C0020CC;
    RECOMP_UNIMPL("int 0x20", 0x0020CED9u); /* TODO: int 0x20 */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + ecx * 8 + 0x20) = MEM8(ebp + ecx * 8 + 0x20) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebp + ecx * 8 + 0x20)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int 0x20", 0x0020CEE1u); /* TODO: int 0x20 */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -50) = MEM8(eax + -50) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + -50)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_0020D050
 * Original: 0x0020D050 - 0x0020D2D9 (649 bytes, 195 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020D050: ;
    _fb = (uint32_t)(0x310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x310;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D2CA; /* je: equal / zero */

loc_0020D064: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x320);
    eax = ebp + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0020D279; /* ja: above (unsigned >) */

loc_0020D07B: ;
    eax = ZX8(MEM8(eax + 0x20D300));
    { uint32_t _jt = MEM32(eax * 4 + 0x20D2DC); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0020D089u) goto loc_0020D089;
    if (_jt == 0x0020D0B9u) goto loc_0020D0B9;
    if (_jt == 0x0020D101u) goto loc_0020D101;
    if (_jt == 0x0020D149u) goto loc_0020D149;
    if (_jt == 0x0020D191u) goto loc_0020D191;
    if (_jt == 0x0020D1D9u) goto loc_0020D1D9;
    if (_jt == 0x0020D237u) goto loc_0020D237;
    if (_jt == 0x0020D258u) goto loc_0020D258;
    if (_jt == 0x0020D279u) goto loc_0020D279;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020D089: ;
    eax = MEM32(0x8B4CF4);
    edi = MEM32(esp + 0x320);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D0A1u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D0A1: ;
    edx = MEM32(0x8B4CF0);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    goto loc_0020D28E;

loc_0020D0B9: ;
    edx = MEM32(0x8B4EA8);
    edi = MEM32(esp + 0x320);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D0D2u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D0D2: ;
    ecx = MEM32(0x8B4EB0);
    eax = esp + 0x114;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D0EAu); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D0EA: ;
    eax = MEM32(0x8B4EAC);
    ecx = MEM32(esi + 0x14);
    edx = esp + 0x218;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    goto loc_0020D28E;

loc_0020D101: ;
    eax = MEM32(0x8B4EB8);
    edi = MEM32(esp + 0x320);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D119u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D119: ;
    edx = MEM32(0x8B4EC0);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D131u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D131: ;
    ecx = MEM32(0x8B4EBC);
    eax = esp + 0x218;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    goto loc_0020D28E;

loc_0020D149: ;
    eax = MEM32(0x8B4EC8);
    edi = MEM32(esp + 0x320);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D161u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D161: ;
    edx = MEM32(0x8B4ED0);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D179u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D179: ;
    ecx = MEM32(0x8B4ECC);
    eax = esp + 0x218;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    goto loc_0020D28E;

loc_0020D191: ;
    eax = MEM32(0x8B4ED8);
    edi = MEM32(esp + 0x320);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D1A9u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D1A9: ;
    edx = MEM32(0x8B4EE0);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D1C1u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D1C1: ;
    ecx = MEM32(0x8B4EDC);
    eax = esp + 0x218;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    goto loc_0020D28E;

loc_0020D1D9: ;
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0020D1E7u); RECOMP_ABI_CALL(0x0002EA6Fu, sub_0002EA6F); /* call 0x0002EA6F */

loc_0020D1E7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0020D1F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D1F2u); } /* indirect call */
    }

loc_0020D1F5: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020D224; /* jbe: below or equal (unsigned <=) */

loc_0020D1FD: ;
    /* nop */

loc_0020D200: ;
    edx = MEM32(0x8B4D14);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D215u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D215: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020D200; /* jb: below (unsigned <) */

loc_0020D224: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D230u); RECOMP_ABI_CALL(0x000129F0u, sub_000129F0); /* call 0x000129F0 */

loc_0020D230: ;
    MEM32(esp + 0x14) = ebx;
    POP32(esp, ebx);
    goto loc_0020D293;

loc_0020D237: ;
    eax = MEM32(ebp * 4 + 0x8B4CF0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x324);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020D251u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D251: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x32;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020D293;

loc_0020D258: ;
    edx = MEM32(ebp * 4 + 0x8B4CF0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x324);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D272u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D272: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x64;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020D293;

loc_0020D279: ;
    eax = MEM32(ebp * 4 + 0x8B4CF0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x324);
    PUSH32(esp, eax);
    PUSH32(esp, edx);

loc_0020D28E: ;
    PUSH32(esp, 0x0020D293u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020D293: ;
    edx = MEM32(esp + 0x32C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x334);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020D2BCu); RECOMP_ABI_CALL(0x00014F0Cu, sub_00014F0C); /* call 0x00014F0C */

loc_0020D2BC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x310;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020D2CA: ;
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x310;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020D450
 * Original: 0x0020D450 - 0x0020D538 (232 bytes, 71 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020D450: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D528; /* je: equal / zero */

loc_0020D467: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x21C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020D4F1; /* ja: above (unsigned >) */

loc_0020D474: ;
    eax = ZX8(MEM8(edi + 0x20D548));
    { uint32_t _jt = MEM32(eax * 4 + 0x20D538); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0020D482u) goto loc_0020D482;
    if (_jt == 0x0020D4B6u) goto loc_0020D4B6;
    if (_jt == 0x0020D4D2u) goto loc_0020D4D2;
    if (_jt == 0x0020D4F1u) goto loc_0020D4F1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020D482: ;
    eax = MEM32(0x8B4CF4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x21C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020D49Bu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020D49B: ;
    edx = MEM32(0x8B4CF0);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020D4B3u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020D4B3: ;
    POP32(esp, ebx);
    goto loc_0020D4F1;

loc_0020D4B6: ;
    edx = MEM32(edi * 4 + 0x8B4CF0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x21C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D4D0u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020D4D0: ;
    goto loc_0020D4F1;

loc_0020D4D2: ;
    eax = MEM32(edi * 4 + 0x8B4CF0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x21C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020D4ECu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020D4EC: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 0x32;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020D4F1: ;
    edx = MEM32(esp + 0x224);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x22C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0020D51Au); RECOMP_ABI_CALL(0x00014F0Cu, sub_00014F0C); /* call 0x00014F0C */

loc_0020D51A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020D528: ;
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020D5D0
 * Original: 0x0020D5D0 - 0x0020D621 (81 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x7F8608;
    if (CMP_EQ(_fa, _fb)) goto loc_0020D5E7; /* je: equal / zero */

loc_0020D5E1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0020D5E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D5E5u); } /* indirect call */
    }

loc_0020D5E7: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D5FA; /* je: equal / zero */

loc_0020D5EE: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0020D5FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D5F7u); } /* indirect call */
    }

loc_0020D5FA: ;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D618; /* je: equal / zero */

loc_0020D601: ;
    ecx = edi;
    PUSH32(esp, 0x0020D608u); RECOMP_ABI_CALL(0x0001527Cu, sub_0001527C); /* call 0x0001527C */

loc_0020D608: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020D60Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020D60E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_0020D618: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7F7930;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D640
 * Original: 0x0020D640 - 0x0020D65F (31 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D640: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D65C; /* je: equal / zero */

loc_0020D64B: ;
    goto loc_0020D650;

    /* nop */

loc_0020D650: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020D65C; /* jle: less or equal (signed <=) */

loc_0020D654: ;
    eax = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D650; /* jne: not equal / not zero */

loc_0020D65C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D670
 * Original: 0x0020D670 - 0x0020D698 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D670: ;
    eax = MEM32(0x8F9584);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D695; /* jne: not equal / not zero */

loc_0020D679: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0020D682u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020D682: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D695; /* je: equal / zero */

loc_0020D689: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0020D695u); RECOMP_ABI_CALL(0x00015A92u, sub_00015A92); /* call 0x00015A92 */

loc_0020D695: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D6B0
 * Original: 0x0020D6B0 - 0x0020D6D4 (36 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D6B0: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D6CC; /* je: equal / zero */

loc_0020D6BB: ;
    goto loc_0020D6C0;

    /* nop */

loc_0020D6C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020D6CC; /* jle: less or equal (signed <=) */

loc_0020D6C4: ;
    ecx = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D6C0; /* jne: not equal / not zero */

loc_0020D6CC: ;
    PUSH32(esp, 0x0020D6D1u); RECOMP_ABI_CALL(0x000341F4u, sub_000341F4); /* call 0x000341F4 */

loc_0020D6D1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D6E0
 * Original: 0x0020D6E0 - 0x0020D724 (68 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D6E0: ;
    PUSH32(esp, 0x0020D6E5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0020D6E5: ;
    ecx = eax;
    PUSH32(esp, 0x0020D6ECu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_0020D6EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D6FC; /* je: equal / zero */

loc_0020D6F0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0020D6FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D6F4u); } /* indirect call */
    }

loc_0020D6FA: ;
    goto loc_0020D6FE;

loc_0020D6FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D6FE: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D71C; /* je: equal / zero */

loc_0020D709: ;
    /* nop */

loc_0020D710: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020D71C; /* jle: less or equal (signed <=) */

loc_0020D714: ;
    ecx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D710; /* jne: not equal / not zero */

loc_0020D71C: ;
    PUSH32(esp, 0x0020D721u); RECOMP_ABI_CALL(0x000341F4u, sub_000341F4); /* call 0x000341F4 */

loc_0020D721: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D740
 * Original: 0x0020D740 - 0x0020D75E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D740: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020D748u); RECOMP_ABI_CALL(0x00030E5Fu, sub_00030E5F); /* call 0x00030E5F */

loc_0020D748: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020D758; /* je: equal / zero */

loc_0020D74F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020D755u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020D755: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020D758: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D770
 * Original: 0x0020D770 - 0x0020D809 (153 bytes, 56 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D770: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D798; /* je: equal / zero */

loc_0020D777: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D795u); RECOMP_ABI_CALL(0x0003706Bu, sub_0003706B); /* call 0x0003706B */

loc_0020D795: ;
    esp += 24; return; /* ret 20 */

loc_0020D798: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D7BB; /* je: equal / zero */

loc_0020D79F: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D7B8u); RECOMP_ABI_CALL(0x000168E3u, sub_000168E3); /* call 0x000168E3 */

loc_0020D7B8: ;
    esp += 24; return; /* ret 20 */

loc_0020D7BB: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D7DE; /* je: equal / zero */

loc_0020D7C2: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D7DBu); RECOMP_ABI_CALL(0x0002B7F2u, sub_0002B7F2); /* call 0x0002B7F2 */

loc_0020D7DB: ;
    esp += 24; return; /* ret 20 */

loc_0020D7DE: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D801; /* je: equal / zero */

loc_0020D7E5: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D7FEu); RECOMP_ABI_CALL(0x000166EAu, sub_000166EA); /* call 0x000166EA */

loc_0020D7FE: ;
    esp += 24; return; /* ret 20 */

loc_0020D801: ;
    eax = 2;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020D830
 * Original: 0x0020D830 - 0x0020D84E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020D838u); RECOMP_ABI_CALL(0x0002B112u, sub_0002B112); /* call 0x0002B112 */

loc_0020D838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020D848; /* je: equal / zero */

loc_0020D83F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020D845u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020D845: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020D848: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D860
 * Original: 0x0020D860 - 0x0020D867 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D860(void)
{

loc_0020D860: ;
    MEM32(ecx) = 0x7F9BE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D870
 * Original: 0x0020D870 - 0x0020D88F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D870: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F9BE0;
    if (TEST_Z(_fa, _fb)) goto loc_0020D889; /* je: equal / zero */

loc_0020D880: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020D886u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020D886: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020D889: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D8A0
 * Original: 0x0020D8A0 - 0x0020D8A5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D8A0: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0020D8B0
 * Original: 0x0020D8B0 - 0x0020D8B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D8B0(void)
{

loc_0020D8B0: ;
    MEM32(ecx) = 0x7F9C28;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D8C0
 * Original: 0x0020D8C0 - 0x0020D8DF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D8C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F9C28;
    if (TEST_Z(_fa, _fb)) goto loc_0020D8D9; /* je: equal / zero */

loc_0020D8D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020D8D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020D8D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020D8D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D8F0
 * Original: 0x0020D8F0 - 0x0020D8F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D8F0(void)
{

loc_0020D8F0: ;
    MEM32(ecx) = 0x7F9D38;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D900
 * Original: 0x0020D900 - 0x0020D91F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D900: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F9D38;
    if (TEST_Z(_fa, _fb)) goto loc_0020D919; /* je: equal / zero */

loc_0020D910: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020D916u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020D916: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020D919: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D930
 * Original: 0x0020D930 - 0x0020D934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D930(void)
{

loc_0020D930: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D940
 * Original: 0x0020D940 - 0x0020D944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D940(void)
{

loc_0020D940: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D950
 * Original: 0x0020D950 - 0x0020D954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D950(void)
{

loc_0020D950: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D960
 * Original: 0x0020D960 - 0x0020D964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D960(void)
{

loc_0020D960: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D970
 * Original: 0x0020D970 - 0x0020D99B (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D970: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 3;
    PUSH32(esp, edi);
    /* nop */

loc_0020D980: ;
    edi = MEM32(ecx + -8);
    esi = MEM32(ecx + -12);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020D980; /* jne: not equal / not zero */

loc_0020D998: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D9B0
 * Original: 0x0020D9B0 - 0x0020D9EA (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D9B0: ;
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF9F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020D9C0; /* jge: greater or equal (signed >=) */

loc_0020D9BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0020D9C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x176F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x176F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020D9CD; /* jge: greater or equal (signed >=) */

loc_0020D9C7: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0020D9CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D4B (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020D9DA; /* jge: greater or equal (signed >=) */

loc_0020D9D4: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0020D9DA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x251B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x251B (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DA00
 * Original: 0x0020DA00 - 0x0020DA0A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA00(void)
{

loc_0020DA00: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0x82BC);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DA10
 * Original: 0x0020DA10 - 0x0020DA14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA10(void)
{

loc_0020DA10: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DA20
 * Original: 0x0020DA20 - 0x0020DA2D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA20(void)
{

loc_0020DA20: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DA30
 * Original: 0x0020DA30 - 0x0020DA3D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA30(void)
{

loc_0020DA30: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DA40
 * Original: 0x0020DA40 - 0x0020DA49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA40(void)
{

loc_0020DA40: ;
    eax = ecx;
    MEM32(eax) = 0x7F9EE4;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DA50
 * Original: 0x0020DA50 - 0x0020DA57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA50(void)
{

loc_0020DA50: ;
    MEM32(ecx) = 0x7F9EE4;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DA60
 * Original: 0x0020DA60 - 0x0020DA6F (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA60(void)
{

loc_0020DA60: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 4) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020DA80
 * Original: 0x0020DA80 - 0x0020DA8B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA80(void)
{

loc_0020DA80: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DA90
 * Original: 0x0020DA90 - 0x0020DAAF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DA90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F9EE4;
    if (TEST_Z(_fa, _fb)) goto loc_0020DAA9; /* je: equal / zero */

loc_0020DAA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020DAA6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020DAA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020DAA9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DAC0
 * Original: 0x0020DAC0 - 0x0020DAC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DAC0(void)
{

loc_0020DAC0: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DAD0
 * Original: 0x0020DAD0 - 0x0020DAD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DAD0(void)
{

loc_0020DAD0: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DAE0
 * Original: 0x0020DAE0 - 0x0020DAE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DAE0(void)
{

loc_0020DAE0: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DAF0
 * Original: 0x0020DAF0 - 0x0020DAF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DAF0(void)
{

loc_0020DAF0: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DB00
 * Original: 0x0020DB00 - 0x0020DB04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB00(void)
{

loc_0020DB00: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DB10
 * Original: 0x0020DB10 - 0x0020DB19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB10(void)
{

loc_0020DB10: ;
    eax = ecx;
    MEM32(eax) = 0x7F9EE8;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DB20
 * Original: 0x0020DB20 - 0x0020DB27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB20(void)
{

loc_0020DB20: ;
    MEM32(ecx) = 0x7F9EE8;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DB30
 * Original: 0x0020DB30 - 0x0020DB44 (20 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DB30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1A);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + eax * 4 + 0xC);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020DB50
 * Original: 0x0020DB50 - 0x0020DB6F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DB50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F9EE8;
    if (TEST_Z(_fa, _fb)) goto loc_0020DB69; /* je: equal / zero */

loc_0020DB60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020DB66u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020DB66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020DB69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DB80
 * Original: 0x0020DB80 - 0x0020DB8C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB80(void)
{

loc_0020DB80: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DB90
 * Original: 0x0020DB90 - 0x0020DB97 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DB90: ;
    eax = MEM32(ecx + 0x34);
    _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020DBA0
 * Original: 0x0020DBA0 - 0x0020DBA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DBA0(void)
{

loc_0020DBA0: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DBB0
 * Original: 0x0020DBB0 - 0x0020DBB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DBB0(void)
{

loc_0020DBB0: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DBC0
 * Original: 0x0020DBC0 - 0x0020DBC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DBC0(void)
{

loc_0020DBC0: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DBD0
 * Original: 0x0020DBD0 - 0x0020DBD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DBD0(void)
{

loc_0020DBD0: ;
    eax = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DBE0
 * Original: 0x0020DBE0 - 0x0020DBE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DBE0(void)
{

loc_0020DBE0: ;
    eax = ecx + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DBF0
 * Original: 0x0020DBF0 - 0x0020DBF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DBF0(void)
{

loc_0020DBF0: ;
    eax = MEM32(ecx + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DC00
 * Original: 0x0020DC00 - 0x0020DC06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DC00(void)
{

loc_0020DC00: ;
    eax = 0x8FA4A0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DC10
 * Original: 0x0020DC10 - 0x0020DC16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DC10(void)
{

loc_0020DC10: ;
    SET_LO8(eax, MEM8(0x8C2250));
    esp += 4; return; /* ret */

}

/**
 * sub_0020DC20
 * Original: 0x0020DC20 - 0x0020DC28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DC20(void)
{

loc_0020DC20: ;
    MEM8(0x8C2250) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DC30
 * Original: 0x0020DC30 - 0x0020DC38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DC30(void)
{

loc_0020DC30: ;
    MEM8(0x8C2250) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DC40
 * Original: 0x0020DC40 - 0x0020DCF3 (179 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DC40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    ebx = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0020DCE4; /* ja: above (unsigned >) */

loc_0020DC51: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x20DCF4); /* switch: 4 entries, 2 targets */
    if (_jt == 0x0020DC58u) goto loc_0020DC58;
    if (_jt == 0x0020DCB6u) goto loc_0020DCB6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020DC58: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020DC5Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0020DC5F: ;
    ecx = eax;
    PUSH32(esp, 0x0020DC66u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_0020DC66: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    esi = eax;
    PUSH32(esp, 0x0020DC71u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020DC71: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DCA0; /* je: equal / zero */

loc_0020DC7A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0020DC84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020DC7Eu); } /* indirect call */
    }

loc_0020DC84: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020DC8Cu); RECOMP_ABI_CALL(0x0001ACB3u, sub_0001ACB3); /* call 0x0001ACB3 */

loc_0020DC8C: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = ebp;
    POP32(esp, ebp);
    MEM32(ebx + 0x10) = eax;
    MEM32(ebx + 8) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020DCA0: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    MEM32(ebx + 0x10) = eax;
    MEM32(ebx + 8) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020DCB6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0020DCBFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020DCBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DCDF; /* je: equal / zero */

loc_0020DCC6: ;
    ecx = eax;
    PUSH32(esp, 0x0020DCCDu); RECOMP_ABI_CALL(0x00021E4Bu, sub_00021E4B); /* call 0x00021E4B */

loc_0020DCCD: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 4) = ebp;
    POP32(esp, ebp);
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 8) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020DCDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xC) = eax;

loc_0020DCE4: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 4) = ebp;
    POP32(esp, ebp);
    MEM32(ebx + 8) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020E1F6
 * Original: 0x0020E1F6 - 0x0020E25E (104 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E1F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E1F6: ;
    edi = edi;
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_0020E1DB(); return; }

loc_0020E1FA: ;
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) goto loc_0020E21F; /* loope: ecx is non-zero and zero flag set */

loc_0020E1FF: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -506658784) = MEM8(ecx + -506658784) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + -506658784)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_0020E21F: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020E248u); RECOMP_ABI_CALL(0x00016758u, sub_00016758); /* call 0x00016758 */

loc_0020E248: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020E258; /* je: equal / zero */

loc_0020E24F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020E255u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020E255: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E258: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E270
 * Original: 0x0020E270 - 0x0020E28E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E270: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020E278u); RECOMP_ABI_CALL(0x00017A90u, sub_00017A90); /* call 0x00017A90 */

loc_0020E278: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020E288; /* je: equal / zero */

loc_0020E27F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020E285u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020E285: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E288: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E2A0
 * Original: 0x0020E2A0 - 0x0020E2A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E2A0(void)
{

loc_0020E2A0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E2B0
 * Original: 0x0020E2B0 - 0x0020E2CE (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020E2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E2B0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020E2CB; /* ja: above (unsigned >) */

loc_0020E2B8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20E2D0); /* switch: 4 entries, 2 targets */
    if (_jt == 0x0020E2BFu) goto loc_0020E2BF;
    if (_jt == 0x0020E2C5u) goto loc_0020E2C5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020E2BF: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0020E2C5: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_0020E2CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020E2CE
 * Original: 0x0020E2CE - 0x0020E35C (142 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E2CE(void)
{

loc_0020E2CE: ;
    edi = edi;

}

/**
 * sub_0020E480
 * Original: 0x0020E480 - 0x0020E4D9 (89 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020E488u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0020E488: ;
    ecx = eax;
    PUSH32(esp, 0x0020E48Fu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_0020E48F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0020E499u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020E493u); } /* indirect call */
    }

loc_0020E499: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020E4D5; /* ja: above (unsigned >) */

loc_0020E4A1: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x20E4DC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0020E4A8u) goto loc_0020E4A8;
    if (_jt == 0x0020E4B7u) goto loc_0020E4B7;
    if (_jt == 0x0020E4C6u) goto loc_0020E4C6;
    if (_jt == 0x0020E4D5u) goto loc_0020E4D5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020E4A8: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E4B5u); RECOMP_ABI_CALL(0x00034B36u, sub_00034B36); /* call 0x00034B36 */

loc_0020E4B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0020E4B7: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0020E4C4u); RECOMP_ABI_CALL(0x000167ADu, sub_000167AD); /* call 0x000167AD */

loc_0020E4C4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0020E4C6: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020E4D3u); RECOMP_ABI_CALL(0x0001C298u, sub_0001C298); /* call 0x0001C298 */

loc_0020E4D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0020E4D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E560
 * Original: 0x0020E560 - 0x0020E58D (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E560: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x0020E574u); RECOMP_ABI_CALL(0x0002BAA9u, sub_0002BAA9); /* call 0x0002BAA9 */

loc_0020E574: ;
    ecx = esp;
    PUSH32(esp, 0x0020E57Cu); RECOMP_ABI_CALL(0x000249A2u, sub_000249A2); /* call 0x000249A2 */

loc_0020E57C: ;
    ecx = esp;
    PUSH32(esp, 0x0020E584u); RECOMP_ABI_CALL(0x000149D5u, sub_000149D5); /* call 0x000149D5 */

loc_0020E584: ;
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E5A0
 * Original: 0x0020E5A0 - 0x0020E5C1 (33 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E5A0(void)
{

loc_0020E5A0: ;
    PUSH32(esp, 0x0020E5A5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0020E5A5: ;
    ecx = eax;
    PUSH32(esp, 0x0020E5ACu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_0020E5AC: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0020E5BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020E5B5u); } /* indirect call */
    }

loc_0020E5BB: ;
    eax = ZX8(LO8(eax));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E5D0
 * Original: 0x0020E5D0 - 0x0020E5D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E5D0(void)
{

loc_0020E5D0: ;
    eax = ecx;
    MEM32(eax) = 0x7F9BE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E5E0
 * Original: 0x0020E5E0 - 0x0020E62F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E5E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x7F9EEC;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E608; /* je: equal / zero */

loc_0020E5F1: ;
    ecx = edi;
    PUSH32(esp, 0x0020E5F8u); RECOMP_ABI_CALL(0x00016758u, sub_00016758); /* call 0x00016758 */

loc_0020E5F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020E5FEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020E5FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_0020E608: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E626; /* je: equal / zero */

loc_0020E60F: ;
    ecx = edi;
    PUSH32(esp, 0x0020E616u); RECOMP_ABI_CALL(0x00017A90u, sub_00017A90); /* call 0x00017A90 */

loc_0020E616: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020E61Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020E61C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = 0;

loc_0020E626: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7F9BE0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E650
 * Original: 0x0020E650 - 0x0020E659 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E650(void)
{

loc_0020E650: ;
    eax = ecx;
    MEM32(eax) = 0x7F9F30;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E660
 * Original: 0x0020E660 - 0x0020E667 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E660(void)
{

loc_0020E660: ;
    MEM32(ecx) = 0x7F9F30;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E670
 * Original: 0x0020E670 - 0x0020E68F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E670: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F9F30;
    if (TEST_Z(_fa, _fb)) goto loc_0020E689; /* je: equal / zero */

loc_0020E680: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020E686u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020E686: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E689: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E6A0
 * Original: 0x0020E6A0 - 0x0020E6A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E6A0(void)
{

loc_0020E6A0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E6B0
 * Original: 0x0020E6B0 - 0x0020E6B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E6B0(void)
{

loc_0020E6B0: ;
    eax = ecx + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E6C0
 * Original: 0x0020E6C0 - 0x0020E6CD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E6C0: ;
    eax = MEM32(ecx + 0x8474);
    _fb = (uint32_t)(MEM32(ecx + 0x8470)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x8470);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020E6D0
 * Original: 0x0020E6D0 - 0x0020E6DF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E6D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x84AC) = LO8(eax);
    MEM32(ecx + 0x84B0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E6F0
 * Original: 0x0020E6F0 - 0x0020E6F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E6F0(void)
{

loc_0020E6F0: ;
    SET_LO8(eax, MEM8(ecx + 0x84AC));
    esp += 4; return; /* ret */

}

/**
 * sub_0020E700
 * Original: 0x0020E700 - 0x0020E707 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E700(void)
{

loc_0020E700: ;
    eax = MEM32(ecx + 0x8498);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E710
 * Original: 0x0020E710 - 0x0020E717 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E710(void)
{

loc_0020E710: ;
    eax = MEM32(ecx + 0x8490);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E720
 * Original: 0x0020E720 - 0x0020E73E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E720: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020E728u); RECOMP_ABI_CALL(0x0001C8F6u, sub_0001C8F6); /* call 0x0001C8F6 */

loc_0020E728: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020E738; /* je: equal / zero */

loc_0020E72F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020E735u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020E735: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E738: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E750
 * Original: 0x0020E750 - 0x0020E791 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7FEF1C;
    /* nop */

loc_0020E760: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(edi + -4);
    MEM32(ebx + eax) = edx;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(edi);
    esi = ebx + eax + 4;

loc_0020E772: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E772; /* jne: not equal / not zero */

loc_0020E77C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x84;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF1D4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7FF1D4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020E760; /* jl: less (signed <) */

loc_0020E78D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E7B0
 * Original: 0x0020E7B0 - 0x0020E7BA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E7B0(void)
{

loc_0020E7B0: ;
    eax = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(eax + 0x84AC));
    esp += 4; return; /* ret */

}

/**
 * sub_0020E7C0
 * Original: 0x0020E7C0 - 0x0020E7D9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E7C0: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0020E7CBu); RECOMP_ABI_CALL(0x00026266u, sub_00026266); /* call 0x00026266 */

loc_0020E7CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    eax = 0xD;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E7D7; /* je: equal / zero */

loc_0020E7D5: ;
    eax = esi;

loc_0020E7D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E7E0
 * Original: 0x0020E7E0 - 0x0020E815 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E7E0: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x0020E7E8u); RECOMP_ABI_CALL(0x0002C8AFu, sub_0002C8AF); /* call 0x0002C8AF */

loc_0020E7E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020E80F; /* ja: above (unsigned >) */

loc_0020E7ED: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20E818); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0020E7F4u) goto loc_0020E7F4;
    if (_jt == 0x0020E7F7u) goto loc_0020E7F7;
    if (_jt == 0x0020E7FDu) goto loc_0020E7FD;
    if (_jt == 0x0020E803u) goto loc_0020E803;
    if (_jt == 0x0020E809u) goto loc_0020E809;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020E7F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0020E7F7: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_0020E7FD: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_0020E803: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_0020E809: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_0020E80F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E850
 * Original: 0x0020E850 - 0x0020E858 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E850: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0001A94D(); return; /* tail jmp 0x0001A94D */

}

/**
 * sub_0020E860
 * Original: 0x0020E860 - 0x0020E868 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E860: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000308B0(); return; /* tail jmp 0x000308B0 */

}

/**
 * sub_0020E870
 * Original: 0x0020E870 - 0x0020E87A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E870(void)
{

loc_0020E870: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 0x8498);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E880
 * Original: 0x0020E880 - 0x0020E899 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E880: ;
    eax = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x84AC) = LO8(edx);
    MEM32(eax + 0x84B0) = edx;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00026A09(); return; /* tail jmp 0x00026A09 */

}

/**
 * sub_0020E8A0
 * Original: 0x0020E8A0 - 0x0020E8A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E8A0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00030E28(); return; /* tail jmp 0x00030E28 */

}

/**
 * sub_0020E8B0
 * Original: 0x0020E8B0 - 0x0020E8B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E8B0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00024362(); return; /* tail jmp 0x00024362 */

}

/**
 * sub_0020E8C0
 * Original: 0x0020E8C0 - 0x0020E8D6 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E8C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020E8C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E8CDu); RECOMP_ABI_CALL(0x00015AECu, sub_00015AEC); /* call 0x00015AEC */

loc_0020E8CD: ;
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
 * sub_0020E8E0
 * Original: 0x0020E8E0 - 0x0020E91B (59 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E8E0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E912; /* je: equal / zero */

loc_0020E8EB: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E8FC; /* je: equal / zero */

loc_0020E8F3: ;
    eax = 3;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020E8FC: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E90Cu); RECOMP_ABI_CALL(0x00025A41u, sub_00025A41); /* call 0x00025A41 */

loc_0020E90C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020E912: ;
    eax = 2;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020E930
 * Original: 0x0020E930 - 0x0020E95F (47 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E930: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E945; /* je: equal / zero */

loc_0020E93C: ;
    eax = 3;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020E945: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020E959u); RECOMP_ABI_CALL(0x00025A41u, sub_00025A41); /* call 0x00025A41 */

loc_0020E959: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020E970
 * Original: 0x0020E970 - 0x0020E978 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E970: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0002B0EF(); return; /* tail jmp 0x0002B0EF */

}

/**
 * sub_0020E980
 * Original: 0x0020E980 - 0x0020E988 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E980: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00016127(); return; /* tail jmp 0x00016127 */

}

/**
 * sub_0020E990
 * Original: 0x0020E990 - 0x0020E99A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E990(void)
{

loc_0020E990: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 0x8490);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E9A0
 * Original: 0x0020E9A0 - 0x0020E9B9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E9A0: ;
    eax = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x84AC) = LO8(edx);
    MEM32(eax + 0x84B0) = edx;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000119AB(); return; /* tail jmp 0x000119AB */

}

/**
 * sub_0020E9C0
 * Original: 0x0020E9C0 - 0x0020E9E6 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E9C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E9CDu); RECOMP_ABI_CALL(0x0002851Bu, sub_0002851B); /* call 0x0002851B */

loc_0020E9CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E9D4; /* jne: not equal / not zero */

loc_0020E9D1: ;
    esp += 8; return; /* ret 4 */

loc_0020E9D4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E9F0
 * Original: 0x0020E9F0 - 0x0020E9F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E9F0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000281F6(); return; /* tail jmp 0x000281F6 */

}

/**
 * sub_0020EA00
 * Original: 0x0020EA00 - 0x0020EA08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EA00: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0001D977(); return; /* tail jmp 0x0001D977 */

}

/**
 * sub_0020EA10
 * Original: 0x0020EA10 - 0x0020EA18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EA10: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000251F9(); return; /* tail jmp 0x000251F9 */

}

/**
 * sub_0020EA20
 * Original: 0x0020EA20 - 0x0020EA28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EA20: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0001E34F(); return; /* tail jmp 0x0001E34F */

}

/**
 * sub_0020EA30
 * Original: 0x0020EA30 - 0x0020EAA0 (112 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020EA30: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020EA97; /* je: equal / zero */

loc_0020EA3B: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020EA81; /* je: equal / zero */

loc_0020EA44: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020EA6B; /* je: equal / zero */

loc_0020EA47: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020EA55; /* je: equal / zero */

loc_0020EA4C: ;
    eax = 3;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020EA55: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020EA65u); RECOMP_ABI_CALL(0x0002BCD4u, sub_0002BCD4); /* call 0x0002BCD4 */

loc_0020EA65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020EA6B: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020EA7Bu); RECOMP_ABI_CALL(0x0002BCD4u, sub_0002BCD4); /* call 0x0002BCD4 */

loc_0020EA7B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020EA81: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020EA91u); RECOMP_ABI_CALL(0x0002BCD4u, sub_0002BCD4); /* call 0x0002BCD4 */

loc_0020EA91: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020EA97: ;
    eax = 2;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020EAC0
 * Original: 0x0020EAC0 - 0x0020EAC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EAC0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00028679(); return; /* tail jmp 0x00028679 */

}

/**
 * sub_0020EAD0
 * Original: 0x0020EAD0 - 0x0020EAF2 (34 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020EAD0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(esp + 4);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020EAE9u); RECOMP_ABI_CALL(0x0002D2FAu, sub_0002D2FA); /* call 0x0002D2FA */

loc_0020EAE9: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020EB00
 * Original: 0x0020EB00 - 0x0020EB4D (77 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020EB00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0020EB28u); RECOMP_ABI_CALL(0x00011785u, sub_00011785); /* call 0x00011785 */

loc_0020EB28: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0020EB3Au); RECOMP_ABI_CALL(0x00037C64u, sub_00037C64); /* call 0x00037C64 */

loc_0020EB3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0020EB45; /* jne: not equal / not zero */

loc_0020EB43: ;
    eax = edi;

loc_0020EB45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020EB60
 * Original: 0x0020EB60 - 0x0020EB99 (57 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020EB60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020EB83u); RECOMP_ABI_CALL(0x00011785u, sub_00011785); /* call 0x00011785 */

loc_0020EB83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020EB90; /* je: equal / zero */

loc_0020EB87: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0020EB90: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020EBB0
 * Original: 0x0020EBB0 - 0x0020EBC0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020EBB0: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx + 0x8474);
    _fb = (uint32_t)(MEM32(ecx + 0x8470)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x8470);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020EBD0
 * Original: 0x0020EBD0 - 0x0020ECD0 (256 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EBD0: ;
    edx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0020EC32; /* ja: above (unsigned >) */

loc_0020EBDB: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x20EC38); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0020EBE2u) goto loc_0020EBE2;
    if (_jt == 0x0020EBF2u) goto loc_0020EBF2;
    if (_jt == 0x0020EC02u) goto loc_0020EC02;
    if (_jt == 0x0020EC12u) goto loc_0020EC12;
    if (_jt == 0x0020EC22u) goto loc_0020EC22;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020EBE2: ;
    MEM32(esp + 4) = 0;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00013355(); return; /* tail jmp 0x00013355 */

loc_0020EBF2: ;
    MEM32(esp + 4) = 1;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00013355(); return; /* tail jmp 0x00013355 */

loc_0020EC02: ;
    MEM32(esp + 4) = 2;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00013355(); return; /* tail jmp 0x00013355 */

loc_0020EC12: ;
    MEM32(esp + 4) = 3;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00013355(); return; /* tail jmp 0x00013355 */

loc_0020EC22: ;
    MEM32(esp + 4) = 4;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00013355(); return; /* tail jmp 0x00013355 */

loc_0020EC32: ;
    esp += 8; return; /* ret 4 */

    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("bnd jmp 0x20ec5f", 0x0020EC3Cu); /* TODO: bnd jmp 0x20ec5f */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("in al, dx", 0x0020EC41u); /* TODO: in al, dx */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(HI8(ecx)) + (uint64_t)(HI8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_HI8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_HI8(ecx, HI8(ecx) & HI8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020ECC7; /* je: equal / zero */

loc_0020EC7B: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020ECB6; /* je: equal / zero */

loc_0020EC83: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(2));
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020ECA5; /* je: equal / zero */

loc_0020EC88: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020EC94; /* je: equal / zero */

loc_0020EC8B: ;
    eax = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EC94: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0020EC9Fu); RECOMP_ABI_CALL(0x0002FAEBu, sub_0002FAEB); /* call 0x0002FAEB */

loc_0020EC9F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ECA5: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0020ECB0u); RECOMP_ABI_CALL(0x0002FAEBu, sub_0002FAEB); /* call 0x0002FAEB */

loc_0020ECB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ECB6: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020ECC1u); RECOMP_ABI_CALL(0x0002FAEBu, sub_0002FAEB); /* call 0x0002FAEB */

loc_0020ECC1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ECC7: ;
    eax = 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020ECF0
 * Original: 0x0020ECF0 - 0x0020EEC2 (466 bytes, 186 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020ECF0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020EEB7; /* je: equal / zero */

loc_0020ECFF: ;
    edx = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020EEAC; /* ja: above (unsigned >) */

loc_0020ED0D: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x20EEC4); /* switch: 29 entries, 25 targets */
    if (_jt == 0x0020ED14u) goto loc_0020ED14;
    if (_jt == 0x0020ED25u) goto loc_0020ED25;
    if (_jt == 0x0020ED36u) goto loc_0020ED36;
    if (_jt == 0x0020ED47u) goto loc_0020ED47;
    if (_jt == 0x0020ED58u) goto loc_0020ED58;
    if (_jt == 0x0020ED69u) goto loc_0020ED69;
    if (_jt == 0x0020ED7Au) goto loc_0020ED7A;
    if (_jt == 0x0020ED8Bu) goto loc_0020ED8B;
    if (_jt == 0x0020ED9Cu) goto loc_0020ED9C;
    if (_jt == 0x0020EDADu) goto loc_0020EDAD;
    if (_jt == 0x0020EDBEu) goto loc_0020EDBE;
    if (_jt == 0x0020EDCFu) goto loc_0020EDCF;
    if (_jt == 0x0020EDE0u) goto loc_0020EDE0;
    if (_jt == 0x0020EDF1u) goto loc_0020EDF1;
    if (_jt == 0x0020EE02u) goto loc_0020EE02;
    if (_jt == 0x0020EE13u) goto loc_0020EE13;
    if (_jt == 0x0020EE24u) goto loc_0020EE24;
    if (_jt == 0x0020EE35u) goto loc_0020EE35;
    if (_jt == 0x0020EE46u) goto loc_0020EE46;
    if (_jt == 0x0020EE57u) goto loc_0020EE57;
    if (_jt == 0x0020EE68u) goto loc_0020EE68;
    if (_jt == 0x0020EE79u) goto loc_0020EE79;
    if (_jt == 0x0020EE8Au) goto loc_0020EE8A;
    if (_jt == 0x0020EE9Bu) goto loc_0020EE9B;
    if (_jt == 0x0020EEACu) goto loc_0020EEAC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020ED14: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0020ED1Fu); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020ED1F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ED25: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0020ED30u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020ED30: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ED36: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0020ED41u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020ED41: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ED47: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0020ED52u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020ED52: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ED58: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0020ED63u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020ED63: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ED69: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0020ED74u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020ED74: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ED7A: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0020ED85u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020ED85: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ED8B: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0020ED96u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020ED96: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ED9C: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0020EDA7u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EDA7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EDAD: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0020EDB8u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EDB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EDBE: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0020EDC9u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EDC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EDCF: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0020EDDAu); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EDDA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EDE0: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x0020EDEBu); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EDEB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EDF1: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0020EDFCu); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EDFC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE02: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0020EE0Du); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE0D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE13: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x0020EE1Eu); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE24: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x0020EE2Fu); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE2F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE35: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0020EE40u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE40: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE46: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x0020EE51u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE51: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE57: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x0020EE62u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE68: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x0020EE73u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE79: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0020EE84u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE84: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE8A: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x0020EE95u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EE95: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EE9B: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x0020EEA6u); RECOMP_ABI_CALL(0x0002FEA1u, sub_0002FEA1); /* call 0x0002FEA1 */

loc_0020EEA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EEAC: ;
    esi = 3;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EEB7: ;
    esi = 2;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020EEC2
 * Original: 0x0020EEC2 - 0x0020F01B (345 bytes, 247 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EEC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020EEC2: ;
    edi = edi;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xED) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    RECOMP_UNIMPL("out dx, al", 0x0020EEC9u); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    RECOMP_UNIMPL("out dx, al", 0x0020EECDu); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x360020ED;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("in eax, dx", 0x0020EED5u); /* TODO: in eax, dx */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("in eax, dx", 0x0020EED9u); /* TODO: in eax, dx */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, eax);
    RECOMP_UNIMPL("in eax, dx", 0x0020EEDDu); /* TODO: in eax, dx */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xED7A0020u);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebp = ebp;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("pushfd", 0x0020EEECu); /* TODO: pushfd */
    RECOMP_UNIMPL("in eax, dx", 0x0020EEEDu); /* TODO: in eax, dx */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esi); esi += RECOMP_DF_STEP(4); /* lodsd */
    RECOMP_UNIMPL("in eax, dx", 0x0020EEF1u); /* TODO: in eax, dx */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    RECOMP_UNIMPL("out dx, al", 0x0020EEF5u); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    RECOMP_UNIMPL("out dx, al", 0x0020EEF9u); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = 0xCF0020EDu;
    RECOMP_UNIMPL("in eax, dx", 0x0020EF01u); /* TODO: in eax, dx */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx -= 1; /* loopne: count down */
    if ((ecx != 0) && ((_fa != 0))) (void)0; /* goto loc_0020EEF3 - dead code, label not in function */ /* loopne: ecx is non-zero and zero flag clear */

loc_0020EF06: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("int1", 0x0020EF08u); /* TODO: int1 */
    RECOMP_UNIMPL("in eax, dx", 0x0020EF09u); /* TODO: in eax, dx */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(edx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(ebp) + (uint64_t)(esi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xEE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0xAC0020EEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    RECOMP_UNIMPL("out dx, al", 0x0020EF1Du); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("out dx, al", 0x0020EF21u); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    RECOMP_UNIMPL("out dx, al", 0x0020EF25u); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x790020EE);
    RECOMP_UNIMPL("out dx, al", 0x0020EF2Du); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_HI8(ecx, HI8(edx));
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    /* wait - FPU sync */
    RECOMP_UNIMPL("out dx, al", 0x0020EF35u); /* TODO: out dx, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F012; /* je: equal / zero */

loc_0020EFDB: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0xD));
    edx = edx - 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F001; /* je: equal / zero */

loc_0020EFE4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020EFF0; /* je: equal / zero */

loc_0020EFE7: ;
    eax = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020EFF0: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0020EFFBu); RECOMP_ABI_CALL(0x000117A3u, sub_000117A3); /* call 0x000117A3 */

loc_0020EFFB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F001: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x0020F00Cu); RECOMP_ABI_CALL(0x000117A3u, sub_000117A3); /* call 0x000117A3 */

loc_0020F00C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F012: ;
    eax = 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F030
 * Original: 0x0020F030 - 0x0020F091 (97 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F030: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F088; /* je: equal / zero */

loc_0020F03B: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F077; /* je: equal / zero */

loc_0020F044: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020F066; /* je: equal / zero */

loc_0020F047: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F055; /* je: equal / zero */

loc_0020F04C: ;
    eax = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F055: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0020F060u); RECOMP_ABI_CALL(0x0002FCB2u, sub_0002FCB2); /* call 0x0002FCB2 */

loc_0020F060: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F066: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0020F071u); RECOMP_ABI_CALL(0x0002FCB2u, sub_0002FCB2); /* call 0x0002FCB2 */

loc_0020F071: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F077: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020F082u); RECOMP_ABI_CALL(0x0002FCB2u, sub_0002FCB2); /* call 0x0002FCB2 */

loc_0020F082: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F088: ;
    eax = 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F0B0
 * Original: 0x0020F0B0 - 0x0020F12B (123 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F0B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F122; /* je: equal / zero */

loc_0020F0BB: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFECu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020F119; /* ja: above (unsigned >) */

loc_0020F0C7: ;
    edx = ZX8(MEM8(edx + 0x20F140));
    { uint32_t _jt = MEM32(edx * 4 + 0x20F12C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0020F0D5u) goto loc_0020F0D5;
    if (_jt == 0x0020F0E6u) goto loc_0020F0E6;
    if (_jt == 0x0020F0F7u) goto loc_0020F0F7;
    if (_jt == 0x0020F108u) goto loc_0020F108;
    if (_jt == 0x0020F119u) goto loc_0020F119;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020F0D5: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x0020F0E0u); RECOMP_ABI_CALL(0x0001B334u, sub_0001B334); /* call 0x0001B334 */

loc_0020F0E0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F0E6: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0020F0F1u); RECOMP_ABI_CALL(0x0001B334u, sub_0001B334); /* call 0x0001B334 */

loc_0020F0F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F0F7: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0020F102u); RECOMP_ABI_CALL(0x0002E330u, sub_0002E330); /* call 0x0002E330 */

loc_0020F102: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F108: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x0020F113u); RECOMP_ABI_CALL(0x0001B334u, sub_0001B334); /* call 0x0001B334 */

loc_0020F113: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F119: ;
    eax = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F122: ;
    eax = 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F240
 * Original: 0x0020F240 - 0x0020F2B5 (117 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F2AA; /* je: equal / zero */

loc_0020F24F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F292; /* je: equal / zero */

loc_0020F258: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x22 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F26A; /* je: equal / zero */

loc_0020F25D: ;
    POP32(esp, edi);
    MEM8(esi) = LO8(ebx);
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020F26A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0020F27Bu); RECOMP_ABI_CALL(0x0001711Cu, sub_0001711C); /* call 0x0001711C */

loc_0020F27B: ;
    ecx = MEM32(edi + 4);
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0020F289u); RECOMP_ABI_CALL(0x0001711Cu, sub_0001711C); /* call 0x0001711C */

loc_0020F289: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020F292: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F2A2u); RECOMP_ABI_CALL(0x0001711Cu, sub_0001711C); /* call 0x0001711C */

loc_0020F2A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020F2AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F2E0
 * Original: 0x0020F2E0 - 0x0020F32D (77 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F2E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F323; /* je: equal / zero */

loc_0020F2EC: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F2FF; /* je: equal / zero */

loc_0020F2F3: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020F2FF: ;
    ecx = MEM32(ecx + 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F316u); RECOMP_ABI_CALL(0x0002CA99u, sub_0002CA99); /* call 0x0002CA99 */

loc_0020F316: ;
    ecx = MEM32(esp + 0x14);
    eax = edi;
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020F323: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F340
 * Original: 0x0020F340 - 0x0020F360 (32 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020F340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F340: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F35B; /* jne: not equal / not zero */

loc_0020F347: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020F35Bu); RECOMP_ABI_CALL(0x000337B8u, sub_000337B8); /* call 0x000337B8 */

loc_0020F35B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F370
 * Original: 0x0020F370 - 0x0020F46D (253 bytes, 85 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020F370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F370: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF6u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020F468; /* ja: above (unsigned >) */

loc_0020F380: ;
    eax = ZX8(MEM8(eax + 0x20F498));
    { uint32_t _jt = MEM32(eax * 4 + 0x20F470); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0020F38Eu) goto loc_0020F38E;
    if (_jt == 0x0020F3A7u) goto loc_0020F3A7;
    if (_jt == 0x0020F3C0u) goto loc_0020F3C0;
    if (_jt == 0x0020F3D9u) goto loc_0020F3D9;
    if (_jt == 0x0020F3F2u) goto loc_0020F3F2;
    if (_jt == 0x0020F40Bu) goto loc_0020F40B;
    if (_jt == 0x0020F424u) goto loc_0020F424;
    if (_jt == 0x0020F43Du) goto loc_0020F43D;
    if (_jt == 0x0020F455u) goto loc_0020F455;
    if (_jt == 0x0020F468u) goto loc_0020F468;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020F38E: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F3A2u); RECOMP_ABI_CALL(0x0002BD9Cu, sub_0002BD9C); /* call 0x0002BD9C */

loc_0020F3A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0020F3A7: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F3BBu); RECOMP_ABI_CALL(0x0002BD9Cu, sub_0002BD9C); /* call 0x0002BD9C */

loc_0020F3BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0020F3C0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F3D4u); RECOMP_ABI_CALL(0x0002BD9Cu, sub_0002BD9C); /* call 0x0002BD9C */

loc_0020F3D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0020F3D9: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F3EDu); RECOMP_ABI_CALL(0x0002BD9Cu, sub_0002BD9C); /* call 0x0002BD9C */

loc_0020F3ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0020F3F2: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F406u); RECOMP_ABI_CALL(0x0002BD9Cu, sub_0002BD9C); /* call 0x0002BD9C */

loc_0020F406: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0020F40B: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F41Fu); RECOMP_ABI_CALL(0x0002BD9Cu, sub_0002BD9C); /* call 0x0002BD9C */

loc_0020F41F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0020F424: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F438u); RECOMP_ABI_CALL(0x0002BD9Cu, sub_0002BD9C); /* call 0x0002BD9C */

loc_0020F438: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0020F43D: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020F44Au); RECOMP_ABI_CALL(0x00035766u, sub_00035766); /* call 0x00035766 */

loc_0020F44A: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0020F455: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020F462u); RECOMP_ABI_CALL(0x00028A89u, sub_00028A89); /* call 0x00028A89 */

loc_0020F462: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;

loc_0020F468: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020F564
 * Original: 0x0020F564 - 0x0020F56C (8 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F564(void)
{

loc_0020F564: ;
    eax = 2;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F580
 * Original: 0x0020F580 - 0x0020F5B4 (52 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F580: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F5AC; /* je: equal / zero */

loc_0020F58A: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F5A3; /* je: equal / zero */

loc_0020F593: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020F5A3; /* je: equal / zero */

loc_0020F596: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F5A3; /* je: equal / zero */

loc_0020F59B: ;
    eax = 3;
    esp += 12; return; /* ret 8 */

loc_0020F5A3: ;
    MEM32(edx) = 0x14;
    esp += 12; return; /* ret 8 */

loc_0020F5AC: ;
    eax = 2;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F5D0
 * Original: 0x0020F5D0 - 0x0020F630 (96 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F5D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F627; /* je: equal / zero */

loc_0020F5DB: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F616; /* je: equal / zero */

loc_0020F5E3: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F605; /* je: equal / zero */

loc_0020F5E8: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020F5F4; /* je: equal / zero */

loc_0020F5EB: ;
    eax = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F5F4: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0020F5FFu); RECOMP_ABI_CALL(0x00017AC7u, sub_00017AC7); /* call 0x00017AC7 */

loc_0020F5FF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F605: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0020F610u); RECOMP_ABI_CALL(0x00017AC7u, sub_00017AC7); /* call 0x00017AC7 */

loc_0020F610: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F616: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020F621u); RECOMP_ABI_CALL(0x00017AC7u, sub_00017AC7); /* call 0x00017AC7 */

loc_0020F621: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F627: ;
    eax = 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F650
 * Original: 0x0020F650 - 0x0020F858 (520 bytes, 195 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F650: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020F84D; /* ja: above (unsigned >) */

loc_0020F663: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20F858); /* switch: 26 entries, 24 targets */
    if (_jt == 0x0020F66Au) goto loc_0020F66A;
    if (_jt == 0x0020F67Fu) goto loc_0020F67F;
    if (_jt == 0x0020F694u) goto loc_0020F694;
    if (_jt == 0x0020F6A9u) goto loc_0020F6A9;
    if (_jt == 0x0020F6BEu) goto loc_0020F6BE;
    if (_jt == 0x0020F6D3u) goto loc_0020F6D3;
    if (_jt == 0x0020F6E8u) goto loc_0020F6E8;
    if (_jt == 0x0020F6FDu) goto loc_0020F6FD;
    if (_jt == 0x0020F712u) goto loc_0020F712;
    if (_jt == 0x0020F727u) goto loc_0020F727;
    if (_jt == 0x0020F73Cu) goto loc_0020F73C;
    if (_jt == 0x0020F751u) goto loc_0020F751;
    if (_jt == 0x0020F766u) goto loc_0020F766;
    if (_jt == 0x0020F77Bu) goto loc_0020F77B;
    if (_jt == 0x0020F790u) goto loc_0020F790;
    if (_jt == 0x0020F7A5u) goto loc_0020F7A5;
    if (_jt == 0x0020F7BAu) goto loc_0020F7BA;
    if (_jt == 0x0020F7CFu) goto loc_0020F7CF;
    if (_jt == 0x0020F7E4u) goto loc_0020F7E4;
    if (_jt == 0x0020F7F9u) goto loc_0020F7F9;
    if (_jt == 0x0020F80Eu) goto loc_0020F80E;
    if (_jt == 0x0020F823u) goto loc_0020F823;
    if (_jt == 0x0020F838u) goto loc_0020F838;
    if (_jt == 0x0020F84Du) goto loc_0020F84D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020F66A: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0020F679u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F679: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F67F: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0020F68Eu); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F68E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F694: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0020F6A3u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F6A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F6A9: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0020F6B8u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F6B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F6BE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0020F6CDu); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F6CD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F6D3: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0020F6E2u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F6E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F6E8: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0020F6F7u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F6F7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F6FD: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0020F70Cu); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F70C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F712: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0020F721u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F721: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F727: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0020F736u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F736: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F73C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0020F74Bu); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F74B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F751: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x0020F760u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F760: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F766: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0020F775u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F775: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F77B: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0020F78Au); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F78A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F790: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x0020F79Fu); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F79F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F7A5: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x0020F7B4u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F7B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F7BA: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0020F7C9u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F7C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F7CF: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x0020F7DEu); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F7DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F7E4: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x0020F7F3u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F7F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F7F9: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x0020F808u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F808: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F80E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0020F81Du); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F81D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F823: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x0020F832u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F832: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F838: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x0020F847u); RECOMP_ABI_CALL(0x0001653Cu, sub_0001653C); /* call 0x0001653C */

loc_0020F847: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F84D: ;
    esi = 3;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F9C0
 * Original: 0x0020F9C0 - 0x0020FA21 (97 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F9C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FA18; /* je: equal / zero */

loc_0020F9CB: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020FA07; /* je: equal / zero */

loc_0020F9D4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020F9F6; /* je: equal / zero */

loc_0020F9D7: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020F9E5; /* je: equal / zero */

loc_0020F9DC: ;
    eax = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F9E5: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0020F9F0u); RECOMP_ABI_CALL(0x00020CE4u, sub_00020CE4); /* call 0x00020CE4 */

loc_0020F9F0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020F9F6: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0020FA01u); RECOMP_ABI_CALL(0x00020CE4u, sub_00020CE4); /* call 0x00020CE4 */

loc_0020FA01: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020FA07: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020FA12u); RECOMP_ABI_CALL(0x00020CE4u, sub_00020CE4); /* call 0x00020CE4 */

loc_0020FA12: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020FA18: ;
    eax = 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FA40
 * Original: 0x0020FA40 - 0x0020FA9E (94 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FA40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FA89; /* je: equal / zero */

loc_0020FA4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x42 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FA74; /* je: equal / zero */

loc_0020FA51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x45 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FA5F; /* je: equal / zero */

loc_0020FA56: ;
    eax = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020FA5F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0020FA6Eu); RECOMP_ABI_CALL(0x00037D4Au, sub_00037D4A); /* call 0x00037D4A */

loc_0020FA6E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020FA74: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x0020FA83u); RECOMP_ABI_CALL(0x00037D4Au, sub_00037D4A); /* call 0x00037D4A */

loc_0020FA83: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020FA89: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0020FA98u); RECOMP_ABI_CALL(0x00031EA9u, sub_00031EA9); /* call 0x00031EA9 */

loc_0020FA98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FAC0
 * Original: 0x0020FAC0 - 0x0020FAD3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0020FACBu); RECOMP_ABI_CALL(0x00026A09u, sub_00026A09); /* call 0x00026A09 */

loc_0020FACB: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0020FAE0
 * Original: 0x0020FAE0 - 0x0020FAF3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FAE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0020FAEBu); RECOMP_ABI_CALL(0x00017135u, sub_00017135); /* call 0x00017135 */

loc_0020FAEB: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0020FB00
 * Original: 0x0020FB00 - 0x0020FB08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB00: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000119AB(); return; /* tail jmp 0x000119AB */

}

/**
 * sub_0020FB10
 * Original: 0x0020FB10 - 0x0020FB18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB10: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00026464(); return; /* tail jmp 0x00026464 */

}

/**
 * sub_0020FB20
 * Original: 0x0020FB20 - 0x0020FB28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB20: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0001F885(); return; /* tail jmp 0x0001F885 */

}

/**
 * sub_0020FB30
 * Original: 0x0020FB30 - 0x0020FB35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB30: ;
    g_seh_ebp = ebp; sub_000228F0(); return; /* tail jmp 0x000228F0 */

}

/**
 * sub_0020FB40
 * Original: 0x0020FB40 - 0x0020FB45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB40: ;
    g_seh_ebp = ebp; sub_00016438(); return; /* tail jmp 0x00016438 */

}

/**
 * sub_0020FB50
 * Original: 0x0020FB50 - 0x0020FB55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB50: ;
    g_seh_ebp = ebp; sub_00013F08(); return; /* tail jmp 0x00013F08 */

}

/**
 * sub_0020FB60
 * Original: 0x0020FB60 - 0x0020FB65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB60: ;
    g_seh_ebp = ebp; sub_0002D2C3(); return; /* tail jmp 0x0002D2C3 */

}

/**
 * sub_0020FB70
 * Original: 0x0020FB70 - 0x0020FB75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB70: ;
    g_seh_ebp = ebp; sub_0002C7E2(); return; /* tail jmp 0x0002C7E2 */

}

/**
 * sub_0020FB80
 * Original: 0x0020FB80 - 0x0020FB88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB80: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000147AA(); return; /* tail jmp 0x000147AA */

}

/**
 * sub_0020FB90
 * Original: 0x0020FB90 - 0x0020FB98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FB90: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00022EB8(); return; /* tail jmp 0x00022EB8 */

}

/**
 * sub_0020FBA0
 * Original: 0x0020FBA0 - 0x0020FBB5 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FBA0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020FBAFu); RECOMP_ABI_CALL(0x00014EDAu, sub_00014EDA); /* call 0x00014EDA */

loc_0020FBAF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FBC0
 * Original: 0x0020FBC0 - 0x0020FBD5 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FBC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020FBCFu); RECOMP_ABI_CALL(0x0001AF24u, sub_0001AF24); /* call 0x0001AF24 */

loc_0020FBCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FBE0
 * Original: 0x0020FBE0 - 0x0020FBF5 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FBE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020FBEFu); RECOMP_ABI_CALL(0x0002B77Fu, sub_0002B77F); /* call 0x0002B77F */

loc_0020FBEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FC00
 * Original: 0x0020FC00 - 0x0020FC15 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FC00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020FC0Fu); RECOMP_ABI_CALL(0x0002C62Au, sub_0002C62A); /* call 0x0002C62A */

loc_0020FC0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FC20
 * Original: 0x0020FC20 - 0x0020FCD4 (180 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FC20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFE3u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE3u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020FCD1; /* ja: above (unsigned >) */

loc_0020FC30: ;
    eax = ZX8(MEM8(eax + 0x20FCEC));
    { uint32_t _jt = MEM32(eax * 4 + 0x20FCD4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0020FC3Eu) goto loc_0020FC3E;
    if (_jt == 0x0020FC5Cu) goto loc_0020FC5C;
    if (_jt == 0x0020FC7Au) goto loc_0020FC7A;
    if (_jt == 0x0020FC98u) goto loc_0020FC98;
    if (_jt == 0x0020FCB6u) goto loc_0020FCB6;
    if (_jt == 0x0020FCD1u) goto loc_0020FCD1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020FC3E: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax * 8 + 0x7F8720);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(eax * 8 + 0x7F8724);
    MEM32(ecx + 4) = eax;
    esp += 16; return; /* ret 12 */

loc_0020FC5C: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax * 8 + 0x7F8870);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(eax * 8 + 0x7F8874);
    MEM32(ecx + 4) = eax;
    esp += 16; return; /* ret 12 */

loc_0020FC7A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax * 8 + 0x7F8838);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(eax * 8 + 0x7F883C);
    MEM32(ecx + 4) = eax;
    esp += 16; return; /* ret 12 */

loc_0020FC98: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax * 8 + 0x7F88C0);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(eax * 8 + 0x7F88C4);
    MEM32(ecx + 4) = eax;
    esp += 16; return; /* ret 12 */

loc_0020FCB6: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax * 8 + 0x7F8900);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(eax * 8 + 0x7F8904);
    MEM32(ecx + 4) = eax;

loc_0020FCD1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020FD60
 * Original: 0x0020FD60 - 0x0020FD84 (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FD60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0020FD6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020FD69u); } /* indirect call */
    }

loc_0020FD6F: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020FD80; /* jb: below (unsigned <) */

loc_0020FD77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020FD80; /* ja: above (unsigned >) */

loc_0020FD7C: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0020FD80: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020FD90
 * Original: 0x0020FD90 - 0x0020FDDE (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020FD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FD90: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFE3u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE3u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE3u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0020FDD9; /* ja: above (unsigned >) */

loc_0020FD9C: ;
    eax = ZX8(MEM8(eax + 0x20FDF8));
    { uint32_t _jt = MEM32(eax * 4 + 0x20FDE0); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0020FDAAu) goto loc_0020FDAA;
    if (_jt == 0x0020FDB9u) goto loc_0020FDB9;
    if (_jt == 0x0020FDC1u) goto loc_0020FDC1;
    if (_jt == 0x0020FDC9u) goto loc_0020FDC9;
    if (_jt == 0x0020FDD1u) goto loc_0020FDD1;
    if (_jt == 0x0020FDD9u) goto loc_0020FDD9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020FDAA: ;
    PUSH32(esp, 0x0020FDAFu); RECOMP_ABI_CALL(0x00014971u, sub_00014971); /* call 0x00014971 */

loc_0020FDAF: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0020FDB9: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_0020FDC1: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_0020FDC9: ;
    eax = 0x19;
    esp += 8; return; /* ret 4 */

loc_0020FDD1: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_0020FDD9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FDDE
 * Original: 0x0020FDDE - 0x0020FE98 (186 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FDDE(void)
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

loc_0020FDDE: ;
    edi = edi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_df = 1; /* std */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((0x20) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -922738435) = MEM8(ecx + -922738435) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx + -922738435)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_df = 1; /* std */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x5020501) = MEM8(0x5020501) + LO8(eax);
    _fa = (uint32_t)(MEM8(0x5020501)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xCC040305u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCC040305u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020FE7A; /* je: equal / zero */

loc_0020FE59: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020FE95; /* jne: not equal / not zero */

loc_0020FE5C: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax * 8 + 0x7F8808);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(eax * 8 + 0x7F880C);
    MEM32(ecx + 4) = eax;
    esp += 16; return; /* ret 12 */

loc_0020FE7A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax * 8 + 0x7F8748);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(eax * 8 + 0x7F874C);
    MEM32(ecx + 4) = eax;

loc_0020FE95: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020FEB0
 * Original: 0x0020FEB0 - 0x0020FECD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FEB0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020FEC5; /* je: equal / zero */

loc_0020FEBA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020FECA; /* jne: not equal / not zero */

loc_0020FEBD: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_0020FEC5: ;
    eax = 0x18;

loc_0020FECA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FEE0
 * Original: 0x0020FEE0 - 0x0020FEE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FEE0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0001308F(); return; /* tail jmp 0x0001308F */

}

/**
 * sub_0020FEF0
 * Original: 0x0020FEF0 - 0x0020FF00 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FEF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FEFAu); RECOMP_ABI_CALL(0x000228A5u, sub_000228A5); /* call 0x000228A5 */

loc_0020FEFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FF10
 * Original: 0x0020FF10 - 0x0020FF20 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FF10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FF1Au); RECOMP_ABI_CALL(0x00014278u, sub_00014278); /* call 0x00014278 */

loc_0020FF1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FF30
 * Original: 0x0020FF30 - 0x0020FF40 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FF30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FF3Au); RECOMP_ABI_CALL(0x00020C49u, sub_00020C49); /* call 0x00020C49 */

loc_0020FF3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FF50
 * Original: 0x0020FF50 - 0x0020FF60 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FF50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FF5Au); RECOMP_ABI_CALL(0x00029196u, sub_00029196); /* call 0x00029196 */

loc_0020FF5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FF5D
 * Original: 0x0020FF5D - 0x0020FF60 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF5D(void)
{

loc_0020FF5D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FF70
 * Original: 0x0020FF70 - 0x0020FF80 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FF70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FF7Au); RECOMP_ABI_CALL(0x0001D4D6u, sub_0001D4D6); /* call 0x0001D4D6 */

loc_0020FF7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FF90
 * Original: 0x0020FF90 - 0x0020FFA0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FF90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FF9Au); RECOMP_ABI_CALL(0x0001D701u, sub_0001D701); /* call 0x0001D701 */

loc_0020FF9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FFB0
 * Original: 0x0020FFB0 - 0x0020FFC0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FFB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FFBAu); RECOMP_ABI_CALL(0x0001E377u, sub_0001E377); /* call 0x0001E377 */

loc_0020FFBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FFD0
 * Original: 0x0020FFD0 - 0x00210018 (72 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FFD0: ;
    ecx = MEM32(esp + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020FFDFu); RECOMP_ABI_CALL(0x00033989u, sub_00033989); /* call 0x00033989 */

loc_0020FFDF: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0021000B; /* je: equal / zero */

loc_0020FFEB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020FFFE; /* je: equal / zero */

loc_0020FFEE: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00210015; /* jne: not equal / not zero */

loc_0020FFF1: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 2;
    esp += 12; return; /* ret 8 */

loc_0020FFFE: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 1;
    esp += 12; return; /* ret 8 */

loc_0021000B: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0;

loc_00210015: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210002
 * Original: 0x00210002 - 0x00210018 (22 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210002(void)
{

loc_00210002: ;
    MEM32(ecx) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210030
 * Original: 0x00210030 - 0x00210040 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021003Au); RECOMP_ABI_CALL(0x0002688Du, sub_0002688D); /* call 0x0002688D */

loc_0021003A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210050
 * Original: 0x00210050 - 0x00210065 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210050: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021005Fu); RECOMP_ABI_CALL(0x0003075Cu, sub_0003075C); /* call 0x0003075C */

loc_0021005F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210070
 * Original: 0x00210070 - 0x002100A0 (48 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210070: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0021007Eu); RECOMP_ABI_CALL(0x00013526u, sub_00013526); /* call 0x00013526 */

loc_0021007E: ;
    eax = MEM32(esp + 0xD8);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x0021008Fu); RECOMP_ABI_CALL(0x00032A9Du, sub_00032A9D); /* call 0x00032A9D */

loc_0021008F: ;
    ecx = esp;
    PUSH32(esp, 0x00210097u); RECOMP_ABI_CALL(0x00021969u, sub_00021969); /* call 0x00021969 */

loc_00210097: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002100B0
 * Original: 0x002100B0 - 0x002100E8 (56 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002100B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002100B0: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x002100BEu); RECOMP_ABI_CALL(0x00013526u, sub_00013526); /* call 0x00013526 */

loc_002100BE: ;
    eax = MEM32(esp + 0xDC);
    ecx = MEM32(esp + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x002100D7u); RECOMP_ABI_CALL(0x0002AB4Au, sub_0002AB4A); /* call 0x0002AB4A */

loc_002100D7: ;
    ecx = esp;
    PUSH32(esp, 0x002100DFu); RECOMP_ABI_CALL(0x00021969u, sub_00021969); /* call 0x00021969 */

loc_002100DF: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210100
 * Original: 0x00210100 - 0x00210130 (48 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210100: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0021010Eu); RECOMP_ABI_CALL(0x00013526u, sub_00013526); /* call 0x00013526 */

loc_0021010E: ;
    eax = MEM32(esp + 0xD8);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x0021011Fu); RECOMP_ABI_CALL(0x00034E29u, sub_00034E29); /* call 0x00034E29 */

loc_0021011F: ;
    ecx = esp;
    PUSH32(esp, 0x00210127u); RECOMP_ABI_CALL(0x00021969u, sub_00021969); /* call 0x00021969 */

loc_00210127: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210140
 * Original: 0x00210140 - 0x00210147 (7 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210140(void)
{

loc_00210140: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210150
 * Original: 0x00210150 - 0x002101C5 (117 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00210150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210150: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002101C0; /* ja: above (unsigned >) */

loc_00210159: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2101C8); /* switch: 13 entries, 13 targets */
    if (_jt == 0x00210160u) goto loc_00210160;
    if (_jt == 0x00210168u) goto loc_00210168;
    if (_jt == 0x00210170u) goto loc_00210170;
    if (_jt == 0x00210178u) goto loc_00210178;
    if (_jt == 0x00210180u) goto loc_00210180;
    if (_jt == 0x00210188u) goto loc_00210188;
    if (_jt == 0x00210190u) goto loc_00210190;
    if (_jt == 0x00210198u) goto loc_00210198;
    if (_jt == 0x002101A0u) goto loc_002101A0;
    if (_jt == 0x002101A8u) goto loc_002101A8;
    if (_jt == 0x002101B0u) goto loc_002101B0;
    if (_jt == 0x002101B8u) goto loc_002101B8;
    if (_jt == 0x002101C0u) goto loc_002101C0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00210160: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00210168: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_00210170: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_00210178: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_00210180: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_00210188: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_00210190: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_00210198: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_002101A0: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_002101A8: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_002101B0: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

loc_002101B8: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_002101C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210240
 * Original: 0x00210240 - 0x00210246 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210240(void)
{

loc_00210240: ;
    eax = 0x7C5;
    esp += 4; return; /* ret */

}

/**
 * sub_00210250
 * Original: 0x00210250 - 0x0021025F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210250: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021025E; /* jl: less (signed <) */

loc_00210258: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021025E; /* jg: greater (signed >) */

loc_0021025C: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0021025E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00210270
 * Original: 0x00210270 - 0x002103AD (317 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00210270: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x200));
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00210282u); RECOMP_ABI_CALL(0x0001EDEFu, sub_0001EDEF); /* call 0x0001EDEF */

loc_00210282: ;
    eax = MEM32(eax * 8 + 0x7FEF1C);
    edx = esp + 0x104;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00210295: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00210295; /* jne: not equal / not zero */

loc_0021029F: ;
    edx = MEM32(esp + 0x208);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002102AEu); RECOMP_ABI_CALL(0x0001EDEFu, sub_0001EDEF); /* call 0x0001EDEF */

loc_002102AE: ;
    eax = MEM32(eax * 8 + 0x7FEF1C);
    edx = esp + 0x184;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002102C1: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002102C1; /* jne: not equal / not zero */

loc_002102CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002102D2u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002102D2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x111;
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x002102E8u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002102E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002102F3u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002102F3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esp + 0x191;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021030Au); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0021030A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00210315u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00210315: ;
    SET_LO8(eax, MEM8(esp + 8));
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00210377; /* je: equal / zero */

loc_0021031F: ;
    /* nop */

loc_00210320: ;
    SET_LO8(eax, MEM8(esp + esi + 0x88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00210377; /* je: equal / zero */

loc_0021032B: ;
    SET_LO8(ebx, MEM8(esp + esi + 8));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x61 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0021033E; /* jl: less (signed <) */

loc_00210336: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x7A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0021033E; /* jg: greater (signed >) */

loc_0021033B: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(edx)) < (uint32_t)(0x20));
    SET_LO8(edx, LO8(edx) - 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0021033E: ;
    SET_LO8(ecx, LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0021034D; /* jl: less (signed <) */

loc_00210345: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0021034D; /* jg: greater (signed >) */

loc_0021034A: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(ecx)) < (uint32_t)(0x20));
    SET_LO8(ecx, LO8(ecx) - 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0021034D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0021039F; /* jg: greater (signed >) */

loc_00210351: ;
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00210360; /* jl: less (signed <) */

loc_00210358: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00210360; /* jg: greater (signed >) */

loc_0021035D: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(ecx)) < (uint32_t)(0x20));
    SET_LO8(ecx, LO8(ecx) - 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_00210360: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0021036A; /* jl: less (signed <) */

loc_00210364: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0021036A; /* jg: greater (signed >) */

loc_00210368: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x20));
    SET_LO8(eax, LO8(eax) - 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0021036A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00210393; /* jl: less (signed <) */

loc_0021036E: ;
    SET_LO8(eax, MEM8(esp + esi + 9));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00210320; /* jne: not equal / not zero */

loc_00210377: ;
    SET_LO8(eax, MEM8(esp + esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0021039F; /* jne: not equal / not zero */

loc_0021037F: ;
    SET_LO8(eax, MEM8(esp + esi + 0x88));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x200)) >> 32) & 1);
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00210393: ;
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x200)) >> 32) & 1);
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021039F: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x200)) >> 32) & 1);
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00210400
 * Original: 0x00210400 - 0x00210433 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00210409u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00210409: ;
    PUSH32(esp, 0x0021040Eu); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_0021040E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210430; /* je: equal / zero */

loc_00210415: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0x12D1A);
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x57);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021042Au); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_0021042A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = edi;

loc_00210430: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00210440
 * Original: 0x00210440 - 0x00210498 (88 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x00210452u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021044Cu); } /* indirect call */
    }

loc_00210452: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00210490; /* jle: less or equal (signed <=) */

loc_00210456: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00210460: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210487; /* je: equal / zero */

loc_00210468: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x84;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x00210479u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210473u); } /* indirect call */
    }

loc_00210479: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00210460; /* jl: less (signed <) */

loc_0021047D: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00210487: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00210490: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002104B0
 * Original: 0x002104B0 - 0x002104C3 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002104B0(void)
{

loc_002104B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    eax = MEM32(eax + ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002104D0
 * Original: 0x002104D0 - 0x002104E4 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002104D0(void)
{

loc_002104D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    eax = eax + ecx + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002104F0
 * Original: 0x002104F0 - 0x00210500 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002104F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002104F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002104FAu); RECOMP_ABI_CALL(0x00034465u, sub_00034465); /* call 0x00034465 */

loc_002104FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210510
 * Original: 0x00210510 - 0x00210516 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210510(void)
{

loc_00210510: ;
    eax = 0x57;
    esp += 4; return; /* ret */

}

/**
 * sub_00210520
 * Original: 0x00210520 - 0x0021053A (26 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210520: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00210534u); RECOMP_ABI_CALL(0x00014C96u, sub_00014C96); /* call 0x00014C96 */

loc_00210534: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00210540
 * Original: 0x00210540 - 0x00210565 (37 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210540: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x120); PUSH32(esp, 0x0021054Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210547u); } /* indirect call */
    }

loc_0021054D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40004);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x0021055Fu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_0021055F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210570
 * Original: 0x00210570 - 0x00210595 (37 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210570: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x0021057Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210577u); } /* indirect call */
    }

loc_0021057D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4000B);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x0021058Fu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_0021058F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002105A0
 * Original: 0x002105A0 - 0x002105C5 (37 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002105A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002105A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x11C); PUSH32(esp, 0x002105ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002105A7u); } /* indirect call */
    }

loc_002105AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40003);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x002105BFu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_002105BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002105D0
 * Original: 0x002105D0 - 0x002105E7 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002105D0(void)
{

loc_002105D0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x002105DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002105D7u); } /* indirect call */
    }

loc_002105DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002105E3u); RECOMP_ABI_CALL(0x00034EC9u, sub_00034EC9); /* call 0x00034EC9 */

loc_002105E3: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002105F0
 * Original: 0x002105F0 - 0x002105FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002105F0(void)
{

loc_002105F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210600
 * Original: 0x00210600 - 0x00210604 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210600(void)
{

loc_00210600: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00210610
 * Original: 0x00210610 - 0x00210674 (100 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210610: ;
    eax = MEM32(esp + 8);
    edx = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210663; /* je: equal / zero */

loc_0021061D: ;
    edx = MEM32(ecx + 0x10);
    eax = edx;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0021065C; /* je: equal / zero */

loc_00210627: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00210644; /* je: equal / zero */

loc_0021062C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx + 0x10) = 2;
    PUSH32(esp, 0x0021063Eu); RECOMP_ABI_CALL(0x0002B027u, sub_0002B027); /* call 0x0002B027 */

loc_0021063E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00210644: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx + 0x10) = 0;
    PUSH32(esp, 0x00210656u); RECOMP_ABI_CALL(0x0002B027u, sub_0002B027); /* call 0x0002B027 */

loc_00210656: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0021065C: ;
    MEM32(ecx + 0x10) = 3;

loc_00210663: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021066Eu); RECOMP_ABI_CALL(0x0002B027u, sub_0002B027); /* call 0x0002B027 */

loc_0021066E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210690
 * Original: 0x00210690 - 0x00210694 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210690(void)
{

loc_00210690: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002106A0
 * Original: 0x002106A0 - 0x002106A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002106A0(void)
{

loc_002106A0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002106B0
 * Original: 0x002106B0 - 0x002106B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002106B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002106B0: ;
    g_seh_ebp = ebp; sub_00025320(); return; /* tail jmp 0x00025320 */

}

/**
 * sub_002106C0
 * Original: 0x002106C0 - 0x002106C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002106C0(void)
{

loc_002106C0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002106D0
 * Original: 0x002106D0 - 0x002106D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002106D0(void)
{

loc_002106D0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_002106E0
 * Original: 0x002106E0 - 0x002106E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002106E0(void)
{

loc_002106E0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002106F0
 * Original: 0x002106F0 - 0x002106F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002106F0(void)
{

loc_002106F0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00210700
 * Original: 0x00210700 - 0x00210704 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210700(void)
{

loc_00210700: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00210710
 * Original: 0x00210710 - 0x00210714 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210710(void)
{

loc_00210710: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00210720
 * Original: 0x00210720 - 0x00210724 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210720(void)
{

loc_00210720: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00210730
 * Original: 0x00210730 - 0x00210734 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210730(void)
{

loc_00210730: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00210740
 * Original: 0x00210740 - 0x0021074E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210740(void)
{

loc_00210740: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = ecx + eax * 4 + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210760
 * Original: 0x00210760 - 0x00210764 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210760(void)
{

loc_00210760: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00210770
 * Original: 0x00210770 - 0x00210774 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210770(void)
{

loc_00210770: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00210780
 * Original: 0x00210780 - 0x00210784 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210780(void)
{

loc_00210780: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00210790
 * Original: 0x00210790 - 0x00210799 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210790(void)
{

loc_00210790: ;
    eax = ecx;
    MEM32(eax) = 0x7FA120;
    esp += 4; return; /* ret */

}

/**
 * sub_002107A0
 * Original: 0x002107A0 - 0x002107A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002107A0(void)
{

loc_002107A0: ;
    MEM32(ecx) = 0x7FA120;
    esp += 4; return; /* ret */

}

/**
 * sub_002107B0
 * Original: 0x002107B0 - 0x002107B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002107B0(void)
{

loc_002107B0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002107C0
 * Original: 0x002107C0 - 0x002107C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002107C0(void)
{

loc_002107C0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_002107D0
 * Original: 0x002107D0 - 0x002107EF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002107D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002107D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FA120;
    if (TEST_Z(_fa, _fb)) goto loc_002107E9; /* je: equal / zero */

loc_002107E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002107E6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002107E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002107E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210800
 * Original: 0x00210800 - 0x0021080C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210800(void)
{

loc_00210800: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7F89C8);
    esp += 4; return; /* ret */

}

/**
 * sub_00210810
 * Original: 0x00210810 - 0x00210817 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210810(void)
{

loc_00210810: ;
    MEM32(ecx) = 0x7FA128;
    esp += 4; return; /* ret */

}

/**
 * sub_00210820
 * Original: 0x00210820 - 0x0021083F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210820: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FA128;
    if (TEST_Z(_fa, _fb)) goto loc_00210839; /* je: equal / zero */

loc_00210830: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00210836u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00210836: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00210839: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210850
 * Original: 0x00210850 - 0x00210857 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210850(void)
{

loc_00210850: ;
    MEM32(ecx) = 0x7FA1A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00210860
 * Original: 0x00210860 - 0x0021087F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210860: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FA1A0;
    if (TEST_Z(_fa, _fb)) goto loc_00210879; /* je: equal / zero */

loc_00210870: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00210876u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00210876: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00210879: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210890
 * Original: 0x00210890 - 0x00210897 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210890(void)
{

loc_00210890: ;
    MEM32(ecx) = 0x7FA288;
    esp += 4; return; /* ret */

}

/**
 * sub_002108A0
 * Original: 0x002108A0 - 0x002108BF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002108A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002108A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FA288;
    if (TEST_Z(_fa, _fb)) goto loc_002108B9; /* je: equal / zero */

loc_002108B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002108B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002108B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002108B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002108D0
 * Original: 0x002108D0 - 0x00210907 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002108D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002108D0: ;
    PUSH32(esp, 0x002108D5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002108D5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002108DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002108D9u); } /* indirect call */
    }

loc_002108DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002108E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002108E0u); } /* indirect call */
    }

loc_002108E3: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00210904; /* ja: above (unsigned >) */

loc_002108EB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x210908); /* switch: 10 entries, 4 targets */
    if (_jt == 0x002108F2u) goto loc_002108F2;
    if (_jt == 0x002108F8u) goto loc_002108F8;
    if (_jt == 0x002108FEu) goto loc_002108FE;
    if (_jt == 0x00210904u) goto loc_00210904;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002108F2: ;
    eax = 0x1E;
    esp += 4; return; /* ret */

loc_002108F8: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_002108FE: ;
    eax = 0xE;
    esp += 4; return; /* ret */

loc_00210904: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00210960
 * Original: 0x00210960 - 0x00210967 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210960(void)
{

loc_00210960: ;
    eax = MEM32(ecx + 0x21C);
    esp += 4; return; /* ret */

}

/**
 * sub_00210970
 * Original: 0x00210970 - 0x0021098E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210970: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00210978u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_00210978: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00210988; /* je: equal / zero */

loc_0021097F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00210985u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00210985: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00210988: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002109A0
 * Original: 0x002109A0 - 0x002109D1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002109A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002109A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002109CF; /* je: equal / zero */

loc_002109AA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002109B0u); RECOMP_ABI_CALL(0x00025320u, sub_00025320); /* call 0x00025320 */

loc_002109B0: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002109C7; /* je: equal / zero */

loc_002109B7: ;
    ecx = edi;
    PUSH32(esp, 0x002109BEu); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_002109BE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002109C4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002109C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002109C7: ;
    MEM32(esi + 4) = 0;
    POP32(esp, edi);

loc_002109CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002109E0
 * Original: 0x002109E0 - 0x00210A66 (134 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002109E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002109E0: ;
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002109F0u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_002109F0: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002109F9u); RECOMP_ABI_CALL(0x0001C63Fu, sub_0001C63F); /* call 0x0001C63F */

loc_002109F9: ;
    ecx = MEM32(esp + 0x150);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00210A0Fu); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00210A0F: ;
    eax = MEM32(esp + 0x154);
    esi = esp + 0x60;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_00210A20: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210A20; /* jne: not equal / not zero */

loc_00210A2A: ;
    edx = esp + 0x92;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_00210A34: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210A34; /* jne: not equal / not zero */

loc_00210A3E: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 4;
    PUSH32(esp, 0x00210A4Cu); RECOMP_ABI_CALL(0x00021FAEu, sub_00021FAE); /* call 0x00021FAE */

loc_00210A4C: ;
    ecx = esp;
    PUSH32(esp, 0x00210A54u); RECOMP_ABI_CALL(0x00022C0Bu, sub_00022C0B); /* call 0x00022C0B */

loc_00210A54: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00210A5Du); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00210A5D: ;
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210A90
 * Original: 0x00210A90 - 0x00210AC1 (49 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210A90: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00210AA4u); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_00210AA4: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00210AADu); RECOMP_ABI_CALL(0x00025569u, sub_00025569); /* call 0x00025569 */

loc_00210AAD: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x00210AB8u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_00210AB8: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210AD0
 * Original: 0x00210AD0 - 0x00210B06 (54 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210AD0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00210AE4u); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_00210AE4: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x00210AF2u); RECOMP_ABI_CALL(0x0002A87Fu, sub_0002A87F); /* call 0x0002A87F */

loc_00210AF2: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x00210AFDu); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_00210AFD: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210B20
 * Original: 0x00210B20 - 0x00210B51 (49 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210B20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00210B34u); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_00210B34: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00210B3Du); RECOMP_ABI_CALL(0x000183FAu, sub_000183FA); /* call 0x000183FA */

loc_00210B3D: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x00210B48u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_00210B48: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210B60
 * Original: 0x00210B60 - 0x00210B9B (59 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210B60: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00210B74u); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_00210B74: ;
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00210B87u); RECOMP_ABI_CALL(0x0001A55Bu, sub_0001A55B); /* call 0x0001A55B */

loc_00210B87: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x00210B92u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_00210B92: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00210BB0
 * Original: 0x00210BB0 - 0x00210BFD (77 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210BB0: ;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00210BC0u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00210BC0: ;
    ecx = MEM32(esp + 0x148);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00210BD6u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00210BD6: ;
    eax = MEM32(esp + 0x14C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00210BE8; /* jge: greater or equal (signed >=) */

loc_00210BE4: ;
    esi = MEM32(esp + eax * 4 + 0x18);

loc_00210BE8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00210BF1u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00210BF1: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210C10
 * Original: 0x00210C10 - 0x00210C52 (66 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210C10: ;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00210C20u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00210C20: ;
    ecx = MEM32(esp + 0x148);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00210C36u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00210C36: ;
    esi = MEM32(esp + 0xC8);
    ecx = esp + 4;
    PUSH32(esp, 0x00210C46u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00210C46: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210C70
 * Original: 0x00210C70 - 0x00210C94 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00210C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210C70: ;
    PUSH32(esp, 0x00210C75u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00210C75: ;
    ecx = eax;
    PUSH32(esp, 0x00210C7Cu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_00210C7C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x00210C86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210C80u); } /* indirect call */
    }

loc_00210C86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210C91; /* je: equal / zero */

loc_00210C8A: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001F0C4(); return; /* tail jmp 0x0001F0C4 */

loc_00210C91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00210CA0
 * Original: 0x00210CA0 - 0x00210CB6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210CA0: ;
    PUSH32(esp, 0x00210CA5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00210CA5: ;
    ecx = eax;
    PUSH32(esp, 0x00210CACu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_00210CAC: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xEC)); return; /* indirect tail jmp */

}

/**
 * sub_00210CC0
 * Original: 0x00210CC0 - 0x00210D02 (66 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210CC0: ;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00210CD0u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00210CD0: ;
    ecx = MEM32(esp + 0x148);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00210CE6u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00210CE6: ;
    esi = MEM32(esp + 0xC0);
    ecx = esp + 4;
    PUSH32(esp, 0x00210CF6u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00210CF6: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210D20
 * Original: 0x00210D20 - 0x00210E77 (343 bytes, 138 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210D20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00210DF2; /* ja: above (unsigned >) */

loc_00210D30: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x210E00); /* switch: 11 entries, 11 targets */
    if (_jt == 0x00210D37u) goto loc_00210D37;
    if (_jt == 0x00210D48u) goto loc_00210D48;
    if (_jt == 0x00210D59u) goto loc_00210D59;
    if (_jt == 0x00210D6Au) goto loc_00210D6A;
    if (_jt == 0x00210D7Bu) goto loc_00210D7B;
    if (_jt == 0x00210D8Cu) goto loc_00210D8C;
    if (_jt == 0x00210D9Du) goto loc_00210D9D;
    if (_jt == 0x00210DAEu) goto loc_00210DAE;
    if (_jt == 0x00210DBFu) goto loc_00210DBF;
    if (_jt == 0x00210DD0u) goto loc_00210DD0;
    if (_jt == 0x00210DE1u) goto loc_00210DE1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00210D37: ;
    ecx = MEM32(ecx + 8);
    eax = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210D48: ;
    ecx = MEM32(ecx + 8);
    eax = 2;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210D59: ;
    ecx = MEM32(ecx + 8);
    eax = 3;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210D6A: ;
    ecx = MEM32(ecx + 8);
    eax = 4;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210D7B: ;
    ecx = MEM32(ecx + 8);
    eax = 5;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210D8C: ;
    ecx = MEM32(ecx + 8);
    eax = 6;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210D9D: ;
    ecx = MEM32(ecx + 8);
    eax = 7;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210DAE: ;
    ecx = MEM32(ecx + 8);
    eax = 8;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210DBF: ;
    ecx = MEM32(ecx + 8);
    eax = 9;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210DD0: ;
    ecx = MEM32(ecx + 8);
    eax = 0xA;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210DE1: ;
    ecx = MEM32(ecx + 8);
    eax = 0xB;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

loc_00210DF2: ;
    ecx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003153A(); return; /* tail jmp 0x0003153A */

    RECOMP_UNIMPL("aaa", 0x00210E00u); /* TODO: aaa */
    eax = eax | 0xD480021;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) (void)0; /* goto loc_00210E17 - dead code, label not in function */ /* loope: ecx is non-zero and zero flag set */

loc_00210E0A: ;
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    eax = eax | 0xD6A0021;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (_flags /* jnp: not parity */) (void)0; /* goto loc_00210E23 - dead code, label not in function */

loc_00210E16: ;
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(0xD9D0021) = 0 /* seg:cs */;
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (LO8(eax) == MEM8(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasb */
    ecx = _rc; }
    eax = eax | 0xDBF0021;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(-859045855) = ROR8(MEM8(-859045855), 1);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00210E80
 * Original: 0x00210E80 - 0x00210FEB (363 bytes, 85 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210E80: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00210E97u); RECOMP_ABI_CALL(0x00035329u, sub_00035329); /* call 0x00035329 */

loc_00210E97: ;
    eax = MEM32(esp + 0x134);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00210FE2; /* ja: above (unsigned >) */

loc_00210EA8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x210FEC); /* switch: 12 entries, 12 targets */
    if (_jt == 0x00210EAFu) goto loc_00210EAF;
    if (_jt == 0x00210EC5u) goto loc_00210EC5;
    if (_jt == 0x00210EE7u) goto loc_00210EE7;
    if (_jt == 0x00210F09u) goto loc_00210F09;
    if (_jt == 0x00210F23u) goto loc_00210F23;
    if (_jt == 0x00210F3Cu) goto loc_00210F3C;
    if (_jt == 0x00210F55u) goto loc_00210F55;
    if (_jt == 0x00210F6Eu) goto loc_00210F6E;
    if (_jt == 0x00210F87u) goto loc_00210F87;
    if (_jt == 0x00210FA0u) goto loc_00210FA0;
    if (_jt == 0x00210FB9u) goto loc_00210FB9;
    if (_jt == 0x00210FD2u) goto loc_00210FD2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00210EAF: ;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x3C);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210EC5: ;
    edx = MEM32(esp + 0x138);
    eax = esp + 0x40;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00210ED4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210ED4; /* jne: not equal / not zero */

loc_00210EDE: ;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210EE7: ;
    edx = MEM32(esp + 0x138);
    eax = esp + 0x72;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00210EF6: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210EF6; /* jne: not equal / not zero */

loc_00210F00: ;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210F09: ;
    ecx = esp;
    PUSH32(esp, 0x00210F11u); RECOMP_ABI_CALL(0x0003419Au, sub_0003419A); /* call 0x0003419A */

loc_00210F11: ;
    edx = MEM32(esp + 0x138);
    MEM32(edx) = eax;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210F23: ;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0xA4);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210F3C: ;
    eax = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0x138);
    MEM32(edx) = eax;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210F55: ;
    ecx = MEM32(esp + 0x138);
    edx = MEM32(esp + 0xAC);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210F6E: ;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0xFC);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210F87: ;
    eax = MEM32(esp + 0xE0);
    edx = MEM32(esp + 0x138);
    MEM32(edx) = eax;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210FA0: ;
    ecx = MEM32(esp + 0x138);
    edx = MEM32(esp + 0x100);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210FB9: ;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0xD8);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00210FD2: ;
    eax = MEM32(esp + 0xC4);
    edx = MEM32(esp + 0x138);
    MEM32(edx) = eax;

loc_00210FE2: ;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00211130
 * Original: 0x00211130 - 0x00211135 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211130: ;
    g_seh_ebp = ebp; sub_0002F604(); return; /* tail jmp 0x0002F604 */

}

/**
 * sub_00211140
 * Original: 0x00211140 - 0x00211145 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211140: ;
    g_seh_ebp = ebp; sub_0001568C(); return; /* tail jmp 0x0001568C */

}

/**
 * sub_00211150
 * Original: 0x00211150 - 0x0021115C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211150: ;
    PUSH32(esp, 0x00211155u); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_00211155: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_000364E5(); return; /* tail jmp 0x000364E5 */

}

/**
 * sub_00211160
 * Original: 0x00211160 - 0x0021116C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211160: ;
    PUSH32(esp, 0x00211165u); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_00211165: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001AB82(); return; /* tail jmp 0x0001AB82 */

}

/**
 * sub_00211170
 * Original: 0x00211170 - 0x0021117C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211170: ;
    PUSH32(esp, 0x00211175u); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_00211175: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002F84D(); return; /* tail jmp 0x0002F84D */

}

/**
 * sub_00211180
 * Original: 0x00211180 - 0x002111A1 (33 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211180(void)
{

loc_00211180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021118Au); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_0021118A: ;
    ecx = eax;
    PUSH32(esp, 0x00211191u); RECOMP_ABI_CALL(0x00035E9Bu, sub_00035E9B); /* call 0x00035E9B */

loc_00211191: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00211197u); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_00211197: ;
    ecx = eax;
    PUSH32(esp, 0x0021119Eu); RECOMP_ABI_CALL(0x00018E40u, sub_00018E40); /* call 0x00018E40 */

loc_0021119E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002111B0
 * Original: 0x002111B0 - 0x002111D6 (38 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002111B0(void)
{

loc_002111B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002111BAu); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_002111BA: ;
    ecx = eax;
    PUSH32(esp, 0x002111C1u); RECOMP_ABI_CALL(0x00035E9Bu, sub_00035E9B); /* call 0x00035E9B */

loc_002111C1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002111CCu); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_002111CC: ;
    ecx = eax;
    PUSH32(esp, 0x002111D3u); RECOMP_ABI_CALL(0x000355F4u, sub_000355F4); /* call 0x000355F4 */

loc_002111D3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002111E0
 * Original: 0x002111E0 - 0x002111F2 (18 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002111E0(void)
{

loc_002111E0: ;
    PUSH32(esp, 0x002111E5u); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_002111E5: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x9C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211200
 * Original: 0x00211200 - 0x0021120C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211200: ;
    PUSH32(esp, 0x00211205u); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_00211205: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001ED59(); return; /* tail jmp 0x0001ED59 */

}

/**
 * sub_00211210
 * Original: 0x00211210 - 0x00211252 (66 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211210: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    eax = 2;
    if (CMP_A(_fa, _fb)) goto loc_0021124F; /* ja: above (unsigned >) */

loc_0021121E: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x211254); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00211225u) goto loc_00211225;
    if (_jt == 0x0021122Du) goto loc_0021122D;
    if (_jt == 0x00211235u) goto loc_00211235;
    if (_jt == 0x0021123Au) goto loc_0021123A;
    if (_jt == 0x00211242u) goto loc_00211242;
    if (_jt == 0x0021124Au) goto loc_0021124A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00211225: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_0021122D: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00211235: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0021123A: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_00211242: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_0021124A: ;
    eax = 0xD;

loc_0021124F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211252
 * Original: 0x00211252 - 0x002112AE (92 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00211252(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00211252: ;
    edi = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2D002112;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(HI8(eax)) + (uint64_t)(MEM8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_HI8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x4A002112)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(0x4A002112) = MEM8(0x4A002112) + HI8(edx);
    _fa = (uint32_t)(MEM8(0x4A002112)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(HI8(eax)) + (uint64_t)(MEM8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_HI8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(HI8(eax)) + (uint64_t)(MEM8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_HI8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x12)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx + 0x12) = MEM8(edx + 0x12) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x12)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0));
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 2;
    if ((_fa == 0)) goto loc_002112A9; /* je: equal / zero */

loc_0021129E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002112AB; /* jne: not equal / not zero */

loc_002112A1: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_002112A9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002112AB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002112C0
 * Original: 0x002112C0 - 0x002112DE (30 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002112C0(void)
{

loc_002112C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002112D4u); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_002112D4: ;
    ecx = eax;
    PUSH32(esp, 0x002112DBu); RECOMP_ABI_CALL(0x000344A1u, sub_000344A1); /* call 0x000344A1 */

loc_002112DB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002112F0
 * Original: 0x002112F0 - 0x0021141E (302 bytes, 158 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002112F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002112F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002112FAu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002112FA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00211301u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002112FEu); } /* indirect call */
    }

loc_00211301: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00211308u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211305u); } /* indirect call */
    }

loc_00211308: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00211314u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021130Eu); } /* indirect call */
    }

loc_00211314: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x220)) >> 32) & 1);
    esi = esi + 0x220;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00211320: ;
    PUSH32(esp, 0x00211325u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00211325: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0021132Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211329u); } /* indirect call */
    }

loc_0021132C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00211333u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211330u); } /* indirect call */
    }

loc_00211333: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00211357; /* ja: above (unsigned >) */

loc_0021133B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x211398); /* switch: 10 entries, 4 targets */
    if (_jt == 0x00211342u) goto loc_00211342;
    if (_jt == 0x00211349u) goto loc_00211349;
    if (_jt == 0x00211350u) goto loc_00211350;
    if (_jt == 0x00211357u) goto loc_00211357;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00211342: ;
    eax = 0x1E;
    goto loc_00211359;

loc_00211349: ;
    eax = 0xC;
    goto loc_00211359;

loc_00211350: ;
    eax = 0xE;
    goto loc_00211359;

loc_00211357: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00211359: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00211394; /* jge: greater or equal (signed >=) */

loc_0021135D: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x1A4);
    PUSH32(esp, 0x0021136Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021136C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0021138A; /* je: equal / zero */

loc_00211373: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00211382u); RECOMP_ABI_CALL(0x000158A3u, sub_000158A3); /* call 0x000158A3 */

loc_00211382: ;
    MEM32(esi) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00211320;

loc_0021138A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00211320;

loc_00211394: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00211418; /* je: equal / zero */

loc_0021140F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211415u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00211415: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00211418: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211430
 * Original: 0x00211430 - 0x002115FE (462 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00211430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211430: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002115F9; /* ja: above (unsigned >) */

loc_0021143D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x211600); /* switch: 23 entries, 23 targets */
    if (_jt == 0x00211444u) goto loc_00211444;
    if (_jt == 0x00211457u) goto loc_00211457;
    if (_jt == 0x0021146Au) goto loc_0021146A;
    if (_jt == 0x0021147Du) goto loc_0021147D;
    if (_jt == 0x00211490u) goto loc_00211490;
    if (_jt == 0x002114A3u) goto loc_002114A3;
    if (_jt == 0x002114B6u) goto loc_002114B6;
    if (_jt == 0x002114C9u) goto loc_002114C9;
    if (_jt == 0x002114DCu) goto loc_002114DC;
    if (_jt == 0x002114EFu) goto loc_002114EF;
    if (_jt == 0x00211502u) goto loc_00211502;
    if (_jt == 0x00211515u) goto loc_00211515;
    if (_jt == 0x00211528u) goto loc_00211528;
    if (_jt == 0x0021153Bu) goto loc_0021153B;
    if (_jt == 0x0021154Eu) goto loc_0021154E;
    if (_jt == 0x00211561u) goto loc_00211561;
    if (_jt == 0x00211574u) goto loc_00211574;
    if (_jt == 0x00211587u) goto loc_00211587;
    if (_jt == 0x0021159Au) goto loc_0021159A;
    if (_jt == 0x002115ADu) goto loc_002115AD;
    if (_jt == 0x002115C0u) goto loc_002115C0;
    if (_jt == 0x002115D3u) goto loc_002115D3;
    if (_jt == 0x002115E6u) goto loc_002115E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00211444: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x00211454u); RECOMP_ABI_CALL(0x0001153Cu, sub_0001153C); /* call 0x0001153C */

loc_00211454: ;
    esp += 12; return; /* ret 8 */

loc_00211457: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x00211467u); RECOMP_ABI_CALL(0x00023EFDu, sub_00023EFD); /* call 0x00023EFD */

loc_00211467: ;
    esp += 12; return; /* ret 8 */

loc_0021146A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x0021147Au); RECOMP_ABI_CALL(0x00025D20u, sub_00025D20); /* call 0x00025D20 */

loc_0021147A: ;
    esp += 12; return; /* ret 8 */

loc_0021147D: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x0021148Du); RECOMP_ABI_CALL(0x00024FA1u, sub_00024FA1); /* call 0x00024FA1 */

loc_0021148D: ;
    esp += 12; return; /* ret 8 */

loc_00211490: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x002114A0u); RECOMP_ABI_CALL(0x000172F7u, sub_000172F7); /* call 0x000172F7 */

loc_002114A0: ;
    esp += 12; return; /* ret 8 */

loc_002114A3: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x002114B3u); RECOMP_ABI_CALL(0x0002EBF5u, sub_0002EBF5); /* call 0x0002EBF5 */

loc_002114B3: ;
    esp += 12; return; /* ret 8 */

loc_002114B6: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x002114C6u); RECOMP_ABI_CALL(0x0001701Du, sub_0001701D); /* call 0x0001701D */

loc_002114C6: ;
    esp += 12; return; /* ret 8 */

loc_002114C9: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x002114D9u); RECOMP_ABI_CALL(0x00034500u, sub_00034500); /* call 0x00034500 */

loc_002114D9: ;
    esp += 12; return; /* ret 8 */

loc_002114DC: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x002114ECu); RECOMP_ABI_CALL(0x000284DFu, sub_000284DF); /* call 0x000284DF */

loc_002114EC: ;
    esp += 12; return; /* ret 8 */

loc_002114EF: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x002114FFu); RECOMP_ABI_CALL(0x00012671u, sub_00012671); /* call 0x00012671 */

loc_002114FF: ;
    esp += 12; return; /* ret 8 */

loc_00211502: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x00211512u); RECOMP_ABI_CALL(0x00019688u, sub_00019688); /* call 0x00019688 */

loc_00211512: ;
    esp += 12; return; /* ret 8 */

loc_00211515: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x00211525u); RECOMP_ABI_CALL(0x0002DC41u, sub_0002DC41); /* call 0x0002DC41 */

loc_00211525: ;
    esp += 12; return; /* ret 8 */

loc_00211528: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x00211538u); RECOMP_ABI_CALL(0x0001DBD9u, sub_0001DBD9); /* call 0x0001DBD9 */

loc_00211538: ;
    esp += 12; return; /* ret 8 */

loc_0021153B: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x0021154Bu); RECOMP_ABI_CALL(0x0001ACCCu, sub_0001ACCC); /* call 0x0001ACCC */

loc_0021154B: ;
    esp += 12; return; /* ret 8 */

loc_0021154E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x0021155Eu); RECOMP_ABI_CALL(0x000111D1u, sub_000111D1); /* call 0x000111D1 */

loc_0021155E: ;
    esp += 12; return; /* ret 8 */

loc_00211561: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x00211571u); RECOMP_ABI_CALL(0x0001DD2Du, sub_0001DD2D); /* call 0x0001DD2D */

loc_00211571: ;
    esp += 12; return; /* ret 8 */

loc_00211574: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x00211584u); RECOMP_ABI_CALL(0x00013891u, sub_00013891); /* call 0x00013891 */

loc_00211584: ;
    esp += 12; return; /* ret 8 */

loc_00211587: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x00211597u); RECOMP_ABI_CALL(0x00032688u, sub_00032688); /* call 0x00032688 */

loc_00211597: ;
    esp += 12; return; /* ret 8 */

loc_0021159A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x002115AAu); RECOMP_ABI_CALL(0x00023D22u, sub_00023D22); /* call 0x00023D22 */

loc_002115AA: ;
    esp += 12; return; /* ret 8 */

loc_002115AD: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x002115BDu); RECOMP_ABI_CALL(0x000199D0u, sub_000199D0); /* call 0x000199D0 */

loc_002115BD: ;
    esp += 12; return; /* ret 8 */

loc_002115C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x002115D0u); RECOMP_ABI_CALL(0x0002A19Au, sub_0002A19A); /* call 0x0002A19A */

loc_002115D0: ;
    esp += 12; return; /* ret 8 */

loc_002115D3: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x220);
    PUSH32(esp, 0x002115E3u); RECOMP_ABI_CALL(0x00030928u, sub_00030928); /* call 0x00030928 */

loc_002115E3: ;
    esp += 12; return; /* ret 8 */

loc_002115E6: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x002115F6u); RECOMP_ABI_CALL(0x0001B1D1u, sub_0001B1D1); /* call 0x0001B1D1 */

loc_002115F6: ;
    esp += 12; return; /* ret 8 */

loc_002115F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002115FE
 * Original: 0x002115FE - 0x00211767 (361 bytes, 211 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002115FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002115FE: ;
    edi = edi;
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x14)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + 0x14) = MEM8(edi + 0x14) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) (void)0; /* goto loc_00211622 - dead code, label not in function */ /* jge: greater or equal (signed >=) */

loc_0021160E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* nop */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -1241505516)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx + -1241505516) = MEM8(ebx + -1241505516) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx + -1241505516)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15150021) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(0x153B0021)) < (uint32_t)(LO8(edx)));
    MEM8(0x153B0021) = MEM8(0x153B0021) - LO8(edx);
    _fa = (uint32_t)(MEM8(0x153B0021)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15610021) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("lcall 0x2115, 0xad002115", 0x00211640u); /* TODO: lcall 0x2115, 0xad002115 */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15D30021) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("out 0x15, al", 0x00211650u); /* TODO: out 0x15, al */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0021166B; /* je: equal / zero */

loc_00211656: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _tmp = MEM32(-859045855);
    MEM32(-859045855) = edx;
    edx = _tmp; }
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_0021166B: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00211764; /* ja: above (unsigned >) */

loc_002116F9: ;
    eax = ZX8(MEM8(eax + 0x21177C));
    { uint32_t _jt = MEM32(eax * 4 + 0x211768); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00211707u) goto loc_00211707;
    if (_jt == 0x0021171Fu) goto loc_0021171F;
    if (_jt == 0x00211737u) goto loc_00211737;
    if (_jt == 0x0021174Fu) goto loc_0021174F;
    if (_jt == 0x00211764u) goto loc_00211764;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00211707: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021171Cu); RECOMP_ABI_CALL(0x00034785u, sub_00034785); /* call 0x00034785 */

loc_0021171C: ;
    esp += 16; return; /* ret 12 */

loc_0021171F: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00211734u); RECOMP_ABI_CALL(0x000308A6u, sub_000308A6); /* call 0x000308A6 */

loc_00211734: ;
    esp += 16; return; /* ret 12 */

loc_00211737: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021174Cu); RECOMP_ABI_CALL(0x000252D5u, sub_000252D5); /* call 0x000252D5 */

loc_0021174C: ;
    esp += 16; return; /* ret 12 */

loc_0021174F: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00211764u); RECOMP_ABI_CALL(0x0001661Du, sub_0001661D); /* call 0x0001661D */

loc_00211764: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002118BA
 * Original: 0x002118BA - 0x00211973 (185 bytes, 127 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002118BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002118BA: ;
    edi = edi;
    _fb = (uint32_t)(0x18) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x18)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(eax)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(eax)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(eax)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(eax)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(eax)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(LO8(ebx)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ebx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(LO8(ebx)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ebx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(LO8(ebx)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ebx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    { uint64_t _t = (uint64_t)(MEM8(ecx)) - (uint64_t)(HI8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x18)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi + 0x18) = MEM8(edi + 0x18) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi + 0x18)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM8(LO16(ebx) + LO16(edi))) - (uint64_t)(HI8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(LO16(ebx) + LO16(edi)) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(LO16(ebx) + LO16(edi))) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x18)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi + 0x18) = MEM8(edi + 0x18) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi + 0x18)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM8(LO16(ebx) + LO16(edi))) - (uint64_t)(HI8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(LO16(ebx) + LO16(edi)) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(LO16(ebx) + LO16(edi))) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x18)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi + 0x18) = MEM8(edi + 0x18) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi + 0x18)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    { uint64_t _t = (uint64_t)(MEM8(ecx)) - (uint64_t)(HI8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0x18)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + 0x18) = MEM8(eax + 0x18) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    { uint64_t _t = (uint64_t)(MEM8(ecx)) - (uint64_t)(HI8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0x18)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + 0x18) = MEM8(eax + 0x18) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x00211970u); RECOMP_ABI_CALL(0x0003734Au, sub_0003734A); /* call 0x0003734A */

loc_00211970: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211980
 * Original: 0x00211980 - 0x00211993 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211980(void)
{

loc_00211980: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x220);
    PUSH32(esp, 0x00211990u); RECOMP_ABI_CALL(0x0001DE45u, sub_0001DE45); /* call 0x0001DE45 */

loc_00211990: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002119A0
 * Original: 0x002119A0 - 0x00211ABF (287 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002119A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002119A0: ;
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002119B0u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_002119B0: ;
    esi = MEM32(esp + 0x1CC);
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x002119C9u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_002119C9: ;
    eax = MEM32(esp + 0x1D0);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00211AA8; /* ja: above (unsigned >) */

loc_002119DC: ;
    ecx = ZX8(MEM8(eax + 0x211AD4));
    { uint32_t _jt = MEM32(ecx * 4 + 0x211AC0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x002119EAu) goto loc_002119EA;
    if (_jt == 0x00211A35u) goto loc_00211A35;
    if (_jt == 0x00211A51u) goto loc_00211A51;
    if (_jt == 0x00211A6Du) goto loc_00211A6D;
    if (_jt == 0x00211AA8u) goto loc_00211AA8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002119EA: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002119F3u); RECOMP_ABI_CALL(0x00034037u, sub_00034037); /* call 0x00034037 */

loc_002119F3: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00211A02u); RECOMP_ABI_CALL(0x00028084u, sub_00028084); /* call 0x00028084 */

loc_00211A02: ;
    eax = ZX16(MEM16(esp + 0x7A));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD344); /* mulss */
    ecx = esp + 4;
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x00211A20u); RECOMP_ABI_CALL(0x00034FE1u, sub_00034FE1); /* call 0x00034FE1 */

loc_00211A20: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00211A29u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00211A29: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00211A35: ;
    esi = MEM32(esp + 0x174);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00211A45u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00211A45: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00211A51: ;
    esi = MEM32(esp + 0x178);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00211A61u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00211A61: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00211A6D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00211A76u); RECOMP_ABI_CALL(0x00034037u, sub_00034037); /* call 0x00034037 */

loc_00211A76: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00211A85u); RECOMP_ABI_CALL(0x00028084u, sub_00028084); /* call 0x00028084 */

loc_00211A85: ;
    esi = ZX16(MEM16(esp + 0x7A));
    ecx = esp + 4;
    PUSH32(esp, 0x00211A93u); RECOMP_ABI_CALL(0x00034FE1u, sub_00034FE1); /* call 0x00034FE1 */

loc_00211A93: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00211A9Cu); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00211A9C: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00211AA8: ;
    ecx = esp + 0xC;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00211AB3u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00211AB3: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00211C30
 * Original: 0x00211C30 - 0x00211C40 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211C30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00211C3Au); RECOMP_ABI_CALL(0x00031FFDu, sub_00031FFD); /* call 0x00031FFD */

loc_00211C3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211C50
 * Original: 0x00211C50 - 0x00211C77 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211C50: ;
    PUSH32(esp, 0x00211C55u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00211C55: ;
    ecx = eax;
    PUSH32(esp, 0x00211C5Cu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00211C5C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00211C66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211C60u); } /* indirect call */
    }

loc_00211C66: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00211C71u); RECOMP_ABI_CALL(0x00016898u, sub_00016898); /* call 0x00016898 */

loc_00211C71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211C80
 * Original: 0x00211C80 - 0x00211C86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211C80(void)
{

loc_00211C80: ;
    eax = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_00211C90
 * Original: 0x00211C90 - 0x00211D0E (126 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211C90(void)
{

loc_00211C90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211C96u); RECOMP_ABI_CALL(0x00015B37u, sub_00015B37); /* call 0x00015B37 */

loc_00211C96: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    ecx = ecx + ecx * 8;
    edx = MEM32(eax + ecx * 4 + 0x38);
    eax = eax + ecx * 4 + 0x20;
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00211CDBu); RECOMP_ABI_CALL(0x0001EE9Eu, sub_0001EE9E); /* call 0x0001EE9E */

loc_00211CDB: ;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0x30) = edx;
    ecx = MEM32(eax);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x2C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x28) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x3C) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00211D30
 * Original: 0x00211D30 - 0x00211D81 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211D30: ;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211D3Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00211D3C: ;
    ecx = eax;
    PUSH32(esp, 0x00211D43u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00211D43: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00211D4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211D47u); } /* indirect call */
    }

loc_00211D4D: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x00211D58u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00211D58: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00211D67u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00211D67: ;
    esi = MEM32(esp + 0xC0);
    ecx = esp + 4;
    PUSH32(esp, 0x00211D77u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00211D77: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00211DA0
 * Original: 0x00211DA0 - 0x00211DD9 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211DA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x00211DADu); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_00211DAD: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00211DC5u); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_00211DC5: ;
    esi = MEM32(esp + 4);
    ecx = esp + 8;
    PUSH32(esp, 0x00211DD2u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00211DD2: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00211DF0
 * Original: 0x00211DF0 - 0x00211E76 (134 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211DF0: ;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00211DFFu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00211DFF: ;
    ecx = eax;
    PUSH32(esp, 0x00211E06u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00211E06: ;
    ecx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0x00211E11u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00211E11: ;
    eax = MEM32(esi);
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00211E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211E17u); } /* indirect call */
    }

loc_00211E1D: ;
    ecx = MEM32(esp + 0x154);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x00211E30u); RECOMP_ABI_CALL(0x0003153Au, sub_0003153A); /* call 0x0003153A */

loc_00211E30: ;
    eax = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00211E5E; /* jle: less or equal (signed <=) */

loc_00211E3C: ;
    /* nop */

loc_00211E40: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00211E4Fu); RECOMP_ABI_CALL(0x00035329u, sub_00035329); /* call 0x00035329 */

loc_00211E4F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211E5C; /* je: equal / zero */

loc_00211E55: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00211E40; /* jl: less (signed <) */

loc_00211E5A: ;
    goto loc_00211E5E;

loc_00211E5C: ;
    ebp = esi;

loc_00211E5E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00211E67u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00211E67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211EA0
 * Original: 0x00211EA0 - 0x00211EA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211EA0(void)
{

loc_00211EA0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00211EB0
 * Original: 0x00211EB0 - 0x00211EB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211EB0(void)
{

loc_00211EB0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}
