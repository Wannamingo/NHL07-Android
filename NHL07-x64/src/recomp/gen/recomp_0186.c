/**
 * nhl_07_recomp - Recompiled code chunk 186
 * Functions: 250 (0x003DFC50 - 0x003E4F00)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003DFC50
 * Original: 0x003DFC50 - 0x003DFC51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFC50(void)
{

loc_003DFC50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DFC60
 * Original: 0x003DFC60 - 0x003DFC61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFC60(void)
{

loc_003DFC60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DFC70
 * Original: 0x003DFC70 - 0x003DFC71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFC70(void)
{

loc_003DFC70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DFC80
 * Original: 0x003DFC80 - 0x003DFC98 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFC80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DFC80: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DFCA0
 * Original: 0x003DFCA0 - 0x003DFCD2 (50 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFCA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DFCA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x003DFCC1u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DFCC1: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DFCCCu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003DFCC9u); } /* indirect call */
    }

loc_003DFCCC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DFCE0
 * Original: 0x003DFCE0 - 0x003DFDE8 (264 bytes, 92 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DFCE0: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x214);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x24), LO16(edi) (16-bit) */
    MEM32(esp + 0x10) = ecx;
    esi = ebp + 0x28;
    if (CMP_BE(_fa, _fb)) goto loc_003DFD59; /* jbe: below or equal (unsigned <=) */

loc_003DFD07: ;
    goto loc_003DFD10;

    /* nop */

loc_003DFD10: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    eax = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_003DFD1F; /* je: equal / zero */

loc_003DFD1A: ;
    eax = 0x7FC4F0;

loc_003DFD1F: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, 0x835B74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DFD34u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003DFD34: ;
    eax = MEM32(esp + 0x234);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x003DFD4Eu); RECOMP_ABI_CALL(0x0002258Fu, sub_0002258F); /* call 0x0002258F */

loc_003DFD4E: ;
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(MEM16(ebp + 0x24));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DFD10; /* jl: less (signed <) */

loc_003DFD59: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0x26)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x26), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DFDDB; /* jbe: below or equal (unsigned <=) */

loc_003DFD61: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    eax = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_003DFD70; /* je: equal / zero */

loc_003DFD6B: ;
    eax = 0x7FC4F0;

loc_003DFD70: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, 0x835B74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DFD85u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003DFD85: ;
    SET_LO8(eax, MEM8(esp + 0x234));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFDAF; /* jne: not equal / not zero */

loc_003DFD93: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003DFDA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFDA1u); } /* indirect call */
    }

loc_003DFDA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFDAF; /* jne: not equal / not zero */

loc_003DFDA8: ;
    PUSH32(esp, 0x003DFDADu); RECOMP_ABI_CALL(0x0059F28Cu, sub_0059F28C); /* call 0x0059F28C */

loc_003DFDAD: ;
    goto loc_003DFDCD;

loc_003DFDAF: ;
    eax = ZX16(MEM16(esi + 2));
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DFDCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFDCAu); } /* indirect call */
    }

loc_003DFDCD: ;
    ecx = ZX16(MEM16(esi));
    edx = ZX16(MEM16(ebp + 0x26));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DFD61; /* jl: less (signed <) */

loc_003DFDDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003DFE30
 * Original: 0x003DFE30 - 0x003DFEFF (207 bytes, 74 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DFE30: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebx + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x24), LO16(ebp) (16-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    esi = ebx + 0x28;
    if (CMP_BE(_fa, _fb)) goto loc_003DFE96; /* jbe: below or equal (unsigned <=) */

loc_003DFE4E: ;
    edi = edi;

loc_003DFE50: ;
    ecx = MEM32(esp + 0x214);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    eax = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_003DFE66; /* je: equal / zero */

loc_003DFE61: ;
    eax = 0x7FC4F0;

loc_003DFE66: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x835B74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DFE7Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003DFE7B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003DFE8Bu); RECOMP_ABI_CALL(0x0002CE04u, sub_0002CE04); /* call 0x0002CE04 */

loc_003DFE8B: ;
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(MEM16(ebx + 0x24));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DFE50; /* jl: less (signed <) */

loc_003DFE96: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebx + 0x26)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x26), LO16(ebp) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DFEF2; /* jbe: below or equal (unsigned <=) */

loc_003DFE9E: ;
    edi = edi;

loc_003DFEA0: ;
    ecx = MEM32(esp + 0x214);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    eax = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_003DFEB6; /* je: equal / zero */

loc_003DFEB1: ;
    eax = 0x7FC4F0;

loc_003DFEB6: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x835B74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DFECBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003DFECB: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003DFEDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFED8u); } /* indirect call */
    }

loc_003DFEDB: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DFEE4u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_003DFEE4: ;
    ecx = ZX16(MEM16(esi));
    edx = ZX16(MEM16(ebx + 0x26));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DFEA0; /* jl: less (signed <) */

loc_003DFEF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DFF40
 * Original: 0x003DFF40 - 0x003E001F (223 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DFF40: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x210);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x21C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x24), LO16(ebx) (16-bit) */
    MEM32(esp + 0x10) = ecx;
    esi = edi + 0x28;
    if (CMP_BE(_fa, _fb)) goto loc_003DFFB4; /* jbe: below or equal (unsigned <=) */

loc_003DFF67: ;
    goto loc_003DFF70;

    /* nop */

loc_003DFF70: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    eax = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_003DFF80; /* je: equal / zero */

loc_003DFF7B: ;
    eax = 0x7FC4F0;

loc_003DFF80: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    edx = esp + 0x20;
    PUSH32(esp, 0x835B74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DFF95u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003DFF95: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DFFA7u); RECOMP_ABI_CALL(0x0002A311u, sub_0002A311); /* call 0x0002A311 */

loc_003DFFA7: ;
    edx = MEM32(esi);
    ecx = ZX16(MEM16(edi + 0x24));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DFF70; /* jl: less (signed <) */

loc_003DFFB4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x26)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x26), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E0012; /* jbe: below or equal (unsigned <=) */

loc_003DFFBC: ;
    /* nop */

loc_003DFFC0: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    eax = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_003DFFD0; /* je: equal / zero */

loc_003DFFCB: ;
    eax = 0x7FC4F0;

loc_003DFFD0: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = esp + 0x20;
    PUSH32(esp, 0x835B74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DFFE5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003DFFE5: ;
    ecx = MEM32(esp + 0x24);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003DFFF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFFF6u); } /* indirect call */
    }

loc_003DFFF9: ;
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E0004u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003E0004: ;
    edx = ZX16(MEM16(esi));
    eax = ZX16(MEM16(edi + 0x26));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DFFC0; /* jl: less (signed <) */

loc_003E0012: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DFFFF
 * Original: 0x003DFFFF - 0x003E001F (32 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFFFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DFFFF: ;
    PUSH32(esp, 0x003E0004u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003E0004: ;
    edx = ZX16(MEM16(esi));
    eax = ZX16(MEM16(edi + 0x26));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_003DFFC0(); return; } /* jl: less (signed <) */

loc_003E0012: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E0060
 * Original: 0x003E0060 - 0x003E00D1 (113 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E0060: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x24), LO16(ebx) (16-bit) */
    ebp = ecx;
    esi = edi + 0x28;
    if (CMP_BE(_fa, _fb)) goto loc_003E008B; /* jbe: below or equal (unsigned <=) */

loc_003E0078: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x003E0080u); RECOMP_ABI_CALL(0x00019E1Cu, sub_00019E1C); /* call 0x00019E1C */

loc_003E0080: ;
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(MEM16(edi + 0x24));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0078; /* jl: less (signed <) */

loc_003E008B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x26)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x26), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E00C7; /* jbe: below or equal (unsigned <=) */

loc_003E0093: ;
    eax = MEM32(esi + 0x24);
    ecx = esi + 0x28;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x003E00ADu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003E00AD: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003E00B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E00B6u); } /* indirect call */
    }

loc_003E00B9: ;
    edx = ZX16(MEM16(esi));
    eax = ZX16(MEM16(edi + 0x26));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0093; /* jl: less (signed <) */

loc_003E00C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E00F0
 * Original: 0x003E00F0 - 0x003E012C (60 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E00F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E00F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0108; /* je: equal / zero */

loc_003E00FA: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x003E0108u); RECOMP_ABI_CALL(0x0002CE04u, sub_0002CE04); /* call 0x0002CE04 */

loc_003E0108: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003E0128; /* je: equal / zero */

loc_003E0113: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B891F);
    ecx = esi;
    PUSH32(esp, 0x003E0128u); RECOMP_ABI_CALL(0x0002258Fu, sub_0002258F); /* call 0x0002258F */

loc_003E0128: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E0140
 * Original: 0x003E0140 - 0x003E014F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0140(void)
{

loc_003E0140: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x003E014Eu); RECOMP_ABI_CALL(0x0002A311u, sub_0002A311); /* call 0x0002A311 */

loc_003E014E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0160
 * Original: 0x003E0160 - 0x003E0181 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0160: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0178; /* je: equal / zero */

loc_003E016A: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x003E0178u); RECOMP_ABI_CALL(0x0002CE04u, sub_0002CE04); /* call 0x0002CE04 */

loc_003E0178: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0190
 * Original: 0x003E0190 - 0x003E019A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0190(void)
{

loc_003E0190: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E01A0
 * Original: 0x003E01A0 - 0x003E01A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E01A0(void)
{

loc_003E01A0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003E01B0
 * Original: 0x003E01B0 - 0x003E01B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E01B0(void)
{

loc_003E01B0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003E01C0
 * Original: 0x003E01C0 - 0x003E01CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E01C0(void)
{

loc_003E01C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E01D0
 * Original: 0x003E01D0 - 0x003E01DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E01D0(void)
{

loc_003E01D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E01E0
 * Original: 0x003E01E0 - 0x003E01FD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E01E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E01E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x835B7C;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0210
 * Original: 0x003E0210 - 0x003E0217 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0210(void)
{

loc_003E0210: ;
    MEM32(ecx) = 0x8358D8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0220
 * Original: 0x003E0220 - 0x003E024D (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0220: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0xC) = 0;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0244; /* je: equal / zero */

loc_003E023B: ;
    MEM32(edx + 0xC) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

loc_003E0244: ;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0260
 * Original: 0x003E0260 - 0x003E02A8 (72 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0260: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0275; /* je: equal / zero */

loc_003E026B: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    POP32(esp, edi);
    goto loc_003E027B;

loc_003E0275: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;

loc_003E027B: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E028A; /* je: equal / zero */

loc_003E0282: ;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    goto loc_003E0290;

loc_003E028A: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = edx;

loc_003E0290: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E02C0
 * Original: 0x003E02C0 - 0x003E02E4 (36 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E02C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E02C0: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E02E1; /* je: equal / zero */

loc_003E02C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_003E02D0: ;
    eax = MEM32(ecx);
    esi = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E02D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E02D6u); } /* indirect call */
    }

loc_003E02D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003E02D0; /* jne: not equal / not zero */

loc_003E02DF: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003E02E1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E02F0
 * Original: 0x003E02F0 - 0x003E030F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E02F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E02F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8358D8;
    if (TEST_Z(_fa, _fb)) goto loc_003E0309; /* je: equal / zero */

loc_003E0300: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E0306u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003E0306: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E0309: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0320
 * Original: 0x003E0320 - 0x003E0323 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0320(void)
{

loc_003E0320: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0330
 * Original: 0x003E0330 - 0x003E0335 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0330(void)
{

loc_003E0330: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0340
 * Original: 0x003E0340 - 0x003E0346 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0340: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E0350
 * Original: 0x003E0350 - 0x003E035D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0350(void)
{

loc_003E0350: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0360
 * Original: 0x003E0360 - 0x003E036D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0360(void)
{

loc_003E0360: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0370
 * Original: 0x003E0370 - 0x003E0374 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0370(void)
{

loc_003E0370: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0380
 * Original: 0x003E0380 - 0x003E0384 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0380(void)
{

loc_003E0380: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0390
 * Original: 0x003E0390 - 0x003E0394 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0390(void)
{

loc_003E0390: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003E03A0
 * Original: 0x003E03A0 - 0x003E03A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E03A0(void)
{

loc_003E03A0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E03B0
 * Original: 0x003E03B0 - 0x003E03B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E03B0(void)
{

loc_003E03B0: ;
    MEM32(ecx) = 0x835B88;
    esp += 4; return; /* ret */

}

/**
 * sub_003E03C0
 * Original: 0x003E03C0 - 0x003E03D3 (19 bytes, 5 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E03C0(void)
{

loc_003E03C0: ;
    ecx = MEM32(0x907BA8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835BA0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E03D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E03CDu); } /* indirect call */
    }

loc_003E03D0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E03E0
 * Original: 0x003E03E0 - 0x003E03E3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E03E0(void)
{

loc_003E03E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E03F0
 * Original: 0x003E03F0 - 0x003E03F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E03F0(void)
{

loc_003E03F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0400
 * Original: 0x003E0400 - 0x003E041F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0400: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835B88;
    if (TEST_Z(_fa, _fb)) goto loc_003E0419; /* je: equal / zero */

loc_003E0410: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E0416u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003E0416: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E0419: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0430
 * Original: 0x003E0430 - 0x003E0437 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0430(void)
{

loc_003E0430: ;
    MEM32(ecx) = 0x835BE8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0440
 * Original: 0x003E0440 - 0x003E0453 (19 bytes, 5 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0440(void)
{

loc_003E0440: ;
    ecx = MEM32(0x907BA8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835BF4);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E0450u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E044Du); } /* indirect call */
    }

loc_003E0450: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E0460
 * Original: 0x003E0460 - 0x003E047F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0460: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835BE8;
    if (TEST_Z(_fa, _fb)) goto loc_003E0479; /* je: equal / zero */

loc_003E0470: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E0476u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003E0476: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E0479: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0490
 * Original: 0x003E0490 - 0x003E0739 (681 bytes, 257 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E0490: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi) = ebx;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x10) = 0x8CE08C;
    MEM32(esi + 0x14) = 0x8CE090;
    ecx = MEM32(0x907BA0);
    MEM32(esi + 0x28) = ebp;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003E04DC; /* je: equal / zero */

loc_003E04D9: ;
    MEM32(eax + 0x28) = esi;

loc_003E04DC: ;
    MEM32(ecx) = esi;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003E04E9u); RECOMP_ABI_CALL(0x00035F77u, sub_00035F77); /* call 0x00035F77 */

loc_003E04E9: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = ebx + 0x58;
    if (CMP_LE(_fas, _fbs)) goto loc_003E0510; /* jle: less or equal (signed <=) */

loc_003E04F3: ;
    edi = eax;

loc_003E04F5: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0502; /* je: equal / zero */

loc_003E04FD: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax;

loc_003E0502: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + edx + 0x14;
    if ((_fa != 0)) goto loc_003E04F5; /* jne: not equal / not zero */

loc_003E0509: ;
    /* nop */

loc_003E0510: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x3E80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E051D; /* je: equal / zero */

loc_003E0518: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E0510;

loc_003E051D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E81);
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 4) = ebp;
    PUSH32(esp, 0x003E052Eu); RECOMP_ABI_CALL(0x0001C9A0u, sub_0001C9A0); /* call 0x0001C9A0 */

loc_003E052E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0624; /* je: equal / zero */

loc_003E0539: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 4) = eax;
    edi = eax + ecx * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_003E0620; /* jle: less or equal (signed <=) */

loc_003E0551: ;
    eax = ZX16(MEM16(edi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003E0565; /* jbe: below or equal (unsigned <=) */

loc_003E0559: ;
    /* nop */

loc_003E0560: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003E0560; /* ja: above (unsigned >) */

loc_003E0565: ;
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    eax = eax + edi + 0x40;
    if (CMP_LE(_fas, _fbs)) goto loc_003E0588; /* jle: less or equal (signed <=) */

loc_003E0570: ;
    ebp = ecx;

loc_003E0572: ;
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E057F; /* je: equal / zero */

loc_003E057A: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ecx;

loc_003E057F: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + edx + 0x14;
    if ((_fa != 0)) goto loc_003E0572; /* jne: not equal / not zero */

loc_003E0586: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E0588: ;
    ecx = ZX16(MEM16(edi + 0xC));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003E060F; /* ja: above (unsigned >) */

loc_003E0595: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3E073C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003E059Cu) goto loc_003E059C;
    if (_jt == 0x003E05ADu) goto loc_003E05AD;
    if (_jt == 0x003E05C4u) goto loc_003E05C4;
    if (_jt == 0x003E05D5u) goto loc_003E05D5;
    if (_jt == 0x003E05F6u) goto loc_003E05F6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003E059C: ;
    ecx = edi + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0607; /* je: equal / zero */

loc_003E05A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E05ABu); RECOMP_ABI_CALL(0x00024DCBu, sub_00024DCB); /* call 0x00024DCB */

loc_003E05AB: ;
    goto loc_003E0609;

loc_003E05AD: ;
    ecx = edi + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E05EC; /* je: equal / zero */

loc_003E05B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E05BCu); RECOMP_ABI_CALL(0x0002062Cu, sub_0002062C); /* call 0x0002062C */

loc_003E05BC: ;
    ecx = MEM32(esi + 4);
    MEM32(ecx + ebx * 4) = eax;
    goto loc_003E060F;

loc_003E05C4: ;
    ecx = edi + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0607; /* je: equal / zero */

loc_003E05CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E05D3u); RECOMP_ABI_CALL(0x00032494u, sub_00032494); /* call 0x00032494 */

loc_003E05D3: ;
    goto loc_003E0609;

loc_003E05D5: ;
    ecx = edi + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E05EC; /* je: equal / zero */

loc_003E05DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E05E4u); RECOMP_ABI_CALL(0x000212F7u, sub_000212F7); /* call 0x000212F7 */

loc_003E05E4: ;
    ecx = MEM32(esi + 4);
    MEM32(ecx + ebx * 4) = eax;
    goto loc_003E060F;

loc_003E05EC: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + ebx * 4) = eax;
    goto loc_003E060F;

loc_003E05F6: ;
    ecx = edi + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0607; /* je: equal / zero */

loc_003E05FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E0605u); RECOMP_ABI_CALL(0x0002C869u, sub_0002C869); /* call 0x0002C869 */

loc_003E0605: ;
    goto loc_003E0609;

loc_003E0607: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E0609: ;
    edx = MEM32(esi + 4);
    MEM32(edx + ebx * 4) = eax;

loc_003E060F: ;
    eax = ZX16(MEM16(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0551; /* jl: less (signed <) */

loc_003E0620: ;
    ebx = MEM32(esp + 0x14);

loc_003E0624: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E84);
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 8) = ebp;
    PUSH32(esp, 0x003E0635u); RECOMP_ABI_CALL(0x0001C9A0u, sub_0001C9A0); /* call 0x0001C9A0 */

loc_003E0635: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E06AC; /* je: equal / zero */

loc_003E063E: ;
    ecx = MEM32(ebp);
    eax = ecx;
    edx = ebp + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 8) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003E06AC; /* jle: less or equal (signed <=) */

loc_003E0652: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + ebx * 4);
    ecx = eax + ebx * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + ebx * 4);
    eax = MEM32(esi + 0x10);
    MEM32(edx) = eax;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + ebx * 4);
    eax = ZX16(MEM16(ecx + 0x1C));
    edx = ecx + 0x2C;
    MEM32(ecx + 0x24) = edx;
    edx = edx + eax * 4;
    eax = ZX16(MEM16(ecx + 0x1E));
    edi = edx + eax * 4;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x28) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003E06A4; /* jle: less or equal (signed <=) */

loc_003E068E: ;
    ecx = eax;

loc_003E0690: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E069D; /* je: equal / zero */

loc_003E0698: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx;

loc_003E069D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi + eax + 0x14;
    if ((_fa != 0)) goto loc_003E0690; /* jne: not equal / not zero */

loc_003E06A4: ;
    eax = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0652; /* jl: less (signed <) */

loc_003E06AC: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3E85);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x003E06C3u); RECOMP_ABI_CALL(0x0001C9A0u, sub_0001C9A0); /* call 0x0001C9A0 */

loc_003E06C3: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0730; /* je: equal / zero */

loc_003E06CC: ;
    edx = MEM32(ebp);
    eax = ebp + 4;
    MEM32(esi + 0xC) = eax;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x20) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003E0730; /* jle: less or equal (signed <=) */

loc_003E06DE: ;
    edi = edi;

loc_003E06E0: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + ebx * 4);
    ecx = ecx + ebx * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + ebx * 4);
    ecx = MEM32(esi + 0x14);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + ebx * 4);
    eax = ZX16(MEM16(ecx + 0x18));
    edx = ecx + 0x28;
    edi = edx + eax * 4;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x24) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003E0728; /* jle: less or equal (signed <=) */

loc_003E0712: ;
    ecx = eax;

loc_003E0714: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0721; /* je: equal / zero */

loc_003E071C: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx;

loc_003E0721: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi + eax + 0x14;
    if ((_fa != 0)) goto loc_003E0714; /* jne: not equal / not zero */

loc_003E0728: ;
    eax = MEM32(esi + 0x20);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E06E0; /* jl: less (signed <) */

loc_003E0730: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0800
 * Original: 0x003E0800 - 0x003E0828 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0800: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(0x907BA0);
    if (CMP_EQ(_fa, _fb)) goto loc_003E0815; /* je: equal / zero */

loc_003E080D: ;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    goto loc_003E081A;

loc_003E0815: ;
    eax = MEM32(ecx + 0x2C);
    MEM32(edx) = eax;

loc_003E081A: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0827; /* je: equal / zero */

loc_003E0821: ;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = ecx;

loc_003E0827: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0840
 * Original: 0x003E0840 - 0x003E0879 (57 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0840: ;
    eax = MEM32(ecx + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E086F; /* jle: less or equal (signed <=) */

loc_003E0849: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    /* nop */

loc_003E0850: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + edx * 4);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E085F; /* jne: not equal / not zero */

loc_003E085D: ;
    MEM32(eax) = esi;

loc_003E085F: ;
    eax = MEM32(ecx + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0850; /* jl: less (signed <) */

loc_003E0867: ;
    POP32(esp, edi);
    MEM32(ecx + 0x10) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E086F: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x10) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0890
 * Original: 0x003E0890 - 0x003E08C9 (57 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0890: ;
    eax = MEM32(ecx + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E08BF; /* jle: less or equal (signed <=) */

loc_003E0899: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    /* nop */

loc_003E08A0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + edx * 4);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E08AF; /* jne: not equal / not zero */

loc_003E08AD: ;
    MEM32(eax) = esi;

loc_003E08AF: ;
    eax = MEM32(ecx + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E08A0; /* jl: less (signed <) */

loc_003E08B7: ;
    POP32(esp, edi);
    MEM32(ecx + 0x14) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E08BF: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x14) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E08E0
 * Original: 0x003E08E0 - 0x003E090C (44 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E08E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E08E0: ;
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_003E0904; /* jle: less or equal (signed <=) */

loc_003E08EB: ;
    ecx = MEM32(ecx + 4);
    esi = MEM32(esp + 0xC);

loc_003E08F2: ;
    edi = MEM32(ecx);
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0907; /* je: equal / zero */

loc_003E08FC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E08F2; /* jl: less (signed <) */

loc_003E0904: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003E0907: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0920
 * Original: 0x003E0920 - 0x003E0949 (41 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0920: ;
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_003E0941; /* jle: less or equal (signed <=) */

loc_003E092B: ;
    ecx = MEM32(ecx + 8);
    esi = MEM32(esp + 0xC);

loc_003E0932: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0944; /* je: equal / zero */

loc_003E0939: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0932; /* jl: less (signed <) */

loc_003E0941: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003E0944: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0960
 * Original: 0x003E0960 - 0x003E0989 (41 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0960: ;
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_003E0981; /* jle: less or equal (signed <=) */

loc_003E096B: ;
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(esp + 0xC);

loc_003E0972: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0984; /* je: equal / zero */

loc_003E0979: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0972; /* jl: less (signed <) */

loc_003E0981: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003E0984: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E09A0
 * Original: 0x003E09A0 - 0x003E09AF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E09A0(void)
{

loc_003E09A0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E09C0
 * Original: 0x003E09C0 - 0x003E09CF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E09C0(void)
{

loc_003E09C0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E09E0
 * Original: 0x003E09E0 - 0x003E0AE9 (265 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E09E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E09E0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E0A65; /* jle: less or equal (signed <=) */

loc_003E09F6: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E0A5D; /* jne: not equal / not zero */

loc_003E0A03: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E0A31; /* jne: not equal / not zero */

loc_003E0A07: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x835C78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E0A1Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0A1C: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E0A2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0A2Cu); } /* indirect call */
    }

loc_003E0A2F: ;
    SET_LO8(ebx, 1);

loc_003E0A31: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + edi * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x835C6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E0A4Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0A4A: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E0A5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0A5Au); } /* indirect call */
    }

loc_003E0A5D: ;
    eax = MEM32(esi + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E09F6; /* jl: less (signed <) */

loc_003E0A65: ;
    eax = MEM32(esi + 0x20);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E0ADF; /* jle: less or equal (signed <=) */

loc_003E0A70: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E0AD7; /* jne: not equal / not zero */

loc_003E0A7D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E0AAB; /* jne: not equal / not zero */

loc_003E0A81: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x835C38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E0A96u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0A96: ;
    ecx = MEM32(0x907BA8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E0AA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0AA6u); } /* indirect call */
    }

loc_003E0AA9: ;
    SET_LO8(ebx, 1);

loc_003E0AAB: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + edi * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x835C6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E0AC4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0AC4: ;
    ecx = MEM32(0x907BA8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E0AD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0AD4u); } /* indirect call */
    }

loc_003E0AD7: ;
    eax = MEM32(esi + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0A70; /* jl: less (signed <) */

loc_003E0ADF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E0B30
 * Original: 0x003E0B30 - 0x003E0B59 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0B30: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E0B53; /* jle: less or equal (signed <=) */

loc_003E0B3D: ;
    edx = ecx;
    /* nop */

loc_003E0B40: ;
    ecx = eax;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0B50; /* je: equal / zero */

loc_003E0B4B: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E0B50: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E0B40; /* jne: not equal / not zero */

loc_003E0B53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0B70
 * Original: 0x003E0B70 - 0x003E0BB6 (70 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0B70: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E0B93; /* jle: less or equal (signed <=) */

loc_003E0B7D: ;
    edx = ecx;
    /* nop */

loc_003E0B80: ;
    ecx = eax;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0B90; /* je: equal / zero */

loc_003E0B8B: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E0B90: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E0B80; /* jne: not equal / not zero */

loc_003E0B93: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E0BA7; /* jne: not equal / not zero */

loc_003E0B99: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

loc_003E0BA7: ;
    ecx = eax + 0x14;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E0BD0
 * Original: 0x003E0BD0 - 0x003E0BD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0BD0(void)
{

loc_003E0BD0: ;
    eax = ecx;
    MEM32(eax) = 0x835B88;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0BE0
 * Original: 0x003E0BE0 - 0x003E0BE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0BE0(void)
{

loc_003E0BE0: ;
    eax = ecx;
    MEM32(eax) = 0x835BE8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0BF0
 * Original: 0x003E0BF0 - 0x003E0C27 (55 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0BF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_003E0C12; /* jle: less or equal (signed <=) */

loc_003E0BFC: ;
    edx = MEM32(ecx + 8);
    edi = MEM32(esp + 0x10);

loc_003E0C03: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0C15; /* je: equal / zero */

loc_003E0C0A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0C03; /* jl: less (signed <) */

loc_003E0C12: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003E0C15: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E0C40
 * Original: 0x003E0C40 - 0x003E0C77 (55 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0C40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_003E0C62; /* jle: less or equal (signed <=) */

loc_003E0C4C: ;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(esp + 0x10);

loc_003E0C53: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0C65; /* je: equal / zero */

loc_003E0C5A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E0C53; /* jl: less (signed <) */

loc_003E0C62: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003E0C65: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E0C90
 * Original: 0x003E0C90 - 0x003E0C9D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0C90: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E0CA0
 * Original: 0x003E0CA0 - 0x003E0CB5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0CA0(void)
{

loc_003E0CA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835CB0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E0CB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0CB2u); } /* indirect call */
    }

loc_003E0CB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0CC0
 * Original: 0x003E0CC0 - 0x003E0CD1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0CC0(void)
{

loc_003E0CC0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E0CD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0CCDu); } /* indirect call */
    }

loc_003E0CD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0CE0
 * Original: 0x003E0CE0 - 0x003E0CE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0CE0(void)
{

loc_003E0CE0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0CF0
 * Original: 0x003E0CF0 - 0x003E0CF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0CF0(void)
{

loc_003E0CF0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0D00
 * Original: 0x003E0D00 - 0x003E0D04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0D00(void)
{

loc_003E0D00: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0D10
 * Original: 0x003E0D10 - 0x003E0D16 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0D10(void)
{

loc_003E0D10: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0D20
 * Original: 0x003E0D20 - 0x003E0D25 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0D20(void)
{

loc_003E0D20: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0D30
 * Original: 0x003E0D30 - 0x003E0D31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0D30(void)
{

loc_003E0D30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0D40
 * Original: 0x003E0D40 - 0x003E0D44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0D40(void)
{

loc_003E0D40: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0D50
 * Original: 0x003E0D50 - 0x003E0DA7 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0D50: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + 0x58;
    if (CMP_LE(_fas, _fbs)) goto loc_003E0D77; /* jle: less or equal (signed <=) */

loc_003E0D5F: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_003E0D62: ;
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0D6F; /* je: equal / zero */

loc_003E0D6A: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ecx;

loc_003E0D6F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + edx + 0x14;
    if ((_fa != 0)) goto loc_003E0D62; /* jne: not equal / not zero */

loc_003E0D76: ;
    POP32(esp, esi);

loc_003E0D77: ;
    ecx = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0D97; /* je: equal / zero */

loc_003E0D82: ;
    edx = MEM32(esp + 8);

loc_003E0D86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E0D9B; /* je: equal / zero */

loc_003E0D8A: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E0D86; /* jne: not equal / not zero */

loc_003E0D97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003E0D9B: ;
    edx = MEM32(edi + 0x20);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0DC0
 * Original: 0x003E0DC0 - 0x003E0DC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0DC0(void)
{

loc_003E0DC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0DD0
 * Original: 0x003E0DD0 - 0x003E0DD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0DD0(void)
{

loc_003E0DD0: ;
    eax = 0x907798;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0DE0
 * Original: 0x003E0DE0 - 0x003E0DE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0DE0(void)
{

loc_003E0DE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0DF0
 * Original: 0x003E0DF0 - 0x003E0E11 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E0DF8u); RECOMP_ABI_CALL(0x0002FFF5u, sub_0002FFF5); /* call 0x0002FFF5 */

loc_003E0DF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E0E0B; /* je: equal / zero */

loc_003E0DFF: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E0E0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0E08u); } /* indirect call */
    }

loc_003E0E0B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0E20
 * Original: 0x003E0E20 - 0x003E0F5A (314 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0E20: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x835DB4);
    PUSH32(esp, 0x835DA8);
    PUSH32(esp, 0x835DA0);
    PUSH32(esp, 0x835D90);
    eax = esp + 0x10;
    PUSH32(esp, 0x835D74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E0E49u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0E49: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E0E5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0E58u); } /* indirect call */
    }

loc_003E0E5B: ;
    ecx = esp;
    PUSH32(esp, 0x835D30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E0E69u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0E69: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E0E7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0E78u); } /* indirect call */
    }

loc_003E0E7B: ;
    eax = MEM32(0x907BAC);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x835D18);
    ecx = esp + 0x10;
    PUSH32(esp, 0x835CFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E0E9Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0E9F: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E0EB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0EAEu); } /* indirect call */
    }

loc_003E0EB1: ;
    eax = MEM32(0x907BB0);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x835CE8);
    ecx = esp + 0x10;
    PUSH32(esp, 0x835CFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E0ED5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0ED5: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E0EE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0EE4u); } /* indirect call */
    }

loc_003E0EE7: ;
    eax = MEM32(0x907BB4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x835CD4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x835CFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E0F0Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0F0B: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E0F1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E0F1Au); } /* indirect call */
    }

loc_003E0F1D: ;
    eax = MEM32(0x907BB8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x835CC0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x835CFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E0F41u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E0F41: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E0F53u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003E0F50u); } /* indirect call */
    }

loc_003E0F53: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E0FB0
 * Original: 0x003E0FB0 - 0x003E0FC0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0FB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E0FD0
 * Original: 0x003E0FD0 - 0x003E0FDE (14 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0FD0(void)
{

loc_003E0FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E0FD8u); RECOMP_ABI_CALL(0x00032976u, sub_00032976); /* call 0x00032976 */

loc_003E0FD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E0FF0
 * Original: 0x003E0FF0 - 0x003E1054 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E0FF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x404) = 0;
    ebx = esi + 4;

loc_003E1002: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x100;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1050; /* je: equal / zero */

loc_003E1013: ;
    eax = MEM32(edx);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esi + 0x404);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + eax * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E103C; /* jne: not equal / not zero */

loc_003E102D: ;
    MEM32(esi + eax * 4 + 4) = edx;
    edx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E1013; /* jne: not equal / not zero */

loc_003E1038: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003E103C: ;
    ecx = MEM32(esi + 0x404);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    MEM32(esi + 0x404) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_003E1002; /* jb: below (unsigned <) */

loc_003E1050: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1070
 * Original: 0x003E1070 - 0x003E108B (27 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1070: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x404);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + edx * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E10A0
 * Original: 0x003E10A0 - 0x003E10C4 (36 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E10A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E10A0: ;
    edx = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx;
    ecx = MEM32(eax + 0x404);
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + edx * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E10D0
 * Original: 0x003E10D0 - 0x003E1115 (69 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E10D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E10D0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx;
    ecx = MEM32(eax + 0x404);
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + esi * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E110F; /* je: equal / zero */

loc_003E10F8: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003E1100u); RECOMP_ABI_CALL(0x0002684Cu, sub_0002684C); /* call 0x0002684C */

loc_003E1100: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E110F; /* je: equal / zero */

loc_003E1105: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E110F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1130
 * Original: 0x003E1130 - 0x003E1177 (71 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1130: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx;
    ecx = MEM32(eax + 0x404);
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + esi * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1171; /* je: equal / zero */

loc_003E1158: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003E1160u); RECOMP_ABI_CALL(0x00022A71u, sub_00022A71); /* call 0x00022A71 */

loc_003E1160: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1171; /* je: equal / zero */

loc_003E1165: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003E116Du); RECOMP_ABI_CALL(0x000347F3u, sub_000347F3); /* call 0x000347F3 */

loc_003E116D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E1171: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1190
 * Original: 0x003E1190 - 0x003E11D7 (71 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1190: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx;
    ecx = MEM32(eax + 0x404);
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + esi * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E11D1; /* je: equal / zero */

loc_003E11B8: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003E11C0u); RECOMP_ABI_CALL(0x0002DDF4u, sub_0002DDF4); /* call 0x0002DDF4 */

loc_003E11C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E11D1; /* je: equal / zero */

loc_003E11C5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003E11CDu); RECOMP_ABI_CALL(0x00014FE8u, sub_00014FE8); /* call 0x00014FE8 */

loc_003E11CD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E11D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E11F0
 * Original: 0x003E11F0 - 0x003E1235 (69 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E11F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E11F0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx;
    ecx = MEM32(eax + 0x404);
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + esi * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E122F; /* je: equal / zero */

loc_003E1218: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003E1220u); RECOMP_ABI_CALL(0x00022A71u, sub_00022A71); /* call 0x00022A71 */

loc_003E1220: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E122F; /* je: equal / zero */

loc_003E1225: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E122F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1250
 * Original: 0x003E1250 - 0x003E1295 (69 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1250: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx;
    ecx = MEM32(eax + 0x404);
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + esi * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E128F; /* je: equal / zero */

loc_003E1278: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003E1280u); RECOMP_ABI_CALL(0x0002DDF4u, sub_0002DDF4); /* call 0x0002DDF4 */

loc_003E1280: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E128F; /* je: equal / zero */

loc_003E1285: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E128F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E12B0
 * Original: 0x003E12B0 - 0x003E12CC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E12B0(void)
{

loc_003E12B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 0x404) = 0;
    PUSH32(esp, 0x003E12C8u); RECOMP_ABI_CALL(0x00035F77u, sub_00035F77); /* call 0x00035F77 */

loc_003E12C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E12E0
 * Original: 0x003E12E0 - 0x003E13E3 (259 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E12E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E12E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x907798;
    MEM32(0x907798) = esi;
    MEM32(0x907B9C) = esi;
    PUSH32(esp, 0x003E12FAu); RECOMP_ABI_CALL(0x00035F77u, sub_00035F77); /* call 0x00035F77 */

loc_003E12FA: ;
    ecx = MEM32(0x907BA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835CB0);
    MEM32(0x907BA0) = 0x907798;
    eax = MEM32(ecx);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E1315u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1313u); } /* indirect call */
    }

loc_003E1315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003E1330; /* je: equal / zero */

loc_003E131D: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2C);
    ecx = eax;
    PUSH32(esp, 0x003E1329u); RECOMP_ABI_CALL(0x0001F8B7u, sub_0001F8B7); /* call 0x0001F8B7 */

loc_003E1329: ;
    MEM32(0x907BAC) = eax;
    goto loc_003E1336;

loc_003E1330: ;
    MEM32(0x907BAC) = esi;

loc_003E1336: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835CB0);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E1347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1345u); } /* indirect call */
    }

loc_003E1347: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E135F; /* je: equal / zero */

loc_003E134B: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x20);
    ecx = eax;
    PUSH32(esp, 0x003E1358u); RECOMP_ABI_CALL(0x0001F8B7u, sub_0001F8B7); /* call 0x0001F8B7 */

loc_003E1358: ;
    MEM32(0x907BB0) = eax;
    goto loc_003E1365;

loc_003E135F: ;
    MEM32(0x907BB0) = esi;

loc_003E1365: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835CB0);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E1376u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1374u); } /* indirect call */
    }

loc_003E1376: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1391; /* je: equal / zero */

loc_003E137A: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xEC);
    ecx = eax;
    PUSH32(esp, 0x003E138Au); RECOMP_ABI_CALL(0x0001F8B7u, sub_0001F8B7); /* call 0x0001F8B7 */

loc_003E138A: ;
    MEM32(0x907BB4) = eax;
    goto loc_003E1397;

loc_003E1391: ;
    MEM32(0x907BB4) = esi;

loc_003E1397: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835CB0);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E13A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E13A6u); } /* indirect call */
    }

loc_003E13A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E13CF; /* je: equal / zero */

loc_003E13AC: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5DC);
    ecx = eax;
    PUSH32(esp, 0x003E13BCu); RECOMP_ABI_CALL(0x0001F8B7u, sub_0001F8B7); /* call 0x0001F8B7 */

loc_003E13BC: ;
    MEM32(0x907BB8) = eax;
    edx = MEM32(edi + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00025BB8(); return; /* tail jmp 0x00025BB8 */

loc_003E13CF: ;
    MEM32(0x907BB8) = esi;
    edx = MEM32(edi + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00025BB8(); return; /* tail jmp 0x00025BB8 */

}

/**
 * sub_003E1430
 * Original: 0x003E1430 - 0x003E14AB (123 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1430: ;
    ecx = MEM32(0x907BAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E144E; /* je: equal / zero */

loc_003E143D: ;
    PUSH32(esp, 0x003E1442u); RECOMP_ABI_CALL(0x0002FFF5u, sub_0002FFF5); /* call 0x0002FFF5 */

loc_003E1442: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E144Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E144Bu); } /* indirect call */
    }

loc_003E144E: ;
    ecx = MEM32(0x907BB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E146B; /* je: equal / zero */

loc_003E145A: ;
    PUSH32(esp, 0x003E145Fu); RECOMP_ABI_CALL(0x0002FFF5u, sub_0002FFF5); /* call 0x0002FFF5 */

loc_003E145F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E146Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1468u); } /* indirect call */
    }

loc_003E146B: ;
    ecx = MEM32(0x907BB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E1488; /* je: equal / zero */

loc_003E1477: ;
    PUSH32(esp, 0x003E147Cu); RECOMP_ABI_CALL(0x0002FFF5u, sub_0002FFF5); /* call 0x0002FFF5 */

loc_003E147C: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E1488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1485u); } /* indirect call */
    }

loc_003E1488: ;
    ecx = MEM32(0x907BB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E14A5; /* je: equal / zero */

loc_003E1494: ;
    PUSH32(esp, 0x003E1499u); RECOMP_ABI_CALL(0x0002FFF5u, sub_0002FFF5); /* call 0x0002FFF5 */

loc_003E1499: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E14A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E14A2u); } /* indirect call */
    }

loc_003E14A5: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001F97A(); return; /* tail jmp 0x0001F97A */

}

/**
 * sub_003E14D0
 * Original: 0x003E14D0 - 0x003E1509 (57 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E14D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E14D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x404);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + edx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E14FE; /* je: equal / zero */

loc_003E14F2: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E14FE; /* jne: not equal / not zero */

loc_003E14F9: ;
    PUSH32(esp, 0x003E14FEu); RECOMP_ABI_CALL(0x00032976u, sub_00032976); /* call 0x00032976 */

loc_003E14FE: ;
    ecx = esi;
    PUSH32(esp, 0x003E1505u); RECOMP_ABI_CALL(0x00035F77u, sub_00035F77); /* call 0x00035F77 */

loc_003E1505: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1520
 * Original: 0x003E1520 - 0x003E1568 (72 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1520: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0x404);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + edx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E154F; /* je: equal / zero */

loc_003E1543: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E154F; /* jne: not equal / not zero */

loc_003E154A: ;
    PUSH32(esp, 0x003E154Fu); RECOMP_ABI_CALL(0x00032976u, sub_00032976); /* call 0x00032976 */

loc_003E154F: ;
    ecx = esi;
    PUSH32(esp, 0x003E1556u); RECOMP_ABI_CALL(0x00035F77u, sub_00035F77); /* call 0x00035F77 */

loc_003E1556: ;
    ecx = edi + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1563; /* je: equal / zero */

loc_003E155D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E1563u); RECOMP_ABI_CALL(0x0003425Du, sub_0003425D); /* call 0x0003425D */

loc_003E1563: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1580
 * Original: 0x003E1580 - 0x003E1591 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1580(void)
{

loc_003E1580: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8CE098);
    PUSH32(esp, 0x003E1590u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_003E1590: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E15A0
 * Original: 0x003E15A0 - 0x003E15F5 (85 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E15A0(void)
{

loc_003E15A0: ;
    eax = ecx;
    MEM32(eax) = 0x835DD4;
    edx = MEM32(0x87DAF0);
    ecx = eax + 0x10;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DAF4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DAF8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DAFC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x87DBD0);
    ecx = eax + 0x20;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DBD4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DBD8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DBDC);
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1610
 * Original: 0x003E1610 - 0x003E1617 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1610(void)
{

loc_003E1610: ;
    MEM32(ecx) = 0x835DD4;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1620
 * Original: 0x003E1620 - 0x003E1686 (102 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1620(void)
{

loc_003E1620: ;
    edx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x835DC8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvtss2si */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    esi = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvtss2si */
    edx = eax;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x835DCC); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvtss2si */
    MEM16(ecx) = LO16(esi);
    MEM16(ecx + 2) = LO16(edx);
    MEM16(ecx + 4) = LO16(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E16A0
 * Original: 0x003E16A0 - 0x003E1727 (135 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E16A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003E16A0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    xmm1 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    eax = MEM32(esp + 8);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7A9EC4); /* mulss */
    xmm2 = xmm1; /* movaps */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003E1750
 * Original: 0x003E1750 - 0x003E17C9 (121 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1750: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x835DC8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvtss2si */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvtss2si */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x835DCC); /* mulss */
    esi = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvtss2si */
    ecx = MEM32(esp + 0x14);
    MEM16(esp + 0xC) = LO16(eax);
    PUSH32(esp, 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM16(esp + 0x10) = LO16(edx);
    MEM16(esp + 0x12) = LO16(esi);
    PUSH32(esp, 0x003E17C2u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_003E17C2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E17F0
 * Original: 0x003E17F0 - 0x003E1982 (402 bytes, 97 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E17F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003E17F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 8);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E181Cu); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_003E181C: ;
    PUSH32(esp, 8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E182Bu); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_003E182B: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x12);
    xmm2 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(0x7A9EC4)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1A);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x10);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x40); /* movaps */
    xmm0.f[0] = xmm3.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0]; /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    PUSH32(esp, eax);
    XMM_STORE(edx, xmm0); /* movaps */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E1979u); RECOMP_ABI_CALL(0x0059F60Au, sub_0059F60A); /* call 0x0059F60A */

loc_003E1979: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003E19F0
 * Original: 0x003E19F0 - 0x003E19FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E19F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E19F0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1A00
 * Original: 0x003E1A00 - 0x003E1A4B (75 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1A00: ;
    edx = MEM32(0x87DAF0);
    eax = ecx + 0x10;
    MEM32(eax) = edx;
    edx = MEM32(0x87DAF4);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x87DAF8);
    MEM32(eax + 8) = edx;
    edx = MEM32(0x87DAFC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x87DBD0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    edx = MEM32(0x87DBD4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(0x87DBD8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x87DBDC);
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1A60
 * Original: 0x003E1A60 - 0x003E1A7F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1A60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835DD4;
    if (TEST_Z(_fa, _fb)) goto loc_003E1A79; /* je: equal / zero */

loc_003E1A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E1A76u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E1A76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E1A79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1A90
 * Original: 0x003E1A90 - 0x003E1A94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1A90(void)
{

loc_003E1A90: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1AA0
 * Original: 0x003E1AA0 - 0x003E1B0F (111 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E1AA8u); RECOMP_ABI_CALL(0x000145C0u, sub_000145C0); /* call 0x000145C0 */

loc_003E1AA8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x440);
    MEM32(esi) = 0x835E20;
    MEM32(esi + 0x30) = 0;
    PUSH32(esp, 0x003E1AC1u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E1AC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1AD1; /* je: equal / zero */

loc_003E1AC8: ;
    ecx = eax;
    PUSH32(esp, 0x003E1ACFu); RECOMP_ABI_CALL(0x0002866Fu, sub_0002866F); /* call 0x0002866F */

loc_003E1ACF: ;
    goto loc_003E1AD3;

loc_003E1AD1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E1AD3: ;
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    MEM32(esi + 0x34) = eax;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E1AF7u); RECOMP_ABI_CALL(0x00018FB2u, sub_00018FB2); /* call 0x00018FB2 */

loc_003E1AF7: ;
    eax = MEM32(esi + 0x34);
    edx = esi + 0x10;
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esi + 0x34);
    ecx = esi + 0x20;
    eax = esi;
    MEM32(edx + 0x14) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E1B30
 * Original: 0x003E1B30 - 0x003E1B56 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(esi) = 0x835E20;
    PUSH32(esp, 0x003E1B41u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003E1B41: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1B4E; /* je: equal / zero */

loc_003E1B48: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E1B4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1B4Cu); } /* indirect call */
    }

loc_003E1B4E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002F92E(); return; /* tail jmp 0x0002F92E */

}

/**
 * sub_003E1B60
 * Original: 0x003E1B60 - 0x003E1B86 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1B60(void)
{

loc_003E1B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E1B6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1B68u); } /* indirect call */
    }

loc_003E1B6B: ;
    ecx = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 3);
    eax = esi + 0x20;
    edx = esi + 0x10;
    esi = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x003E1B84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1B81u); } /* indirect call */
    }

loc_003E1B84: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1B90
 * Original: 0x003E1B90 - 0x003E1BAC (28 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1B90(void)
{

loc_003E1B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003E1B9Eu); RECOMP_ABI_CALL(0x0002E871u, sub_0002E871); /* call 0x0002E871 */

loc_003E1B9E: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E1BA7u); RECOMP_ABI_CALL(0x00029C0Eu, sub_00029C0E); /* call 0x00029C0E */

loc_003E1BA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1BC0
 * Original: 0x003E1BC0 - 0x003E1C03 (67 bytes, 29 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1BC0: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x003E1BE6u); RECOMP_ABI_CALL(0x0002D971u, sub_0002D971); /* call 0x0002D971 */

loc_003E1BE6: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003E1BF1u); RECOMP_ABI_CALL(0x0002836Du, sub_0002836D); /* call 0x0002836D */

loc_003E1BF1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003E1C20
 * Original: 0x003E1C20 - 0x003E1C3C (28 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1C20(void)
{

loc_003E1C20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003E1C2Eu); RECOMP_ABI_CALL(0x00032D90u, sub_00032D90); /* call 0x00032D90 */

loc_003E1C2E: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E1C37u); RECOMP_ABI_CALL(0x00033718u, sub_00033718); /* call 0x00033718 */

loc_003E1C37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1C50
 * Original: 0x003E1C50 - 0x003E1CE7 (151 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E1C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = ecx + 0x110;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E1C83u); RECOMP_ABI_CALL(0x0002DBB0u, sub_0002DBB0); /* call 0x0002DBB0 */

loc_003E1C83: ;
    eax = MEM32(esi + 0x34);
    MEM32(eax + 0x150) = 0;
    edx = MEM32(0x87DA6C);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x44;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(0x87DA6C);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 0xF8);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E1CE0u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_003E1CE0: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E1D10
 * Original: 0x003E1D10 - 0x003E1D49 (57 bytes, 21 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1D10: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x54;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E1D45u); RECOMP_ABI_CALL(0x0001612Cu, sub_0001612C); /* call 0x0001612C */

loc_003E1D45: ;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E1D60
 * Original: 0x003E1D60 - 0x003E1D93 (51 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1D60: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x54;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E1D8Fu); RECOMP_ABI_CALL(0x0001612Cu, sub_0001612C); /* call 0x0001612C */

loc_003E1D8F: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E1DA0
 * Original: 0x003E1DA0 - 0x003E1DD3 (51 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1DA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x54;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E1DCFu); RECOMP_ABI_CALL(0x0001612Cu, sub_0001612C); /* call 0x0001612C */

loc_003E1DCF: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E1DE0
 * Original: 0x003E1DE0 - 0x003E1E13 (51 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1DE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x54;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E1E0Fu); RECOMP_ABI_CALL(0x0001612Cu, sub_0001612C); /* call 0x0001612C */

loc_003E1E0F: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E1E20
 * Original: 0x003E1E20 - 0x003E1E31 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E1E28u); RECOMP_ABI_CALL(0x00015F29u, sub_00015F29); /* call 0x00015F29 */

loc_003E1E28: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_003E1E40
 * Original: 0x003E1E40 - 0x003E1E7B (59 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(esi) = 0x835E20;
    PUSH32(esp, 0x003E1E51u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003E1E51: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1E5E; /* je: equal / zero */

loc_003E1E58: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E1E5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1E5Cu); } /* indirect call */
    }

loc_003E1E5E: ;
    ecx = esi;
    PUSH32(esp, 0x003E1E65u); RECOMP_ABI_CALL(0x0002F92Eu, sub_0002F92E); /* call 0x0002F92E */

loc_003E1E65: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E1E75; /* je: equal / zero */

loc_003E1E6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E1E72u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E1E72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E1E75: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E1E90
 * Original: 0x003E1E90 - 0x003E1E98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1E90: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00013D0A(); return; /* tail jmp 0x00013D0A */

}

/**
 * sub_003E1EA0
 * Original: 0x003E1EA0 - 0x003E1EA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1EA0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0002A4EC(); return; /* tail jmp 0x0002A4EC */

}

/**
 * sub_003E1EB0
 * Original: 0x003E1EB0 - 0x003E1EB7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1EB0(void)
{

loc_003E1EB0: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1EC0
 * Original: 0x003E1EC0 - 0x003E1EC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1EC0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0002BDF6(); return; /* tail jmp 0x0002BDF6 */

}

/**
 * sub_003E1ED0
 * Original: 0x003E1ED0 - 0x003E1F88 (184 bytes, 65 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1ED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0xEC);
    MEM32(esi) = 0x835E48;
    PUSH32(esp, 0x003E1EE6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E1EE6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1EF6; /* je: equal / zero */

loc_003E1EED: ;
    ecx = eax;
    PUSH32(esp, 0x003E1EF4u); RECOMP_ABI_CALL(0x00021D29u, sub_00021D29); /* call 0x00021D29 */

loc_003E1EF4: ;
    goto loc_003E1EF8;

loc_003E1EF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E1EF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x909328);
    eax = MEM32(ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003E1F0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E1F0Cu); } /* indirect call */
    }

loc_003E1F0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1F1C; /* je: equal / zero */

loc_003E1F13: ;
    ecx = eax;
    PUSH32(esp, 0x003E1F1Au); RECOMP_ABI_CALL(0x00027E22u, sub_00027E22); /* call 0x00027E22 */

loc_003E1F1A: ;
    goto loc_003E1F1E;

loc_003E1F1C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E1F1E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x003E1F32u); RECOMP_ABI_CALL(0x0002CDA5u, sub_0002CDA5); /* call 0x0002CDA5 */

loc_003E1F32: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E1F3Bu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E1F3B: ;
    ecx = eax;
    PUSH32(esp, 0x003E1F42u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_003E1F42: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + 4);
    PUSH32(esp, 0x003E1F4Du); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003E1F4D: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E1F65u); RECOMP_ABI_CALL(0x00015D58u, sub_00015D58); /* call 0x00015D58 */

loc_003E1F65: ;
    eax = MEM32(0x91984C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003E1F72u); RECOMP_ABI_CALL(0x00576A02u, sub_00576A02); /* call 0x00576A02 */

loc_003E1F72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1F81; /* je: equal / zero */

loc_003E1F76: ;
    ecx = edi;
    PUSH32(esp, 0x003E1F7Du); RECOMP_ABI_CALL(0x00576AA4u, sub_00576AA4); /* call 0x00576AA4 */

loc_003E1F7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E1F76; /* jne: not equal / not zero */

loc_003E1F81: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003E1FC0
 * Original: 0x003E1FC0 - 0x003E2015 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E1FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x835E48;
    if (CMP_EQ(_fa, _fb)) goto loc_003E1FEE; /* je: equal / zero */

loc_003E1FD0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E1FD6u); RECOMP_ABI_CALL(0x000171D5u, sub_000171D5); /* call 0x000171D5 */

loc_003E1FD6: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E1FED; /* je: equal / zero */

loc_003E1FDD: ;
    ecx = edi;
    PUSH32(esp, 0x003E1FE4u); RECOMP_ABI_CALL(0x000329C1u, sub_000329C1); /* call 0x000329C1 */

loc_003E1FE4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E1FEAu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E1FEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E1FED: ;
    POP32(esp, edi);

loc_003E1FEE: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E1FF7u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E1FF7: ;
    ecx = eax;
    PUSH32(esp, 0x003E1FFEu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_003E1FFE: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003E2006u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2003u); } /* indirect call */
    }

loc_003E2006: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003E2014; /* je: equal / zero */

loc_003E200E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E2014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2012u); } /* indirect call */
    }

loc_003E2014: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2030
 * Original: 0x003E2030 - 0x003E204E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E2038u); RECOMP_ABI_CALL(0x00033BD2u, sub_00033BD2); /* call 0x00033BD2 */

loc_003E2038: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E2048; /* je: equal / zero */

loc_003E203F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E2045u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E2045: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E2048: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2060
 * Original: 0x003E2060 - 0x003E2066 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2060(void)
{

loc_003E2060: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2070
 * Original: 0x003E2070 - 0x003E2092 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2070: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E2082u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003E2082: ;
    edx = ZX8(MEM8(esp + 0xF));
    eax = edx * 8 + 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E20A0
 * Original: 0x003E20A0 - 0x003E213B (155 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E20A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E20A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    esi = ecx;
    edi = MEM32(esi + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E20BAu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003E20BA: ;
    ecx = ZX8(MEM8(esp + 0x20));
    edx = MEM32(esi + 0x40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0x40) = edx;
    ebx = ebp + 1;
    if (CMP_GE(_fas, _fbs)) goto loc_003E20F9; /* jge: greater or equal (signed >=) */

loc_003E20D3: ;
    ecx = MEM32(esi + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003E20DCu); RECOMP_ABI_CALL(0x0002EA42u, sub_0002EA42); /* call 0x0002EA42 */

loc_003E20DC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + edi * 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x40);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E20D3; /* jl: less (signed <) */

loc_003E20F9: ;
    eax = MEM32(0x87DA6C);
    edx = esi + 0x44;
    MEM32(edx) = eax;
    ecx = MEM32(0x87DA70);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x87DA74);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x87DA6C);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(esi + 4) = edx;
    eax = MEM32(0x87DA74);
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E2170
 * Original: 0x003E2170 - 0x003E21BF (79 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E2170: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x40));
    PUSH32(esp, 1);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM8(esp + 0x1F) = LO8(eax);
    PUSH32(esp, 0x003E218Fu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003E218F: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ebp + 1;
    if (CMP_LE(_fas, _fbs)) goto loc_003E21B3; /* jle: less or equal (signed <=) */

loc_003E219E: ;
    edi = edi;

loc_003E21A0: ;
    ecx = MEM32(esi + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003E21A9u); RECOMP_ABI_CALL(0x00020C21u, sub_00020C21); /* call 0x00020C21 */

loc_003E21A9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x40);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E21A0; /* jl: less (signed <) */

loc_003E21B3: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E21E0
 * Original: 0x003E21E0 - 0x003E2220 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E21E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E21E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E21F4u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003E21F4: ;
    eax = ZX8(MEM8(esp + 0x14));
    ecx = MEM32(esi);
    eax = eax * 8 + 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E2218; /* jae: above or equal (unsigned >=) */

loc_003E220A: ;
    edx = 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + edx * 4 + 4;

loc_003E2218: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2230
 * Original: 0x003E2230 - 0x003E2291 (97 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x550);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E2244u); RECOMP_ABI_CALL(0x00021F31u, sub_00021F31); /* call 0x00021F31 */

loc_003E2244: ;
    edx = MEM32(esi + 0x550);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    MEM32(esi + 0x550) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_003E228D; /* jae: above or equal (unsigned >=) */

loc_003E2257: ;
    ecx = 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 4;
    goto loc_003E2270;

    /* nop */

loc_003E2270: ;
    edx = MEM32(esi + 0x550);
    MEM32(edx) = 0;
    edx = MEM32(esi + 0x550);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x550) = edx;
    if ((_fa != 0)) goto loc_003E2270; /* jne: not equal / not zero */

loc_003E228D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E22B0
 * Original: 0x003E22B0 - 0x003E235D (173 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E22B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E22B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(ecx + 0x150) = 0;
    esi = MEM32(0x87DA6C);
    edx = ecx + 0x154;
    MEM32(edx) = esi;
    esi = MEM32(0x87DA70);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x87DA74);
    MEM32(edx + 8) = esi;
    esi = MEM32(0x87DA6C);
    edx = ecx + 0x160;
    MEM32(edx) = esi;
    esi = MEM32(0x87DA70);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x87DA74);
    MEM32(edx + 8) = esi;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x150)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x150) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E2357; /* jge: greater or equal (signed >=) */

loc_003E230B: ;
    esi = MEM32(eax + edx * 4 + 0x110);
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x188) = edx;
    SET_LO8(edx, MEM8(esi + 0x18));
    eax = ecx + 0x174;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax + 0x18) = LO8(edx);
    edx = MEM32(esi + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esi + 0x28);
    MEM32(eax + 0x28) = edx;
    esi = MEM32(esi + 0x24);
    MEM32(eax + 0x24) = esi;
    edx = MEM32(ecx + 0x150);
    MEM32(ecx + edx * 4 + 0x110) = eax;
    MEM32(ecx + 0x150) = MEM32(ecx + 0x150) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x150)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003E2357: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E2390
 * Original: 0x003E2390 - 0x003E2478 (232 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2390: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003E2399u); RECOMP_ABI_CALL(0x00029D71u, sub_00029D71); /* call 0x00029D71 */

loc_003E2399: ;
    MEM32(esi) = 0x835E58;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x150) = edx;
    ecx = MEM32(0x87DA6C);
    eax = esi + 0x154;
    MEM32(eax) = ecx;
    ecx = MEM32(0x87DA70);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x87DA6C);
    eax = esi + 0x160;
    MEM32(eax) = ecx;
    ecx = MEM32(0x87DA70);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    edi = esi + 0x174;
    eax = edi;
    ecx = 0x10;

loc_003E23F4: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x14) = edx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E23F4; /* jne: not equal / not zero */

loc_003E2408: ;
    eax = edi;
    ecx = 0x10;
    /* nop */

loc_003E2410: ;
    edi = MEM32(esi + 0x150);
    MEM32(esi + edi * 4 + 0x110) = eax;
    edi = MEM32(esi + 0x150);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x150) = edi;
    if ((_fa != 0)) goto loc_003E2410; /* jne: not equal / not zero */

loc_003E2430: ;
    MEM32(esi + 0x150) = edx;
    eax = MEM32(0x87DA6C);
    edx = esi + 0x154;
    MEM32(edx) = eax;
    ecx = MEM32(0x87DA70);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x87DA74);
    MEM32(edx + 8) = eax;
    edx = MEM32(0x87DA6C);
    ecx = esi + 0x160;
    MEM32(ecx) = edx;
    eax = MEM32(0x87DA70);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x87DA74);
    POP32(esp, edi);
    eax = esi;
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E24C0
 * Original: 0x003E24C0 - 0x003E24CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E24C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E24C0: ;
    MEM32(ecx) = 0x835E58;
    g_seh_ebp = ebp; sub_0002C576(); return; /* tail jmp 0x0002C576 */

}

/**
 * sub_003E24D0
 * Original: 0x003E24D0 - 0x003E25CE (254 bytes, 78 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E24D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003E24D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    PUSH32(esp, esi);
    esi = ecx + 0x110;
    MEM32(esi + 0x40) = 0;
    ecx = MEM32(0x87DA6C);
    eax = esi + 0x44;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x87DA6C);
    edx = esi + 0x50;
    MEM32(edx) = eax;
    ecx = MEM32(0x87DA70);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x87DA74);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    MEM32(edx + 8) = eax;
    eax = MEM32(edi);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003E2539u); RECOMP_ABI_CALL(0x00034401u, sub_00034401); /* call 0x00034401 */

loc_003E2539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E254C; /* jae: above or equal (unsigned >=) */

loc_003E253E: ;
    ecx = 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx * 4 + 4;

loc_003E254C: ;
    ecx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x835E50); /* comiss */
    MEM32(edi) = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003E258E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x835E50)) */

loc_003E2561: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003E2574u); RECOMP_ABI_CALL(0x00034401u, sub_00034401); /* call 0x00034401 */

loc_003E2574: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E2587; /* jae: above or equal (unsigned >=) */

loc_003E2579: ;
    ecx = 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx * 4 + 4;

loc_003E2587: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_003E258E: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E25A1u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003E25A1: ;
    eax = ZX8(MEM8(esp + 0x20));
    eax = eax * 8 + 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E25C3; /* jae: above or equal (unsigned >=) */

loc_003E25B5: ;
    ecx = 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx * 4 + 4;

loc_003E25C3: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E2610
 * Original: 0x003E2610 - 0x003E2634 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2610: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835E58;
    PUSH32(esp, 0x003E261Eu); RECOMP_ABI_CALL(0x0002C576u, sub_0002C576); /* call 0x0002C576 */

loc_003E261E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E262E; /* je: equal / zero */

loc_003E2625: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E262Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E262B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E262E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2640
 * Original: 0x003E2640 - 0x003E2665 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2640(void)
{

loc_003E2640: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003E2659u); RECOMP_ABI_CALL(0x0002BD1Au, sub_0002BD1A); /* call 0x0002BD1A */

loc_003E2659: ;
    MEM32(esi) = 0x835EA4;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E2670
 * Original: 0x003E2670 - 0x003E2694 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2670: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835EA4;
    PUSH32(esp, 0x003E267Eu); RECOMP_ABI_CALL(0x00037327u, sub_00037327); /* call 0x00037327 */

loc_003E267E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E268E; /* je: equal / zero */

loc_003E2685: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E268Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E268B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E268E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E26A0
 * Original: 0x003E26A0 - 0x003E26A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E26A0(void)
{

loc_003E26A0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003E26B0
 * Original: 0x003E26B0 - 0x003E26C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E26B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E26B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E26C4; /* je: equal / zero */

loc_003E26B8: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E26C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E26C1u); } /* indirect call */
    }

loc_003E26C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E26D0
 * Original: 0x003E26D0 - 0x003E26D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E26D0(void)
{

loc_003E26D0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003E26E0
 * Original: 0x003E26E0 - 0x003E26F7 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E26E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E26E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E26F2; /* jae: above or equal (unsigned >=) */

loc_003E26E9: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

loc_003E26F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2700
 * Original: 0x003E2700 - 0x003E2704 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2700(void)
{

loc_003E2700: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_003E2710
 * Original: 0x003E2710 - 0x003E2722 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E271Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003E271E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E2730
 * Original: 0x003E2730 - 0x003E2742 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2730: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E273Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003E273E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E2750
 * Original: 0x003E2750 - 0x003E2765 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2750: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2764; /* je: equal / zero */

loc_003E2758: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E2764u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2761u); } /* indirect call */
    }

loc_003E2764: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2770
 * Original: 0x003E2770 - 0x003E27AD (61 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2770(void)
{

loc_003E2770: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax + 8) = 0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x835EA8;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_003E27C0
 * Original: 0x003E27C0 - 0x003E27C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E27C0(void)
{

loc_003E27C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E27D0
 * Original: 0x003E27D0 - 0x003E27EF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E27D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E27D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DD254;
    if (TEST_Z(_fa, _fb)) goto loc_003E27E9; /* je: equal / zero */

loc_003E27E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E27E6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E27E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E27E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2800
 * Original: 0x003E2800 - 0x003E294B (331 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E2800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2800: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x30);
    MEM32(esi) = 0x835ED0;
    PUSH32(esp, 0x003E2817u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003E2817: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2827; /* je: equal / zero */

loc_003E281E: ;
    ecx = eax;
    PUSH32(esp, 0x003E2825u); RECOMP_ABI_CALL(0x0001E700u, sub_0001E700); /* call 0x0001E700 */

loc_003E2825: ;
    goto loc_003E2829;

loc_003E2827: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E2829: ;
    edi = MEM32(esp + 0x10);
    ecx = edi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x003E2837u); RECOMP_ABI_CALL(0x0002F17Cu, sub_0002F17C); /* call 0x0002F17C */

loc_003E2837: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x003E284Au); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003E284A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E285A; /* je: equal / zero */

loc_003E2851: ;
    ecx = eax;
    PUSH32(esp, 0x003E2858u); RECOMP_ABI_CALL(0x00037F93u, sub_00037F93); /* call 0x00037F93 */

loc_003E2858: ;
    goto loc_003E285C;

loc_003E285A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E285C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x18);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003E2868u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E2868: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E288C; /* je: equal / zero */

loc_003E2871: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x835EBC);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = ebx;
    PUSH32(esp, 0x003E2884u); RECOMP_ABI_CALL(0x0002BD1Au, sub_0002BD1A); /* call 0x0002BD1A */

loc_003E2884: ;
    MEM32(ebx) = 0x835EA4;
    goto loc_003E288E;

loc_003E288C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E288E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x20) = ebp;
    PUSH32(esp, 0x003E289Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E289F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E28DF; /* je: equal / zero */

loc_003E28A7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 8) = ebp;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x835EA8;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    goto loc_003E28E1;

loc_003E28DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E28E1: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x003E28F2u); RECOMP_ABI_CALL(0x0001E093u, sub_0001E093); /* call 0x0001E093 */

loc_003E28F2: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x18) = edx;
    PUSH32(esp, 0x835EB4);
    ecx = edi;
    PUSH32(esp, 0x003E2908u); RECOMP_ABI_CALL(0x0001FA1Au, sub_0001FA1A); /* call 0x0001FA1A */

loc_003E2908: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E2920; /* jne: not equal / not zero */

loc_003E290E: ;
    edx = MEM32(edi + 0x14);

loc_003E2911: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E2920; /* jae: above or equal (unsigned >=) */

loc_003E2915: ;
    eax = MEM32(edi + 0x1C);
    eax = MEM32(eax + ecx * 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2911; /* je: equal / zero */

loc_003E2920: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2937u); RECOMP_ABI_CALL(0x0002F1A4u, sub_0002F1A4); /* call 0x0002F1A4 */

loc_003E2937: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E2943u); RECOMP_ABI_CALL(0x00034E9Cu, sub_00034E9C); /* call 0x00034E9C */

loc_003E2943: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E29A0
 * Original: 0x003E29A0 - 0x003E29C5 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E29A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E29A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E29A8u); RECOMP_ABI_CALL(0x000360A8u, sub_000360A8); /* call 0x000360A8 */

loc_003E29A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E29BF; /* je: equal / zero */

loc_003E29AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E29BF; /* je: equal / zero */

loc_003E29B3: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003E29BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E29BCu); } /* indirect call */
    }

loc_003E29BF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E29D0
 * Original: 0x003E29D0 - 0x003E29F5 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E29D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E29D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E29D8u); RECOMP_ABI_CALL(0x0002DDB3u, sub_0002DDB3); /* call 0x0002DDB3 */

loc_003E29D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E29EF; /* je: equal / zero */

loc_003E29DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E29EF; /* je: equal / zero */

loc_003E29E3: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003E29EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E29ECu); } /* indirect call */
    }

loc_003E29EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2A00
 * Original: 0x003E2A00 - 0x003E2A27 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2A14; /* je: equal / zero */

loc_003E2A0B: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2A14u); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2A14: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2A25; /* je: equal / zero */

loc_003E2A1C: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2A25u); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2A25: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E2A30
 * Original: 0x003E2A30 - 0x003E2A38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E2A30: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00020C71(); return; /* tail jmp 0x00020C71 */

}

/**
 * sub_003E2A40
 * Original: 0x003E2A40 - 0x003E2A6C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2A40: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2A67; /* je: equal / zero */

loc_003E2A45: ;
    eax = MEM32(eax + 0x10);
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x003E2A5Eu); RECOMP_ABI_CALL(0x0001CCA7u, sub_0001CCA7); /* call 0x0001CCA7 */

loc_003E2A5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2A67; /* je: equal / zero */

loc_003E2A62: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E2A67: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E2A80
 * Original: 0x003E2A80 - 0x003E2ABA (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2A80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x003E2A8Du); RECOMP_ABI_CALL(0x00027FA8u, sub_00027FA8); /* call 0x00027FA8 */

loc_003E2A8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2AB4; /* je: equal / zero */

loc_003E2A91: ;
    eax = MEM32(eax + 0x10);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x003E2AA9u); RECOMP_ABI_CALL(0x0001CCA7u, sub_0001CCA7); /* call 0x0001CCA7 */

loc_003E2AA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2AB4; /* je: equal / zero */

loc_003E2AAD: ;
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E2AB4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E2AD0
 * Original: 0x003E2AD0 - 0x003E2B0A (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2AD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x003E2ADDu); RECOMP_ABI_CALL(0x0002DAEDu, sub_0002DAED); /* call 0x0002DAED */

loc_003E2ADD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2B04; /* je: equal / zero */

loc_003E2AE1: ;
    eax = MEM32(eax + 0x10);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x003E2AF9u); RECOMP_ABI_CALL(0x0001CCA7u, sub_0001CCA7); /* call 0x0001CCA7 */

loc_003E2AF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2B04; /* je: equal / zero */

loc_003E2AFD: ;
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E2B04: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E2B20
 * Original: 0x003E2B20 - 0x003E2B3F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2B20(void)
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

loc_003E2B20: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2B38; /* je: equal / zero */

loc_003E2B2A: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x118;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_003E2B38; /* je: equal / zero */

loc_003E2B31: ;
    fp_push(MEMF(eax + 0xA8)); /* fld float */
    esp += 4; return; /* ret */

loc_003E2B38: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003E2B50
 * Original: 0x003E2B50 - 0x003E2BD5 (133 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2B50: ;
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = ecx;
    ecx = MEM32(edi + 4);
    if ((_fa != 0)) goto loc_003E2B72; /* jne: not equal / not zero */

loc_003E2B66: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E2B72; /* jne: not equal / not zero */

loc_003E2B6E: ;
    SET_LO8(ebx, 1);
    goto loc_003E2B9D;

loc_003E2B72: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E2BC4; /* jae: above or equal (unsigned >=) */

loc_003E2B7A: ;
    edx = MEM32(edx + 0x1C);
    ecx = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2BC4; /* je: equal / zero */

loc_003E2B84: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2B8C; /* je: equal / zero */

loc_003E2B88: ;
    PUSH32(esp, 1);
    goto loc_003E2B8E;

loc_003E2B8C: ;
    PUSH32(esp, 0);

loc_003E2B8E: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x003E2B97u); RECOMP_ABI_CALL(0x00016145u, sub_00016145); /* call 0x00016145 */

loc_003E2B97: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2BC4; /* je: equal / zero */

loc_003E2B9D: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2BAE; /* je: equal / zero */

loc_003E2BA5: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2BAEu); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2BAE: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0x20) = edi;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E2BBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2BB9u); } /* indirect call */
    }

loc_003E2BBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003E2BC4: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E2BCDu); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2BCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E2C00
 * Original: 0x003E2C00 - 0x003E2C77 (119 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 4);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E2C66; /* jae: above or equal (unsigned >=) */

loc_003E2C18: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2C66; /* je: equal / zero */

loc_003E2C22: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2C39u); RECOMP_ABI_CALL(0x0002F1A4u, sub_0002F1A4); /* call 0x0002F1A4 */

loc_003E2C39: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2C66; /* je: equal / zero */

loc_003E2C3F: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2C50; /* je: equal / zero */

loc_003E2C47: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2C50u); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2C50: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0x20) = edi;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003E2C5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2C5Bu); } /* indirect call */
    }

loc_003E2C5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003E2C66: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E2C6Fu); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2C6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2CA0
 * Original: 0x003E2CA0 - 0x003E2D03 (99 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2CA0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E2CFE; /* jae: above or equal (unsigned >=) */

loc_003E2CB4: ;
    ecx = MEM32(ecx + 0x1C);
    edi = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2CFE; /* je: equal / zero */

loc_003E2CBE: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003E2CC7u); RECOMP_ABI_CALL(0x00027FA8u, sub_00027FA8); /* call 0x00027FA8 */

loc_003E2CC7: ;
    ecx = MEM32(esi + 4);
    ebx = eax;
    PUSH32(esp, 0x003E2CD1u); RECOMP_ABI_CALL(0x0002DAEDu, sub_0002DAED); /* call 0x0002DAED */

loc_003E2CD1: ;
    esi = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = ebx; /* cmove */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003E2CEE; /* jne: not equal / not zero */

loc_003E2CE0: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003E2CEBu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003E2CEB: ;
    MEM32(edi + 8) = eax;

loc_003E2CEE: ;
    edi = MEM32(edi + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003E2CF9u); RECOMP_ABI_CALL(0x00018233u, sub_00018233); /* call 0x00018233 */

loc_003E2CF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_003E2CFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2D20
 * Original: 0x003E2D20 - 0x003E2D54 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2D20(void)
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

loc_003E2D20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003E2D70
 * Original: 0x003E2D70 - 0x003E2E0A (154 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x835ED0;
    if (CMP_EQ(_fa, _fb)) goto loc_003E2D94; /* je: equal / zero */

loc_003E2D81: ;
    ecx = edi;
    PUSH32(esp, 0x003E2D88u); RECOMP_ABI_CALL(0x000360A8u, sub_000360A8); /* call 0x000360A8 */

loc_003E2D88: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003E2D94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2D91u); } /* indirect call */
    }

loc_003E2D94: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x003E2D9Cu); RECOMP_ABI_CALL(0x00020555u, sub_00020555); /* call 0x00020555 */

loc_003E2D9C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2DA9; /* je: equal / zero */

loc_003E2DA3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E2DA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2DA7u); } /* indirect call */
    }

loc_003E2DA9: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x003E2DB1u); RECOMP_ABI_CALL(0x00013459u, sub_00013459); /* call 0x00013459 */

loc_003E2DB1: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2DCB; /* je: equal / zero */

loc_003E2DB8: ;
    ecx = edi;
    PUSH32(esp, 0x003E2DBFu); RECOMP_ABI_CALL(0x0002DDB3u, sub_0002DDB3); /* call 0x0002DDB3 */

loc_003E2DBF: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003E2DCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2DC8u); } /* indirect call */
    }

loc_003E2DCB: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2DDC; /* je: equal / zero */

loc_003E2DD3: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2DDCu); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2DDC: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2DED; /* je: equal / zero */

loc_003E2DE4: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2DEDu); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2DED: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2DFA; /* je: equal / zero */

loc_003E2DF4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E2DFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2DF8u); } /* indirect call */
    }

loc_003E2DFA: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003E2E09; /* je: equal / zero */

loc_003E2E03: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E2E09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E2E07u); } /* indirect call */
    }

loc_003E2E09: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2E30
 * Original: 0x003E2E30 - 0x003E2EA3 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2E30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2E46u); RECOMP_ABI_CALL(0x00032E53u, sub_00032E53); /* call 0x00032E53 */

loc_003E2E46: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esi + 0x10);
    PUSH32(esp, 0x003E2E51u); RECOMP_ABI_CALL(0x00027FA8u, sub_00027FA8); /* call 0x00027FA8 */

loc_003E2E51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2E77; /* je: equal / zero */

loc_003E2E55: ;
    eax = MEM32(eax + 0x10);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x003E2E6Du); RECOMP_ABI_CALL(0x0001CCA7u, sub_0001CCA7); /* call 0x0001CCA7 */

loc_003E2E6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2E77; /* je: equal / zero */

loc_003E2E71: ;
    eax = MEM32(esp + 8);
    goto loc_003E2E7A;

loc_003E2E77: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003E2E7A: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E2E9F; /* jne: not equal / not zero */

loc_003E2E82: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2E93; /* je: equal / zero */

loc_003E2E8A: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E2E93u); RECOMP_ABI_CALL(0x0002C3AAu, sub_0002C3AA); /* call 0x0002C3AA */

loc_003E2E93: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = ecx;

loc_003E2E9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E2EC0
 * Original: 0x003E2EC0 - 0x003E2EDE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E2EC8u); RECOMP_ABI_CALL(0x000184CCu, sub_000184CC); /* call 0x000184CC */

loc_003E2EC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E2ED8; /* je: equal / zero */

loc_003E2ECF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E2ED5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E2ED5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E2ED8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2EF0
 * Original: 0x003E2EF0 - 0x003E2F07 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E2EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2EF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E2F02; /* jae: above or equal (unsigned >=) */

loc_003E2EF9: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

loc_003E2F02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2F10
 * Original: 0x003E2F10 - 0x003E2F41 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2F10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x24);
    edx = MEM32(ecx + 0x2C);
    MEM32(esp) = eax;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(edx + eax * 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(ecx + 0x38);
    MEM32(esp + 4) = edx;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x003E2F3Du); RECOMP_ABI_CALL(0x000213A1u, sub_000213A1); /* call 0x000213A1 */

loc_003E2F3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E2F50
 * Original: 0x003E2F50 - 0x003E2FC1 (113 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E2F50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003E2FA5; /* jbe: below or equal (unsigned <=) */

loc_003E2F62: ;
    ebp = MEM32(ecx + 8);

loc_003E2F65: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2F9D; /* je: equal / zero */

loc_003E2F6C: ;
    esi = MEM32(esp + 0x18);

loc_003E2F70: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003E2F94; /* jne: not equal / not zero */

loc_003E2F78: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2F90; /* je: equal / zero */

loc_003E2F7C: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003E2F94; /* jne: not equal / not zero */

loc_003E2F86: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003E2F70; /* jne: not equal / not zero */

loc_003E2F90: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003E2F99;

loc_003E2F94: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_003E2F99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003E2FAF; /* je: equal / zero */

loc_003E2F9D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003E2F65; /* jb: below (unsigned <) */

loc_003E2FA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003E2FAF: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x1C);
    eax = MEM32(eax + edi * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E2FE0
 * Original: 0x003E2FE0 - 0x003E3013 (51 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E2FE0: ;
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E2FFD; /* jbe: below or equal (unsigned <=) */

loc_003E2FEA: ;
    ecx = MEM32(ecx + 0x1C);
    esi = MEM32(esp + 8);

loc_003E2FF1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3003; /* je: equal / zero */

loc_003E2FF5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E2FF1; /* jb: below (unsigned <) */

loc_003E2FFD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003E3003: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E300D; /* je: equal / zero */

loc_003E300B: ;
    MEM32(ecx) = eax;

loc_003E300D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E3020
 * Original: 0x003E3020 - 0x003E3071 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3020: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x835EF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E303Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E303B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E3043u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003E3043: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003E3051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E304Eu); } /* indirect call */
    }

loc_003E3051: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E3069; /* jne: not equal / not zero */

loc_003E3055: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003E3069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3066u); } /* indirect call */
    }

loc_003E3069: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E3090
 * Original: 0x003E3090 - 0x003E30D5 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3090: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x835EF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E30ABu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E30AB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E30B3u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003E30B3: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003E30C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E30BEu); } /* indirect call */
    }

loc_003E30C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E30CD; /* je: equal / zero */

loc_003E30C5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003E30CDu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_003E30CD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E30F0
 * Original: 0x003E30F0 - 0x003E334E (606 bytes, 191 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E30F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E30F0: ;
    _fb = (uint32_t)(0xC20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003E3101u); RECOMP_ABI_CALL(0x000240A6u, sub_000240A6); /* call 0x000240A6 */

loc_003E3101: ;
    eax = MEM32(esp + 0xC34);
    ecx = MEM32(esp + 0xC3C);
    ebx = MEM32(esp + 0xC38);
    edx = MEM32(esp + 0xC48);
    ebp = MEM32(esp + 0xC4C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC40);
    MEM32(esi + 8) = ecx;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x835F48;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = ebp;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0x003E3165u); RECOMP_ABI_CALL(0x000173ECu, sub_000173EC); /* call 0x000173EC */

loc_003E3165: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E318E; /* jbe: below or equal (unsigned <=) */

loc_003E3169: ;
    /* nop */

loc_003E3170: ;
    ecx = MEM32(esp + 0xC34);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E3186u); RECOMP_ABI_CALL(0x00014A48u, sub_00014A48); /* call 0x00014A48 */

loc_003E3186: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E3170; /* jb: below (unsigned <) */

loc_003E318E: ;
    ecx = MEM32(0x907288);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x835F2C);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003E31A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E319Du); } /* indirect call */
    }

loc_003E31A0: ;
    ecx = MEM32(esp + 0xC44);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x835F20);
    PUSH32(esp, edx);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x003E31BAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E31BA: ;
    ecx = MEM32(0x907288);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003E31CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E31CCu); } /* indirect call */
    }

loc_003E31CF: ;
    edi = ebp * 4;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x003E31E1u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E31E1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x003E31ECu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E31EC: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E330E; /* jbe: below or equal (unsigned <=) */

loc_003E31FF: ;
    /* nop */

loc_003E3200: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, 0x835F10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3210u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E3210: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, 0x835F20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E3224u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E3224: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x44C;
    PUSH32(esp, 0x835EF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E323Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E323B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E3243u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003E3243: ;
    edi = eax;
    edx = MEM32(edi);
    eax = esp + 0x430;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003E3254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3251u); } /* indirect call */
    }

loc_003E3254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E326F; /* jne: not equal / not zero */

loc_003E3258: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x43C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003E326Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E326Cu); } /* indirect call */
    }

loc_003E326F: ;
    ecx = MEM32(0x907288);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003E3281u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E327Eu); } /* indirect call */
    }

loc_003E3281: ;
    ecx = MEM32(esi + 0x28);
    MEM32(ecx + ebx * 4) = eax;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x835F00);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E329Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E329F: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x844;
    PUSH32(esp, 0x835EF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E32B6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E32B6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E32BEu); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003E32BE: ;
    edi = eax;
    edx = MEM32(edi);
    eax = esp + 0x830;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003E32CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E32CCu); } /* indirect call */
    }

loc_003E32CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E32EA; /* jne: not equal / not zero */

loc_003E32D3: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x83C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003E32EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E32E7u); } /* indirect call */
    }

loc_003E32EA: ;
    ecx = MEM32(0x907288);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003E32FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E32F9u); } /* indirect call */
    }

loc_003E32FC: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + ebx * 4) = eax;
    eax = MEM32(esi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E3200; /* jb: below (unsigned <) */

loc_003E330E: ;
    edi = MEM32(esp + 0xC40);
    edx = edi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E3324u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E3324: ;
    MEM32(esi + 0x1C) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E333F; /* jbe: below or equal (unsigned <=) */

loc_003E3330: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E3330; /* jb: below (unsigned <) */

loc_003E333F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_003E33F0
 * Original: 0x003E33F0 - 0x003E3506 (278 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E33F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E33F0: ;
    _fb = (uint32_t)(0xC20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x835F48;
    if (CMP_BE(_fa, _fb)) goto loc_003E34D1; /* jbe: below or equal (unsigned <=) */

loc_003E340D: ;
    PUSH32(esp, esi);
    edi = edi;

loc_003E3410: ;
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, 0x835F10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3420u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E3420: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, 0x835F20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E3434u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E3434: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x448;
    PUSH32(esp, 0x835EF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E344Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E344B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E3453u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003E3453: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 0x42C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003E3464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3461u); } /* indirect call */
    }

loc_003E3464: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3470; /* je: equal / zero */

loc_003E3468: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003E3470u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_003E3470: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, 0x835F00);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3488u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E3488: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x840;
    PUSH32(esp, 0x835EF4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E349Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003E349F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E34A7u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003E34A7: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0x82C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003E34B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E34B5u); } /* indirect call */
    }

loc_003E34B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E34C4; /* je: equal / zero */

loc_003E34BC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003E34C4u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_003E34C4: ;
    eax = MEM32(edi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E3410; /* jb: below (unsigned <) */

loc_003E34D0: ;
    POP32(esp, esi);

loc_003E34D1: ;
    edx = MEM32(edi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E34DAu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E34DA: ;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E34E3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E34E3: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E34ECu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E34EC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x003E34F6u); RECOMP_ABI_CALL(0x0001F6C3u, sub_0001F6C3); /* call 0x0001F6C3 */

loc_003E34F6: ;
    ecx = edi;
    PUSH32(esp, 0x003E34FDu); RECOMP_ABI_CALL(0x00035743u, sub_00035743); /* call 0x00035743 */

loc_003E34FD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E3550
 * Original: 0x003E3550 - 0x003E356E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3550: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E3558u); RECOMP_ABI_CALL(0x0001740Au, sub_0001740A); /* call 0x0001740A */

loc_003E3558: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E3568; /* je: equal / zero */

loc_003E355F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E3565u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003E3565: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E3568: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E3580
 * Original: 0x003E3580 - 0x003E363C (188 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3580: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x003E3592u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003E3592: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x80);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x003E35A3u); RECOMP_ABI_CALL(0x00017BB7u, sub_00017BB7); /* call 0x00017BB7 */

loc_003E35A3: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003E35ACu); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003E35AC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003E35B8u); RECOMP_ABI_CALL(0x00017BB7u, sub_00017BB7); /* call 0x00017BB7 */

loc_003E35B8: ;
    ebx = MEM32(esp + 0x3C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003E35CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E35C8u); } /* indirect call */
    }

loc_003E35CB: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E361D; /* jbe: below or equal (unsigned <=) */

loc_003E35D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_003E35E5; /* jae: above or equal (unsigned >=) */

loc_003E35DD: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + edi * 4);
    goto loc_003E35E7;

loc_003E35E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E35E7: ;
    edx = MEM32(ebx);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003E35F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E35F6u); } /* indirect call */
    }

loc_003E35F9: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    ecx = MEM32(esi + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_003E3612; /* jne: not equal / not zero */

loc_003E3603: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = ebp;
    eax = MEM32(edx);
    MEM32(ecx + edi * 4) = eax;
    goto loc_003E3615;

loc_003E3612: ;
    MEM32(ecx + edi * 4) = ebp;

loc_003E3615: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E35D4; /* jb: below (unsigned <) */

loc_003E361D: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x38) = ebx;
    PUSH32(esp, 0x003E3629u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003E3629: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x003E3632u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003E3632: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E3670
 * Original: 0x003E3670 - 0x003E367A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3670(void)
{

loc_003E3670: ;
    eax = MEM32(esp + 4);
    MEM32(0x907224) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3680
 * Original: 0x003E3680 - 0x003E3685 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3680(void)
{

loc_003E3680: ;
    MEM8(ecx + 0x24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3690
 * Original: 0x003E3690 - 0x003E369B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3690: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00015FE7(); return; /* tail jmp 0x00015FE7 */

}

/**
 * sub_003E36A0
 * Original: 0x003E36A0 - 0x003E36AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E36A0(void)
{

loc_003E36A0: ;
    eax = MEM32(esp + 4);
    MEM32(0x909328) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003E36B0
 * Original: 0x003E36B0 - 0x003E36E0 (48 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E36B0(void)
{

loc_003E36B0: ;
    eax = ecx;
    ecx = 0xA;
    MEM32(eax) = 3;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x40;
    MEM32(eax + 0xC) = 0x80;
    MEM32(eax + 0x10) = 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003E36F0
 * Original: 0x003E36F0 - 0x003E36F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E36F0(void)
{

loc_003E36F0: ;
    eax = MEM32(0x907C9C);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3700
 * Original: 0x003E3700 - 0x003E3817 (279 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3700: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    ecx = 7;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x1C) = esi;
    MEM32(ebx + 0x20) = esi;
    MEM32(ebx + 0x24) = esi;
    MEM32(ebx + 0x28) = esi;
    MEM32(ebx + 0x2C) = esi;
    MEM32(ebx + 0x30) = esi;
    eax = MEM32(eax + 0x18);
    MEM32(ebx + 0x34) = eax;
    MEM32(ebx + 0x38) = esi;
    MEM32(ebx + 0x3C) = esi;
    MEM32(ebx + 0x40) = esi;
    ecx = MEM32(0x909394);
    edx = MEM32(ecx + 8);
    MEM32(ebx + 0x44) = edx;
    MEM32(0x907224) = eax;
    PUSH32(esp, 0x003E374Fu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003E374F: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E3762u); RECOMP_ABI_CALL(0x0002CEC2u, sub_0002CEC2); /* call 0x0002CEC2 */

loc_003E3762: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8333E0);
    PUSH32(esp, 0x003E376Du); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E376D: ;
    ecx = eax;
    PUSH32(esp, 0x003E3774u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_003E3774: ;
    edx = MEM32(ebx + 0x44);
    PUSH32(esp, 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x700);
    PUSH32(esp, 0x8333E0);
    ebp = eax;
    PUSH32(esp, 0x003E378Du); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E378D: ;
    ecx = eax;
    PUSH32(esp, 0x003E3794u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_003E3794: ;
    edi = eax;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E37A2u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003E37A2: ;
    ecx = eax;
    PUSH32(esp, 0x003E37A9u); RECOMP_ABI_CALL(0x00577044u, sub_00577044); /* call 0x00577044 */

loc_003E37A9: ;
    ecx = MEM32(ebx + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E37B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E37AFu); } /* indirect call */
    }

loc_003E37B2: ;
    eax = MEM32(ebx + 0x14);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x003E37C3u); RECOMP_ABI_CALL(0x0057CD00u, sub_0057CD00); /* call 0x0057CD00 */

loc_003E37C3: ;
    ecx = eax;
    PUSH32(esp, 0x003E37CAu); RECOMP_ABI_CALL(0x0057CD28u, sub_0057CD28); /* call 0x0057CD28 */

loc_003E37CA: ;
    edx = MEM32(ebx + 0x44);
    MEM32(0x909328) = edx;
    eax = MEM32(ebx + 4);
    edi = eax * 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E37E4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E37E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebx + 0x20) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E37EFu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_003E37EF: ;
    eax = MEM32(ebx);
    edi = eax * 4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E37FFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E37FF: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(ebx + 0x1C) = eax;
    PUSH32(esp, 0x003E380Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_003E380A: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E3860
 * Original: 0x003E3860 - 0x003E38A9 (73 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3860: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E38A4; /* jae: above or equal (unsigned >=) */

loc_003E386E: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E38A4; /* je: equal / zero */

loc_003E3878: ;
    PUSH32(esp, 0x003E387Du); RECOMP_ABI_CALL(0x00023C8Cu, sub_00023C8C); /* call 0x00023C8C */

loc_003E387D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3883u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E3883: ;
    ecx = eax;
    PUSH32(esp, 0x003E388Au); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_003E388A: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E389A; /* je: equal / zero */

loc_003E3894: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E389Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3898u); } /* indirect call */
    }

loc_003E389A: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + edi * 4) = 0;

loc_003E38A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E38C0
 * Original: 0x003E38C0 - 0x003E3910 (80 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E38C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E38C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E390D; /* jbe: below or equal (unsigned <=) */

loc_003E38CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E3906; /* jae: above or equal (unsigned >=) */

loc_003E38D0: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3906; /* je: equal / zero */

loc_003E38DA: ;
    PUSH32(esp, 0x003E38DFu); RECOMP_ABI_CALL(0x00023C8Cu, sub_00023C8C); /* call 0x00023C8C */

loc_003E38DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E38E5u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E38E5: ;
    ecx = eax;
    PUSH32(esp, 0x003E38ECu); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_003E38EC: ;
    ecx = MEM32(edi + 0x1C);
    ecx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E38FC; /* je: equal / zero */

loc_003E38F6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E38FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E38FAu); } /* indirect call */
    }

loc_003E38FC: ;
    eax = MEM32(edi + 0x1C);
    MEM32(eax + esi * 4) = 0;

loc_003E3906: ;
    eax = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E38D0; /* jb: below (unsigned <) */

loc_003E390D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3930
 * Original: 0x003E3930 - 0x003E3953 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3930: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E3950; /* jae: above or equal (unsigned >=) */

loc_003E3938: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3950; /* je: equal / zero */

loc_003E3942: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E3950u); RECOMP_ABI_CALL(0x00015FE7u, sub_00015FE7); /* call 0x00015FE7 */

loc_003E3950: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E3960
 * Original: 0x003E3960 - 0x003E3992 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3960: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E398F; /* jbe: below or equal (unsigned <=) */

loc_003E396C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E3988; /* jae: above or equal (unsigned >=) */

loc_003E3970: ;
    eax = MEM32(edi + 0x1C);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3988; /* je: equal / zero */

loc_003E397A: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E3988u); RECOMP_ABI_CALL(0x00015FE7u, sub_00015FE7); /* call 0x00015FE7 */

loc_003E3988: ;
    eax = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E3970; /* jb: below (unsigned <) */

loc_003E398F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E39A0
 * Original: 0x003E39A0 - 0x003E39C5 (37 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E39A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E39A0: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E39BC; /* jbe: below or equal (unsigned <=) */

loc_003E39A9: ;
    ecx = MEM32(ecx + 0x1C);
    esi = MEM32(esp + 8);

loc_003E39B0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E39C1; /* je: equal / zero */

loc_003E39B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E39B0; /* jb: below (unsigned <) */

loc_003E39BC: ;
    eax = 0x1869F;

loc_003E39C1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E39D0
 * Original: 0x003E39D0 - 0x003E3A46 (118 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E39D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E39D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E3A41; /* jae: above or equal (unsigned >=) */

loc_003E39DF: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + edi * 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3A41; /* je: equal / zero */

loc_003E39E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E39EFu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E39EF: ;
    ecx = eax;
    PUSH32(esp, 0x003E39F6u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_003E39F6: ;
    ecx = MEM32(esi + 0x20);
    eax = ecx + edi * 8;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E3A14; /* jne: not equal / not zero */

loc_003E3A02: ;
    edx = MEM32(eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3A0Du); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E3A0D: ;
    ecx = eax;
    PUSH32(esp, 0x003E3A14u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_003E3A14: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003E3A1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3A1Cu); } /* indirect call */
    }

loc_003E3A1F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3A2F; /* je: equal / zero */

loc_003E3A29: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E3A2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3A2Du); } /* indirect call */
    }

loc_003E3A2F: ;
    eax = MEM32(esi + 0x20);
    MEM32(eax + edi * 8) = 0;
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + edi * 8 + 4) = 0;

loc_003E3A41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E3A70
 * Original: 0x003E3A70 - 0x003E3A75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3A70: ;
    g_seh_ebp = ebp; sub_000205A0(); return; /* tail jmp 0x000205A0 */

}

/**
 * sub_003E3A80
 * Original: 0x003E3A80 - 0x003E3AA3 (35 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3A80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E3AA0; /* jbe: below or equal (unsigned <=) */

loc_003E3A8D: ;
    /* nop */

loc_003E3A90: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E3A98u); RECOMP_ABI_CALL(0x000205A0u, sub_000205A0); /* call 0x000205A0 */

loc_003E3A98: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E3A90; /* jb: below (unsigned <) */

loc_003E3AA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3AB0
 * Original: 0x003E3AB0 - 0x003E3AD3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3AB0: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E3ACD; /* jbe: below or equal (unsigned <=) */

loc_003E3AB9: ;
    ecx = MEM32(ecx + 0x20);
    /* nop */

loc_003E3AC0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3AD2; /* je: equal / zero */

loc_003E3AC5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E3AC0; /* jb: below (unsigned <) */

loc_003E3ACD: ;
    eax = 0x1869F;

loc_003E3AD2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3AE0
 * Original: 0x003E3AE0 - 0x003E3B15 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3AF3; /* je: equal / zero */

loc_003E3AEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3AF0u); RECOMP_ABI_CALL(0x00020A9Bu, sub_00020A9B); /* call 0x00020A9B */

loc_003E3AF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E3AF3: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3B03; /* je: equal / zero */

loc_003E3AFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3B00u); RECOMP_ABI_CALL(0x00020A9Bu, sub_00020A9B); /* call 0x00020A9B */

loc_003E3B00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E3B03: ;
    esi = MEM32(esi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3B13; /* je: equal / zero */

loc_003E3B0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E3B10u); RECOMP_ABI_CALL(0x00020A9Bu, sub_00020A9B); /* call 0x00020A9B */

loc_003E3B10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E3B13: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3B30
 * Original: 0x003E3B30 - 0x003E3BBC (140 bytes, 59 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E3BB4; /* je: equal / zero */

loc_003E3B3C: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E3BB4; /* jne: not equal / not zero */

loc_003E3B43: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3BAB; /* je: equal / zero */

loc_003E3B4C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E3BA1; /* jle: less or equal (signed <=) */

loc_003E3B55: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x003E3B63u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003E3B63: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3B73; /* je: equal / zero */

loc_003E3B6A: ;
    ecx = eax;
    PUSH32(esp, 0x003E3B71u); RECOMP_ABI_CALL(0x0001C351u, sub_0001C351); /* call 0x0001C351 */

loc_003E3B71: ;
    goto loc_003E3B75;

loc_003E3B73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E3B75: ;
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x003E3B80u); RECOMP_ABI_CALL(0x00017176u, sub_00017176); /* call 0x00017176 */

loc_003E3B80: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3B89u); RECOMP_ABI_CALL(0x00020DB1u, sub_00020DB1); /* call 0x00020DB1 */

loc_003E3B89: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003E3B96u); RECOMP_ABI_CALL(0x000369C7u, sub_000369C7); /* call 0x000369C7 */

loc_003E3B96: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003E3BA1u); RECOMP_ABI_CALL(0x00021608u, sub_00021608); /* call 0x00021608 */

loc_003E3BA1: ;
    eax = MEM32(esi + 0x28);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_003E3BAB: ;
    eax = MEM32(esi + 0x28);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_003E3BB4: ;
    eax = MEM32(esi + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E3BE0
 * Original: 0x003E3BE0 - 0x003E3C96 (182 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E3BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3BE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E3C8E; /* je: equal / zero */

loc_003E3BF0: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E3C8E; /* jne: not equal / not zero */

loc_003E3BFB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E3C09u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E3C09: ;
    ecx = eax;
    PUSH32(esp, 0x003E3C10u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_003E3C10: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x700);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E3C27u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E3C27: ;
    ecx = eax;
    PUSH32(esp, 0x003E3C2Eu); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_003E3C2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003E3C84; /* je: equal / zero */

loc_003E3C35: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E3C84; /* jbe: below or equal (unsigned <=) */

loc_003E3C39: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x003E3C47u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003E3C47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3C57; /* je: equal / zero */

loc_003E3C4E: ;
    ecx = eax;
    PUSH32(esp, 0x003E3C55u); RECOMP_ABI_CALL(0x0001C351u, sub_0001C351); /* call 0x0001C351 */

loc_003E3C55: ;
    goto loc_003E3C59;

loc_003E3C57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E3C59: ;
    PUSH32(esp, ebp);
    ecx = eax;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x003E3C64u); RECOMP_ABI_CALL(0x00017176u, sub_00017176); /* call 0x00017176 */

loc_003E3C64: ;
    ecx = MEM32(esi + 0x2C);
    MEM8(ecx + 0x24) = 1;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E3C74u); RECOMP_ABI_CALL(0x00020DB1u, sub_00020DB1); /* call 0x00020DB1 */

loc_003E3C74: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3C84u); RECOMP_ABI_CALL(0x000369C7u, sub_000369C7); /* call 0x000369C7 */

loc_003E3C84: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003E3C8E: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E3CD0
 * Original: 0x003E3CD0 - 0x003E3D7F (175 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E3CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3CD0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E3D77; /* je: equal / zero */

loc_003E3CE0: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E3D77; /* jne: not equal / not zero */

loc_003E3CEB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E3CF9u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E3CF9: ;
    ecx = eax;
    PUSH32(esp, 0x003E3D00u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_003E3D00: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x700);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E3D17u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E3D17: ;
    ecx = eax;
    PUSH32(esp, 0x003E3D1Eu); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_003E3D1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003E3D6D; /* je: equal / zero */

loc_003E3D25: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E3D6D; /* jbe: below or equal (unsigned <=) */

loc_003E3D29: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x003E3D37u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003E3D37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3D47; /* je: equal / zero */

loc_003E3D3E: ;
    ecx = eax;
    PUSH32(esp, 0x003E3D45u); RECOMP_ABI_CALL(0x0001C351u, sub_0001C351); /* call 0x0001C351 */

loc_003E3D45: ;
    goto loc_003E3D49;

loc_003E3D47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E3D49: ;
    PUSH32(esp, ebp);
    ecx = eax;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x003E3D54u); RECOMP_ABI_CALL(0x00017176u, sub_00017176); /* call 0x00017176 */

loc_003E3D54: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E3D5Du); RECOMP_ABI_CALL(0x00020DB1u, sub_00020DB1); /* call 0x00020DB1 */

loc_003E3D5D: ;
    edx = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E3D6Du); RECOMP_ABI_CALL(0x000369C7u, sub_000369C7); /* call 0x000369C7 */

loc_003E3D6D: ;
    eax = MEM32(esi + 0x30);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003E3D77: ;
    eax = MEM32(esi + 0x30);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E3DB0
 * Original: 0x003E3DB0 - 0x003E3DFA (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3DCA; /* je: equal / zero */

loc_003E3DBA: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E3DC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3DC0u); } /* indirect call */
    }

loc_003E3DC3: ;
    MEM32(esi + 0x38) = 0;

loc_003E3DCA: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3DE1; /* je: equal / zero */

loc_003E3DD1: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E3DDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3DD7u); } /* indirect call */
    }

loc_003E3DDA: ;
    MEM32(esi + 0x40) = 0;

loc_003E3DE1: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3DF8; /* je: equal / zero */

loc_003E3DE8: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E3DF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3DEEu); } /* indirect call */
    }

loc_003E3DF1: ;
    MEM32(esi + 0x3C) = 0;

loc_003E3DF8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3E10
 * Original: 0x003E3E10 - 0x003E3ED1 (193 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3E10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0xB) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E2E; /* je: equal / zero */

loc_003E3E22: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E3E2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3E28u); } /* indirect call */
    }

loc_003E3E2B: ;
    MEM32(esi + 0x38) = ebx;

loc_003E3E2E: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E41; /* je: equal / zero */

loc_003E3E35: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E3E3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3E3Bu); } /* indirect call */
    }

loc_003E3E3E: ;
    MEM32(esi + 0x40) = ebx;

loc_003E3E41: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E54; /* je: equal / zero */

loc_003E3E48: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E3E51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3E4Eu); } /* indirect call */
    }

loc_003E3E51: ;
    MEM32(esi + 0x3C) = ebx;

loc_003E3E54: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E75; /* je: equal / zero */

loc_003E3E5B: ;
    PUSH32(esp, 0x003E3E60u); RECOMP_ABI_CALL(0x00029623u, sub_00029623); /* call 0x00029623 */

loc_003E3E60: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E6D; /* je: equal / zero */

loc_003E3E67: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E3E6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3E6Bu); } /* indirect call */
    }

loc_003E3E6D: ;
    MEM32(esi + 0x28) = ebx;
    MEM8(esp + 0xB) = 1;

loc_003E3E75: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E96; /* je: equal / zero */

loc_003E3E7C: ;
    PUSH32(esp, 0x003E3E81u); RECOMP_ABI_CALL(0x00029623u, sub_00029623); /* call 0x00029623 */

loc_003E3E81: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E8E; /* je: equal / zero */

loc_003E3E88: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E3E8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3E8Cu); } /* indirect call */
    }

loc_003E3E8E: ;
    MEM32(esi + 0x2C) = ebx;
    MEM8(esp + 0xB) = 1;

loc_003E3E96: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3EBC; /* je: equal / zero */

loc_003E3E9D: ;
    PUSH32(esp, 0x003E3EA2u); RECOMP_ABI_CALL(0x00029623u, sub_00029623); /* call 0x00029623 */

loc_003E3EA2: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3EAF; /* je: equal / zero */

loc_003E3EA9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E3EAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3EADu); } /* indirect call */
    }

loc_003E3EAF: ;
    MEM32(esi + 0x30) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002A5FA(); return; /* tail jmp 0x0002A5FA */

loc_003E3EBC: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E3ECD; /* jne: not equal / not zero */

loc_003E3EC3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002A5FA(); return; /* tail jmp 0x0002A5FA */

loc_003E3ECD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3E3E
 * Original: 0x003E3E3E - 0x003E3ED1 (147 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3E3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3E3E: ;
    MEM32(esi + 0x40) = ebx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E54; /* je: equal / zero */

loc_003E3E48: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E3E51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3E4Eu); } /* indirect call */
    }

loc_003E3E51: ;
    MEM32(esi + 0x3C) = ebx;

loc_003E3E54: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E75; /* je: equal / zero */

loc_003E3E5B: ;
    PUSH32(esp, 0x003E3E60u); RECOMP_ABI_CALL(0x00029623u, sub_00029623); /* call 0x00029623 */

loc_003E3E60: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E6D; /* je: equal / zero */

loc_003E3E67: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E3E6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3E6Bu); } /* indirect call */
    }

loc_003E3E6D: ;
    MEM32(esi + 0x28) = ebx;
    MEM8(esp + 0xB) = 1;

loc_003E3E75: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E96; /* je: equal / zero */

loc_003E3E7C: ;
    PUSH32(esp, 0x003E3E81u); RECOMP_ABI_CALL(0x00029623u, sub_00029623); /* call 0x00029623 */

loc_003E3E81: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3E8E; /* je: equal / zero */

loc_003E3E88: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E3E8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3E8Cu); } /* indirect call */
    }

loc_003E3E8E: ;
    MEM32(esi + 0x2C) = ebx;
    MEM8(esp + 0xB) = 1;

loc_003E3E96: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3EBC; /* je: equal / zero */

loc_003E3E9D: ;
    PUSH32(esp, 0x003E3EA2u); RECOMP_ABI_CALL(0x00029623u, sub_00029623); /* call 0x00029623 */

loc_003E3EA2: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3EAF; /* je: equal / zero */

loc_003E3EA9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E3EAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E3EADu); } /* indirect call */
    }

loc_003E3EAF: ;
    MEM32(esi + 0x30) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002A5FA(); return; /* tail jmp 0x0002A5FA */

loc_003E3EBC: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E3ECD; /* jne: not equal / not zero */

loc_003E3EC3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002A5FA(); return; /* tail jmp 0x0002A5FA */

loc_003E3ECD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3F10
 * Original: 0x003E3F10 - 0x003E3F5A (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3F2A; /* je: equal / zero */

loc_003E3F1A: ;
    PUSH32(esp, 0x003E3F1Fu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003E3F1F: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E3F2Au); RECOMP_ABI_CALL(0x0003558Bu, sub_0003558B); /* call 0x0003558B */

loc_003E3F2A: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3F41; /* je: equal / zero */

loc_003E3F31: ;
    PUSH32(esp, 0x003E3F36u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003E3F36: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x003E3F41u); RECOMP_ABI_CALL(0x0003558Bu, sub_0003558B); /* call 0x0003558B */

loc_003E3F41: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3F58; /* je: equal / zero */

loc_003E3F48: ;
    PUSH32(esp, 0x003E3F4Du); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003E3F4D: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E3F58u); RECOMP_ABI_CALL(0x0003558Bu, sub_0003558B); /* call 0x0003558B */

loc_003E3F58: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3F70
 * Original: 0x003E3F70 - 0x003E3F9D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E3F70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x003E3F79u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E3F79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E3F92; /* je: equal / zero */

loc_003E3F80: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E3F8Cu); RECOMP_ABI_CALL(0x000243D0u, sub_000243D0); /* call 0x000243D0 */

loc_003E3F8C: ;
    MEM32(0x907C9C) = eax;
    esp += 4; return; /* ret */

loc_003E3F92: ;
    MEM32(0x907C9C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3FB0
 * Original: 0x003E3FB0 - 0x003E400D (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003E3FB9u); RECOMP_ABI_CALL(0x00018431u, sub_00018431); /* call 0x00018431 */

loc_003E3FB9: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E3FC2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E3FC2: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E3FE0; /* jbe: below or equal (unsigned <=) */

loc_003E3FCE: ;
    edi = edi;

loc_003E3FD0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003E3FD8u); RECOMP_ABI_CALL(0x000205A0u, sub_000205A0); /* call 0x000205A0 */

loc_003E3FD8: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E3FD0; /* jb: below (unsigned <) */

loc_003E3FE0: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E3FE9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E3FE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E3FF1u); RECOMP_ABI_CALL(0x0057CD00u, sub_0057CD00); /* call 0x0057CD00 */

loc_003E3FF1: ;
    ecx = eax;
    PUSH32(esp, 0x003E3FF8u); RECOMP_ABI_CALL(0x0057CDB9u, sub_0057CDB9); /* call 0x0057CDB9 */

loc_003E3FF8: ;
    ecx = esi;
    PUSH32(esp, 0x003E3FFFu); RECOMP_ABI_CALL(0x00027E18u, sub_00027E18); /* call 0x00027E18 */

loc_003E3FFF: ;
    PUSH32(esp, 0x003E4004u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003E4004: ;
    POP32(esp, edi);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00031265(); return; /* tail jmp 0x00031265 */

}

/**
 * sub_003E4030
 * Original: 0x003E4030 - 0x003E4106 (214 bytes, 85 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    edx = MEM32(ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_003E4053; /* jbe: below or equal (unsigned <=) */

loc_003E403F: ;
    ecx = MEM32(ebp + 0x1C);

loc_003E4042: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E40EA; /* je: equal / zero */

loc_003E404B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E4042; /* jb: below (unsigned <) */

loc_003E4053: ;
    MEM32(esp + 0xC) = 0x1869F;

loc_003E405B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003E4068u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E4068: ;
    ecx = eax;
    PUSH32(esp, 0x003E406Fu); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_003E406F: ;
    ecx = MEM32(ebp + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x600);
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x835FC0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003E408Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4088u); } /* indirect call */
    }

loc_003E408B: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x600);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003E40A0u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E40A0: ;
    ecx = eax;
    PUSH32(esp, 0x003E40A7u); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_003E40A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E40FF; /* je: equal / zero */

loc_003E40AE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E40FF; /* jbe: below or equal (unsigned <=) */

loc_003E40B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003E40BAu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E40BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E40F3; /* je: equal / zero */

loc_003E40C1: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x003E40D9u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_003E40D9: ;
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + ecx * 4) = eax;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_003E40EA: ;
    MEM32(esp + 0xC) = eax;
    goto loc_003E405B;

loc_003E40F3: ;
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + ecx * 4) = eax;

loc_003E40FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E4140
 * Original: 0x003E4140 - 0x003E41A7 (103 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4140: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E415F; /* jbe: below or equal (unsigned <=) */

loc_003E414C: ;
    ecx = MEM32(edi + 0x1C);
    esi = MEM32(esp + 0xC);

loc_003E4153: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E41A3; /* je: equal / zero */

loc_003E4157: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E4153; /* jb: below (unsigned <) */

loc_003E415F: ;
    esi = 0x1869F;

loc_003E4164: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E419E; /* jae: above or equal (unsigned >=) */

loc_003E4168: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E419E; /* je: equal / zero */

loc_003E4172: ;
    PUSH32(esp, 0x003E4177u); RECOMP_ABI_CALL(0x00023C8Cu, sub_00023C8C); /* call 0x00023C8C */

loc_003E4177: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E417Du); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E417D: ;
    ecx = eax;
    PUSH32(esp, 0x003E4184u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_003E4184: ;
    ecx = MEM32(edi + 0x1C);
    ecx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4194; /* je: equal / zero */

loc_003E418E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E4194u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4192u); } /* indirect call */
    }

loc_003E4194: ;
    eax = MEM32(edi + 0x1C);
    MEM32(eax + esi * 4) = 0;

loc_003E419E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E41A3: ;
    esi = eax;
    goto loc_003E4164;

}

/**
 * sub_003E41C0
 * Original: 0x003E41C0 - 0x003E424E (142 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E41C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E41C0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_003E41DE; /* jbe: below or equal (unsigned <=) */

loc_003E41CE: ;
    ecx = MEM32(ebx + 0x20);

loc_003E41D1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4217; /* je: equal / zero */

loc_003E41D6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E41D1; /* jb: below (unsigned <) */

loc_003E41DE: ;
    edi = 0x1869F;

loc_003E41E3: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4246; /* je: equal / zero */

loc_003E41EB: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E4245; /* jbe: below or equal (unsigned <=) */

loc_003E41F4: ;
    ecx = MEM32(0x909328);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003E4208u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4205u); } /* indirect call */
    }

loc_003E4208: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E421B; /* je: equal / zero */

loc_003E420C: ;
    ecx = eax;
    PUSH32(esp, 0x003E4213u); RECOMP_ABI_CALL(0x00027E22u, sub_00027E22); /* call 0x00027E22 */

loc_003E4213: ;
    esi = eax;
    goto loc_003E421D;

loc_003E4217: ;
    edi = eax;
    goto loc_003E41E3;

loc_003E421B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E421D: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E422Au); RECOMP_ABI_CALL(0x0002CDA5u, sub_0002CDA5); /* call 0x0002CDA5 */

loc_003E422A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E4230u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E4230: ;
    ecx = eax;
    PUSH32(esp, 0x003E4237u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_003E4237: ;
    edx = MEM32(ebx + 0x20);
    MEM32(edx + edi * 8) = esi;
    eax = MEM32(ebx + 0x20);
    MEM8(eax + edi * 8 + 4) = 0;

loc_003E4245: ;
    POP32(esp, ebp);

loc_003E4246: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E4280
 * Original: 0x003E4280 - 0x003E42E9 (105 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x003E4292u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E4292: ;
    ecx = eax;
    PUSH32(esp, 0x003E4299u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_003E4299: ;
    ecx = MEM32(esi + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x600);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0x835FC0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003E42B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E42B2u); } /* indirect call */
    }

loc_003E42B5: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x600);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003E42CAu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E42CA: ;
    ecx = eax;
    PUSH32(esp, 0x003E42D1u); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_003E42D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003E42DAu); RECOMP_ABI_CALL(0x000257D5u, sub_000257D5); /* call 0x000257D5 */

loc_003E42DA: ;
    ecx = MEM32(esi + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx + eax * 8 + 4) = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4310
 * Original: 0x003E4310 - 0x003E436D (93 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E4310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4310: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E4365; /* je: equal / zero */

loc_003E431C: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E4365; /* jne: not equal / not zero */

loc_003E4323: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E4331u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E4331: ;
    ecx = eax;
    PUSH32(esp, 0x003E4338u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_003E4338: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x700);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E434Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E434F: ;
    ecx = eax;
    PUSH32(esp, 0x003E4356u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_003E4356: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x003E4363u); RECOMP_ABI_CALL(0x00016361u, sub_00016361); /* call 0x00016361 */

loc_003E4363: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003E4365: ;
    eax = MEM32(esi + 0x28);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E433C
 * Original: 0x003E433C - 0x003E436D (49 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E433C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E433C: ;
    ebx = eax;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x700);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E434Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003E434F: ;
    ecx = eax;
    PUSH32(esp, 0x003E4356u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_003E4356: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x003E4363u); RECOMP_ABI_CALL(0x00016361u, sub_00016361); /* call 0x00016361 */

loc_003E4363: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = MEM32(esi + 0x28);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E4390
 * Original: 0x003E4390 - 0x003E43AE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E4398u); RECOMP_ABI_CALL(0x0001A4D4u, sub_0001A4D4); /* call 0x0001A4D4 */

loc_003E4398: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E43A8; /* je: equal / zero */

loc_003E439F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E43A5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E43A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E43A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E43C0
 * Original: 0x003E43C0 - 0x003E43E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E43C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E43C0: ;
    ecx = MEM32(0x907C9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E43DB; /* je: equal / zero */

loc_003E43CD: ;
    PUSH32(esp, 0x003E43D2u); RECOMP_ABI_CALL(0x0001A4D4u, sub_0001A4D4); /* call 0x0001A4D4 */

loc_003E43D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E43D8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E43D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E43DB: ;
    MEM32(0x907C9C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E43F0
 * Original: 0x003E43F0 - 0x003E43F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E43F0(void)
{

loc_003E43F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E4400
 * Original: 0x003E4400 - 0x003E4411 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4400: ;
    ecx = MEM32(0x907CA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4410; /* je: equal / zero */

loc_003E440A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E4410u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E440Eu); } /* indirect call */
    }

loc_003E4410: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4420
 * Original: 0x003E4420 - 0x003E4426 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4420(void)
{

loc_003E4420: ;
    eax = MEM32(0x907CA8);
    esp += 4; return; /* ret */

}

/**
 * sub_003E4430
 * Original: 0x003E4430 - 0x003E4437 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4430: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_003E4440
 * Original: 0x003E4440 - 0x003E4448 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4440: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_003E4450
 * Original: 0x003E4450 - 0x003E4458 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4450: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_003E4460
 * Original: 0x003E4460 - 0x003E4468 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4460: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_003E4470
 * Original: 0x003E4470 - 0x003E4478 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4470: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_003E4480
 * Original: 0x003E4480 - 0x003E44A8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4480: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E44A6; /* je: equal / zero */

loc_003E448A: ;
    PUSH32(esp, 0x003E448Fu); RECOMP_ABI_CALL(0x005893CEu, sub_005893CE); /* call 0x005893CE */

loc_003E448F: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E44A3u); RECOMP_ABI_CALL(0x005894ADu, sub_005894AD); /* call 0x005894AD */

loc_003E44A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E44A6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E44C0
 * Original: 0x003E44C0 - 0x003E44C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E44C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E44C0: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_003E44D0
 * Original: 0x003E44D0 - 0x003E44EE (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E44D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E44D0: ;
    SET_LO8(eax, MEM8(ecx + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E44E9; /* je: equal / zero */

loc_003E44D7: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(edx + eax * 4) = esi;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_003E44E9: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4500
 * Original: 0x003E4500 - 0x003E4525 (37 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4500: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4523; /* je: equal / zero */

loc_003E450A: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E4522; /* jbe: below or equal (unsigned <=) */

loc_003E4514: ;
    eax = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + esi * 4); PUSH32(esp, 0x003E451Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4517u); } /* indirect call */
    }

loc_003E451A: ;
    eax = MEM32(edi + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E4514; /* jb: below (unsigned <) */

loc_003E4522: ;
    POP32(esp, esi);

loc_003E4523: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E4530
 * Original: 0x003E4530 - 0x003E453D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4530: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4540
 * Original: 0x003E4540 - 0x003E4569 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003E4540: ;
    SET_LO8(eax, MEM8(0x907CA0));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E4560u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E4560: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x907CA4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4580
 * Original: 0x003E4580 - 0x003E45BB (59 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4580: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E4540);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(0x907CA0) = LO8(eax);
    PUSH32(esp, 0x003E45A2u); RECOMP_ABI_CALL(0x00585E11u, sub_00585E11); /* call 0x00585E11 */

loc_003E45A2: ;
    ecx = MEM32(0x907CA4);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E45D0
 * Original: 0x003E45D0 - 0x003E45F5 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E45D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E45D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E45F3; /* je: equal / zero */

loc_003E45D8: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E45E1u); RECOMP_ABI_CALL(0x0058731Cu, sub_0058731C); /* call 0x0058731C */

loc_003E45E1: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi) = 0;
    PUSH32(esp, 0x003E45F0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E45F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E45F3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E4600
 * Original: 0x003E4600 - 0x003E469B (155 bytes, 58 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4600: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E4616; /* jne: not equal / not zero */

loc_003E460D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_003E4616: ;
    edx = MEM32(edi + 0x2C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003E4694; /* jbe: below or equal (unsigned <=) */

loc_003E4625: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, esi);

loc_003E4634: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E4691; /* jne: not equal / not zero */

loc_003E4638: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(esp + 0x10);
    esi = ecx + edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E4676; /* jne: not equal / not zero */

loc_003E4647: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3E4540);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(0x907CA0) = LO8(ebx);
    PUSH32(esp, 0x003E4663u); RECOMP_ABI_CALL(0x00585E11u, sub_00585E11); /* call 0x00585E11 */

loc_003E4663: ;
    edx = MEM32(0x907CA4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebp;
    MEM32(esi + 4) = edx;
    SET_LO8(eax, 1);

loc_003E4676: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    edx = MEM32(edi + 0x2C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = esi;
    if (CMP_B(_fa, _fb)) goto loc_003E4634; /* jb: below (unsigned <) */

loc_003E4691: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E4694: ;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E46D0
 * Original: 0x003E46D0 - 0x003E4731 (97 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E46D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E46D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E472D; /* je: equal / zero */

loc_003E46DA: ;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E472C; /* jbe: below or equal (unsigned <=) */

loc_003E46E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003E46F0;

    /* nop */

loc_003E46F0: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esp + 0x14);
    esi = ebx + eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E471F; /* jne: not equal / not zero */

loc_003E4700: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E471F; /* je: equal / zero */

loc_003E4704: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E470Du); RECOMP_ABI_CALL(0x0058731Cu, sub_0058731C); /* call 0x0058731C */

loc_003E470D: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x003E471Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E471C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E471F: ;
    eax = MEM32(edi + 0x2C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E46F0; /* jb: below (unsigned <) */

loc_003E472A: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003E472C: ;
    POP32(esp, ebp);

loc_003E472D: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4750
 * Original: 0x003E4750 - 0x003E479F (79 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4750: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E479D; /* je: equal / zero */

loc_003E475A: ;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E479C; /* jbe: below or equal (unsigned <=) */

loc_003E4764: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E4768: ;
    esi = MEM32(edi + 8);
    eax = MEM32(esi + ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E478F; /* je: equal / zero */

loc_003E4774: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E477Du); RECOMP_ABI_CALL(0x0058731Cu, sub_0058731C); /* call 0x0058731C */

loc_003E477D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi) = 0;
    PUSH32(esp, 0x003E478Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E478C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E478F: ;
    eax = MEM32(edi + 0x2C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E4768; /* jb: below (unsigned <) */

loc_003E479A: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003E479C: ;
    POP32(esp, ebp);

loc_003E479D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E47C0
 * Original: 0x003E47C0 - 0x003E47E5 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E47C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E47C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E47E3; /* je: equal / zero */

loc_003E47C8: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E47D1u); RECOMP_ABI_CALL(0x0058731Cu, sub_0058731C); /* call 0x0058731C */

loc_003E47D1: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi) = 0;
    PUSH32(esp, 0x003E47E0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E47E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E47E3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E47F0
 * Original: 0x003E47F0 - 0x003E4805 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E47F0(void)
{

loc_003E47F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E47FFu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003E47FF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4810
 * Original: 0x003E4810 - 0x003E49DC (460 bytes, 151 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp) = 0x835FF0;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0xC) = edi;
    PUSH32(esp, 0x003E4837u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E4837: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4856; /* je: equal / zero */

loc_003E483E: ;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x835FE0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E4854u); RECOMP_ABI_CALL(0x000355E5u, sub_000355E5); /* call 0x000355E5 */

loc_003E4854: ;
    goto loc_003E4858;

loc_003E4856: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E4858: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(ebp + 0x10) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x835FC8);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = ebp + 0x1C;
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, esi);
    MEM32(ebp + 0x14) = edi;
    MEM32(ebp + 0x18) = edi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003E4899u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003E4899: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ebp + 0x20) = edi;
    edi = ebp + 0x24;
    ecx = 0xA;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0x14) = ecx;
    eax = 1;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0x32000;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = 0x20000;
    MEM8(edi + 0x18) = LO8(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003E48E6u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003E48E6: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E48EFu); RECOMP_ABI_CALL(0x0059655Au, sub_0059655A); /* call 0x0059655A */

loc_003E48EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E48F7u); RECOMP_ABI_CALL(0x00596FD8u, sub_00596FD8); /* call 0x00596FD8 */

loc_003E48F7: ;
    SET_LO8(eax, MEM8(ebx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E49D2; /* je: equal / zero */

loc_003E4902: ;
    ecx = 7;
    esi = ebx;
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
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003E491Au); RECOMP_ABI_CALL(0x00589D5Cu, sub_00589D5C); /* call 0x00589D5C */

loc_003E491A: ;
    PUSH32(esp, 0x003E491Fu); RECOMP_ABI_CALL(0x00589EA2u, sub_00589EA2); /* call 0x00589EA2 */

loc_003E491F: ;
    PUSH32(esp, 0x003E4924u); RECOMP_ABI_CALL(0x00589E7Du, sub_00589E7D); /* call 0x00589E7D */

loc_003E4924: ;
    PUSH32(esp, 0x90602);
    PUSH32(esp, 0x003E492Eu); RECOMP_ABI_CALL(0x00589BD7u, sub_00589BD7); /* call 0x00589BD7 */

loc_003E492E: ;
    eax = MEM32(ebx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x10));
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E4940u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E4940: ;
    MEM32(ebp + 0xC) = eax;
    edx = MEM32(ebx + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebx + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E4953u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_003E4953: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E4967u); RECOMP_ABI_CALL(0x005894ADu, sub_005894AD); /* call 0x005894AD */

loc_003E4967: ;
    esi = MEM32(ebx + 8);
    eax = esi + esi * 2;
    ecx = eax * 4 + 4;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E497Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E497F: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E499D; /* je: equal / zero */

loc_003E4986: ;
    PUSH32(esp, 0x31E4F);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x003E4999u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_003E4999: ;
    eax = edi;
    goto loc_003E499F;

loc_003E499D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E499F: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebx + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E49B0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E49B0: ;
    MEM32(ebp + 0x18) = eax;
    ecx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E49D2; /* jbe: below or equal (unsigned <=) */

loc_003E49BF: ;
    /* nop */

loc_003E49C0: ;
    edx = MEM32(ebp + 0x18);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(ebx + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E49C0; /* jb: below (unsigned <) */

loc_003E49D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E483C
 * Original: 0x003E483C - 0x003E49DC (416 bytes, 133 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E483C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E483C: ;
    if (_flags /* je: equal / zero */) goto loc_003E4856;

loc_003E483E: ;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x835FE0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E4854u); RECOMP_ABI_CALL(0x000355E5u, sub_000355E5); /* call 0x000355E5 */

loc_003E4854: ;
    goto loc_003E4858;

loc_003E4856: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E4858: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(ebp + 0x10) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x835FC8);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = ebp + 0x1C;
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, esi);
    MEM32(ebp + 0x14) = edi;
    MEM32(ebp + 0x18) = edi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003E4899u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003E4899: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ebp + 0x20) = edi;
    edi = ebp + 0x24;
    ecx = 0xA;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0x14) = ecx;
    eax = 1;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0x32000;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = 0x20000;
    MEM8(edi + 0x18) = LO8(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003E48E6u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003E48E6: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E48EFu); RECOMP_ABI_CALL(0x0059655Au, sub_0059655A); /* call 0x0059655A */

loc_003E48EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003E48F7u); RECOMP_ABI_CALL(0x00596FD8u, sub_00596FD8); /* call 0x00596FD8 */

loc_003E48F7: ;
    SET_LO8(eax, MEM8(ebx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E49D2; /* je: equal / zero */

loc_003E4902: ;
    ecx = 7;
    esi = ebx;
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
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003E491Au); RECOMP_ABI_CALL(0x00589D5Cu, sub_00589D5C); /* call 0x00589D5C */

loc_003E491A: ;
    PUSH32(esp, 0x003E491Fu); RECOMP_ABI_CALL(0x00589EA2u, sub_00589EA2); /* call 0x00589EA2 */

loc_003E491F: ;
    PUSH32(esp, 0x003E4924u); RECOMP_ABI_CALL(0x00589E7Du, sub_00589E7D); /* call 0x00589E7D */

loc_003E4924: ;
    PUSH32(esp, 0x90602);
    PUSH32(esp, 0x003E492Eu); RECOMP_ABI_CALL(0x00589BD7u, sub_00589BD7); /* call 0x00589BD7 */

loc_003E492E: ;
    eax = MEM32(ebx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x10));
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E4940u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E4940: ;
    MEM32(ebp + 0xC) = eax;
    edx = MEM32(ebx + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebx + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E4953u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_003E4953: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E4967u); RECOMP_ABI_CALL(0x005894ADu, sub_005894AD); /* call 0x005894AD */

loc_003E4967: ;
    esi = MEM32(ebx + 8);
    eax = esi + esi * 2;
    ecx = eax * 4 + 4;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E497Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E497F: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E499D; /* je: equal / zero */

loc_003E4986: ;
    PUSH32(esp, 0x31E4F);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x003E4999u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_003E4999: ;
    eax = edi;
    goto loc_003E499F;

loc_003E499D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E499F: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebx + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E49B0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E49B0: ;
    MEM32(ebp + 0x18) = eax;
    ecx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E49D2; /* jbe: below or equal (unsigned <=) */

loc_003E49BF: ;
    /* nop */

loc_003E49C0: ;
    edx = MEM32(ebp + 0x18);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(ebx + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E49C0; /* jb: below (unsigned <) */

loc_003E49D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4A50
 * Original: 0x003E4A50 - 0x003E4AE5 (149 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4A50: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003E4AB0; /* je: equal / zero */

loc_003E4A5D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 4;
    if ((_fas < 0)) goto loc_003E4A9A; /* js: sign (negative) */

loc_003E4A6D: ;
    PUSH32(esp, ebp);
    ebp = eax + 1;

loc_003E4A71: ;
    eax = MEM32(esi + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4A96; /* je: equal / zero */

loc_003E4A7B: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E4A84u); RECOMP_ABI_CALL(0x0058731Cu, sub_0058731C); /* call 0x0058731C */

loc_003E4A84: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x003E4A93u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E4A93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E4A96: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E4A71; /* jne: not equal / not zero */

loc_003E4A99: ;
    POP32(esp, ebp);

loc_003E4A9A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E4AA8; /* je: equal / zero */

loc_003E4A9F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003E4AA5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E4AA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E4AA8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003E4AB0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4AD0; /* je: equal / zero */

loc_003E4AB5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E4ABEu); RECOMP_ABI_CALL(0x0058731Cu, sub_0058731C); /* call 0x0058731C */

loc_003E4ABE: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    MEM32(esi) = 0;
    PUSH32(esp, 0x003E4ACDu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E4ACD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E4AD0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E4ADE; /* je: equal / zero */

loc_003E4AD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E4ADBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E4ADB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E4ADE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4B10
 * Original: 0x003E4B10 - 0x003E4B7A (106 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x835FF0;
    if (CMP_EQ(_fa, _fb)) goto loc_003E4B59; /* je: equal / zero */

loc_003E4B20: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E4B29u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E4B29: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4B3A; /* je: equal / zero */

loc_003E4B33: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x003E4B3Au); RECOMP_ABI_CALL(0x0001DC74u, sub_0001DC74); /* call 0x0001DC74 */

loc_003E4B3A: ;
    PUSH32(esp, 0x003E4B3Fu); RECOMP_ABI_CALL(0x005893CEu, sub_005893CE); /* call 0x005893CE */

loc_003E4B3F: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E4B48u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E4B48: ;
    PUSH32(esp, 0x003E4B4Du); RECOMP_ABI_CALL(0x00589D4Du, sub_00589D4D); /* call 0x00589D4D */

loc_003E4B4D: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E4B56u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E4B56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E4B59: ;
    PUSH32(esp, 0x003E4B5Eu); RECOMP_ABI_CALL(0x005965FAu, sub_005965FA); /* call 0x005965FA */

loc_003E4B5E: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4B6C; /* je: equal / zero */

loc_003E4B65: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003E4B6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4B69u); } /* indirect call */
    }

loc_003E4B6C: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E4B75u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003E4B75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E4BA0
 * Original: 0x003E4BA0 - 0x003E4BDB (59 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4BD7; /* je: equal / zero */

loc_003E4BAA: ;
    ecx = MEM32(esi + 0x1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E4BB7u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003E4BB7: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4BD7; /* je: equal / zero */

loc_003E4BBE: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E4BD6; /* jbe: below or equal (unsigned <=) */

loc_003E4BC8: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ecx + edi * 4); PUSH32(esp, 0x003E4BCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4BCBu); } /* indirect call */
    }

loc_003E4BCE: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E4BC8; /* jb: below (unsigned <) */

loc_003E4BD6: ;
    POP32(esp, edi);

loc_003E4BD7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4BF0
 * Original: 0x003E4BF0 - 0x003E4C1D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4BF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003E4BF9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E4BF9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4C12; /* je: equal / zero */

loc_003E4C00: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003E4C0Cu); RECOMP_ABI_CALL(0x00032539u, sub_00032539); /* call 0x00032539 */

loc_003E4C0C: ;
    MEM32(0x907CA8) = eax;
    esp += 4; return; /* ret */

loc_003E4C12: ;
    MEM32(0x907CA8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4C30
 * Original: 0x003E4C30 - 0x003E4C4E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003E4C38u); RECOMP_ABI_CALL(0x000307B1u, sub_000307B1); /* call 0x000307B1 */

loc_003E4C38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E4C48; /* je: equal / zero */

loc_003E4C3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E4C45u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E4C45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E4C48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4C60
 * Original: 0x003E4C60 - 0x003E4C74 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4C60(void)
{

loc_003E4C60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907CB4) = eax;
    MEM32(0x907CB8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4C80
 * Original: 0x003E4C80 - 0x003E4C94 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4C80(void)
{

loc_003E4C80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907CBC) = eax;
    MEM32(0x907CC0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4CA0
 * Original: 0x003E4CA0 - 0x003E4CAA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4CA0(void)
{

loc_003E4CA0: ;
    eax = MEM32(esp + 4);
    MEM32(0x907CC4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4CB0
 * Original: 0x003E4CB0 - 0x003E4CC4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4CB0: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835FF4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x907CB4); PUSH32(esp, 0x003E4CC0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003E4CBAu); } /* indirect call */
    }

loc_003E4CC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E4CD0
 * Original: 0x003E4CD0 - 0x003E4CE4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4CD0: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x836014);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x907CB4); PUSH32(esp, 0x003E4CE0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003E4CDAu); } /* indirect call */
    }

loc_003E4CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E4CF0
 * Original: 0x003E4CF0 - 0x003E4D22 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003E4CFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4CF7u); } /* indirect call */
    }

loc_003E4CFA: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4D06; /* je: equal / zero */

loc_003E4D00: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003E4D06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4D04u); } /* indirect call */
    }

loc_003E4D06: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003E4D19; /* je: equal / zero */

loc_003E4D13: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003E4D19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4D17u); } /* indirect call */
    }

loc_003E4D19: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E4D30
 * Original: 0x003E4D30 - 0x003E4D38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4D30: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0002FA23(); return; /* tail jmp 0x0002FA23 */

}

/**
 * sub_003E4D40
 * Original: 0x003E4D40 - 0x003E4D48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4D40: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0001BED3(); return; /* tail jmp 0x0001BED3 */

}

/**
 * sub_003E4D50
 * Original: 0x003E4D50 - 0x003E4D6A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4D50(void)
{

loc_003E4D50: ;
    eax = MEM32(0x909394);
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003E4D69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4D66u); } /* indirect call */
    }

loc_003E4D69: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4D70
 * Original: 0x003E4D70 - 0x003E4D83 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4D70(void)
{

loc_003E4D70: ;
    eax = MEM32(0x909394);
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003E4D82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4D7Fu); } /* indirect call */
    }

loc_003E4D82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4D90
 * Original: 0x003E4D90 - 0x003E4D91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4D90(void)
{

loc_003E4D90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4DA0
 * Original: 0x003E4DA0 - 0x003E4DA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4DA0(void)
{

loc_003E4DA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4DB0
 * Original: 0x003E4DB0 - 0x003E4DB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4DB0(void)
{

loc_003E4DB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4DC0
 * Original: 0x003E4DC0 - 0x003E4E68 (168 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x835FF4);
    PUSH32(esp, 0x14);
    MEM32(0x907CB4) = 0x14B33;
    MEM32(0x907CB8) = 0x17054;
    MEM32(0x907CBC) = 0x165AA;
    MEM32(0x907CC0) = 0x1D751;
    MEM32(0x907CC4) = 0x29588;
    PUSH32(esp, 0x003E4E0Eu); RECOMP_ABI_CALL(0x00014B33u, sub_00014B33); /* call 0x00014B33 */

loc_003E4E0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4E1E; /* je: equal / zero */

loc_003E4E15: ;
    ecx = eax;
    PUSH32(esp, 0x003E4E1Cu); RECOMP_ABI_CALL(0x00027134u, sub_00027134); /* call 0x00027134 */

loc_003E4E1C: ;
    goto loc_003E4E20;

loc_003E4E1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E4E20: ;
    MEM32(esi) = eax;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003E4E29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E4E26u); } /* indirect call */
    }

loc_003E4E29: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x836014);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x907CB4); PUSH32(esp, 0x003E4E36u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003E4E30u); } /* indirect call */
    }

loc_003E4E36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E4E55; /* je: equal / zero */

loc_003E4E3D: ;
    ecx = eax;
    PUSH32(esp, 0x003E4E44u); RECOMP_ABI_CALL(0x00018F4Eu, sub_00018F4E); /* call 0x00018F4E */

loc_003E4E44: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x003E4E51u); RECOMP_ABI_CALL(0x000334E8u, sub_000334E8); /* call 0x000334E8 */

loc_003E4E51: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003E4E55: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x003E4E64u); RECOMP_ABI_CALL(0x000334E8u, sub_000334E8); /* call 0x000334E8 */

loc_003E4E64: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E4EA0
 * Original: 0x003E4EA0 - 0x003E4EA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4EA0(void)
{

loc_003E4EA0: ;
    eax = ecx;
    MEM32(eax) = 0x836040;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4EB0
 * Original: 0x003E4EB0 - 0x003E4EB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4EB0(void)
{

loc_003E4EB0: ;
    MEM32(ecx) = 0x836040;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4EC0
 * Original: 0x003E4EC0 - 0x003E4EC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4EC0(void)
{

loc_003E4EC0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003E4ED0
 * Original: 0x003E4ED0 - 0x003E4EF2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E4ED0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x836040;
    if (TEST_Z(_fa, _fb)) goto loc_003E4EEC; /* je: equal / zero */

loc_003E4EE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x907CB8); PUSH32(esp, 0x003E4EE9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003E4EE3u); } /* indirect call */
    }

loc_003E4EE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E4EEC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E4F00
 * Original: 0x003E4F00 - 0x003E4F09 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4F00(void)
{

loc_003E4F00: ;
    eax = ecx;
    MEM32(eax) = 0x836058;
    esp += 4; return; /* ret */

}
