/**
 * nhl_07_recomp - Recompiled code chunk 133
 * Functions: 250 (0x00202DC0 - 0x0020C7A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00202DC0
 * Original: 0x00202DC0 - 0x00202E02 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00202DC0: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x8304);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00202DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00202DD2u); } /* indirect call */
    }

loc_00202DD5: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00202DDFu); RECOMP_ABI_CALL(0x0001515Au, sub_0001515A); /* call 0x0001515A */

loc_00202DDF: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00202DE8u); RECOMP_ABI_CALL(0x0002104Fu, sub_0002104F); /* call 0x0002104F */

loc_00202DE8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00202DF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00202DEDu); } /* indirect call */
    }

loc_00202DF0: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00202DF9u); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_00202DF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00202E20
 * Original: 0x00202E20 - 0x00202E4D (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00202E20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x00202E34u); RECOMP_ABI_CALL(0x0001515Au, sub_0001515A); /* call 0x0001515A */

loc_00202E34: ;
    ecx = esp;
    PUSH32(esp, 0x00202E3Cu); RECOMP_ABI_CALL(0x0002104Fu, sub_0002104F); /* call 0x0002104F */

loc_00202E3C: ;
    ecx = esp;
    PUSH32(esp, 0x00202E44u); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_00202E44: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00202E60
 * Original: 0x00202E60 - 0x00202E8D (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00202E60: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x00202E74u); RECOMP_ABI_CALL(0x0001515Au, sub_0001515A); /* call 0x0001515A */

loc_00202E74: ;
    ecx = esp;
    PUSH32(esp, 0x00202E7Cu); RECOMP_ABI_CALL(0x000120FEu, sub_000120FE); /* call 0x000120FE */

loc_00202E7C: ;
    ecx = esp;
    PUSH32(esp, 0x00202E84u); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_00202E84: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00202EA0
 * Original: 0x00202EA0 - 0x00202EE3 (67 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00202EA0: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1AC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00202EBBu); RECOMP_ABI_CALL(0x0001515Au, sub_0001515A); /* call 0x0001515A */

loc_00202EBB: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00202EC4u); RECOMP_ABI_CALL(0x0002E722u, sub_0002E722); /* call 0x0002E722 */

loc_00202EC4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10C); PUSH32(esp, 0x00202ECFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00202EC9u); } /* indirect call */
    }

loc_00202ECF: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00202ED8u); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_00202ED8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00202F00
 * Original: 0x00202F00 - 0x00202F36 (54 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00202F00: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x00202F14u); RECOMP_ABI_CALL(0x0001515Au, sub_0001515A); /* call 0x0001515A */

loc_00202F14: ;
    ecx = MEM32(esp + 0x1A8);
    PUSH32(esp, ecx);
    ecx = esp + 4;
    PUSH32(esp, 0x00202F25u); RECOMP_ABI_CALL(0x00034C94u, sub_00034C94); /* call 0x00034C94 */

loc_00202F25: ;
    ecx = esp;
    PUSH32(esp, 0x00202F2Du); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_00202F2D: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00202F50
 * Original: 0x00202F50 - 0x00202FB8 (104 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00202F50: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00202F59u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00202F59: ;
    ecx = eax;
    PUSH32(esp, 0x00202F60u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00202F60: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00202FB1; /* je: equal / zero */

loc_00202F66: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00202F6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00202F6Au); } /* indirect call */
    }

loc_00202F6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00202F86; /* je: equal / zero */

loc_00202F72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00202F86; /* je: equal / zero */

loc_00202F77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00202F86; /* je: equal / zero */

loc_00202F7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00202F86; /* je: equal / zero */

loc_00202F81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00202FB1; /* jne: not equal / not zero */

loc_00202F86: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    MEM32(ecx) = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00202F9Du); RECOMP_ABI_CALL(0x0002F9C4u, sub_0002F9C4); /* call 0x0002F9C4 */

loc_00202F9D: ;
    PUSH32(esp, 1);
    ecx = esp + 8;
    PUSH32(esp, 0x00202FA8u); RECOMP_ABI_CALL(0x000332F4u, sub_000332F4); /* call 0x000332F4 */

loc_00202FA8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00202FB1u); RECOMP_ABI_CALL(0x00032A07u, sub_00032A07); /* call 0x00032A07 */

loc_00202FB1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00202FE0
 * Original: 0x00202FE0 - 0x00203038 (88 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00202FE0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x00202FF4u); RECOMP_ABI_CALL(0x0001515Au, sub_0001515A); /* call 0x0001515A */

loc_00202FF4: ;
    ecx = esp;
    PUSH32(esp, 0x00202FFCu); RECOMP_ABI_CALL(0x0001E840u, sub_0001E840); /* call 0x0001E840 */

loc_00202FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020301A; /* jne: not equal / not zero */

loc_00203001: ;
    ecx = esp;
    PUSH32(esp, 0x00203009u); RECOMP_ABI_CALL(0x0002E722u, sub_0002E722); /* call 0x0002E722 */

loc_00203009: ;
    ecx = esp;
    PUSH32(esp, 0x00203011u); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_00203011: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0020301A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00203027; /* je: equal / zero */

loc_0020301F: ;
    ecx = esp;
    PUSH32(esp, 0x00203027u); RECOMP_ABI_CALL(0x0002104Fu, sub_0002104F); /* call 0x0002104F */

loc_00203027: ;
    ecx = esp;
    PUSH32(esp, 0x0020302Fu); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_0020302F: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00203050
 * Original: 0x00203050 - 0x0020309B (75 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020307A; /* jne: not equal / not zero */

loc_0020305A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00203062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020305Cu); } /* indirect call */
    }

loc_00203062: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00203076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203070u); } /* indirect call */
    }

loc_00203076: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020307A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00203082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020307Cu); } /* indirect call */
    }

loc_00203082: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00203097u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203091u); } /* indirect call */
    }

loc_00203097: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002030B0
 * Original: 0x002030B0 - 0x002030DA (42 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002030B0(void)
{

loc_002030B0: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x002030BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002030B4u); } /* indirect call */
    }

loc_002030BA: ;
    edi = MEM32(esp + 0xC);
    esi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002030C8u); RECOMP_ABI_CALL(0x00018D78u, sub_00018D78); /* call 0x00018D78 */

loc_002030C8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x002030D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002030CFu); } /* indirect call */
    }

loc_002030D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002030E0
 * Original: 0x002030E0 - 0x0020310A (42 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002030E0(void)
{

loc_002030E0: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x002030EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002030E4u); } /* indirect call */
    }

loc_002030EA: ;
    edi = MEM32(esp + 0xC);
    esi = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x002030FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002030F7u); } /* indirect call */
    }

loc_002030FD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00203105u); RECOMP_ABI_CALL(0x00018D78u, sub_00018D78); /* call 0x00018D78 */

loc_00203105: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00203120
 * Original: 0x00203120 - 0x0020313D (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203120: ;
    _fa = (uint32_t)(MEM32(ecx + 0x82FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x82FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020312E; /* jne: not equal / not zero */

loc_00203129: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0020312E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00203136u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203130u); } /* indirect call */
    }

loc_00203136: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x48)); return; /* indirect tail jmp */

}

/**
 * sub_00203150
 * Original: 0x00203150 - 0x00203162 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203150: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00203158u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203152u); } /* indirect call */
    }

loc_00203158: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xB4)); return; /* indirect tail jmp */

}

/**
 * sub_00203170
 * Original: 0x00203170 - 0x002031E4 (116 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203170: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00203187u); RECOMP_ABI_CALL(0x00030EE6u, sub_00030EE6); /* call 0x00030EE6 */

loc_00203187: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00203190u); RECOMP_ABI_CALL(0x0001D55Du, sub_0001D55D); /* call 0x0001D55D */

loc_00203190: ;
    ecx = MEM32(esp + 0x198);
    edx = MEM32(esp + 0x180);
    eax = MEM32(esp + 0x184);
    MEM32(esi + 0x8308) = ecx;
    ecx = MEM32(esp + 0x18C);
    MEM32(esi + 0x830C) = edx;
    edx = MEM32(esp + 0x190);
    MEM32(esi + 0x8314) = ecx;
    ecx = esp + 4;
    MEM32(esi + 0x8310) = eax;
    MEM32(esi + 0x8318) = edx;
    PUSH32(esp, 0x002031DAu); RECOMP_ABI_CALL(0x0001527Cu, sub_0001527C); /* call 0x0001527C */

loc_002031DA: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00203210
 * Original: 0x00203210 - 0x0020321E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203210(void)
{

loc_00203210: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x8308);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00203230
 * Original: 0x00203230 - 0x002032DB (171 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203230: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x8300);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002032D6; /* jle: less or equal (signed <=) */

loc_00203244: ;
    ecx = MEM32(esp + 0xC);
    eax = esi + 0x82C0;
    edi = edi;

loc_00203250: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00203267; /* je: equal / zero */

loc_00203254: ;
    edx = MEM32(esi + 0x8300);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00203250; /* jl: less (signed <) */

loc_00203262: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00203267: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x00203272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020326Cu); } /* indirect call */
    }

loc_00203272: ;
    eax = MEM32(esi + 0x82FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00203288; /* jne: not equal / not zero */

loc_0020327C: ;
    MEM32(esi + 0x82FC) = 0xFFFFFFFFu;
    goto loc_00203299;

loc_00203288: ;
    ecx = MEM32(esi + 0x8300);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00203299; /* jne: not equal / not zero */

loc_00203293: ;
    MEM32(esi + 0x82FC) = edi;

loc_00203299: ;
    eax = MEM32(esi + 0x8300);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002032D6; /* jge: greater or equal (signed >=) */

loc_002032A4: ;
    MEM32(esi + 0x8300) = eax;
    edx = edi + edi * 2;
    ecx = esi + edx * 4;
    eax = eax + eax * 2;
    edx = MEM32(esi + eax * 4 + 0x82C0);
    MEM32(ecx + 0x82C0) = edx;
    eax = MEM32(esi + 0x8300);
    eax = eax + eax * 2;
    edx = MEM32(esi + eax * 4 + 0x82C4);
    MEM32(ecx + 0x82C4) = edx;

loc_002032D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00203310
 * Original: 0x00203310 - 0x0020334D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203310: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x8300);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00203336; /* jle: less or equal (signed <=) */

loc_00203320: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0020332Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203325u); } /* indirect call */
    }

loc_0020332B: ;
    eax = MEM32(esi + 0x8300);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00203320; /* jl: less (signed <) */

loc_00203336: ;
    POP32(esp, edi);
    MEM32(esi + 0x82FC) = 0xFFFFFFFFu;
    MEM32(esi + 0x8300) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00203360
 * Original: 0x00203360 - 0x00203419 (185 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203360: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002033F9; /* ja: above (unsigned >) */

loc_0020336F: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x20341C); /* switch: 19 entries, 19 targets */
    if (_jt == 0x00203376u) goto loc_00203376;
    if (_jt == 0x0020337Du) goto loc_0020337D;
    if (_jt == 0x00203384u) goto loc_00203384;
    if (_jt == 0x0020338Bu) goto loc_0020338B;
    if (_jt == 0x00203392u) goto loc_00203392;
    if (_jt == 0x00203399u) goto loc_00203399;
    if (_jt == 0x002033A0u) goto loc_002033A0;
    if (_jt == 0x002033A7u) goto loc_002033A7;
    if (_jt == 0x002033AEu) goto loc_002033AE;
    if (_jt == 0x002033B5u) goto loc_002033B5;
    if (_jt == 0x002033BCu) goto loc_002033BC;
    if (_jt == 0x002033C3u) goto loc_002033C3;
    if (_jt == 0x002033CAu) goto loc_002033CA;
    if (_jt == 0x002033D1u) goto loc_002033D1;
    if (_jt == 0x002033D8u) goto loc_002033D8;
    if (_jt == 0x002033DFu) goto loc_002033DF;
    if (_jt == 0x002033E6u) goto loc_002033E6;
    if (_jt == 0x002033EDu) goto loc_002033ED;
    if (_jt == 0x002033F4u) goto loc_002033F4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00203376: ;
    eax = 0xD;
    goto loc_002033F9;

loc_0020337D: ;
    eax = 0xE;
    goto loc_002033F9;

loc_00203384: ;
    eax = 0xF;
    goto loc_002033F9;

loc_0020338B: ;
    eax = 0x10;
    goto loc_002033F9;

loc_00203392: ;
    eax = 0x12;
    goto loc_002033F9;

loc_00203399: ;
    eax = 0x21;
    goto loc_002033F9;

loc_002033A0: ;
    eax = 0x11;
    goto loc_002033F9;

loc_002033A7: ;
    eax = 0x22;
    goto loc_002033F9;

loc_002033AE: ;
    eax = 0x17;
    goto loc_002033F9;

loc_002033B5: ;
    eax = 0x18;
    goto loc_002033F9;

loc_002033BC: ;
    eax = 0x19;
    goto loc_002033F9;

loc_002033C3: ;
    eax = 0x1A;
    goto loc_002033F9;

loc_002033CA: ;
    eax = 0x1B;
    goto loc_002033F9;

loc_002033D1: ;
    eax = 0x1C;
    goto loc_002033F9;

loc_002033D8: ;
    eax = 0x1D;
    goto loc_002033F9;

loc_002033DF: ;
    eax = 0x1E;
    goto loc_002033F9;

loc_002033E6: ;
    eax = 0x1F;
    goto loc_002033F9;

loc_002033ED: ;
    eax = 0x23;
    goto loc_002033F9;

loc_002033F4: ;
    eax = 0x24;

loc_002033F9: ;
    _fa = (uint32_t)(MEM32(ecx + 0x82FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x82FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00203416; /* je: equal / zero */

loc_00203402: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x0020340Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203409u); } /* indirect call */
    }

loc_0020340F: ;
    ecx = eax;
    PUSH32(esp, 0x00203416u); RECOMP_ABI_CALL(0x00015ACEu, sub_00015ACE); /* call 0x00015ACE */

loc_00203416: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002036D0
 * Original: 0x002036D0 - 0x002036FC (44 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002036D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002036D0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x82FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x82FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002036E0; /* jne: not equal / not zero */

loc_002036D9: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

loc_002036E0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x002036F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002036ECu); } /* indirect call */
    }

loc_002036F2: ;
    ecx = eax;
    PUSH32(esp, 0x002036F9u); RECOMP_ABI_CALL(0x00011A4Bu, sub_00011A4B); /* call 0x00011A4B */

loc_002036F9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00203710
 * Original: 0x00203710 - 0x0020373C (44 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203710: ;
    _fa = (uint32_t)(MEM32(ecx + 0x82FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x82FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00203720; /* jne: not equal / not zero */

loc_00203719: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

loc_00203720: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00203732u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020372Cu); } /* indirect call */
    }

loc_00203732: ;
    ecx = eax;
    PUSH32(esp, 0x00203739u); RECOMP_ABI_CALL(0x00031828u, sub_00031828); /* call 0x00031828 */

loc_00203739: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00203750
 * Original: 0x00203750 - 0x00203764 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203750(void)
{

loc_00203750: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00203758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203752u); } /* indirect call */
    }

loc_00203758: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00203763u); RECOMP_ABI_CALL(0x00028994u, sub_00028994); /* call 0x00028994 */

loc_00203763: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00203770
 * Original: 0x00203770 - 0x002037C0 (80 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x00203784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020377Eu); } /* indirect call */
    }

loc_00203784: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002037B8; /* jne: not equal / not zero */

loc_00203788: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00203798u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203792u); } /* indirect call */
    }

loc_00203798: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xD);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x002037A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002037A3u); } /* indirect call */
    }

loc_002037A9: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    if (CMP_GE(_fas, _fbs)) goto loc_002037BA; /* jge: greater or equal (signed >=) */

loc_002037B8: ;
    SET_LO8(eax, LO8(ebx));

loc_002037BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002037E0
 * Original: 0x002037E0 - 0x00203830 (80 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002037E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002037E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x002037F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002037EEu); } /* indirect call */
    }

loc_002037F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00203828; /* jne: not equal / not zero */

loc_002037F8: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00203808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203802u); } /* indirect call */
    }

loc_00203808: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00203819u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203813u); } /* indirect call */
    }

loc_00203819: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    if (CMP_GE(_fas, _fbs)) goto loc_0020382A; /* jge: greater or equal (signed >=) */

loc_00203828: ;
    SET_LO8(eax, LO8(ebx));

loc_0020382A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00203850
 * Original: 0x00203850 - 0x00203886 (54 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x00203864u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020385Eu); } /* indirect call */
    }

loc_00203864: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020387E; /* jne: not equal / not zero */

loc_00203868: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x11);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00203877u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203871u); } /* indirect call */
    }

loc_00203877: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_GE(_fas, _fbs)) goto loc_00203880; /* jge: greater or equal (signed >=) */

loc_0020387E: ;
    SET_LO8(eax, LO8(ebx));

loc_00203880: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002038A0
 * Original: 0x002038A0 - 0x002038D6 (54 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002038A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002038A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x002038B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002038AEu); } /* indirect call */
    }

loc_002038B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002038CE; /* jne: not equal / not zero */

loc_002038B8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002038C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002038C1u); } /* indirect call */
    }

loc_002038C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_GE(_fas, _fbs)) goto loc_002038D0; /* jge: greater or equal (signed >=) */

loc_002038CE: ;
    SET_LO8(eax, LO8(ebx));

loc_002038D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002038F0
 * Original: 0x002038F0 - 0x002038FF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002038F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002038F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x002038F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002038F2u); } /* indirect call */
    }

loc_002038F8: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x4C)); return; /* indirect tail jmp */

}

/**
 * sub_00203910
 * Original: 0x00203910 - 0x0020398F (127 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203910: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x0020391Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203915u); } /* indirect call */
    }

loc_0020391B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00203927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203924u); } /* indirect call */
    }

loc_00203927: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00203989; /* ja: above (unsigned >) */

loc_0020392C: ;
    edx = ZX8(MEM8(eax + 0x2039B0));
    { uint32_t _jt = MEM32(edx * 4 + 0x203990); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0020393Au) goto loc_0020393A;
    if (_jt == 0x00203942u) goto loc_00203942;
    if (_jt == 0x0020394Du) goto loc_0020394D;
    if (_jt == 0x00203958u) goto loc_00203958;
    if (_jt == 0x00203963u) goto loc_00203963;
    if (_jt == 0x0020396Eu) goto loc_0020396E;
    if (_jt == 0x00203979u) goto loc_00203979;
    if (_jt == 0x00203984u) goto loc_00203984;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020393A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00203942: ;
    esi = 5;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0020394D: ;
    esi = 6;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00203958: ;
    esi = 7;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00203963: ;
    esi = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0020396E: ;
    esi = 2;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00203979: ;
    esi = 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00203984: ;
    esi = 3;

loc_00203989: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00203EC0
 * Original: 0x00203EC0 - 0x00203FC6 (262 bytes, 93 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203EC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x8320;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00203EEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203EE7u); } /* indirect call */
    }

loc_00203EEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = MEM32(esp + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_00203F11; /* jle: less or equal (signed <=) */

loc_00203EF2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00203EFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203EF7u); } /* indirect call */
    }

loc_00203EFD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00203F0F; /* je: equal / zero */

loc_00203F01: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00203F09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203F06u); } /* indirect call */
    }

loc_00203F09: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00203EF2; /* jl: less (signed <) */

loc_00203F0D: ;
    goto loc_00203F11;

loc_00203F0F: ;
    ebx = edi;

loc_00203F11: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1BC); PUSH32(esp, 0x00203F1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203F16u); } /* indirect call */
    }

loc_00203F1C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x8320) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00203F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203F28u); } /* indirect call */
    }

loc_00203F2E: ;
    ecx = eax;
    PUSH32(esp, 0x00203F35u); RECOMP_ABI_CALL(0x000332F4u, sub_000332F4); /* call 0x000332F4 */

loc_00203F35: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00203F3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203F39u); } /* indirect call */
    }

loc_00203F3F: ;
    ecx = eax;
    PUSH32(esp, 0x00203F46u); RECOMP_ABI_CALL(0x00013166u, sub_00013166); /* call 0x00013166 */

loc_00203F46: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00203F55u); RECOMP_ABI_CALL(0x00013620u, sub_00013620); /* call 0x00013620 */

loc_00203F55: ;
    edx = MEM32(esi);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = esi;
    MEM32(esi + 0x8324) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00203F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203F61u); } /* indirect call */
    }

loc_00203F67: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00203F6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00203F6Cu); } /* indirect call */
    }

loc_00203F6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00203F88; /* je: equal / zero */

loc_00203F73: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00203F80u); RECOMP_ABI_CALL(0x0001BE24u, sub_0001BE24); /* call 0x0001BE24 */

loc_00203F80: ;
    MEM32(esi + 0x8328) = eax;
    goto loc_00203F92;

loc_00203F88: ;
    MEM32(esi + 0x8328) = 0;

loc_00203F92: ;
    ecx = edi;
    PUSH32(esp, 0x00203F99u); RECOMP_ABI_CALL(0x0002106Du, sub_0002106D); /* call 0x0002106D */

loc_00203F99: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = edi;
    MEM32(esi + 0x832C) = eax;
    PUSH32(esp, 0x00203FA8u); RECOMP_ABI_CALL(0x0002F4FBu, sub_0002F4FB); /* call 0x0002F4FB */

loc_00203FA8: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = edi;
    MEM32(esi + 0x8330) = eax;
    PUSH32(esp, 0x00203FB7u); RECOMP_ABI_CALL(0x00030527u, sub_00030527); /* call 0x00030527 */

loc_00203FB7: ;
    POP32(esp, edi);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 0x8334) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204000
 * Original: 0x00204000 - 0x00204010 (16 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204000(void)
{

loc_00204000: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00204010
 * Original: 0x00204010 - 0x00204059 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204010: ;
    edx = MEM32(ecx + 0x8320);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204021; /* jle: less or equal (signed <=) */

loc_0020401C: ;
    eax = 1;

loc_00204021: ;
    edx = MEM32(ecx + 0x8324);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020402C; /* jle: less or equal (signed <=) */

loc_0020402B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020402C: ;
    edx = MEM32(ecx + 0x8328);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204037; /* jle: less or equal (signed <=) */

loc_00204036: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00204037: ;
    edx = MEM32(ecx + 0x832C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204042; /* jle: less or equal (signed <=) */

loc_00204041: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00204042: ;
    edx = MEM32(ecx + 0x8330);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020404D; /* jle: less or equal (signed <=) */

loc_0020404C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020404D: ;
    edx = MEM32(ecx + 0x8334);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204058; /* jle: less or equal (signed <=) */

loc_00204057: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00204058: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00204070
 * Original: 0x00204070 - 0x0020409A (42 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8320) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8320;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00204080: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020408A; /* jle: less or equal (signed <=) */

loc_00204085: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204096; /* je: equal / zero */

loc_00204089: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020408A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204080; /* jl: less (signed <) */

loc_00204093: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00204096: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002040B0
 * Original: 0x002040B0 - 0x002040C9 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002040B0(void)
{

loc_002040B0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x002040B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002040B2u); } /* indirect call */
    }

loc_002040B8: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x002040C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002040C3u); } /* indirect call */
    }

loc_002040C6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002040D0
 * Original: 0x002040D0 - 0x002040DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002040D0(void)
{

loc_002040D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x8304) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002040E0
 * Original: 0x002040E0 - 0x002040E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002040E0(void)
{

loc_002040E0: ;
    eax = MEM32(ecx + 0x8304);
    esp += 4; return; /* ret */

}

/**
 * sub_002040F0
 * Original: 0x002040F0 - 0x002040FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002040F0(void)
{

loc_002040F0: ;
    MEM32(ecx + 0x8304) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00204100
 * Original: 0x00204100 - 0x00204259 (345 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204100: ;
    eax = MEM32(ecx + 0x8304);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00204117u); RECOMP_ABI_CALL(0x0001515Au, sub_0001515A); /* call 0x0001515A */

loc_00204117: ;
    ecx = esp + 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00204122u); RECOMP_ABI_CALL(0x0001E840u, sub_0001E840); /* call 0x0001E840 */

loc_00204122: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00204244; /* ja: above (unsigned >) */

loc_0020412B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20425C); /* switch: 7 entries, 4 targets */
    if (_jt == 0x00204132u) goto loc_00204132;
    if (_jt == 0x00204149u) goto loc_00204149;
    if (_jt == 0x002041A8u) goto loc_002041A8;
    if (_jt == 0x00204209u) goto loc_00204209;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00204132: ;
    ecx = esp + 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0020413Du); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_0020413D: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00204149: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00204152u); RECOMP_ABI_CALL(0x0002B748u, sub_0002B748); /* call 0x0002B748 */

loc_00204152: ;
    ecx = MEM32(esp + 0x1A8);
    MEM32(ecx) = eax;
    ecx = esp + 4;
    PUSH32(esp, 0x00204164u); RECOMP_ABI_CALL(0x00032BECu, sub_00032BEC); /* call 0x00032BEC */

loc_00204164: ;
    edx = MEM32(esp + 0x1AC);
    ecx = esp + 4;
    MEM32(edx) = eax;
    PUSH32(esp, 0x00204176u); RECOMP_ABI_CALL(0x0003117Fu, sub_0003117F); /* call 0x0003117F */

loc_00204176: ;
    ecx = MEM32(esp + 0x1B0);
    MEM32(ecx) = eax;
    ecx = esp + 4;
    PUSH32(esp, 0x00204188u); RECOMP_ABI_CALL(0x0001DB07u, sub_0001DB07); /* call 0x0001DB07 */

loc_00204188: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx = esp + 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx;
    PUSH32(esp, 0x0020419Cu); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_0020419C: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002041A8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002041B1u); RECOMP_ABI_CALL(0x0002B748u, sub_0002B748); /* call 0x0002B748 */

loc_002041B1: ;
    ecx = MEM32(esp + 0x1A8);
    MEM32(ecx) = eax;
    ecx = esp + 4;
    PUSH32(esp, 0x002041C3u); RECOMP_ABI_CALL(0x00032BECu, sub_00032BEC); /* call 0x00032BEC */

loc_002041C3: ;
    edx = MEM32(esp + 0x1AC);
    ecx = esp + 4;
    MEM32(edx) = eax;
    PUSH32(esp, 0x002041D5u); RECOMP_ABI_CALL(0x0003117Fu, sub_0003117F); /* call 0x0003117F */

loc_002041D5: ;
    ecx = MEM32(esp + 0x1B0);
    MEM32(ecx) = eax;
    ecx = esp + 4;
    PUSH32(esp, 0x002041E7u); RECOMP_ABI_CALL(0x0003117Fu, sub_0003117F); /* call 0x0003117F */

loc_002041E7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx = esp + 4;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx;
    PUSH32(esp, 0x002041FDu); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_002041FD: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00204209: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00204212u); RECOMP_ABI_CALL(0x0002B748u, sub_0002B748); /* call 0x0002B748 */

loc_00204212: ;
    ecx = MEM32(esp + 0x1A8);
    MEM32(ecx) = eax;
    ecx = esp + 4;
    PUSH32(esp, 0x00204224u); RECOMP_ABI_CALL(0x00032BECu, sub_00032BEC); /* call 0x00032BEC */

loc_00204224: ;
    edx = MEM32(esp + 0x1AC);
    ecx = esp + 4;
    MEM32(edx) = eax;
    PUSH32(esp, 0x00204236u); RECOMP_ABI_CALL(0x0003117Fu, sub_0003117F); /* call 0x0003117F */

loc_00204236: ;
    ecx = MEM32(esp + 0x1B0);
    MEM32(ecx) = eax;
    esi = 6;

loc_00204244: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0020424Du); RECOMP_ABI_CALL(0x000332E5u, sub_000332E5); /* call 0x000332E5 */

loc_0020424D: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00204300
 * Original: 0x00204300 - 0x00204420 (288 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00204300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204300: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x8300);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x82FC) = 0xFFFFFFFFu;
    if (CMP_LE(_fas, _fbs)) goto loc_00204368; /* jle: less or equal (signed <=) */

loc_0020431B: ;
    ecx = esi + 0x82C0;

loc_00204321: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204339; /* je: equal / zero */

loc_00204329: ;
    edi = MEM32(esi + 0x8300);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204321; /* jl: less (signed <) */

loc_00204337: ;
    goto loc_0020436C;

loc_00204339: ;
    MEM32(esi + 0x82FC) = eax;
    eax = eax + eax * 2 + 0x20B2;
    eax = esi + eax * 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020435D; /* jle: less or equal (signed <=) */

loc_00204353: ;
    POP32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM16(eax) = LO16(ecx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0020435D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00204368: ;
    ebp = MEM32(esp + 0x10);

loc_0020436C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204399; /* jle: less or equal (signed <=) */

loc_00204372: ;
    eax = esi + 0x82C8;

loc_00204378: ;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020438B; /* je: equal / zero */

loc_0020437D: ;
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x14 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020438B; /* jle: less or equal (signed <=) */

loc_00204386: ;
    MEM16(eax) = 0x14;

loc_0020438B: ;
    edx = MEM32(esi + 0x8300);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204378; /* jl: less (signed <) */

loc_00204399: ;
    ecx = MEM32(esi + 0x8300);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002043C3; /* jge: greater or equal (signed >=) */

loc_002043A4: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x002043B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002043AAu); } /* indirect call */
    }

loc_002043B0: ;
    eax = MEM32(esi + 0x8300);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x8300) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_002043C3: ;
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204402; /* jle: less or equal (signed <=) */

loc_002043CE: ;
    ebp = MEM32(esi + 0x8300);
    edx = esi + 0x82C8;
    /* nop */

loc_002043E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x82FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x82FC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002043F6; /* je: equal / zero */

loc_002043E8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ecx) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002043F6; /* jge: greater or equal (signed >=) */

loc_002043F2: ;
    edi = ecx;
    ebx = eax;

loc_002043F6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002043E0; /* jl: less (signed <) */

loc_002043FE: ;
    ebp = MEM32(esp + 0x14);

loc_00204402: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0020440Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204407u); } /* indirect call */
    }

loc_0020440D: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00204419u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204413u); } /* indirect call */
    }

loc_00204419: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204470
 * Original: 0x00204470 - 0x0020450A (154 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0020448Eu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0020448E: ;
    ecx = eax;
    PUSH32(esp, 0x00204495u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00204495: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002044AB; /* je: equal / zero */

loc_00204499: ;
    ecx = MEM32(eax + 0x50);
    edx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002044A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002044A4u); } /* indirect call */
    }

loc_002044A7: ;
    MEM32(esp + 0x14) = eax;

loc_002044AB: ;
    esi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);
    eax = esi + esi * 2;
    ebx = edi + eax * 4;
    PUSH32(esp, 0x28);
    MEM32(ebx + 0x82C0) = ebp;
    PUSH32(esp, 0x002044C6u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_002044C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002044E5; /* je: equal / zero */

loc_002044CD: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x002044E3u); RECOMP_ABI_CALL(0x0002F9C4u, sub_0002F9C4); /* call 0x0002F9C4 */

loc_002044E3: ;
    goto loc_002044E7;

loc_002044E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002044E7: ;
    edx = esi + esi * 2 + 0x20B2;
    MEM32(ebx + 0x82C4) = eax;
    MEM16(edi + edx * 4) = 0;
    MEM32(edi + 0x82FC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204530
 * Original: 0x00204530 - 0x00204577 (71 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    eax = edi + edi * 2;
    ecx = MEM32(ebx + eax * 4 + 0x82C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ebx + eax * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0020455A; /* je: equal / zero */

loc_0020454A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00204550u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020454Eu); } /* indirect call */
    }

loc_00204550: ;
    MEM32(esi + 0x82C4) = 0;

loc_0020455A: ;
    eax = edi + edi * 2 + 0x20B2;
    POP32(esp, edi);
    MEM32(esi + 0x82C0) = 0xFFFFFFFFu;
    POP32(esp, esi);
    MEM16(ebx + eax * 4) = 0;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204590
 * Original: 0x00204590 - 0x0020471B (395 bytes, 161 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204590: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x002045A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020459Eu); } /* indirect call */
    }

loc_002045A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00204711; /* ja: above (unsigned >) */

loc_002045AD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20471C); /* switch: 5 entries, 3 targets */
    if (_jt == 0x002045B4u) goto loc_002045B4;
    if (_jt == 0x0020461Bu) goto loc_0020461B;
    if (_jt == 0x0020469Cu) goto loc_0020469C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002045B4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x002045C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002045BDu); } /* indirect call */
    }

loc_002045C3: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x002045D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002045CDu); } /* indirect call */
    }

loc_002045D0: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002045EB; /* jle: less or equal (signed <=) */

loc_002045D8: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x002045E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002045DFu); } /* indirect call */
    }

loc_002045E2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002045EB; /* je: equal / zero */

loc_002045E6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002045D8; /* jl: less (signed <) */

loc_002045EB: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x55 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002045FC; /* jl: less (signed <) */

loc_002045F4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00204711; /* jg: greater (signed >) */

loc_002045FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204711; /* jl: less (signed <) */

loc_00204605: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204711; /* jle: less or equal (signed <=) */

loc_0020460E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0020461B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0020462Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204624u); } /* indirect call */
    }

loc_0020462A: ;
    MEM32(esp + 0x18) = eax;
    ebx = 4;

loc_00204633: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0020463Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204638u); } /* indirect call */
    }

loc_0020463B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0020465B; /* jle: less or equal (signed <=) */

loc_00204645: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0020464Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020464Bu); } /* indirect call */
    }

loc_0020464E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204661; /* je: equal / zero */

loc_00204652: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204645; /* jl: less (signed <) */

loc_0020465B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204633; /* jle: less or equal (signed <=) */

loc_00204661: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x55 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204673; /* jl: less (signed <) */

loc_0020466A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00204711; /* jg: greater (signed >) */

loc_00204673: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020467D; /* jl: less (signed <) */

loc_00204678: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020460E; /* jg: greater (signed >) */

loc_0020467D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204711; /* jl: less (signed <) */

loc_00204686: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204711; /* jle: less or equal (signed <=) */

loc_0020468F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0020469C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002046ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002046A5u); } /* indirect call */
    }

loc_002046AB: ;
    MEM32(esp + 0x18) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002046B1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x002046B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002046B6u); } /* indirect call */
    }

loc_002046B9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002046D9; /* jle: less or equal (signed <=) */

loc_002046C3: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x002046CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002046C9u); } /* indirect call */
    }

loc_002046CC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002046DF; /* je: equal / zero */

loc_002046D0: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002046C3; /* jl: less (signed <) */

loc_002046D9: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002046B1; /* jle: less or equal (signed <=) */

loc_002046DF: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x55 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002046EC; /* jl: less (signed <) */

loc_002046E8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00204711; /* jg: greater (signed >) */

loc_002046EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002046FA; /* jl: less (signed <) */

loc_002046F1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020460E; /* jg: greater (signed >) */

loc_002046FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204711; /* jl: less (signed <) */

loc_002046FF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00204711; /* jle: less or equal (signed <=) */

loc_00204704: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00204711: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002047A0
 * Original: 0x002047A0 - 0x00204815 (117 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002047A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002047A0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    eax = 0x15;
    if (CMP_A(_fa, _fb)) goto loc_00204812; /* ja: above (unsigned >) */

loc_002047B1: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x204818); /* switch: 28 entries, 13 targets */
    if (_jt == 0x002047B8u) goto loc_002047B8;
    if (_jt == 0x002047BDu) goto loc_002047BD;
    if (_jt == 0x002047C5u) goto loc_002047C5;
    if (_jt == 0x002047CDu) goto loc_002047CD;
    if (_jt == 0x002047D5u) goto loc_002047D5;
    if (_jt == 0x002047DDu) goto loc_002047DD;
    if (_jt == 0x002047E5u) goto loc_002047E5;
    if (_jt == 0x002047EDu) goto loc_002047ED;
    if (_jt == 0x002047F5u) goto loc_002047F5;
    if (_jt == 0x002047FDu) goto loc_002047FD;
    if (_jt == 0x00204805u) goto loc_00204805;
    if (_jt == 0x0020480Du) goto loc_0020480D;
    if (_jt == 0x00204812u) goto loc_00204812;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002047B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002047BD: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_002047C5: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_002047CD: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_002047D5: ;
    eax = 0xD;
    esp += 8; return; /* ret 4 */

loc_002047DD: ;
    eax = 0x11;
    esp += 8; return; /* ret 4 */

loc_002047E5: ;
    eax = 0x12;
    esp += 8; return; /* ret 4 */

loc_002047ED: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_002047F5: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_002047FD: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_00204805: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

loc_0020480D: ;
    eax = 0xC;

loc_00204812: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204900
 * Original: 0x00204900 - 0x0020491C (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204900(void)
{

loc_00204900: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00204912u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020490Cu); } /* indirect call */
    }

loc_00204912: ;
    ecx = eax;
    PUSH32(esp, 0x00204919u); RECOMP_ABI_CALL(0x00023F20u, sub_00023F20); /* call 0x00023F20 */

loc_00204919: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204930
 * Original: 0x00204930 - 0x00204939 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204930(void)
{

loc_00204930: ;
    eax = ecx;
    MEM32(eax) = 0x7F77E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00204940
 * Original: 0x00204940 - 0x00204947 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204940(void)
{

loc_00204940: ;
    MEM32(ecx) = 0x7F77E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00204950
 * Original: 0x00204950 - 0x00204A08 (184 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204950: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204990; /* je: equal / zero */

loc_00204965: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204990; /* jne: not equal / not zero */

loc_0020496A: ;
    PUSH32(esp, 0x0020496Fu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0020496F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204990; /* je: equal / zero */

loc_00204973: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020497Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204977u); } /* indirect call */
    }

loc_0020497A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204990; /* je: equal / zero */

loc_0020497E: ;
    ecx = MEM32(ebx * 4 + 0x7F7334);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0020498Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020498Au); } /* indirect call */
    }

loc_0020498C: ;
    esi = eax;
    goto loc_002049E1;

loc_00204990: ;
    PUSH32(esp, 0x00204995u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00204995: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002049E1; /* je: equal / zero */

loc_00204999: ;
    ecx = eax;
    PUSH32(esp, 0x002049A0u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002049A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002049E1; /* je: equal / zero */

loc_002049A4: ;
    ecx = esp + 8;
    PUSH32(esp, 0x002049ADu); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_002049AD: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    MEM32(esp + 0x14) = 0x7F7A10;
    PUSH32(esp, 0x002049C3u); RECOMP_ABI_CALL(0x00025B68u, sub_00025B68); /* call 0x00025B68 */

loc_002049C3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002049C9u); RECOMP_ABI_CALL(0x0002E2F9u, sub_0002E2F9); /* call 0x0002E2F9 */

loc_002049C9: ;
    esi = MEM32(esp + eax * 4 + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    MEM32(esp + 0x10) = 0x7F7A10;
    PUSH32(esp, 0x002049E1u); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_002049E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002049FE; /* jne: not equal / not zero */

loc_002049E6: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002049FE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204A40
 * Original: 0x00204A40 - 0x00204B06 (198 bytes, 60 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204A40: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00204A49u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00204A49: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204AFF; /* je: equal / zero */

loc_00204A53: ;
    ecx = ebx;
    PUSH32(esp, 0x00204A5Au); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00204A5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204AFF; /* je: equal / zero */

loc_00204A62: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204A76; /* jne: not equal / not zero */

loc_00204A6D: ;
    eax = MEM32(esp + 0x64);
    esi = eax + eax * 4;
    goto loc_00204A7A;

loc_00204A76: ;
    esi = MEM32(esp + 0x64);

loc_00204A7A: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00204A83u); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00204A83: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00204A8Cu); RECOMP_ABI_CALL(0x0003345Cu, sub_0003345C); /* call 0x0003345C */

loc_00204A8C: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x20) = 0x7F7A10;
    PUSH32(esp, 0x00204AA2u); RECOMP_ABI_CALL(0x00025B68u, sub_00025B68); /* call 0x00025B68 */

loc_00204AA2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00204AA8u); RECOMP_ABI_CALL(0x0002E2F9u, sub_0002E2F9); /* call 0x0002E2F9 */

loc_00204AA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    MEM32(esp + eax * 4 + 0x24) = esi;
    PUSH32(esp, 0x00204ABDu); RECOMP_ABI_CALL(0x000218F1u, sub_000218F1); /* call 0x000218F1 */

loc_00204ABD: ;
    ecx = ebx;
    PUSH32(esp, 0x00204AC4u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00204AC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00204AD5; /* je: equal / zero */

loc_00204ACA: ;
    PUSH32(esp, 0x00204ACFu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00204ACF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    goto loc_00204ADE;

loc_00204AD5: ;
    PUSH32(esp, 0x00204ADAu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00204ADA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B);

loc_00204ADE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00204AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204AE2u); } /* indirect call */
    }

loc_00204AE5: ;
    ecx = esp + 4;
    MEM32(esp + 0x14) = 0x7F7A10;
    PUSH32(esp, 0x00204AF6u); RECOMP_ABI_CALL(0x0001CFAEu, sub_0001CFAE); /* call 0x0001CFAE */

loc_00204AF6: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00204AFFu); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_00204AFF: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204B40
 * Original: 0x00204B40 - 0x00204B9B (91 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204B40: ;
    ecx = MEM32(0x8F9CCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204B98; /* je: equal / zero */

loc_00204B4A: ;
    PUSH32(esp, 0x00204B4Fu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00204B4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204B98; /* je: equal / zero */

loc_00204B53: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00204B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204B58u); } /* indirect call */
    }

loc_00204B5B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204B97; /* je: equal / zero */

loc_00204B61: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00204B75; /* jne: not equal / not zero */

loc_00204B6C: ;
    eax = MEM32(esp + 0x14);
    edi = eax + eax * 4;
    goto loc_00204B79;

loc_00204B75: ;
    edi = MEM32(esp + 0x14);

loc_00204B79: ;
    ecx = MEM32(ebx * 4 + 0x7F7334);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00204B89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204B86u); } /* indirect call */
    }

loc_00204B89: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204B95; /* jne: not equal / not zero */

loc_00204B8D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00204B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204B92u); } /* indirect call */
    }

loc_00204B95: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00204B97: ;
    POP32(esp, esi);

loc_00204B98: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204BC0
 * Original: 0x00204BC0 - 0x00204BF4 (52 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204BC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00204BCDu); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_00204BCD: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00204BE0u); RECOMP_ABI_CALL(0x000239B2u, sub_000239B2); /* call 0x000239B2 */

loc_00204BE0: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x00204BEBu); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_00204BEB: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204C10
 * Original: 0x00204C10 - 0x00204C62 (82 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204C10: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x00204C1Fu); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00204C1F: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 8;
    MEM32(esp + 0x10) = 0x7F7A10;
    PUSH32(esp, 0x00204C35u); RECOMP_ABI_CALL(0x00025B68u, sub_00025B68); /* call 0x00025B68 */

loc_00204C35: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00204C46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204C43u); } /* indirect call */
    }

loc_00204C46: ;
    ecx = esp + 4;
    esi = eax;
    MEM32(esp + 0xC) = 0x7F7A10;
    PUSH32(esp, 0x00204C59u); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_00204C59: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204C80
 * Original: 0x00204C80 - 0x00204D4A (202 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204C80: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204CCC; /* je: equal / zero */

loc_00204C93: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204CCC; /* jne: not equal / not zero */

loc_00204C98: ;
    PUSH32(esp, 0x00204C9Du); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00204C9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204CCC; /* je: equal / zero */

loc_00204CA1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00204CA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204CA5u); } /* indirect call */
    }

loc_00204CA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204CCC; /* je: equal / zero */

loc_00204CAC: ;
    ecx = MEM32(esp + 0xB4);
    ecx = MEM32(ecx * 4 + 0x7F7370);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00204CC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204CBFu); } /* indirect call */
    }

loc_00204CC2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00204CCC: ;
    PUSH32(esp, 0x00204CD1u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00204CD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204D3E; /* je: equal / zero */

loc_00204CD5: ;
    ecx = eax;
    PUSH32(esp, 0x00204CDCu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00204CDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204D3E; /* je: equal / zero */

loc_00204CE0: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00204CE9u); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_00204CE9: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x14) = 0x7F7A14;
    PUSH32(esp, 0x00204CFAu); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00204CFA: ;
    eax = MEM32(esp + 0xB8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00204D10u); RECOMP_ABI_CALL(0x00016280u, sub_00016280); /* call 0x00016280 */

loc_00204D10: ;
    ecx = MEM32(esp + 0xB4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00204D1Du); RECOMP_ABI_CALL(0x00027E90u, sub_00027E90); /* call 0x00027E90 */

loc_00204D1D: ;
    esi = MEM32(esp + eax * 4 + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, 0x00204D2Du); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_00204D2D: ;
    ecx = esp + 4;
    MEM32(esp + 0x14) = 0x7F7A14;
    PUSH32(esp, 0x00204D3Eu); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_00204D3E: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204D80
 * Original: 0x00204D80 - 0x00204D88 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204D80(void)
{

loc_00204D80: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204D90
 * Original: 0x00204D90 - 0x00204E8A (250 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204D90: ;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00204D9Cu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00204D9C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204E80; /* je: equal / zero */

loc_00204DA6: ;
    ecx = esi;
    PUSH32(esp, 0x00204DADu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00204DAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204E80; /* je: equal / zero */

loc_00204DB5: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00204DBEu); RECOMP_ABI_CALL(0x000372D2u, sub_000372D2); /* call 0x000372D2 */

loc_00204DBE: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00204DC7u); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_00204DC7: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x5C) = 0x7F7A14;
    PUSH32(esp, 0x00204DD8u); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00204DD8: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0x20) = 0x7F7A10;
    PUSH32(esp, 0x00204DEEu); RECOMP_ABI_CALL(0x00025B68u, sub_00025B68); /* call 0x00025B68 */

loc_00204DEE: ;
    edx = MEM32(esp + 0x20);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00204E01u); RECOMP_ABI_CALL(0x00016280u, sub_00016280); /* call 0x00016280 */

loc_00204E01: ;
    eax = MEM32(esp + 0xFC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00204E0Eu); RECOMP_ABI_CALL(0x00027E90u, sub_00027E90); /* call 0x00027E90 */

loc_00204E0E: ;
    ecx = MEM32(esp + 0x104);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + eax * 4 + 0x60) = ecx;
    eax = MEM32(esp + 0x20);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00204E2Fu); RECOMP_ABI_CALL(0x00036E9Fu, sub_00036E9F); /* call 0x00036E9F */

loc_00204E2F: ;
    ecx = esi;
    PUSH32(esp, 0x00204E36u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00204E36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204E45; /* je: equal / zero */

loc_00204E3A: ;
    PUSH32(esp, 0x00204E3Fu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00204E3F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    goto loc_00204E4E;

loc_00204E45: ;
    PUSH32(esp, 0x00204E4Au); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00204E4A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B);

loc_00204E4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00204E55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204E52u); } /* indirect call */
    }

loc_00204E55: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x1C) = 0x7F7A10;
    PUSH32(esp, 0x00204E66u); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_00204E66: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x5C) = 0x7F7A14;
    PUSH32(esp, 0x00204E77u); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_00204E77: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00204E80u); RECOMP_ABI_CALL(0x0001E502u, sub_0001E502); /* call 0x0001E502 */

loc_00204E80: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204ED0
 * Original: 0x00204ED0 - 0x00204FAD (221 bytes, 60 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204ED0: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00204EDCu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00204EDC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204FA3; /* je: equal / zero */

loc_00204EE6: ;
    ecx = edi;
    PUSH32(esp, 0x00204EEDu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00204EED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204FA3; /* je: equal / zero */

loc_00204EF5: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x00204EFFu); RECOMP_ABI_CALL(0x000372D2u, sub_000372D2); /* call 0x000372D2 */

loc_00204EFF: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00204F08u); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_00204F08: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x20) = 0x7F7A14;
    PUSH32(esp, 0x00204F19u); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00204F19: ;
    esi = MEM32(esp + 0xC4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00204F2Fu); RECOMP_ABI_CALL(0x00016280u, sub_00016280); /* call 0x00016280 */

loc_00204F2F: ;
    ecx = MEM32(esp + 0xC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00204F3Cu); RECOMP_ABI_CALL(0x00027E90u, sub_00027E90); /* call 0x00027E90 */

loc_00204F3C: ;
    edx = MEM32(esp + 0xCC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + eax * 4 + 0x24) = edx;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00204F59u); RECOMP_ABI_CALL(0x00036E9Fu, sub_00036E9F); /* call 0x00036E9F */

loc_00204F59: ;
    ecx = edi;
    PUSH32(esp, 0x00204F60u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00204F60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00204F70; /* je: equal / zero */

loc_00204F65: ;
    PUSH32(esp, 0x00204F6Au); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00204F6A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    goto loc_00204F79;

loc_00204F70: ;
    PUSH32(esp, 0x00204F75u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00204F75: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B);

loc_00204F79: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00204F80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00204F7Du); } /* indirect call */
    }

loc_00204F80: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00204F89u); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_00204F89: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x1C) = 0x7F7A14;
    PUSH32(esp, 0x00204F9Au); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_00204F9A: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00204FA3u); RECOMP_ABI_CALL(0x0001E502u, sub_0001E502); /* call 0x0001E502 */

loc_00204FA3: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00204FF0
 * Original: 0x00204FF0 - 0x00205087 (151 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204FF0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, 0x00204FFFu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00204FFF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020507F; /* je: equal / zero */

loc_00205005: ;
    ecx = esi;
    PUSH32(esp, 0x0020500Cu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0020500C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020507F; /* je: equal / zero */

loc_00205010: ;
    ecx = esi;
    PUSH32(esp, 0x00205017u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00205017: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205046; /* je: equal / zero */

loc_0020501B: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0x7F7A10;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020502Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020502Cu); } /* indirect call */
    }

loc_0020502F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00205035u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00205035: ;
    ecx = eax;
    PUSH32(esp, 0x0020503Cu); RECOMP_ABI_CALL(0x00017F95u, sub_00017F95); /* call 0x00017F95 */

loc_0020503C: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00205046: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0020504Fu); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_0020504F: ;
    eax = esp + 0x10;
    edi = 0x7F7A10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x00205066u); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_00205066: ;
    esi = MEM32(esp + 0x14);
    ecx = esp + 8;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x00205077u); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_00205077: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020507F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002050B0
 * Original: 0x002050B0 - 0x00205118 (104 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002050B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002050B0: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002050BEu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002050BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020510C; /* je: equal / zero */

loc_002050C2: ;
    ecx = eax;
    PUSH32(esp, 0x002050C9u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002050C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020510C; /* je: equal / zero */

loc_002050CD: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002050D6u); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_002050D6: ;
    ecx = MEM32(esp + 0xAC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    MEM32(esp + 0x14) = 0x7F7A14;
    PUSH32(esp, 0x002050F4u); RECOMP_ABI_CALL(0x000173BFu, sub_000173BF); /* call 0x000173BF */

loc_002050F4: ;
    esi = MEM32(esp + 0xA0);
    ecx = esp + 4;
    MEM32(esp + 0xC) = 0x7F7A14;
    PUSH32(esp, 0x0020510Cu); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_0020510C: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205140
 * Original: 0x00205140 - 0x002051A8 (104 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205140: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0020514Eu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0020514E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020519C; /* je: equal / zero */

loc_00205152: ;
    ecx = eax;
    PUSH32(esp, 0x00205159u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00205159: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020519C; /* je: equal / zero */

loc_0020515D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00205166u); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_00205166: ;
    ecx = MEM32(esp + 0xAC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    MEM32(esp + 0x14) = 0x7F7A14;
    PUSH32(esp, 0x00205184u); RECOMP_ABI_CALL(0x000173BFu, sub_000173BF); /* call 0x000173BF */

loc_00205184: ;
    esi = MEM32(esp + 0xA4);
    ecx = esp + 4;
    MEM32(esp + 0xC) = 0x7F7A14;
    PUSH32(esp, 0x0020519Cu); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_0020519C: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002051D0
 * Original: 0x002051D0 - 0x002052E1 (273 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002051D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002051D0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002051DCu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002051DC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002052DB; /* je: equal / zero */

loc_002051E6: ;
    ecx = edi;
    PUSH32(esp, 0x002051EDu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002051ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002052DB; /* je: equal / zero */

loc_002051F5: ;
    ecx = edi;
    PUSH32(esp, 0x002051FCu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002051FC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020526E; /* je: equal / zero */

loc_00205202: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0020520Bu); RECOMP_ABI_CALL(0x0003345Cu, sub_0003345C); /* call 0x0003345C */

loc_0020520B: ;
    edx = MEM32(edi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x1C) = 0x7F7A10;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020521Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020521Cu); } /* indirect call */
    }

loc_0020521F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00205225u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00205225: ;
    ecx = eax;
    PUSH32(esp, 0x0020522Cu); RECOMP_ABI_CALL(0x00017F95u, sub_00017F95); /* call 0x00017F95 */

loc_0020522C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00205235u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205232u); } /* indirect call */
    }

loc_00205235: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00205247u); RECOMP_ABI_CALL(0x000218F1u, sub_000218F1); /* call 0x000218F1 */

loc_00205247: ;
    PUSH32(esp, 0x0020524Cu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0020524C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00205257u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205254u); } /* indirect call */
    }

loc_00205257: ;
    ecx = esp + 8;
    MEM32(esp + 0x18) = 0x7F7A10;
    PUSH32(esp, 0x00205268u); RECOMP_ABI_CALL(0x0001CFAEu, sub_0001CFAE); /* call 0x0001CFAE */

loc_00205268: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020526E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00205277u); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00205277: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00205280u); RECOMP_ABI_CALL(0x0003345Cu, sub_0003345C); /* call 0x0003345C */

loc_00205280: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = 0x7F7A10;
    PUSH32(esp, 0x00205296u); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_00205296: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020529Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020529Cu); } /* indirect call */
    }

loc_0020529F: ;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002052B1u); RECOMP_ABI_CALL(0x000218F1u, sub_000218F1); /* call 0x000218F1 */

loc_002052B1: ;
    PUSH32(esp, 0x002052B6u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002052B6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002052C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002052BEu); } /* indirect call */
    }

loc_002052C1: ;
    ecx = esp + 8;
    MEM32(esp + 0x18) = 0x7F7A10;
    PUSH32(esp, 0x002052D2u); RECOMP_ABI_CALL(0x0001CFAEu, sub_0001CFAE); /* call 0x0001CFAE */

loc_002052D2: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002052DBu); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_002052DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00205330
 * Original: 0x00205330 - 0x0020540D (221 bytes, 59 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205330: ;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020533Cu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0020533C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205405; /* je: equal / zero */

loc_00205346: ;
    ecx = esi;
    PUSH32(esp, 0x0020534Du); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0020534D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205405; /* je: equal / zero */

loc_00205355: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0020535Eu); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_0020535E: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00205367u); RECOMP_ABI_CALL(0x000372D2u, sub_000372D2); /* call 0x000372D2 */

loc_00205367: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x5C) = 0x7F7A14;
    PUSH32(esp, 0x00205378u); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00205378: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0x20) = 0x7F7A10;
    PUSH32(esp, 0x0020538Eu); RECOMP_ABI_CALL(0x00025B68u, sub_00025B68); /* call 0x00025B68 */

loc_0020538E: ;
    edx = MEM32(esp + 0x20);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002053A1u); RECOMP_ABI_CALL(0x000173BFu, sub_000173BF); /* call 0x000173BF */

loc_002053A1: ;
    ecx = MEM32(esp + 0x20);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x002053B4u); RECOMP_ABI_CALL(0x00036E9Fu, sub_00036E9F); /* call 0x00036E9F */

loc_002053B4: ;
    ecx = esi;
    PUSH32(esp, 0x002053BBu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002053BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002053CA; /* je: equal / zero */

loc_002053BF: ;
    PUSH32(esp, 0x002053C4u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002053C4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    goto loc_002053D3;

loc_002053CA: ;
    PUSH32(esp, 0x002053CFu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002053CF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B);

loc_002053D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002053DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002053D7u); } /* indirect call */
    }

loc_002053DA: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x1C) = 0x7F7A10;
    PUSH32(esp, 0x002053EBu); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_002053EB: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x5C) = 0x7F7A14;
    PUSH32(esp, 0x002053FCu); RECOMP_ABI_CALL(0x0001E502u, sub_0001E502); /* call 0x0001E502 */

loc_002053FC: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00205405u); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_00205405: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00205450
 * Original: 0x00205450 - 0x00205530 (224 bytes, 60 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205450: ;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020545Cu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0020545C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205526; /* je: equal / zero */

loc_00205466: ;
    ecx = edi;
    PUSH32(esp, 0x0020546Du); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0020546D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205526; /* je: equal / zero */

loc_00205475: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0020547Fu); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_0020547F: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00205488u); RECOMP_ABI_CALL(0x000372D2u, sub_000372D2); /* call 0x000372D2 */

loc_00205488: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x60) = 0x7F7A14;
    PUSH32(esp, 0x00205499u); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00205499: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x24) = 0x7F7A10;
    PUSH32(esp, 0x002054AFu); RECOMP_ABI_CALL(0x00025B68u, sub_00025B68); /* call 0x00025B68 */

loc_002054AF: ;
    esi = MEM32(esp + 0x100);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002054C5u); RECOMP_ABI_CALL(0x000173BFu, sub_000173BF); /* call 0x000173BF */

loc_002054C5: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x002054D4u); RECOMP_ABI_CALL(0x00036E9Fu, sub_00036E9F); /* call 0x00036E9F */

loc_002054D4: ;
    ecx = edi;
    PUSH32(esp, 0x002054DBu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002054DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002054EB; /* je: equal / zero */

loc_002054E0: ;
    PUSH32(esp, 0x002054E5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002054E5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    goto loc_002054F4;

loc_002054EB: ;
    PUSH32(esp, 0x002054F0u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002054F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B);

loc_002054F4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002054FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002054F8u); } /* indirect call */
    }

loc_002054FB: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x1C) = 0x7F7A10;
    PUSH32(esp, 0x0020550Cu); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_0020550C: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x5C) = 0x7F7A14;
    PUSH32(esp, 0x0020551Du); RECOMP_ABI_CALL(0x0001E502u, sub_0001E502); /* call 0x0001E502 */

loc_0020551D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00205526u); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_00205526: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205570
 * Original: 0x00205570 - 0x002055AB (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205570: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0020557Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0020557B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002055AA; /* je: equal / zero */

loc_0020557F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00205587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205584u); } /* indirect call */
    }

loc_00205587: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002055A9; /* je: equal / zero */

loc_0020558D: ;
    PUSH32(esp, 0x00205592u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00205592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002055A9; /* je: equal / zero */

loc_00205596: ;
    ecx = eax;
    PUSH32(esp, 0x0020559Du); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0020559D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002055A9; /* je: equal / zero */

loc_002055A1: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x002055A9u); RECOMP_ABI_CALL(0x00028935u, sub_00028935); /* call 0x00028935 */

loc_002055A9: ;
    POP32(esp, esi);

loc_002055AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002055C0
 * Original: 0x002055C0 - 0x00205641 (129 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002055C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002055C0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((_fa == 0)) goto loc_002055E0; /* je: equal / zero */

loc_002055CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002055D9; /* je: equal / zero */

loc_002055CF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00205614; /* jne: not equal / not zero */

loc_002055D2: ;
    ebx = 0x7F7480;
    goto loc_002055E5;

loc_002055D9: ;
    ebx = 0x7F7458;
    goto loc_002055E5;

loc_002055E0: ;
    ebx = 0x7F7430;

loc_002055E5: ;
    _fb = (uint32_t)(0x7F7408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x7F7408;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002055F0: ;
    ecx = MEM32(ebx + edi + 0x7F7408);
    edx = MEM32(edi + 0x7F7408);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00205606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205603u); } /* indirect call */
    }

loc_00205606: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x28 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002055F0; /* jb: below (unsigned <) */

loc_0020560E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00205614: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00205616: ;
    ecx = MEM32(edi + 0x7F7408);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00205624u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205621u); } /* indirect call */
    }

loc_00205624: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x7F7408);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00205633u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205630u); } /* indirect call */
    }

loc_00205633: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x28 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00205616; /* jb: below (unsigned <) */

loc_0020563B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205670
 * Original: 0x00205670 - 0x00205698 (40 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205670: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    SET_LO8(eax, 1);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00205680: ;
    edi = MEM32(esi + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205693; /* jne: not equal / not zero */

loc_00205687: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00205680; /* jb: below (unsigned <) */

loc_00205690: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00205693: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002056B0
 * Original: 0x002056B0 - 0x00205742 (146 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002056B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002056B0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002056C0: ;
    eax = MEM32(esi + 0x7F7408);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002056CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002056CBu); } /* indirect call */
    }

loc_002056CE: ;
    MEM32(esp + esi + 8) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x28 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002056C0; /* jb: below (unsigned <) */

loc_002056DA: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    edi = edi;

loc_002056E0: ;
    ecx = MEM32(eax + 0x7F7430);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002056FC; /* jne: not equal / not zero */

loc_002056EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002056E0; /* jb: below (unsigned <) */

loc_002056F3: ;
    eax = 1;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002056FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00205700: ;
    edx = MEM32(eax + 0x7F7458);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020571C; /* jne: not equal / not zero */

loc_0020570B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00205700; /* jb: below (unsigned <) */

loc_00205713: ;
    eax = 2;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020571C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00205720: ;
    ecx = MEM32(eax + 0x7F7480);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020573C; /* jne: not equal / not zero */

loc_0020572B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00205720; /* jb: below (unsigned <) */

loc_00205733: ;
    eax = 3;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020573C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00205770
 * Original: 0x00205770 - 0x00205781 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205770(void)
{

loc_00205770: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00205780u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020577Du); } /* indirect call */
    }

loc_00205780: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00205790
 * Original: 0x00205790 - 0x002057A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205790(void)
{

loc_00205790: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002057A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020579Du); } /* indirect call */
    }

loc_002057A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002057B0
 * Original: 0x002057B0 - 0x002057D5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002057B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002057B0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002057CF; /* jne: not equal / not zero */

loc_002057B7: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002057CF; /* jne: not equal / not zero */

loc_002057BE: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002057CF; /* jne: not equal / not zero */

loc_002057C5: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002057CF; /* jne: not equal / not zero */

loc_002057CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002057CF: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002057E0
 * Original: 0x002057E0 - 0x00205808 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002057E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002057E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002057EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002057E8u); } /* indirect call */
    }

loc_002057EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002057F7; /* je: equal / zero */

loc_002057EF: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002057F7: ;
    ecx = MEM32(0x8FA6C8);
    MEM32(esi + 4) = edi;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205820
 * Original: 0x00205820 - 0x00205874 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205820: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020582Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205828u); } /* indirect call */
    }

loc_0020582B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205837; /* je: equal / zero */

loc_0020582F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00205837: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00205847u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205844u); } /* indirect call */
    }

loc_00205847: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205863; /* je: equal / zero */

loc_0020584B: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00205854u); RECOMP_ABI_CALL(0x00011D70u, sub_00011D70); /* call 0x00011D70 */

loc_00205854: ;
    MEM32(esi + 8) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00205863: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205890
 * Original: 0x00205890 - 0x00205951 (193 bytes, 66 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205890: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00205898u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00205898: ;
    ecx = eax;
    PUSH32(esp, 0x0020589Fu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0020589F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002058A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002058A3u); } /* indirect call */
    }

loc_002058A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205930; /* je: equal / zero */

loc_002058AF: ;
    PUSH32(esp, 0x002058B4u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002058B4: ;
    ecx = eax;
    PUSH32(esp, 0x002058BBu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002058BB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002058C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002058BFu); } /* indirect call */
    }

loc_002058C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205930; /* je: equal / zero */

loc_002058C7: ;
    PUSH32(esp, 0x002058CCu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002058CC: ;
    ecx = eax;
    PUSH32(esp, 0x002058D3u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002058D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002058DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002058D7u); } /* indirect call */
    }

loc_002058DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205930; /* je: equal / zero */

loc_002058DF: ;
    PUSH32(esp, 0x002058E4u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002058E4: ;
    ecx = eax;
    PUSH32(esp, 0x002058EBu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002058EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002058F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002058EFu); } /* indirect call */
    }

loc_002058F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205930; /* je: equal / zero */

loc_002058F7: ;
    PUSH32(esp, 0x002058FCu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002058FC: ;
    ecx = eax;
    PUSH32(esp, 0x00205903u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00205903: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020590Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205907u); } /* indirect call */
    }

loc_0020590A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205930; /* je: equal / zero */

loc_0020590F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00205925u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205922u); } /* indirect call */
    }

loc_00205925: ;
    MEM32(esi + 4) = 0xD;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00205930: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00205946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205943u); } /* indirect call */
    }

loc_00205946: ;
    MEM32(esi + 4) = 0xD;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00205990
 * Original: 0x00205990 - 0x002059ED (93 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205990: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020599Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205998u); } /* indirect call */
    }

loc_0020599B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002059A9; /* je: equal / zero */

loc_0020599F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002059A9: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8C);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002059B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002059B6u); } /* indirect call */
    }

loc_002059B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002059DA; /* je: equal / zero */

loc_002059BD: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002059C9u); RECOMP_ABI_CALL(0x00034AE1u, sub_00034AE1); /* call 0x00034AE1 */

loc_002059C9: ;
    MEM32(esi + 0x14) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002059DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205A10
 * Original: 0x00205A10 - 0x00205A64 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00205A1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205A18u); } /* indirect call */
    }

loc_00205A1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205A27; /* je: equal / zero */

loc_00205A1F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00205A27: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00205A37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205A34u); } /* indirect call */
    }

loc_00205A37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205A53; /* je: equal / zero */

loc_00205A3B: ;
    PUSH32(esp, 9);
    ecx = eax;
    PUSH32(esp, 0x00205A44u); RECOMP_ABI_CALL(0x00011D70u, sub_00011D70); /* call 0x00011D70 */

loc_00205A44: ;
    MEM32(esi + 8) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = 9;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00205A53: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = 9;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205A80
 * Original: 0x00205A80 - 0x00205AA1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00205A88u); RECOMP_ABI_CALL(0x00036616u, sub_00036616); /* call 0x00036616 */

loc_00205A88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205A9B; /* je: equal / zero */

loc_00205A8F: ;
    ecx = MEM32(0x8FA540);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00205A9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205A98u); } /* indirect call */
    }

loc_00205A9B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205AB0
 * Original: 0x00205AB0 - 0x00205AD1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00205AB8u); RECOMP_ABI_CALL(0x00034898u, sub_00034898); /* call 0x00034898 */

loc_00205AB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205ACB; /* je: equal / zero */

loc_00205ABF: ;
    ecx = MEM32(0x8FA540);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00205ACBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205AC8u); } /* indirect call */
    }

loc_00205ACB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205AE0
 * Original: 0x00205AE0 - 0x00205AFC (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00205AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205AE0: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 2;
    if (CMP_L(_fas, _fbs)) goto loc_00205AF9; /* jl: less (signed <) */

loc_00205AEC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00205AF9; /* jge: greater or equal (signed >=) */

loc_00205AF1: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00205AF9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205B10
 * Original: 0x00205B10 - 0x00205B2A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205B10: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205B23; /* je: equal / zero */

loc_00205B1A: ;
    PUSH32(esp, 0x00205B1Fu); RECOMP_ABI_CALL(0x000286DDu, sub_000286DD); /* call 0x000286DD */

loc_00205B1F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00205B23: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205B30
 * Original: 0x00205B30 - 0x00205B67 (55 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205B30: ;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205B5C; /* je: equal / zero */

loc_00205B3D: ;
    edx = MEM32(esp + 0x108);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00205B50u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00205B50: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00205B5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205B80
 * Original: 0x00205B80 - 0x00205BF0 (112 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205B80: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00205B9B; /* je: equal / zero */

loc_00205B8C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00205B99u); RECOMP_ABI_CALL(0x0002AD34u, sub_0002AD34); /* call 0x0002AD34 */

loc_00205B99: ;
    goto loc_00205BA8;

loc_00205B9B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00205BA8u); RECOMP_ABI_CALL(0x0001A4A2u, sub_0001A4A2); /* call 0x0001A4A2 */

loc_00205BA8: ;
    ecx = esp + 0x10;
    edi = eax;
    PUSH32(esp, 0x00205BB3u); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_00205BB3: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00205BCBu); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_00205BCB: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00205BDEu); RECOMP_ABI_CALL(0x0002DE5Du, sub_0002DE5D); /* call 0x0002DE5D */

loc_00205BDE: ;
    ecx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0x00205BE9u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00205BE9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00205C10
 * Original: 0x00205C10 - 0x00205C2C (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00205C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205C10: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00205C29; /* jl: less (signed <) */

loc_00205C1D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00205C27; /* jle: less or equal (signed <=) */

loc_00205C22: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x55 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205C29; /* jne: not equal / not zero */

loc_00205C27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00205C29: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205C40
 * Original: 0x00205C40 - 0x00205CC1 (129 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205C40: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205C67; /* jne: not equal / not zero */

loc_00205C4D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205CB8; /* je: equal / zero */

loc_00205C54: ;
    ecx = eax;
    PUSH32(esp, 0x00205C5Bu); RECOMP_ABI_CALL(0x00015D94u, sub_00015D94); /* call 0x00015D94 */

loc_00205C5B: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00205C67: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205C86; /* jne: not equal / not zero */

loc_00205C6C: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205CB8; /* je: equal / zero */

loc_00205C73: ;
    ecx = eax;
    PUSH32(esp, 0x00205C7Au); RECOMP_ABI_CALL(0x00025A87u, sub_00025A87); /* call 0x00025A87 */

loc_00205C7A: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00205C86: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205C9E; /* je: equal / zero */

loc_00205C8D: ;
    PUSH32(esp, 0x00205C92u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00205C92: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00205C9E: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205CB8; /* je: equal / zero */

loc_00205CA5: ;
    ecx = eax;
    PUSH32(esp, 0x00205CACu); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00205CAC: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00205CB8: ;
    eax = 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00205CF0
 * Original: 0x00205CF0 - 0x00205D8B (155 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205CF0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205D12; /* jne: not equal / not zero */

loc_00205D03: ;
    eax = 8;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205D12: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205D46; /* je: equal / zero */

loc_00205D19: ;
    edx = MEM32(esp + 0x10C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00205D2Du); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00205D2D: ;
    eax = MEM32(esp + 0x110);
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205D46: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205D7C; /* je: equal / zero */

loc_00205D4D: ;
    ecx = MEM32(esp + 0x10C);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00205D63u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_00205D63: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x110);
    MEM32(edx) = eax;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205D7C: ;
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00205DC0
 * Original: 0x00205DC0 - 0x00205E5A (154 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205DC0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 1 (32-bit) */
    ebx = 5;
    if (CMP_NE(_fa, _fb)) goto loc_00205DE5; /* jne: not equal / not zero */

loc_00205DD5: ;
    POP32(esp, edi);
    eax = 8;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205DE5: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205E4A; /* je: equal / zero */

loc_00205DEC: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00205DFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00205DF8u); } /* indirect call */
    }

loc_00205DFB: ;
    eax = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00205E3C; /* jbe: below or equal (unsigned <=) */

loc_00205E05: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x120);
    /* nop */

loc_00205E10: ;
    ecx = MEM32(edi + 8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00205E20u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00205E20: ;
    eax = MEM32(esp + 0x11C);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205E32; /* jne: not equal / not zero */

loc_00205E2D: ;
    MEM32(ebp) = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00205E32: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00205E10; /* jb: below (unsigned <) */

loc_00205E3B: ;
    POP32(esp, ebp);

loc_00205E3C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205E4A: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00205E80
 * Original: 0x00205E80 - 0x00205F76 (246 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205E80: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205EC9; /* jne: not equal / not zero */

loc_00205E93: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205EBD; /* je: equal / zero */

loc_00205E9A: ;
    edx = MEM32(esp + 0x10C);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00205EB0u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00205EB0: ;
    eax = MEM32(esp + 0x110);
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;

loc_00205EBD: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205EC9: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205EFD; /* je: equal / zero */

loc_00205ED0: ;
    eax = MEM32(esp + 0x10C);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x31);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00205EE4u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00205EE4: ;
    ecx = MEM32(esp + 0x110);
    edx = MEM32(esp + 4);
    eax = esi;
    MEM32(ecx) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205EFD: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205F31; /* je: equal / zero */

loc_00205F04: ;
    edx = MEM32(esp + 0x10C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00205F18u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_00205F18: ;
    eax = MEM32(esp + 0x110);
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205F31: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205F67; /* je: equal / zero */

loc_00205F38: ;
    ecx = MEM32(esp + 0x10C);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x31);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00205F4Eu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00205F4E: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x110);
    MEM32(edx) = eax;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205F67: ;
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00205FC0
 * Original: 0x00205FC0 - 0x0020615D (413 bytes, 133 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205FC0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00205FEA; /* jne: not equal / not zero */

loc_00205FD6: ;
    POP32(esp, edi);
    ebp = 8;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00205FEA: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206149; /* je: equal / zero */

loc_00205FF5: ;
    edi = MEM32(esp + 0x118);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00206009u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_00206009: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020614E; /* ja: above (unsigned >) */

loc_00206016: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x206160); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0020601Du) goto loc_0020601D;
    if (_jt == 0x0020605Bu) goto loc_0020605B;
    if (_jt == 0x00206099u) goto loc_00206099;
    if (_jt == 0x002060D7u) goto loc_002060D7;
    if (_jt == 0x00206111u) goto loc_00206111;
    if (_jt == 0x0020612Du) goto loc_0020612D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020601D: ;
    ebx = MEM32(esp + 0x11C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    MEM32(ebx) = 1;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020603Au); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020603A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020614E; /* jne: not equal / not zero */

loc_00206046: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(ebx) = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020605B: ;
    ebx = MEM32(esp + 0x11C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x14);
    MEM32(ebx) = 0;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00206078u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_00206078: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020614E; /* jne: not equal / not zero */

loc_00206084: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(ebx) = 8;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00206099: ;
    ebx = MEM32(esp + 0x11C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    MEM32(ebx) = 4;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002060B6u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_002060B6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020614E; /* jne: not equal / not zero */

loc_002060C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(ebx) = 7;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002060D7: ;
    ebx = MEM32(esp + 0x11C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    MEM32(ebx) = 3;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002060F4u); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_002060F4: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020614E; /* jne: not equal / not zero */

loc_002060FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(ebx) = 9;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00206111: ;
    edx = MEM32(esp + 0x11C);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(edx) = 6;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020612D: ;
    eax = MEM32(esp + 0x11C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 5;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00206149: ;
    ebp = 2;

loc_0020614E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206230
 * Original: 0x00206230 - 0x00206259 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206230: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206242; /* je: equal / zero */

loc_0020623B: ;
    eax = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00206242: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206252; /* je: equal / zero */

loc_00206249: ;
    PUSH32(esp, 0x0020624Eu); RECOMP_ABI_CALL(0x0002F820u, sub_0002F820); /* call 0x0002F820 */

loc_0020624E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00206252: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00206270
 * Original: 0x00206270 - 0x00206294 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00206270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206270: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 2;
    if ((_fa == 0)) goto loc_0020628F; /* je: equal / zero */

loc_0020627E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00206287; /* je: equal / zero */

loc_00206281: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00206291; /* jne: not equal / not zero */

loc_00206284: ;
    esp += 8; return; /* ret 4 */

loc_00206287: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0020628F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00206291: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002062A0
 * Original: 0x002062A0 - 0x002062AE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002062A0(void)
{

loc_002062A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8B4CF0);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002062C0
 * Original: 0x002062C0 - 0x002062E5 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002062C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002062C0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002062E0; /* je: equal / zero */

loc_002062CA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002062D8; /* je: equal / zero */

loc_002062CD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002062E2; /* jne: not equal / not zero */

loc_002062D0: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_002062D8: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_002062E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002062E2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002062F0
 * Original: 0x002062F0 - 0x00206315 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002062F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002062F0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00206310; /* je: equal / zero */

loc_002062FA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00206308; /* je: equal / zero */

loc_002062FD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00206312; /* jne: not equal / not zero */

loc_00206300: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_00206308: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00206310: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00206312: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206320
 * Original: 0x00206320 - 0x0020633A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00206320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206320: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00206335; /* je: equal / zero */

loc_0020632A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00206337; /* jne: not equal / not zero */

loc_0020632D: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00206335: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00206337: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206340
 * Original: 0x00206340 - 0x00206366 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206340: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x18;
    MEM32(eax) = 0x7F81F0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(eax + 4) = 0xF;
    esp += 4; return; /* ret */

}

/**
 * sub_00206370
 * Original: 0x00206370 - 0x0020638B (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206370: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206383; /* je: equal / zero */

loc_00206379: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206383; /* je: equal / zero */

loc_0020637E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00206383: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002063A0
 * Original: 0x002063A0 - 0x00206406 (102 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002063A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002063A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x7F81F0;
    if (CMP_EQ(_fa, _fb)) goto loc_002063C7; /* je: equal / zero */

loc_002063B4: ;
    ecx = edi;
    PUSH32(esp, 0x002063BBu); RECOMP_ABI_CALL(0x00036616u, sub_00036616); /* call 0x00036616 */

loc_002063BB: ;
    ecx = MEM32(0x8FA540);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002063C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002063C4u); } /* indirect call */
    }

loc_002063C7: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    MEM32(esi + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002063D7; /* je: equal / zero */

loc_002063CF: ;
    PUSH32(esp, 0x002063D4u); RECOMP_ABI_CALL(0x0001568Cu, sub_0001568C); /* call 0x0001568C */

loc_002063D4: ;
    MEM32(esi + 0xC) = ebx;

loc_002063D7: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002063DF; /* je: equal / zero */

loc_002063DC: ;
    MEM32(esi + 0x10) = ebx;

loc_002063DF: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002063FC; /* je: equal / zero */

loc_002063E6: ;
    ecx = edi;
    PUSH32(esp, 0x002063EDu); RECOMP_ABI_CALL(0x00034898u, sub_00034898); /* call 0x00034898 */

loc_002063ED: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002063F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002063F6u); } /* indirect call */
    }

loc_002063F9: ;
    MEM32(esi + 0x14) = ebx;

loc_002063FC: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7F7870;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00206420
 * Original: 0x00206420 - 0x00206429 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206420(void)
{

loc_00206420: ;
    eax = ecx;
    MEM32(eax) = 0x7F7930;
    esp += 4; return; /* ret */

}

/**
 * sub_00206430
 * Original: 0x00206430 - 0x00206479 (73 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206464; /* jne: not equal / not zero */

loc_0020643A: ;
    ecx = MEM32(0x8FA540);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0020644Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00206447u); } /* indirect call */
    }

loc_0020644A: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020645F; /* je: equal / zero */

loc_00206450: ;
    PUSH32(esp, edi);
    ecx = 0x27;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    goto loc_00206461;

loc_0020645F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00206461: ;
    MEM32(esi + 8) = edx;

loc_00206464: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00206475u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206475: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206490
 * Original: 0x00206490 - 0x002064C1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206490: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002064BC; /* je: equal / zero */

loc_0020649D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002064A6u); RECOMP_ABI_CALL(0x00014499u, sub_00014499); /* call 0x00014499 */

loc_002064A6: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x002064B3u); RECOMP_ABI_CALL(0x0002FBA4u, sub_0002FBA4); /* call 0x0002FBA4 */

loc_002064B3: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002064BCu); RECOMP_ABI_CALL(0x00029803u, sub_00029803); /* call 0x00029803 */

loc_002064BC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002064D0
 * Original: 0x002064D0 - 0x0020651E (78 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002064D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002064D0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x002064DEu); RECOMP_ABI_CALL(0x00034037u, sub_00034037); /* call 0x00034037 */

loc_002064DE: ;
    ecx = MEM32(esp + 0x88);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x002064F4u); RECOMP_ABI_CALL(0x00028084u, sub_00028084); /* call 0x00028084 */

loc_002064F4: ;
    edx = MEM32(esp + 0x8C);
    eax = esp + 8;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00206503: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206503; /* jne: not equal / not zero */

loc_0020650D: ;
    ecx = esp;
    PUSH32(esp, 0x00206515u); RECOMP_ABI_CALL(0x00034FE1u, sub_00034FE1); /* call 0x00034FE1 */

loc_00206515: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206540
 * Original: 0x00206540 - 0x0020664F (271 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206540: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x29C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_0020656A; /* jne: not equal / not zero */

loc_00206563: ;
    PUSH32(esp, 0x00206568u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206568: ;
    goto loc_0020656F;

loc_0020656A: ;
    PUSH32(esp, 0x0020656Fu); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_0020656F: ;
    ebx = MEM32(esp + 0x2B0);
    eax = esp + 0x3A;
    edx = ebx;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00206580: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206580; /* jne: not equal / not zero */

loc_0020658A: ;
    PUSH32(esp, 0x0020658Fu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0020658F: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x9C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002065E9; /* je: equal / zero */

loc_0020659A: ;
    edx = esp + 0x62;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, 0x7F82AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002065B1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002065B1: ;
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002065BEu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002065BE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002065CBu); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_002065CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206643; /* je: equal / zero */

loc_002065CF: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002065DDu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002065DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x29C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002065E9: ;
    edx = esp + 0x77;
    PUSH32(esp, edx);
    eax = esp + 0x1AC;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00206600u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00206600: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    edx = esp + 0x1B0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020661Du); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0020661D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00206628u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00206628: ;
    eax = esp + 0x3A;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E0380);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00206640u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00206640: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00206643: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x29C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002066A0
 * Original: 0x002066A0 - 0x002067D5 (309 bytes, 100 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002066A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002066A0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_002066C2; /* jne: not equal / not zero */

loc_002066BB: ;
    PUSH32(esp, 0x002066C0u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_002066C0: ;
    goto loc_002066C7;

loc_002066C2: ;
    PUSH32(esp, 0x002066C7u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_002066C7: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1A8);
    eax = esp + 0x6E;
    PUSH32(esp, esi);
    edx = ebp;
    ecx = eax;
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002066E0;

    /* nop */

loc_002066E0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002066E0; /* jne: not equal / not zero */

loc_002066EA: ;
    PUSH32(esp, 0x002066EFu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002066EF: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x9C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002067BC; /* je: equal / zero */

loc_002066FF: ;
    SET_LO8(eax, MEM8(esp + 0x9B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206770; /* je: equal / zero */

loc_0020670A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206716; /* jne: not equal / not zero */

loc_0020670E: ;
    _fa = (uint32_t)(MEM16(esp + 0x36)) & 0xFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x36), 0x1D (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00206770; /* ja: above (unsigned >) */

loc_00206716: ;
    edx = esp + 0x76;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, 0x7F82D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020672Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020672D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00206730: ;
    SET_LO8(ecx, MEM8(esp + 0xA8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0xA8;
    if (CMP_EQ(_fa, _fb)) goto loc_00206752; /* je: equal / zero */

loc_00206742: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020674A; /* jne: not equal / not zero */

loc_00206747: ;
    MEM8(eax) = 0x5F;

loc_0020674A: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206742; /* jne: not equal / not zero */

loc_00206752: ;
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020675Fu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0020675F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020676Cu); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_0020676C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002067A5; /* jne: not equal / not zero */

loc_00206770: ;
    edx = esp + 0x62;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, 0x7F82C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00206787u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00206787: ;
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00206794u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00206794: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002067A1u); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_002067A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002067B0; /* je: equal / zero */

loc_002067A5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002067B0u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002067B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002067BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_002067C0: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x77));
    MEM8(esp + eax + 0xA8) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002067C0; /* jne: not equal / not zero */

loc_002067D0: ;
    goto loc_00206730;

}

/**
 * sub_00206830
 * Original: 0x00206830 - 0x002068D7 (167 bytes, 57 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206830: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00206859; /* jne: not equal / not zero */

loc_00206852: ;
    PUSH32(esp, 0x00206857u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206857: ;
    goto loc_0020685E;

loc_00206859: ;
    PUSH32(esp, 0x0020685Eu); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_0020685E: ;
    ebx = MEM32(esp + 0x1AC);
    eax = esp + 0x5E;
    edx = ebx;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00206870: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206870; /* jne: not equal / not zero */

loc_0020687A: ;
    _fa = (uint32_t)(MEM32(esp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x98), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002068CC; /* je: equal / zero */

loc_00206883: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00206889u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00206889: ;
    edx = esp + 0x62;
    PUSH32(esp, edx);
    esi = eax;
    eax = esp + 0xAC;
    PUSH32(esp, 0x7F82DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002068A2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002068A2: ;
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002068AFu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002068AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002068BCu); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_002068BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002068CB; /* je: equal / zero */

loc_002068C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002068CBu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002068CB: ;
    POP32(esp, edi);

loc_002068CC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206900
 * Original: 0x00206900 - 0x00206978 (120 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206900: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00206922; /* jne: not equal / not zero */

loc_0020691B: ;
    PUSH32(esp, 0x00206920u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206920: ;
    goto loc_00206927;

loc_00206922: ;
    PUSH32(esp, 0x00206927u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206927: ;
    eax = MEM32(esp + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206954; /* jne: not equal / not zero */

loc_00206932: ;
    edx = MEM32(esp + 0xA4);
    eax = esp + 0x60;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00206941: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206941; /* jne: not equal / not zero */

loc_0020694B: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00206954: ;
    edx = ZX16(MEM16(esp + 0x2A));
    eax = MEM32(esp + 0xA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F82EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020696Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020696C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002069A0
 * Original: 0x002069A0 - 0x00206A5C (188 bytes, 66 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002069A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002069A0: ;
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1A4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1AC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1B8);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002069C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002069C6u); } /* indirect call */
    }

loc_002069C9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002069DE; /* jne: not equal / not zero */

loc_002069CE: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002069DCu); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_002069DC: ;
    goto loc_002069EC;

loc_002069DE: ;
    ecx = MEM32(esi + 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002069ECu); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_002069EC: ;
    eax = MEM32(esp + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206A4F; /* jne: not equal / not zero */

loc_002069F7: ;
    eax = esp + 0x66;
    PUSH32(esp, eax);
    ecx = esp + 0xB0;
    PUSH32(esp, 0x7F82F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00206A0Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00206A0E: ;
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00206A1Bu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00206A1B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00206A25u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00206A25: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00206A2Fu); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_00206A2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206A4B; /* je: equal / zero */

loc_00206A33: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00206A3Eu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00206A3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00206A4B: ;
    MEM8(ebp) = 0;

loc_00206A4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206A90
 * Original: 0x00206A90 - 0x00206B55 (197 bytes, 60 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206A90: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00206AB2; /* jne: not equal / not zero */

loc_00206AAB: ;
    PUSH32(esp, 0x00206AB0u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206AB0: ;
    goto loc_00206AB7;

loc_00206AB2: ;
    PUSH32(esp, 0x00206AB7u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206AB7: ;
    eax = MEM32(esp + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206AE5; /* je: equal / zero */

loc_00206AC2: ;
    ecx = MEM32(esp + 0x1A4);
    eax = esp + 0x2E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00206AD9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00206AD9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00206AE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x5E;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, 0x7F8310);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00206AFEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00206AFE: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00206B0Bu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00206B0B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00206B15u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00206B15: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00206B1Fu); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_00206B1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206B40; /* je: equal / zero */

loc_00206B23: ;
    edx = MEM32(esp + 0x1AC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00206B35u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00206B35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00206B40: ;
    eax = MEM32(esp + 0x1AC);
    POP32(esp, edi);
    MEM8(eax) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x19C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206B90
 * Original: 0x00206B90 - 0x00206BE0 (80 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206B90: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00206BABu); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206BAB: ;
    eax = MEM32(esp + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206BCF; /* jne: not equal / not zero */

loc_00206BB6: ;
    eax = ZX8(MEM8(esp + 0x9D));
    eax = MEM32(eax * 4 + 0x8B4F24);
    POP32(esp, esi);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00206BCF: ;
    eax = MEM32(esi * 4 + 0x8B4F24);
    POP32(esp, esi);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206C00
 * Original: 0x00206C00 - 0x00206C43 (67 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00206C08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00206C05u); } /* indirect call */
    }

loc_00206C08: ;
    PUSH32(esp, 0x1A4);
    PUSH32(esp, 0x00206C12u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_00206C12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206C33; /* je: equal / zero */

loc_00206C19: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00206C25u); RECOMP_ABI_CALL(0x00030EE6u, sub_00030EE6); /* call 0x00030EE6 */

loc_00206C25: ;
    ecx = eax;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00206C2Fu); RECOMP_ABI_CALL(0x0001D55Du, sub_0001D55D); /* call 0x0001D55D */

loc_00206C2F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00206C33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00206C3Fu); RECOMP_ABI_CALL(0x0001D55Du, sub_0001D55D); /* call 0x0001D55D */

loc_00206C3F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206C60
 * Original: 0x00206C60 - 0x00206CB8 (88 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206C60: ;
    ecx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206CB5; /* je: equal / zero */

loc_00206C69: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00206CAF; /* ja: above (unsigned >) */

loc_00206C72: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x206CB8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00206C79u) goto loc_00206C79;
    if (_jt == 0x00206C82u) goto loc_00206C82;
    if (_jt == 0x00206C8Bu) goto loc_00206C8B;
    if (_jt == 0x00206C94u) goto loc_00206C94;
    if (_jt == 0x00206C9Du) goto loc_00206C9D;
    if (_jt == 0x00206CA6u) goto loc_00206CA6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00206C79: ;
    eax = MEM32(ecx + 0x17C);
    esp += 8; return; /* ret 4 */

loc_00206C82: ;
    eax = MEM32(ecx + 0x180);
    esp += 8; return; /* ret 4 */

loc_00206C8B: ;
    eax = MEM32(ecx + 0x190);
    esp += 8; return; /* ret 4 */

loc_00206C94: ;
    eax = MEM32(ecx + 0x184);
    esp += 8; return; /* ret 4 */

loc_00206C9D: ;
    eax = MEM32(ecx + 0x188);
    esp += 8; return; /* ret 4 */

loc_00206CA6: ;
    eax = MEM32(ecx + 0x18C);
    esp += 8; return; /* ret 4 */

loc_00206CAF: ;
    eax = MEM32(ecx + 0x194);

loc_00206CB5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206D20
 * Original: 0x00206D20 - 0x00206D3A (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206D20: ;
    ecx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206D37; /* je: equal / zero */

loc_00206D29: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax * 4 + 0x7F74A8);
    eax = MEM32(ecx + edx * 4);

loc_00206D37: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206D40
 * Original: 0x00206D40 - 0x00206D5C (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206D40: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206D59; /* je: equal / zero */

loc_00206D47: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx * 4 + 0x7F74A8);
    ecx = MEM32(esp + 8);
    MEM32(eax + edx * 4) = ecx;

loc_00206D59: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206D70
 * Original: 0x00206D70 - 0x00206D73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D70(void)
{

loc_00206D70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206D80
 * Original: 0x00206D80 - 0x00206DED (109 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206D80: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x00206D8Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00206D8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206DEC; /* je: equal / zero */

loc_00206D8F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00206D97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00206D94u); } /* indirect call */
    }

loc_00206D97: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206DEB; /* je: equal / zero */

loc_00206D9D: ;
    PUSH32(esp, 0x00206DA2u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00206DA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206DEB; /* je: equal / zero */

loc_00206DA6: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00206DAEu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00206DAE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206DEA; /* je: equal / zero */

loc_00206DB4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00206DC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00206DBEu); } /* indirect call */
    }

loc_00206DC0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00206DCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00206DCAu); } /* indirect call */
    }

loc_00206DCC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x00206DDBu); RECOMP_ABI_CALL(0x0002495Cu, sub_0002495C); /* call 0x0002495C */

loc_00206DDB: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00206DE8u); RECOMP_ABI_CALL(0x0002495Cu, sub_0002495C); /* call 0x0002495C */

loc_00206DE8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00206DEA: ;
    POP32(esp, edi);

loc_00206DEB: ;
    POP32(esp, esi);

loc_00206DEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00206E10
 * Original: 0x00206E10 - 0x00206E51 (65 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206E10: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00206E3E; /* jne: not equal / not zero */

loc_00206E2B: ;
    PUSH32(esp, 0x00206E30u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206E30: ;
    eax = ZX16(MEM16(esp + 0x2A));
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00206E3E: ;
    PUSH32(esp, 0x00206E43u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206E43: ;
    eax = ZX16(MEM16(esp + 0x2A));
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206E70
 * Original: 0x00206E70 - 0x00206EB7 (71 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206E70: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00206EA1; /* jne: not equal / not zero */

loc_00206E8B: ;
    PUSH32(esp, 0x00206E90u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206E90: ;
    eax = ZX8(MEM8(esp + 0x98));
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00206EA1: ;
    PUSH32(esp, 0x00206EA6u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206EA6: ;
    eax = ZX8(MEM8(esp + 0x98));
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206ED0
 * Original: 0x00206ED0 - 0x00206F17 (71 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206ED0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00206F01; /* jne: not equal / not zero */

loc_00206EEB: ;
    PUSH32(esp, 0x00206EF0u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206EF0: ;
    eax = ZX16(MEM16(esp + 0x88));
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00206F01: ;
    PUSH32(esp, 0x00206F06u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206F06: ;
    eax = ZX16(MEM16(esp + 0x88));
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206F30
 * Original: 0x00206F30 - 0x00206F77 (71 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206F30: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00206F61; /* jne: not equal / not zero */

loc_00206F4B: ;
    PUSH32(esp, 0x00206F50u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206F50: ;
    eax = ZX16(MEM16(esp + 0x8A));
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00206F61: ;
    PUSH32(esp, 0x00206F66u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206F66: ;
    eax = ZX16(MEM16(esp + 0x8A));
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206F90
 * Original: 0x00206F90 - 0x00206FD3 (67 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206F90: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00206FB6; /* jne: not equal / not zero */

loc_00206FAF: ;
    PUSH32(esp, 0x00206FB4u); RECOMP_ABI_CALL(0x00035D65u, sub_00035D65); /* call 0x00035D65 */

loc_00206FB4: ;
    goto loc_00206FBB;

loc_00206FB6: ;
    PUSH32(esp, 0x00206FBBu); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00206FBB: ;
    _fa = (uint32_t)(MEM32(esp + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x94), 1 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00206FC9; /* je: equal / zero */

loc_00206FC7: ;
    SET_LO8(eax, LO8(ebx));

loc_00206FC9: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206FF0
 * Original: 0x00206FF0 - 0x0020702E (62 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206FF0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 8;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00207005u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00207005: ;
    ecx = MEM32(esp + 0x1C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00207018u); RECOMP_ABI_CALL(0x00023390u, sub_00023390); /* call 0x00023390 */

loc_00207018: ;
    esi = MEM32(esp + 4);
    ecx = esp + 8;
    PUSH32(esp, 0x00207025u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_00207025: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00207040
 * Original: 0x00207040 - 0x00207074 (52 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207040: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ecx = esp + 4;
    PUSH32(esp, 0x0020704Du); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_0020704D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00207060u); RECOMP_ABI_CALL(0x00017A81u, sub_00017A81); /* call 0x00017A81 */

loc_00207060: ;
    ecx = esp + 4;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0020706Bu); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_0020706B: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00207090
 * Original: 0x00207090 - 0x0020709E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207090(void)
{

loc_00207090: ;
    eax = ecx;
    MEM32(eax) = 0x7F8328;
    MEM32(0x8F9584) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002070B0
 * Original: 0x002070B0 - 0x002070C1 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002070B0(void)
{

loc_002070B0: ;
    MEM32(ecx) = 0x7F8328;
    MEM32(0x8F9584) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002070D0
 * Original: 0x002070D0 - 0x002070D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002070D0(void)
{

loc_002070D0: ;
    eax = MEM32(0x8F9584);
    esp += 4; return; /* ret */

}

/**
 * sub_002070E0
 * Original: 0x002070E0 - 0x002070EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002070E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002070E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002070E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002070E2u); } /* indirect call */
    }

loc_002070E5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_002070F0
 * Original: 0x002070F0 - 0x00207106 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002070F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002070F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002070F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002070F2u); } /* indirect call */
    }

loc_002070F5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002070FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002070F9u); } /* indirect call */
    }

loc_002070FC: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10C)); return; /* indirect tail jmp */

}

/**
 * sub_00207110
 * Original: 0x00207110 - 0x0020711C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207110: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00207115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207112u); } /* indirect call */
    }

loc_00207115: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_00207120
 * Original: 0x00207120 - 0x0020712C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207120: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00207125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207122u); } /* indirect call */
    }

loc_00207125: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_00207130
 * Original: 0x00207130 - 0x00207146 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207130: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00207135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207132u); } /* indirect call */
    }

loc_00207135: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020713Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207139u); } /* indirect call */
    }

loc_0020713C: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x110)); return; /* indirect tail jmp */

}

/**
 * sub_00207150
 * Original: 0x00207150 - 0x0020715C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207150: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00207155u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207152u); } /* indirect call */
    }

loc_00207155: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_00207160
 * Original: 0x00207160 - 0x0020716C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207160: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00207165u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207162u); } /* indirect call */
    }

loc_00207165: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_00207170
 * Original: 0x00207170 - 0x0020717C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207170: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00207175u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207172u); } /* indirect call */
    }

loc_00207175: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x34)); return; /* indirect tail jmp */

}

/**
 * sub_00207180
 * Original: 0x00207180 - 0x0020718C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207180: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00207185u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207182u); } /* indirect call */
    }

loc_00207185: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_00207190
 * Original: 0x00207190 - 0x002071A3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207190: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00207195u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207192u); } /* indirect call */
    }

loc_00207195: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020719Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207199u); } /* indirect call */
    }

loc_0020719C: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_002071B0
 * Original: 0x002071B0 - 0x002071BC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071B0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002071B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002071B2u); } /* indirect call */
    }

loc_002071B5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x3C)); return; /* indirect tail jmp */

}

/**
 * sub_002071C0
 * Original: 0x002071C0 - 0x002071CC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071C0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002071C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002071C2u); } /* indirect call */
    }

loc_002071C5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x50)); return; /* indirect tail jmp */

}

/**
 * sub_002071D0
 * Original: 0x002071D0 - 0x002071DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002071D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002071D2u); } /* indirect call */
    }

loc_002071D5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_002071E0
 * Original: 0x002071E0 - 0x002071E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071E0(void)
{

loc_002071E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002071F0
 * Original: 0x002071F0 - 0x002071F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071F0(void)
{

loc_002071F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00207200
 * Original: 0x00207200 - 0x0020720D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207200(void)
{

loc_00207200: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x90) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207210
 * Original: 0x00207210 - 0x0020721D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207210(void)
{

loc_00207210: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x8C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207220
 * Original: 0x00207220 - 0x00207229 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207220(void)
{

loc_00207220: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207230
 * Original: 0x00207230 - 0x0020723A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207230(void)
{

loc_00207230: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207240
 * Original: 0x00207240 - 0x0020724A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207240(void)
{

loc_00207240: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207250
 * Original: 0x00207250 - 0x0020725D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207250(void)
{

loc_00207250: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xB0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207260
 * Original: 0x00207260 - 0x0020726B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207260: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00207270
 * Original: 0x00207270 - 0x0020730E (158 bytes, 68 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207270: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020729F; /* je: equal / zero */

loc_00207296: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020729Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020729C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020729F: ;
    edi = MEM32(esp + 0x18);
    eax = edi;
    edx = eax + 1;

loc_002072A8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002072A8; /* jne: not equal / not zero */

loc_002072AF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002072BAu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002072BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    ecx = edi;

loc_002072C2: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002072C2; /* jne: not equal / not zero */

loc_002072CC: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002072DC; /* je: equal / zero */

loc_002072D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002072D9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002072D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002072DC: ;
    edi = MEM32(esp + 0x1C);
    eax = edi;
    edx = eax + 1;

loc_002072E5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002072E5; /* jne: not equal / not zero */

loc_002072EC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002072F7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002072F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);

loc_00207301: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00207301; /* jne: not equal / not zero */

loc_0020730B: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00207340
 * Original: 0x00207340 - 0x0020735E (30 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207340(void)
{

loc_00207340: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00207370
 * Original: 0x00207370 - 0x00207373 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207370(void)
{

loc_00207370: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00207380
 * Original: 0x00207380 - 0x00207384 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207380(void)
{

loc_00207380: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00207390
 * Original: 0x00207390 - 0x00207394 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207390(void)
{

loc_00207390: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002073A0
 * Original: 0x002073A0 - 0x002073A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073A0(void)
{

loc_002073A0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_002073B0
 * Original: 0x002073B0 - 0x002073B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073B0(void)
{

loc_002073B0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002073C0
 * Original: 0x002073C0 - 0x002073DE (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002073C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002073C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002073C5u); } /* indirect call */
    }

loc_002073C8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x002073CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002073CCu); } /* indirect call */
    }

loc_002073CF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x002073D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002073D3u); } /* indirect call */
    }

loc_002073D6: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x48)); return; /* indirect tail jmp */

}

/**
 * sub_002073F0
 * Original: 0x002073F0 - 0x0020740E (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002073F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002073F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002073F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002073F5u); } /* indirect call */
    }

loc_002073F8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x002073FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002073FCu); } /* indirect call */
    }

loc_002073FF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00207406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207403u); } /* indirect call */
    }

loc_00207406: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x48)); return; /* indirect tail jmp */

}

/**
 * sub_00207420
 * Original: 0x00207420 - 0x00207453 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207420(void)
{

loc_00207420: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(esi + 0x5C) = 0;
    MEM32(esi + 0x60) = 0;
    MEM8(esi + 0x64) = 0;
    MEM8(esi + 0x66) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00207444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207441u); } /* indirect call */
    }

loc_00207444: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00207451u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020744Eu); } /* indirect call */
    }

loc_00207451: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207460
 * Original: 0x00207460 - 0x002075B7 (343 bytes, 112 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00207460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x45C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207478u); RECOMP_ABI_CALL(0x0001FD76u, sub_0001FD76); /* call 0x0001FD76 */

loc_00207478: ;
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207483u); RECOMP_ABI_CALL(0x0001E3E5u, sub_0001E3E5); /* call 0x0001E3E5 */

loc_00207483: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002075A3; /* je: equal / zero */

loc_00207498: ;
    edi = eax;
    eax = eax + eax * 2;
    ecx = eax * 8 + 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002074ACu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002074AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002074C8; /* je: equal / zero */

loc_002074B3: ;
    PUSH32(esp, 0x1CAB8);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002074C6u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_002074C6: ;
    goto loc_002074CA;

loc_002074C8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002074CA: ;
    edx = MEM32(ebp + 8);
    ecx = esp + 0x40;
    MEM32(edx) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002074D8u); RECOMP_ABI_CALL(0x000157D6u, sub_000157D6); /* call 0x000157D6 */

loc_002074D8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020759A; /* jle: less or equal (signed <=) */

loc_002074E2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002074E4: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002074F3u); RECOMP_ABI_CALL(0x0001BB8Bu, sub_0001BB8B); /* call 0x0001BB8B */

loc_002074F3: ;
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x170;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020750Du); RECOMP_ABI_CALL(0x00028917u, sub_00028917); /* call 0x00028917 */

loc_0020750D: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x170);
    edx = esp + 0x270;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, 0x7E8F90);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020752Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020752D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x170;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020753Cu); RECOMP_ABI_CALL(0x00021CE3u, sub_00021CE3); /* call 0x00021CE3 */

loc_0020753C: ;
    ecx = MEM32(0x8F9584);
    edx = MEM32(ecx);
    esi = eax;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x32;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020754Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207549u); } /* indirect call */
    }

loc_0020754C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0020755Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020755Cu); } /* indirect call */
    }

loc_0020755F: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C4);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00207588u); RECOMP_ABI_CALL(0x00033538u, sub_00033538); /* call 0x00033538 */

loc_00207588: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002074E4; /* jl: less (signed <) */

loc_00207598: ;
    ebx = eax;

loc_0020759A: ;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002075A3u); RECOMP_ABI_CALL(0x000220C1u, sub_000220C1); /* call 0x000220C1 */

loc_002075A3: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002075ACu); RECOMP_ABI_CALL(0x0002D589u, sub_0002D589); /* call 0x0002D589 */

loc_002075AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207610
 * Original: 0x00207610 - 0x00207682 (114 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207610: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0020761Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207619u); } /* indirect call */
    }

loc_0020761C: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00207625u); RECOMP_ABI_CALL(0x0001FD76u, sub_0001FD76); /* call 0x0001FD76 */

loc_00207625: ;
    ebp = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00207671; /* jle: less or equal (signed <=) */

loc_0020762D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00207640: ;
    edx = MEM32(esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00207651u); RECOMP_ABI_CALL(0x00012F63u, sub_00012F63); /* call 0x00012F63 */

loc_00207651: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + esi);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00207669u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207666u); } /* indirect call */
    }

loc_00207669: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00207640; /* jne: not equal / not zero */

loc_0020766F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00207671: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0020767Au); RECOMP_ABI_CALL(0x0002D589u, sub_0002D589); /* call 0x0002D589 */

loc_0020767A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002076A0
 * Original: 0x002076A0 - 0x002076C3 (35 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002076A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002076A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x002076A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002076A5u); } /* indirect call */
    }

loc_002076A8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002076BF; /* jle: less or equal (signed <=) */

loc_002076B0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x002076BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002076BCu); } /* indirect call */
    }

loc_002076BF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002076D0
 * Original: 0x002076D0 - 0x00207748 (120 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002076D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002076D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x002076D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002076D6u); } /* indirect call */
    }

loc_002076D9: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x002076F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002076EEu); } /* indirect call */
    }

loc_002076F1: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    edx = eax + 1;
    POP32(esp, esi);
    goto loc_00207700;

    /* nop */

loc_00207700: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207700; /* jne: not equal / not zero */

loc_00207707: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207712u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00207712: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;

loc_00207723: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00207723; /* jne: not equal / not zero */

loc_0020772D: ;
    edx = MEM32(esp);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207738u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00207738: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00207742u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00207742: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207770
 * Original: 0x00207770 - 0x002078E6 (374 bytes, 118 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207770: ;
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x360);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002077A5; /* je: equal / zero */

loc_00207789: ;
    eax = MEM32(esp + 0x364);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002077A5; /* jle: less or equal (signed <=) */

loc_00207794: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020779Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020779F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_002077A5: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x002077AEu); RECOMP_ABI_CALL(0x0001FD76u, sub_0001FD76); /* call 0x0001FD76 */

loc_002077AE: ;
    ecx = MEM32(esp + 0x360);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x002077BFu); RECOMP_ABI_CALL(0x0001E3E5u, sub_0001E3E5); /* call 0x0001E3E5 */

loc_002077BF: ;
    eax = MEM32(esp + 0x24);
    esi = eax;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x002077D4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002077D4: ;
    ebx = eax;
    ecx = esi;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x36C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_002078C7; /* jle: less or equal (signed <=) */

loc_00207802: ;
    PUSH32(esp, 0x00207807u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00207807: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x18)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x18))); }
    edi = edx;
    _fa = (uint32_t)(MEM8(edi + ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002078BA; /* jne: not equal / not zero */

loc_00207818: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00207827u); RECOMP_ABI_CALL(0x0001BB8Bu, sub_0001BB8B); /* call 0x0001BB8B */

loc_00207827: ;
    eax = MEM32(esp + 0x360);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x30);
    ebx = ecx;
    if ((_fa == 0)) goto loc_00207848; /* je: equal / zero */

loc_00207837: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00207854; /* jne: not equal / not zero */

loc_0020783A: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00207846u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207843u); } /* indirect call */
    }

loc_00207846: ;
    goto loc_00207854;

loc_00207848: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00207854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207851u); } /* indirect call */
    }

loc_00207854: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0020785Du); RECOMP_ABI_CALL(0x000157D6u, sub_000157D6); /* call 0x000157D6 */

loc_0020785D: ;
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0020786Cu); RECOMP_ABI_CALL(0x00028917u, sub_00028917); /* call 0x00028917 */

loc_0020786C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002078A4; /* je: equal / zero */

loc_00207870: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x104);
    PUSH32(esp, 0x0020787Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020787C: ;
    ecx = MEM32(ebp);
    MEM32(ecx + esi * 4) = eax;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x6C);
    ecx = MEM32(ebp);
    edx = esp + 0x16C;
    PUSH32(esp, edx);
    edx = MEM32(ecx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E8F90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002078A1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002078A1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002078A4: ;
    eax = MEM32(esp + 0x10);
    ecx = esp + 0x3C;
    MEM8(edi + eax) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002078B6u); RECOMP_ABI_CALL(0x000220C1u, sub_000220C1); /* call 0x000220C1 */

loc_002078B6: ;
    ebx = MEM32(esp + 0x10);

loc_002078BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x364)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x364) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207802; /* jl: less (signed <) */

loc_002078C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002078CDu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002078CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    PUSH32(esp, 0x002078D9u); RECOMP_ABI_CALL(0x0002D589u, sub_0002D589); /* call 0x0002D589 */

loc_002078D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207950
 * Original: 0x00207950 - 0x00207992 (66 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207950: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020798C; /* ja: above (unsigned >) */

loc_00207959: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x207994); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00207960u) goto loc_00207960;
    if (_jt == 0x00207966u) goto loc_00207966;
    if (_jt == 0x0020796Cu) goto loc_0020796C;
    if (_jt == 0x00207972u) goto loc_00207972;
    if (_jt == 0x0020797Fu) goto loc_0020797F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00207960: ;
    eax = MEM32(ecx + 0x5C);
    esp += 8; return; /* ret 4 */

loc_00207966: ;
    eax = MEM32(ecx + 0x60);
    esp += 8; return; /* ret 4 */

loc_0020796C: ;
    eax = MEM32(ecx + 0x48);
    esp += 8; return; /* ret 4 */

loc_00207972: ;
    SET_LO8(edx, MEM8(ecx + 0x64));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

loc_0020797F: ;
    SET_LO8(edx, MEM8(ecx + 0x66));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

loc_0020798C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207992
 * Original: 0x00207992 - 0x00207A02 (112 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207992(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207992: ;
    edi = edi;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    if (_flags /* jns: not sign (positive) */) goto loc_002079B7;

loc_00207997: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 0x79) = MEM8(esi + 0x79) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi + 0x79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("insb byte ptr es:[edi], dx", 0x0020799Cu); /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jns: not sign (positive) */) goto loc_002079BF;

loc_0020799F: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + 0x79) = MEM8(edx + 0x79) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx + 0x79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fas > 0)) { g_seh_ebp = ebp; sub_00207A1F(); return; } /* jg: greater (signed >) */

loc_002079A6: ;
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

loc_002079B7: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_002079BF: ;
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002079FF; /* ja: above (unsigned >) */

loc_002079C9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x207A04); /* switch: 5 entries, 5 targets */
    if (_jt == 0x002079D0u) goto loc_002079D0;
    if (_jt == 0x002079DAu) goto loc_002079DA;
    if (_jt == 0x002079E4u) goto loc_002079E4;
    if (_jt == 0x002079F3u) goto loc_002079F3;
    if (_jt == 0x002079FFu) goto loc_002079FF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002079D0: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x5C) = eax;
    esp += 12; return; /* ret 8 */

loc_002079DA: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x60) = edx;
    esp += 12; return; /* ret 8 */

loc_002079E4: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + 0x64) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_002079F3: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + 0x66) = LO8(edx);

loc_002079FF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00207A02
 * Original: 0x00207A02 - 0x00207A31 (47 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207A02: ;
    edi = edi;
    MEM8(ecx + 0x20) = (uint32_t)(((int32_t)(int8_t)(MEM8(ecx + 0x20))) >> ((1) & 31u));
    _fa = (uint32_t)(MEM8(ecx + 0x20)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_00207A2B; /* jns: not sign (positive) */

loc_00207A0B: ;
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_00207A2F; /* jns: not sign (positive) */

loc_00207A0F: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_00207A33(); return; } /* jns: not sign (positive) */

loc_00207A13: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + HI8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_00207A37(); return; } /* jns: not sign (positive) */

loc_00207A17: ;
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

loc_00207A2B: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00207A2F: ;
    /* int3: debug-trap slide byte, stepped over */
    esp += 4; return; /* ret */

}

/**
 * sub_00207A40
 * Original: 0x00207A40 - 0x00207A48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A40(void)
{

loc_00207A40: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00207A50
 * Original: 0x00207A50 - 0x00207ABE (110 bytes, 43 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207A50: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 4) = ebx;
    edx = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207A8Au); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00207A8A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207A91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207A8Eu); } /* indirect call */
    }

loc_00207A91: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00207A9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207A97u); } /* indirect call */
    }

loc_00207A9A: ;
    edx = MEM32(esi);
    edi = ZX8(LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00207AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207AA5u); } /* indirect call */
    }

loc_00207AA7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207AB1u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00207AB1: ;
    ecx = eax;
    PUSH32(esp, 0x00207AB8u); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_00207AB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00207AE0
 * Original: 0x00207AE0 - 0x00207AE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207AE0(void)
{

loc_00207AE0: ;
    MEM32(ecx + 0x48) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00207AF0
 * Original: 0x00207AF0 - 0x00207B01 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207AF0: ;
    eax = MEM32(ecx + 0x48);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x4C) = edx;
    MEM32(ecx + 0x48) = MEM32(ecx + 0x48) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207B10
 * Original: 0x00207B10 - 0x00207B18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207B10(void)
{

loc_00207B10: ;
    MEM32(ecx + 0x54) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00207B20
 * Original: 0x00207B20 - 0x00207B2A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207B20(void)
{

loc_00207B20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x54) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207B30
 * Original: 0x00207B30 - 0x00207C7F (335 bytes, 129 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207B30: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x118);
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edi);
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00207B50: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207B50; /* jne: not equal / not zero */

loc_00207B5A: ;
    edi = MEM32(esp + 0x124);
    esi = MEM32(esp + 0x118);
    ebx = MEM32(esp + 0x11C);
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00207B7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207B7Cu); } /* indirect call */
    }

loc_00207B7F: ;
    eax = ebp + 0x100;
    edx = esp + 0x14;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00207B90;

    /* nop */

loc_00207B90: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207B90; /* jne: not equal / not zero */

loc_00207B9A: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00207BAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207BA7u); } /* indirect call */
    }

loc_00207BAA: ;
    eax = MEM32(ebp + 0x24C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207BBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207BB9u); } /* indirect call */
    }

loc_00207BBC: ;
    eax = MEM32(ebp + 0x254);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207BCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207BCBu); } /* indirect call */
    }

loc_00207BCE: ;
    eax = MEM32(ebp + 0x250);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207BE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207BDDu); } /* indirect call */
    }

loc_00207BE0: ;
    eax = ZX8(MEM8(ebp + 0x262));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207BF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207BF0u); } /* indirect call */
    }

loc_00207BF3: ;
    eax = ZX8(MEM8(ebp + 0x2ED));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207C06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207C03u); } /* indirect call */
    }

loc_00207C06: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x13);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207C13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207C10u); } /* indirect call */
    }

loc_00207C13: ;
    eax = ZX8(MEM8(ebp + 0x260));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207C20u); RECOMP_ABI_CALL(0x0001E9ADu, sub_0001E9AD); /* call 0x0001E9AD */

loc_00207C20: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207C2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207C2Cu); } /* indirect call */
    }

loc_00207C2F: ;
    MEM32(esp + 0x10) = 0;
    goto loc_00207C40;

    /* nop */

loc_00207C40: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207C4Au); RECOMP_ABI_CALL(0x00036EEFu, sub_00036EEF); /* call 0x00036EEF */

loc_00207C4A: ;
    ecx = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(ecx + ebp + 0x2BC));
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00207C64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207C61u); } /* indirect call */
    }

loc_00207C64: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00207C40; /* jl: less (signed <) */

loc_00207C72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00207CE0
 * Original: 0x00207CE0 - 0x00207D65 (133 bytes, 58 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207CE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00207CFDu); RECOMP_ABI_CALL(0x00028A66u, sub_00028A66); /* call 0x00028A66 */

loc_00207CFD: ;
    ecx = ZX8(MEM8(ebp + 0x25D));
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00207D10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207D0Du); } /* indirect call */
    }

loc_00207D10: ;
    eax = ZX16(MEM16(ebp + 0x25E));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00207D23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207D20u); } /* indirect call */
    }

loc_00207D23: ;
    eax = ZX8(MEM8(ebp + 0x25C));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x17);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00207D36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207D33u); } /* indirect call */
    }

loc_00207D36: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00207D38: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207D3Eu); RECOMP_ABI_CALL(0x000270D5u, sub_000270D5); /* call 0x000270D5 */

loc_00207D3E: ;
    ecx = ZX8(MEM8(edi + ebp + 0x2CD));
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00207D58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207D55u); } /* indirect call */
    }

loc_00207D58: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207D38; /* jl: less (signed <) */

loc_00207D5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00207D90
 * Original: 0x00207D90 - 0x00207E2F (159 bytes, 72 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207D90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00207DADu); RECOMP_ABI_CALL(0x00028A66u, sub_00028A66); /* call 0x00028A66 */

loc_00207DAD: ;
    ecx = ZX8(MEM8(edi + 0x25D));
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00207DC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207DBDu); } /* indirect call */
    }

loc_00207DC0: ;
    eax = ZX16(MEM16(edi + 0x25E));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00207DD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207DD0u); } /* indirect call */
    }

loc_00207DD3: ;
    eax = ZX8(MEM8(edi + 0x25C));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 9);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00207DE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207DE3u); } /* indirect call */
    }

loc_00207DE6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x19);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00207DF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207DF0u); } /* indirect call */
    }

loc_00207DF3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00207E00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207DFDu); } /* indirect call */
    }

loc_00207E00: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00207E02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207E08u); RECOMP_ABI_CALL(0x000201B3u, sub_000201B3); /* call 0x000201B3 */

loc_00207E08: ;
    ecx = MEM32(esp + 0x20);
    ecx = ZX8(MEM8(ecx + edi + 0x2CD));
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00207E22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207E1Fu); } /* indirect call */
    }

loc_00207E22: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x15 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207E02; /* jl: less (signed <) */

loc_00207E28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00207E60
 * Original: 0x00207E60 - 0x00207E69 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207E60(void)
{

loc_00207E60: ;
    eax = ecx;
    MEM32(eax) = 0x7F8354;
    esp += 4; return; /* ret */

}

/**
 * sub_00207E70
 * Original: 0x00207E70 - 0x00207E73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207E70(void)
{

loc_00207E70: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00207E80
 * Original: 0x00207E80 - 0x00207E84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207E80(void)
{

loc_00207E80: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00207E90
 * Original: 0x00207E90 - 0x00207E93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207E90(void)
{

loc_00207E90: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00207EA0
 * Original: 0x00207EA0 - 0x00207EA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207EA0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00207EB0
 * Original: 0x00207EB0 - 0x00207EB5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207EB0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00207EC0
 * Original: 0x00207EC0 - 0x00207ED1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207EC0: ;
    ecx = MEM32(0x8F9584);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207ED0; /* je: equal / zero */

loc_00207ECA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00207ED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207ECEu); } /* indirect call */
    }

loc_00207ED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00207EE0
 * Original: 0x00207EE0 - 0x00207F4B (107 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi) = 0x7F8384;
    if (CMP_EQ(_fa, _fb)) goto loc_00207EFC; /* je: equal / zero */

loc_00207EF3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00207EF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207EF7u); } /* indirect call */
    }

loc_00207EF9: ;
    MEM32(esi + 4) = edi;

loc_00207EFC: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207F0C; /* je: equal / zero */

loc_00207F03: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00207F09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207F07u); } /* indirect call */
    }

loc_00207F09: ;
    MEM32(esi + 8) = edi;

loc_00207F0C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207F1C; /* je: equal / zero */

loc_00207F13: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00207F19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207F17u); } /* indirect call */
    }

loc_00207F19: ;
    MEM32(esi + 0x14) = edi;

loc_00207F1C: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207F2C; /* je: equal / zero */

loc_00207F23: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00207F29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207F27u); } /* indirect call */
    }

loc_00207F29: ;
    MEM32(esi + 0x18) = edi;

loc_00207F2C: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207F3C; /* je: equal / zero */

loc_00207F33: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00207F39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207F37u); } /* indirect call */
    }

loc_00207F39: ;
    MEM32(esi + 0xC) = edi;

loc_00207F3C: ;
    MEM32(esi) = 0x7F8328;
    MEM32(0x8F9584) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207F70
 * Original: 0x00207F70 - 0x00207F74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207F70(void)
{

loc_00207F70: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00207F80
 * Original: 0x00207F80 - 0x00207F89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207F80(void)
{

loc_00207F80: ;
    eax = ecx;
    MEM32(eax) = 0x7F83B0;
    esp += 4; return; /* ret */

}

/**
 * sub_00207F90
 * Original: 0x00207F90 - 0x00207FAF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207F90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F79DC;
    if (TEST_Z(_fa, _fb)) goto loc_00207FA9; /* je: equal / zero */

loc_00207FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00207FA6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00207FA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00207FA9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207FC0
 * Original: 0x00207FC0 - 0x00207FE4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207FC0: ;
    PUSH32(esp, 0x00207FC5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00207FC5: ;
    ecx = eax;
    PUSH32(esp, 0x00207FCCu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_00207FCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207FDE; /* je: equal / zero */

loc_00207FD0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00207FDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207FD4u); } /* indirect call */
    }

loc_00207FDA: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

loc_00207FDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00207FF0
 * Original: 0x00207FF0 - 0x002080B6 (198 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207FF0: ;
    PUSH32(esp, 0x00207FF5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00207FF5: ;
    ecx = eax;
    PUSH32(esp, 0x00207FFCu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_00207FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020800C; /* je: equal / zero */

loc_00208000: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0020800Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208004u); } /* indirect call */
    }

loc_0020800A: ;
    goto loc_0020800E;

loc_0020800C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020800E: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0020801Bu); RECOMP_ABI_CALL(0x00015FF6u, sub_00015FF6); /* call 0x00015FF6 */

loc_0020801B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002080B2; /* je: equal / zero */

loc_00208025: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00208037u); RECOMP_ABI_CALL(0x00036EE0u, sub_00036EE0); /* call 0x00036EE0 */

loc_00208037: ;
    PUSH32(esp, 0x100);
    edx = edi + 0x80;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020804Au); RECOMP_ABI_CALL(0x0002823Cu, sub_0002823C); /* call 0x0002823C */

loc_0020804A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00208056u); RECOMP_ABI_CALL(0x0002C981u, sub_0002C981); /* call 0x0002C981 */

loc_00208056: ;
    ecx = MEM32(eax);
    MEM32(edi + 0x180) = ecx;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, 0x2000);
    eax = edi + 0x194;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edi + 0x188) = edx;
    PUSH32(esp, 0x0020807Au); RECOMP_ABI_CALL(0x00037C9Bu, sub_00037C9B); /* call 0x00037C9B */

loc_0020807A: ;
    ecx = esi;
    MEM32(edi + 0x2194) = 0;
    PUSH32(esp, 0x0020808Bu); RECOMP_ABI_CALL(0x00015551u, sub_00015551); /* call 0x00015551 */

loc_0020808B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00208090: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 8 + 0x8B4BB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 8 + 0x8B4BB0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002080A4; /* je: equal / zero */

loc_00208099: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208090; /* jl: less (signed <) */

loc_0020809F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002080A4: ;
    ecx = MEM32(ecx * 8 + 0x8B4BB4);
    MEM32(edi + 0x2194) = ecx;
    POP32(esp, edi);

loc_002080B2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002080F0
 * Original: 0x002080F0 - 0x0020811A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002080F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002080F0: ;
    PUSH32(esp, 0x002080F5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002080F5: ;
    ecx = eax;
    PUSH32(esp, 0x002080FCu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_002080FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208111; /* je: equal / zero */

loc_00208100: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0020810Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208104u); } /* indirect call */
    }

loc_0020810A: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00029E16(); return; /* tail jmp 0x00029E16 */

loc_00208111: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    g_seh_ebp = ebp; sub_00029E16(); return; /* tail jmp 0x00029E16 */

}

/**
 * sub_00208130
 * Original: 0x00208130 - 0x0020815A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208130: ;
    PUSH32(esp, 0x00208135u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00208135: ;
    ecx = eax;
    PUSH32(esp, 0x0020813Cu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_0020813C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208151; /* je: equal / zero */

loc_00208140: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0020814Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208144u); } /* indirect call */
    }

loc_0020814A: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00025F28(); return; /* tail jmp 0x00025F28 */

loc_00208151: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    g_seh_ebp = ebp; sub_00025F28(); return; /* tail jmp 0x00025F28 */

}

/**
 * sub_00208170
 * Original: 0x00208170 - 0x0020819A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208170: ;
    PUSH32(esp, 0x00208175u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00208175: ;
    ecx = eax;
    PUSH32(esp, 0x0020817Cu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_0020817C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208191; /* je: equal / zero */

loc_00208180: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0020818Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208184u); } /* indirect call */
    }

loc_0020818A: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002080C(); return; /* tail jmp 0x0002080C */

loc_00208191: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    g_seh_ebp = ebp; sub_0002080C(); return; /* tail jmp 0x0002080C */

}

/**
 * sub_002081B0
 * Original: 0x002081B0 - 0x00208226 (118 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002081B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002081B0: ;
    PUSH32(esp, 0x002081B5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002081B5: ;
    ecx = eax;
    PUSH32(esp, 0x002081BCu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_002081BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002081CC; /* je: equal / zero */

loc_002081C0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x002081CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002081C4u); } /* indirect call */
    }

loc_002081CA: ;
    goto loc_002081CE;

loc_002081CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002081CE: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002081DBu); RECOMP_ABI_CALL(0x00023638u, sub_00023638); /* call 0x00023638 */

loc_002081DB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208222; /* je: equal / zero */

loc_002081E1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002081E9u); RECOMP_ABI_CALL(0x0003079Du, sub_0003079D); /* call 0x0003079D */

loc_002081E9: ;
    edi = MEM32(esp + 0x10);
    edx = edi;
    /* nop */

loc_002081F0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002081F0; /* jne: not equal / not zero */

loc_002081FA: ;
    ecx = esi;
    PUSH32(esp, 0x00208201u); RECOMP_ABI_CALL(0x00025825u, sub_00025825); /* call 0x00025825 */

loc_00208201: ;
    ecx = esi;
    MEM32(edi + 0x100) = eax;
    PUSH32(esp, 0x0020820Eu); RECOMP_ABI_CALL(0x00034924u, sub_00034924); /* call 0x00034924 */

loc_0020820E: ;
    ecx = esi;
    MEM32(edi + 0x104) = eax;
    PUSH32(esp, 0x0020821Bu); RECOMP_ABI_CALL(0x0002F019u, sub_0002F019); /* call 0x0002F019 */

loc_0020821B: ;
    MEM32(edi + 0x108) = eax;
    POP32(esp, edi);

loc_00208222: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208250
 * Original: 0x00208250 - 0x002082F6 (166 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208250: ;
    PUSH32(esp, 0x00208255u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00208255: ;
    ecx = eax;
    PUSH32(esp, 0x0020825Cu); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_0020825C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020826C; /* je: equal / zero */

loc_00208260: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0020826Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208264u); } /* indirect call */
    }

loc_0020826A: ;
    goto loc_0020826E;

loc_0020826C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020826E: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0020827Au); RECOMP_ABI_CALL(0x00023638u, sub_00023638); /* call 0x00023638 */

loc_0020827A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002082F3; /* je: equal / zero */

loc_0020827E: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0020828Bu); RECOMP_ABI_CALL(0x0001A7A9u, sub_0001A7A9); /* call 0x0001A7A9 */

loc_0020828B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002082F2; /* je: equal / zero */

loc_00208291: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002082A3u); RECOMP_ABI_CALL(0x00036EE0u, sub_00036EE0); /* call 0x00036EE0 */

loc_002082A3: ;
    PUSH32(esp, 0x100);
    eax = edi + 0x80;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002082B6u); RECOMP_ABI_CALL(0x0002823Cu, sub_0002823C); /* call 0x0002823C */

loc_002082B6: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002082C2u); RECOMP_ABI_CALL(0x0002C981u, sub_0002C981); /* call 0x0002C981 */

loc_002082C2: ;
    edx = MEM32(eax);
    MEM32(edi + 0x180) = edx;
    eax = MEM32(esi + 0x30);
    MEM32(edi + 0x188) = eax;
    ecx = MEM32(esi + 0x34);
    MEM32(edi + 0x18C) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(edi + 0x190) = edx;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x184) = eax;
    POP32(esp, edi);

loc_002082F2: ;
    POP32(esp, esi);

loc_002082F3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00208320
 * Original: 0x00208320 - 0x002085DF (703 bytes, 210 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208320: ;
    _fb = (uint32_t)(0xE18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00208331u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00208331: ;
    ecx = eax;
    PUSH32(esp, 0x00208338u); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_00208338: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208348; /* je: equal / zero */

loc_0020833C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00208346u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208340u); } /* indirect call */
    }

loc_00208346: ;
    goto loc_0020834A;

loc_00208348: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020834A: ;
    ecx = MEM32(esp + 0xE2C);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00208359u); RECOMP_ABI_CALL(0x00015FF6u, sub_00015FF6); /* call 0x00015FF6 */

loc_00208359: ;
    esi = eax;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002085D0; /* jne: not equal / not zero */

loc_00208368: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x00208371u); RECOMP_ABI_CALL(0x00015FC4u, sub_00015FC4); /* call 0x00015FC4 */

loc_00208371: ;
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020837Du); RECOMP_ABI_CALL(0x0002D183u, sub_0002D183); /* call 0x0002D183 */

loc_0020837D: ;
    edi = 4;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x00208393u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00208393: ;
    ecx = eax;
    PUSH32(esp, 0x0020839Au); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0020839A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083B0; /* je: equal / zero */

loc_0020839E: ;
    ecx = MEM32(eax + 0x50);
    edx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002083ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002083A9u); } /* indirect call */
    }

loc_002083AC: ;
    MEM32(esp + 0x2C) = eax;

loc_002083B0: ;
    eax = MEM32(esp + 0xE30);
    ecx = eax + 0x30;
    edx = esp + 0x140;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x48) = edx;
    ecx = esp + 0x138;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x148;
    esi = 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x1C) = 0x18;
    ebx = eax + 8;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x24) = esi;
    goto loc_00208407;

loc_00208403: ;
    ecx = MEM32(esp + 0x44);

loc_00208407: ;
    edx = MEM32(ecx + ebx);
    eax = MEM32(edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebx + 8) = eax;
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x0020842Bu); RECOMP_ABI_CALL(0x0002F9C4u, sub_0002F9C4); /* call 0x0002F9C4 */

loc_0020842B: ;
    edx = edi + -2;
    PUSH32(esp, edx);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00208438u); RECOMP_ABI_CALL(0x000249ACu, sub_000249AC); /* call 0x000249AC */

loc_00208438: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + -8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0020847F; /* jle: less or equal (signed <=) */

loc_00208441: ;
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xFFFFFFE8u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00208450;

    /* nop */

loc_00208450: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(eax + ebx);
    eax = MEM32(ecx + esi * 4);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    MEM32(ebp) = eax;
    PUSH32(esp, 0x00208467u); RECOMP_ABI_CALL(0x000355B8u, sub_000355B8); /* call 0x000355B8 */

loc_00208467: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208474; /* jne: not equal / not zero */

loc_0020846C: ;
    MEM32(esp + 0x20) = 1;

loc_00208474: ;
    eax = MEM32(ebx + -8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208450; /* jl: less (signed <) */

loc_0020847F: ;
    PUSH32(esp, edi);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00208489u); RECOMP_ABI_CALL(0x000249ACu, sub_000249AC); /* call 0x000249AC */

loc_00208489: ;
    edx = MEM32(esp + 0x58);
    MEM32(ebx) = eax;
    ecx = MEM32(edx + 0x8418);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00208580; /* jle: less or equal (signed <=) */

loc_002084A3: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = edx;
    goto loc_002084B0;

    /* nop */

loc_002084B0: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax + ebx);
    esi = MEM32(ecx + ebp * 4);
    edi = esi;
    ecx = esp + 0x218;
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x002084CEu); RECOMP_ABI_CALL(0x000195F2u, sub_000195F2); /* call 0x000195F2 */

loc_002084CE: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = esp + 0x224;
    PUSH32(esp, 0x002084EAu); RECOMP_ABI_CALL(0x0001B7C6u, sub_0001B7C6); /* call 0x0001B7C6 */

loc_002084EA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x3D);
    eax = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 0x18) = edi;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0x13) = LO8(edx);
    if (CMP_LE(_fas, _fbs)) goto loc_00208543; /* jle: less or equal (signed <=) */

loc_00208508: ;
    edx = MEM32(esp + 0x58);
    esi = MEM32(edx + 0x8414);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00208513: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208523; /* jne: not equal / not zero */

loc_0020851B: ;
    SET_LO8(edx, MEM8(esp + 0x3D));
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208531; /* je: equal / zero */

loc_00208523: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208513; /* jl: less (signed <) */

loc_0020852B: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    goto loc_00208543;

loc_00208531: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0xE30);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + ecx * 4) = eax;
    SET_LO8(edx, 1);

loc_00208543: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x3E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208552; /* jne: not equal / not zero */

loc_0020854E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020855A; /* jne: not equal / not zero */

loc_00208552: ;
    MEM32(esp + 0x20) = 1;

loc_0020855A: ;
    ecx = esp + 0x218;
    PUSH32(esp, 0x00208566u); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00208566: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002084B0; /* jl: less (signed <) */

loc_0020857C: ;
    edi = MEM32(esp + 0x28);

loc_00208580: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x00208589u); RECOMP_ABI_CALL(0x00032A07u, sub_00032A07); /* call 0x00032A07 */

loc_00208589: ;
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_00208403; /* jne: not equal / not zero */

loc_002085B6: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x002085BFu); RECOMP_ABI_CALL(0x000342E4u, sub_000342E4); /* call 0x000342E4 */

loc_002085BF: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002085D0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208690
 * Original: 0x00208690 - 0x002087CE (318 bytes, 101 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208690: ;
    _fb = (uint32_t)(0x4C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002086A1u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002086A1: ;
    ecx = eax;
    PUSH32(esp, 0x002086A8u); RECOMP_ABI_CALL(0x00020A78u, sub_00020A78); /* call 0x00020A78 */

loc_002086A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002086B8; /* je: equal / zero */

loc_002086AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x002086B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002086B0u); } /* indirect call */
    }

loc_002086B6: ;
    goto loc_002086BA;

loc_002086B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002086BA: ;
    ecx = MEM32(esp + 0x4D4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002086C9u); RECOMP_ABI_CALL(0x00015FF6u, sub_00015FF6); /* call 0x00015FF6 */

loc_002086C9: ;
    esi = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002087BF; /* jl: less (signed <) */

loc_002086DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002087BF; /* jg: greater (signed >) */

loc_002086E3: ;
    ecx = esp + 0x38;
    ebp = 2;
    PUSH32(esp, 0x002086F1u); RECOMP_ABI_CALL(0x00015FC4u, sub_00015FC4); /* call 0x00015FC4 */

loc_002086F1: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002086FDu); RECOMP_ABI_CALL(0x0002D183u, sub_0002D183); /* call 0x0002D183 */

loc_002086FD: ;
    ecx = MEM32(esp + 0x100);
    edx = MEM32(ecx);
    esi = MEM32(esp + 0x4D8);
    eax = MEM32(esp + 0x104);
    MEM32(esi) = edx;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x108);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edx);
    ecx = MEM32(esp + 0x10C);
    MEM32(esi + 8) = eax;
    edx = MEM32(ecx);
    MEM32(esi + 0xC) = edx;
    ebx = 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0020873Fu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0020873F: ;
    ecx = eax;
    PUSH32(esp, 0x00208746u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00208746: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208756; /* je: equal / zero */

loc_0020874A: ;
    edx = MEM32(eax);
    edi = MEM32(eax + 0x50);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00208754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208751u); } /* indirect call */
    }

loc_00208754: ;
    ebx = eax;

loc_00208756: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00208768u); RECOMP_ABI_CALL(0x0002F9C4u, sub_0002F9C4); /* call 0x0002F9C4 */

loc_00208768: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00208775u); RECOMP_ABI_CALL(0x000355B8u, sub_000355B8); /* call 0x000355B8 */

loc_00208775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208799; /* je: equal / zero */

loc_0020877A: ;
    PUSH32(esp, 2);
    edx = esp + 0x1DC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0020878Eu); RECOMP_ABI_CALL(0x00017342u, sub_00017342); /* call 0x00017342 */

loc_0020878E: ;
    SET_LO8(eax, MEM8(esp + 0x4CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020879E; /* je: equal / zero */

loc_00208799: ;
    ebp = 1;

loc_0020879E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002087A7u); RECOMP_ABI_CALL(0x00032A07u, sub_00032A07); /* call 0x00032A07 */

loc_002087A7: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x002087B0u); RECOMP_ABI_CALL(0x000342E4u, sub_000342E4); /* call 0x000342E4 */

loc_002087B0: ;
    eax = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002087BF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208820
 * Original: 0x00208820 - 0x00208832 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208820(void)
{

loc_00208820: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x7F83E4;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208840
 * Original: 0x00208840 - 0x0020885F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208840: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F7A18;
    if (TEST_Z(_fa, _fb)) goto loc_00208859; /* je: equal / zero */

loc_00208850: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00208856u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00208856: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208859: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208870
 * Original: 0x00208870 - 0x00208879 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208870(void)
{

loc_00208870: ;
    eax = ecx;
    MEM32(eax) = 0x7F83F8;
    esp += 4; return; /* ret */

}

/**
 * sub_00208880
 * Original: 0x00208880 - 0x0020889F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208880: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F79AC;
    if (TEST_Z(_fa, _fb)) goto loc_00208899; /* je: equal / zero */

loc_00208890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00208896u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00208896: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208899: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002088B0
 * Original: 0x002088B0 - 0x00208926 (118 bytes, 44 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002088B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002088B0: ;
    ecx = MEM32(0x8F9CCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208923; /* je: equal / zero */

loc_002088BA: ;
    PUSH32(esp, 0x002088BFu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_002088BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208923; /* je: equal / zero */

loc_002088C3: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002088CFu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_002088CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002088D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002088D3u); } /* indirect call */
    }

loc_002088D6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208922; /* je: equal / zero */

loc_002088DC: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002088E9; /* jne: not equal / not zero */

loc_002088E5: ;
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002088F0;

loc_002088E9: ;
    eax = MEM32(eax * 4 + 0x7F6F5C);

loc_002088F0: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi * 4 + 0x8B4BE8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0020890Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208908u); } /* indirect call */
    }

loc_0020890B: ;
    eax = MEM32(edi * 4 + 0x8B4BE8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00208920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020891Du); } /* indirect call */
    }

loc_00208920: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00208922: ;
    POP32(esp, esi);

loc_00208923: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00208950
 * Original: 0x00208950 - 0x002089A6 (86 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208950: ;
    ecx = MEM32(0x8F9CCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002089A0; /* je: equal / zero */

loc_0020895A: ;
    PUSH32(esp, 0x0020895Fu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0020895F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002089A0; /* je: equal / zero */

loc_00208963: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0020896Eu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0020896E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00208975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208972u); } /* indirect call */
    }

loc_00208975: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002089A0; /* je: equal / zero */

loc_00208979: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx * 4 + 0x8B4BE8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00208991u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020898Eu); } /* indirect call */
    }

loc_00208991: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002089A0; /* je: equal / zero */

loc_00208996: ;
    eax = MEM32(eax * 4 + 0x7F6F74);
    esp += 12; return; /* ret 8 */

loc_002089A0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002089C0
 * Original: 0x002089C0 - 0x002089FA (58 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002089C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002089C0: ;
    PUSH32(esp, 0x002089C5u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_002089C5: ;
    ecx = eax;
    PUSH32(esp, 0x002089CCu); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_002089CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002089ED; /* je: equal / zero */

loc_002089D0: ;
    edx = MEM32(esp + 4);

loc_002089D4: ;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002089E6; /* jne: not equal / not zero */

loc_002089DC: ;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002089F5; /* je: equal / zero */

loc_002089E6: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002089D4; /* jne: not equal / not zero */

loc_002089ED: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_002089F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208A10
 * Original: 0x00208A10 - 0x00208A6C (92 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    MEM32(esi) = 0x7F8428;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x00208A30u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00208A30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208A40; /* je: equal / zero */

loc_00208A37: ;
    ecx = eax;
    PUSH32(esp, 0x00208A3Eu); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00208A3E: ;
    goto loc_00208A42;

loc_00208A40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00208A42: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00208A4Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00208A4E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208A63; /* je: equal / zero */

loc_00208A55: ;
    ecx = eax;
    PUSH32(esp, 0x00208A5Cu); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00208A5C: ;
    MEM32(esi + 0x18) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00208A63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00208A90
 * Original: 0x00208A90 - 0x00208ABB (43 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7F8428;
    if (CMP_EQ(_fa, _fb)) goto loc_00208AA6; /* je: equal / zero */

loc_00208AA0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00208AA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208AA4u); } /* indirect call */
    }

loc_00208AA6: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208AB3; /* je: equal / zero */

loc_00208AAD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00208AB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208AB1u); } /* indirect call */
    }

loc_00208AB3: ;
    MEM32(esi) = 0x7F7A30;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00208AD0
 * Original: 0x00208AD0 - 0x00208AD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208AD0(void)
{

loc_00208AD0: ;
    eax = ecx;
    MEM32(eax) = 0x7F84F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00208AE0
 * Original: 0x00208AE0 - 0x00208AFF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208AE0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F7844;
    if (TEST_Z(_fa, _fb)) goto loc_00208AF9; /* je: equal / zero */

loc_00208AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00208AF6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00208AF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208AF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208B10
 * Original: 0x00208B10 - 0x00208D05 (501 bytes, 160 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208B10: ;
    _fb = (uint32_t)(0xC64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00208B23u); RECOMP_ABI_CALL(0x000157D6u, sub_000157D6); /* call 0x000157D6 */

loc_00208B23: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00208B2Cu); RECOMP_ABI_CALL(0x0002D156u, sub_0002D156); /* call 0x0002D156 */

loc_00208B2C: ;
    ecx = MEM32(0x8F9584);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00208B37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208B34u); } /* indirect call */
    }

loc_00208B37: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00208B3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208B3Bu); } /* indirect call */
    }

loc_00208B3E: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0xC78));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208B74; /* je: equal / zero */

loc_00208B4B: ;
    ecx = MEM32(esp + 0xC70);
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00208B60u); RECOMP_ABI_CALL(0x0001A09Cu, sub_0001A09C); /* call 0x0001A09C */

loc_00208B60: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00208B67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208B64u); } /* indirect call */
    }

loc_00208B67: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + 0x246) = LO16(eax);
    goto loc_00208CE8;

loc_00208B74: ;
    _fa = (uint32_t)(MEM32(esp + 0xC74)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC74), 1 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00208B9A; /* jne: not equal / not zero */

loc_00208B80: ;
    ebx = MEM32(esp + 0xC78);
    edi = ebp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00208B95u); RECOMP_ABI_CALL(0x00028917u, sub_00028917); /* call 0x00028917 */

loc_00208B95: ;
    goto loc_00208C82;

loc_00208B9A: ;
    ecx = MEM32(0x8F9584);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00208BA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208BA2u); } /* indirect call */
    }

loc_00208BA5: ;
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00208BAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208BABu); } /* indirect call */
    }

loc_00208BAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208BFD; /* je: equal / zero */

loc_00208BB3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00208BBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208BB7u); } /* indirect call */
    }

loc_00208BBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208BFD; /* je: equal / zero */

loc_00208BBF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00208BC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208BC3u); } /* indirect call */
    }

loc_00208BC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208BFD; /* je: equal / zero */

loc_00208BCB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00208BD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208BCFu); } /* indirect call */
    }

loc_00208BD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208BFD; /* je: equal / zero */

loc_00208BD7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00208BDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208BDBu); } /* indirect call */
    }

loc_00208BDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208BFD; /* je: equal / zero */

loc_00208BE3: ;
    ebx = MEM32(esp + 0xC78);
    edi = ebp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00208BF8u); RECOMP_ABI_CALL(0x00015D3Fu, sub_00015D3F); /* call 0x00015D3F */

loc_00208BF8: ;
    goto loc_00208C82;

loc_00208BFD: ;
    ecx = esp + 0x64;
    PUSH32(esp, 0x00208C06u); RECOMP_ABI_CALL(0x000195F2u, sub_000195F2); /* call 0x000195F2 */

loc_00208C06: ;
    ebx = MEM32(esp + 0xC78);
    PUSH32(esp, ebx);
    ecx = esp + 0x68;
    PUSH32(esp, 0x00208C17u); RECOMP_ABI_CALL(0x0001F3A8u, sub_0001F3A8); /* call 0x0001F3A8 */

loc_00208C17: ;
    ecx = MEM32(0x8F9584);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00208C24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208C21u); } /* indirect call */
    }

loc_00208C24: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00208C2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208C28u); } /* indirect call */
    }

loc_00208C2B: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00208C35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208C32u); } /* indirect call */
    }

loc_00208C35: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00208C40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208C3Au); } /* indirect call */
    }

loc_00208C40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edi = ebp + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00208C6E; /* jl: less (signed <) */

loc_00208C47: ;
    SET_LO8(ecx, MEM8(esp + 0xC84));
    edx = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00208C62; /* je: equal / zero */

loc_00208C56: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x00208C60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208C5Au); } /* indirect call */
    }

loc_00208C60: ;
    goto loc_00208C79;

loc_00208C62: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x00208C6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208C66u); } /* indirect call */
    }

loc_00208C6C: ;
    goto loc_00208C79;

loc_00208C6E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00208C79u); RECOMP_ABI_CALL(0x00015D3Fu, sub_00015D3F); /* call 0x00015D3F */

loc_00208C79: ;
    ecx = esp + 0x64;
    PUSH32(esp, 0x00208C82u); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00208C82: ;
    eax = MEM32(ebp + 0x2F4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208CE6; /* jne: not equal / not zero */

loc_00208C8E: ;
    SET_LO8(eax, MEM8(ebp + 0x2F9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208CE6; /* jne: not equal / not zero */

loc_00208C98: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x00208CA9u); RECOMP_ABI_CALL(0x00017B94u, sub_00017B94); /* call 0x00017B94 */

loc_00208CA9: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00208CB8u); RECOMP_ABI_CALL(0x000174FAu, sub_000174FA); /* call 0x000174FA */

loc_00208CB8: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM32(ebp + 0x2F4) = eax;
    MEM8(ebp + 0x2F9) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00208CDD; /* jne: not equal / not zero */

loc_00208CD0: ;
    ecx = edi;
    PUSH32(esp, 0x00208CD7u); RECOMP_ABI_CALL(0x000204ECu, sub_000204EC); /* call 0x000204EC */

loc_00208CD7: ;
    MEM32(ebp + 0x2F4) = eax;

loc_00208CDD: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00208CE6u); RECOMP_ABI_CALL(0x00013B0Cu, sub_00013B0C); /* call 0x00013B0C */

loc_00208CE6: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00208CE8: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00208CF1u); RECOMP_ABI_CALL(0x0001FA29u, sub_0001FA29); /* call 0x0001FA29 */

loc_00208CF1: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00208CFAu); RECOMP_ABI_CALL(0x000220C1u, sub_000220C1); /* call 0x000220C1 */

loc_00208CFA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00208D90
 * Original: 0x00208D90 - 0x0020974E (2494 bytes, 796 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208D90: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x59 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00209744; /* ja: above (unsigned >) */

loc_00208DA6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x209750); /* switch: 90 entries, 65 targets */
    if (_jt == 0x00208DB0u) goto loc_00208DB0;
    if (_jt == 0x00208DD8u) goto loc_00208DD8;
    if (_jt == 0x00208DF5u) goto loc_00208DF5;
    if (_jt == 0x00208E15u) goto loc_00208E15;
    if (_jt == 0x00208E31u) goto loc_00208E31;
    if (_jt == 0x00208E4Du) goto loc_00208E4D;
    if (_jt == 0x00208E78u) goto loc_00208E78;
    if (_jt == 0x00208EA7u) goto loc_00208EA7;
    if (_jt == 0x00208F5Au) goto loc_00208F5A;
    if (_jt == 0x00208F77u) goto loc_00208F77;
    if (_jt == 0x00208F94u) goto loc_00208F94;
    if (_jt == 0x00208FB1u) goto loc_00208FB1;
    if (_jt == 0x00208FCEu) goto loc_00208FCE;
    if (_jt == 0x00208FEBu) goto loc_00208FEB;
    if (_jt == 0x00209008u) goto loc_00209008;
    if (_jt == 0x002090D9u) goto loc_002090D9;
    if (_jt == 0x002090F6u) goto loc_002090F6;
    if (_jt == 0x00209137u) goto loc_00209137;
    if (_jt == 0x0020915Cu) goto loc_0020915C;
    if (_jt == 0x002091B2u) goto loc_002091B2;
    if (_jt == 0x002091BEu) goto loc_002091BE;
    if (_jt == 0x002091E5u) goto loc_002091E5;
    if (_jt == 0x00209206u) goto loc_00209206;
    if (_jt == 0x00209233u) goto loc_00209233;
    if (_jt == 0x00209253u) goto loc_00209253;
    if (_jt == 0x00209273u) goto loc_00209273;
    if (_jt == 0x00209293u) goto loc_00209293;
    if (_jt == 0x002092B3u) goto loc_002092B3;
    if (_jt == 0x002092D3u) goto loc_002092D3;
    if (_jt == 0x002092F3u) goto loc_002092F3;
    if (_jt == 0x00209313u) goto loc_00209313;
    if (_jt == 0x00209333u) goto loc_00209333;
    if (_jt == 0x00209353u) goto loc_00209353;
    if (_jt == 0x00209373u) goto loc_00209373;
    if (_jt == 0x00209393u) goto loc_00209393;
    if (_jt == 0x002093B3u) goto loc_002093B3;
    if (_jt == 0x002093D3u) goto loc_002093D3;
    if (_jt == 0x002093F3u) goto loc_002093F3;
    if (_jt == 0x00209413u) goto loc_00209413;
    if (_jt == 0x00209433u) goto loc_00209433;
    if (_jt == 0x00209453u) goto loc_00209453;
    if (_jt == 0x00209473u) goto loc_00209473;
    if (_jt == 0x00209493u) goto loc_00209493;
    if (_jt == 0x002094B3u) goto loc_002094B3;
    if (_jt == 0x002094D0u) goto loc_002094D0;
    if (_jt == 0x002094EDu) goto loc_002094ED;
    if (_jt == 0x0020950Au) goto loc_0020950A;
    if (_jt == 0x0020952Au) goto loc_0020952A;
    if (_jt == 0x0020954Au) goto loc_0020954A;
    if (_jt == 0x00209567u) goto loc_00209567;
    if (_jt == 0x00209591u) goto loc_00209591;
    if (_jt == 0x002095B1u) goto loc_002095B1;
    if (_jt == 0x002095D1u) goto loc_002095D1;
    if (_jt == 0x002095F1u) goto loc_002095F1;
    if (_jt == 0x00209611u) goto loc_00209611;
    if (_jt == 0x00209631u) goto loc_00209631;
    if (_jt == 0x00209651u) goto loc_00209651;
    if (_jt == 0x00209671u) goto loc_00209671;
    if (_jt == 0x00209691u) goto loc_00209691;
    if (_jt == 0x002096B1u) goto loc_002096B1;
    if (_jt == 0x002096D1u) goto loc_002096D1;
    if (_jt == 0x002096F1u) goto loc_002096F1;
    if (_jt == 0x00209711u) goto loc_00209711;
    if (_jt == 0x00209731u) goto loc_00209731;
    if (_jt == 0x00209741u) goto loc_00209741;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00208DB0: ;
    eax = MEM32(esi + 0x2F4);
    ecx = MEM32(esp + 0xD44);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00208DC8u); RECOMP_ABI_CALL(0x00016041u, sub_00016041); /* call 0x00016041 */

loc_00208DC8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208DD8: ;
    edx = ZX8(MEM8(esi + 0x2F9));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208DF5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x2F0);
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208E15: ;
    eax = MEM32(esi + 0x250);
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208E31: ;
    edx = MEM32(esi + 0x254);
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208E4D: ;
    edx = MEM32(esp + 0xD44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209741; /* je: equal / zero */

loc_00208E5C: ;
    eax = esi + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00208E61: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208E61; /* jne: not equal / not zero */

loc_00208E6B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208E78: ;
    edx = MEM32(esp + 0xD44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209741; /* je: equal / zero */

loc_00208E87: ;
    eax = esi + 0x104;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00208E90: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208E90; /* jne: not equal / not zero */

loc_00208E9A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208EA7: ;
    ecx = esp + 0x12C;
    PUSH32(esp, 0x00208EB3u); RECOMP_ABI_CALL(0x000195F2u, sub_000195F2); /* call 0x000195F2 */

loc_00208EB3: ;
    ebx = MEM32(esi + 0x250);
    PUSH32(esp, ebx);
    ecx = esp + 0x130;
    PUSH32(esp, 0x00208EC6u); RECOMP_ABI_CALL(0x0001F3A8u, sub_0001F3A8); /* call 0x0001F3A8 */

loc_00208EC6: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208F31; /* jl: less (signed <) */

loc_00208ECC: ;
    ecx = MEM32(0x8F9584);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00208ED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208ED4u); } /* indirect call */
    }

loc_00208ED7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00208EDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208EDBu); } /* indirect call */
    }

loc_00208EDE: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00208EE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208EE4u); } /* indirect call */
    }

loc_00208EE7: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00208EF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208EEEu); } /* indirect call */
    }

loc_00208EF1: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00208EFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208EF6u); } /* indirect call */
    }

loc_00208EFC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00208F07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208F01u); } /* indirect call */
    }

loc_00208F07: ;
    ecx = MEM32(esp + 0xD44);
    MEM32(ecx) = eax;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00208F18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208F15u); } /* indirect call */
    }

loc_00208F18: ;
    ecx = esp + 0x12C;
    PUSH32(esp, 0x00208F24u); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00208F24: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208F31: ;
    eax = ZX8(MEM8(esi + 0x2C8));
    ecx = MEM32(esp + 0xD44);
    MEM32(ecx) = eax;
    ecx = esp + 0x12C;
    PUSH32(esp, 0x00208F4Du); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00208F4D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208F5A: ;
    edx = ZX8(MEM8(esi + 0x266));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208F77: ;
    ecx = ZX8(MEM8(esi + 0x260));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208F94: ;
    eax = ZX8(MEM8(esi + 0x264));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208FB1: ;
    edx = ZX8(MEM8(esi + 0x24D));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208FCE: ;
    ecx = ZX8(MEM8(esi + 0x24C));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00208FEB: ;
    eax = ZX16(MEM16(esi + 0x24A));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209008: ;
    ebp = MEM32(esp + 0xD44);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209741; /* je: equal / zero */

loc_00209017: ;
    PUSH32(esp, 0x0020901Cu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0020901C: ;
    edi = esi + 0x204;
    ebx = eax;
    eax = edi;
    edx = eax + 1;
    /* nop */

loc_00209030: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209030; /* jne: not equal / not zero */

loc_00209037: ;
    esi = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00209041: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209041; /* jne: not equal / not zero */

loc_0020904B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00209062; /* jle: less or equal (signed <=) */

loc_00209051: ;
    _fa = (uint32_t)(MEM8(esp + ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + ecx + 0x10), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020905D; /* jne: not equal / not zero */

loc_00209058: ;
    MEM8(esp + ecx + 0x10) = 0x5F;

loc_0020905D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209051; /* jl: less (signed <) */

loc_00209062: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xB0;
    PUSH32(esp, 0x7F82D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209079u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00209079: ;
    ecx = esp + 0xB8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00209086u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00209086: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00209091u); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_00209091: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002090C2; /* je: equal / zero */

loc_00209095: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0xB0;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002090A5u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002090A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002090AEu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002090AE: ;
    ecx = eax;
    PUSH32(esp, 0x002090B5u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002090B5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002090C2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002090C9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002090C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002090D9: ;
    eax = ZX16(MEM16(esi + 0x244));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002090F6: ;
    ecx = ZX8(MEM8(esi + 0x268));
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0020910Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209107u); } /* indirect call */
    }

loc_0020910A: ;
    edx = MEM32(esp + 0xD44);
    eax = esp + 0x10;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00209120: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209120; /* jne: not equal / not zero */

loc_0020912A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209137: ;
    edx = ZX16(MEM16(esi + 0x262));
    eax = MEM32(esp + 0xD44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020914Cu); RECOMP_ABI_CALL(0x00022EA9u, sub_00022EA9); /* call 0x00022EA9 */

loc_0020914C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020915C: ;
    SET_LO16(esi, MEM16(esi + 0x246));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x7E6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x7E6 (16-bit) */

loc_00209168: ;
    if (CMP_NE(_fa, _fb)) goto loc_0020918C; /* jne: not equal / not zero */

loc_0020916A: ;
    ecx = MEM32(esp + 0xD44);
    PUSH32(esp, 0x7F8520);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020917Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020917C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020918C: ;
    eax = MEM32(esp + 0xD44);
    edx = ZX16(LO16(esi));
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002091A2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002091A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002091B2: ;
    SET_LO16(esi, MEM16(esi + 0x248));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    goto loc_00209168;

loc_002091BE: ;
    ecx = ZX8(MEM8(esi + 0x261));
    edx = MEM32(esp + 0xD44);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002091D5u); RECOMP_ABI_CALL(0x00018567u, sub_00018567); /* call 0x00018567 */

loc_002091D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002091E5: ;
    SET_LO8(eax, MEM8(esi + 0x2C0));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    MEM8(ecx) = LO8(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209206: ;
    _fa = (uint32_t)(MEM8(esi + 0x264)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x264), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209671; /* jne: not equal / not zero */

loc_00209213: ;
    edx = ZX8(MEM8(esi + 0x2D1));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209233: ;
    eax = ZX8(MEM8(esi + 0x2E1));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209253: ;
    edx = ZX8(MEM8(esi + 0x2D4));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209273: ;
    ecx = ZX8(MEM8(esi + 0x2D5));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209293: ;
    eax = ZX8(MEM8(esi + 0x2E2));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002092B3: ;
    edx = ZX8(MEM8(esi + 0x2DC));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002092D3: ;
    ecx = ZX8(MEM8(esi + 0x2E3));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002092F3: ;
    eax = ZX8(MEM8(esi + 0x2DD));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209313: ;
    edx = ZX8(MEM8(esi + 0x2E8));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209333: ;
    eax = ZX8(MEM8(esi + 0x2DB));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209353: ;
    edx = ZX8(MEM8(esi + 0x2E7));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209373: ;
    ecx = ZX8(MEM8(esi + 0x2E5));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209393: ;
    eax = ZX8(MEM8(esi + 0x2D7));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002093B3: ;
    edx = ZX8(MEM8(esi + 0x2D6));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002093D3: ;
    ecx = ZX8(MEM8(esi + 0x2D9));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002093F3: ;
    eax = ZX8(MEM8(esi + 0x2D8));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209413: ;
    edx = ZX8(MEM8(esi + 0x2D2));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209433: ;
    ecx = ZX8(MEM8(esi + 0x2E4));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209453: ;
    eax = ZX8(MEM8(esi + 0x2D3));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209473: ;
    edx = ZX8(MEM8(esi + 0x2E3));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209493: ;
    ecx = ZX8(MEM8(esi + 0x2EA));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002094B3: ;
    eax = ZX8(MEM8(esi + 0x2E9));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002094D0: ;
    edx = ZX8(MEM8(esi + 0x2DF));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002094ED: ;
    ecx = ZX8(MEM8(esi + 0x2E0));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020950A: ;
    eax = ZX8(MEM8(esi + 0x2E6));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020952A: ;
    edx = ZX8(MEM8(esi + 0x2DE));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020954A: ;
    ecx = ZX8(MEM8(esi + 0x2DA));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209567: ;
    eax = esp + 0x90;
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00209578u); RECOMP_ABI_CALL(0x0001FF47u, sub_0001FF47); /* call 0x0001FF47 */

loc_00209578: ;
    ecx = MEM32(esp + 0xD4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209591: ;
    edx = ZX8(MEM8(esi + 0x2D3));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002095B1: ;
    ecx = ZX8(MEM8(esi + 0x2E1));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002095D1: ;
    eax = ZX8(MEM8(esi + 0x2E5));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002095F1: ;
    edx = ZX8(MEM8(esi + 0x2E0));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209611: ;
    ecx = ZX8(MEM8(esi + 0x2DB));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209631: ;
    eax = ZX8(MEM8(esi + 0x2D6));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209651: ;
    edx = ZX8(MEM8(esi + 0x2D7));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209671: ;
    ecx = ZX8(MEM8(esi + 0x2D1));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209691: ;
    ecx = ZX8(MEM8(esi + 0x2DC));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002096B1: ;
    eax = ZX8(MEM8(esi + 0x2D5));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002096D1: ;
    ecx = ZX8(MEM8(esi + 0x2DF));
    edx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002096F1: ;
    eax = ZX8(MEM8(esi + 0x2D9));
    ecx = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209711: ;
    edx = ZX8(MEM8(esi + 0x2DA));
    eax = MEM32(esp + 0xD44);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209731: ;
    ecx = ZX8(MEM8(esi + 0x2DE));
    edx = MEM32(esp + 0xD44);
    MEM32(edx) = ecx;

loc_00209741: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00209744: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020974E
 * Original: 0x0020974E - 0x00209C86 (1336 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020974E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020974E: ;
    edi = edi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x3100208E) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    /* mov fs, MEM16(eax) - segment register */;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + -105)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx + -105) = MEM8(ecx + -105) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + -105)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* mov fs, MEM16(eax) - segment register */;
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -114)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + -114) = MEM8(eax + -114) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + -114)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + -1901658080) = MEM8(eax + -1901658080) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax + -1901658080)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, edx);

    g_seh_ebp = ebp; sub_00209C86(); return; /* fallthrough 0x00209C86 */

}

/**
 * sub_00209C86
 * Original: 0x00209C86 - 0x00209DA0 (282 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209C86(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00209C86: ;
    edi = edi;
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (eax == MEM32(edi));
        _cf = (eax < MEM32(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasd */
    ecx = _rc; }
    /* wait - FPU sync */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = 0xCA00209Bu;
    /* wait - FPU sync */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx ^ MEM32(eax + 0x209BD800);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + LO8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* wait - FPU sync */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("out 0x9b, al", 0x00209CA0u); /* TODO: out 0x9b, al */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("in eax, dx", 0x00209CA4u); /* TODO: in eax, dx */
    /* wait - FPU sync */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("hlt", 0x00209CA8u); /* TODO: hlt */
    /* wait - FPU sync */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("sti", 0x00209CACu); /* TODO: sti */
    /* wait - FPU sync */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM8(eax + 0x209C0900)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(MEM8(eax + 0x209C0900))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + MEM8(eax + 0x209C0900));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("pushfd", 0x00209CB9u); /* TODO: pushfd */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    RECOMP_UNIMPL("pushfd", 0x00209CBDu); /* TODO: pushfd */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0 /* seg:ds */);
    RECOMP_UNIMPL("pushfd", 0x00209CC1u); /* TODO: pushfd */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2C00209C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("pushfd", 0x00209CC9u); /* TODO: pushfd */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x209BD100)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 0x209BD100) (8-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* wait - FPU sync */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("pushfd", 0x00209CD9u); /* TODO: pushfd */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("pushfd", 0x00209CDCu); /* TODO: pushfd */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15021515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15151515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x4150315) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15061505) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x8071515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(0x1515150A) = MEM32(0x1515150A) | edx;
    _fa = (uint32_t)(MEM32(0x1515150A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15151515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15151515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15151515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    edx = edx | MEM32(0x15151515);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x150C1515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15150D15) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:cs */);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x100F1515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15151115) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15121515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x14131515) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00209DA0
 * Original: 0x00209DA0 - 0x00209DE1 (65 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209DA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7F7E50;
    MEM32(eax + 0x2FC) = ecx;
    MEM32(eax + 0x300) = ecx;
    MEM32(eax + 0x304) = ecx;
    MEM32(eax + 0x308) = ecx;
    MEM32(eax + 0x30C) = ecx;
    MEM32(eax + 0x310) = ecx;
    MEM32(eax + 0x314) = ecx;
    MEM32(eax + 0x318) = ecx;
    MEM32(eax + 0x31C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00209E00
 * Original: 0x00209E00 - 0x00209E1E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209E00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00209E08u); RECOMP_ABI_CALL(0x0001E593u, sub_0001E593); /* call 0x0001E593 */

loc_00209E08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209E18; /* je: equal / zero */

loc_00209E0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00209E15u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00209E15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00209E18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209E30
 * Original: 0x00209E30 - 0x00209E5B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x831C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209E58; /* je: equal / zero */

loc_00209E3E: ;
    ecx = esi;
    PUSH32(esp, 0x00209E45u); RECOMP_ABI_CALL(0x0002FB18u, sub_0002FB18); /* call 0x0002FB18 */

loc_00209E45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00209E4Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00209E4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x831C) = 0;

loc_00209E58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209E70
 * Original: 0x00209E70 - 0x00209F55 (229 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209E70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8F9584);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00209E86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209E83u); } /* indirect call */
    }

loc_00209E86: ;
    edi = MEM32(esp + 0x1C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x831C);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00209E9Fu); RECOMP_ABI_CALL(0x0002F19Au, sub_0002F19A); /* call 0x0002F19A */

loc_00209E9F: ;
    ecx = MEM32(esi + 0x831C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00209EB2u); RECOMP_ABI_CALL(0x0002F19Au, sub_0002F19A); /* call 0x0002F19A */

loc_00209EB2: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00209EBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209EBBu); } /* indirect call */
    }

loc_00209EBE: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00209ECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209EC7u); } /* indirect call */
    }

loc_00209ECD: ;
    ecx = eax;
    PUSH32(esp, 0x00209ED4u); RECOMP_ABI_CALL(0x000146F6u, sub_000146F6); /* call 0x000146F6 */

loc_00209ED4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209EF3; /* jne: not equal / not zero */

loc_00209ED8: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00209EDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209EDCu); } /* indirect call */
    }

loc_00209EDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209EF3; /* jne: not equal / not zero */

loc_00209EE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xC;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209EF3: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00209F02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209EFCu); } /* indirect call */
    }

loc_00209F02: ;
    ecx = eax;
    PUSH32(esp, 0x00209F09u); RECOMP_ABI_CALL(0x0001FB41u, sub_0001FB41); /* call 0x0001FB41 */

loc_00209F09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209F1C; /* jne: not equal / not zero */

loc_00209F0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 7;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00209F1C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00209F26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209F20u); } /* indirect call */
    }

loc_00209F26: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00209F30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209F2Au); } /* indirect call */
    }

loc_00209F30: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x831C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209F40u); RECOMP_ABI_CALL(0x0002C2BAu, sub_0002C2BA); /* call 0x0002C2BA */

loc_00209F40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 6;
    if (CMP_NE(_fa, _fb)) goto loc_00209F4B; /* jne: not equal / not zero */

loc_00209F49: ;
    eax = ebp;

loc_00209F4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209F90
 * Original: 0x00209F90 - 0x0020A109 (377 bytes, 136 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209F90: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00209FAFu); RECOMP_ABI_CALL(0x00025497u, sub_00025497); /* call 0x00025497 */

loc_00209FAF: ;
    ecx = MEM32(0x8F9584);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00209FBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209FB7u); } /* indirect call */
    }

loc_00209FBA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00209FC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209FBEu); } /* indirect call */
    }

loc_00209FC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x28) = LO8(eax);
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020A00E; /* jle: less or equal (signed <=) */

loc_00209FD4: ;
    ebp = 0x8FA8D4;
    edi = esi + 0x10;
    /* nop */

loc_00209FE0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209FF8; /* jne: not equal / not zero */

loc_00209FE7: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(edi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00209FF6u); RECOMP_ABI_CALL(0x000188C8u, sub_000188C8); /* call 0x000188C8 */

loc_00209FF6: ;
    goto loc_0020A000;

loc_00209FF8: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0020A000u); RECOMP_ABI_CALL(0x0001D873u, sub_0001D873); /* call 0x0001D873 */

loc_0020A000: ;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209FE0; /* jl: less (signed <) */

loc_0020A00E: ;
    eax = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020A04E; /* jle: less or equal (signed <=) */

loc_0020A017: ;
    ebx = 0x8FA934;
    edi = esi + 0x1C;
    /* nop */

loc_0020A020: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A038; /* jne: not equal / not zero */

loc_0020A027: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0020A036u); RECOMP_ABI_CALL(0x000188C8u, sub_000188C8); /* call 0x000188C8 */

loc_0020A036: ;
    goto loc_0020A040;

loc_0020A038: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0020A040u); RECOMP_ABI_CALL(0x0001D873u, sub_0001D873); /* call 0x0001D873 */

loc_0020A040: ;
    eax = MEM32(esi + 0xC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A020; /* jl: less (signed <) */

loc_0020A04E: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0020A057u); RECOMP_ABI_CALL(0x0001A52Eu, sub_0001A52E); /* call 0x0001A52E */

loc_0020A057: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020A0BB; /* ja: above (unsigned >) */

loc_0020A05C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20A10C); /* switch: 19 entries, 14 targets */
    if (_jt == 0x0020A063u) goto loc_0020A063;
    if (_jt == 0x0020A067u) goto loc_0020A067;
    if (_jt == 0x0020A06Eu) goto loc_0020A06E;
    if (_jt == 0x0020A075u) goto loc_0020A075;
    if (_jt == 0x0020A07Cu) goto loc_0020A07C;
    if (_jt == 0x0020A083u) goto loc_0020A083;
    if (_jt == 0x0020A08Au) goto loc_0020A08A;
    if (_jt == 0x0020A091u) goto loc_0020A091;
    if (_jt == 0x0020A098u) goto loc_0020A098;
    if (_jt == 0x0020A09Fu) goto loc_0020A09F;
    if (_jt == 0x0020A0A6u) goto loc_0020A0A6;
    if (_jt == 0x0020A0ADu) goto loc_0020A0AD;
    if (_jt == 0x0020A0B4u) goto loc_0020A0B4;
    if (_jt == 0x0020A0BBu) goto loc_0020A0BB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020A063: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020A0C0;

loc_0020A067: ;
    edi = 8;
    goto loc_0020A0C0;

loc_0020A06E: ;
    edi = 0xA;
    goto loc_0020A0C0;

loc_0020A075: ;
    edi = 9;
    goto loc_0020A0C0;

loc_0020A07C: ;
    edi = 0xD;
    goto loc_0020A0C0;

loc_0020A083: ;
    edi = 0x10;
    goto loc_0020A0C0;

loc_0020A08A: ;
    edi = 0x11;
    goto loc_0020A0C0;

loc_0020A091: ;
    edi = 0x12;
    goto loc_0020A0C0;

loc_0020A098: ;
    edi = 0x13;
    goto loc_0020A0C0;

loc_0020A09F: ;
    edi = 0x14;
    goto loc_0020A0C0;

loc_0020A0A6: ;
    edi = 0x15;
    goto loc_0020A0C0;

loc_0020A0AD: ;
    edi = 0xB;
    goto loc_0020A0C0;

loc_0020A0B4: ;
    edi = 0xC;
    goto loc_0020A0C0;

loc_0020A0BB: ;
    edi = 1;

loc_0020A0C0: ;
    ebx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x0020A0D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A0CBu); } /* indirect call */
    }

loc_0020A0D1: ;
    eax = MEM32(esi + 4);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x0020A0DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A0D9u); } /* indirect call */
    }

loc_0020A0DF: ;
    eax = MEM32(esi);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0020A0E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A0E6u); } /* indirect call */
    }

loc_0020A0E9: ;
    eax = MEM32(esi + 4);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0020A0F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A0F1u); } /* indirect call */
    }

loc_0020A0F4: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0020A0FDu); RECOMP_ABI_CALL(0x00023BABu, sub_00023BAB); /* call 0x00023BAB */

loc_0020A0FD: ;
    eax = edi;
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
 * sub_0020A400
 * Original: 0x0020A400 - 0x0020A52F (303 bytes, 108 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A400: ;
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8F9584);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020A417u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A414u); } /* indirect call */
    }

loc_0020A417: ;
    ecx = MEM32(0x8F9584);
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020A426u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A423u); } /* indirect call */
    }

loc_0020A426: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020A42Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A42Au); } /* indirect call */
    }

loc_0020A42D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0020A437u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A431u); } /* indirect call */
    }

loc_0020A437: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x0020A443u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A43Du); } /* indirect call */
    }

loc_0020A443: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x0020A44Cu); RECOMP_ABI_CALL(0x0002598Du, sub_0002598D); /* call 0x0002598D */

loc_0020A44C: ;
    edx = MEM32(esi);
    ebp = eax;
    eax = MEM32(esp + 0x174);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0020A460u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A45Au); } /* indirect call */
    }

loc_0020A460: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_0020A4A6; /* jle: less or equal (signed <=) */

loc_0020A46A: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0020A471u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A46Eu); } /* indirect call */
    }

loc_0020A471: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A4A6; /* jne: not equal / not zero */

loc_0020A476: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x0020A480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A47Au); } /* indirect call */
    }

loc_0020A480: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A494; /* jl: less (signed <) */

loc_0020A485: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0020A48Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A489u); } /* indirect call */
    }

loc_0020A48F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A4A6; /* jl: less (signed <) */

loc_0020A494: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xC;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0020A4A6: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0020A4ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A4AAu); } /* indirect call */
    }

loc_0020A4AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A4F5; /* je: equal / zero */

loc_0020A4B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020A4BC; /* jle: less or equal (signed <=) */

loc_0020A4B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020A4F5; /* jle: less or equal (signed <=) */

loc_0020A4BC: ;
    esi = MEM32(esp + 0x174);
    edx = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0020A4CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A4C8u); } /* indirect call */
    }

loc_0020A4CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A520; /* je: equal / zero */

loc_0020A4CF: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0020A4DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A4D6u); } /* indirect call */
    }

loc_0020A4DC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0020A4E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A4E0u); } /* indirect call */
    }

loc_0020A4E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0020A4F5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0020A4FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A4F9u); } /* indirect call */
    }

loc_0020A4FC: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0020A506u); RECOMP_ABI_CALL(0x0002BAA9u, sub_0002BAA9); /* call 0x0002BAA9 */

loc_0020A506: ;
    ecx = MEM32(esp + 0x174);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0020A517u); RECOMP_ABI_CALL(0x00014764u, sub_00014764); /* call 0x00014764 */

loc_0020A517: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0020A520u); RECOMP_ABI_CALL(0x000149D5u, sub_000149D5); /* call 0x000149D5 */

loc_0020A520: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A580
 * Original: 0x0020A580 - 0x0020A5BF (63 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A580: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    edx = ecx;
    PUSH32(esp, 0x0020A58Cu); RECOMP_ABI_CALL(0x00030A54u, sub_00030A54); /* call 0x00030A54 */

loc_0020A58C: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A597; /* jne: not equal / not zero */

loc_0020A593: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0020A5A0;

loc_0020A597: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 4;
    if (CMP_NE(_fa, _fb)) goto loc_0020A5A0; /* jne: not equal / not zero */

loc_0020A5A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    ecx = edx;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x0020A5B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A5AEu); } /* indirect call */
    }

loc_0020A5B4: ;
    ecx = eax;
    PUSH32(esp, 0x0020A5BBu); RECOMP_ABI_CALL(0x0001458Eu, sub_0001458E); /* call 0x0001458E */

loc_0020A5BB: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020A5D0
 * Original: 0x0020A5D0 - 0x0020A5FC (44 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A5D0(void)
{

loc_0020A5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x0020A5DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A5D6u); } /* indirect call */
    }

loc_0020A5DC: ;
    ecx = MEM32(esp + 0x10);
    edx = eax;
    edi = MEM32(edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020A5ECu); RECOMP_ABI_CALL(0x00030A54u, sub_00030A54); /* call 0x00030A54 */

loc_0020A5EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = edx;
    { uint32_t _icall_target = MEM32(edi + 0x74); PUSH32(esp, 0x0020A5F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A5F4u); } /* indirect call */
    }

loc_0020A5F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A610
 * Original: 0x0020A610 - 0x0020A63C (44 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A610(void)
{

loc_0020A610: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x0020A61Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A616u); } /* indirect call */
    }

loc_0020A61C: ;
    ecx = MEM32(esp + 0x10);
    edx = eax;
    edi = MEM32(edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020A62Cu); RECOMP_ABI_CALL(0x00030A54u, sub_00030A54); /* call 0x00030A54 */

loc_0020A62C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = edx;
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x0020A637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A634u); } /* indirect call */
    }

loc_0020A637: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A650
 * Original: 0x0020A650 - 0x0020A6B6 (102 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A650: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    esi = ecx;
    PUSH32(esp, 0x0020A65Eu); RECOMP_ABI_CALL(0x00030A54u, sub_00030A54); /* call 0x00030A54 */

loc_0020A65E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30 (32-bit) */
    edi = eax;
    eax = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020A6A4; /* je: equal / zero */

loc_0020A667: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x0020A671u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A66Bu); } /* indirect call */
    }

loc_0020A671: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0020A682u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A67Fu); } /* indirect call */
    }

loc_0020A682: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x0020A68Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A688u); } /* indirect call */
    }

loc_0020A68E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0020A69Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A698u); } /* indirect call */
    }

loc_0020A69B: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020A6A4: ;
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x0020A6B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A6ABu); } /* indirect call */
    }

loc_0020A6B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A6D0
 * Original: 0x0020A6D0 - 0x0020A6D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A6D0(void)
{

loc_0020A6D0: ;
    eax = ecx;
    MEM32(eax) = 0x7F8530;
    esp += 4; return; /* ret */

}

/**
 * sub_0020A6E0
 * Original: 0x0020A6E0 - 0x0020A6FF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A6E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F77E8;
    if (TEST_Z(_fa, _fb)) goto loc_0020A6F9; /* je: equal / zero */

loc_0020A6F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020A6F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020A6F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020A6F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A710
 * Original: 0x0020A710 - 0x0020A760 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A710: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020A71Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A718u); } /* indirect call */
    }

loc_0020A71B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A727; /* je: equal / zero */

loc_0020A71F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0020A727: ;
    PUSH32(esp, 0x0020A72Cu); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_0020A72C: ;
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(0x8F9584);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020A73Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A737u); } /* indirect call */
    }

loc_0020A73A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020A741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A73Eu); } /* indirect call */
    }

loc_0020A741: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0020A74Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A745u); } /* indirect call */
    }

loc_0020A74B: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 0x9C) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A780
 * Original: 0x0020A780 - 0x0020A83E (190 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020A78Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A788u); } /* indirect call */
    }

loc_0020A78B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A799; /* je: equal / zero */

loc_0020A78F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A799: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020A7A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A7A6u); } /* indirect call */
    }

loc_0020A7A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A82B; /* je: equal / zero */

loc_0020A7AD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 2;
    if ((_fa == 0)) goto loc_0020A808; /* je: equal / zero */

loc_0020A7BC: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020A7E2; /* je: equal / zero */

loc_0020A7BF: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020A80A; /* jne: not equal / not zero */

loc_0020A7C2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0020A7D0u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020A7D0: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 3;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A7E2: ;
    ecx = MEM32(esp + 0x10);
    edx = 1;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x0020A7F6u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020A7F6: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 3;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A808: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020A80A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x0020A819u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020A819: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 3;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A82B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 3;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A870
 * Original: 0x0020A870 - 0x0020A92F (191 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020A87Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A878u); } /* indirect call */
    }

loc_0020A87B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A889; /* je: equal / zero */

loc_0020A87F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A889: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020A899u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A896u); } /* indirect call */
    }

loc_0020A899: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A91C; /* je: equal / zero */

loc_0020A89D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 2;
    if ((_fa == 0)) goto loc_0020A8F9; /* je: equal / zero */

loc_0020A8AC: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020A8D3; /* je: equal / zero */

loc_0020A8AF: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020A8FB; /* jne: not equal / not zero */

loc_0020A8B2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    PUSH32(esp, 0x0020A8C1u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020A8C1: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 4;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A8D3: ;
    ecx = MEM32(esp + 0x10);
    edx = 1;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    PUSH32(esp, 0x0020A8E7u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020A8E7: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 4;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A8F9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020A8FB: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    PUSH32(esp, 0x0020A90Au); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020A90A: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 4;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A91C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 4;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A960
 * Original: 0x0020A960 - 0x0020A9E6 (134 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020A96Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A968u); } /* indirect call */
    }

loc_0020A96B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A979; /* je: equal / zero */

loc_0020A96F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020A979: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020A989u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020A986u); } /* indirect call */
    }

loc_0020A989: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A9D3; /* je: equal / zero */

loc_0020A98D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 2;
    if ((_fa == 0)) goto loc_0020A9AB; /* je: equal / zero */

loc_0020A99C: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020A9A4; /* je: equal / zero */

loc_0020A99F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020A9AD; /* jne: not equal / not zero */

loc_0020A9A2: ;
    goto loc_0020A9AD;

loc_0020A9A4: ;
    edx = 1;
    goto loc_0020A9AD;

loc_0020A9AB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020A9AD: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    ecx = eax;
    PUSH32(esp, 0x0020A9C1u); RECOMP_ABI_CALL(0x00024CE5u, sub_00024CE5); /* call 0x00024CE5 */

loc_0020A9C1: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 5;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020A9D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 5;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020AA10
 * Original: 0x0020AA10 - 0x0020AA96 (134 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AA10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020AA1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AA18u); } /* indirect call */
    }

loc_0020AA1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AA29; /* je: equal / zero */

loc_0020AA1F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020AA29: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020AA39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AA36u); } /* indirect call */
    }

loc_0020AA39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AA83; /* je: equal / zero */

loc_0020AA3D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 2;
    if ((_fa == 0)) goto loc_0020AA5B; /* je: equal / zero */

loc_0020AA4C: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020AA54; /* je: equal / zero */

loc_0020AA4F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020AA5D; /* jne: not equal / not zero */

loc_0020AA52: ;
    goto loc_0020AA5D;

loc_0020AA54: ;
    edx = 1;
    goto loc_0020AA5D;

loc_0020AA5B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020AA5D: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0xA);
    ecx = eax;
    PUSH32(esp, 0x0020AA71u); RECOMP_ABI_CALL(0x00024CE5u, sub_00024CE5); /* call 0x00024CE5 */

loc_0020AA71: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 0xA;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020AA83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 0xA;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020AAC0
 * Original: 0x0020AAC0 - 0x0020AB46 (134 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AAC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020AACBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AAC8u); } /* indirect call */
    }

loc_0020AACB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AAD9; /* je: equal / zero */

loc_0020AACF: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020AAD9: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020AAE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AAE6u); } /* indirect call */
    }

loc_0020AAE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AB33; /* je: equal / zero */

loc_0020AAED: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 2;
    if ((_fa == 0)) goto loc_0020AB0B; /* je: equal / zero */

loc_0020AAFC: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020AB04; /* je: equal / zero */

loc_0020AAFF: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020AB0D; /* jne: not equal / not zero */

loc_0020AB02: ;
    goto loc_0020AB0D;

loc_0020AB04: ;
    edx = 1;
    goto loc_0020AB0D;

loc_0020AB0B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020AB0D: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    ecx = eax;
    PUSH32(esp, 0x0020AB21u); RECOMP_ABI_CALL(0x00024CE5u, sub_00024CE5); /* call 0x00024CE5 */

loc_0020AB21: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 0xB;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0020AB33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 0xB;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020AB70
 * Original: 0x0020AB70 - 0x0020AC2F (191 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AB70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020AB7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AB78u); } /* indirect call */
    }

loc_0020AB7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AB89; /* je: equal / zero */

loc_0020AB7F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020AB89: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020AB99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AB96u); } /* indirect call */
    }

loc_0020AB99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AC1C; /* je: equal / zero */

loc_0020AB9D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 2;
    if ((_fa == 0)) goto loc_0020ABF9; /* je: equal / zero */

loc_0020ABAC: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020ABD3; /* je: equal / zero */

loc_0020ABAF: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020ABFB; /* jne: not equal / not zero */

loc_0020ABB2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x0020ABC1u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020ABC1: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 6;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020ABD3: ;
    ecx = MEM32(esp + 0x10);
    edx = 1;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x0020ABE7u); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020ABE7: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 6;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020ABF9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020ABFB: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x0020AC0Au); RECOMP_ABI_CALL(0x0001F268u, sub_0001F268); /* call 0x0001F268 */

loc_0020AC0A: ;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 6;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020AC1C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 6;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020AC60
 * Original: 0x0020AC60 - 0x0020AD03 (163 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020AC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AC60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020AC6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AC68u); } /* indirect call */
    }

loc_0020AC6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AC79; /* je: equal / zero */

loc_0020AC6F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0020AC79: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020AC8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AC87u); } /* indirect call */
    }

loc_0020AC8A: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020ACEF; /* je: equal / zero */

loc_0020AC90: ;
    ecx = MEM32(0x8F9584);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020AC9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AC99u); } /* indirect call */
    }

loc_0020AC9C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020ACA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020ACA0u); } /* indirect call */
    }

loc_0020ACA3: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 2;
    if ((_fa == 0)) goto loc_0020ACC0; /* je: equal / zero */

loc_0020ACB1: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020ACB9; /* je: equal / zero */

loc_0020ACB4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020ACC2; /* jne: not equal / not zero */

loc_0020ACB7: ;
    goto loc_0020ACC2;

loc_0020ACB9: ;
    esi = 1;
    goto loc_0020ACC2;

loc_0020ACC0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020ACC2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0020ACCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020ACC6u); } /* indirect call */
    }

loc_0020ACCC: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0020ACDCu); RECOMP_ABI_CALL(0x00024CE5u, sub_00024CE5); /* call 0x00024CE5 */

loc_0020ACDC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 7;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0020ACEF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = 7;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020AD30
 * Original: 0x0020AD30 - 0x0020AD96 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AD30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AD54; /* je: equal / zero */

loc_0020AD3E: ;
    ecx = edi;
    PUSH32(esp, 0x0020AD45u); RECOMP_ABI_CALL(0x00036616u, sub_00036616); /* call 0x00036616 */

loc_0020AD45: ;
    ecx = MEM32(0x8FA540);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0020AD51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AD4Eu); } /* indirect call */
    }

loc_0020AD51: ;
    MEM32(esi + 8) = ebx;

loc_0020AD54: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AD61; /* je: equal / zero */

loc_0020AD59: ;
    PUSH32(esp, 0x0020AD5Eu); RECOMP_ABI_CALL(0x0001568Cu, sub_0001568C); /* call 0x0001568C */

loc_0020AD5E: ;
    MEM32(esi + 0xC) = ebx;

loc_0020AD61: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AD6E; /* je: equal / zero */

loc_0020AD66: ;
    PUSH32(esp, 0x0020AD6Bu); RECOMP_ABI_CALL(0x00029F15u, sub_00029F15); /* call 0x00029F15 */

loc_0020AD6B: ;
    MEM32(esi + 0x10) = ebx;

loc_0020AD6E: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AD8B; /* je: equal / zero */

loc_0020AD75: ;
    ecx = edi;
    PUSH32(esp, 0x0020AD7Cu); RECOMP_ABI_CALL(0x00034898u, sub_00034898); /* call 0x00034898 */

loc_0020AD7C: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0020AD88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AD85u); } /* indirect call */
    }

loc_0020AD88: ;
    MEM32(esi + 0x14) = ebx;

loc_0020AD8B: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 0xF;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020ADB0
 * Original: 0x0020ADB0 - 0x0020AF28 (376 bytes, 141 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020ADB0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AE27; /* jne: not equal / not zero */

loc_0020ADBC: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AF17; /* je: equal / zero */

loc_0020ADC7: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax * 4 + 0x8B4CF0);
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020AE12; /* je: equal / zero */

loc_0020ADDC: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020ADFA; /* je: equal / zero */

loc_0020ADDF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020AE14; /* jne: not equal / not zero */

loc_0020ADE2: ;
    eax = 2;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020ADEEu); RECOMP_ABI_CALL(0x0001D1EDu, sub_0001D1ED); /* call 0x0001D1ED */

loc_0020ADEE: ;
    PUSH32(esp, 0x0020ADF3u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020ADF3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020ADFA: ;
    eax = 1;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AE06u); RECOMP_ABI_CALL(0x0001D1EDu, sub_0001D1ED); /* call 0x0001D1ED */

loc_0020AE06: ;
    PUSH32(esp, 0x0020AE0Bu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AE0B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020AE12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020AE14: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AE1Bu); RECOMP_ABI_CALL(0x0001D1EDu, sub_0001D1ED); /* call 0x0001D1ED */

loc_0020AE1B: ;
    PUSH32(esp, 0x0020AE20u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AE20: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020AE27: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AE9F; /* je: equal / zero */

loc_0020AE2E: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x53 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AE63; /* jne: not equal / not zero */

loc_0020AE37: ;
    eax = MEM32(edx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AE63; /* jne: not equal / not zero */

loc_0020AE3E: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AE48u); RECOMP_ABI_CALL(0x0001C261u, sub_0001C261); /* call 0x0001C261 */

loc_0020AE48: ;
    ecx = MEM32(0x8B4E68);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x0020AE57u); RECOMP_ABI_CALL(0x0002DAF2u, sub_0002DAF2); /* call 0x0002DAF2 */

loc_0020AE57: ;
    PUSH32(esp, 0x0020AE5Cu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AE5C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020AE63: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020AE81; /* je: equal / zero */

loc_0020AE6D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020AE7A; /* je: equal / zero */

loc_0020AE70: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020AE83; /* jne: not equal / not zero */

loc_0020AE73: ;
    eax = 2;
    goto loc_0020AE83;

loc_0020AE7A: ;
    eax = 1;
    goto loc_0020AE83;

loc_0020AE81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020AE83: ;
    PUSH32(esp, eax);
    eax = MEM32(esi * 4 + 0x8B4CF0);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x0020AE93u); RECOMP_ABI_CALL(0x0002DAF2u, sub_0002DAF2); /* call 0x0002DAF2 */

loc_0020AE93: ;
    PUSH32(esp, 0x0020AE98u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AE98: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020AE9F: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AEE6; /* je: equal / zero */

loc_0020AEA6: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020AEC4; /* je: equal / zero */

loc_0020AEB0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020AEBD; /* je: equal / zero */

loc_0020AEB3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020AEC6; /* jne: not equal / not zero */

loc_0020AEB6: ;
    eax = 2;
    goto loc_0020AEC6;

loc_0020AEBD: ;
    eax = 1;
    goto loc_0020AEC6;

loc_0020AEC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020AEC6: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ecx * 4 + 0x8B4CF0);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x0020AEDAu); RECOMP_ABI_CALL(0x000328E5u, sub_000328E5); /* call 0x000328E5 */

loc_0020AEDA: ;
    PUSH32(esp, 0x0020AEDFu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AEDF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020AEE6: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AF17; /* je: equal / zero */

loc_0020AEED: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AEF7u); RECOMP_ABI_CALL(0x0001C261u, sub_0001C261); /* call 0x0001C261 */

loc_0020AEF7: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ecx * 4 + 0x8B4CF0);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x0020AF0Bu); RECOMP_ABI_CALL(0x0002DAF2u, sub_0002DAF2); /* call 0x0002DAF2 */

loc_0020AF0B: ;
    PUSH32(esp, 0x0020AF10u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AF10: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020AF17: ;
    edi = 2;
    PUSH32(esp, 0x0020AF21u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AF21: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020AF90
 * Original: 0x0020AF90 - 0x0020B0A4 (276 bytes, 104 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AF90: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AFDE; /* je: equal / zero */

loc_0020AF9C: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020AFC5; /* je: equal / zero */

loc_0020AFA6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020AFC7; /* jne: not equal / not zero */

loc_0020AFA9: ;
    edx = 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020AFB4u); RECOMP_ABI_CALL(0x00022F1Cu, sub_00022F1C); /* call 0x00022F1C */

loc_0020AFB4: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0020AFBFu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AFBF: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0020AFC5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020AFC7: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020AFCDu); RECOMP_ABI_CALL(0x00022F1Cu, sub_00022F1C); /* call 0x00022F1C */

loc_0020AFCD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0020AFD8u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020AFD8: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0020AFDE: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B027; /* je: equal / zero */

loc_0020AFE5: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020B00E; /* je: equal / zero */

loc_0020AFEF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020B010; /* jne: not equal / not zero */

loc_0020AFF2: ;
    edx = 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020AFFDu); RECOMP_ABI_CALL(0x00018544u, sub_00018544); /* call 0x00018544 */

loc_0020AFFD: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    PUSH32(esp, 0x0020B008u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B008: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0020B00E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B010: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B016u); RECOMP_ABI_CALL(0x00018544u, sub_00018544); /* call 0x00018544 */

loc_0020B016: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    PUSH32(esp, 0x0020B021u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B021: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0020B027: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B044; /* je: equal / zero */

loc_0020B02E: ;
    PUSH32(esp, 0x0020B033u); RECOMP_ABI_CALL(0x0002C83Cu, sub_0002C83C); /* call 0x0002C83C */

loc_0020B033: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0020B03Eu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B03E: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0020B044: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B094; /* je: equal / zero */

loc_0020B04B: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020B078; /* je: equal / zero */

loc_0020B056: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020B07A; /* jne: not equal / not zero */

loc_0020B059: ;
    esi = 1;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0020B066u); RECOMP_ABI_CALL(0x00022F1Cu, sub_00022F1C); /* call 0x00022F1C */

loc_0020B066: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(edx) = eax;
    PUSH32(esp, 0x0020B072u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B072: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0020B078: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B07A: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0020B082u); RECOMP_ABI_CALL(0x00022F1Cu, sub_00022F1C); /* call 0x00022F1C */

loc_0020B082: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(edx) = eax;
    PUSH32(esp, 0x0020B08Eu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B08E: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0020B094: ;
    edi = 2;
    PUSH32(esp, 0x0020B09Eu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B09E: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020B0F0
 * Original: 0x0020B0F0 - 0x0020B1B7 (199 bytes, 83 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B0F0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B128; /* je: equal / zero */

loc_0020B0FC: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020B110; /* je: equal / zero */

loc_0020B106: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020B112; /* jne: not equal / not zero */

loc_0020B109: ;
    eax = 1;
    goto loc_0020B112;

loc_0020B110: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B112: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B122u); RECOMP_ABI_CALL(0x00028EFDu, sub_00028EFD); /* call 0x00028EFD */

loc_0020B122: ;
    eax = edi;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_0020B128: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B15B; /* je: equal / zero */

loc_0020B12F: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020B143; /* je: equal / zero */

loc_0020B139: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020B145; /* jne: not equal / not zero */

loc_0020B13C: ;
    eax = 1;
    goto loc_0020B145;

loc_0020B143: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B145: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B155u); RECOMP_ABI_CALL(0x000242A4u, sub_000242A4); /* call 0x000242A4 */

loc_0020B155: ;
    eax = edi;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_0020B15B: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B177; /* je: equal / zero */

loc_0020B162: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B171u); RECOMP_ABI_CALL(0x00015731u, sub_00015731); /* call 0x00015731 */

loc_0020B171: ;
    eax = edi;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_0020B177: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B1AE; /* je: equal / zero */

loc_0020B17E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020B193; /* je: equal / zero */

loc_0020B189: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020B195; /* jne: not equal / not zero */

loc_0020B18C: ;
    edx = 1;
    goto loc_0020B195;

loc_0020B193: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B195: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0020B1A7u); RECOMP_ABI_CALL(0x00028EFDu, sub_00028EFD); /* call 0x00028EFD */

loc_0020B1A7: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_0020B1AE: ;
    eax = 2;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020B1F0
 * Original: 0x0020B1F0 - 0x0020B24E (94 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020B1F0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B236; /* je: equal / zero */

loc_0020B1FC: ;
    eax = MEM32(esp + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020B210; /* je: equal / zero */

loc_0020B206: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020B212; /* jne: not equal / not zero */

loc_0020B209: ;
    edx = 1;
    goto loc_0020B212;

loc_0020B210: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B212: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B222u); RECOMP_ABI_CALL(0x00020CC1u, sub_00020CC1); /* call 0x00020CC1 */

loc_0020B222: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020B243; /* jne: not equal / not zero */

loc_0020B226: ;
    esi = 5;
    PUSH32(esp, 0x0020B230u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B230: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0020B236: ;
    esi = MEM32(eax + 0x14);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B243: ;
    PUSH32(esp, 0x0020B248u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B248: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020B270
 * Original: 0x0020B270 - 0x0020B2BA (74 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B270: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    PUSH32(esp, edi);
    edi = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0020B2AE; /* je: equal / zero */

loc_0020B27F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B2AE; /* je: equal / zero */

loc_0020B286: ;
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020B29C; /* je: equal / zero */

loc_0020B292: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020B29E; /* jne: not equal / not zero */

loc_0020B295: ;
    eax = 1;
    goto loc_0020B29E;

loc_0020B29C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B29E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B2A4u); RECOMP_ABI_CALL(0x000349D8u, sub_000349D8); /* call 0x000349D8 */

loc_0020B2A4: ;
    MEM32(esi + edi * 4 + 0x18) = 0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B2AE: ;
    PUSH32(esp, 0x0020B2B3u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B2B3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020B2D0
 * Original: 0x0020B2D0 - 0x0020B3BF (239 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B2D0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0020B309; /* jne: not equal / not zero */

loc_0020B2DF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B3AD; /* je: equal / zero */

loc_0020B2EA: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020B2F4u); RECOMP_ABI_CALL(0x000316D4u, sub_000316D4); /* call 0x000316D4 */

loc_0020B2F4: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + eax * 4 + 0x18) = edi;
    PUSH32(esp, 0x0020B301u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B301: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0020B309: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B361; /* je: equal / zero */

loc_0020B310: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020B342; /* je: equal / zero */

loc_0020B31D: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020B344; /* jne: not equal / not zero */

loc_0020B320: ;
    edi = MEM32(esp + 0x18);
    eax = 1;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B330u); RECOMP_ABI_CALL(0x000344D8u, sub_000344D8); /* call 0x000344D8 */

loc_0020B330: ;
    MEM32(esi + ebx * 4 + 0x18) = edi;
    POP32(esp, ebx);
    PUSH32(esp, 0x0020B33Au); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B33A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0020B342: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020B344: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B34Fu); RECOMP_ABI_CALL(0x000344D8u, sub_000344D8); /* call 0x000344D8 */

loc_0020B34F: ;
    MEM32(esi + ebx * 4 + 0x18) = edi;
    POP32(esp, ebx);
    PUSH32(esp, 0x0020B359u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B359: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0020B361: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B387; /* je: equal / zero */

loc_0020B368: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020B372u); RECOMP_ABI_CALL(0x000129F0u, sub_000129F0); /* call 0x000129F0 */

loc_0020B372: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + ecx * 4 + 0x18) = edi;
    PUSH32(esp, 0x0020B37Fu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B37F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0020B387: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B3AD; /* je: equal / zero */

loc_0020B38E: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020B398u); RECOMP_ABI_CALL(0x0002917Du, sub_0002917D); /* call 0x0002917D */

loc_0020B398: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi + edx * 4 + 0x18) = edi;
    PUSH32(esp, 0x0020B3A5u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B3A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0020B3AD: ;
    ebp = 2;
    PUSH32(esp, 0x0020B3B7u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0020B3B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020B400
 * Original: 0x0020B400 - 0x0020B4B3 (179 bytes, 56 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B400: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = esi;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B4A3; /* je: equal / zero */

loc_0020B41E: ;
    eax = MEM32(esp + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020B493; /* jl: less (signed <) */

loc_0020B42A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020B463; /* jle: less or equal (signed <=) */

loc_0020B42F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B493; /* jne: not equal / not zero */

loc_0020B434: ;
    edx = MEM32(0x8B4DB0);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x114);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B44Du); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020B44D: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020B463: ;
    eax = MEM32(eax * 4 + 0x8B4CF0);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B47Du); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020B47D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020B493: ;
    POP32(esp, edi);
    eax = 6;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020B4A3: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020B4E0
 * Original: 0x0020B4E0 - 0x0020B593 (179 bytes, 56 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B4E0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = esi;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B583; /* je: equal / zero */

loc_0020B4FE: ;
    eax = MEM32(esp + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020B573; /* jl: less (signed <) */

loc_0020B50A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020B543; /* jle: less or equal (signed <=) */

loc_0020B50F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B573; /* jne: not equal / not zero */

loc_0020B514: ;
    edx = MEM32(0x8B4DB0);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x114);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B52Du); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020B52D: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020B543: ;
    eax = MEM32(eax * 4 + 0x8B4CF0);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B55Du); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0020B55D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020B573: ;
    POP32(esp, edi);
    eax = 6;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0020B583: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020B5C0
 * Original: 0x0020B5C0 - 0x0020B6C7 (263 bytes, 97 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B5C0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B5E4; /* jne: not equal / not zero */

loc_0020B5D4: ;
    POP32(esp, esi);
    eax = 8;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020B5E4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B682; /* je: equal / zero */

loc_0020B5EF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x11C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0020B604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B601u); } /* indirect call */
    }

loc_0020B604: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0020B611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B60Eu); } /* indirect call */
    }

loc_0020B611: ;
    ecx = MEM32(0x8F9584);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020B61Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B619u); } /* indirect call */
    }

loc_0020B61C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0020B623u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B620u); } /* indirect call */
    }

loc_0020B623: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0020B631u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B62Eu); } /* indirect call */
    }

loc_0020B631: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0020B63Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B637u); } /* indirect call */
    }

loc_0020B63A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020B65D; /* jle: less or equal (signed <=) */

loc_0020B63E: ;
    edi = edi;

loc_0020B640: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0020B64Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B645u); } /* indirect call */
    }

loc_0020B64B: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B66B; /* je: equal / zero */

loc_0020B651: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0020B659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B656u); } /* indirect call */
    }

loc_0020B659: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020B640; /* jl: less (signed <) */

loc_0020B65D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020B66B: ;
    eax = MEM32(esp + 0x120);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020B682: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B6B7; /* je: equal / zero */

loc_0020B689: ;
    eax = MEM32(esp + 0x118);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x33);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B69Du); RECOMP_ABI_CALL(0x0001F92Au, sub_0001F92A); /* call 0x0001F92A */

loc_0020B69D: ;
    ecx = MEM32(esp + 0x11C);
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    eax = ebx;
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0020B6B7: ;
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020B710
 * Original: 0x0020B710 - 0x0020BB53 (1091 bytes, 308 insns)
 * Category: game_vtable
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B710: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x84 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_0020BB2F; /* ja: above (unsigned >) */

loc_0020B726: ;
    eax = ZX8(MEM8(eax + 0x20BB9C));
    { uint32_t _jt = MEM32(eax * 4 + 0x20BB54); /* switch: 18 entries, 18 targets */
    if (_jt == 0x0020B734u) goto loc_0020B734;
    if (_jt == 0x0020B791u) goto loc_0020B791;
    if (_jt == 0x0020B7BBu) goto loc_0020B7BB;
    if (_jt == 0x0020B7E4u) goto loc_0020B7E4;
    if (_jt == 0x0020B81Au) goto loc_0020B81A;
    if (_jt == 0x0020B840u) goto loc_0020B840;
    if (_jt == 0x0020B864u) goto loc_0020B864;
    if (_jt == 0x0020B89Au) goto loc_0020B89A;
    if (_jt == 0x0020B8C2u) goto loc_0020B8C2;
    if (_jt == 0x0020B915u) goto loc_0020B915;
    if (_jt == 0x0020B91Bu) goto loc_0020B91B;
    if (_jt == 0x0020B921u) goto loc_0020B921;
    if (_jt == 0x0020B949u) goto loc_0020B949;
    if (_jt == 0x0020B980u) goto loc_0020B980;
    if (_jt == 0x0020B9B7u) goto loc_0020B9B7;
    if (_jt == 0x0020B9D8u) goto loc_0020B9D8;
    if (_jt == 0x0020BA9Bu) goto loc_0020BA9B;
    if (_jt == 0x0020BB2Fu) goto loc_0020BB2F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020B734: ;
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020B74Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0020B74C: ;
    eax = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 1) = 0x2E;
    MEM8(edi + 2) = 0x20;
    MEM8(edi + 3) = 0;
    ecx = eax;

loc_0020B764: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B764; /* jne: not equal / not zero */

loc_0020B76B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0020B770: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B770; /* jne: not equal / not zero */

loc_0020B778: ;
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
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B791: ;
    edx = MEM32(esp + 0xA8);
    eax = MEM32(esp + 0xAC);
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B7AEu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0020B7AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B7BB: ;
    edx = MEM32(esp + 0xAC);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B7D7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020B7D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B7E4: ;
    edx = MEM32(esp + 0xAC);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x7F85F0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B7FDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020B7FD: ;
    edx = MEM32(esp + 0xB4);
    eax = MEM32(esp + 0xB0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    goto loc_0020BAD4;

loc_0020B81A: ;
    edx = MEM32(esp + 0xAC);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B833u); RECOMP_ABI_CALL(0x00018567u, sub_00018567); /* call 0x00018567 */

loc_0020B833: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B840: ;
    edx = MEM32(esp + 0xAC);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B857u); RECOMP_ABI_CALL(0x00022EA9u, sub_00022EA9); /* call 0x00022EA9 */

loc_0020B857: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B864: ;
    edx = MEM32(esp + 0xAC);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x7F85E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B87Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020B87D: ;
    edx = MEM32(esp + 0xB4);
    eax = MEM32(esp + 0xB0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    goto loc_0020BAD4;

loc_0020B89A: ;
    edx = MEM32(esp + 0xAC);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B8B5u); RECOMP_ABI_CALL(0x00016041u, sub_00016041); /* call 0x00016041 */

loc_0020B8B5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B8C2: ;
    edx = MEM32(esp + 0xA8);
    eax = MEM32(esp + 0xA4);
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7E63BC;
    MEM32(esp + 0x10) = 0x7F85D0;
    MEM32(esp + 0x14) = 0x7F85BC;
    MEM32(esp + 0x18) = 0x7F85AC;
    MEM32(esp + 0x1C) = 0x7F859C;
    MEM32(esp + 0x20) = 0x7F858C;
    eax = MEM32(esp + edx * 4 + 0xC);
    PUSH32(esp, eax);
    goto loc_0020BAD4;

loc_0020B915: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    goto loc_0020B925;

loc_0020B91B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    goto loc_0020B925;

loc_0020B921: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);

loc_0020B925: ;
    ecx = MEM32(esp + 0xB4);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0xAC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B93Cu); RECOMP_ABI_CALL(0x0001271Bu, sub_0001271B); /* call 0x0001271B */

loc_0020B93C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B949: ;
    ecx = MEM32(esp + 0xAC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B973u); RECOMP_ABI_CALL(0x0001271Bu, sub_0001271B); /* call 0x0001271B */

loc_0020B973: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B980: ;
    eax = MEM32(esp + 0xAC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB0);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B9AAu); RECOMP_ABI_CALL(0x0001271Bu, sub_0001271B); /* call 0x0001271B */

loc_0020B9AA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020B9B7: ;
    edx = MEM32(esp + 0xAC);
    ecx = MEM32(edx);
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
    goto loc_0020BB38;

loc_0020B9D8: ;
    esi = MEM32(esp + 0xB8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BA20; /* jne: not equal / not zero */

loc_0020B9E3: ;
    edx = MEM32(esp + 0xB4);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0xB0);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xB0);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xAC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E7CF4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020BA13u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020BA13: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020BA20: ;
    ecx = MEM32(0x8F9584);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020BA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020BA28u); } /* indirect call */
    }

loc_0020BA2B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0020BA32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020BA2Fu); } /* indirect call */
    }

loc_0020BA32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BA8D; /* je: equal / zero */

loc_0020BA37: ;
    ecx = MEM32(0x8F9584);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020BA42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020BA3Fu); } /* indirect call */
    }

loc_0020BA42: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0020BA49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020BA46u); } /* indirect call */
    }

loc_0020BA49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BA8D; /* je: equal / zero */

loc_0020BA4E: ;
    eax = MEM32(esp + 0xB4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0xB0);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020BA63: ;
    ecx = MEM32(esp + 0xB0);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xAC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E7CF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020BA80u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020BA80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020BA8D: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0xB0);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    goto loc_0020BA63;

loc_0020BA9B: ;
    ecx = MEM32(esp + 0xAC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020BAF3; /* jne: not equal / not zero */

loc_0020BAA8: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x20;
    PUSH32(esp, 0x7F7E34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020BABCu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0020BABC: ;
    eax = MEM32(esp + 0xB4);
    ecx = MEM32(esp + 0xB0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);

loc_0020BAD4: ;
    PUSH32(esp, 0x0020BAD9u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0020BAD9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020BAE2u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0020BAE2: ;
    ecx = eax;
    PUSH32(esp, 0x0020BAE9u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0020BAE9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020BAF3: ;
    PUSH32(esp, eax);
    if (CMP_GE(_fas, _fbs)) goto loc_0020BB10; /* jge: greater or equal (signed >=) */

loc_0020BAF6: ;
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020BB03u); RECOMP_ABI_CALL(0x00018FE9u, sub_00018FE9); /* call 0x00018FE9 */

loc_0020BB03: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020BB10: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, 0x7E6B80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020BB22u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0020BB22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0020BB2F: ;
    edx = MEM32(esp + 0xAC);
    eax = MEM32(edx);

loc_0020BB38: ;
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020BB46u); RECOMP_ABI_CALL(0x00018FE9u, sub_00018FE9); /* call 0x00018FE9 */

loc_0020BB46: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0020BDA0
 * Original: 0x0020BDA0 - 0x0020BDF1 (81 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BDA0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F8608;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0020BDEB; /* je: equal / zero */

loc_0020BDC6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0020BDCFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020BDCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BDE6; /* je: equal / zero */

loc_0020BDD6: ;
    ecx = eax;
    PUSH32(esp, 0x0020BDDDu); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_0020BDDD: ;
    MEM32(esi + 4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0020BDE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;

loc_0020BDEB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020BE10
 * Original: 0x0020BE10 - 0x0020BE15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BE10: ;
    g_seh_ebp = ebp; sub_000352E8(); return; /* tail jmp 0x000352E8 */

}

/**
 * sub_0020BE20
 * Original: 0x0020BE20 - 0x0020BE25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BE20: ;
    g_seh_ebp = ebp; sub_000352E8(); return; /* tail jmp 0x000352E8 */

}

/**
 * sub_0020BE30
 * Original: 0x0020BE30 - 0x0020BE55 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BE30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BE52; /* je: equal / zero */

loc_0020BE3B: ;
    ecx = esi;
    PUSH32(esp, 0x0020BE42u); RECOMP_ABI_CALL(0x0001527Cu, sub_0001527C); /* call 0x0001527C */

loc_0020BE42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020BE48u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020BE48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = 0;

loc_0020BE52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020BE60
 * Original: 0x0020BE60 - 0x0020BF6F (271 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BE60: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10C);
    SET_LO8(eax, MEM8(ebx + 0x8F));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    SET_LO8(ecx, MEM8(ebp + 0x8F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_0020BEA3; /* jge: greater or equal (signed >=) */

loc_0020BE8E: ;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    eax = MEM32(esp + 8);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020BEA3: ;
    if (CMP_G(_fas, _fbs)) goto loc_0020BF5A; /* jg: greater (signed >) */

loc_0020BEA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020BEF2; /* jne: not equal / not zero */

loc_0020BEAD: ;
    eax = MEM32(ebx + 0x90);
    ecx = MEM32(ebp + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0020BEC9; /* jge: greater or equal (signed >=) */

loc_0020BEBD: ;
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020BEC9: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0020BED9; /* jle: less or equal (signed <=) */

loc_0020BECB: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020BED9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020BEF2; /* jne: not equal / not zero */

loc_0020BEDD: ;
    SET_LO8(eax, MEM8(ebx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebp + 0x28) (8-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020BEF2: ;
    ecx = MEM32(0x8F9584);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020BEFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020BEFCu); } /* indirect call */
    }

loc_0020BEFF: ;
    edi = eax;
    eax = MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = 0x2762A;
    if (CMP_EQ(_fa, _fb)) goto loc_0020BF16; /* je: equal / zero */

loc_0020BF11: ;
    esi = 0x27562;

loc_0020BF16: ;
    ecx = ZX8(MEM8(ebx + 0x28));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0020BF26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020BF24u); } /* indirect call */
    }

loc_0020BF26: ;
    eax = ZX8(MEM8(ebp + 0x28));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0020BF39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020BF37u); } /* indirect call */
    }

loc_0020BF39: ;
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020BF4Bu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0020BF4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0020BE8E; /* jl: less (signed <) */

loc_0020BF58: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0020BF62; /* jle: less or equal (signed <=) */

loc_0020BF5A: ;
    MEM32(esp + 8) = 1;

loc_0020BF62: ;
    eax = MEM32(esp + 8);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020BFC0
 * Original: 0x0020BFC0 - 0x0020BFD5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BFC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020BFD1u); RECOMP_ABI_CALL(0x0001FE39u, sub_0001FE39); /* call 0x0001FE39 */

loc_0020BFD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020BFE0
 * Original: 0x0020BFE0 - 0x0020BFF5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BFE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BFE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020BFF1u); RECOMP_ABI_CALL(0x0001FE39u, sub_0001FE39); /* call 0x0001FE39 */

loc_0020BFF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020C000
 * Original: 0x0020C000 - 0x0020C029 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C000: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F8328;
    MEM32(0x8F9584) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0020C023; /* je: equal / zero */

loc_0020C01A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C020u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020C020: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C023: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C01B
 * Original: 0x0020C01B - 0x0020C029 (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C01B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C01B: ;
    PUSH32(esp, 0x0020C020u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020C020: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C040
 * Original: 0x0020C040 - 0x0020C3CC (908 bytes, 328 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C040: ;
    _fb = (uint32_t)(0x3AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0020C051u); RECOMP_ABI_CALL(0x0002B61Cu, sub_0002B61C); /* call 0x0002B61C */

loc_0020C051: ;
    esi = MEM32(0x8F9CCC);
    ebp = MEM32(0x8F0650);
    ecx = esi;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x0020C068u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0020C068: ;
    ecx = MEM32(esp + 0x3C0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0020C079u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C076u); } /* indirect call */
    }

loc_0020C079: ;
    ecx = esi;
    PUSH32(esp, 0x0020C080u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0020C080: ;
    ebx = eax;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0020C089u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C086u); } /* indirect call */
    }

loc_0020C089: ;
    esi = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0020C092u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C08Fu); } /* indirect call */
    }

loc_0020C092: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F000000);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020C0A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C09Du); } /* indirect call */
    }

loc_0020C0A0: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0020C0A9u); RECOMP_ABI_CALL(0x00034037u, sub_00034037); /* call 0x00034037 */

loc_0020C0A9: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0020C0B9u); RECOMP_ABI_CALL(0x00028084u, sub_00028084); /* call 0x00028084 */

loc_0020C0B9: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020C0C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C0C1u); } /* indirect call */
    }

loc_0020C0C4: ;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x12);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0020C0D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C0CDu); } /* indirect call */
    }

loc_0020C0D0: ;
    eax = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(0x8F5B96) = 1;
    edx = MEM32(esi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020C0E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C0E5u); } /* indirect call */
    }

loc_0020C0E8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0020C0F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C0EEu); } /* indirect call */
    }

loc_0020C0F1: ;
    ecx = MEM32(esp + 0xA2);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0020C100u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C0FDu); } /* indirect call */
    }

loc_0020C100: ;
    eax = MEM32(esp + 0xBE);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0020C10Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C10Cu); } /* indirect call */
    }

loc_0020C10F: ;
    eax = MEM32(esp + 0xC0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0020C11Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C11Bu); } /* indirect call */
    }

loc_0020C11E: ;
    ecx = MEM32(edi + 0x5C);
    MEM32(ebp + 0x8C) = ecx;
    eax = MEM32(edi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020C17E; /* ja: above (unsigned >) */

loc_0020C12F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20C3CC); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0020C136u) goto loc_0020C136;
    if (_jt == 0x0020C147u) goto loc_0020C147;
    if (_jt == 0x0020C15Bu) goto loc_0020C15B;
    if (_jt == 0x0020C16Cu) goto loc_0020C16C;
    if (_jt == 0x0020C2B3u) goto loc_0020C2B3;
    if (_jt == 0x0020C2C3u) goto loc_0020C2C3;
    if (_jt == 0x0020C2D3u) goto loc_0020C2D3;
    if (_jt == 0x0020C2E3u) goto loc_0020C2E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020C136: ;
    edx = MEM32(edi + 0x60);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx + 0x7F74D0);
    MEM32(ebp) = eax;
    goto loc_0020C17E;

loc_0020C147: ;
    ecx = MEM32(edi + 0x60);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(ecx + 0x7F74D4);
    MEM32(ebp + 0x90) = edx;
    goto loc_0020C17E;

loc_0020C15B: ;
    eax = MEM32(edi + 0x60);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x7F74D8);
    MEM32(ebp) = ecx;
    goto loc_0020C17E;

loc_0020C16C: ;
    edx = MEM32(edi + 0x60);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx + 0x7F74DC);
    MEM32(ebp + 0xB0) = eax;

loc_0020C17E: ;
    SET_LO8(eax, MEM8(edi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C18C; /* je: equal / zero */

loc_0020C185: ;
    PUSH32(esp, 0x0020C18Au); RECOMP_ABI_CALL(0x000194F3u, sub_000194F3); /* call 0x000194F3 */

loc_0020C18A: ;
    goto loc_0020C191;

loc_0020C18C: ;
    PUSH32(esp, 0x0020C191u); RECOMP_ABI_CALL(0x0002664Eu, sub_0002664E); /* call 0x0002664E */

loc_0020C191: ;
    ecx = MEM32(edi + 4);
    MEM32(ebp + 8) = ecx;
    edx = MEM32(edi + 0x48);
    MEM32(ebp + 0xC) = edx;
    ecx = MEM32(0x8F9584);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0020C1A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C1A5u); } /* indirect call */
    }

loc_0020C1A8: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 0x66)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x66), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x18);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0020C1BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C1B7u); } /* indirect call */
    }

loc_0020C1BA: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0020C1C5u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0020C1C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0020C1CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C1C9u); } /* indirect call */
    }

loc_0020C1CC: ;
    ecx = esp + 0x20;
    esi = eax;
    PUSH32(esp, 0x0020C1D7u); RECOMP_ABI_CALL(0x000157D6u, sub_000157D6); /* call 0x000157D6 */

loc_0020C1D7: ;
    MEM32(esp + 0x14) = ebx;
    goto loc_0020C1E0;

    /* nop */

loc_0020C1E0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0020C1EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C1EBu); } /* indirect call */
    }

loc_0020C1EE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0020C1FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C1F9u); } /* indirect call */
    }

loc_0020C1FC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C1E0; /* jl: less (signed <) */

loc_0020C202: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020C204: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0020C212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C20Fu); } /* indirect call */
    }

loc_0020C212: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0020C220u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C21Du); } /* indirect call */
    }

loc_0020C220: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C204; /* jl: less (signed <) */

loc_0020C226: ;
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020C302; /* jle: less or equal (signed <=) */

loc_0020C233: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + edi + 0xC);
    ebp = eax + edi;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020C24Au); RECOMP_ABI_CALL(0x0001E9D0u, sub_0001E9D0); /* call 0x0001E9D0 */

loc_0020C24A: ;
    ecx = MEM32(0x8F9584);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020C255u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C252u); } /* indirect call */
    }

loc_0020C255: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0020C262u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C25Fu); } /* indirect call */
    }

loc_0020C262: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020C26Du); RECOMP_ABI_CALL(0x00025FFFu, sub_00025FFF); /* call 0x00025FFF */

loc_0020C26D: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020C27Bu); RECOMP_ABI_CALL(0x0003756Bu, sub_0003756B); /* call 0x0003756B */

loc_0020C27B: ;
    edx = MEM32(ebp + 8);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0020C290u); RECOMP_ABI_CALL(0x00028917u, sub_00028917); /* call 0x00028917 */

loc_0020C290: ;
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020C2A7u); RECOMP_ABI_CALL(0x0001D986u, sub_0001D986); /* call 0x0001D986 */

loc_0020C2A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020C2F1; /* ja: above (unsigned >) */

loc_0020C2AC: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x20C3DC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0020C2B3u) goto loc_0020C2B3;
    if (_jt == 0x0020C2C3u) goto loc_0020C2C3;
    if (_jt == 0x0020C2D3u) goto loc_0020C2D3;
    if (_jt == 0x0020C2E3u) goto loc_0020C2E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020C2B3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0020C2C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C2BEu); } /* indirect call */
    }

loc_0020C2C1: ;
    goto loc_0020C2F1;

loc_0020C2C3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0020C2D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C2CEu); } /* indirect call */
    }

loc_0020C2D1: ;
    goto loc_0020C2F1;

loc_0020C2D3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0020C2E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C2DEu); } /* indirect call */
    }

loc_0020C2E1: ;
    goto loc_0020C2F1;

loc_0020C2E3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0020C2F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C2EEu); } /* indirect call */
    }

loc_0020C2F1: ;
    eax = MEM32(edi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0020C233; /* jl: less (signed <) */

loc_0020C302: ;
    eax = MEM32(edi + 0x48);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020C36A; /* jle: less or equal (signed <=) */

loc_0020C30D: ;
    /* nop */

loc_0020C310: ;
    edx = MEM32(edi + ebp * 4 + 0x4C);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0020C326u); RECOMP_ABI_CALL(0x00028917u, sub_00028917); /* call 0x00028917 */

loc_0020C326: ;
    PUSH32(esp, ebx);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020C339u); RECOMP_ABI_CALL(0x0001D986u, sub_0001D986); /* call 0x0001D986 */

loc_0020C339: ;
    eax = ebp;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020C353; /* je: equal / zero */

loc_0020C340: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020C361; /* jne: not equal / not zero */

loc_0020C343: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0020C351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C34Eu); } /* indirect call */
    }

loc_0020C351: ;
    goto loc_0020C361;

loc_0020C353: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0020C361u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C35Eu); } /* indirect call */
    }

loc_0020C361: ;
    eax = MEM32(edi + 0x48);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C310; /* jl: less (signed <) */

loc_0020C36A: ;
    edx = MEM32(edi + 0x54);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0020C37Fu); RECOMP_ABI_CALL(0x00028917u, sub_00028917); /* call 0x00028917 */

loc_0020C37F: ;
    PUSH32(esp, 0x12);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020C393u); RECOMP_ABI_CALL(0x000379DAu, sub_000379DA); /* call 0x000379DA */

loc_0020C393: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0020C3A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C39Du); } /* indirect call */
    }

loc_0020C3A0: ;
    eax = ZX8(MEM8(esp + 0x327));
    ecx = esp + 0x20;
    MEM32(0x8F6294) = eax;
    PUSH32(esp, 0x0020C3B6u); RECOMP_ABI_CALL(0x000220C1u, sub_000220C1); /* call 0x000220C1 */

loc_0020C3B6: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0020C3BFu); RECOMP_ABI_CALL(0x00034FE1u, sub_00034FE1); /* call 0x00034FE1 */

loc_0020C3BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C4E0
 * Original: 0x0020C4E0 - 0x0020C4F1 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C4E0: ;
    eax = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(eax) = 0x7F8688;
    MEM8(eax + 0x58) = LO8(ecx);
    MEM8(eax + 0x59) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020C500
 * Original: 0x0020C500 - 0x0020C51F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C500: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F8688;
    if (TEST_Z(_fa, _fb)) goto loc_0020C519; /* je: equal / zero */

loc_0020C510: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C516u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020C516: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C519: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C530
 * Original: 0x0020C530 - 0x0020C54F (31 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C530: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C54C; /* je: equal / zero */

loc_0020C538: ;
    ecx = MEM32(esp + 8);
    /* nop */

loc_0020C540: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020C54C; /* jle: less or equal (signed <=) */

loc_0020C544: ;
    eax = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C540; /* jne: not equal / not zero */

loc_0020C54C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C560
 * Original: 0x0020C560 - 0x0020C6C4 (356 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C560: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    esi = ecx;
    PUSH32(esp, ebx);
    MEM32(0x8F9584) = esi;
    MEM32(esi) = 0x7F8384;
    PUSH32(esp, 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0020C610; /* je: equal / zero */

loc_0020C581: ;
    PUSH32(esp, 0x0020C586u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C586: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C596; /* je: equal / zero */

loc_0020C58D: ;
    ecx = eax;
    PUSH32(esp, 0x0020C594u); RECOMP_ABI_CALL(0x000154CFu, sub_000154CF); /* call 0x000154CF */

loc_0020C594: ;
    goto loc_0020C598;

loc_0020C596: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020C598: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0020C5A3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C5A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C5B2; /* je: equal / zero */

loc_0020C5AA: ;
    MEM32(eax) = 0x7F84F4;
    goto loc_0020C5B4;

loc_0020C5B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020C5B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0020C5C2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C5C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C5DA; /* je: equal / zero */

loc_0020C5C9: ;
    MEM32(eax) = 0x7F8608;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    goto loc_0020C5DC;

loc_0020C5DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020C5DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x0020C5E7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C5E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C601; /* je: equal / zero */

loc_0020C5EE: ;
    MEM32(eax) = 0x7F83F8;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0020C601: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0020C610: ;
    PUSH32(esp, 0x0020C615u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C615: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C625; /* je: equal / zero */

loc_0020C61C: ;
    ecx = eax;
    PUSH32(esp, 0x0020C623u); RECOMP_ABI_CALL(0x000154CFu, sub_000154CF); /* call 0x000154CF */

loc_0020C623: ;
    goto loc_0020C627;

loc_0020C625: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020C627: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0020C632u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C632: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C641; /* je: equal / zero */

loc_0020C639: ;
    MEM32(eax) = 0x7F84F4;
    goto loc_0020C643;

loc_0020C641: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020C643: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0020C64Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C64F: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C689; /* je: equal / zero */

loc_0020C658: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    MEM32(edi) = 0x7F8608;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    PUSH32(esp, 0x0020C66Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C66F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C682; /* je: equal / zero */

loc_0020C676: ;
    ecx = eax;
    PUSH32(esp, 0x0020C67Du); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_0020C67D: ;
    MEM32(edi + 4) = eax;
    goto loc_0020C68B;

loc_0020C682: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = eax;
    goto loc_0020C68B;

loc_0020C689: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020C68B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, 0x0020C699u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0020C699: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020C6B5; /* je: equal / zero */

loc_0020C6A1: ;
    ecx = eax;
    PUSH32(esp, 0x0020C6A8u); RECOMP_ABI_CALL(0x00014976u, sub_00014976); /* call 0x00014976 */

loc_0020C6A8: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0020C6B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C720
 * Original: 0x0020C720 - 0x0020C73E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C720: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020C728u); RECOMP_ABI_CALL(0x0002C0E9u, sub_0002C0E9); /* call 0x0002C0E9 */

loc_0020C728: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020C738; /* je: equal / zero */

loc_0020C72F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C735u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020C735: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C738: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C750
 * Original: 0x0020C750 - 0x0020C78F (63 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C750: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7F8428;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C766; /* je: equal / zero */

loc_0020C760: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0020C766u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C764u); } /* indirect call */
    }

loc_0020C766: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C773; /* je: equal / zero */

loc_0020C76D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0020C773u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C771u); } /* indirect call */
    }

loc_0020C773: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F7A30;
    if (TEST_Z(_fa, _fb)) goto loc_0020C789; /* je: equal / zero */

loc_0020C780: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C786u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0020C786: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C789: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C7A0
 * Original: 0x0020C7A0 - 0x0020C86A (202 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C7A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0020C7AAu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0020C7AA: ;
    ecx = eax;
    PUSH32(esp, 0x0020C7B1u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0020C7B1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020C7B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C7B5u); } /* indirect call */
    }

loc_0020C7B8: ;
    ecx = MEM32(0x8F9CCC);
    ebx = eax;
    PUSH32(esp, 0x0020C7C5u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0020C7C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0020C7CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C7C9u); } /* indirect call */
    }

loc_0020C7CC: ;
    ecx = MEM32(0x8B4BE8);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0020C7DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C7DBu); } /* indirect call */
    }

loc_0020C7DD: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x8B4BEC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0020C7EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C7ECu); } /* indirect call */
    }

loc_0020C7EE: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0020C7F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C7F5u); } /* indirect call */
    }

loc_0020C7F8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C864; /* jne: not equal / not zero */

loc_0020C7FD: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020C83A; /* ja: above (unsigned >) */

loc_0020C806: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20C86C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0020C80Du) goto loc_0020C80D;
    if (_jt == 0x0020C816u) goto loc_0020C816;
    if (_jt == 0x0020C81Cu) goto loc_0020C81C;
    if (_jt == 0x0020C822u) goto loc_0020C822;
    if (_jt == 0x0020C828u) goto loc_0020C828;
    if (_jt == 0x0020C82Eu) goto loc_0020C82E;
    if (_jt == 0x0020C834u) goto loc_0020C834;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020C80D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    goto loc_0020C83E;

loc_0020C816: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    goto loc_0020C83E;

loc_0020C81C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    goto loc_0020C83E;

loc_0020C822: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    goto loc_0020C83E;

loc_0020C828: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    goto loc_0020C83E;

loc_0020C82E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    goto loc_0020C83E;

loc_0020C834: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    goto loc_0020C83E;

loc_0020C83A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);

loc_0020C83E: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(esi + edi * 4 + 0x14);
    PUSH32(esp, 0x0020C84Bu); RECOMP_ABI_CALL(0x000327A0u, sub_000327A0); /* call 0x000327A0 */

loc_0020C84B: ;
    ecx = MEM32(esi + edi * 4 + 0x14);
    PUSH32(esp, 0x25302);
    PUSH32(esp, 0x0020C859u); RECOMP_ABI_CALL(0x00024DB2u, sub_00024DB2); /* call 0x00024DB2 */

loc_0020C859: ;
    ecx = MEM32(esi + edi * 4 + 0x14);
    edx = MEM32(ecx + 8);
    MEM32(esi + edi * 4 + 4) = edx;

loc_0020C864: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
