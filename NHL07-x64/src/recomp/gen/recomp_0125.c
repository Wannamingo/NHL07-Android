/**
 * nhl_07_recomp - Recompiled code chunk 125
 * Functions: 250 (0x001B7E80 - 0x001C17E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001B7E80
 * Original: 0x001B7E80 - 0x001B7FB5 (309 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7E80: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001B7FB0; /* je: equal / zero */

loc_001B7E93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7FB0; /* je: equal / zero */

loc_001B7E9B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7EA1u); RECOMP_ABI_CALL(0x005BE7DAu, sub_005BE7DA); /* call 0x005BE7DA */

loc_001B7EA1: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = 0x8F1950;
    PUSH32(esp, 0x001B7EB5u); RECOMP_ABI_CALL(0x00023E30u, sub_00023E30); /* call 0x00023E30 */

loc_001B7EB5: ;
    esi = (uint32_t)(int32_t)SMEM16(0x896168);
    PUSH32(esp, 0x001B7EC1u); RECOMP_ABI_CALL(0x0001A970u, sub_0001A970); /* call 0x0001A970 */

loc_001B7EC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7F0A; /* je: equal / zero */

loc_001B7EC5: ;
    PUSH32(esp, 0x001B7ECAu); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_001B7ECA: ;
    ecx = eax;
    PUSH32(esp, 0x001B7ED1u); RECOMP_ABI_CALL(0x0001F01Fu, sub_0001F01F); /* call 0x0001F01F */

loc_001B7ED1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B7F0A; /* jne: not equal / not zero */

loc_001B7ED5: ;
    PUSH32(esp, 0x001B7EDAu); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_001B7EDA: ;
    ecx = eax;
    PUSH32(esp, 0x001B7EE1u); RECOMP_ABI_CALL(0x0001AB9Bu, sub_0001AB9B); /* call 0x0001AB9B */

loc_001B7EE1: ;
    PUSH32(esp, 0x001B7EE6u); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_001B7EE6: ;
    ecx = eax;
    PUSH32(esp, 0x001B7EEDu); RECOMP_ABI_CALL(0x00028CCDu, sub_00028CCD); /* call 0x00028CCD */

loc_001B7EED: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B7F0A; /* ja: above (unsigned >) */

loc_001B7EF3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1B7FB8); /* switch: 4 entries, 3 targets */
    if (_jt == 0x001B7EFAu) goto loc_001B7EFA;
    if (_jt == 0x001B7EFEu) goto loc_001B7EFE;
    if (_jt == 0x001B7F05u) goto loc_001B7F05;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B7EFA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001B7F0A;

loc_001B7EFE: ;
    esi = 1;
    goto loc_001B7F0A;

loc_001B7F05: ;
    esi = 2;

loc_001B7F0A: ;
    SET_LO8(eax, MEM8(0x904B9D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B7F83; /* jne: not equal / not zero */

loc_001B7F13: ;
    eax = esi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001B7F6C; /* je: equal / zero */

loc_001B7F1A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001B7F55; /* je: equal / zero */

loc_001B7F1D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001B7F3E; /* je: equal / zero */

loc_001B7F20: ;
    PUSH32(esp, 0x001B7F25u); RECOMP_ABI_CALL(0x0002927Cu, sub_0002927C); /* call 0x0002927C */

loc_001B7F25: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7F2Cu); RECOMP_ABI_CALL(0x0001D3FFu, sub_0001D3FF); /* call 0x0001D3FF */

loc_001B7F2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B7F35u); RECOMP_ABI_CALL(0x00019660u, sub_00019660); /* call 0x00019660 */

loc_001B7F35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001B7F3E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001B7F4Fu); RECOMP_ABI_CALL(0x00011726u, sub_00011726); /* call 0x00011726 */

loc_001B7F4F: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001B7F55: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001B7F66u); RECOMP_ABI_CALL(0x0001FE3Eu, sub_0001FE3E); /* call 0x0001FE3E */

loc_001B7F66: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001B7F6C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001B7F7Du); RECOMP_ABI_CALL(0x00027F71u, sub_00027F71); /* call 0x00027F71 */

loc_001B7F7D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001B7F83: ;
    PUSH32(esp, 0x001B7F88u); RECOMP_ABI_CALL(0x0002927Cu, sub_0002927C); /* call 0x0002927C */

loc_001B7F88: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0x001B7F90u); RECOMP_ABI_CALL(0x0001D3FFu, sub_0001D3FF); /* call 0x0001D3FF */

loc_001B7F90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B7FA2u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001B7FA2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001B7FACu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001B7FA6u); } /* indirect call */
    }

loc_001B7FAC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001B7FB0: ;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001B8020
 * Original: 0x001B8020 - 0x001B81CB (427 bytes, 119 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8020: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B81C8; /* ja: above (unsigned >) */

loc_001B8032: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1B81CC); /* switch: 15 entries, 13 targets */
    if (_jt == 0x001B8039u) goto loc_001B8039;
    if (_jt == 0x001B8046u) goto loc_001B8046;
    if (_jt == 0x001B8053u) goto loc_001B8053;
    if (_jt == 0x001B8060u) goto loc_001B8060;
    if (_jt == 0x001B806Du) goto loc_001B806D;
    if (_jt == 0x001B807Au) goto loc_001B807A;
    if (_jt == 0x001B8087u) goto loc_001B8087;
    if (_jt == 0x001B8094u) goto loc_001B8094;
    if (_jt == 0x001B80ABu) goto loc_001B80AB;
    if (_jt == 0x001B80C2u) goto loc_001B80C2;
    if (_jt == 0x001B80D9u) goto loc_001B80D9;
    if (_jt == 0x001B815Cu) goto loc_001B815C;
    if (_jt == 0x001B81C8u) goto loc_001B81C8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B8039: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B8043u); RECOMP_ABI_CALL(0x00031FDFu, sub_00031FDF); /* call 0x00031FDF */

loc_001B8043: ;
    esp += 8; return; /* ret 4 */

loc_001B8046: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B8050u); RECOMP_ABI_CALL(0x0002B388u, sub_0002B388); /* call 0x0002B388 */

loc_001B8050: ;
    esp += 8; return; /* ret 4 */

loc_001B8053: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B805Du); RECOMP_ABI_CALL(0x00017A0Eu, sub_00017A0E); /* call 0x00017A0E */

loc_001B805D: ;
    esp += 8; return; /* ret 4 */

loc_001B8060: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B806Au); RECOMP_ABI_CALL(0x0002CEB3u, sub_0002CEB3); /* call 0x0002CEB3 */

loc_001B806A: ;
    esp += 8; return; /* ret 4 */

loc_001B806D: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B8077u); RECOMP_ABI_CALL(0x0002AB31u, sub_0002AB31); /* call 0x0002AB31 */

loc_001B8077: ;
    esp += 8; return; /* ret 4 */

loc_001B807A: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B8084u); RECOMP_ABI_CALL(0x0001526Du, sub_0001526D); /* call 0x0001526D */

loc_001B8084: ;
    esp += 8; return; /* ret 4 */

loc_001B8087: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B8091u); RECOMP_ABI_CALL(0x00024A29u, sub_00024A29); /* call 0x00024A29 */

loc_001B8091: ;
    esp += 8; return; /* ret 4 */

loc_001B8094: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30003);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B80A5u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B80A5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B80AB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30002);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B80BCu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B80BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B80C2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30004);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B80D3u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B80D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B80D9: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B80E6: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B80F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B80FB: ;
    PUSH32(esp, 0x001B8100u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B8100: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8116; /* jne: not equal / not zero */

loc_001B8104: ;
    PUSH32(esp, 0x001B8109u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B8109: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8116; /* jne: not equal / not zero */

loc_001B810D: ;
    PUSH32(esp, 0x001B8112u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B8112: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8128; /* je: equal / zero */

loc_001B8116: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B811Du); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B811D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B8128: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8134u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B8134: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B81C8; /* jne: not equal / not zero */

loc_001B813C: ;
    PUSH32(esp, 9);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8148u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B8148: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B814C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8159u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B8159: ;
    esp += 8; return; /* ret 4 */

loc_001B815C: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B8165: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B816E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B8172: ;
    PUSH32(esp, 0x001B8177u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B8177: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B818D; /* jne: not equal / not zero */

loc_001B817B: ;
    PUSH32(esp, 0x001B8180u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B8180: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B818D; /* jne: not equal / not zero */

loc_001B8184: ;
    PUSH32(esp, 0x001B8189u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B8189: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B819B; /* je: equal / zero */

loc_001B818D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B8194u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B8194: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B819B: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B81A7u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B81A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B81C8; /* jne: not equal / not zero */

loc_001B81AB: ;
    PUSH32(esp, 0xA);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B81B7u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B81B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81C8; /* je: equal / zero */

loc_001B81BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B81C8u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B81C8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8290
 * Original: 0x001B8290 - 0x001B8995 (1797 bytes, 525 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8290: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B898F; /* ja: above (unsigned >) */

loc_001B82A2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1B8998); /* switch: 28 entries, 22 targets */
    if (_jt == 0x001B82A9u) goto loc_001B82A9;
    if (_jt == 0x001B82C3u) goto loc_001B82C3;
    if (_jt == 0x001B82DDu) goto loc_001B82DD;
    if (_jt == 0x001B82F7u) goto loc_001B82F7;
    if (_jt == 0x001B8311u) goto loc_001B8311;
    if (_jt == 0x001B83B1u) goto loc_001B83B1;
    if (_jt == 0x001B8454u) goto loc_001B8454;
    if (_jt == 0x001B84F7u) goto loc_001B84F7;
    if (_jt == 0x001B858Bu) goto loc_001B858B;
    if (_jt == 0x001B8621u) goto loc_001B8621;
    if (_jt == 0x001B86B5u) goto loc_001B86B5;
    if (_jt == 0x001B8749u) goto loc_001B8749;
    if (_jt == 0x001B880Bu) goto loc_001B880B;
    if (_jt == 0x001B889Eu) goto loc_001B889E;
    if (_jt == 0x001B88CEu) goto loc_001B88CE;
    if (_jt == 0x001B88D5u) goto loc_001B88D5;
    if (_jt == 0x001B88DCu) goto loc_001B88DC;
    if (_jt == 0x001B88E3u) goto loc_001B88E3;
    if (_jt == 0x001B88EAu) goto loc_001B88EA;
    if (_jt == 0x001B88F1u) goto loc_001B88F1;
    if (_jt == 0x001B890Bu) goto loc_001B890B;
    if (_jt == 0x001B898Fu) goto loc_001B898F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B82A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30005);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B82BAu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B82BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B82C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30006);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B82D4u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B82D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B82DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30007);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B82EEu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B82EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B82F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30001);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8308u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8308: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B8311: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8385; /* je: equal / zero */

loc_001B831A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8385; /* je: equal / zero */

loc_001B8323: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8385; /* je: equal / zero */

loc_001B8327: ;
    PUSH32(esp, 0x001B832Cu); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B832C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8342; /* jne: not equal / not zero */

loc_001B8330: ;
    PUSH32(esp, 0x001B8335u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B8335: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8342; /* jne: not equal / not zero */

loc_001B8339: ;
    PUSH32(esp, 0x001B833Eu); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B833E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B834C; /* je: equal / zero */

loc_001B8342: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B8349u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B8349: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B834C: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8358u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B8358: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8368; /* je: equal / zero */

loc_001B835C: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8368u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B8368: ;
    PUSH32(esp, 1);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8374u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B8374: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8385; /* je: equal / zero */

loc_001B8378: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8385u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B8385: ;
    PUSH32(esp, 0);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8391u); RECOMP_ABI_CALL(0x000207DAu, sub_000207DA); /* call 0x000207DA */

loc_001B8391: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    edx = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B83ABu); RECOMP_ABI_CALL(0x0001F02Eu, sub_0001F02E); /* call 0x0001F02E */

loc_001B83AB: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B83B1: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8425; /* je: equal / zero */

loc_001B83BA: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8425; /* je: equal / zero */

loc_001B83C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8425; /* je: equal / zero */

loc_001B83C7: ;
    PUSH32(esp, 0x001B83CCu); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B83CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B83E2; /* jne: not equal / not zero */

loc_001B83D0: ;
    PUSH32(esp, 0x001B83D5u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B83D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B83E2; /* jne: not equal / not zero */

loc_001B83D9: ;
    PUSH32(esp, 0x001B83DEu); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B83DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B83EC; /* je: equal / zero */

loc_001B83E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B83E9u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B83E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B83EC: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B83F8u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B83F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8408; /* je: equal / zero */

loc_001B83FC: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8408u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B8408: ;
    PUSH32(esp, 0x18);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8414u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B8414: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8425; /* je: equal / zero */

loc_001B8418: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8425u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B8425: ;
    PUSH32(esp, 0x8B26DC);
    ecx = 0x8F0DC0;
    PUSH32(esp, 0x001B8434u); RECOMP_ABI_CALL(0x0001BC08u, sub_0001BC08); /* call 0x0001BC08 */

loc_001B8434: ;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B844Eu); RECOMP_ABI_CALL(0x0001A6A5u, sub_0001A6A5); /* call 0x0001A6A5 */

loc_001B844E: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B8454: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B84C8; /* je: equal / zero */

loc_001B845D: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B84C8; /* je: equal / zero */

loc_001B8466: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B84C8; /* je: equal / zero */

loc_001B846A: ;
    PUSH32(esp, 0x001B846Fu); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B846F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8485; /* jne: not equal / not zero */

loc_001B8473: ;
    PUSH32(esp, 0x001B8478u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B8478: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8485; /* jne: not equal / not zero */

loc_001B847C: ;
    PUSH32(esp, 0x001B8481u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B8481: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B848F; /* je: equal / zero */

loc_001B8485: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B848Cu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B848C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B848F: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B849Bu); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B849B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B84AB; /* je: equal / zero */

loc_001B849F: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B84ABu); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B84AB: ;
    PUSH32(esp, 0x1D);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B84B7u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B84B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B84C8; /* je: equal / zero */

loc_001B84BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B84C8u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B84C8: ;
    PUSH32(esp, 0x8B26DC);
    ecx = 0x8F0DC0;
    PUSH32(esp, 0x001B84D7u); RECOMP_ABI_CALL(0x0001BC08u, sub_0001BC08); /* call 0x0001BC08 */

loc_001B84D7: ;
    edx = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    eax = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B84F1u); RECOMP_ABI_CALL(0x00015C22u, sub_00015C22); /* call 0x00015C22 */

loc_001B84F1: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B84F7: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B856B; /* je: equal / zero */

loc_001B8500: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B856B; /* je: equal / zero */

loc_001B8509: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B856B; /* je: equal / zero */

loc_001B850D: ;
    PUSH32(esp, 0x001B8512u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B8512: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8528; /* jne: not equal / not zero */

loc_001B8516: ;
    PUSH32(esp, 0x001B851Bu); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B851B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8528; /* jne: not equal / not zero */

loc_001B851F: ;
    PUSH32(esp, 0x001B8524u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B8524: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8532; /* je: equal / zero */

loc_001B8528: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B852Fu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B852F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B8532: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B853Eu); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B853E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B854E; /* je: equal / zero */

loc_001B8542: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B854Eu); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B854E: ;
    PUSH32(esp, 0x16);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B855Au); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B855A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B856B; /* je: equal / zero */

loc_001B855E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x16);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B856Bu); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B856B: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    edx = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B8585u); RECOMP_ABI_CALL(0x00022864u, sub_00022864); /* call 0x00022864 */

loc_001B8585: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B858B: ;
    PUSH32(esp, 0);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8597u); RECOMP_ABI_CALL(0x000207DAu, sub_000207DA); /* call 0x000207DA */

loc_001B8597: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B85A3u); RECOMP_ABI_CALL(0x0003607Bu, sub_0003607B); /* call 0x0003607B */

loc_001B85A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B85B3; /* jne: not equal / not zero */

loc_001B85A7: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B85B3u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B85B3: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B85C0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B85CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B85D5: ;
    PUSH32(esp, 0x001B85DAu); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B85DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B85F0; /* jne: not equal / not zero */

loc_001B85DE: ;
    PUSH32(esp, 0x001B85E3u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B85E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B85F0; /* jne: not equal / not zero */

loc_001B85E7: ;
    PUSH32(esp, 0x001B85ECu); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B85EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B85FA; /* je: equal / zero */

loc_001B85F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B85F7u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B85F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B85FA: ;
    PUSH32(esp, 0x13);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8606u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B8606: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B860E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B861Bu); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B861B: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B8621: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8695; /* je: equal / zero */

loc_001B862A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8695; /* je: equal / zero */

loc_001B8633: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8695; /* je: equal / zero */

loc_001B8637: ;
    PUSH32(esp, 0x001B863Cu); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B863C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8652; /* jne: not equal / not zero */

loc_001B8640: ;
    PUSH32(esp, 0x001B8645u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B8645: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8652; /* jne: not equal / not zero */

loc_001B8649: ;
    PUSH32(esp, 0x001B864Eu); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B864E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B865C; /* je: equal / zero */

loc_001B8652: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B8659u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B8659: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B865C: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8668u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B8668: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8678; /* je: equal / zero */

loc_001B866C: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8678u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B8678: ;
    PUSH32(esp, 0x17);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8684u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B8684: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8695; /* je: equal / zero */

loc_001B8688: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8695u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B8695: ;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B86AFu); RECOMP_ABI_CALL(0x00022864u, sub_00022864); /* call 0x00022864 */

loc_001B86AF: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B86B5: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8729; /* je: equal / zero */

loc_001B86BE: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8729; /* je: equal / zero */

loc_001B86C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8729; /* je: equal / zero */

loc_001B86CB: ;
    PUSH32(esp, 0x001B86D0u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B86D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B86E6; /* jne: not equal / not zero */

loc_001B86D4: ;
    PUSH32(esp, 0x001B86D9u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B86D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B86E6; /* jne: not equal / not zero */

loc_001B86DD: ;
    PUSH32(esp, 0x001B86E2u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B86E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B86F0; /* je: equal / zero */

loc_001B86E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B86EDu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B86ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B86F0: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B86FCu); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B86FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B870C; /* je: equal / zero */

loc_001B8700: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B870Cu); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B870C: ;
    PUSH32(esp, 2);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8718u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B8718: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8729; /* je: equal / zero */

loc_001B871C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B8729u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B8729: ;
    edx = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    eax = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B8743u); RECOMP_ABI_CALL(0x0001F02Eu, sub_0001F02E); /* call 0x0001F02E */

loc_001B8743: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B8749: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B87BD; /* je: equal / zero */

loc_001B8752: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B87BD; /* je: equal / zero */

loc_001B875B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B87BD; /* je: equal / zero */

loc_001B875F: ;
    PUSH32(esp, 0x001B8764u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B8764: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B877A; /* jne: not equal / not zero */

loc_001B8768: ;
    PUSH32(esp, 0x001B876Du); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B876D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B877A; /* jne: not equal / not zero */

loc_001B8771: ;
    PUSH32(esp, 0x001B8776u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B8776: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8784; /* je: equal / zero */

loc_001B877A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B8781u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B8781: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B8784: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8790u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B8790: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B87A0; /* je: equal / zero */

loc_001B8794: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B87A0u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B87A0: ;
    PUSH32(esp, 0x19);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B87ACu); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B87AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B87BD; /* je: equal / zero */

loc_001B87B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x19);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B87BDu); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B87BD: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    edx = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B87D7u); RECOMP_ABI_CALL(0x0001A6A5u, sub_0001A6A5); /* call 0x0001A6A5 */

loc_001B87D7: ;
    ecx = esp;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM16(esp + 0xC) = 0x58;
    MEM32(esp + 0x1C) = 5;
    MEM32(esp) = 0x7C2754;
    PUSH32(esp, 0x001B8805u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_001B8805: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B880B: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B887F; /* je: equal / zero */

loc_001B8814: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B887F; /* je: equal / zero */

loc_001B881D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B887F; /* je: equal / zero */

loc_001B8821: ;
    PUSH32(esp, 0x001B8826u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B8826: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B883C; /* jne: not equal / not zero */

loc_001B882A: ;
    PUSH32(esp, 0x001B882Fu); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B882F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B883C; /* jne: not equal / not zero */

loc_001B8833: ;
    PUSH32(esp, 0x001B8838u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B8838: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8846; /* je: equal / zero */

loc_001B883C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B8843u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B8843: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B8846: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8852u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B8852: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8862; /* je: equal / zero */

loc_001B8856: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B8862u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B8862: ;
    PUSH32(esp, 0x1E);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B886Eu); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B886E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B887F; /* je: equal / zero */

loc_001B8872: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B887Fu); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B887F: ;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B8899u); RECOMP_ABI_CALL(0x00015C22u, sub_00015C22); /* call 0x00015C22 */

loc_001B8899: ;
    goto loc_001B87D7;

loc_001B889E: ;
    PUSH32(esp, 0x7EFC40);

loc_001B88A3: ;
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B88ADu); RECOMP_ABI_CALL(0x0002C6E3u, sub_0002C6E3); /* call 0x0002C6E3 */

loc_001B88AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B88B5: ;
    PUSH32(esp, 0x001B88BAu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001B88BA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xAA);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001B88C8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001B88C5u); } /* indirect call */
    }

loc_001B88C8: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B88CE: ;
    PUSH32(esp, 0x7EFC34);
    goto loc_001B88A3;

loc_001B88D5: ;
    PUSH32(esp, 0x7EFC18);
    goto loc_001B88A3;

loc_001B88DC: ;
    PUSH32(esp, 0x7EFC08);
    goto loc_001B88A3;

loc_001B88E3: ;
    PUSH32(esp, 0x7EFBF0);
    goto loc_001B88A3;

loc_001B88EA: ;
    PUSH32(esp, 0x7EFBD4);
    goto loc_001B88A3;

loc_001B88F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3000B);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8902u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8902: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B890B: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x001B8915u); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_001B8915: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8923; /* je: equal / zero */

loc_001B8919: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x001B8923u); RECOMP_ABI_CALL(0x0001F64Bu, sub_0001F64B); /* call 0x0001F64B */

loc_001B8923: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B892C: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B8935: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B8939: ;
    PUSH32(esp, 0x001B893Eu); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B893E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8954; /* jne: not equal / not zero */

loc_001B8942: ;
    PUSH32(esp, 0x001B8947u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B8947: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8954; /* jne: not equal / not zero */

loc_001B894B: ;
    PUSH32(esp, 0x001B8950u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B8950: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8962; /* je: equal / zero */

loc_001B8954: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B895Bu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B895B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B8962: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B896Eu); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B896E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B898F; /* jne: not equal / not zero */

loc_001B8972: ;
    PUSH32(esp, 0xE);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B897Eu); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B897E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B898F; /* je: equal / zero */

loc_001B8982: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B898Fu); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B898F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8BF0
 * Original: 0x001B8BF0 - 0x001B9100 (1296 bytes, 472 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8BF0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001B8C6E; /* je: equal / zero */

loc_001B8C0D: ;
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x18;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001B8C40u); RECOMP_ABI_CALL(0x00013B2Fu, sub_00013B2F); /* call 0x00013B2F */

loc_001B8C40: ;
    ecx = MEM32(ebp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7EF6BC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001B8C60; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001B8C5D: ;
    xmm0 = xmm1; /* movaps */

loc_001B8C60: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x18);
    ebx = (int32_t)xmm0.f[0]; /* cvttss2si */
    goto loc_001B8C78;

loc_001B8C6E: ;
    edi = 1;
    ebx = 0x64;

loc_001B8C78: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x34 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B90F6; /* ja: above (unsigned >) */

loc_001B8C87: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1B9100); /* switch: 53 entries, 38 targets */
    if (_jt == 0x001B8C8Eu) goto loc_001B8C8E;
    if (_jt == 0x001B8CC5u) goto loc_001B8CC5;
    if (_jt == 0x001B8CF7u) goto loc_001B8CF7;
    if (_jt == 0x001B8D29u) goto loc_001B8D29;
    if (_jt == 0x001B8D49u) goto loc_001B8D49;
    if (_jt == 0x001B8D69u) goto loc_001B8D69;
    if (_jt == 0x001B8D89u) goto loc_001B8D89;
    if (_jt == 0x001B8DA9u) goto loc_001B8DA9;
    if (_jt == 0x001B8DC9u) goto loc_001B8DC9;
    if (_jt == 0x001B8DE9u) goto loc_001B8DE9;
    if (_jt == 0x001B8E00u) goto loc_001B8E00;
    if (_jt == 0x001B8E0Eu) goto loc_001B8E0E;
    if (_jt == 0x001B8E1Cu) goto loc_001B8E1C;
    if (_jt == 0x001B8E2Au) goto loc_001B8E2A;
    if (_jt == 0x001B8E38u) goto loc_001B8E38;
    if (_jt == 0x001B8E46u) goto loc_001B8E46;
    if (_jt == 0x001B8E54u) goto loc_001B8E54;
    if (_jt == 0x001B8E62u) goto loc_001B8E62;
    if (_jt == 0x001B8E84u) goto loc_001B8E84;
    if (_jt == 0x001B8EA6u) goto loc_001B8EA6;
    if (_jt == 0x001B8EB4u) goto loc_001B8EB4;
    if (_jt == 0x001B8EC2u) goto loc_001B8EC2;
    if (_jt == 0x001B8ED0u) goto loc_001B8ED0;
    if (_jt == 0x001B8EDEu) goto loc_001B8EDE;
    if (_jt == 0x001B8EECu) goto loc_001B8EEC;
    if (_jt == 0x001B8EFAu) goto loc_001B8EFA;
    if (_jt == 0x001B8F08u) goto loc_001B8F08;
    if (_jt == 0x001B8F95u) goto loc_001B8F95;
    if (_jt == 0x001B8FA3u) goto loc_001B8FA3;
    if (_jt == 0x001B8FC1u) goto loc_001B8FC1;
    if (_jt == 0x001B8FF8u) goto loc_001B8FF8;
    if (_jt == 0x001B9017u) goto loc_001B9017;
    if (_jt == 0x001B9025u) goto loc_001B9025;
    if (_jt == 0x001B9047u) goto loc_001B9047;
    if (_jt == 0x001B9080u) goto loc_001B9080;
    if (_jt == 0x001B909Eu) goto loc_001B909E;
    if (_jt == 0x001B90B2u) goto loc_001B90B2;
    if (_jt == 0x001B90F6u) goto loc_001B90F6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B8C8E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001B8C98u); RECOMP_ABI_CALL(0x00015F88u, sub_00015F88); /* call 0x00015F88 */

loc_001B8C98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B90F6; /* je: equal / zero */

loc_001B8CA0: ;
    PUSH32(esp, 0x001B8CA5u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001B8CA5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10021);

loc_001B8CAE: ;
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8CB8u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8CB8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8CC5: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001B8CCFu); RECOMP_ABI_CALL(0x00015F88u, sub_00015F88); /* call 0x00015F88 */

loc_001B8CCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B90F6; /* je: equal / zero */

loc_001B8CD7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10020);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8CEAu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8CEA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8CF7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001B8D01u); RECOMP_ABI_CALL(0x00015F88u, sub_00015F88); /* call 0x00015F88 */

loc_001B8D01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B90F6; /* je: equal / zero */

loc_001B8D09: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1001E);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8D1Cu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8D1C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8D29: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10025);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8D3Cu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8D3C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8D49: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10026);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8D5Cu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8D5C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8D69: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10027);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8D7Cu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8D7C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8D89: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1002B);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8D9Cu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8D9C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8DA9: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1000A);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8DBCu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8DBC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8DC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10023);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8DDCu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8DDC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8DE9: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001B8DF3u); RECOMP_ABI_CALL(0x00015F88u, sub_00015F88); /* call 0x00015F88 */

loc_001B8DF3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B90F6; /* je: equal / zero */

loc_001B8DFB: ;
    goto loc_001B8CA5;

loc_001B8E00: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10004);
    goto loc_001B8CAE;

loc_001B8E0E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1001A);
    goto loc_001B8CAE;

loc_001B8E1C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10018);
    goto loc_001B8CAE;

loc_001B8E2A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1000B);
    goto loc_001B8CAE;

loc_001B8E38: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10005);
    goto loc_001B8CAE;

loc_001B8E46: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1000A);
    goto loc_001B8CAE;

loc_001B8E54: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10003);
    goto loc_001B8CAE;

loc_001B8E62: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x10017);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8E77u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8E77: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8E84: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1001B);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8E99u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8E99: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8EA6: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10029);
    goto loc_001B8CAE;

loc_001B8EB4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10024);
    goto loc_001B8CAE;

loc_001B8EC2: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1002A);
    goto loc_001B8CAE;

loc_001B8ED0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1001F);
    goto loc_001B8CAE;

loc_001B8EDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10010);
    goto loc_001B8CAE;

loc_001B8EEC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10011);
    goto loc_001B8CAE;

loc_001B8EFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10019);
    goto loc_001B8CAE;

loc_001B8F08: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001B8F74; /* je: equal / zero */

loc_001B8F10: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001B8F3F; /* je: equal / zero */

loc_001B8F13: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B90F6; /* jne: not equal / not zero */

loc_001B8F1A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1002C);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8F32u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8F32: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8F3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1002C);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8F53u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8F53: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1002D);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8F67u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8F67: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8F74: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1002C);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8F88u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8F88: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8F95: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10009);
    goto loc_001B8CAE;

loc_001B8FA3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1001C);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8FB4u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8FB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8FC1: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1001D);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B8FD6u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B8FD6: ;
    SET_LO8(edx, MEM8(ebp + 0x30));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = 0x8B2228;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8FEEu); RECOMP_ABI_CALL(0x00036DB9u, sub_00036DB9); /* call 0x00036DB9 */

loc_001B8FEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B8FF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10023);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B900Au); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B900A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B9017: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10008);
    goto loc_001B8CAE;

loc_001B9025: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10022);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B903Au); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B903A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B9047: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001B9051u); RECOMP_ABI_CALL(0x00015F88u, sub_00015F88); /* call 0x00015F88 */

loc_001B9051: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B90F6; /* je: equal / zero */

loc_001B9059: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x384);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10014);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B9073u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B9073: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B9080: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10007);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001B9091u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001B9091: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B909E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x001B90A5u); RECOMP_ABI_CALL(0x00024D0Du, sub_00024D0D); /* call 0x00024D0D */

loc_001B90A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001B90B2: ;
    ecx = MEM32(ebp + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ED208); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001B90F6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7ED208)) */

loc_001B90C6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001B90E1u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001B90E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001B90EDu); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001B90ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B90F3u); RECOMP_ABI_CALL(0x00036B3Eu, sub_00036B3E); /* call 0x00036B3E */

loc_001B90F3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B90F6: ;
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
 * sub_001B9350
 * Original: 0x001B9350 - 0x001B9380 (48 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9350(void)
{

loc_001B9350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = 0x8F1958;
    PUSH32(esp, 0x001B9361u); RECOMP_ABI_CALL(0x000146DDu, sub_000146DD); /* call 0x000146DD */

loc_001B9361: ;
    PUSH32(esp, 0x328C7);
    PUSH32(esp, 0x001B936Bu); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001B936B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9380
 * Original: 0x001B9380 - 0x001B9A21 (1697 bytes, 511 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9380: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B9A1B; /* ja: above (unsigned >) */

loc_001B9392: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x1B9A24); /* switch: 50 entries, 45 targets */
    if (_jt == 0x001B939Bu) goto loc_001B939B;
    if (_jt == 0x001B93B0u) goto loc_001B93B0;
    if (_jt == 0x001B93C2u) goto loc_001B93C2;
    if (_jt == 0x001B93E0u) goto loc_001B93E0;
    if (_jt == 0x001B93F2u) goto loc_001B93F2;
    if (_jt == 0x001B9404u) goto loc_001B9404;
    if (_jt == 0x001B9483u) goto loc_001B9483;
    if (_jt == 0x001B9495u) goto loc_001B9495;
    if (_jt == 0x001B94BBu) goto loc_001B94BB;
    if (_jt == 0x001B94CFu) goto loc_001B94CF;
    if (_jt == 0x001B94DEu) goto loc_001B94DE;
    if (_jt == 0x001B9529u) goto loc_001B9529;
    if (_jt == 0x001B9594u) goto loc_001B9594;
    if (_jt == 0x001B95A3u) goto loc_001B95A3;
    if (_jt == 0x001B95B2u) goto loc_001B95B2;
    if (_jt == 0x001B95C4u) goto loc_001B95C4;
    if (_jt == 0x001B95D6u) goto loc_001B95D6;
    if (_jt == 0x001B95E8u) goto loc_001B95E8;
    if (_jt == 0x001B95FAu) goto loc_001B95FA;
    if (_jt == 0x001B960Cu) goto loc_001B960C;
    if (_jt == 0x001B961Eu) goto loc_001B961E;
    if (_jt == 0x001B9630u) goto loc_001B9630;
    if (_jt == 0x001B9642u) goto loc_001B9642;
    if (_jt == 0x001B9657u) goto loc_001B9657;
    if (_jt == 0x001B966Cu) goto loc_001B966C;
    if (_jt == 0x001B9681u) goto loc_001B9681;
    if (_jt == 0x001B9696u) goto loc_001B9696;
    if (_jt == 0x001B96ABu) goto loc_001B96AB;
    if (_jt == 0x001B96C0u) goto loc_001B96C0;
    if (_jt == 0x001B96D5u) goto loc_001B96D5;
    if (_jt == 0x001B96E7u) goto loc_001B96E7;
    if (_jt == 0x001B96F9u) goto loc_001B96F9;
    if (_jt == 0x001B9712u) goto loc_001B9712;
    if (_jt == 0x001B9724u) goto loc_001B9724;
    if (_jt == 0x001B9736u) goto loc_001B9736;
    if (_jt == 0x001B9748u) goto loc_001B9748;
    if (_jt == 0x001B9763u) goto loc_001B9763;
    if (_jt == 0x001B9775u) goto loc_001B9775;
    if (_jt == 0x001B9787u) goto loc_001B9787;
    if (_jt == 0x001B97C3u) goto loc_001B97C3;
    if (_jt == 0x001B9932u) goto loc_001B9932;
    if (_jt == 0x001B997Du) goto loc_001B997D;
    if (_jt == 0x001B99C8u) goto loc_001B99C8;
    if (_jt == 0x001B9A0Fu) goto loc_001B9A0F;
    if (_jt == 0x001B9A19u) goto loc_001B9A19;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B939B: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0x001B93A5u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B93A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B93B0: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B93BAu); RECOMP_ABI_CALL(0x00015E6Bu, sub_00015E6B); /* call 0x00015E6B */

loc_001B93BA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B93C2: ;
    ecx = MEM32(0x8F0DBC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9A19; /* je: equal / zero */

loc_001B93D2: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001B93D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B93D5u); } /* indirect call */
    }

loc_001B93D8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B93E0: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B93EAu); RECOMP_ABI_CALL(0x00024F92u, sub_00024F92); /* call 0x00024F92 */

loc_001B93EA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B93F2: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B93FCu); RECOMP_ABI_CALL(0x0001FE48u, sub_0001FE48); /* call 0x0001FE48 */

loc_001B93FC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9404: ;
    SET_LO8(eax, MEM8(0x8F1880));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9471; /* je: equal / zero */

loc_001B940F: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9471; /* je: equal / zero */

loc_001B9418: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9471; /* je: equal / zero */

loc_001B941C: ;
    PUSH32(esp, 0x001B9421u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B9421: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9437; /* jne: not equal / not zero */

loc_001B9425: ;
    PUSH32(esp, 0x001B942Au); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B942A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9437; /* jne: not equal / not zero */

loc_001B942E: ;
    PUSH32(esp, 0x001B9433u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B9433: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9444; /* je: equal / zero */

loc_001B9437: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001B943Du); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B943D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9471; /* je: equal / zero */

loc_001B9444: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9450u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B9450: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9471; /* jne: not equal / not zero */

loc_001B9454: ;
    PUSH32(esp, 0x14);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B9460u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B9460: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9471; /* je: equal / zero */

loc_001B9464: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B9471u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B9471: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B947Bu); RECOMP_ABI_CALL(0x00024A29u, sub_00024A29); /* call 0x00024A29 */

loc_001B947B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9483: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B948Du); RECOMP_ABI_CALL(0x00016AD2u, sub_00016AD2); /* call 0x00016AD2 */

loc_001B948D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9495: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B949Fu); RECOMP_ABI_CALL(0x00035D42u, sub_00035D42); /* call 0x00035D42 */

loc_001B949F: ;
    PUSH32(esp, 0x001B94A4u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_001B94A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9A19; /* je: equal / zero */

loc_001B94AC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = 6;
    goto loc_001B99E7;

loc_001B94BB: ;
    PUSH32(esp, 3);
    ecx = 0x8F1958;
    PUSH32(esp, 0x001B94C7u); RECOMP_ABI_CALL(0x000146DDu, sub_000146DD); /* call 0x000146DD */

loc_001B94C7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B94CF: ;
    MEM32(0x8F20DC) = 2;
    goto loc_001B9576;

loc_001B94DE: ;
    ecx = 0x8F1958;
    PUSH32(esp, 0x001B94E8u); RECOMP_ABI_CALL(0x0003095Fu, sub_0003095F); /* call 0x0003095F */

loc_001B94E8: ;
    esi = eax;
    PUSH32(esp, 0x001B94EFu); RECOMP_ABI_CALL(0x0001C446u, sub_0001C446); /* call 0x0001C446 */

loc_001B94EF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0x28) = 7;
    MEM32(esp + 0xC) = 0x7C2754;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x001B9521u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_001B9521: ;
    MEM32(0x8F20DC) = ebx;
    goto loc_001B9576;

loc_001B9529: ;
    ecx = 0x8F1958;
    PUSH32(esp, 0x001B9533u); RECOMP_ABI_CALL(0x0003095Fu, sub_0003095F); /* call 0x0003095F */

loc_001B9533: ;
    esi = eax;
    PUSH32(esp, 0x001B953Au); RECOMP_ABI_CALL(0x0001C446u, sub_0001C446); /* call 0x0001C446 */

loc_001B953A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0x28) = 7;
    MEM32(esp + 0xC) = 0x7C2754;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x001B956Cu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_001B956C: ;
    MEM32(0x8F20DC) = 1;

loc_001B9576: ;
    PUSH32(esp, 0x8F20DC);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x328C7);
    PUSH32(esp, 0x001B9589u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_001B9589: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9594: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = 8;
    goto loc_001B99E3;

loc_001B95A3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = 8;
    goto loc_001B9998;

loc_001B95B2: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B95BCu); RECOMP_ABI_CALL(0x0002FA2Du, sub_0002FA2D); /* call 0x0002FA2D */

loc_001B95BC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B95C4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B95CBu); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B95CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B95D6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x001B95DDu); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B95DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B95E8: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x001B95EFu); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B95EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B95FA: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x001B9601u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B9601: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B960C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001B9613u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B9613: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B961E: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001B9625u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B9625: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9630: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x001B9637u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B9637: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9642: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x001B964Cu); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B964C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9657: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x001B9661u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B9661: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B966C: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x001B9676u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B9676: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9681: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x001B968Bu); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B968B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9696: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x001B96A0u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B96A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B96AB: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x001B96B5u); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B96B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B96C0: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0x001B96CAu); RECOMP_ABI_CALL(0x00019E67u, sub_00019E67); /* call 0x00019E67 */

loc_001B96CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B96D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B96DCu); RECOMP_ABI_CALL(0x0001CEA5u, sub_0001CEA5); /* call 0x0001CEA5 */

loc_001B96DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B96E7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x001B96EEu); RECOMP_ABI_CALL(0x0001CEA5u, sub_0001CEA5); /* call 0x0001CEA5 */

loc_001B96EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B96F9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x001B9700u); RECOMP_ABI_CALL(0x0001CEA5u, sub_0001CEA5); /* call 0x0001CEA5 */

loc_001B9700: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x8B21AE) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9712: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x001B9719u); RECOMP_ABI_CALL(0x0001CEA5u, sub_0001CEA5); /* call 0x0001CEA5 */

loc_001B9719: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9724: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B972Eu); RECOMP_ABI_CALL(0x00037C73u, sub_00037C73); /* call 0x00037C73 */

loc_001B972E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9736: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B9740u); RECOMP_ABI_CALL(0x000371C4u, sub_000371C4); /* call 0x000371C4 */

loc_001B9740: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9748: ;
    ecx = MEM32(0x8F0DBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9A19; /* je: equal / zero */

loc_001B9756: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001B975Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9758u); } /* indirect call */
    }

loc_001B975B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9763: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B976Du); RECOMP_ABI_CALL(0x0002BF3Bu, sub_0002BF3B); /* call 0x0002BF3B */

loc_001B976D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9775: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B977Fu); RECOMP_ABI_CALL(0x000191A1u, sub_000191A1); /* call 0x000191A1 */

loc_001B977F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9787: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B9791u); RECOMP_ABI_CALL(0x0001FA6Au, sub_0001FA6A); /* call 0x0001FA6A */

loc_001B9791: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0x28) = 5;
    MEM32(esp + 0xC) = 0x7C2754;
    PUSH32(esp, 0x001B97BBu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_001B97BB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B97C3: ;
    SET_LO8(eax, MEM8(0x8F6A24));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B97D7; /* jne: not equal / not zero */

loc_001B97CE: ;
    esi = (uint32_t)(int32_t)SMEM16(0x8F6AD8);
    goto loc_001B97F3;

loc_001B97D7: ;
    PUSH32(esp, ebx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001B97E2u); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001B97E2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B97F3; /* jl: less (signed <) */

loc_001B97E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x21 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B97F3; /* jg: greater (signed >) */

loc_001B97EE: ;
    esi = 1;

loc_001B97F3: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = 0x8F1950;
    PUSH32(esp, 0x001B9807u); RECOMP_ABI_CALL(0x00023E30u, sub_00023E30); /* call 0x00023E30 */

loc_001B9807: ;
    eax = MEM32(esp + 0x44);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    SET_LO16(ecx, MEM16(eax + 0x8F6B76));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0x8F6B78)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0x8F6B78) (16-bit) */
    SET_LO8(eax, MEM8(0x8F1880));
    if (CMP_LE(_fas, _fbs)) goto loc_001B9895; /* jle: less or equal (signed <=) */

loc_001B9823: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9903; /* je: equal / zero */

loc_001B982B: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9903; /* je: equal / zero */

loc_001B9838: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9903; /* je: equal / zero */

loc_001B9840: ;
    PUSH32(esp, 0x001B9845u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B9845: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B985B; /* jne: not equal / not zero */

loc_001B9849: ;
    PUSH32(esp, 0x001B984Eu); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B984E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B985B; /* jne: not equal / not zero */

loc_001B9852: ;
    PUSH32(esp, 0x001B9857u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B9857: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9864; /* je: equal / zero */

loc_001B985B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001B9861u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B9861: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B9864: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9870u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B9870: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9880; /* je: equal / zero */

loc_001B9874: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9880u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B9880: ;
    PUSH32(esp, 0x1C);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B988Cu); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B988C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9903; /* je: equal / zero */

loc_001B9890: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    goto loc_001B98F9;

loc_001B9895: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9903; /* je: equal / zero */

loc_001B9899: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9903; /* je: equal / zero */

loc_001B98A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9903; /* je: equal / zero */

loc_001B98A6: ;
    PUSH32(esp, 0x001B98ABu); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B98AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B98C1; /* jne: not equal / not zero */

loc_001B98AF: ;
    PUSH32(esp, 0x001B98B4u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B98B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B98C1; /* jne: not equal / not zero */

loc_001B98B8: ;
    PUSH32(esp, 0x001B98BDu); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B98BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B98CA; /* je: equal / zero */

loc_001B98C1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001B98C7u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B98C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B98CA: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B98D6u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B98D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B98E6; /* je: equal / zero */

loc_001B98DA: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B98E6u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B98E6: ;
    PUSH32(esp, 0xC);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B98F2u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B98F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9903; /* je: equal / zero */

loc_001B98F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);

loc_001B98F9: ;
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B9903u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B9903: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9910u); RECOMP_ABI_CALL(0x00019985u, sub_00019985); /* call 0x00019985 */

loc_001B9910: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB5);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001B9920u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001B9920: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B9927u); RECOMP_ABI_CALL(0x00036A0Du, sub_00036A0D); /* call 0x00036A0D */

loc_001B9927: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9932: ;
    ecx = MEM32(0x8F0DBC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9945; /* je: equal / zero */

loc_001B993E: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x001B9945u); RECOMP_ABI_CALL(0x0002F852u, sub_0002F852); /* call 0x0002F852 */

loc_001B9945: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0x28) = 9;
    MEM32(esp + 0xC) = 0x7C2754;
    MEM32(esp + 0x2C) = 2;
    PUSH32(esp, 0x001B9975u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_001B9975: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B997D: ;
    ecx = MEM32(0x8F0DBC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9990; /* je: equal / zero */

loc_001B9989: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x001B9990u); RECOMP_ABI_CALL(0x0002F852u, sub_0002F852); /* call 0x0002F852 */

loc_001B9990: ;
    MEM32(esp + 0x28) = 9;

loc_001B9998: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0xC) = 0x7C2754;
    MEM32(esp + 0x2C) = 1;
    PUSH32(esp, 0x001B99C0u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_001B99C0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B99C8: ;
    ecx = MEM32(0x8F0DBC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B99DB; /* je: equal / zero */

loc_001B99D4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B99DBu); RECOMP_ABI_CALL(0x0002F852u, sub_0002F852); /* call 0x0002F852 */

loc_001B99DB: ;
    MEM32(esp + 0x28) = 9;

loc_001B99E3: ;
    MEM32(esp + 0x2C) = ebx;

loc_001B99E7: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0xC) = 0x7C2754;
    PUSH32(esp, 0x001B9A07u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_001B9A07: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001B9A0F: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B9A19u); RECOMP_ABI_CALL(0x0002765Cu, sub_0002765C); /* call 0x0002765C */

loc_001B9A19: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001B9A1B: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9CD0
 * Original: 0x001B9CD0 - 0x001B9E0E (318 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9CD0: ;
    SET_LO8(eax, MEM8(0x8F0DA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9DFA; /* je: equal / zero */

loc_001B9CDD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B9CE4u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B9CE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9D08; /* je: equal / zero */

loc_001B9CEB: ;
    PUSH32(esp, 0x001B9CF0u); RECOMP_ABI_CALL(0x00022E7Cu, sub_00022E7C); /* call 0x00022E7C */

loc_001B9CF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9D0B; /* je: equal / zero */

loc_001B9CF4: ;
    PUSH32(esp, 0x28110);
    MEM8(0x8F0DA6) = 1;
    PUSH32(esp, 0x001B9D05u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001B9D05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B9D08: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001B9D0B: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x896168)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896168), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9D24; /* jne: not equal / not zero */

loc_001B9D17: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0x4B0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9D24; /* jne: not equal / not zero */

loc_001B9D22: ;
    SET_LO8(ecx, 1);

loc_001B9D24: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9D35; /* je: equal / zero */

loc_001B9D2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9D35; /* je: equal / zero */

loc_001B9D31: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001B9D37;

loc_001B9D35: ;
    SET_LO8(eax, 1);

loc_001B9D37: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001B9DFD; /* jne: not equal / not zero */

loc_001B9D40: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9DFD; /* jne: not equal / not zero */

loc_001B9D48: ;
    PUSH32(esp, 3);
    ecx = 0x8F2100;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x001B9D56u); RECOMP_ABI_CALL(0x00037278u, sub_00037278); /* call 0x00037278 */

loc_001B9D56: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9D62u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B9D62: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9D6Eu); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B9D6E: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B9D78u); RECOMP_ABI_CALL(0x0002F1FEu, sub_0002F1FE); /* call 0x0002F1FE */

loc_001B9D78: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001B9D82u); RECOMP_ABI_CALL(0x0002C639u, sub_0002C639); /* call 0x0002C639 */

loc_001B9D82: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001B9DF3; /* jne: not equal / not zero */

loc_001B9D87: ;
    SET_LO8(eax, MEM8(0x8F1880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9DF3; /* je: equal / zero */

loc_001B9D90: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9DF3; /* je: equal / zero */

loc_001B9D99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9DF3; /* je: equal / zero */

loc_001B9D9D: ;
    PUSH32(esp, 0x001B9DA2u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_001B9DA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9DB8; /* jne: not equal / not zero */

loc_001B9DA6: ;
    PUSH32(esp, 0x001B9DABu); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_001B9DAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9DB8; /* jne: not equal / not zero */

loc_001B9DAF: ;
    PUSH32(esp, 0x001B9DB4u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_001B9DB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9DC6; /* je: equal / zero */

loc_001B9DB8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B9DBFu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B9DBF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9DF3; /* je: equal / zero */

loc_001B9DC6: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9DD2u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001B9DD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9DF3; /* jne: not equal / not zero */

loc_001B9DD6: ;
    PUSH32(esp, 0x10);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B9DE2u); RECOMP_ABI_CALL(0x0002F3B6u, sub_0002F3B6); /* call 0x0002F3B6 */

loc_001B9DE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9DF3; /* je: equal / zero */

loc_001B9DE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001B9DF3u); RECOMP_ABI_CALL(0x00036594u, sub_00036594); /* call 0x00036594 */

loc_001B9DF3: ;
    MEM8(0x8F0DA5) = 1;

loc_001B9DFA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001B9DFD: ;
    ecx = 0x8F2100;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x001B9E09u); RECOMP_ABI_CALL(0x000180B7u, sub_000180B7); /* call 0x000180B7 */

loc_001B9E09: ;
    goto loc_001B9D6E;

}

/**
 * sub_001B9E60
 * Original: 0x001B9E60 - 0x001B9F30 (208 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9E60: ;
    SET_LO8(eax, MEM8(0x8F0DA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9F2D; /* je: equal / zero */

loc_001B9E6D: ;
    SET_LO8(eax, MEM8(0x8F0DA6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9E8C; /* je: equal / zero */

loc_001B9E76: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9E82u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B9E82: ;
    MEM8(0x8F0DA6) = 0;

loc_001B9E89: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001B9E8C: ;
    SET_LO8(eax, MEM8(0x8F0DA5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9F2D; /* je: equal / zero */

loc_001B9E99: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B9EA0u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_001B9EA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9E89; /* je: equal / zero */

loc_001B9EA7: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x896168)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896168), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9EC0; /* jne: not equal / not zero */

loc_001B9EB3: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0x4B0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9EC0; /* jne: not equal / not zero */

loc_001B9EBE: ;
    SET_LO8(ecx, 1);

loc_001B9EC0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9ED1; /* je: equal / zero */

loc_001B9EC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9ED1; /* je: equal / zero */

loc_001B9ECD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001B9ED3;

loc_001B9ED1: ;
    SET_LO8(eax, 1);

loc_001B9ED3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9EDB; /* jne: not equal / not zero */

loc_001B9ED7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9EE7; /* je: equal / zero */

loc_001B9EDB: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9EE5u); RECOMP_ABI_CALL(0x00029434u, sub_00029434); /* call 0x00029434 */

loc_001B9EE5: ;
    goto loc_001B9EFF;

loc_001B9EE7: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9EF3u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001B9EF3: ;
    PUSH32(esp, 3);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001B9EFFu); RECOMP_ABI_CALL(0x0002269Du, sub_0002269D); /* call 0x0002269D */

loc_001B9EFF: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001B9F09u); RECOMP_ABI_CALL(0x00019FC5u, sub_00019FC5); /* call 0x00019FC5 */

loc_001B9F09: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001B9F13u); RECOMP_ABI_CALL(0x00036044u, sub_00036044); /* call 0x00036044 */

loc_001B9F13: ;
    SET_LO8(eax, MEM8(0x8B216C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9F26; /* je: equal / zero */

loc_001B9F1C: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001B9F26u); RECOMP_ABI_CALL(0x00033B14u, sub_00033B14); /* call 0x00033B14 */

loc_001B9F26: ;
    MEM8(0x8F0DA5) = 0;

loc_001B9F2D: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9F70
 * Original: 0x001B9F70 - 0x001BA055 (229 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9F70: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x8B367C;
    MEM32(0x8F0DD4) = ebx;
    MEM32(0x8F0DD8) = ebx;
    MEM32(0x8F0DDC) = ebx;
    MEM32(0x8F0DE0) = ebx;
    MEM32(0x8F0DE4) = ebx;
    PUSH32(esp, 0x001B9F9Bu); RECOMP_ABI_CALL(0x0001A236u, sub_0001A236); /* call 0x0001A236 */

loc_001B9F9B: ;
    ecx = MEM32(0x8B2244);
    eax = (uint32_t)(int32_t)SMEM16(0x896160);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    MEM32(0x8F0E04) = eax;
    eax = MEM32(0x896158);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8B2258) = ecx;
    ecx = 0x8B2228;
    MEM32(0x8F0DF0) = ebx;
    MEM32(0x8F0DF4) = ebx;
    MEM32(0x8F0E08) = ebx;
    MEM8(0x8B20D0) = LO8(ebx);
    MEM32(0x8B20D4) = ebx;
    MEM32(0x8B20D8) = ebx;
    MEM8(0x8B2150) = LO8(ebx);
    MEM8(0x8B216C) = LO8(ebx);
    MEM8(0x8B21AC) = LO8(ebx);
    MEM8(0x8B21AE) = LO8(ebx);
    MEM32(0x8B22C8) = eax;
    PUSH32(esp, 0x001BA008u); RECOMP_ABI_CALL(0x00024A29u, sub_00024A29); /* call 0x00024A29 */

loc_001BA008: ;
    PUSH32(esp, 0x001BA00Du); RECOMP_ABI_CALL(0x000113A2u, sub_000113A2); /* call 0x000113A2 */

loc_001BA00D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8F0CD8) = eax;
    MEM32(0x8F0CDC) = eax;
    MEM8(0x8F0CE0) = LO8(ebx);
    MEM32(0x8F0CE8) = ebx;
    MEM8(0x8F0CEC) = LO8(ebx);
    MEM8(0x8F0CED) = LO8(ebx);
    PUSH32(esp, 0x001BA037u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001BA037: ;
    ecx = eax;
    PUSH32(esp, 0x001BA03Eu); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_001BA03E: ;
    edx = SX16(LO16(eax));
    PUSH32(esp, 0x1E);
    ecx = 0x8F1868;
    MEM32(0x8F0CE4) = edx;
    PUSH32(esp, 0x001BA053u); RECOMP_ABI_CALL(0x0002E682u, sub_0002E682); /* call 0x0002E682 */

loc_001BA053: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BA090
 * Original: 0x001BA090 - 0x001BA09F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA090(void)
{

loc_001BA090: ;
    PUSH32(esp, 1);
    ecx = 0x8F0CF4;
    PUSH32(esp, 0x001BA09Cu); RECOMP_ABI_CALL(0x00022567u, sub_00022567); /* call 0x00022567 */

loc_001BA09C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001BA0B0
 * Original: 0x001BA0B0 - 0x001BA182 (210 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA0B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA17E; /* je: equal / zero */

loc_001BA0BE: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA17E; /* je: equal / zero */

loc_001BA0C9: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BA177; /* jne: not equal / not zero */

loc_001BA0D4: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BA157; /* je: equal / zero */

loc_001BA0E9: ;
    edi = MEM32(eax * 4 + 0x8E8EB8);
    ecx = edi;
    PUSH32(esp, 0x001BA0F7u); RECOMP_ABI_CALL(0x00036DAFu, sub_00036DAF); /* call 0x00036DAF */

loc_001BA0F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA107; /* je: equal / zero */

loc_001BA0FB: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebp = ecx;

loc_001BA107: ;
    SET_LO8(eax, MEM8(esi + 0x3B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA129; /* je: equal / zero */

loc_001BA10E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(esi + 0x3B) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001BA129; /* jne: not equal / not zero */

loc_001BA116: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20006);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001BA126u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001BA126: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BA129: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA148; /* je: equal / zero */

loc_001BA130: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20001);
    PUSH32(esp, 0x8B21B8);
    MEM8(esi + 0x3C) = 0;
    PUSH32(esp, 0x001BA145u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001BA145: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BA148: ;
    SET_LO8(eax, MEM8(esi + 0x3D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA157; /* je: equal / zero */

loc_001BA14F: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001BA157u); RECOMP_ABI_CALL(0x000379EEu, sub_000379EE); /* call 0x000379EE */

loc_001BA157: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001BA163u); RECOMP_ABI_CALL(0x000240B0u, sub_000240B0); /* call 0x000240B0 */

loc_001BA163: ;
    SET_LO8(eax, MEM8(0x8B21D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BA175; /* jne: not equal / not zero */

loc_001BA16C: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BA175u); RECOMP_ABI_CALL(0x00021AF4u, sub_00021AF4); /* call 0x00021AF4 */

loc_001BA175: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001BA177: ;
    ecx = esi;
    PUSH32(esp, 0x001BA17Eu); RECOMP_ABI_CALL(0x00028741u, sub_00028741); /* call 0x00028741 */

loc_001BA17E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BA1C0
 * Original: 0x001BA1C0 - 0x001BA405 (581 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA1C0(void)
{

loc_001BA1C0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30F2C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001BA1D4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA1D4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x365C1);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x001BA1E8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA1E8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x25E0B);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x001BA1FCu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA1FC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x23AA7);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x001BA210u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA210: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24CA9);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001BA224u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA224: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x20ABE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BA238u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA238: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1EE8F);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x001BA24Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA24C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x13E68);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x001BA260u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA260: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x33EDE);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x001BA274u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA274: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x31021);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001BA288u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA288: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x17BA8);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x001BA29Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA29C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16FFA);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x001BA2B0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA2B0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1C0AE);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x001BA2C4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA2C4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36B07);
    PUSH32(esp, 0x41);
    PUSH32(esp, 0x001BA2D8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA2D8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1CD1F);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x001BA2ECu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA2EC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x363D2);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x001BA300u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA300: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0x2BF27);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x001BA314u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA314: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2B211);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001BA328u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA328: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x13A8F);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x001BA33Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA33C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1136B);
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x001BA350u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA350: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x319FE);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x001BA364u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA364: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x14962);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x001BA378u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA378: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x37890);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x001BA38Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA38C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36201);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x001BA3A0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA3A0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x22CD8);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x001BA3B4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA3B4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26234);
    PUSH32(esp, 6);
    PUSH32(esp, 0x001BA3C8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA3C8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24763);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x001BA3DCu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA3DC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x13C5B);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x001BA3F0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA3F0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2BA77);
    PUSH32(esp, 0x53);
    PUSH32(esp, 0x001BA404u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BA404: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA4A0
 * Original: 0x001BA4A0 - 0x001BAAEB (1611 bytes, 421 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001BA4A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x39);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BA4B5; /* jl: less (signed <) */

loc_001BA4B2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001BA4B5: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    PUSH32(esp, esi);
    esi = ecx + eax + 0x8F5BDC;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDDE8;
    PUSH32(esp, 0x001BA4E1u); RECOMP_ABI_CALL(0x000215C2u, sub_000215C2); /* call 0x000215C2 */

loc_001BA4E1: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA4FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA4F5: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA4FE;

loc_001BA4FA: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA4FE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA510; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA50B: ;
    edi = 1;

loc_001BA510: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDA74;
    PUSH32(esp, 0x001BA527u); RECOMP_ABI_CALL(0x00025C6Cu, sub_00025C6C); /* call 0x00025C6C */

loc_001BA527: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA540; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA53B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA544;

loc_001BA540: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA544: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA554; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA551: ;
    edi = edi | 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA554: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDA98;
    PUSH32(esp, 0x001BA56Bu); RECOMP_ABI_CALL(0x0003730Eu, sub_0003730E); /* call 0x0003730E */

loc_001BA56B: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA584; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA57F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA588;

loc_001BA584: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA588: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA598; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA595: ;
    edi = edi | 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA598: ;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDAC0;
    PUSH32(esp, 0x001BA5AFu); RECOMP_ABI_CALL(0x00020DCAu, sub_00020DCA); /* call 0x00020DCA */

loc_001BA5AF: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA5C8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA5C3: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA5CC;

loc_001BA5C8: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA5CC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA5DC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA5D9: ;
    edi = edi | 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA5DC: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDAE4;
    PUSH32(esp, 0x001BA5F3u); RECOMP_ABI_CALL(0x00023E99u, sub_00023E99); /* call 0x00023E99 */

loc_001BA5F3: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA60C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA607: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA610;

loc_001BA60C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA610: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA620; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA61D: ;
    edi = edi | 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA620: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDB0C;
    PUSH32(esp, 0x001BA637u); RECOMP_ABI_CALL(0x0002A53Cu, sub_0002A53C); /* call 0x0002A53C */

loc_001BA637: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA650; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA64B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA654;

loc_001BA650: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA654: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA664; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA661: ;
    edi = edi | 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA664: ;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDB34;
    PUSH32(esp, 0x001BA67Bu); RECOMP_ABI_CALL(0x0002816Au, sub_0002816A); /* call 0x0002816A */

loc_001BA67B: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA694; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA68F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA698;

loc_001BA694: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA698: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA6A8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA6A5: ;
    edi = edi | 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA6A8: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDB58;
    PUSH32(esp, 0x001BA6BFu); RECOMP_ABI_CALL(0x0001E52Au, sub_0001E52A); /* call 0x0001E52A */

loc_001BA6BF: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA6D8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA6D3: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA6DC;

loc_001BA6D8: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA6DC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA6EF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA6E9: ;
    edi = edi | 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA6EF: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDB80;
    PUSH32(esp, 0x001BA706u); RECOMP_ABI_CALL(0x00030748u, sub_00030748); /* call 0x00030748 */

loc_001BA706: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA71F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA71A: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA723;

loc_001BA71F: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA723: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA736; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA730: ;
    edi = edi | 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA736: ;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDBA8;
    PUSH32(esp, 0x001BA74Du); RECOMP_ABI_CALL(0x00022891u, sub_00022891); /* call 0x00022891 */

loc_001BA74D: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA766; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA761: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA76A;

loc_001BA766: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA76A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA77D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA777: ;
    edi = edi | 0x200;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA77D: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDBCC;
    PUSH32(esp, 0x001BA794u); RECOMP_ABI_CALL(0x00031CCEu, sub_00031CCE); /* call 0x00031CCE */

loc_001BA794: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA7AD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA7A8: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA7B1;

loc_001BA7AD: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA7B1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA7C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA7BE: ;
    edi = edi | 0x400;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA7C4: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDBF8;
    PUSH32(esp, 0x001BA7DBu); RECOMP_ABI_CALL(0x000339DEu, sub_000339DE); /* call 0x000339DE */

loc_001BA7DB: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA7F4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA7EF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA7F8;

loc_001BA7F4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA7F8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA80B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA805: ;
    edi = edi | 0x800;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA80B: ;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDC24;
    PUSH32(esp, 0x001BA822u); RECOMP_ABI_CALL(0x00013A1Cu, sub_00013A1C); /* call 0x00013A1C */

loc_001BA822: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA83B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA836: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA83F;

loc_001BA83B: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA83F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA852; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA84C: ;
    edi = edi | 0x1000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA852: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDC58;
    PUSH32(esp, 0x001BA869u); RECOMP_ABI_CALL(0x00013378u, sub_00013378); /* call 0x00013378 */

loc_001BA869: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA882; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA87D: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA886;

loc_001BA882: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA886: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA899; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA893: ;
    edi = edi | 0x2000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA899: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDC8C;
    PUSH32(esp, 0x001BA8B0u); RECOMP_ABI_CALL(0x000295FBu, sub_000295FB); /* call 0x000295FB */

loc_001BA8B0: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA8C9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA8C4: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA8CD;

loc_001BA8C9: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA8CD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA8E0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA8DA: ;
    edi = edi | 0x4000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA8E0: ;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDCB4;
    PUSH32(esp, 0x001BA8F7u); RECOMP_ABI_CALL(0x0002DE99u, sub_0002DE99); /* call 0x0002DE99 */

loc_001BA8F7: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA910; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA90B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA914;

loc_001BA910: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA914: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA927; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA921: ;
    edi = edi | 0x10000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA927: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDCE0;
    PUSH32(esp, 0x001BA93Eu); RECOMP_ABI_CALL(0x000253E3u, sub_000253E3); /* call 0x000253E3 */

loc_001BA93E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA957; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA952: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA95B;

loc_001BA957: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA95B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA96E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA968: ;
    edi = edi | 0x20000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA96E: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDD00;
    PUSH32(esp, 0x001BA985u); RECOMP_ABI_CALL(0x0002DFF7u, sub_0002DFF7); /* call 0x0002DFF7 */

loc_001BA985: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA99E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA999: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA9A2;

loc_001BA99E: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA9A2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA9B5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA9AF: ;
    edi = edi | 0x40000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA9B5: ;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDD28;
    PUSH32(esp, 0x001BA9CCu); RECOMP_ABI_CALL(0x00032C78u, sub_00032C78); /* call 0x00032C78 */

loc_001BA9CC: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA9E5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA9E0: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BA9E9;

loc_001BA9E5: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BA9E9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BA9FC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BA9F6: ;
    edi = edi | 0x80000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BA9FC: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDD50;
    PUSH32(esp, 0x001BAA13u); RECOMP_ABI_CALL(0x0001A2DBu, sub_0001A2DB); /* call 0x0001A2DB */

loc_001BAA13: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BAA2C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BAA27: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BAA30;

loc_001BAA2C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BAA30: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BAA43; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BAA3D: ;
    edi = edi | 0x100000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BAA43: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDD78;
    PUSH32(esp, 0x001BAA5Au); RECOMP_ABI_CALL(0x00012928u, sub_00012928); /* call 0x00012928 */

loc_001BAA5A: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BAA73; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BAA6E: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001BAA77;

loc_001BAA73: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001BAA77: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BAA8A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BAA84: ;
    edi = edi | 0x200000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BAA8A: ;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x7CDDA4;
    PUSH32(esp, 0x001BAAA1u); RECOMP_ABI_CALL(0x00028007u, sub_00028007); /* call 0x00028007 */

loc_001BAAA1: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca >= _fcb)) goto loc_001BAABD; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001BAAB6: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_001BAABD: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BAAD0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001BAACA: ;
    edi = edi | 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BAAD0: ;
    PUSH32(esp, ebx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BAADBu); RECOMP_ABI_CALL(0x0001EEF3u, sub_0001EEF3); /* call 0x0001EEF3 */

loc_001BAADB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BAAE5; /* je: equal / zero */

loc_001BAADF: ;
    edi = edi | 0x800000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BAAE5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BAC80
 * Original: 0x001BAC80 - 0x001BACED (109 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BAC80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BACC3; /* je: equal / zero */

loc_001BAC8A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BACA8; /* je: equal / zero */

loc_001BAC8D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BACCF; /* jne: not equal / not zero */

loc_001BAC90: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BAC9D; /* jne: not equal / not zero */

loc_001BAC99: ;
    esi = eax;
    goto loc_001BACCF;

loc_001BAC9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BACCF; /* jne: not equal / not zero */

loc_001BACA1: ;
    esi = 8;
    goto loc_001BACCF;

loc_001BACA8: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BACB8; /* jne: not equal / not zero */

loc_001BACB1: ;
    esi = 2;
    goto loc_001BACCF;

loc_001BACB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BACCF; /* jne: not equal / not zero */

loc_001BACBC: ;
    esi = 0x10;
    goto loc_001BACCF;

loc_001BACC3: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BACCF; /* jne: not equal / not zero */

loc_001BACCA: ;
    esi = 4;

loc_001BACCF: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BACE9; /* je: equal / zero */

loc_001BACD7: ;
    PUSH32(esp, eax);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BACE2u); RECOMP_ABI_CALL(0x00026699u, sub_00026699); /* call 0x00026699 */

loc_001BACE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BACE9; /* je: equal / zero */

loc_001BACE6: ;
    esi = esi | 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BACE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BAD10
 * Original: 0x001BAD10 - 0x001BAE4D (317 bytes, 98 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001BAD10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001BAD1Eu); RECOMP_ABI_CALL(0x00019F02u, sub_00019F02); /* call 0x00019F02 */

loc_001BAD1E: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = 4;
    ecx = MEM32(0x8E8F84);
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7EF714); /* comiss */
    eax = 8;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BAD4E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7EF714)) */

loc_001BAD47: ;
    eax = 1;
    goto loc_001BAD76;

loc_001BAD4E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BAD63; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x34)) */

loc_001BAD5C: ;
    eax = 2;
    goto loc_001BAD76;

loc_001BAD63: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C406C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001BAD76; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x34)) */

loc_001BAD71: ;
    eax = 4;

loc_001BAD76: ;
    MEM32(esi + 0x14) = eax;
    SET_LO8(eax, MEM8(edi + 0x31));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001BADB8; /* je: equal / zero */

loc_001BAD81: ;
    PUSH32(esp, 0x001BAD86u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_001BAD86: ;
    ecx = MEM32(eax * 4 + 0x8E8FA8);
    SET_LO8(eax, MEM8(0x8B23A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BADE6; /* je: equal / zero */

loc_001BAD96: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BADE6; /* je: equal / zero */

loc_001BAD9A: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    PUSH32(esp, edx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BADB6u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001BADB6: ;
    goto loc_001BADE9;

loc_001BADB8: ;
    SET_LO8(eax, MEM8(0x8B23A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(edi + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_001BADE6; /* je: equal / zero */

loc_001BADC4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BADE6; /* je: equal / zero */

loc_001BADC8: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    ecx = 0x8B23A8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BADE4u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001BADE4: ;
    goto loc_001BADE9;

loc_001BADE6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BADE9: ;
    MEM32(esi) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x3F);
    PUSH32(esp, ecx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BADFAu); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001BADFA: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x8B2750);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001BAE11; /* je: equal / zero */

loc_001BAE08: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001BAE0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BAE0Cu); } /* indirect call */
    }

loc_001BAE0F: ;
    goto loc_001BAE16;

loc_001BAE11: ;
    eax = 1;

loc_001BAE16: ;
    edx = MEM32(0x8B26F0);
    edx = edx & 0xFFFFFFDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(0x8B26F0) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001BAE35; /* jne: not equal / not zero */

loc_001BAE2A: ;
    ecx = edx;
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8B26F0) = ecx;

loc_001BAE35: ;
    MEM32(esi + 8) = eax;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BAE45u); RECOMP_ABI_CALL(0x0001E89Au, sub_0001E89A); /* call 0x0001E89A */

loc_001BAE45: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BAEA0
 * Original: 0x001BAEA0 - 0x001BAF0F (111 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BAEA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001BAEAEu); RECOMP_ABI_CALL(0x00012A3Bu, sub_00012A3B); /* call 0x00012A3B */

loc_001BAEAE: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = 2;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BAED0; /* jne: not equal / not zero */

loc_001BAEC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BAECAu); RECOMP_ABI_CALL(0x00022BC0u, sub_00022BC0); /* call 0x00022BC0 */

loc_001BAECA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;

loc_001BAED0: ;
    SET_LO8(eax, MEM8(0x8B23A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(edi + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_001BAF04; /* je: equal / zero */

loc_001BAEDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BAF04; /* je: equal / zero */

loc_001BAEE0: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    ecx = 0x8B23A8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BAEFCu); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001BAEFC: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001BAF04: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BAF30
 * Original: 0x001BAF30 - 0x001BAF81 (81 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BAF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BAF7F; /* je: equal / zero */

loc_001BAF3A: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BAF7E; /* jle: less or equal (signed <=) */

loc_001BAF47: ;
    PUSH32(esp, ebx);

loc_001BAF48: ;
    SET_LO8(ebx, MEM8(esi + eax + 0x5D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BAF53; /* jne: not equal / not zero */

loc_001BAF50: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;

loc_001BAF53: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BAF48; /* jl: less (signed <) */

loc_001BAF58: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_001BAF7E; /* jl: less (signed <) */

loc_001BAF5E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001BAF76; /* je: equal / zero */

loc_001BAF60: ;
    PUSH32(esp, 0x001BAF65u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_001BAF65: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x58) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BAF60; /* je: equal / zero */

loc_001BAF6E: ;
    SET_LO8(eax, MEM8(esi + edx + 0x5D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BAF60; /* jne: not equal / not zero */

loc_001BAF76: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001BAF7Eu); RECOMP_ABI_CALL(0x00033D94u, sub_00033D94); /* call 0x00033D94 */

loc_001BAF7E: ;
    POP32(esp, edi);

loc_001BAF7F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BAFA0
 * Original: 0x001BAFA0 - 0x001BAFC8 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BAFA0: ;
    SET_LO8(eax, MEM8(0x8B2324));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BAFB3; /* je: equal / zero */

loc_001BAFA9: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x001BAFB3u); RECOMP_ABI_CALL(0x0001D3CDu, sub_0001D3CD); /* call 0x0001D3CD */

loc_001BAFB3: ;
    PUSH32(esp, 0x1D2C9);
    PUSH32(esp, 0x001BAFBDu); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001BAFBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F0DB4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001BAFE0
 * Original: 0x001BAFE0 - 0x001BB004 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BAFE0: ;
    SET_LO8(eax, MEM8(0x8F0DB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB003; /* jne: not equal / not zero */

loc_001BAFE9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x1D2C9);
    PUSH32(esp, 0x001BAFF9u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_001BAFF9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F0DB4) = 1;

loc_001BB003: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BB010
 * Original: 0x001BB010 - 0x001BB068 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB010: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB066; /* je: equal / zero */

loc_001BB01A: ;
    PUSH32(esp, 0x63);
    PUSH32(esp, 0x001BB021u); RECOMP_ABI_CALL(0x00011C0Du, sub_00011C0D); /* call 0x00011C0D */

loc_001BB021: ;
    ecx = eax;
    PUSH32(esp, 0x001BB028u); RECOMP_ABI_CALL(0x00025DA2u, sub_00025DA2); /* call 0x00025DA2 */

loc_001BB028: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB066; /* je: equal / zero */

loc_001BB02C: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB043; /* je: equal / zero */

loc_001BB033: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB03Fu); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001BB03F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB066; /* jne: not equal / not zero */

loc_001BB043: ;
    SET_LO8(eax, MEM8(0x8F0DB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB066; /* jne: not equal / not zero */

loc_001BB04C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x1D2C9);
    PUSH32(esp, 0x001BB05Cu); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_001BB05C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F0DB4) = 1;

loc_001BB066: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BB080
 * Original: 0x001BB080 - 0x001BB110 (144 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB080: ;
    MEM32(ecx + 0x14) = 1;
    PUSH32(esp, 0x001BB08Cu); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_001BB08C: ;
    ecx = eax;
    PUSH32(esp, 0x001BB093u); RECOMP_ABI_CALL(0x00022CD3u, sub_00022CD3); /* call 0x00022CD3 */

loc_001BB093: ;
    PUSH32(esp, 1);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001BB09Fu); RECOMP_ABI_CALL(0x00014DA9u, sub_00014DA9); /* call 0x00014DA9 */

loc_001BB09F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB10F; /* je: equal / zero */

loc_001BB0A3: ;
    PUSH32(esp, 0);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB0AFu); RECOMP_ABI_CALL(0x0002E218u, sub_0002E218); /* call 0x0002E218 */

loc_001BB0AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB10F; /* je: equal / zero */

loc_001BB0B3: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB0BDu); RECOMP_ABI_CALL(0x00035847u, sub_00035847); /* call 0x00035847 */

loc_001BB0BD: ;
    ecx = 0x8F1868;
    PUSH32(esp, 0x001BB0C7u); RECOMP_ABI_CALL(0x00023E12u, sub_00023E12); /* call 0x00023E12 */

loc_001BB0C7: ;
    eax = MEM32(0x8F1878);
    ecx = MEM32(eax + 0x34);
    MEM32(0x8B22D0) = ecx;
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001BB0DFu); RECOMP_ABI_CALL(0x00022279u, sub_00022279); /* call 0x00022279 */

loc_001BB0DF: ;
    PUSH32(esp, 1);
    ecx = 0x8F0CF4;
    PUSH32(esp, 0x001BB0EBu); RECOMP_ABI_CALL(0x00022567u, sub_00022567); /* call 0x00022567 */

loc_001BB0EB: ;
    MEM32(0x8F0DA8) = 0;
    MEM8(0x8F0DA5) = 0;
    PUSH32(esp, 0x001BB101u); RECOMP_ABI_CALL(0x0001311Bu, sub_0001311B); /* call 0x0001311B */

loc_001BB101: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB10Fu); RECOMP_ABI_CALL(0x00019985u, sub_00019985); /* call 0x00019985 */

loc_001BB10F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BB140
 * Original: 0x001BB140 - 0x001BB351 (529 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB140: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x001BB155u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_001BB155: ;
    ecx = eax;
    PUSH32(esp, 0x001BB15Cu); RECOMP_ABI_CALL(0x00022CD3u, sub_00022CD3); /* call 0x00022CD3 */

loc_001BB15C: ;
    PUSH32(esp, 0x001BB161u); RECOMP_ABI_CALL(0x0002AAA5u, sub_0002AAA5); /* call 0x0002AAA5 */

loc_001BB161: ;
    PUSH32(esp, ebx);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001BB16Cu); RECOMP_ABI_CALL(0x00014DA9u, sub_00014DA9); /* call 0x00014DA9 */

loc_001BB16C: ;
    PUSH32(esp, ebx);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB177u); RECOMP_ABI_CALL(0x0002E218u, sub_0002E218); /* call 0x0002E218 */

loc_001BB177: ;
    PUSH32(esp, ebx);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001BB182u); RECOMP_ABI_CALL(0x0002DEF8u, sub_0002DEF8); /* call 0x0002DEF8 */

loc_001BB182: ;
    ecx = 0x8F1868;
    PUSH32(esp, 0x001BB18Cu); RECOMP_ABI_CALL(0x00023E12u, sub_00023E12); /* call 0x00023E12 */

loc_001BB18C: ;
    PUSH32(esp, ebx);
    ecx = 0x8F0CF4;
    PUSH32(esp, 0x001BB197u); RECOMP_ABI_CALL(0x00022567u, sub_00022567); /* call 0x00022567 */

loc_001BB197: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8F0CD8) = eax;
    MEM32(0x8F0CDC) = eax;
    MEM8(0x8F0CE0) = LO8(ebx);
    MEM32(0x8F0CE8) = ebx;
    MEM8(0x8F0CEC) = LO8(ebx);
    MEM8(0x8F0CED) = LO8(ebx);
    PUSH32(esp, 0x001BB1C1u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001BB1C1: ;
    ecx = eax;
    PUSH32(esp, 0x001BB1C8u); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_001BB1C8: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, 1);
    MEM32(0x8F0CE4) = eax;
    PUSH32(esp, 0x001BB1D7u); RECOMP_ABI_CALL(0x00011C0Du, sub_00011C0D); /* call 0x00011C0D */

loc_001BB1D7: ;
    ecx = eax;
    PUSH32(esp, 0x001BB1DEu); RECOMP_ABI_CALL(0x0002CDEBu, sub_0002CDEB); /* call 0x0002CDEB */

loc_001BB1DE: ;
    _fa = (uint32_t)(MEM8(0x8F0CD0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F0CD0), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB223; /* jne: not equal / not zero */

loc_001BB1E6: ;
    PUSH32(esp, 8);
    MEM8(0x8F0CD1) = LO8(ebx);
    MEM8(0x8F0CD0) = 1;
    PUSH32(esp, 0x001BB1FAu); RECOMP_ABI_CALL(0x00596C74u, sub_00596C74); /* call 0x00596C74 */

loc_001BB1FA: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB21D; /* je: equal / zero */

loc_001BB203: ;
    PUSH32(esp, edi);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1780);
    PUSH32(esp, 0x001BB212u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_001BB212: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F0CD4) = edi;
    goto loc_001BB223;

loc_001BB21D: ;
    MEM32(0x8F0CD4) = ebx;

loc_001BB223: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x001BB22Du); RECOMP_ABI_CALL(0x000250D2u, sub_000250D2); /* call 0x000250D2 */

loc_001BB22D: ;
    ecx = 0x8B367C;
    MEM8(0x8B20D0) = LO8(ebx);
    MEM32(0x8B20D4) = ebx;
    MEM32(0x8B20D8) = ebx;
    MEM8(0x8B2150) = LO8(ebx);
    MEM8(0x8B216C) = LO8(ebx);
    MEM8(0x8B21AC) = LO8(ebx);
    MEM8(0x8B21AE) = LO8(ebx);
    MEM8(0x8F0DA5) = LO8(ebx);
    MEM8(0x8F0DA4) = 1;
    MEM32(0x8F0DA8) = 1;
    PUSH32(esp, 0x001BB278u); RECOMP_ABI_CALL(0x0002BAF4u, sub_0002BAF4); /* call 0x0002BAF4 */

loc_001BB278: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0x8B26F0;
    MEM32(0x8F0DD4) = ebx;
    MEMF(0x8F0DC0) = xmm0.f[0]; /* movss */
    MEM32(0x8F0DD8) = ebx;
    MEMF(0x8F0DC4) = xmm0.f[0]; /* movss */
    MEM32(0x8F0DDC) = ebx;
    MEMF(0x8F0DC8) = xmm0.f[0]; /* movss */
    MEM32(0x8F0DE0) = ebx;
    MEMF(0x8F0DCC) = xmm0.f[0]; /* movss */
    MEM32(0x8F0DE4) = ebx;
    MEMF(0x8F0DD0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001BB2CBu); RECOMP_ABI_CALL(0x00022279u, sub_00022279); /* call 0x00022279 */

loc_001BB2CB: ;
    PUSH32(esp, 0x001BB2D0u); RECOMP_ABI_CALL(0x0001BE47u, sub_0001BE47); /* call 0x0001BE47 */

loc_001BB2D0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB2DD; /* je: equal / zero */

loc_001BB2D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB2EB; /* jne: not equal / not zero */

loc_001BB2DD: ;
    edx = MEM32(0x8F1878);
    eax = MEM32(edx + 0x34);
    MEM32(0x8B22D0) = eax;

loc_001BB2EB: ;
    _fa = (uint32_t)(MEM8(0x904B91)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x904B91), LO8(ebx) (8-bit) */
    eax = 0x30;
    if (CMP_NE(_fa, _fb)) goto loc_001BB2FD; /* jne: not equal / not zero */

loc_001BB2F8: ;
    eax = 0x31;

loc_001BB2FD: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BB308u); RECOMP_ABI_CALL(0x00024326u, sub_00024326); /* call 0x00024326 */

loc_001BB308: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x600);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BB31Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001BB31F: ;
    ecx = eax;
    PUSH32(esp, 0x001BB326u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_001BB326: ;
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x001BB334u); RECOMP_ABI_CALL(0x00587938u, sub_00587938); /* call 0x00587938 */

loc_001BB334: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BB342u); RECOMP_ABI_CALL(0x00587ADCu, sub_00587ADC); /* call 0x00587ADC */

loc_001BB342: ;
    PUSH32(esp, 0x001BB347u); RECOMP_ABI_CALL(0x00035991u, sub_00035991); /* call 0x00035991 */

loc_001BB347: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BB3E0
 * Original: 0x001BB3E0 - 0x001BB5F8 (536 bytes, 163 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB3E0: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x7C));
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x80);
    eax = MEM32(eax * 4 + 0x8F0040);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 0x88);
    MEM32(ecx) = 0;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 2 (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001BB5F1; /* jg: greater (signed >) */

loc_001BB413: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 1;
    goto loc_001BB421;

loc_001BB41D: ;
    eax = MEM32(esp + 0x10);

loc_001BB421: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD4);
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + edx * 4 + 0x28);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + esi * 4 + 0x2C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001BB4DC; /* je: equal / zero */

loc_001BB440: ;
    edi = MEM32(eax * 4 + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001BB4DC; /* jne: not equal / not zero */

loc_001BB450: ;
    PUSH32(esp, edi);
    MEM32(esp + esi * 4 + 0x48) = edi;
    PUSH32(esp, 0x001BB45Au); RECOMP_ABI_CALL(0x000125CCu, sub_000125CC); /* call 0x000125CC */

loc_001BB45A: ;
    ecx = MEM32(ebx + 4);
    ecx = ~ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BB466: ;
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x7ED540)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx * 4 + 0x7ED540), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001BB477; /* jne: not equal / not zero */

loc_001BB46F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001BB466; /* jl: less (signed <) */

loc_001BB475: ;
    goto loc_001BB47E;

loc_001BB477: ;
    ebp = MEM32(ecx * 4 + 0x7ED540);

loc_001BB47E: ;
    PUSH32(esp, edi);
    MEM32(esp + esi * 4 + 0x78) = ebp;
    PUSH32(esp, 0x001BB488u); RECOMP_ABI_CALL(0x00022BC0u, sub_00022BC0); /* call 0x00022BC0 */

loc_001BB488: ;
    MEM32(esp + esi * 4 + 0x60) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x896166);
    edx = MEM32(ebx + eax * 4 + 0x74);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x7ED510)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax * 4 + 0x7ED510) (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, 1);
    if (CMP_B(_fa, _fb)) goto loc_001BB4A7; /* jb: below (unsigned <) */

loc_001BB4A5: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BB4A7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB4B9; /* je: equal / zero */

loc_001BB4AB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB4B9; /* je: equal / zero */

loc_001BB4AF: ;
    MEM32(esp + esi * 4 + 0x2C) = 2;
    goto loc_001BB4DC;

loc_001BB4B9: ;
    edi = MEM32(edi + 0x230);
    eax = ZX8(MEM8(edi + 3));
    ecx = ZX8(MEM8(edi + 2));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001BB4D0u); RECOMP_ABI_CALL(0x0002690Fu, sub_0002690F); /* call 0x0002690F */

loc_001BB4D0: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + esi * 4 + 0x2C) = eax;

loc_001BB4DC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001BB41D; /* jl: less (signed <) */

loc_001BB4E6: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BB4FA; /* je: equal / zero */

loc_001BB4F1: ;
    esi = 1;
    MEM32(esp + 0x14) = esi;

loc_001BB4FA: ;
    _fa = (uint32_t)(MEM8(esp + 0x34)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x34), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BB50A; /* je: equal / zero */

loc_001BB501: ;
    MEM32(esp + esi * 4 + 0x14) = 2;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB50A: ;
    SET_LO8(ebx, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BB51C; /* je: equal / zero */

loc_001BB513: ;
    MEM32(esp + esi * 4 + 0x14) = 3;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB51C: ;
    SET_LO8(edx, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = 4;
    if (TEST_Z(_fa, _fb)) goto loc_001BB52F; /* je: equal / zero */

loc_001BB52A: ;
    MEM32(esp + esi * 4 + 0x14) = ebp;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB52F: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 5;
    if (TEST_Z(_fa, _fb)) goto loc_001BB541; /* je: equal / zero */

loc_001BB53C: ;
    MEM32(esp + esi * 4 + 0x14) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB541: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001BB586; /* jne: not equal / not zero */

loc_001BB545: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BB553; /* je: equal / zero */

loc_001BB54A: ;
    esi = 1;
    MEM32(esp + 0x14) = esi;

loc_001BB553: ;
    _fa = (uint32_t)(MEM8(esp + 0x34)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x34), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BB563; /* je: equal / zero */

loc_001BB55A: ;
    MEM32(esp + esi * 4 + 0x14) = 2;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB563: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BB571; /* je: equal / zero */

loc_001BB568: ;
    MEM32(esp + esi * 4 + 0x14) = 3;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB571: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BB57B; /* je: equal / zero */

loc_001BB576: ;
    MEM32(esp + esi * 4 + 0x14) = ebp;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB57B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BB584; /* je: equal / zero */

loc_001BB57F: ;
    MEM32(esp + esi * 4 + 0x14) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB584: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */

loc_001BB586: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001BB5EE; /* jle: less or equal (signed <=) */

loc_001BB588: ;
    PUSH32(esp, 0x001BB58Du); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_001BB58D: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BB5C5; /* jle: less or equal (signed <=) */

loc_001BB599: ;
    /* nop */

loc_001BB5A0: ;
    edx = MEM32(esp + edi * 4 + 0x14);
    eax = MEM32(esp + edx * 4 + 0x44);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x001BB5B8u); RECOMP_ABI_CALL(0x00019313u, sub_00019313); /* call 0x00019313 */

loc_001BB5B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001BB5C3; /* jne: not equal / not zero */

loc_001BB5BC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001BB5A0; /* jl: less (signed <) */

loc_001BB5C1: ;
    goto loc_001BB5C5;

loc_001BB5C3: ;
    ebx = edi;

loc_001BB5C5: ;
    eax = MEM32(esp + ebx * 4 + 0x14);
    ecx = MEM32(esp + 0x94);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(esp + eax + 0x5C);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + eax + 0x2C);
    MEM32(ecx) = edx;
    edx = MEM32(esp + eax + 0x74);
    eax = MEM32(esp + eax + 0x44);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0xC) = eax;

loc_001BB5EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001BB5F1: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x7C)) >> 32) & 1);
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BB680
 * Original: 0x001BB680 - 0x001BB743 (195 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB680: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0xA4;
    MEM32(esi) = 0;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 2 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001BB73D; /* jg: greater (signed >) */

loc_001BB6A1: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x001BB6BDu); RECOMP_ABI_CALL(0x00011415u, sub_00011415); /* call 0x00011415 */

loc_001BB6BD: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001BB6CBu); RECOMP_ABI_CALL(0x00011415u, sub_00011415); /* call 0x00011415 */

loc_001BB6CB: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB6F4; /* jne: not equal / not zero */

loc_001BB6D3: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    POP32(esp, edi);
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BB6F4: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB719; /* jne: not equal / not zero */

loc_001BB6FC: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    POP32(esp, edi);
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BB719: ;
    ecx = edi;
    PUSH32(esp, 0x001BB720u); RECOMP_ABI_CALL(0x00032B33u, sub_00032B33); /* call 0x00032B33 */

loc_001BB720: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = esp + eax + 8;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;

loc_001BB73D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BB780
 * Original: 0x001BB780 - 0x001BB7C5 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB780: ;
    PUSH32(esp, 0);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB78Cu); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001BB78C: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB798u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001BB798: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB7A4u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001BB7A4: ;
    PUSH32(esp, 0x8F1900);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x2BA9F);
    MEM32(0x8F1900) = 6;
    PUSH32(esp, 0x001BB7C1u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_001BB7C1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BB7E0
 * Original: 0x001BB7E0 - 0x001BB8A5 (197 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB7E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM16(esi + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x1C), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB804; /* je: equal / zero */

loc_001BB7EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10029);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x001BB801u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_001BB801: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BB804: ;
    PUSH32(esp, 0x001BB809u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_001BB809: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB8A3; /* jne: not equal / not zero */

loc_001BB811: ;
    SET_LO16(eax, MEM16(esi + 0x1C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB878; /* je: equal / zero */

loc_001BB81B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB878; /* je: equal / zero */

loc_001BB821: ;
    eax = SX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BB846; /* ja: above (unsigned >) */

loc_001BB82A: ;
    eax = ZX8(MEM8(eax + 0x1BB8B8));
    { uint32_t _jt = MEM32(eax * 4 + 0x1BB8A8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001BB838u) goto loc_001BB838;
    if (_jt == 0x001BB83Fu) goto loc_001BB83F;
    if (_jt == 0x001BB846u) goto loc_001BB846;
    if (_jt == 0x001BB8A3u) goto loc_001BB8A3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BB838: ;
    eax = 0x15;
    goto loc_001BB882;

loc_001BB83F: ;
    eax = 6;
    goto loc_001BB882;

loc_001BB846: ;
    SET_LO16(ecx, MEM16(0x8F6B76));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x8F6BD2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(0x8F6BD2) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BB871; /* jge: greater or equal (signed >=) */

loc_001BB856: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0x3C (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BB871; /* jge: greater or equal (signed >=) */

loc_001BB860: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB871; /* jne: not equal / not zero */

loc_001BB86A: ;
    eax = 0x1A;
    goto loc_001BB882;

loc_001BB871: ;
    eax = 7;
    goto loc_001BB882;

loc_001BB878: ;
    PUSH32(esp, 0x001BB87Du); RECOMP_ABI_CALL(0x001A7010u, sub_001A7010); /* call 0x001A7010 */

loc_001BB87D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB8A3; /* je: equal / zero */

loc_001BB882: ;
    PUSH32(esp, 0x8F1900);
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x2BA9F);
    MEM32(0x8F1900) = eax;
    PUSH32(esp, 0x001BB8A0u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_001BB8A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BB8A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BB910
 * Original: 0x001BB910 - 0x001BBB90 (640 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB910: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BB919u); RECOMP_ABI_CALL(0x0001983Bu, sub_0001983B); /* call 0x0001983B */

loc_001BB919: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB92A; /* je: equal / zero */

loc_001BB920: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB92A; /* je: equal / zero */

loc_001BB925: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB92C; /* jne: not equal / not zero */

loc_001BB92A: ;
    SET_LO8(ebx, 1);

loc_001BB92C: ;
    _fa = (uint32_t)(MEM16(0x896168)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896168), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB94A; /* jne: not equal / not zero */

loc_001BB936: ;
    PUSH32(esp, 0x001BB93Bu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001BB93B: ;
    ecx = eax;
    PUSH32(esp, 0x001BB942u); RECOMP_ABI_CALL(0x0001A907u, sub_0001A907); /* call 0x0001A907 */

loc_001BB942: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB94A; /* jne: not equal / not zero */

loc_001BB946: ;
    SET_LO8(eax, 1);
    goto loc_001BB94C;

loc_001BB94A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BB94C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB990; /* jne: not equal / not zero */

loc_001BB950: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB990; /* jne: not equal / not zero */

loc_001BB954: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BB960u); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001BB960: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB970; /* je: equal / zero */

loc_001BB964: ;
    PUSH32(esp, 0x1E);
    ecx = 0x8F1868;
    PUSH32(esp, 0x001BB970u); RECOMP_ABI_CALL(0x0002E682u, sub_0002E682); /* call 0x0002E682 */

loc_001BB970: ;
    PUSH32(esp, 0x8F1900);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x2BA9F);
    MEM32(0x8F1900) = 5;
    PUSH32(esp, 0x001BB98Du); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_001BB98D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BB990: ;
    PUSH32(esp, 0x001BB995u); RECOMP_ABI_CALL(0x00020C6Cu, sub_00020C6C); /* call 0x00020C6C */

loc_001BB995: ;
    SET_LO8(eax, MEM8(0x8B20D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBA1C; /* je: equal / zero */

loc_001BB99E: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x8F1950;
    PUSH32(esp, 0x001BB9B2u); RECOMP_ABI_CALL(0x00023E30u, sub_00023E30); /* call 0x00023E30 */

loc_001BB9B2: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8B211E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001BB9D7; /* je: equal / zero */

loc_001BB9C6: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x8B2128);
    eax = (uint32_t)(int32_t)SMEM16(0x8B212A);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001BB9E6;

loc_001BB9D7: ;
    eax = (uint32_t)(int32_t)SMEM16(0x8B2128);
    ecx = (uint32_t)(int32_t)SMEM16(0x8B212A);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BB9E6: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BB9F2u); RECOMP_ABI_CALL(0x00018102u, sub_00018102); /* call 0x00018102 */

loc_001BB9F2: ;
    ecx = MEM32(0x8F0E08);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBA1C; /* je: equal / zero */

loc_001BB9FF: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001BBA09u); RECOMP_ABI_CALL(0x0001BAEBu, sub_0001BAEB); /* call 0x0001BAEB */

loc_001BBA09: ;
    MEM8(0x8B20D0) = 0;
    MEM8(0x8B2150) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BBA1C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x8F1950;
    PUSH32(esp, 0x001BBA30u); RECOMP_ABI_CALL(0x00023E30u, sub_00023E30); /* call 0x00023E30 */

loc_001BBA30: ;
    _fa = (uint32_t)(MEM16(0x896168)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896168), 0 (16-bit) */
    MEM32(0x8F0DEC) = 1;
    MEM8(0x8F0DE8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001BBA5F; /* jne: not equal / not zero */

loc_001BBA4B: ;
    PUSH32(esp, 0x001BBA50u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001BBA50: ;
    ecx = eax;
    PUSH32(esp, 0x001BBA57u); RECOMP_ABI_CALL(0x0001A907u, sub_0001A907); /* call 0x0001A907 */

loc_001BBA57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BBA5F; /* jne: not equal / not zero */

loc_001BBA5B: ;
    SET_LO8(ebx, 1);
    goto loc_001BBA61;

loc_001BBA5F: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BBA61: ;
    PUSH32(esp, 0x001BBA66u); RECOMP_ABI_CALL(0x005BE7DAu, sub_005BE7DA); /* call 0x005BE7DA */

loc_001BBA66: ;
    PUSH32(esp, 0x328C7);
    PUSH32(esp, 0x001BBA70u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001BBA70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001BBA78u); RECOMP_ABI_CALL(0x0001A713u, sub_0001A713); /* call 0x0001A713 */

loc_001BBA78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBAC9; /* je: equal / zero */

loc_001BBA7C: ;
    edx = MEM32(0x8F0044);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    ecx = MEM32(0x8F0040);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BBAB3; /* jne: not equal / not zero */

loc_001BBA9D: ;
    ecx = 0x8F1950;
    PUSH32(esp, 0x001BBAA7u); RECOMP_ABI_CALL(0x0002492Au, sub_0002492A); /* call 0x0002492A */

loc_001BBAA7: ;
    MEM8(0x8B2150) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BBAB3: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001BBABDu); RECOMP_ABI_CALL(0x00035441u, sub_00035441); /* call 0x00035441 */

loc_001BBABD: ;
    MEM8(0x8B2150) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BBAC9: ;
    _fa = (uint32_t)(MEM8(0x8B2150)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8B2150), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BBAE1; /* jne: not equal / not zero */

loc_001BBAD2: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001BBADCu); RECOMP_ABI_CALL(0x00022AA3u, sub_00022AA3); /* call 0x00022AA3 */

loc_001BBADC: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BBAE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BBAF6u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BBAF6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BBB00u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BBAFAu); } /* indirect call */
    }

loc_001BBB00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BBB90
 * Original: 0x001BBB90 - 0x001BBDE1 (593 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBB90: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ecx = esp + 8;
    PUSH32(esp, 0x001BBBA2u); RECOMP_ABI_CALL(0x000249B1u, sub_000249B1); /* call 0x000249B1 */

loc_001BBBA2: ;
    PUSH32(esp, ebp);
    ecx = 0x8B20C0;
    PUSH32(esp, 0x001BBBADu); RECOMP_ABI_CALL(0x000144B2u, sub_000144B2); /* call 0x000144B2 */

loc_001BBBAD: ;
    PUSH32(esp, 0x001BBBB2u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_001BBBB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BBDDC; /* jne: not equal / not zero */

loc_001BBBBA: ;
    PUSH32(esp, 0x001BBBBFu); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_001BBBBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBBE7; /* je: equal / zero */

loc_001BBBC3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0xDF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BBBD5u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BBBD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BBBDFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BBBD9u); } /* indirect call */
    }

loc_001BBBDF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BBBE7: ;
    PUSH32(esp, 0x001BBBECu); RECOMP_ABI_CALL(0x005BE7DAu, sub_005BE7DA); /* call 0x005BE7DA */

loc_001BBBEC: ;
    PUSH32(esp, 3);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BBBF8u); RECOMP_ABI_CALL(0x0003607Bu, sub_0003607B); /* call 0x0003607B */

loc_001BBBF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BBC11; /* jne: not equal / not zero */

loc_001BBBFC: ;
    _fa = (uint32_t)(MEM32(0x8B240C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8B240C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBC11; /* je: equal / zero */

loc_001BBC05: ;
    PUSH32(esp, 3);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BBC11u); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001BBC11: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBC44; /* je: equal / zero */

loc_001BBC1D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBC44; /* je: equal / zero */

loc_001BBC22: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BBC2Eu); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001BBC2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBC3E; /* je: equal / zero */

loc_001BBC32: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BBC3Eu); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001BBC3E: ;
    SET_LO8(ebx, MEM8(0x8F6A27));

loc_001BBC44: ;
    MEM8(0x8F1950) = 0;
    SET_LO8(eax, MEM8(ebp + 0x31));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBCA1; /* je: equal / zero */

loc_001BBC52: ;
    PUSH32(esp, 0x001BBC57u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_001BBC57: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BBC7B; /* jne: not equal / not zero */

loc_001BBC64: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BBC73u); RECOMP_ABI_CALL(0x000338DAu, sub_000338DA); /* call 0x000338DA */

loc_001BBC73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BBD7F;

loc_001BBC7B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BBC8Eu); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001BBC8E: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BBC99u); RECOMP_ABI_CALL(0x00031CE2u, sub_00031CE2); /* call 0x00031CE2 */

loc_001BBC99: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BBD7F;

loc_001BBCA1: ;
    SET_LO8(eax, MEM8(ebp + 0x3E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBCDD; /* je: equal / zero */

loc_001BBCA8: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x3F);
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x8B20D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x8B20D4), 3 (32-bit) */
    eax = 1;
    if (CMP_L(_fas, _fbs)) goto loc_001BBCC0; /* jl: less (signed <) */

loc_001BBCBB: ;
    eax = 3;

loc_001BBCC0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BBCD5u); RECOMP_ABI_CALL(0x00017969u, sub_00017969); /* call 0x00017969 */

loc_001BBCD5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BBD7F;

loc_001BBCDD: ;
    edx = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    eax = MEM32(ecx + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BBCFFu); RECOMP_ABI_CALL(0x0001CC52u, sub_0001CC52); /* call 0x0001CC52 */

loc_001BBCFF: ;
    edi = eax;
    eax = MEM32(0x8F0E08);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BBD0F; /* jne: not equal / not zero */

loc_001BBD0D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BBD0F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBD23; /* je: equal / zero */

loc_001BBD14: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBD23; /* je: equal / zero */

loc_001BBD19: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x34) = ecx;
    goto loc_001BBD2B;

loc_001BBD23: ;
    MEM32(esp + 0x34) = 0;

loc_001BBD2B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBD3B; /* je: equal / zero */

loc_001BBD30: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBD3B; /* je: equal / zero */

loc_001BBD35: ;
    esi = MEM32(esp + 0x28);
    goto loc_001BBD3D;

loc_001BBD3B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BBD3D: ;
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BBD4Bu); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001BBD4B: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BBD56u); RECOMP_ABI_CALL(0x0003468Bu, sub_0003468B); /* call 0x0003468B */

loc_001BBD56: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BBD7Au); RECOMP_ABI_CALL(0x00035CE8u, sub_00035CE8); /* call 0x00035CE8 */

loc_001BBD7A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001BBD7F: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001BBDDC; /* je: equal / zero */

loc_001BBD89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBDDC; /* je: equal / zero */

loc_001BBD8D: ;
    ecx = MEM32(ebp + 0x20);
    SET_LO8(edx, MEM8(ecx + 0x30));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBDA1; /* je: equal / zero */

loc_001BBD97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBDA1; /* je: equal / zero */

loc_001BBD9B: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0);
    goto loc_001BBDA8;

loc_001BBDA1: ;
    PUSH32(esp, 0x168);
    PUSH32(esp, 8);

loc_001BBDA8: ;
    ecx = 0x8F1868;
    PUSH32(esp, 0x001BBDB2u); RECOMP_ABI_CALL(0x00013008u, sub_00013008); /* call 0x00013008 */

loc_001BBDB2: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001BBDC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BBDBDu); } /* indirect call */
    }

loc_001BBDC0: ;
    PUSH32(esp, 0x74);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8B20DC);
    MEM32(0x8F0DFC) = eax;
    MEM8(0x8B20D0) = 1;
    PUSH32(esp, 0x001BBDD9u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001BBDD9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BBDDC: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BBE80
 * Original: 0x001BBE80 - 0x001BBE90 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBE80(void)
{

loc_001BBE80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x001BBE8Fu); RECOMP_ABI_CALL(0x00028BC9u, sub_00028BC9); /* call 0x00028BC9 */

loc_001BBE8F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BBEA0
 * Original: 0x001BBEA0 - 0x001BBF42 (162 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBEA0: ;
    PUSH32(esp, 0x001BBEA5u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001BBEA5: ;
    ecx = eax;
    PUSH32(esp, 0x001BBEACu); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_001BBEAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BBF41; /* jne: not equal / not zero */

loc_001BBEB4: ;
    PUSH32(esp, 0x001BBEB9u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_001BBEB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBEC2; /* je: equal / zero */

loc_001BBEBD: ;
    g_seh_ebp = ebp; sub_0001C7D4(); return; /* tail jmp 0x0001C7D4 */

loc_001BBEC2: ;
    PUSH32(esp, 0x001BBEC7u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_001BBEC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBEEB; /* je: equal / zero */

loc_001BBECB: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0xDF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BBEDDu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BBEDD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BBEE7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BBEE1u); } /* indirect call */
    }

loc_001BBEE7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BBEEB: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001BBEF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BBEF6u); } /* indirect call */
    }

loc_001BBEF9: ;
    _fb = (uint32_t)(MEM32(0x8F0DF0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x8F0DF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BBF41; /* jl: less (signed <) */

loc_001BBF04: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi + 0x1D));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0x8B26F0;
    eax = eax + eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x001BBF27u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001BBF27: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BBF37u); RECOMP_ABI_CALL(0x00030437u, sub_00030437); /* call 0x00030437 */

loc_001BBF37: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BBF3Du); RECOMP_ABI_CALL(0x000358C9u, sub_000358C9); /* call 0x000358C9 */

loc_001BBF3D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001BBF41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BBF70
 * Original: 0x001BBF70 - 0x001BBFC1 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BBF70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ZX8(MEM8(esi + 0x1C));
    ecx = ZX16(MEM16(esi + 0x1E));
    ebx = MEM32(ecx * 4 + 0x8E8FA8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x8E8FA8);
    PUSH32(esp, 0x001BBF94u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001BBF94: ;
    ecx = eax;
    PUSH32(esp, 0x001BBF9Bu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_001BBF9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBFBD; /* je: equal / zero */

loc_001BBF9F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBFBD; /* je: equal / zero */

loc_001BBFA3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x1C));
    PUSH32(esp, 0);
    ecx = 0x8F0DE8;
    edx = edx & 0xFFFFFF01u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BBFBDu); RECOMP_ABI_CALL(0x00016B8Bu, sub_00016B8B); /* call 0x00016B8B */

loc_001BBFBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BBFE0
 * Original: 0x001BBFE0 - 0x001BBFF8 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBFE0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x1E));
    MEM32(0x8B2188) = ecx;
    ecx = 0x8F0DE8;
    g_seh_ebp = ebp; sub_0001408E(); return; /* tail jmp 0x0001408E */

}

/**
 * sub_001BC000
 * Original: 0x001BC000 - 0x001BC142 (322 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = ZX8(MEM8(ebx + 0x22));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BC032; /* je: equal / zero */

loc_001BC02B: ;
    esi = MEM32(eax * 4 + 0x8E8EB8);

loc_001BC032: ;
    ecx = MEM32(0x8B2750);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC043; /* je: equal / zero */

loc_001BC03C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001BC043u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BC040u); } /* indirect call */
    }

loc_001BC043: ;
    eax = MEM32(0x8B26F0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFDFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8B26F0) = eax;
    SET_LO8(eax, MEM8(0x8B23A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC086; /* je: equal / zero */

loc_001BC060: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC086; /* je: equal / zero */

loc_001BC064: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0x8B23A8;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BC080u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001BC080: ;
    MEM32(esp + 0x18) = eax;
    goto loc_001BC08E;

loc_001BC086: ;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;

loc_001BC08E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x20);
    PUSH32(esp, eax);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BC09Du); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001BC09D: ;
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    ebx = eax;
    PUSH32(esp, 0x001BC0AAu); RECOMP_ABI_CALL(0x00026699u, sub_00026699); /* call 0x00026699 */

loc_001BC0AA: ;
    ecx = MEM32(esp + 0x10);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebp = eax;
    PUSH32(esp, 0x001BC0BEu); RECOMP_ABI_CALL(0x0001ED95u, sub_0001ED95); /* call 0x0001ED95 */

loc_001BC0BE: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    edi = 0x11;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BC0DCu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BC0DC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BC0E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BC0E0u); } /* indirect call */
    }

loc_001BC0E6: ;
    SET_LO8(eax, MEM8(0x8B23A8));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC114; /* je: equal / zero */

loc_001BC0F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC114; /* je: equal / zero */

loc_001BC0F6: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0x8B23A8;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BC112u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001BC112: ;
    goto loc_001BC117;

loc_001BC114: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BC117: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001BC120: ;
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x7ED370)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x7ED370), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BC135; /* je: equal / zero */

loc_001BC129: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001BC120; /* jl: less (signed <) */

loc_001BC12F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001BC135: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx * 4 + 0x8F0D48) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC1A0
 * Original: 0x001BC1A0 - 0x001BC35E (446 bytes, 140 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC1A0: ;
    eax = MEM32(0x8BFE70);
    PUSH32(esp, esi);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001BC1AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BC1ABu); } /* indirect call */
    }

loc_001BC1AE: ;
    edx = MEM32(0x8F20E0);
    esi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x001BC1BDu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001BC1BD: ;
    ecx = eax;
    PUSH32(esp, 0x001BC1C4u); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_001BC1C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC35C; /* jne: not equal / not zero */

loc_001BC1CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC35C; /* jl: less (signed <) */

loc_001BC1D5: ;
    edx = MEM32(0x8BFE70);
    PUSH32(esp, ebx);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001BC1E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BC1E1u); } /* indirect call */
    }

loc_001BC1E4: ;
    MEM32(0x8F20E0) = eax;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x001BC1F0u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_001BC1F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC1FB; /* je: equal / zero */

loc_001BC1F4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00019E5D(); return; /* tail jmp 0x00019E5D */

loc_001BC1FB: ;
    PUSH32(esp, 0x001BC200u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_001BC200: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC213; /* je: equal / zero */

loc_001BC204: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; sub_000253A2(); return; /* tail jmp 0x000253A2 */

loc_001BC213: ;
    esi = MEM32(esp + 0xC);
    eax = ZX16(MEM16(esi + 0x20));
    _fb = (uint32_t)(0xFFFFFE92u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFE92u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BC250; /* ja: above (unsigned >) */

loc_001BC227: ;
    ecx = ZX8(MEM8(eax + 0x1BC36C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1BC360); /* switch: 3 entries, 3 targets */
    if (_jt == 0x001BC235u) goto loc_001BC235;
    if (_jt == 0x001BC24Eu) goto loc_001BC24E;
    if (_jt == 0x001BC250u) goto loc_001BC250;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BC235: ;
    PUSH32(esp, 0x001BC23Au); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_001BC23A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x64;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BC24E; /* jb: below (unsigned <) */

loc_001BC248: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC250; /* je: equal / zero */

loc_001BC24E: ;
    SET_LO8(ebx, 1);

loc_001BC250: ;
    edx = MEM32(0x8B2604);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = 0x8F1A3C;
    PUSH32(esp, 0x001BC262u); RECOMP_ABI_CALL(0x0001B97Eu, sub_0001B97E); /* call 0x0001B97E */

loc_001BC262: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC277; /* je: equal / zero */

loc_001BC266: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC282; /* je: equal / zero */

loc_001BC26A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = 0x8F1A3C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00028520(); return; /* tail jmp 0x00028520 */

loc_001BC277: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC282; /* je: equal / zero */

loc_001BC27B: ;
    ebp = 2;
    goto loc_001BC291;

loc_001BC282: ;
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x001BC28Cu); RECOMP_ABI_CALL(0x00024AC4u, sub_00024AC4); /* call 0x00024AC4 */

loc_001BC28C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;

loc_001BC291: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, edi);
    ecx = 0x8B26F0;
    if (CMP_EQ(_fa, _fb)) goto loc_001BC29F; /* je: equal / zero */

loc_001BC29B: ;
    PUSH32(esp, 1);
    goto loc_001BC2A1;

loc_001BC29F: ;
    PUSH32(esp, 0);

loc_001BC2A1: ;
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x001BC2ABu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001BC2AB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001BC2B4u); RECOMP_ABI_CALL(0x000350F9u, sub_000350F9); /* call 0x000350F9 */

loc_001BC2B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x1D));
    PUSH32(esp, edi);
    ecx = 0x8B23A8;
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BC2CCu); RECOMP_ABI_CALL(0x00030437u, sub_00030437); /* call 0x00030437 */

loc_001BC2CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BC2D2u); RECOMP_ABI_CALL(0x0001D2ABu, sub_0001D2AB); /* call 0x0001D2AB */

loc_001BC2D2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x1D));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BC2E8u); RECOMP_ABI_CALL(0x00030437u, sub_00030437); /* call 0x00030437 */

loc_001BC2E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x120);
    ecx = 0x8F0D08;
    PUSH32(esp, 0x001BC2F8u); RECOMP_ABI_CALL(0x00017167u, sub_00017167); /* call 0x00017167 */

loc_001BC2F8: ;
    edx = (uint32_t)(int32_t)SMEM16(0x896160);
    ecx = MEM32(0x8F0E04);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_001BC312; /* jg: greater (signed >) */

loc_001BC30E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_001BC312: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BC35A; /* jle: less or equal (signed <=) */

loc_001BC319: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x1D));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax * 4 + 0x8E8FA8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x8F6B78);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x8F6B76);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BC344u); RECOMP_ABI_CALL(0x000262CAu, sub_000262CA); /* call 0x000262CA */

loc_001BC344: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BC34Eu); RECOMP_ABI_CALL(0x0003468Bu, sub_0003468B); /* call 0x0003468B */

loc_001BC34E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BC357u); RECOMP_ABI_CALL(0x000284C6u, sub_000284C6); /* call 0x000284C6 */

loc_001BC357: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BC35A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BC35C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC35E
 * Original: 0x001BC35E - 0x001BC4A5 (327 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC35E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BC35E: ;
    edi = edi;
    eax = eax ^ 0x4E001BC2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 31; return; /* ret 27 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F0DB4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001BC4B0
 * Original: 0x001BC4B0 - 0x001BC50C (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC4B0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001BC4C0; /* je: equal / zero */

loc_001BC4BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC50A; /* jne: not equal / not zero */

loc_001BC4C0: ;
    SET_LO8(eax, MEM8(0x8F0DA5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC50A; /* jne: not equal / not zero */

loc_001BC4C9: ;
    SET_LO8(eax, MEM8(0x8F0DA6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC50A; /* jne: not equal / not zero */

loc_001BC4D2: ;
    PUSH32(esp, 0x001BC4D7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001BC4D7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001BC4DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BC4DBu); } /* indirect call */
    }

loc_001BC4DE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001BC4E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BC4E4u); } /* indirect call */
    }

loc_001BC4E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC50A; /* je: equal / zero */

loc_001BC4EB: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC502; /* je: equal / zero */

loc_001BC4F2: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BC4FEu); RECOMP_ABI_CALL(0x0001B3D9u, sub_0001B3D9); /* call 0x0001B3D9 */

loc_001BC4FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC50A; /* jne: not equal / not zero */

loc_001BC502: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001D3CD(); return; /* tail jmp 0x0001D3CD */

loc_001BC50A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC530
 * Original: 0x001BC530 - 0x001BC5C2 (146 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BC530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BC53Eu); RECOMP_ABI_CALL(0x0002B1A3u, sub_0002B1A3); /* call 0x0002B1A3 */

loc_001BC53E: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BC540: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BC54Cu); RECOMP_ABI_CALL(0x00028B9Cu, sub_00028B9C); /* call 0x00028B9C */

loc_001BC54C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC552; /* jne: not equal / not zero */

loc_001BC550: ;
    SET_LO8(ebx, 1);

loc_001BC552: ;
    PUSH32(esp, 0x001BC557u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_001BC557: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC540; /* je: equal / zero */

loc_001BC55B: ;
    PUSH32(esp, 0x001BC560u); RECOMP_ABI_CALL(0x0002BBBCu, sub_0002BBBC); /* call 0x0002BBBC */

loc_001BC560: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC570; /* je: equal / zero */

loc_001BC564: ;
    PUSH32(esp, 0x001BC569u); RECOMP_ABI_CALL(0x00011C0Du, sub_00011C0D); /* call 0x00011C0D */

loc_001BC569: ;
    ecx = eax;
    PUSH32(esp, 0x001BC570u); RECOMP_ABI_CALL(0x00023FFCu, sub_00023FFC); /* call 0x00023FFC */

loc_001BC570: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BC57Cu); RECOMP_ABI_CALL(0x000207DAu, sub_000207DA); /* call 0x000207DA */

loc_001BC57C: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001BC586u); RECOMP_ABI_CALL(0x00018E45u, sub_00018E45); /* call 0x00018E45 */

loc_001BC586: ;
    PUSH32(esp, 0x1D2C9);
    PUSH32(esp, 0x001BC590u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001BC590: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8F1868;
    MEM8(0x8F0DB4) = 0;
    PUSH32(esp, 0x001BC5A4u); RECOMP_ABI_CALL(0x0002616Cu, sub_0002616C); /* call 0x0002616C */

loc_001BC5A4: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BC5AEu); RECOMP_ABI_CALL(0x0001C68Au, sub_0001C68A); /* call 0x0001C68A */

loc_001BC5AE: ;
    ecx = 0x8F0CF4;
    PUSH32(esp, 0x001BC5B8u); RECOMP_ABI_CALL(0x0001D50Du, sub_0001D50D); /* call 0x0001D50D */

loc_001BC5B8: ;
    MEM32(esi + 0x14) = 3;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC5F0
 * Original: 0x001BC5F0 - 0x001BC71D (301 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BC5F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001BC5F9u); RECOMP_ABI_CALL(0x0002BBBCu, sub_0002BBBC); /* call 0x0002BBBC */

loc_001BC5F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC609; /* je: equal / zero */

loc_001BC5FD: ;
    PUSH32(esp, 0x001BC602u); RECOMP_ABI_CALL(0x00011C0Du, sub_00011C0D); /* call 0x00011C0D */

loc_001BC602: ;
    ecx = eax;
    PUSH32(esp, 0x001BC609u); RECOMP_ABI_CALL(0x00023FFCu, sub_00023FFC); /* call 0x00023FFC */

loc_001BC609: ;
    PUSH32(esp, 0x2BA9F);
    PUSH32(esp, 0x001BC613u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001BC613: ;
    SET_LO8(eax, MEM8(0x8F0DA5));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC629; /* jne: not equal / not zero */

loc_001BC621: ;
    _fa = (uint32_t)(MEM8(0x8F0DA6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F0DA6), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC62E; /* je: equal / zero */

loc_001BC629: ;
    PUSH32(esp, 0x001BC62Eu); RECOMP_ABI_CALL(0x000143E5u, sub_000143E5); /* call 0x000143E5 */

loc_001BC62E: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001BC636u); RECOMP_ABI_CALL(0x00587B03u, sub_00587B03); /* call 0x00587B03 */

loc_001BC636: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC64D; /* je: equal / zero */

loc_001BC63D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BC643u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001BC643: ;
    ecx = eax;
    PUSH32(esp, 0x001BC64Au); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_001BC64A: ;
    MEM32(esi + 0x10) = ebx;

loc_001BC64D: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC65A; /* je: equal / zero */

loc_001BC656: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC66D; /* jne: not equal / not zero */

loc_001BC65A: ;
    PUSH32(esp, 0x1D2C9);
    PUSH32(esp, 0x001BC664u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001BC664: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F0DB4) = LO8(ebx);

loc_001BC66D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F0DD4) = eax;
    MEM32(0x8F0DD8) = eax;
    MEM32(0x8F0DDC) = eax;
    MEM32(0x8F0DE0) = eax;
    ecx = 0x8B2228;
    MEM32(0x8F0DE4) = eax;
    MEM8(0x8F0DA4) = LO8(ebx);
    PUSH32(esp, 0x001BC698u); RECOMP_ABI_CALL(0x000195A2u, sub_000195A2); /* call 0x000195A2 */

loc_001BC698: ;
    _fa = (uint32_t)(MEM8(0x8F0CD0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F0CD0), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC6CF; /* je: equal / zero */

loc_001BC6A0: ;
    eax = MEM32(0x8F0CD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM8(0x8F0CD1) = LO8(ebx);
    MEM8(0x8F0CD0) = LO8(ebx);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BC6CE; /* je: equal / zero */

loc_001BC6B8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC6C5; /* je: equal / zero */

loc_001BC6BE: ;
    ecx = eax;
    PUSH32(esp, 0x001BC6C5u); RECOMP_ABI_CALL(0x00596D8Fu, sub_00596D8F); /* call 0x00596D8F */

loc_001BC6C5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BC6CBu); RECOMP_ABI_CALL(0x00596C8Fu, sub_00596C8F); /* call 0x00596C8F */

loc_001BC6CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BC6CE: ;
    POP32(esp, edi);

loc_001BC6CF: ;
    ecx = 0x8F0CF4;
    PUSH32(esp, 0x001BC6D9u); RECOMP_ABI_CALL(0x0001D50Du, sub_0001D50D); /* call 0x0001D50D */

loc_001BC6D9: ;
    ecx = 0x8F1868;
    PUSH32(esp, 0x001BC6E3u); RECOMP_ABI_CALL(0x0002616Cu, sub_0002616C); /* call 0x0002616C */

loc_001BC6E3: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BC6EDu); RECOMP_ABI_CALL(0x0001C68Au, sub_0001C68A); /* call 0x0001C68A */

loc_001BC6ED: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001BC6F7u); RECOMP_ABI_CALL(0x00018E45u, sub_00018E45); /* call 0x00018E45 */

loc_001BC6F7: ;
    PUSH32(esp, 0x001BC6FCu); RECOMP_ABI_CALL(0x000327EBu, sub_000327EB); /* call 0x000327EB */

loc_001BC6FC: ;
    PUSH32(esp, 0x30121);
    MEM32(esi + 0x14) = 3;
    PUSH32(esp, 0x001BC70Du); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001BC70D: ;
    PUSH32(esp, 0x285D9);
    PUSH32(esp, 0x001BC717u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001BC717: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC770
 * Original: 0x001BC770 - 0x001BC868 (248 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC770(void)
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

loc_001BC770: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x8BFE70);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x8BFE70;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001BC781u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BC77Eu); } /* indirect call */
    }

loc_001BC781: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    xmm0 = XMM_SCALAR(MEMF(0x8F20E4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001BC7A5; /* jp: parity */

loc_001BC7A2: ;
    xmm0 = xmm1; /* movaps */

loc_001BC7A5: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(0x8F20E4) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001BC85A; /* jne: not equal / not zero */

loc_001BC7C6: ;
    eax = MEM32(0x8B221C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC7FB; /* je: equal / zero */

loc_001BC7CF: ;
    _fa = (uint32_t)(MEM32(0x8B2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8B2220), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001BC7FB; /* jbe: below or equal (unsigned <=) */

loc_001BC7D7: ;
    ecx = MEM32(0x8B2218);
    edx = MEM32(0x8B2214);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x8B21B8;
    MEM32(0x8B221C) = 0;
    PUSH32(esp, 0x001BC7FBu); RECOMP_ABI_CALL(0x0002DC3Cu, sub_0002DC3C); /* call 0x0002DC3C */

loc_001BC7FB: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x001BC805u); RECOMP_ABI_CALL(0x00033218u, sub_00033218); /* call 0x00033218 */

loc_001BC805: ;
    esi = MEM32(esp + 4);
    PUSH32(esp, esi);
    ecx = 0x8B2228;
    PUSH32(esp, 0x001BC814u); RECOMP_ABI_CALL(0x0002FF69u, sub_0002FF69); /* call 0x0002FF69 */

loc_001BC814: ;
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001BC81Eu); RECOMP_ABI_CALL(0x00021DC4u, sub_00021DC4); /* call 0x00021DC4 */

loc_001BC81E: ;
    PUSH32(esp, esi);
    ecx = 0x8F0DC0;
    PUSH32(esp, 0x001BC829u); RECOMP_ABI_CALL(0x0001A8D0u, sub_0001A8D0); /* call 0x0001A8D0 */

loc_001BC829: ;
    ecx = 0x8F0CD0;
    PUSH32(esp, 0x001BC833u); RECOMP_ABI_CALL(0x00015849u, sub_00015849); /* call 0x00015849 */

loc_001BC833: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x001BC83Du); RECOMP_ABI_CALL(0x0002452Eu, sub_0002452E); /* call 0x0002452E */

loc_001BC83D: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x001BC847u); RECOMP_ABI_CALL(0x00030112u, sub_00030112); /* call 0x00030112 */

loc_001BC847: ;
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001BC851u); RECOMP_ABI_CALL(0x00022DB4u, sub_00022DB4); /* call 0x00022DB4 */

loc_001BC851: ;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002021C(); return; /* tail jmp 0x0002021C */

loc_001BC85A: ;
    ecx = 0x8B22D0;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002424A(); return; /* tail jmp 0x0002424A */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BC8B0
 * Original: 0x001BC8B0 - 0x001BCA19 (361 bytes, 112 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BC8B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0xD4) = ebx;
    PUSH32(esp, 0x001BC8D7u); RECOMP_ABI_CALL(0x0002EE66u, sub_0002EE66); /* call 0x0002EE66 */

loc_001BC8D7: ;
    ecx = esi;
    PUSH32(esp, 0x001BC8DEu); RECOMP_ABI_CALL(0x0001FB87u, sub_0001FB87); /* call 0x0001FB87 */

loc_001BC8DE: ;
    ecx = esi;
    PUSH32(esp, 0x001BC8E5u); RECOMP_ABI_CALL(0x00031AB7u, sub_00031AB7); /* call 0x00031AB7 */

loc_001BC8E5: ;
    MEM32(esi + 0xD4) = ebx;
    SET_LO16(eax, MEM16(0x896166));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001BC91F; /* jg: greater (signed >) */

loc_001BC8F7: ;
    ecx = SX16(LO16(eax));
    edx = MEM32(esi + ecx * 4 + 0x68);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x7ED504)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 4 + 0x7ED504) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BC91F; /* jae: above or equal (unsigned >=) */

loc_001BC907: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0xD4) = 1;
    MEM32(esi + 0xE0) = ecx;

loc_001BC91F: ;
    eax = MEM32(esi + 0xA4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC934; /* je: equal / zero */

loc_001BC92B: ;
    MEM32(esp + 0xC) = ebx;
    edi = 1;

loc_001BC934: ;
    _fa = (uint32_t)(MEM32(esi + 0xB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC945; /* je: equal / zero */

loc_001BC93C: ;
    MEM32(esp + edi * 4 + 0xC) = 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BC945: ;
    _fa = (uint32_t)(MEM32(esi + 0xC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC956; /* je: equal / zero */

loc_001BC94D: ;
    MEM32(esp + edi * 4 + 0xC) = 2;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BC956: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC967; /* je: equal / zero */

loc_001BC95E: ;
    MEM32(esp + edi * 4 + 0xC) = 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BC967: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC979; /* jne: not equal / not zero */

loc_001BC96B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001BC979: ;
    PUSH32(esp, 0x001BC97Eu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_001BC97E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = MEM32(esp + edx * 4 + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEM32(esi) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001BC9B3; /* jne: not equal / not zero */

loc_001BC98D: ;
    edx = MEM32(esp + 0x20);
    MEM32(edx) = 0xFFFFFFFFu;
    eax = MEM32(esi);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + esi);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = MEM32(esi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001BC9B3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC9F1; /* je: equal / zero */

loc_001BC9B8: ;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx + esi);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    edx = MEM32(esp + 0x20);
    MEM32(edx) = ecx;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + esi);
    SET_LO8(eax, MEM8(ecx + 0x30));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    eax = MEM32(esp + 0x24);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = MEM32(esi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001BC9F1: ;
    eax = MEM32(esi + 0xE0);
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    edx = MEM32(eax * 4 + 0x8E904C);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = MEM32(esi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BCA80
 * Original: 0x001BCA80 - 0x001BCBFD (381 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCA80(void)
{

loc_001BCA80: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1D3A5);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x001BCA94u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCA94: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x25F96);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x001BCAA8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCAA8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x29C6D);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x001BCABCu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCABC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1E070);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x001BCAD0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCAD0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x200FF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001BCAE4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCAE4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x22391);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001BCAF8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCAF8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x267D9);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x001BCB0Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCB0C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x223AA);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001BCB20u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCB20: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1777F);
    PUSH32(esp, 9);
    PUSH32(esp, 0x001BCB34u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCB34: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1790F);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x001BCB48u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCB48: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2C49A);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x001BCB5Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCB5C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x164EC);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x001BCB70u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCB70: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35C93);
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x001BCB84u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCB84: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1C284);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x001BCB98u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCB98: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x15BFA);
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x001BCBACu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCBAC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x15DD0);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x001BCBC0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCBC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0x2DD77);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x001BCBD4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCBD4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x37093);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x001BCBE8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCBE8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2FF14);
    PUSH32(esp, 6);
    PUSH32(esp, 0x001BCBFCu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCBFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BCC60
 * Original: 0x001BCC60 - 0x001BD021 (961 bytes, 241 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCC60(void)
{

loc_001BCC60: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1A5C9);
    PUSH32(esp, 5);
    PUSH32(esp, 0x001BCC74u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCC74: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3792B);
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x001BCC88u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCC88: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x17E37);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001BCC9Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCC9C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x270EE);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x001BCCB0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCCB0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2C490);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x001BCCC4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCCC4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2D002);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x001BCCD8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCCD8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1710D);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x001BCCECu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCCEC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F254);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x001BCD00u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCD00: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1AE66);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x001BCD14u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCD14: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1D31E);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001BCD28u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCD28: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x13567);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BCD3Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCD3C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F05);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x001BCD50u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCD50: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x11AD7);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x001BCD64u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCD64: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x360A3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001BCD78u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCD78: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1DCF6);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x001BCD8Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCD8C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x31DA0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x001BCDA0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCDA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0x2535C);
    PUSH32(esp, 0x4E);
    PUSH32(esp, 0x001BCDB4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCDB4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2A906);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x001BCDC8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCDC8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x125DB);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x001BCDDCu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCDDC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2881D);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x001BCDF0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCDF0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35315);
    PUSH32(esp, 0x41);
    PUSH32(esp, 0x001BCE04u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCE04: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1A4CA);
    PUSH32(esp, 7);
    PUSH32(esp, 0x001BCE18u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCE18: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1C752);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x001BCE2Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCE2C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x20AAF);
    PUSH32(esp, 9);
    PUSH32(esp, 0x001BCE40u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCE40: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x37444);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x001BCE54u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCE54: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2DA4D);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001BCE68u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCE68: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x291BE);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x001BCE7Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCE7C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x18CAB);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x001BCE90u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCE90: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3491A);
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x001BCEA4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCEA4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1E435);
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x001BCEB8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCEB8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1AF29);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x001BCECCu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCECC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x13855);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x001BCEE0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCEE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351A8);
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x001BCEF4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCEF4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x214E6);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x001BCF08u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCF08: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x21121);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x001BCF1Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCF1C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x258B6);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x001BCF30u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCF30: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2E41B);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x001BCF44u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCF44: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x18A35);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x001BCF58u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCF58: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x23AED);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x001BCF6Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCF6C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240AB);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x001BCF80u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCF80: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3435C);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x001BCF94u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCF94: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F722);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x001BCFA8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCFA8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1B320);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x001BCFBCu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCFBC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x12EA5);
    PUSH32(esp, 0x45);
    PUSH32(esp, 0x001BCFD0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCFD0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x20DDE);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x001BCFE4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCFE4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2A307);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x001BCFF8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BCFF8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x29A10);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x001BD00Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BD00C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24A47);
    PUSH32(esp, 6);
    PUSH32(esp, 0x001BD020u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_001BD020: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BD120
 * Original: 0x001BD120 - 0x001BD135 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD120: ;
    PUSH32(esp, 0x1D2C9);
    PUSH32(esp, 0x001BD12Au); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001BD12A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F0DB4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001BD140
 * Original: 0x001BD140 - 0x001BD185 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD140: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD163; /* jge: greater or equal (signed >=) */

loc_001BD148: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1088);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD15Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD15F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD163: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD172; /* jle: less or equal (signed <=) */

loc_001BD16A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD172: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1088);
    PUSH32(esp, 0x001BD181u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD181: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD1A0
 * Original: 0x001BD1A0 - 0x001BD1E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD1A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD1C3; /* jge: greater or equal (signed >=) */

loc_001BD1A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1058);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD1BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD1BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD1C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD1D2; /* jle: less or equal (signed <=) */

loc_001BD1CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD1D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1058);
    PUSH32(esp, 0x001BD1E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD1E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD200
 * Original: 0x001BD200 - 0x001BD245 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD200: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD223; /* jge: greater or equal (signed >=) */

loc_001BD208: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16F0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD21Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD21F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD223: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD232; /* jle: less or equal (signed <=) */

loc_001BD22A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD232: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16F0);
    PUSH32(esp, 0x001BD241u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD241: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD260
 * Original: 0x001BD260 - 0x001BD2A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD260: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD283; /* jge: greater or equal (signed >=) */

loc_001BD268: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F58);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD27Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD27F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD283: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD292; /* jle: less or equal (signed <=) */

loc_001BD28A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD292: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F58);
    PUSH32(esp, 0x001BD2A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD2A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD2C0
 * Original: 0x001BD2C0 - 0x001BD305 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD2C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD2E3; /* jge: greater or equal (signed >=) */

loc_001BD2C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FB0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD2DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD2DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD2E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD2F2; /* jle: less or equal (signed <=) */

loc_001BD2EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD2F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FB0);
    PUSH32(esp, 0x001BD301u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD301: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD320
 * Original: 0x001BD320 - 0x001BD365 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD320: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD343; /* jge: greater or equal (signed >=) */

loc_001BD328: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16A8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD33Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD33F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD343: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD352; /* jle: less or equal (signed <=) */

loc_001BD34A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD352: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16A8);
    PUSH32(esp, 0x001BD361u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD361: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD380
 * Original: 0x001BD380 - 0x001BD3C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD380: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD3A3; /* jge: greater or equal (signed >=) */

loc_001BD388: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F17D0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD39Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD39F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD3A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD3B2; /* jle: less or equal (signed <=) */

loc_001BD3AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD3B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F17D0);
    PUSH32(esp, 0x001BD3C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD3C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD3E0
 * Original: 0x001BD3E0 - 0x001BD425 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD3E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD403; /* jge: greater or equal (signed >=) */

loc_001BD3E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1610);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD3FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD3FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD412; /* jle: less or equal (signed <=) */

loc_001BD40A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD412: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1610);
    PUSH32(esp, 0x001BD421u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD421: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD440
 * Original: 0x001BD440 - 0x001BD485 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD440: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD463; /* jge: greater or equal (signed >=) */

loc_001BD448: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F10D8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD45Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD45F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD472; /* jle: less or equal (signed <=) */

loc_001BD46A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD472: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F10D8);
    PUSH32(esp, 0x001BD481u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD481: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD4A0
 * Original: 0x001BD4A0 - 0x001BD4E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD4A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD4C3; /* jge: greater or equal (signed >=) */

loc_001BD4A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E58);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD4BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD4BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD4C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD4D2; /* jle: less or equal (signed <=) */

loc_001BD4CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD4D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E58);
    PUSH32(esp, 0x001BD4E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD4E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD500
 * Original: 0x001BD500 - 0x001BD545 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD500: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD523; /* jge: greater or equal (signed >=) */

loc_001BD508: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B08);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD51Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD51F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD523: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD532; /* jle: less or equal (signed <=) */

loc_001BD52A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD532: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B08);
    PUSH32(esp, 0x001BD541u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD541: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD560
 * Original: 0x001BD560 - 0x001BD5A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD560: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD583; /* jge: greater or equal (signed >=) */

loc_001BD568: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F13F8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD57Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD57F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD583: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD592; /* jle: less or equal (signed <=) */

loc_001BD58A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD592: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F13F8);
    PUSH32(esp, 0x001BD5A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD5A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD5C0
 * Original: 0x001BD5C0 - 0x001BD605 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD5C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD5E3; /* jge: greater or equal (signed >=) */

loc_001BD5C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1270);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD5DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD5DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD5E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD5F2; /* jle: less or equal (signed <=) */

loc_001BD5EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD5F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1270);
    PUSH32(esp, 0x001BD601u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD601: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD620
 * Original: 0x001BD620 - 0x001BD665 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD643; /* jge: greater or equal (signed >=) */

loc_001BD628: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1358);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD63Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD63F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD652; /* jle: less or equal (signed <=) */

loc_001BD64A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD652: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1358);
    PUSH32(esp, 0x001BD661u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD661: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD680
 * Original: 0x001BD680 - 0x001BD6C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD680: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD6A3; /* jge: greater or equal (signed >=) */

loc_001BD688: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F12E8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD69Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD69F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD6A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD6B2; /* jle: less or equal (signed <=) */

loc_001BD6AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD6B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F12E8);
    PUSH32(esp, 0x001BD6C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD6C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD6E0
 * Original: 0x001BD6E0 - 0x001BD725 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD6E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD703; /* jge: greater or equal (signed >=) */

loc_001BD6E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1398);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD6FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD6FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD712; /* jle: less or equal (signed <=) */

loc_001BD70A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD712: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1398);
    PUSH32(esp, 0x001BD721u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD721: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD740
 * Original: 0x001BD740 - 0x001BD785 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD740: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD763; /* jge: greater or equal (signed >=) */

loc_001BD748: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1240);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD75Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD75F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD763: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD772; /* jle: less or equal (signed <=) */

loc_001BD76A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD772: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1240);
    PUSH32(esp, 0x001BD781u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD781: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD7A0
 * Original: 0x001BD7A0 - 0x001BD7E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD7A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD7C3; /* jge: greater or equal (signed >=) */

loc_001BD7A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16E0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD7BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD7BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD7C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD7D2; /* jle: less or equal (signed <=) */

loc_001BD7CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD7D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16E0);
    PUSH32(esp, 0x001BD7E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD7E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD800
 * Original: 0x001BD800 - 0x001BD845 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD800: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD823; /* jge: greater or equal (signed >=) */

loc_001BD808: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15F0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD81Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD81F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD823: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD832; /* jle: less or equal (signed <=) */

loc_001BD82A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD832: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15F0);
    PUSH32(esp, 0x001BD841u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD841: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD860
 * Original: 0x001BD860 - 0x001BD8A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD860: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD883; /* jge: greater or equal (signed >=) */

loc_001BD868: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E78);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD87Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD87F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD883: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD892; /* jle: less or equal (signed <=) */

loc_001BD88A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD892: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E78);
    PUSH32(esp, 0x001BD8A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD8A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD8C0
 * Original: 0x001BD8C0 - 0x001BD905 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD8C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD8E3; /* jge: greater or equal (signed >=) */

loc_001BD8C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1508);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD8DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD8DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD8E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD8F2; /* jle: less or equal (signed <=) */

loc_001BD8EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD8F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1508);
    PUSH32(esp, 0x001BD901u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD901: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD920
 * Original: 0x001BD920 - 0x001BD965 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD920: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD943; /* jge: greater or equal (signed >=) */

loc_001BD928: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AC8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD93Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD93F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD943: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD952; /* jle: less or equal (signed <=) */

loc_001BD94A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD952: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AC8);
    PUSH32(esp, 0x001BD961u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD961: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD980
 * Original: 0x001BD980 - 0x001BD9C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD980: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BD9A3; /* jge: greater or equal (signed >=) */

loc_001BD988: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AD0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD99Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD99F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BD9A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD9B2; /* jle: less or equal (signed <=) */

loc_001BD9AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BD9B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AD0);
    PUSH32(esp, 0x001BD9C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD9C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BD9E0
 * Original: 0x001BD9E0 - 0x001BDA25 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD9E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDA03; /* jge: greater or equal (signed >=) */

loc_001BD9E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1850);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BD9FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BD9FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDA03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDA12; /* jle: less or equal (signed <=) */

loc_001BDA0A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDA12: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1850);
    PUSH32(esp, 0x001BDA21u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDA21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDA40
 * Original: 0x001BDA40 - 0x001BDA85 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDA40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDA63; /* jge: greater or equal (signed >=) */

loc_001BDA48: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1560);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDA5Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDA5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDA63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDA72; /* jle: less or equal (signed <=) */

loc_001BDA6A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDA72: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1560);
    PUSH32(esp, 0x001BDA81u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDA81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDAA0
 * Original: 0x001BDAA0 - 0x001BDAE5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDAA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDAC3; /* jge: greater or equal (signed >=) */

loc_001BDAA8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1338);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDABFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDABF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDAC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDAD2; /* jle: less or equal (signed <=) */

loc_001BDACA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDAD2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1338);
    PUSH32(esp, 0x001BDAE1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDAE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDB00
 * Original: 0x001BDB00 - 0x001BDB45 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDB00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDB23; /* jge: greater or equal (signed >=) */

loc_001BDB08: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B50);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDB1Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDB1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDB23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDB32; /* jle: less or equal (signed <=) */

loc_001BDB2A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDB32: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B50);
    PUSH32(esp, 0x001BDB41u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDB41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDB60
 * Original: 0x001BDB60 - 0x001BDBA5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDB60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDB83; /* jge: greater or equal (signed >=) */

loc_001BDB68: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EE8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDB7Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDB7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDB83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDB92; /* jle: less or equal (signed <=) */

loc_001BDB8A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDB92: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EE8);
    PUSH32(esp, 0x001BDBA1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDBA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDBC0
 * Original: 0x001BDBC0 - 0x001BDC05 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDBC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDBE3; /* jge: greater or equal (signed >=) */

loc_001BDBC8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F70);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDBDFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDBDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDBE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDBF2; /* jle: less or equal (signed <=) */

loc_001BDBEA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDBF2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F70);
    PUSH32(esp, 0x001BDC01u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDC01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDC20
 * Original: 0x001BDC20 - 0x001BDC65 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDC20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDC43; /* jge: greater or equal (signed >=) */

loc_001BDC28: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F13F0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDC3Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDC3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDC43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDC52; /* jle: less or equal (signed <=) */

loc_001BDC4A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDC52: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F13F0);
    PUSH32(esp, 0x001BDC61u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDC61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDC80
 * Original: 0x001BDC80 - 0x001BDCC5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDC80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDCA3; /* jge: greater or equal (signed >=) */

loc_001BDC88: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1630);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDC9Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDC9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDCA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDCB2; /* jle: less or equal (signed <=) */

loc_001BDCAA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDCB2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1630);
    PUSH32(esp, 0x001BDCC1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDCC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDCE0
 * Original: 0x001BDCE0 - 0x001BDD25 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDCE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDD03; /* jge: greater or equal (signed >=) */

loc_001BDCE8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A78);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDCFFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDCFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDD03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDD12; /* jle: less or equal (signed <=) */

loc_001BDD0A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDD12: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A78);
    PUSH32(esp, 0x001BDD21u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDD21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDD40
 * Original: 0x001BDD40 - 0x001BDD85 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDD40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDD63; /* jge: greater or equal (signed >=) */

loc_001BDD48: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1940);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDD5Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDD5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDD63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDD72; /* jle: less or equal (signed <=) */

loc_001BDD6A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDD72: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1940);
    PUSH32(esp, 0x001BDD81u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDD81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDDA0
 * Original: 0x001BDDA0 - 0x001BDDE5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDDA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDDC3; /* jge: greater or equal (signed >=) */

loc_001BDDA8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F10B8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDDBFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDDBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDDC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDDD2; /* jle: less or equal (signed <=) */

loc_001BDDCA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDDD2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F10B8);
    PUSH32(esp, 0x001BDDE1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDDE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDE00
 * Original: 0x001BDE00 - 0x001BDE45 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDE00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDE23; /* jge: greater or equal (signed >=) */

loc_001BDE08: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1600);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDE1Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDE1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDE23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDE32; /* jle: less or equal (signed <=) */

loc_001BDE2A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDE32: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1600);
    PUSH32(esp, 0x001BDE41u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDE41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDE60
 * Original: 0x001BDE60 - 0x001BDEA5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDE60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDE83; /* jge: greater or equal (signed >=) */

loc_001BDE68: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1750);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDE7Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDE7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDE83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDE92; /* jle: less or equal (signed <=) */

loc_001BDE8A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDE92: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1750);
    PUSH32(esp, 0x001BDEA1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDEA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDEC0
 * Original: 0x001BDEC0 - 0x001BDF05 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDEC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDEE3; /* jge: greater or equal (signed >=) */

loc_001BDEC8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1090);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDEDFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDEDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDEE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDEF2; /* jle: less or equal (signed <=) */

loc_001BDEEA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDEF2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1090);
    PUSH32(esp, 0x001BDF01u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDF01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDF20
 * Original: 0x001BDF20 - 0x001BDF65 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDF20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDF43; /* jge: greater or equal (signed >=) */

loc_001BDF28: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1708);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDF3Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDF3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDF43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDF52; /* jle: less or equal (signed <=) */

loc_001BDF4A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDF52: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1708);
    PUSH32(esp, 0x001BDF61u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDF61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDF80
 * Original: 0x001BDF80 - 0x001BDFC5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDF80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDFA3; /* jge: greater or equal (signed >=) */

loc_001BDF88: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F80);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDF9Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDF9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BDFA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDFB2; /* jle: less or equal (signed <=) */

loc_001BDFAA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BDFB2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F80);
    PUSH32(esp, 0x001BDFC1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDFC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDFE0
 * Original: 0x001BDFE0 - 0x001BE025 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDFE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE003; /* jge: greater or equal (signed >=) */

loc_001BDFE8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FE0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BDFFFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BDFFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE003: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE012; /* jle: less or equal (signed <=) */

loc_001BE00A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE012: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FE0);
    PUSH32(esp, 0x001BE021u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE021: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE040
 * Original: 0x001BE040 - 0x001BE085 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE040: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE063; /* jge: greater or equal (signed >=) */

loc_001BE048: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1418);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE05Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE05F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE063: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE072; /* jle: less or equal (signed <=) */

loc_001BE06A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE072: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1418);
    PUSH32(esp, 0x001BE081u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE081: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE0A0
 * Original: 0x001BE0A0 - 0x001BE0E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE0A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE0C3; /* jge: greater or equal (signed >=) */

loc_001BE0A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1120);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE0BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE0BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE0C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE0D2; /* jle: less or equal (signed <=) */

loc_001BE0CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE0D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1120);
    PUSH32(esp, 0x001BE0E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE0E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE100
 * Original: 0x001BE100 - 0x001BE145 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE100: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE123; /* jge: greater or equal (signed >=) */

loc_001BE108: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B40);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE11Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE11F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE123: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE132; /* jle: less or equal (signed <=) */

loc_001BE12A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE132: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B40);
    PUSH32(esp, 0x001BE141u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE141: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE160
 * Original: 0x001BE160 - 0x001BE1A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE160: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE183; /* jge: greater or equal (signed >=) */

loc_001BE168: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A58);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE17Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE17F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE183: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE192; /* jle: less or equal (signed <=) */

loc_001BE18A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE192: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A58);
    PUSH32(esp, 0x001BE1A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE1A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE1C0
 * Original: 0x001BE1C0 - 0x001BE205 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE1C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE1E3; /* jge: greater or equal (signed >=) */

loc_001BE1C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16A0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE1DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE1DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE1E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE1F2; /* jle: less or equal (signed <=) */

loc_001BE1EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE1F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16A0);
    PUSH32(esp, 0x001BE201u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE201: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE220
 * Original: 0x001BE220 - 0x001BE265 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE243; /* jge: greater or equal (signed >=) */

loc_001BE228: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F20);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE23Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE23F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE243: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE252; /* jle: less or equal (signed <=) */

loc_001BE24A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE252: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F20);
    PUSH32(esp, 0x001BE261u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE261: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE280
 * Original: 0x001BE280 - 0x001BE2C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE280: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE2A3; /* jge: greater or equal (signed >=) */

loc_001BE288: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F98);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE29Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE29F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE2A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE2B2; /* jle: less or equal (signed <=) */

loc_001BE2AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE2B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F98);
    PUSH32(esp, 0x001BE2C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE2C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE2E0
 * Original: 0x001BE2E0 - 0x001BE325 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE2E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE303; /* jge: greater or equal (signed >=) */

loc_001BE2E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1658);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE2FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE2FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE303: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE312; /* jle: less or equal (signed <=) */

loc_001BE30A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE312: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1658);
    PUSH32(esp, 0x001BE321u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE321: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE340
 * Original: 0x001BE340 - 0x001BE385 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE340: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE363; /* jge: greater or equal (signed >=) */

loc_001BE348: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15C0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE35Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE35F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE363: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE372; /* jle: less or equal (signed <=) */

loc_001BE36A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE372: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15C0);
    PUSH32(esp, 0x001BE381u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE381: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE3A0
 * Original: 0x001BE3A0 - 0x001BE3E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE3A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE3C3; /* jge: greater or equal (signed >=) */

loc_001BE3A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AB8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE3BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE3BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE3C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE3D2; /* jle: less or equal (signed <=) */

loc_001BE3CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE3D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AB8);
    PUSH32(esp, 0x001BE3E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE3E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE400
 * Original: 0x001BE400 - 0x001BE445 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE400: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE423; /* jge: greater or equal (signed >=) */

loc_001BE408: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A98);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE41Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE41F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE423: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE432; /* jle: less or equal (signed <=) */

loc_001BE42A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE432: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A98);
    PUSH32(esp, 0x001BE441u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE441: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE460
 * Original: 0x001BE460 - 0x001BE4A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE460: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE483; /* jge: greater or equal (signed >=) */

loc_001BE468: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11B8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE47Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE47F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE483: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE492; /* jle: less or equal (signed <=) */

loc_001BE48A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE492: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11B8);
    PUSH32(esp, 0x001BE4A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE4A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE4C0
 * Original: 0x001BE4C0 - 0x001BE505 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE4C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE4E3; /* jge: greater or equal (signed >=) */

loc_001BE4C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F18);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE4DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE4DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE4E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE4F2; /* jle: less or equal (signed <=) */

loc_001BE4EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE4F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F18);
    PUSH32(esp, 0x001BE501u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE501: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE520
 * Original: 0x001BE520 - 0x001BE565 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE520: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE543; /* jge: greater or equal (signed >=) */

loc_001BE528: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15C8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE53Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE53F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE552; /* jle: less or equal (signed <=) */

loc_001BE54A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE552: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15C8);
    PUSH32(esp, 0x001BE561u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE561: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE580
 * Original: 0x001BE580 - 0x001BE5C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE580: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE5A3; /* jge: greater or equal (signed >=) */

loc_001BE588: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1660);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE59Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE59F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE5A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE5B2; /* jle: less or equal (signed <=) */

loc_001BE5AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE5B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1660);
    PUSH32(esp, 0x001BE5C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE5C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE5E0
 * Original: 0x001BE5E0 - 0x001BE625 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE5E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE603; /* jge: greater or equal (signed >=) */

loc_001BE5E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1108);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE5FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE5FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE603: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE612; /* jle: less or equal (signed <=) */

loc_001BE60A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE612: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1108);
    PUSH32(esp, 0x001BE621u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE621: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE640
 * Original: 0x001BE640 - 0x001BE685 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE663; /* jge: greater or equal (signed >=) */

loc_001BE648: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AC0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE65Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE65F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE663: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE672; /* jle: less or equal (signed <=) */

loc_001BE66A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE672: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AC0);
    PUSH32(esp, 0x001BE681u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE681: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE6A0
 * Original: 0x001BE6A0 - 0x001BE6E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE6A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE6C3; /* jge: greater or equal (signed >=) */

loc_001BE6A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14F0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE6BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE6BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE6C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE6D2; /* jle: less or equal (signed <=) */

loc_001BE6CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE6D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14F0);
    PUSH32(esp, 0x001BE6E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE6E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE700
 * Original: 0x001BE700 - 0x001BE745 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE700: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE723; /* jge: greater or equal (signed >=) */

loc_001BE708: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14F8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE71Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE71F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE732; /* jle: less or equal (signed <=) */

loc_001BE72A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE732: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14F8);
    PUSH32(esp, 0x001BE741u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE741: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE760
 * Original: 0x001BE760 - 0x001BE7A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE760: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE783; /* jge: greater or equal (signed >=) */

loc_001BE768: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11E0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE77Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE77F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE783: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE792; /* jle: less or equal (signed <=) */

loc_001BE78A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE792: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11E0);
    PUSH32(esp, 0x001BE7A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE7A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE7C0
 * Original: 0x001BE7C0 - 0x001BE805 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE7C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE7E3; /* jge: greater or equal (signed >=) */

loc_001BE7C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AA8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE7DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE7DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE7E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE7F2; /* jle: less or equal (signed <=) */

loc_001BE7EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE7F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AA8);
    PUSH32(esp, 0x001BE801u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE801: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE820
 * Original: 0x001BE820 - 0x001BE865 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE820: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE843; /* jge: greater or equal (signed >=) */

loc_001BE828: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E90);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE83Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE83F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE843: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE852; /* jle: less or equal (signed <=) */

loc_001BE84A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE852: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E90);
    PUSH32(esp, 0x001BE861u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE861: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE880
 * Original: 0x001BE880 - 0x001BE8C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE880: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE8A3; /* jge: greater or equal (signed >=) */

loc_001BE888: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1020);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE89Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE89F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE8A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE8B2; /* jle: less or equal (signed <=) */

loc_001BE8AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE8B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1020);
    PUSH32(esp, 0x001BE8C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE8C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE8E0
 * Original: 0x001BE8E0 - 0x001BE925 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE8E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE903; /* jge: greater or equal (signed >=) */

loc_001BE8E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FD0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE8FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE8FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE903: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE912; /* jle: less or equal (signed <=) */

loc_001BE90A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE912: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FD0);
    PUSH32(esp, 0x001BE921u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE921: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE940
 * Original: 0x001BE940 - 0x001BE985 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE940: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE963; /* jge: greater or equal (signed >=) */

loc_001BE948: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1830);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE95Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE95F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE963: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE972; /* jle: less or equal (signed <=) */

loc_001BE96A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE972: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1830);
    PUSH32(esp, 0x001BE981u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE981: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE9A0
 * Original: 0x001BE9A0 - 0x001BE9E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE9A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE9C3; /* jge: greater or equal (signed >=) */

loc_001BE9A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1568);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BE9BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE9BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BE9C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE9D2; /* jle: less or equal (signed <=) */

loc_001BE9CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BE9D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1568);
    PUSH32(esp, 0x001BE9E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BE9E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEA00
 * Original: 0x001BEA00 - 0x001BEA45 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEA00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEA23; /* jge: greater or equal (signed >=) */

loc_001BEA08: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1228);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEA1Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEA1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEA23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEA32; /* jle: less or equal (signed <=) */

loc_001BEA2A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEA32: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1228);
    PUSH32(esp, 0x001BEA41u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEA41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEA60
 * Original: 0x001BEA60 - 0x001BEAA5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEA60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEA83; /* jge: greater or equal (signed >=) */

loc_001BEA68: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AE0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEA7Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEA7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEA83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEA92; /* jle: less or equal (signed <=) */

loc_001BEA8A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEA92: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AE0);
    PUSH32(esp, 0x001BEAA1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEAA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEAC0
 * Original: 0x001BEAC0 - 0x001BEB05 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEAC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEAE3; /* jge: greater or equal (signed >=) */

loc_001BEAC8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EF0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEADFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEADF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEAE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEAF2; /* jle: less or equal (signed <=) */

loc_001BEAEA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEAF2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EF0);
    PUSH32(esp, 0x001BEB01u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEB01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEB20
 * Original: 0x001BEB20 - 0x001BEB65 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEB20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEB43; /* jge: greater or equal (signed >=) */

loc_001BEB28: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1300);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEB3Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEB3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEB43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEB52; /* jle: less or equal (signed <=) */

loc_001BEB4A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEB52: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1300);
    PUSH32(esp, 0x001BEB61u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEB61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEB80
 * Original: 0x001BEB80 - 0x001BEBC5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEB80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEBA3; /* jge: greater or equal (signed >=) */

loc_001BEB88: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1778);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEB9Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEB9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEBA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEBB2; /* jle: less or equal (signed <=) */

loc_001BEBAA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEBB2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1778);
    PUSH32(esp, 0x001BEBC1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEBC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEBE0
 * Original: 0x001BEBE0 - 0x001BEC25 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEBE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEC03; /* jge: greater or equal (signed >=) */

loc_001BEBE8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FA0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEBFFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEBFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEC03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEC12; /* jle: less or equal (signed <=) */

loc_001BEC0A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEC12: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FA0);
    PUSH32(esp, 0x001BEC21u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEC21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEC40
 * Original: 0x001BEC40 - 0x001BEC85 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEC40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEC63; /* jge: greater or equal (signed >=) */

loc_001BEC48: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1860);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEC5Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEC5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEC63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEC72; /* jle: less or equal (signed <=) */

loc_001BEC6A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEC72: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1860);
    PUSH32(esp, 0x001BEC81u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEC81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BECA0
 * Original: 0x001BECA0 - 0x001BECE5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BECA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BECA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BECC3; /* jge: greater or equal (signed >=) */

loc_001BECA8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1448);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BECBFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BECBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BECC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BECD2; /* jle: less or equal (signed <=) */

loc_001BECCA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BECD2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1448);
    PUSH32(esp, 0x001BECE1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BECE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BED00
 * Original: 0x001BED00 - 0x001BED45 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BED00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BED00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BED23; /* jge: greater or equal (signed >=) */

loc_001BED08: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1160);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BED1Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BED1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BED23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BED32; /* jle: less or equal (signed <=) */

loc_001BED2A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BED32: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1160);
    PUSH32(esp, 0x001BED41u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BED41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BED60
 * Original: 0x001BED60 - 0x001BEDA5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BED60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BED60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BED83; /* jge: greater or equal (signed >=) */

loc_001BED68: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15F8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BED7Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BED7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BED83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BED92; /* jle: less or equal (signed <=) */

loc_001BED8A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BED92: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15F8);
    PUSH32(esp, 0x001BEDA1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEDA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEDC0
 * Original: 0x001BEDC0 - 0x001BEE05 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEDC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEDE3; /* jge: greater or equal (signed >=) */

loc_001BEDC8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14B0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEDDFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEDDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEDE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEDF2; /* jle: less or equal (signed <=) */

loc_001BEDEA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEDF2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14B0);
    PUSH32(esp, 0x001BEE01u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEE01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEE20
 * Original: 0x001BEE20 - 0x001BEE65 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEE20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEE43; /* jge: greater or equal (signed >=) */

loc_001BEE28: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1440);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEE3Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEE3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEE43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEE52; /* jle: less or equal (signed <=) */

loc_001BEE4A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEE52: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1440);
    PUSH32(esp, 0x001BEE61u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEE61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEE80
 * Original: 0x001BEE80 - 0x001BEEC5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEE80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEEA3; /* jge: greater or equal (signed >=) */

loc_001BEE88: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1848);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEE9Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEE9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEEA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEEB2; /* jle: less or equal (signed <=) */

loc_001BEEAA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEEB2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1848);
    PUSH32(esp, 0x001BEEC1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEEC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEEE0
 * Original: 0x001BEEE0 - 0x001BEF25 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEEE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEF03; /* jge: greater or equal (signed >=) */

loc_001BEEE8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14C8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEEFFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEEFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEF03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEF12; /* jle: less or equal (signed <=) */

loc_001BEF0A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEF12: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14C8);
    PUSH32(esp, 0x001BEF21u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEF21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEF40
 * Original: 0x001BEF40 - 0x001BEF85 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEF40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEF63; /* jge: greater or equal (signed >=) */

loc_001BEF48: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1698);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEF5Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEF5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEF63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEF72; /* jle: less or equal (signed <=) */

loc_001BEF6A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEF72: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1698);
    PUSH32(esp, 0x001BEF81u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEF81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BEFA0
 * Original: 0x001BEFA0 - 0x001BEFE5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEFA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEFC3; /* jge: greater or equal (signed >=) */

loc_001BEFA8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1178);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BEFBFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEFBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BEFC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEFD2; /* jle: less or equal (signed <=) */

loc_001BEFCA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BEFD2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1178);
    PUSH32(esp, 0x001BEFE1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BEFE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF000
 * Original: 0x001BF000 - 0x001BF045 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF000: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF023; /* jge: greater or equal (signed >=) */

loc_001BF008: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1460);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF01Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF01F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF023: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF032; /* jle: less or equal (signed <=) */

loc_001BF02A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF032: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1460);
    PUSH32(esp, 0x001BF041u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF041: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF060
 * Original: 0x001BF060 - 0x001BF0A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF060: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF083; /* jge: greater or equal (signed >=) */

loc_001BF068: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F12B0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF07Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF07F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF083: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF092; /* jle: less or equal (signed <=) */

loc_001BF08A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF092: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F12B0);
    PUSH32(esp, 0x001BF0A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF0A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF0C0
 * Original: 0x001BF0C0 - 0x001BF105 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF0C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF0E3; /* jge: greater or equal (signed >=) */

loc_001BF0C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1200);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF0DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF0DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF0E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF0F2; /* jle: less or equal (signed <=) */

loc_001BF0EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF0F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1200);
    PUSH32(esp, 0x001BF101u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF101: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF120
 * Original: 0x001BF120 - 0x001BF165 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF120: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF143; /* jge: greater or equal (signed >=) */

loc_001BF128: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1570);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF13Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF13F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF143: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF152; /* jle: less or equal (signed <=) */

loc_001BF14A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF152: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1570);
    PUSH32(esp, 0x001BF161u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF161: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF180
 * Original: 0x001BF180 - 0x001BF1C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF180: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF1A3; /* jge: greater or equal (signed >=) */

loc_001BF188: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A80);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF19Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF19F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF1A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF1B2; /* jle: less or equal (signed <=) */

loc_001BF1AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF1B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A80);
    PUSH32(esp, 0x001BF1C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF1C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF1E0
 * Original: 0x001BF1E0 - 0x001BF225 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF1E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF203; /* jge: greater or equal (signed >=) */

loc_001BF1E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EC0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF1FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF1FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF203: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF212; /* jle: less or equal (signed <=) */

loc_001BF20A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF212: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EC0);
    PUSH32(esp, 0x001BF221u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF221: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF240
 * Original: 0x001BF240 - 0x001BF285 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF240: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF263; /* jge: greater or equal (signed >=) */

loc_001BF248: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1428);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF25Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF25F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF263: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF272; /* jle: less or equal (signed <=) */

loc_001BF26A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF272: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1428);
    PUSH32(esp, 0x001BF281u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF281: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF2A0
 * Original: 0x001BF2A0 - 0x001BF2E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF2A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF2C3; /* jge: greater or equal (signed >=) */

loc_001BF2A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1038);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF2BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF2BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF2C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF2D2; /* jle: less or equal (signed <=) */

loc_001BF2CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF2D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1038);
    PUSH32(esp, 0x001BF2E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF2E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF300
 * Original: 0x001BF300 - 0x001BF345 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF300: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF323; /* jge: greater or equal (signed >=) */

loc_001BF308: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1100);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF31Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF31F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF323: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF332; /* jle: less or equal (signed <=) */

loc_001BF32A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF332: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1100);
    PUSH32(esp, 0x001BF341u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF341: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF360
 * Original: 0x001BF360 - 0x001BF3A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF360: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF383; /* jge: greater or equal (signed >=) */

loc_001BF368: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1328);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF37Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF37F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF383: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF392; /* jle: less or equal (signed <=) */

loc_001BF38A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF392: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1328);
    PUSH32(esp, 0x001BF3A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF3A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF3C0
 * Original: 0x001BF3C0 - 0x001BF405 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF3C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF3E3; /* jge: greater or equal (signed >=) */

loc_001BF3C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1048);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF3DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF3DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF3E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF3F2; /* jle: less or equal (signed <=) */

loc_001BF3EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF3F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1048);
    PUSH32(esp, 0x001BF401u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF401: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF420
 * Original: 0x001BF420 - 0x001BF465 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF420: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF443; /* jge: greater or equal (signed >=) */

loc_001BF428: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AF8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF43Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF43F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF443: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF452; /* jle: less or equal (signed <=) */

loc_001BF44A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF452: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AF8);
    PUSH32(esp, 0x001BF461u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF461: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF480
 * Original: 0x001BF480 - 0x001BF4C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF480: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF4A3; /* jge: greater or equal (signed >=) */

loc_001BF488: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F12D0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF49Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF49F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF4A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF4B2; /* jle: less or equal (signed <=) */

loc_001BF4AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF4B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F12D0);
    PUSH32(esp, 0x001BF4C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF4C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF4E0
 * Original: 0x001BF4E0 - 0x001BF525 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF4E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF503; /* jge: greater or equal (signed >=) */

loc_001BF4E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1350);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF4FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF4FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF503: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF512; /* jle: less or equal (signed <=) */

loc_001BF50A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF512: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1350);
    PUSH32(esp, 0x001BF521u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF521: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF540
 * Original: 0x001BF540 - 0x001BF585 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF540: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF563; /* jge: greater or equal (signed >=) */

loc_001BF548: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1030);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF55Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF55F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF563: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF572; /* jle: less or equal (signed <=) */

loc_001BF56A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF572: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1030);
    PUSH32(esp, 0x001BF581u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF581: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF5A0
 * Original: 0x001BF5A0 - 0x001BF5E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF5A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF5C3; /* jge: greater or equal (signed >=) */

loc_001BF5A8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1934);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF5BFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF5BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF5C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF5D2; /* jle: less or equal (signed <=) */

loc_001BF5CA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF5D2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1934);
    PUSH32(esp, 0x001BF5E1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF5E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF600
 * Original: 0x001BF600 - 0x001BF645 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF600: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF623; /* jge: greater or equal (signed >=) */

loc_001BF608: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F48);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF61Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF61F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF623: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF632; /* jle: less or equal (signed <=) */

loc_001BF62A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF632: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F48);
    PUSH32(esp, 0x001BF641u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF641: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF660
 * Original: 0x001BF660 - 0x001BF6A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF660: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF683; /* jge: greater or equal (signed >=) */

loc_001BF668: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1678);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF67Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF67F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF683: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF692; /* jle: less or equal (signed <=) */

loc_001BF68A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF692: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1678);
    PUSH32(esp, 0x001BF6A1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF6A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF6C0
 * Original: 0x001BF6C0 - 0x001BF705 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF6C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF6E3; /* jge: greater or equal (signed >=) */

loc_001BF6C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F38);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF6DFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF6DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF6E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF6F2; /* jle: less or equal (signed <=) */

loc_001BF6EA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF6F2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F38);
    PUSH32(esp, 0x001BF701u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF701: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF720
 * Original: 0x001BF720 - 0x001BF765 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF720: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF743; /* jge: greater or equal (signed >=) */

loc_001BF728: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F40);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF73Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF73F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF743: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF752; /* jle: less or equal (signed <=) */

loc_001BF74A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF752: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F40);
    PUSH32(esp, 0x001BF761u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF761: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF780
 * Original: 0x001BF780 - 0x001BF7C5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF780: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF7A3; /* jge: greater or equal (signed >=) */

loc_001BF788: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1470);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF79Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF79F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF7A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF7B2; /* jle: less or equal (signed <=) */

loc_001BF7AA: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF7B2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1470);
    PUSH32(esp, 0x001BF7C1u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF7C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF7E0
 * Original: 0x001BF7E0 - 0x001BF825 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF7E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF803; /* jge: greater or equal (signed >=) */

loc_001BF7E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1450);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x001BF7FFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF7FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF812; /* jle: less or equal (signed <=) */

loc_001BF80A: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001BF812: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1450);
    PUSH32(esp, 0x001BF821u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001BF821: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF840
 * Original: 0x001BF840 - 0x001BF845 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF840(void)
{

loc_001BF840: ;
    MEM8(ecx + 0x3B) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001BF850
 * Original: 0x001BF850 - 0x001BF855 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF850(void)
{

loc_001BF850: ;
    MEM8(ecx + 0x3C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001BF860
 * Original: 0x001BF860 - 0x001BF865 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF860(void)
{

loc_001BF860: ;
    MEM8(ecx + 0x3D) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001BF870
 * Original: 0x001BF870 - 0x001BF8A9 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF870: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BF89Bu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BF89B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BF8A5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BF89Fu); } /* indirect call */
    }

loc_001BF8A5: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF8C0
 * Original: 0x001BF8C0 - 0x001BF8F7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF8C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF8C0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0xF7);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BF8E9u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BF8E9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BF8F3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BF8EDu); } /* indirect call */
    }

loc_001BF8F3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF910
 * Original: 0x001BF910 - 0x001BF93D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF910: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BF92Fu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BF92F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BF939u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BF933u); } /* indirect call */
    }

loc_001BF939: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF950
 * Original: 0x001BF950 - 0x001BF987 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF950: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x129);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BF979u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BF979: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BF983u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BF97Du); } /* indirect call */
    }

loc_001BF983: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF9A0
 * Original: 0x001BF9A0 - 0x001BF9D7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF9A0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x12A);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BF9C9u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BF9C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BF9D3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BF9CDu); } /* indirect call */
    }

loc_001BF9D3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF9F0
 * Original: 0x001BF9F0 - 0x001BFA2C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF9F0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BFA1Eu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BFA1E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BFA28u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BFA22u); } /* indirect call */
    }

loc_001BFA28: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFA40
 * Original: 0x001BFA40 - 0x001BFA63 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFA40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x164);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BFA55u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BFA55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BFA5Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BFA59u); } /* indirect call */
    }

loc_001BFA5F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFA70
 * Original: 0x001BFA70 - 0x001BFAA2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFA70: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x16A);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BFA94u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BFA94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BFA9Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BFA98u); } /* indirect call */
    }

loc_001BFA9E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFAB0
 * Original: 0x001BFAB0 - 0x001BFAE2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFAB0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x16B);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BFAD4u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001BFAD4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001BFADEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001BFAD8u); } /* indirect call */
    }

loc_001BFADE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFAF0
 * Original: 0x001BFAF0 - 0x001BFAF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFAF0(void)
{

loc_001BFAF0: ;
    SET_LO8(eax, MEM8(ecx + 0x13));
    esp += 4; return; /* ret */

}

/**
 * sub_001BFB00
 * Original: 0x001BFB00 - 0x001BFB0A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB00(void)
{

loc_001BFB00: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x13) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BFB10
 * Original: 0x001BFB10 - 0x001BFB14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB10(void)
{

loc_001BFB10: ;
    SET_LO8(eax, MEM8(ecx + 0x11));
    esp += 4; return; /* ret */

}

/**
 * sub_001BFB20
 * Original: 0x001BFB20 - 0x001BFB2A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB20(void)
{

loc_001BFB20: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x11) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BFB30
 * Original: 0x001BFB30 - 0x001BFB3A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB30(void)
{

loc_001BFB30: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x12) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BFB40
 * Original: 0x001BFB40 - 0x001BFB44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB40(void)
{

loc_001BFB40: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFB50
 * Original: 0x001BFB50 - 0x001BFB54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB50(void)
{

loc_001BFB50: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFB60
 * Original: 0x001BFB60 - 0x001BFB64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB60(void)
{

loc_001BFB60: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFB70
 * Original: 0x001BFB70 - 0x001BFBAF (63 bytes, 18 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFB70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BFB7Eu); RECOMP_ABI_CALL(0x00024326u, sub_00024326); /* call 0x00024326 */

loc_001BFB7E: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x104) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x10C) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x108) = edx;
    MEM32(esi + 0x110) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001BFBC0
 * Original: 0x001BFBC0 - 0x001BFC04 (68 bytes, 20 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFBC0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BFBD3u); RECOMP_ABI_CALL(0x0001725Cu, sub_0001725C); /* call 0x0001725C */

loc_001BFBD3: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x104) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0x108) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10C) = ecx;
    MEM32(esi + 0x110) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001BFC20
 * Original: 0x001BFC20 - 0x001BFC30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFC20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFC20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFC40
 * Original: 0x001BFC40 - 0x001BFC7E (62 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFC40: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0x001BFC5Fu); RECOMP_ABI_CALL(0x00587B31u, sub_00587B31); /* call 0x00587B31 */

loc_001BFC5F: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFC74u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001BFC74: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BFC90
 * Original: 0x001BFC90 - 0x001BFD3E (174 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFC90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFD34; /* jne: not equal / not zero */

loc_001BFCA3: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFD05; /* jne: not equal / not zero */

loc_001BFCA8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esi + 2) = LO8(ebx);
    PUSH32(esp, 0x001BFCB5u); RECOMP_ABI_CALL(0x005889D9u, sub_005889D9); /* call 0x005889D9 */

loc_001BFCB5: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    PUSH32(esp, 0x001BFCCBu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001BFCCB: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BFCE5u); RECOMP_ABI_CALL(0x005889B9u, sub_005889B9); /* call 0x005889B9 */

loc_001BFCE5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001BFD0F; /* jge: greater or equal (signed >=) */

loc_001BFCEF: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BFCF8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001BFCF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;

loc_001BFD05: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001BFD0F: ;
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x001BFD17u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001BFD17: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFD22u); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001BFD22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001BFD2Au); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001BFD2A: ;
    MEM8(esi) = 1;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;

loc_001BFD34: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BFD70
 * Original: 0x001BFD70 - 0x001BFD90 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFD70: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_AE(_fa, _fb)) goto loc_001BFD7D; /* jae: above or equal (unsigned >=) */

loc_001BFD7B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BFD7D: ;
    SET_LO8(edx, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFD86; /* je: equal / zero */

loc_001BFD84: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BFD86: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFD8D; /* je: equal / zero */

loc_001BFD8B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BFD8D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BFDA0
 * Original: 0x001BFDA0 - 0x001BFDCE (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFDA0: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_AE(_fa, _fb)) goto loc_001BFDAD; /* jae: above or equal (unsigned >=) */

loc_001BFDAB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BFDAD: ;
    SET_LO8(edx, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFDB6; /* je: equal / zero */

loc_001BFDB4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BFDB6: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFDBF; /* jne: not equal / not zero */

loc_001BFDBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFDC4; /* jne: not equal / not zero */

loc_001BFDBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_001BFDC4: ;
    eax = MEM32(ecx + 4);
    MEM8(ecx + 1) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BFDE0
 * Original: 0x001BFDE0 - 0x001BFDE5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFDE0(void)
{

loc_001BFDE0: ;
    MEM8(ecx + 1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFDF0
 * Original: 0x001BFDF0 - 0x001BFE4E (94 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFDF0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFE1E; /* je: equal / zero */

loc_001BFDFB: ;
    PUSH32(esp, 0x001BFE00u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001BFE00: ;
    ecx = MEM32(esi + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BFE0Eu); RECOMP_ABI_CALL(0x00588B2Eu, sub_00588B2E); /* call 0x00588B2E */

loc_001BFE0E: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFE25; /* jge: greater or equal (signed >=) */

loc_001BFE19: ;
    PUSH32(esp, 0x001BFE1Eu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001BFE1E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BFE25: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFE30u); RECOMP_ABI_CALL(0x00588A30u, sub_00588A30); /* call 0x00588A30 */

loc_001BFE30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001BFE38u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001BFE38: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFE47; /* jne: not equal / not zero */

loc_001BFE3F: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BFE1E; /* jle: less or equal (signed <=) */

loc_001BFE47: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFE70
 * Original: 0x001BFE70 - 0x001BFE80 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFE70: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFE7F; /* je: equal / zero */

loc_001BFE75: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFE7Eu); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_001BFE7E: ;
    POP32(esp, ecx);

loc_001BFE7F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFE90
 * Original: 0x001BFE90 - 0x001BFEAC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BFE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001BFE98u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001BFE98: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFEA3u); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_001BFEA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

}

/**
 * sub_001BFEC0
 * Original: 0x001BFEC0 - 0x001BFEDF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BFEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001BFEC8u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001BFEC8: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0x1000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFED6u); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_001BFED6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

}

/**
 * sub_001BFEF0
 * Original: 0x001BFEF0 - 0x001BFF69 (121 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFEF0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFF62; /* je: equal / zero */

loc_001BFEFB: ;
    PUSH32(esp, 0x001BFF00u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001BFF00: ;
    ecx = MEM32(esi + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BFF0Eu); RECOMP_ABI_CALL(0x00588B2Eu, sub_00588B2E); /* call 0x00588B2E */

loc_001BFF0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001BFF16u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001BFF16: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFF5B; /* je: equal / zero */

loc_001BFF1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFF62; /* jne: not equal / not zero */

loc_001BFF23: ;
    PUSH32(esp, 0x001BFF28u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001BFF28: ;
    eax = MEM32(esp + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFF37u); RECOMP_ABI_CALL(0x00588A30u, sub_00588A30); /* call 0x00588A30 */

loc_001BFF37: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001BFF3Fu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001BFF3F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFF5B; /* je: equal / zero */

loc_001BFF48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFF62; /* je: equal / zero */

loc_001BFF4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFF62; /* je: equal / zero */

loc_001BFF51: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0x1F4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFF62; /* jge: greater or equal (signed >=) */

loc_001BFF5B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BFF62: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFF90
 * Original: 0x001BFF90 - 0x001BFFE9 (89 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFE5; /* je: equal / zero */

loc_001BFF98: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFFA4; /* jge: greater or equal (signed >=) */

loc_001BFFA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001BFFAE;

loc_001BFFA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BFFAE; /* jle: less or equal (signed <=) */

loc_001BFFA9: ;
    eax = 0x7F;

loc_001BFFAE: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFFE4; /* jl: less (signed <) */

loc_001BFFB7: ;
    SET_LO8(ecx, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFC6; /* je: equal / zero */

loc_001BFFBE: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001BFFC6: ;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x001BFFCEu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001BFFCE: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BFFDCu); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001BFFDC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001BFFE4u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001BFFE4: ;
    POP32(esp, edi);

loc_001BFFE5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0000
 * Original: 0x001C0000 - 0x001C001F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C0008u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C0008: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0011u); RECOMP_ABI_CALL(0x00588C10u, sub_00588C10); /* call 0x00588C10 */

loc_001C0011: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x001C001Bu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C001B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C001B
 * Original: 0x001C001B - 0x001C001F (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C001B(void)
{

loc_001C001B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0030
 * Original: 0x001C0030 - 0x001C0034 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0030(void)
{

loc_001C0030: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0040
 * Original: 0x001C0040 - 0x001C0044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0040(void)
{

loc_001C0040: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0050
 * Original: 0x001C0050 - 0x001C00C5 (117 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0050: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C00C0; /* jne: not equal / not zero */

loc_001C0057: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx + 0x48;
    esi = ecx + 8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C0070;

    /* nop */

loc_001C0070: ;
    eax = MEM32(edi + 0x7F0000);
    edx = MEM32(edi + 0x7F0008);
    ecx = MEM32(edi + 0x7F0010);
    PUSH32(esp, eax);
    MEM32(esi + 8) = eax;
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esi + 4) = edx;
    MEM32(esi) = ecx;
    PUSH32(esp, 0x001C0093u); RECOMP_ABI_CALL(0x00587B31u, sub_00587B31); /* call 0x00587B31 */

loc_001C0093: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esi) = edx;
    PUSH32(esp, 0x001C00A2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C00A2: ;
    MEM32(esi + -4) = eax;
    MEM32(ebx) = 0xFFFFFFFFu;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0070; /* jl: less (signed <) */

loc_001C00BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001C00C0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C00F0
 * Original: 0x001C00F0 - 0x001C0139 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C00F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C00F0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C00FE; /* je: equal / zero */

loc_001C00FA: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C00FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C0110;

    /* nop */
    /* nop */

loc_001C0110: ;
    eax = MEM32(esi + 0x7F0000);
    ecx = MEM32(esi + 0x7F0008);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001C0125u); RECOMP_ABI_CALL(0x00031B7Fu, sub_00031B7F); /* call 0x00031B7F */

loc_001C0125: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0110; /* jl: less (signed <) */

loc_001C0130: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(ebx + 0x50) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0150
 * Original: 0x001C0150 - 0x001C019A (74 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    edi = ecx + 0x48;
    /* nop */

loc_001C0160: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0191; /* je: equal / zero */

loc_001C0166: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C017B; /* jne: not equal / not zero */

loc_001C016B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C017B; /* jne: not equal / not zero */

loc_001C0170: ;
    ecx = ebx;
    PUSH32(esp, 0x001C0177u); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C0177: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0191; /* jne: not equal / not zero */

loc_001C017B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0160; /* jl: less (signed <) */

loc_001C0187: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001C0191: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C01B0
 * Original: 0x001C01B0 - 0x001C01BF (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01B0(void)
{

loc_001C01B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x48) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C01D0
 * Original: 0x001C01D0 - 0x001C01DF (15 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01D0(void)
{

loc_001C01D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x48) = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C01F0
 * Original: 0x001C01F0 - 0x001C02BA (202 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C01F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = ebp + 0x48;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ebx;
    ecx = ebx;

loc_001C0203: ;
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C02A0; /* je: equal / zero */

loc_001C020F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0203; /* jl: less (signed <) */

loc_001C0218: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp;
    /* nop */

loc_001C0220: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C026E; /* jne: not equal / not zero */

loc_001C0225: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C02AE; /* je: equal / zero */

loc_001C022E: ;
    PUSH32(esp, 0x001C0233u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C0233: ;
    ecx = MEM32(esi + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0241u); RECOMP_ABI_CALL(0x00588B2Eu, sub_00588B2E); /* call 0x00588B2E */

loc_001C0241: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C02A9; /* jl: less (signed <) */

loc_001C024C: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0257u); RECOMP_ABI_CALL(0x00588A30u, sub_00588A30); /* call 0x00588A30 */

loc_001C0257: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C025Fu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C025F: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C026E; /* jne: not equal / not zero */

loc_001C0266: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C02AE; /* jle: less or equal (signed <=) */

loc_001C026E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0220; /* jl: less (signed <) */

loc_001C027A: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + 0x20;

loc_001C0283: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0290; /* jne: not equal / not zero */

loc_001C0288: ;
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C029F; /* je: equal / zero */

loc_001C0290: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0283; /* jl: less (signed <) */

loc_001C029C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C029F: ;
    POP32(esp, edi);

loc_001C02A0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C02A9: ;
    PUSH32(esp, 0x001C02AEu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C02AE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C02F0
 * Original: 0x001C02F0 - 0x001C0323 (51 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C02F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C02F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x14;
    edi = 2;
    /* nop */

loc_001C0300: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0317; /* jne: not equal / not zero */

loc_001C0305: ;
    SET_LO8(eax, MEM8(esi + -20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0317; /* je: equal / zero */

loc_001C030C: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0314u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_001C0314: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C0317: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C0300; /* jne: not equal / not zero */

loc_001C031D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0330
 * Original: 0x001C0330 - 0x001C035A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0330: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 2;
    /* nop */

loc_001C0340: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0351; /* je: equal / zero */

loc_001C0345: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C034Eu); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_001C034E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C0351: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C0340; /* jne: not equal / not zero */

loc_001C0357: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0370
 * Original: 0x001C0370 - 0x001C03A6 (54 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0370: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0380; /* jne: not equal / not zero */

loc_001C037A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C0380: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C038Cu); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C038C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0397; /* jne: not equal / not zero */

loc_001C0391: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C0397: ;
    ecx = eax + eax * 8;
    ecx = esi + ecx * 4;
    PUSH32(esp, 0x001C03A2u); RECOMP_ABI_CALL(0x0003418Bu, sub_0003418B); /* call 0x0003418B */

loc_001C03A2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C03C0
 * Original: 0x001C03C0 - 0x001C040E (78 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C03C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C03C0: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C03D0; /* jne: not equal / not zero */

loc_001C03CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001C03D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001C03DDu); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C03DD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C03EB; /* jne: not equal / not zero */

loc_001C03E4: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001C03EB: ;
    PUSH32(esp, 0x001C03F0u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C03F0: ;
    ecx = esi + esi * 8;
    edx = MEM32(edi + ecx * 4 + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C03FDu); RECOMP_ABI_CALL(0x00588C10u, sub_00588C10); /* call 0x00588C10 */

loc_001C03FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x001C0407u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C0407: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0430
 * Original: 0x001C0430 - 0x001C045A (42 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0430: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0449; /* je: equal / zero */

loc_001C043A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0444u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C0444: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C044F; /* jne: not equal / not zero */

loc_001C0449: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C044F: ;
    ecx = eax + eax * 8;
    eax = MEM32(esi + ecx * 4 + 0x1C);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0470
 * Original: 0x001C0470 - 0x001C049E (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0470: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0489; /* je: equal / zero */

loc_001C047A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0484u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C0484: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C048F; /* jne: not equal / not zero */

loc_001C0489: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C048F: ;
    ecx = eax + eax * 8;
    ecx = esi + ecx * 4;
    PUSH32(esp, 0x001C049Au); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C049A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C04B0
 * Original: 0x001C04B0 - 0x001C04E2 (50 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C04B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C04B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C04DE; /* je: equal / zero */

loc_001C04BA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C04C4u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C04C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C04DE; /* je: equal / zero */

loc_001C04C9: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    eax = eax + eax * 8;
    PUSH32(esp, edx);
    ecx = esi + eax * 4;
    PUSH32(esp, 0x001C04DEu); RECOMP_ABI_CALL(0x00031ADFu, sub_00031ADF); /* call 0x00031ADF */

loc_001C04DE: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C04F0
 * Original: 0x001C04F0 - 0x001C053F (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C04F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C04F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C053D; /* je: equal / zero */

loc_001C04FA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x001C0501u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C0501: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C053D; /* je: equal / zero */

loc_001C0506: ;
    eax = eax + eax * 8;
    ecx = esi + eax * 4;
    PUSH32(esp, 0x001C0511u); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C0511: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C053D; /* je: equal / zero */

loc_001C0515: ;
    PUSH32(esp, 0x001C051Au); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C051A: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x001C0527u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C0527: ;
    ecx = eax + eax * 8;
    edx = MEM32(esi + ecx * 4 + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C0534u); RECOMP_ABI_CALL(0x00588C53u, sub_00588C53); /* call 0x00588C53 */

loc_001C0534: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

loc_001C053D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0560
 * Original: 0x001C0560 - 0x001C05AC (76 bytes, 21 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0560(void)
{

loc_001C0560: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM8(eax + 4) = 1;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001C05C0
 * Original: 0x001C05C0 - 0x001C05DC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C05C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C05C0: ;
    eax = MEM32(0x8F6A68);
    eax = eax & 0xC0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    eax = 0x8B3838;
    if (CMP_EQ(_fa, _fb)) goto loc_001C05DB; /* je: equal / zero */

loc_001C05D6: ;
    eax = 0x8B36A8;

loc_001C05DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C05F0
 * Original: 0x001C05F0 - 0x001C05F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C05F0(void)
{

loc_001C05F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0600
 * Original: 0x001C0600 - 0x001C0640 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0600: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F0108)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x13) = LO8(eax);
    MEM8(ecx + 0x11) = LO8(eax);
    MEM8(ecx + 0x12) = LO8(eax);
    edx = 0x1010101;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(ecx + 0x2A) = LO8(eax);
    MEM8(ecx + 0x2B) = LO8(eax);
    MEM8(ecx + 0x28) = LO8(eax);
    MEM8(ecx + 0x29) = LO8(eax);
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x28) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0650
 * Original: 0x001C0650 - 0x001C0A13 (963 bytes, 305 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0650(void)
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

loc_001C0650: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 3) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001C0686; /* jne: not equal / not zero */

loc_001C065E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_001C0686: ;
    eax = MEM32(0x8F6A68);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    esi = 0x8B3838;
    if (CMP_EQ(_fa, _fb)) goto loc_001C06A5; /* je: equal / zero */

loc_001C06A0: ;
    esi = 0x8B36A8;

loc_001C06A5: ;
    ebp = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C06B8u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C06B8: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C0735; /* jp: parity */

loc_001C06CB: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = esi + 0xC0;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = 0x80200;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C06ECu); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C06EC: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C0704; /* jp: parity */

loc_001C06FF: ;
    ebx = 0x80208;

loc_001C0704: ;
    edx = MEM32(esp + 0x18);
    ecx = esi + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0716u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C0716: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C09B9; /* jp: parity */

loc_001C072D: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C09B9;

loc_001C0735: ;
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0740u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C0740: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C098C; /* jp: parity */

loc_001C0757: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7A99C0); /* comiss */
    ebx = 0x80100;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C0772; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7A99C0)) */

loc_001C076B: ;
    ebx = 0x84100;
    goto loc_001C0784;

loc_001C0772: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D9010)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C0784; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C077F: ;
    ebx = 0x82100;

loc_001C0784: ;
    ecx = esi + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0792u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C0792: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C07AD; /* jp: parity */

loc_001C07A5: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C09E5;

loc_001C07AD: ;
    edx = esi + 0xD0;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C07BBu); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C07BB: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C07D6; /* jp: parity */

loc_001C07CE: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C09E5;

loc_001C07D6: ;
    eax = esi + 0x150;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C07E4u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C07E4: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C088B; /* jp: parity */

loc_001C07FB: ;
    ecx = esi + 0x160;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001C080Cu); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C080C: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C09E5; /* jp: parity */

loc_001C0823: ;
    edx = esi + 0xE0;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x400;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001C0837u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C0837: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C0855; /* jp: parity */

loc_001C084A: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x20000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C09E5;

loc_001C0855: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B047C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C086F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B047C)) */

loc_001C0864: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x50000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C09E5;

loc_001C086F: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BA42C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C09E5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C0880: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x48000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C09E5;

loc_001C088B: ;
    eax = esi + 0xF0;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0899u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C0899: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C08B7; /* jp: parity */

loc_001C08AC: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C09E5;

loc_001C08B7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C0939; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_001C08C1: ;
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C08CCu); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C08CC: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C08E5; /* jp: parity */

loc_001C08DF: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C08E5: ;
    edx = esi + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C08F3u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C08F3: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C090C; /* jp: parity */

loc_001C0906: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x100000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C090C: ;
    eax = esi + 0x80;

loc_001C0912: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C091Au); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C091A: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C09E5; /* jp: parity */

loc_001C0931: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C09E5;

loc_001C0939: ;
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0944u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C0944: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C095D; /* jp: parity */

loc_001C0957: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C095D: ;
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C096Bu); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C096B: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C0984; /* jp: parity */

loc_001C097E: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0x100000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C0984: ;
    eax = esi + 0x90;
    goto loc_001C0912;

loc_001C098C: ;
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = 0x80010;
    PUSH32(esp, 0x001C099Cu); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C099C: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C09B4; /* jp: parity */

loc_001C09AF: ;
    ebx = 0x80011;

loc_001C09B4: ;
    MEM8(esp + 0x13) = 1;

loc_001C09B9: ;
    edx = esi + 0x180;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C09C7u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C09C7: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C09DD; /* jp: parity */

loc_001C09DA: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C09DD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0A09; /* je: equal / zero */

loc_001C09E5: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x170)) >> 32) & 1);
    esi = esi + 0x170;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C09F3u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C09F3: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C0A09; /* jp: parity */

loc_001C0A06: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C0A09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C0B10
 * Original: 0x001C0B10 - 0x001C0B1F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0B10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0B30
 * Original: 0x001C0B30 - 0x001C0B63 (51 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0B30(void)
{

loc_001C0B30: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 4) = 0x7FFF;
    MEM32(eax + 8) = 0x7F;
    MEM32(eax + 0xC) = 0x56;
    MEM32(eax + 0x10) = 0x1E;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0B70
 * Original: 0x001C0B70 - 0x001C0B71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0B70(void)
{

loc_001C0B70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0B80
 * Original: 0x001C0B80 - 0x001C0BE8 (104 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0B80: ;
    eax = MEM32(0x8F20EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0BE7; /* jne: not equal / not zero */

loc_001C0B89: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001C0B92u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C0B92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0BD6; /* je: equal / zero */

loc_001C0B99: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 4) = 0x7FFF;
    MEM32(eax + 8) = 0x7F;
    MEM32(eax + 0xC) = 0x56;
    MEM32(eax + 0x10) = 0x1E;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(0x8F20EC) = eax;
    MEM8(0x8F20F0) = 1;
    esp += 4; return; /* ret */

loc_001C0BD6: ;
    MEM32(0x8F20EC) = 0;
    MEM8(0x8F20F0) = 1;

loc_001C0BE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0C10
 * Original: 0x001C0C10 - 0x001C0C16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C10(void)
{

loc_001C0C10: ;
    SET_LO8(eax, MEM8(0x8F20F0));
    esp += 4; return; /* ret */

}

/**
 * sub_001C0C20
 * Original: 0x001C0C20 - 0x001C0C21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C20(void)
{

loc_001C0C20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0C30
 * Original: 0x001C0C30 - 0x001C0C49 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0C30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001C0C43; /* je: equal / zero */

loc_001C0C3A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0C40u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C0C40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C0C43: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0C50
 * Original: 0x001C0C50 - 0x001C0C56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C50(void)
{

loc_001C0C50: ;
    eax = MEM32(0x8F20EC);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0C60
 * Original: 0x001C0C60 - 0x001C0C79 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C60(void)
{

loc_001C0C60: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0C75u); RECOMP_ABI_CALL(0x00588CEBu, sub_00588CEB); /* call 0x00588CEB */

loc_001C0C75: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0C80
 * Original: 0x001C0C80 - 0x001C0C9A (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C80(void)
{

loc_001C0C80: ;
    eax = MEM32(0x8F20EC);
    MEM32(eax + 0x14) = 0x8B2DE0;
    ecx = MEM32(0x8F20EC);
    MEM32(ecx + 0x18) = 0x8B2ED0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0CA0
 * Original: 0x001C0CA0 - 0x001C0CB9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0CA0(void)
{

loc_001C0CA0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA840); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0CB7u); RECOMP_ABI_CALL(0x00588CEBu, sub_00588CEB); /* call 0x00588CEB */

loc_001C0CB7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0CC0
 * Original: 0x001C0CC0 - 0x001C0CD5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0CC0(void)
{

loc_001C0CC0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0CD3u); RECOMP_ABI_CALL(0x00588CEBu, sub_00588CEB); /* call 0x00588CEB */

loc_001C0CD3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0CE0
 * Original: 0x001C0CE0 - 0x001C0D7A (154 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0CE0(void)
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

loc_001C0CE0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 0x18);
    eax = eax + eax * 4;
    edx = ecx + eax * 4;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x10);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(0x904B9F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0xC) = ecx;
    SET_LO8(ecx, MEM8(0x904B91));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C0D2A; /* je: equal / zero */

loc_001C0D26: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0D5A; /* jne: not equal / not zero */

loc_001C0D2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0D44; /* je: equal / zero */

loc_001C0D2E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C0D44: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C0D5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001C0D6A; /* jne: not equal / not zero */

loc_001C0D64: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_001C0D6A: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C0DA0
 * Original: 0x001C0DA0 - 0x001C0FA9 (521 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0DA0(void)
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

loc_001C0DA0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x14)) >> 32) & 1);
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;

loc_001C0DB2: ;
    xmm1 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x10); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x40); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x50); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x70); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x80); /* addss */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA0)) >> 32) & 1);
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = xmm1; /* movaps */
    if ((_fa != 0)) goto loc_001C0DB2; /* jne: not equal / not zero */

loc_001C0DF5: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 2;

loc_001C0E00: ;
    xmm1 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + -12); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + -8); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x10); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x14); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0xC); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x24); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x28); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x1C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x38); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x3C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x4C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x50); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x44); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x48); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x64); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x58); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x5C); /* addss */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x78)) >> 32) & 1);
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = xmm1; /* movaps */
    if ((_fa != 0)) goto loc_001C0E00; /* jne: not equal / not zero */

loc_001C0E88: ;
    eax = (uint32_t)(int32_t)SMEM8(0x904B94);
    ecx = (uint32_t)(int32_t)SMEM8(0x904B95);
    edx = (uint32_t)(int32_t)SMEM8(0x904B97);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(0x904B9B);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(0x904B9C);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM8(0x904B9D);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(0x904B98);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(0x904B99);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM8(0x904B92);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(0x904B91);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(0x904B9F);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM8(0x904BA0);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(0x904BA1);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C0F56u); RECOMP_ABI_CALL(0x00034E97u, sub_00034E97); /* call 0x00034E97 */

loc_001C0F56: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001C0F80; /* je: equal / zero */

loc_001C0F62: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C0F78; /* je: equal / zero */

loc_001C0F65: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C0F70; /* je: equal / zero */

loc_001C0F68: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x7F0130)); /* fadd qword ptr [0x7f0130] */
    goto loc_001C0F86;

loc_001C0F70: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x7F0120)); /* fadd qword ptr [0x7f0120] */
    goto loc_001C0F86;

loc_001C0F78: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x7F0110)); /* fadd qword ptr [0x7f0110] */
    goto loc_001C0F86;

loc_001C0F80: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x7E0FC0)); /* fadd qword ptr [0x7e0fc0] */

loc_001C0F86: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C0FA4; /* jnp: not parity */

loc_001C0F9A: ;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001C0FA4: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C1030
 * Original: 0x001C1030 - 0x001C1047 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1030: ;
    SET_LO8(ecx, MEM8(0x904B91));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1046; /* je: equal / zero */

loc_001C103C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1046; /* je: equal / zero */

loc_001C1041: ;
    eax = 1;

loc_001C1046: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1050
 * Original: 0x001C1050 - 0x001C1070 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1050: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7F013C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1080
 * Original: 0x001C1080 - 0x001C108F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1080: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x896158);
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C10A0
 * Original: 0x001C10A0 - 0x001C10AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C10A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C10A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C10B0
 * Original: 0x001C10B0 - 0x001C10B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C10B0(void)
{

loc_001C10B0: ;
    MEM32(ecx + 0x18) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C10C0
 * Original: 0x001C10C0 - 0x001C10E4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C10C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C10C0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C10CB; /* jl: less (signed <) */

loc_001C10C8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C10CB: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C10C8; /* jge: greater or equal (signed >=) */

loc_001C10D3: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(0x896158);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_001C10F0
 * Original: 0x001C10F0 - 0x001C10F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C10F0(void)
{

loc_001C10F0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1100
 * Original: 0x001C1100 - 0x001C1124 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1100: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C110B; /* jl: less (signed <) */

loc_001C1108: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C110B: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C1108; /* jge: greater or equal (signed >=) */

loc_001C1113: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(0x896158);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1130
 * Original: 0x001C1130 - 0x001C1160 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1130: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = 0x64;
    MEM32(eax) = 0x7F0154;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x2EE;
    MEM32(eax + 4) = 0x1E;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1170
 * Original: 0x001C1170 - 0x001C11F9 (137 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C1170: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001C11F2; /* jge: greater or equal (signed >=) */

loc_001C117E: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C11F2; /* jge: greater or equal (signed >=) */

loc_001C1186: ;
    eax = MEM32(0x896158);
    esi = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001C11F2; /* jg: greater (signed >) */

loc_001C1197: ;
    PUSH32(esp, 0x001C119Cu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001C119C: ;
    ecx = eax;
    PUSH32(esp, 0x001C11A3u); RECOMP_ABI_CALL(0x0001457Fu, sub_0001457F); /* call 0x0001457F */

loc_001C11A3: ;
    esi = eax;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x3C (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001C11F2; /* jl: less (signed <) */

loc_001C11AB: ;
    PUSH32(esp, 0x001C11B0u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001C11B0: ;
    ecx = eax;
    PUSH32(esp, 0x001C11B7u); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_001C11B7: ;
    ecx = SX16(LO16(eax));
    edx = SX16(LO16(esi));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x3C));
    ecx = ecx - 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001C11F2; /* jg: greater (signed >) */

loc_001C11C4: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x8F1950;
    PUSH32(esp, 0x001C11D8u); RECOMP_ABI_CALL(0x00023E30u, sub_00023E30); /* call 0x00023E30 */

loc_001C11D8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C11E7u); RECOMP_ABI_CALL(0x000111EAu, sub_000111EA); /* call 0x000111EA */

loc_001C11E7: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C11F2: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1220
 * Original: 0x001C1220 - 0x001C12FC (220 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1220: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C122Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1228u); } /* indirect call */
    }

loc_001C122B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1234; /* jne: not equal / not zero */

loc_001C122F: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C1234: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = 0x8F1950;
    PUSH32(esp, 0x001C124Bu); RECOMP_ABI_CALL(0x00023E30u, sub_00023E30); /* call 0x00023E30 */

loc_001C124B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1255u); RECOMP_ABI_CALL(0x00021261u, sub_00021261); /* call 0x00021261 */

loc_001C1255: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x001C125Fu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001C125F: ;
    ecx = eax;
    PUSH32(esp, 0x001C1266u); RECOMP_ABI_CALL(0x0001457Fu, sub_0001457F); /* call 0x0001457F */

loc_001C1266: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    ecx = 0x8B26F0;
    edi = eax;
    PUSH32(esp, 0x001C1279u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C1279: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = 0x8B23A8;
    ebp = eax;
    PUSH32(esp, 0x001C128Au); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C128A: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001C1298u); RECOMP_ABI_CALL(0x00012360u, sub_00012360); /* call 0x00012360 */

loc_001C1298: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C12A6u); RECOMP_ABI_CALL(0x0002DBECu, sub_0002DBEC); /* call 0x0002DBEC */

loc_001C12A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x001C12B4u); RECOMP_ABI_CALL(0x0003468Bu, sub_0003468B); /* call 0x0003468B */

loc_001C12B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C12BDu); RECOMP_ABI_CALL(0x00031661u, sub_00031661); /* call 0x00031661 */

loc_001C12BD: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C12E2u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C12E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C12ECu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C12E6u); } /* indirect call */
    }

loc_001C12EC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx + 0x20) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1340
 * Original: 0x001C1340 - 0x001C134F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1340: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1360
 * Original: 0x001C1360 - 0x001C1361 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1360(void)
{

loc_001C1360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1370
 * Original: 0x001C1370 - 0x001C13A0 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1370: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = 0x64;
    MEM32(eax) = 0x7F016C;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x96;
    MEM32(eax + 4) = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C13B0
 * Original: 0x001C13B0 - 0x001C13F4 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C13B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C13B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C13D5; /* jge: greater or equal (signed >=) */

loc_001C13BB: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C13D5; /* jge: greater or equal (signed >=) */

loc_001C13C3: ;
    edx = MEM32(0x896158);
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C13D9; /* jle: less or equal (signed <=) */

loc_001C13D5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C13D9: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0x73) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0x73 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C13D5; /* jg: greater (signed >) */

loc_001C13E3: ;
    PUSH32(esp, 0x001C13E8u); RECOMP_ABI_CALL(0x00018A99u, sub_00018A99); /* call 0x00018A99 */

loc_001C13E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C13D5; /* je: equal / zero */

loc_001C13ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1410
 * Original: 0x001C1410 - 0x001C148B (123 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C1410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1410: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C1419u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1416u); } /* indirect call */
    }

loc_001C1419: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C141F; /* jne: not equal / not zero */

loc_001C141D: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C141F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C1430u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C1430: ;
    esi = eax;
    PUSH32(esp, 0x001C1437u); RECOMP_ABI_CALL(0x00035A1Du, sub_00035A1D); /* call 0x00035A1D */

loc_001C1437: ;
    edi = eax;
    PUSH32(esp, 0x001C143Eu); RECOMP_ABI_CALL(0x00018A99u, sub_00018A99); /* call 0x00018A99 */

loc_001C143E: ;
    SET_LO16(ecx, MEM16(0x8F6B76));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x8F6BD2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(0x8F6BD2) (16-bit) */
    ebx = eax;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C1457u); RECOMP_ABI_CALL(0x000189A4u, sub_000189A4); /* call 0x000189A4 */

loc_001C1457: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C146Fu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C146F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C1479u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1473u); } /* indirect call */
    }

loc_001C1479: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C1481u); RECOMP_ABI_CALL(0x00018A99u, sub_00018A99); /* call 0x00018A99 */

loc_001C1481: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x20) = eax;
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C14B0
 * Original: 0x001C14B0 - 0x001C14C5 (21 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C14B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C14B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C14B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C14B5u); } /* indirect call */
    }

loc_001C14B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C14C1; /* je: equal / zero */

loc_001C14BC: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C14C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C14D0
 * Original: 0x001C14D0 - 0x001C14DF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C14D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C14D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C14F0
 * Original: 0x001C14F0 - 0x001C14F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C14F0(void)
{

loc_001C14F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1500
 * Original: 0x001C1500 - 0x001C1516 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1500: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C1508u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1505u); } /* indirect call */
    }

loc_001C1508: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x46;
    if (CMP_NE(_fa, _fb)) goto loc_001C1514; /* jne: not equal / not zero */

loc_001C1511: ;
    eax = MEM32(esi + 4);

loc_001C1514: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1520
 * Original: 0x001C1520 - 0x001C157E (94 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C1570; /* jge: greater or equal (signed >=) */

loc_001C153E: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C1570; /* jge: greater or equal (signed >=) */

loc_001C1546: ;
    edi = MEM32(ecx + 0x1C);
    eax = MEM32(0x896158);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C1570; /* jg: greater (signed >) */

loc_001C1555: ;
    eax = esi + esi * 4;
    eax = edx + eax * 4;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x2C), 0x800000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C1577; /* jg: greater (signed >) */

loc_001C1565: ;
    edx = MEM32(ecx + eax * 4 + 0xCC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1577; /* jne: not equal / not zero */

loc_001C1570: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C1577: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C15A0
 * Original: 0x001C15A0 - 0x001C15A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15A0(void)
{

loc_001C15A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C15B0
 * Original: 0x001C15B0 - 0x001C15DB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C15B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0xA0);
    eax = esi + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C15C3u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C15C3: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C15D6u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C15D6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C15F0
 * Original: 0x001C15F0 - 0x001C162A (58 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C15F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x7F0184;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 5;
    MEM32(eax + 0xC) = 0x64;
    MEM32(eax + 0x10) = 0x708;
    MEM32(eax + 4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1640
 * Original: 0x001C1640 - 0x001C167B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C1640: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C165F; /* jge: greater or equal (signed >=) */

loc_001C1648: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C165F; /* jge: greater or equal (signed >=) */

loc_001C1650: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(0x896158);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001C1662; /* jle: less or equal (signed <=) */

loc_001C165F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C1662: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C1673u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C1673: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1690
 * Original: 0x001C1690 - 0x001C16E1 (81 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C1690: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C1695u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1692u); } /* indirect call */
    }

loc_001C1695: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C16D7; /* je: equal / zero */

loc_001C1699: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    eax = eax + eax * 4;
    POP32(esp, esi);
    eax = edx + eax * 4;
    edx = eax + eax * 4;
    SET_LO8(eax, MEM8(edx * 4 + 0x8F6C2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001C16D7; /* ja: above (unsigned >) */

loc_001C16C3: ;
    eax = MEM32(ecx + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7EFFE4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C16DC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7EFFE4)) */

loc_001C16D7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_001C16DC: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1700
 * Original: 0x001C1700 - 0x001C1716 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1700: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1720
 * Original: 0x001C1720 - 0x001C1721 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1720(void)
{

loc_001C1720: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1730
 * Original: 0x001C1730 - 0x001C1763 (51 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1730: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x7F019C;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 8) = 5;
    MEM32(eax + 0xC) = 0x64;
    MEM32(eax + 0x10) = 0x708;
    MEM32(eax + 4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1770
 * Original: 0x001C1770 - 0x001C17AB (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C1770: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C178F; /* jge: greater or equal (signed >=) */

loc_001C1778: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C178F; /* jge: greater or equal (signed >=) */

loc_001C1780: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(0x896158);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001C1792; /* jle: less or equal (signed <=) */

loc_001C178F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C1792: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C17A3u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C17A3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001C17C0
 * Original: 0x001C17C0 - 0x001C17DA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C17C0: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C17D2; /* jne: not equal / not zero */

loc_001C17CD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_001C17D2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C17D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C17D4u); } /* indirect call */
    }

loc_001C17D7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C17E0
 * Original: 0x001C17E0 - 0x001C17EF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C17E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}
