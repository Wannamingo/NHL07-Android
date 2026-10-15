/**
 * nhl_07_recomp - Recompiled code chunk 261
 * Functions: 250 (0x0060963F - 0x0060D752)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0060963F
 * Original: 0x0060963F - 0x00609644 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060963F(void)
{

loc_0060963F: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609644
 * Original: 0x00609644 - 0x00609675 (49 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609644(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609644: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00609650u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060964Du); } /* indirect call */
    }

loc_00609650: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060966F; /* jne: not equal / not zero */

loc_00609654: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0060965Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609658u); } /* indirect call */
    }

loc_0060965B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060966F; /* jne: not equal / not zero */

loc_0060965F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00609666u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609663u); } /* indirect call */
    }

loc_00609666: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060966F; /* jne: not equal / not zero */

loc_0060966A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609671;

loc_0060966F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609671: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609675
 * Original: 0x00609675 - 0x00609679 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609675(void)
{

loc_00609675: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00609679
 * Original: 0x00609679 - 0x00609AFE (1157 bytes, 441 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609679(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00609679: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x00609684u); RECOMP_ABI_CALL(0x0060CBE4u, sub_0060CBE4); /* call 0x0060CBE4 */

loc_00609684: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A);
    ecx = ebp + 8;
    MEM32(ebp) = 0x881098;
    PUSH32(esp, 0x00609698u); RECOMP_ABI_CALL(0x004ABC68u, sub_004ABC68); /* call 0x004ABC68 */

loc_00609698: ;
    PUSH32(esp, 0x0060969Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060969D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    POP32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x006096A9u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_006096A9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006096B9; /* je: equal / zero */

loc_006096B0: ;
    ecx = eax;
    PUSH32(esp, 0x006096B7u); RECOMP_ABI_CALL(0x006087F9u, sub_006087F9); /* call 0x006087F9 */

loc_006096B7: ;
    goto loc_006096BB;

loc_006096B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006096BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x006096C1u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_006096C1: ;
    ecx = eax;
    PUSH32(esp, 0x006096C8u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_006096C8: ;
    edi = ebp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006096D3u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_006096D3: ;
    PUSH32(esp, 0x006096D8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_006096D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x006096E1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_006096E1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006096F1; /* je: equal / zero */

loc_006096E8: ;
    ecx = eax;
    PUSH32(esp, 0x006096EFu); RECOMP_ABI_CALL(0x00608832u, sub_00608832); /* call 0x00608832 */

loc_006096EF: ;
    goto loc_006096F3;

loc_006096F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006096F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x006096F9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_006096F9: ;
    ecx = eax;
    PUSH32(esp, 0x00609700u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609700: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609708u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609708: ;
    PUSH32(esp, 0x0060970Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060970D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609716u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609716: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609726; /* je: equal / zero */

loc_0060971D: ;
    ecx = eax;
    PUSH32(esp, 0x00609724u); RECOMP_ABI_CALL(0x0060886Bu, sub_0060886B); /* call 0x0060886B */

loc_00609724: ;
    goto loc_00609728;

loc_00609726: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609728: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060972Eu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060972E: ;
    ecx = eax;
    PUSH32(esp, 0x00609735u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609735: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0060973Du); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060973D: ;
    PUSH32(esp, 0x00609742u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609742: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060974Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060974B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060975B; /* je: equal / zero */

loc_00609752: ;
    ecx = eax;
    PUSH32(esp, 0x00609759u); RECOMP_ABI_CALL(0x006088A4u, sub_006088A4); /* call 0x006088A4 */

loc_00609759: ;
    goto loc_0060975D;

loc_0060975B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060975D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609763u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609763: ;
    ecx = eax;
    PUSH32(esp, 0x0060976Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060976A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609772u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609772: ;
    PUSH32(esp, 0x00609777u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609777: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609780u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609780: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609790; /* je: equal / zero */

loc_00609787: ;
    ecx = eax;
    PUSH32(esp, 0x0060978Eu); RECOMP_ABI_CALL(0x006088DDu, sub_006088DD); /* call 0x006088DD */

loc_0060978E: ;
    goto loc_00609792;

loc_00609790: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609792: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609798u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609798: ;
    ecx = eax;
    PUSH32(esp, 0x0060979Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060979F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006097A7u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_006097A7: ;
    PUSH32(esp, 0x006097ACu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_006097AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x006097B5u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_006097B5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006097C5; /* je: equal / zero */

loc_006097BC: ;
    ecx = eax;
    PUSH32(esp, 0x006097C3u); RECOMP_ABI_CALL(0x00608916u, sub_00608916); /* call 0x00608916 */

loc_006097C3: ;
    goto loc_006097C7;

loc_006097C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006097C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x006097CDu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_006097CD: ;
    ecx = eax;
    PUSH32(esp, 0x006097D4u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_006097D4: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006097DCu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_006097DC: ;
    PUSH32(esp, 0x006097E1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_006097E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x006097EAu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_006097EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006097FA; /* je: equal / zero */

loc_006097F1: ;
    ecx = eax;
    PUSH32(esp, 0x006097F8u); RECOMP_ABI_CALL(0x0060894Fu, sub_0060894F); /* call 0x0060894F */

loc_006097F8: ;
    goto loc_006097FC;

loc_006097FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006097FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609802u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609802: ;
    ecx = eax;
    PUSH32(esp, 0x00609809u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609809: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609811u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609811: ;
    PUSH32(esp, 0x00609816u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609816: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060981Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060981F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060982F; /* je: equal / zero */

loc_00609826: ;
    ecx = eax;
    PUSH32(esp, 0x0060982Du); RECOMP_ABI_CALL(0x00608988u, sub_00608988); /* call 0x00608988 */

loc_0060982D: ;
    goto loc_00609831;

loc_0060982F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609831: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609837u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609837: ;
    ecx = eax;
    PUSH32(esp, 0x0060983Eu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060983E: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609846u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609846: ;
    PUSH32(esp, 0x0060984Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060984B: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609854u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609854: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609864; /* je: equal / zero */

loc_0060985B: ;
    ecx = eax;
    PUSH32(esp, 0x00609862u); RECOMP_ABI_CALL(0x006089C1u, sub_006089C1); /* call 0x006089C1 */

loc_00609862: ;
    goto loc_00609866;

loc_00609864: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609866: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060986Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060986C: ;
    ecx = eax;
    PUSH32(esp, 0x00609873u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609873: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0060987Bu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060987B: ;
    PUSH32(esp, 0x00609880u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609880: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609889u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609889: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609899; /* je: equal / zero */

loc_00609890: ;
    ecx = eax;
    PUSH32(esp, 0x00609897u); RECOMP_ABI_CALL(0x006089FAu, sub_006089FA); /* call 0x006089FA */

loc_00609897: ;
    goto loc_0060989B;

loc_00609899: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060989B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x006098A1u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_006098A1: ;
    ecx = eax;
    PUSH32(esp, 0x006098A8u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_006098A8: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006098B0u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_006098B0: ;
    PUSH32(esp, 0x006098B5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_006098B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x006098BEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_006098BE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006098CE; /* je: equal / zero */

loc_006098C5: ;
    ecx = eax;
    PUSH32(esp, 0x006098CCu); RECOMP_ABI_CALL(0x00608A33u, sub_00608A33); /* call 0x00608A33 */

loc_006098CC: ;
    goto loc_006098D0;

loc_006098CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006098D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x006098D6u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_006098D6: ;
    ecx = eax;
    PUSH32(esp, 0x006098DDu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_006098DD: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006098E5u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_006098E5: ;
    PUSH32(esp, 0x006098EAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_006098EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x006098F3u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_006098F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609903; /* je: equal / zero */

loc_006098FA: ;
    ecx = eax;
    PUSH32(esp, 0x00609901u); RECOMP_ABI_CALL(0x00608A6Cu, sub_00608A6C); /* call 0x00608A6C */

loc_00609901: ;
    goto loc_00609905;

loc_00609903: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609905: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060990Bu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060990B: ;
    ecx = eax;
    PUSH32(esp, 0x00609912u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609912: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0060991Au); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060991A: ;
    PUSH32(esp, 0x0060991Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060991F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609928u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609928: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609938; /* je: equal / zero */

loc_0060992F: ;
    ecx = eax;
    PUSH32(esp, 0x00609936u); RECOMP_ABI_CALL(0x00608AA5u, sub_00608AA5); /* call 0x00608AA5 */

loc_00609936: ;
    goto loc_0060993A;

loc_00609938: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060993A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609940u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609940: ;
    ecx = eax;
    PUSH32(esp, 0x00609947u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609947: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0060994Fu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060994F: ;
    PUSH32(esp, 0x00609954u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609954: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060995Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060995D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060996D; /* je: equal / zero */

loc_00609964: ;
    ecx = eax;
    PUSH32(esp, 0x0060996Bu); RECOMP_ABI_CALL(0x00608ADEu, sub_00608ADE); /* call 0x00608ADE */

loc_0060996B: ;
    goto loc_0060996F;

loc_0060996D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060996F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609975u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609975: ;
    ecx = eax;
    PUSH32(esp, 0x0060997Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060997C: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609984u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609984: ;
    PUSH32(esp, 0x00609989u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609989: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609992u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609992: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006099A2; /* je: equal / zero */

loc_00609999: ;
    ecx = eax;
    PUSH32(esp, 0x006099A0u); RECOMP_ABI_CALL(0x00608B17u, sub_00608B17); /* call 0x00608B17 */

loc_006099A0: ;
    goto loc_006099A4;

loc_006099A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006099A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x006099AAu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_006099AA: ;
    ecx = eax;
    PUSH32(esp, 0x006099B1u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_006099B1: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006099B9u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_006099B9: ;
    PUSH32(esp, 0x006099BEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_006099BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x006099C7u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_006099C7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006099D7; /* je: equal / zero */

loc_006099CE: ;
    ecx = eax;
    PUSH32(esp, 0x006099D5u); RECOMP_ABI_CALL(0x00608B50u, sub_00608B50); /* call 0x00608B50 */

loc_006099D5: ;
    goto loc_006099D9;

loc_006099D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006099D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x006099DFu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_006099DF: ;
    ecx = eax;
    PUSH32(esp, 0x006099E6u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_006099E6: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006099EEu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_006099EE: ;
    PUSH32(esp, 0x006099F3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_006099F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x006099FCu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_006099FC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609A0C; /* je: equal / zero */

loc_00609A03: ;
    ecx = eax;
    PUSH32(esp, 0x00609A0Au); RECOMP_ABI_CALL(0x00608B89u, sub_00608B89); /* call 0x00608B89 */

loc_00609A0A: ;
    goto loc_00609A0E;

loc_00609A0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609A0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609A14u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609A14: ;
    ecx = eax;
    PUSH32(esp, 0x00609A1Bu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609A1B: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609A23u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609A23: ;
    PUSH32(esp, 0x00609A28u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609A28: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609A31u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609A31: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609A41; /* je: equal / zero */

loc_00609A38: ;
    ecx = eax;
    PUSH32(esp, 0x00609A3Fu); RECOMP_ABI_CALL(0x00608BC2u, sub_00608BC2); /* call 0x00608BC2 */

loc_00609A3F: ;
    goto loc_00609A43;

loc_00609A41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609A43: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609A49u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609A49: ;
    ecx = eax;
    PUSH32(esp, 0x00609A50u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609A50: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609A58u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609A58: ;
    PUSH32(esp, 0x00609A5Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609A5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609A66u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609A66: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609A76; /* je: equal / zero */

loc_00609A6D: ;
    ecx = eax;
    PUSH32(esp, 0x00609A74u); RECOMP_ABI_CALL(0x00608BFBu, sub_00608BFB); /* call 0x00608BFB */

loc_00609A74: ;
    goto loc_00609A78;

loc_00609A76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609A78: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609A7Eu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609A7E: ;
    ecx = eax;
    PUSH32(esp, 0x00609A85u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609A85: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609A8Du); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609A8D: ;
    PUSH32(esp, 0x00609A92u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609A92: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609A9Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609A9B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609AAB; /* je: equal / zero */

loc_00609AA2: ;
    ecx = eax;
    PUSH32(esp, 0x00609AA9u); RECOMP_ABI_CALL(0x00608C34u, sub_00608C34); /* call 0x00608C34 */

loc_00609AA9: ;
    goto loc_00609AAD;

loc_00609AAB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609AAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609AB3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609AB3: ;
    ecx = eax;
    PUSH32(esp, 0x00609ABAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609ABA: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609AC2u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609AC2: ;
    PUSH32(esp, 0x00609AC7u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609AC7: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00609AD0u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609AD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609AE0; /* je: equal / zero */

loc_00609AD7: ;
    ecx = eax;
    PUSH32(esp, 0x00609ADEu); RECOMP_ABI_CALL(0x00608C6Du, sub_00608C6D); /* call 0x00608C6D */

loc_00609ADE: ;
    goto loc_00609AE2;

loc_00609AE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609AE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609AE8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609AE8: ;
    ecx = eax;
    PUSH32(esp, 0x00609AEFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609AEF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00609AF7u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609AF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00609AFE
 * Original: 0x00609AFE - 0x00609B20 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609AFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609AFE: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx + 0x10;
    ecx = esi;
    PUSH32(esp, 0x00609B0Du); RECOMP_ABI_CALL(0x004DB9F8u, sub_004DB9F8); /* call 0x004DB9F8 */

loc_00609B0D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609B1C; /* jne: not equal / not zero */

loc_00609B11: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00609B1Cu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_00609B1C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609B20
 * Original: 0x00609B20 - 0x00609B28 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00609B20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DBA5A(); return; /* tail jmp 0x004DBA5A */

}

/**
 * sub_00609B28
 * Original: 0x00609B28 - 0x00609B6B (67 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609B28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00609B28: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00609B5E; /* jle: less or equal (signed <=) */

loc_00609B35: ;
    ebp = ecx + 0x10;

loc_00609B38: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00609B40u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_00609B40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00609B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609B4Au); } /* indirect call */
    }

loc_00609B4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609B53u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_00609B53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00609B67; /* je: equal / zero */

loc_00609B59: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00609B38; /* jl: less (signed <) */

loc_00609B5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609B60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00609B67: ;
    eax = esi;
    goto loc_00609B60;

}

/**
 * sub_00609B6B
 * Original: 0x00609B6B - 0x00609B8C (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609B6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00609B6B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x881098;
    PUSH32(esp, 0x00609B7Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_00609B7C: ;
    ecx = esi + 8;
    PUSH32(esp, 0x00609B84u); RECOMP_ABI_CALL(0x004E1338u, sub_004E1338); /* call 0x004E1338 */

loc_00609B84: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060CBF6(); return; /* tail jmp 0x0060CBF6 */

}

/**
 * sub_00609B8C
 * Original: 0x00609B8C - 0x00609BA8 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609B8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609B8C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00609B94u); RECOMP_ABI_CALL(0x00609B6Bu, sub_00609B6B); /* call 0x00609B6B */

loc_00609B94: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00609BA2; /* je: equal / zero */

loc_00609B9B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00609BA1u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00609BA1: ;
    POP32(esp, ecx);

loc_00609BA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609BA8
 * Original: 0x00609BA8 - 0x00609BEB (67 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609BA8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609BA8: ;
    PUSH32(esp, 0x00609BADu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00609BAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x00609BB9u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_00609BB9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609BD9; /* je: equal / zero */

loc_00609BC0: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00609BD7u); RECOMP_ABI_CALL(0x0060CC50u, sub_0060CC50); /* call 0x0060CC50 */

loc_00609BD7: ;
    goto loc_00609BDB;

loc_00609BD9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609BDB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609BE1u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00609BE1: ;
    ecx = eax;
    PUSH32(esp, 0x00609BE8u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_00609BE8: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00609BEB
 * Original: 0x00609BEB - 0x00609C20 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00609BEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609BEB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x626B6772);
    PUSH32(esp, MEM32(ecx + 0x2C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609C02u); RECOMP_ABI_CALL(0x005FE240u, sub_005FE240); /* call 0x005FE240 */

loc_00609C02: ;
    eax = ZX8(MEM8(ebp + -1));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -2));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -3));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -4));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609C1Bu); RECOMP_ABI_CALL(0x004B63C8u, sub_004B63C8); /* call 0x004B63C8 */

loc_00609C1B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00609C20
 * Original: 0x00609C20 - 0x00609C23 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609C20(void)
{

loc_00609C20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609C23
 * Original: 0x00609C23 - 0x00609C26 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609C23(void)
{

loc_00609C23: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609C26
 * Original: 0x00609C26 - 0x00609D37 (273 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00609C26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609C26: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x174;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609C3Du); RECOMP_ABI_CALL(0x005FE2A0u, sub_005FE2A0); /* call 0x005FE2A0 */

loc_00609C3D: ;
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609C43u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00609C43: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00609C4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609C47u); } /* indirect call */
    }

loc_00609C4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A4));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x86319C));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00609C5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609C5Au); } /* indirect call */
    }

loc_00609C5D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00609C64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609C61u); } /* indirect call */
    }

loc_00609C64: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609C6Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00609C6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00609C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609C70u); } /* indirect call */
    }

loc_00609C73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A8));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x86319C));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00609C86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609C83u); } /* indirect call */
    }

loc_00609C86: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00609C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609C8Au); } /* indirect call */
    }

loc_00609C8D: ;
    ebx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A4));
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00609CA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609C9Du); } /* indirect call */
    }

loc_00609CA0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609CA6u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_00609CA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00609CC5; /* je: equal / zero */

loc_00609CAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A8));
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00609CB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609CB6u); } /* indirect call */
    }

loc_00609CB9: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609CBFu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_00609CBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00609D08; /* jne: not equal / not zero */

loc_00609CC5: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609CFB; /* jne: not equal / not zero */

loc_00609CCB: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609CD1u); RECOMP_ABI_CALL(0x005FE2C0u, sub_005FE2C0); /* call 0x005FE2C0 */

loc_00609CD1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00609D08; /* jne: not equal / not zero */

loc_00609CD8: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609CE1u); RECOMP_ABI_CALL(0x005FE2E0u, sub_005FE2E0); /* call 0x005FE2E0 */

loc_00609CE1: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609CEBu); RECOMP_ABI_CALL(0x005FE420u, sub_005FE420); /* call 0x005FE420 */

loc_00609CEB: ;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609CF6u); RECOMP_ABI_CALL(0x005FE3C0u, sub_005FE3C0); /* call 0x005FE3C0 */

loc_00609CF6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00609D08;

loc_00609CFB: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609D08; /* jne: not equal / not zero */

loc_00609D01: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609D07u); RECOMP_ABI_CALL(0x005FE2E0u, sub_005FE2E0); /* call 0x005FE2E0 */

loc_00609D07: ;
    POP32(esp, ecx);

loc_00609D08: ;
    _fa = (uint32_t)(MEM8(esi + 0x180)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x180), 0 (8-bit) */
    eax = MEM32(edi);
    MEM32(esi + 0x138) = eax;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x13C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00609D30; /* je: equal / zero */

loc_00609D22: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609D2Eu); RECOMP_ABI_CALL(0x005FEE60u, sub_005FEE60); /* call 0x005FEE60 */

loc_00609D2E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00609D30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609D37
 * Original: 0x00609D37 - 0x00609D64 (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00609D37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609D37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609D47; /* je: equal / zero */

loc_00609D40: ;
    PUSH32(esp, 0x8810C4);
    goto loc_00609D4C;

loc_00609D47: ;
    PUSH32(esp, 0x8810B4);

loc_00609D4C: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x8810AC);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609D5Fu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_00609D5F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00609D64
 * Original: 0x00609D64 - 0x00609E6C (264 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00609D64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609D64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8810EC;
    MEM32(esi + 0x28) = 0x8810DC;
    ebx = esi + 0x24;
    MEM32(ebx) = 0x8810D4;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x170));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609D9Cu); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_00609D9C: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    edi = MEM32(eax + 8);
    ecx = MEM32(esi + 0x184);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609DBFu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_00609DBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A4));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00609DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609DCFu); } /* indirect call */
    }

loc_00609DD2: ;
    ecx = MEM32(esi + 0x188);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609DE7u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_00609DE7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A8));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00609DFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609DF7u); } /* indirect call */
    }

loc_00609DFA: ;
    _fa = (uint32_t)(MEM8(esi + 0x180)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x180), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609E0C; /* je: equal / zero */

loc_00609E03: ;
    PUSH32(esp, MEM32(esi + 0x2C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609E0Bu); RECOMP_ABI_CALL(0x005FE010u, sub_005FE010); /* call 0x005FE010 */

loc_00609E0B: ;
    POP32(esp, ecx);

loc_00609E0C: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609E1A; /* je: equal / zero */

loc_00609E13: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609E19u); RECOMP_ABI_CALL(0x005FEC00u, sub_005FEC00); /* call 0x005FEC00 */

loc_00609E19: ;
    POP32(esp, ecx);

loc_00609E1A: ;
    ecx = MEM32(esi + 0x188);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609E29; /* je: equal / zero */

loc_00609E24: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609E29u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_00609E29: ;
    ecx = MEM32(esi + 0x184);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609E38; /* je: equal / zero */

loc_00609E33: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609E38u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_00609E38: ;
    ecx = MEM32(esi + 0x170);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609E47; /* je: equal / zero */

loc_00609E42: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609E47u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_00609E47: ;
    ecx = esi + 0x148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609E52u); RECOMP_ABI_CALL(0x004E1EA8u, sub_004E1EA8); /* call 0x004E1EA8 */

loc_00609E52: ;
    ecx = ebx;
    MEM32(esi + 0x28) = 0x863F20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609E60u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_00609E60: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00609E67u); RECOMP_ABI_CALL(0x0060CD1Bu, sub_0060CD1B); /* call 0x0060CD1B */

loc_00609E67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00609E6C
 * Original: 0x00609E6C - 0x00609E73 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609E6C(void)
{

loc_00609E6C: ;
    eax = ecx + 0x148;
    esp += 4; return; /* ret */

}

/**
 * sub_00609E73
 * Original: 0x00609E73 - 0x00609E7B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609E73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00609E73: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060A6C2(); return; /* tail jmp 0x0060A6C2 */

}

/**
 * sub_00609E7B
 * Original: 0x00609E7B - 0x00609E83 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609E7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00609E7B: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060A6C2(); return; /* tail jmp 0x0060A6C2 */

}

/**
 * sub_00609E83
 * Original: 0x00609E83 - 0x0060A2AC (1065 bytes, 377 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00609E83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609E83: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x74) = eax;
    esi = ecx;
    PUSH32(esp, 0x00609EA0u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_00609EA0: ;
    _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1388;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    MEM32(esi + 0x144) = eax;
    eax = MEM32(0x90E7AC);
    edi = MEM32(eax + 0x10);
    ecx = ebp + 0x2C;
    PUSH32(esp, ecx);
    ebx = 0x7B891F;
    PUSH32(esp, ebx);
    MEM32(ebp + -92) = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0x86CF4C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00609ECEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609ECBu); } /* indirect call */
    }

loc_00609ECE: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = ebp + -84;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x86CF68);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00609EE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609EE1u); } /* indirect call */
    }

loc_00609EE4: ;
    PUSH32(esp, 0x00609EE9u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_00609EE9: ;
    ebx = eax;
    PUSH32(esp, 0x00609EF0u); RECOMP_ABI_CALL(0x004DBF29u, sub_004DBF29); /* call 0x004DBF29 */

loc_00609EF0: ;
    edi = eax;
    PUSH32(esp, 0x00609EF7u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00609EF7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00609EFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609EFBu); } /* indirect call */
    }

loc_00609EFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A29A; /* je: equal / zero */

loc_00609F06: ;
    PUSH32(esp, 0x00609F0Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00609F0B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00609F12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609F0Fu); } /* indirect call */
    }

loc_00609F12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -88) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00609F4B; /* je: equal / zero */

loc_00609F19: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00609F20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609F1Du); } /* indirect call */
    }

loc_00609F20: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x00609F2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609F24u); } /* indirect call */
    }

loc_00609F2A: ;
    ecx = MEM32(ebp + -88);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(ebp + 0x6C) = LO8(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00609F38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609F35u); } /* indirect call */
    }

loc_00609F38: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x00609F42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609F3Cu); } /* indirect call */
    }

loc_00609F42: ;
    MEM8(ebp + 0x6D) = LO8(eax);
    MEM8(ebp + 0x6E) = 0;
    goto loc_00609F61;

loc_00609F4B: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00609F54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609F51u); } /* indirect call */
    }

loc_00609F54: ;
    PUSH32(esp, eax);
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609F5Eu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_00609F5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00609F61: ;
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2C));
    PUSH32(esp, 0x00609F6Du); RECOMP_ABI_CALL(0x005FDFF0u, sub_005FDFF0); /* call 0x005FDFF0 */

loc_00609F6D: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x70617274);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609F86u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_00609F86: ;
    PUSH32(esp, 0x114);
    MEM32(ebp + -88) = eax;
    eax = esi + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609F99u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_00609F99: ;
    ecx = MEM32(ebp + -92);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00609FA6u); RECOMP_ABI_CALL(0x004DC1D4u, sub_004DC1D4); /* call 0x004DC1D4 */

loc_00609FA6: ;
    PUSH32(esp, eax);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609FB0u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_00609FB0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(ebp + -88));
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609FBEu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_00609FBE: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00609FCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609FC7u); } /* indirect call */
    }

loc_00609FCA: ;
    PUSH32(esp, eax);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609FD4u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_00609FD4: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00609FE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609FDDu); } /* indirect call */
    }

loc_00609FE0: ;
    PUSH32(esp, eax);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609FEDu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_00609FED: ;
    PUSH32(esp, 0x24);
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00609FFFu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_00609FFF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x0060A009u); RECOMP_ABI_CALL(0x004545F0u, sub_004545F0); /* call 0x004545F0 */

loc_0060A009: ;
    PUSH32(esp, eax);
    eax = esi + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060A016u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_0060A016: ;
    eax = MEM32(esi + 0x174);
    MEM32(esi + 0x138) = eax;
    eax = MEM32(esi + 0x178);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(esi + 0x118) = 0;
    MEM32(esi + 0x13C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0060A052; /* je: equal / zero */

loc_0060A03C: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A052; /* je: equal / zero */

loc_0060A042: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A054;

loc_0060A052: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A054: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0x41 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A09E; /* jb: below (unsigned <) */

loc_0060A059: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A073; /* je: equal / zero */

loc_0060A05D: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A073; /* je: equal / zero */

loc_0060A063: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A075;

loc_0060A073: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A075: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0x5A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0060A09E; /* ja: above (unsigned >) */

loc_0060A07A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A094; /* je: equal / zero */

loc_0060A07E: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A094; /* je: equal / zero */

loc_0060A084: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A096;

loc_0060A094: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A096: ;
    ebx = ZX8(HI8(eax));
    ebx = ebx | 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0060A0C0;

loc_0060A09E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A0B8; /* je: equal / zero */

loc_0060A0A2: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A0B8; /* je: equal / zero */

loc_0060A0A8: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A0BA;

loc_0060A0B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A0BA: ;
    ebx = ZX16(LO16(eax));
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_0060A0C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -88) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0060A0DD; /* je: equal / zero */

loc_0060A0C7: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A0DD; /* je: equal / zero */

loc_0060A0CD: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A0DF;

loc_0060A0DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A0DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A127; /* jb: below (unsigned <) */

loc_0060A0E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A0FD; /* je: equal / zero */

loc_0060A0E7: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A0FD; /* je: equal / zero */

loc_0060A0ED: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A0FF;

loc_0060A0FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A0FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0060A127; /* ja: above (unsigned >) */

loc_0060A103: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A11D; /* je: equal / zero */

loc_0060A107: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A11D; /* je: equal / zero */

loc_0060A10D: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A11F;

loc_0060A11D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A11F: ;
    edi = ZX8(LO8(eax));
    edi = edi | 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0060A14A;

loc_0060A127: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A141; /* je: equal / zero */

loc_0060A12B: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A141; /* je: equal / zero */

loc_0060A131: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A143;

loc_0060A141: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A143: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;

loc_0060A14A: ;
    SET_LO8(edx, MEM8(ebp + 0x6C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A161; /* je: equal / zero */

loc_0060A151: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + 0x6D));
    SET_LO16(eax, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A163;

loc_0060A161: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A163: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0x61 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A1A1; /* jb: below (unsigned <) */

loc_0060A168: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A17C; /* je: equal / zero */

loc_0060A16C: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + 0x6D));
    SET_LO16(eax, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A17E;

loc_0060A17C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A17E: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0x7A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0060A1A1; /* ja: above (unsigned >) */

loc_0060A183: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A197; /* je: equal / zero */

loc_0060A187: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + 0x6D));
    SET_LO16(eax, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A199;

loc_0060A197: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A199: ;
    eax = ZX8(HI8(eax));
    eax = eax & 0xFFFFFFDFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0060A1BD;

loc_0060A1A1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A1B5; /* je: equal / zero */

loc_0060A1A5: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + 0x6D));
    SET_LO16(eax, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A1B7;

loc_0060A1B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A1B7: ;
    eax = ZX16(LO16(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_0060A1BD: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A1D4; /* je: equal / zero */

loc_0060A1C1: ;
    SET_LO16(ebx, (uint32_t)(int32_t)SMEM8(ebp + 0x6D));
    SET_LO16(ecx, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -88);
    goto loc_0060A1D6;

loc_0060A1D4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A1D6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A217; /* jb: below (unsigned <) */

loc_0060A1DB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A1F2; /* je: equal / zero */

loc_0060A1DF: ;
    SET_LO16(ebx, (uint32_t)(int32_t)SMEM8(ebp + 0x6D));
    SET_LO16(ecx, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -88);
    goto loc_0060A1F4;

loc_0060A1F2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A1F4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0060A217; /* ja: above (unsigned >) */

loc_0060A1F9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A20D; /* je: equal / zero */

loc_0060A1FD: ;
    SET_LO16(ecx, SX8(LO8(edx)));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(ebp + 0x6D));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A20F;

loc_0060A20D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A20F: ;
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0xFFFFFFDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0060A233;

loc_0060A217: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A22B; /* je: equal / zero */

loc_0060A21B: ;
    SET_LO16(ecx, SX8(LO8(edx)));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(ebp + 0x6D));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060A22D;

loc_0060A22B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A22D: ;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060A233: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    edx = ZX16(LO16(ebx));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x30;
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2C));
    MEM32(esi + 0x140) = edx;
    PUSH32(esp, 0x0060A25Eu); RECOMP_ABI_CALL(0x005FEC40u, sub_005FEC40); /* call 0x005FEC40 */

loc_0060A25E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060A292; /* jne: not equal / not zero */

loc_0060A265: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) & eax;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 8;
    MEM8(esi + 0x180) = 1;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060A292; /* jbe: below or equal (unsigned <=) */

loc_0060A279: ;
    PUSH32(esp, MEM32(ebp + -88));
    ecx = edi;
    PUSH32(esp, 0x0060A283u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_0060A283: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060A28Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A287u); } /* indirect call */
    }

loc_0060A28A: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -88), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A279; /* jb: below (unsigned <) */

loc_0060A292: ;
    SET_LO8(eax, MEM8(esi + 0x180));
    goto loc_0060A29C;

loc_0060A29A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0060A29C: ;
    ecx = MEM32(ebp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x0060A2A7u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060A2A7: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060A2AC
 * Original: 0x0060A2AC - 0x0060A3D3 (295 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060A2AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A2AC: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x1B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xE4);
    MEM32(ebp + 0x70) = eax;
    eax = ebp + -312;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(ebp + -316) = ecx;
    PUSH32(esp, 0x0060A2DAu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060A2DA: ;
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0060A2E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A2E4u); } /* indirect call */
    }

loc_0060A2E7: ;
    MEM16(ebp + -308) = LO16(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060A2F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A2F2u); } /* indirect call */
    }

loc_0060A2F5: ;
    MEM16(ebp + -306) = LO16(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0060A303u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A300u); } /* indirect call */
    }

loc_0060A303: ;
    MEM8(ebp + -288) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060A310u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A30Du); } /* indirect call */
    }

loc_0060A310: ;
    ebx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(ebp + 0x7F) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0060A3AB; /* jbe: below or equal (unsigned <=) */

loc_0060A31F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -320) = eax;
    PUSH32(esp, edi);

loc_0060A32B: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -320);
    PUSH32(esp, 0x0060A337u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060A337: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060A340u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A33Du); } /* indirect call */
    }

loc_0060A340: ;
    esi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060A34Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A34Bu); } /* indirect call */
    }

loc_0060A34E: ;
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060A358u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_0060A358: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060A362u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A35Fu); } /* indirect call */
    }

loc_0060A362: ;
    MEM8(ebp + -84) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060A36Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A369u); } /* indirect call */
    }

loc_0060A36C: ;
    MEM8(ebp + -83) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0060A376u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A373u); } /* indirect call */
    }

loc_0060A376: ;
    MEM8(ebp + -82) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0060A380u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A37Du); } /* indirect call */
    }

loc_0060A380: ;
    MEM8(ebp + -81) = LO8(eax);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -312;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -316);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x0060A39Cu); RECOMP_ABI_CALL(0x005FE170u, sub_005FE170); /* call 0x005FE170 */

loc_0060A39C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 0x7F) = MEM8(ebp + 0x7F) + 1;
    _fa = (uint32_t)(MEM8(ebp + 0x7F)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(MEM8(ebp + 0x7F));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A32B; /* jb: below (unsigned <) */

loc_0060A3AA: ;
    POP32(esp, edi);

loc_0060A3AB: ;
    eax = ebp + -312;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -316);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x0060A3C0u); RECOMP_ABI_CALL(0x005FEF30u, sub_005FEF30); /* call 0x005FEF30 */

loc_0060A3C0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x70);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x0060A3CCu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060A3CC: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A3D3
 * Original: 0x0060A3D3 - 0x0060A3DE (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A3D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060A3D3: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x150;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DBA5A(); return; /* tail jmp 0x004DBA5A */

}

/**
 * sub_0060A3DE
 * Original: 0x0060A3DE - 0x0060A559 (379 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A3DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060A3DE: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x1BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1BC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x158)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x158), 0 (8-bit) */
    MEM32(ebp + 0x70) = eax;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0060A530; /* je: equal / zero */

loc_0060A403: ;
    _fa = (uint32_t)(MEM32(esi + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x134), 0xA (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0060A545; /* jae: above or equal (unsigned >=) */

loc_0060A410: ;
    edi = esi + 0x154;
    PUSH32(esp, 0x0060A41Bu); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_0060A41B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060A545; /* jbe: below or equal (unsigned <=) */

loc_0060A423: ;
    PUSH32(esp, 0x0060A428u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_0060A428: ;
    _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    eax = ebp + -312;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0060A43Eu); RECOMP_ABI_CALL(0x005FF5B0u, sub_005FF5B0); /* call 0x005FF5B0 */

loc_0060A43E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0060A545; /* jle: less or equal (signed <=) */

loc_0060A448: ;
    PUSH32(esp, 0x0060A44Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060A44D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0060A459u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060A459: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A488; /* je: equal / zero */

loc_0060A460: ;
    ecx = ZX8(MEM8(ebp + -288));
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -306);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -308);
    PUSH32(esp, ecx);
    ecx = ebp + -296;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0060A486u); RECOMP_ABI_CALL(0x0060CC50u, sub_0060CC50); /* call 0x0060CC50 */

loc_0060A486: ;
    goto loc_0060A48A;

loc_0060A488: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A48A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060A490u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060A490: ;
    ecx = eax;
    PUSH32(esp, 0x0060A497u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060A497: ;
    edi = eax;
    goto loc_0060A4CF;

loc_0060A49B: ;
    PUSH32(esp, MEM32(ebp + -81));
    ecx = ebp + -328;
    PUSH32(esp, MEM32(ebp + -82));
    PUSH32(esp, MEM32(ebp + -83));
    PUSH32(esp, MEM32(ebp + -84));
    PUSH32(esp, 0x0060A4B2u); RECOMP_ABI_CALL(0x004B6374u, sub_004B6374); /* call 0x004B6374 */

loc_0060A4B2: ;
    eax = MEM32(edi);
    ecx = ebp + -80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + -328;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060A4C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A4C1u); } /* indirect call */
    }

loc_0060A4C4: ;
    ecx = ebp + -328;
    PUSH32(esp, 0x0060A4CFu); RECOMP_ABI_CALL(0x004B63A9u, sub_004B63A9); /* call 0x004B63A9 */

loc_0060A4CF: ;
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -312;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0060A4E2u); RECOMP_ABI_CALL(0x005FE040u, sub_005FE040); /* call 0x005FE040 */

loc_0060A4E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A49B; /* je: equal / zero */

loc_0060A4E9: ;
    PUSH32(esp, edi);
    ecx = esi + 0x128;
    PUSH32(esp, 0x0060A4F5u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060A4F5: ;
    MEM32(ebp + -316) = MEM32(ebp + -316) & 0;
    _fa = (uint32_t)(MEM32(ebp + -316)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + -32;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060A545; /* jbe: below or equal (unsigned <=) */

loc_0060A506: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x120;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060A50C: ;
    PUSH32(esp, MEM32(ebp + -316));
    ecx = edi;
    PUSH32(esp, 0x0060A519u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_0060A519: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060A520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A51Eu); } /* indirect call */
    }

loc_0060A520: ;
    MEM32(ebp + -316) = MEM32(ebp + -316) + 1;
    _fa = (uint32_t)(MEM32(ebp + -316)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -316)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -316), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A50C; /* jb: below (unsigned <) */

loc_0060A52E: ;
    goto loc_0060A545;

loc_0060A530: ;
    PUSH32(esp, 0x0060A535u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_0060A535: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x11C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x11C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A545; /* jb: below (unsigned <) */

loc_0060A53D: ;
    ecx = esi + -40;
    PUSH32(esp, 0x0060A545u); RECOMP_ABI_CALL(0x00609E83u, sub_00609E83); /* call 0x00609E83 */

loc_0060A545: ;
    ecx = MEM32(ebp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x0060A552u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060A552: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A559
 * Original: 0x0060A559 - 0x0060A576 (29 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A559(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A559: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A567; /* je: equal / zero */

loc_0060A560: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060A573; /* jne: not equal / not zero */

loc_0060A567: ;
    PUSH32(esp, MEM32(esp + 4));
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFDCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060A573u); RECOMP_ABI_CALL(0x00609C26u, sub_00609C26); /* call 0x00609C26 */

loc_0060A573: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060A576
 * Original: 0x0060A576 - 0x0060A6C2 (332 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060A576(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A576: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A586u); RECOMP_ABI_CALL(0x0060CCFBu, sub_0060CCFB); /* call 0x0060CCFB */

loc_0060A586: ;
    edi = esi + 0x24;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A590u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_0060A590: ;
    ebx = esi + 0x28;
    MEM32(ebx) = 0x863F20;
    MEM32(esi + 0x144) = MEM32(esi + 0x144) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = esi + 0x148;
    MEM32(esi) = 0x8810EC;
    MEM32(edi) = 0x8810D4;
    MEM32(ebx) = 0x8810DC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A5C1u); RECOMP_ABI_CALL(0x004DF5E9u, sub_004DF5E9); /* call 0x004DF5E9 */

loc_0060A5C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x170) = eax;
    MEM32(esi + 0x17C) = eax;
    MEM8(esi + 0x180) = LO8(eax);
    MEM32(esi + 0x184) = eax;
    MEM32(esi + 0x188) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A5E6u); RECOMP_ABI_CALL(0x004DC9C3u, sub_004DC9C3); /* call 0x004DC9C3 */

loc_0060A5E6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0060A5ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A5EAu); } /* indirect call */
    }

loc_0060A5EC: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A5F2u); RECOMP_ABI_CALL(0x005FEAD0u, sub_005FEAD0); /* call 0x005FEAD0 */

loc_0060A5F2: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x863220);
    PUSH32(esp, 2);
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x8631A4));
    PUSH32(esp, MEM32(0x86319C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A617u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_0060A617: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x184;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A626u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_0060A626: ;
    ecx = MEM32(esi + 0x184);
    eax = ebp + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A63Bu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0060A63B: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x863220);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x8631A8));
    PUSH32(esp, MEM32(0x86319C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A65Du); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_0060A65D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x188;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A66Cu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_0060A66C: ;
    ecx = MEM32(esi + 0x188);
    eax = ebp + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A681u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0060A681: ;
    eax = esi + 0x174;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A68Du); RECOMP_ABI_CALL(0x005FE2A0u, sub_005FE2A0); /* call 0x005FE2A0 */

loc_0060A68D: ;
    POP32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A695u); RECOMP_ABI_CALL(0x00609E83u, sub_00609E83); /* call 0x00609E83 */

loc_0060A695: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060A6ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A6AAu); } /* indirect call */
    }

loc_0060A6AD: ;
    PUSH32(esp, eax);
    ecx = esi + 0x170;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060A6B9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060A6B9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A6C2
 * Original: 0x0060A6C2 - 0x0060A6DE (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A6C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A6C2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060A6CAu); RECOMP_ABI_CALL(0x00609D64u, sub_00609D64); /* call 0x00609D64 */

loc_0060A6CA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060A6D8; /* je: equal / zero */

loc_0060A6D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060A6D7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060A6D7: ;
    POP32(esp, ecx);

loc_0060A6D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A6F3
 * Original: 0x0060A6F3 - 0x0060A720 (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A6F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A6F3: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881110;
    if (TEST_Z(_fa, _fb)) goto loc_0060A70A; /* je: equal / zero */

loc_0060A703: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060A709u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060A709: ;
    POP32(esp, ecx);

loc_0060A70A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A720
 * Original: 0x0060A720 - 0x0060A745 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060A720: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x88111C;
    if (TEST_Z(_fa, _fb)) goto loc_0060A737; /* je: equal / zero */

loc_0060A730: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060A736u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060A736: ;
    POP32(esp, ecx);

loc_0060A737: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A745
 * Original: 0x0060A745 - 0x0060A75B (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A745(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A745: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060A755; /* jne: not equal / not zero */

loc_0060A74D: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060A755u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060A755: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A75B
 * Original: 0x0060A75B - 0x0060A766 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A75B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A75B: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060A763u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060A763: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A766
 * Original: 0x0060A766 - 0x0060A77F (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A766(void)
{

loc_0060A766: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060A773u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A770u); } /* indirect call */
    }

loc_0060A773: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0060A77Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060A77B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A77F
 * Original: 0x0060A77F - 0x0060A7C8 (73 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A77F(void)
{

loc_0060A77F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060A788u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060A788: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x0060A792u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_0060A792: ;
    eax = MEM32(esp + 0x10);
    MEM32(edi) = 0x88112C;
    edi = MEM32(esp + 0xC);
    ecx = esi;
    MEM32(esi) = 0x881128;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x14) = 1;
    PUSH32(esp, 0x0060A7B7u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_0060A7B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060A7BDu); RECOMP_ABI_CALL(0x00611EF0u, sub_00611EF0); /* call 0x00611EF0 */

loc_0060A7BD: ;
    POP32(esp, ecx);
    MEM32(esi + 0x18) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060A7C8
 * Original: 0x0060A7C8 - 0x0060A7E4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A7C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A7C8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060A7D0u); RECOMP_ABI_CALL(0x0060A7E4u, sub_0060A7E4); /* call 0x0060A7E4 */

loc_0060A7D0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060A7DE; /* je: equal / zero */

loc_0060A7D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060A7DDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060A7DD: ;
    POP32(esp, ecx);

loc_0060A7DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A7E4
 * Original: 0x0060A7E4 - 0x0060A803 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A7E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060A7E4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x881128;
    MEM32(ecx) = 0x88112C;
    PUSH32(esp, 0x0060A7FBu); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_0060A7FB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060A803
 * Original: 0x0060A803 - 0x0060A859 (86 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A803(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A803: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A81D; /* je: equal / zero */

loc_0060A80D: ;
    ecx = MEM32(esi + 8);
    MEM8(esi + 0xC) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060A81Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A818u); } /* indirect call */
    }

loc_0060A81B: ;
    goto loc_0060A843;

loc_0060A81D: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0060A825u); RECOMP_ABI_CALL(0x00611F90u, sub_00611F90); /* call 0x00611F90 */

loc_0060A825: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0060A833; /* jle: less or equal (signed <=) */

loc_0060A82A: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060A831u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A82Fu); } /* indirect call */
    }

loc_0060A831: ;
    goto loc_0060A83F;

loc_0060A833: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0060A843; /* jge: greater or equal (signed >=) */

loc_0060A835: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060A83Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A83Cu); } /* indirect call */
    }

loc_0060A83F: ;
    MEM8(esi + 0xC) = 0;

loc_0060A843: ;
    SET_LO8(ebx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060A852; /* jne: not equal / not zero */

loc_0060A84A: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0060A852u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060A852: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A859
 * Original: 0x0060A859 - 0x0060A864 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A859(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A859: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060A861u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060A861: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A864
 * Original: 0x0060A864 - 0x0060A87D (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A864(void)
{

loc_0060A864: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060A871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A86Eu); } /* indirect call */
    }

loc_0060A871: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0060A879u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060A879: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A87D
 * Original: 0x0060A87D - 0x0060A8B4 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A87D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A87D: ;
    PUSH32(esp, 0x0060A882u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060A882: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0060A88Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060A88E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A8A2; /* je: equal / zero */

loc_0060A895: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax;
    PUSH32(esp, 0x0060A8A0u); RECOMP_ABI_CALL(0x0060CF33u, sub_0060CF33); /* call 0x0060CF33 */

loc_0060A8A0: ;
    goto loc_0060A8A4;

loc_0060A8A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A8A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060A8AAu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060A8AA: ;
    ecx = eax;
    PUSH32(esp, 0x0060A8B1u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060A8B1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A8B4
 * Original: 0x0060A8B4 - 0x0060A8EB (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A8B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A8B4: ;
    PUSH32(esp, 0x0060A8B9u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060A8B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0060A8C5u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060A8C5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A8D9; /* je: equal / zero */

loc_0060A8CC: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax;
    PUSH32(esp, 0x0060A8D7u); RECOMP_ABI_CALL(0x0060D489u, sub_0060D489); /* call 0x0060D489 */

loc_0060A8D7: ;
    goto loc_0060A8DB;

loc_0060A8D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A8DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060A8E1u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060A8E1: ;
    ecx = eax;
    PUSH32(esp, 0x0060A8E8u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060A8E8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A8EB
 * Original: 0x0060A8EB - 0x0060A91F (52 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A8EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A8EB: ;
    PUSH32(esp, 0x0060A8F0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060A8F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x36CC);
    PUSH32(esp, 0x0060A8FFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060A8FF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A90F; /* je: equal / zero */

loc_0060A906: ;
    ecx = eax;
    PUSH32(esp, 0x0060A90Du); RECOMP_ABI_CALL(0x0060D698u, sub_0060D698); /* call 0x0060D698 */

loc_0060A90D: ;
    goto loc_0060A911;

loc_0060A90F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A911: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060A917u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060A917: ;
    ecx = eax;
    PUSH32(esp, 0x0060A91Eu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060A91E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060A91F
 * Original: 0x0060A91F - 0x0060A950 (49 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A91F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A91F: ;
    PUSH32(esp, 0x0060A924u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060A924: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0060A930u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060A930: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A940; /* je: equal / zero */

loc_0060A937: ;
    ecx = eax;
    PUSH32(esp, 0x0060A93Eu); RECOMP_ABI_CALL(0x0060DCE6u, sub_0060DCE6); /* call 0x0060DCE6 */

loc_0060A93E: ;
    goto loc_0060A942;

loc_0060A940: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A942: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060A948u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060A948: ;
    ecx = eax;
    PUSH32(esp, 0x0060A94Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060A94F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060A950
 * Original: 0x0060A950 - 0x0060A95C (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060A950: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0060A955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A952u); } /* indirect call */
    }

loc_0060A955: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060A95C
 * Original: 0x0060A95C - 0x0060A960 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A95C(void)
{

loc_0060A95C: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0060A960
 * Original: 0x0060A960 - 0x0060A964 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A960(void)
{

loc_0060A960: ;
    eax = ecx + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0060A964
 * Original: 0x0060A964 - 0x0060A98E (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A964(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A964: ;
    eax = MEM32(ecx + 0x78);
    ecx = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060A96D: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A982; /* je: equal / zero */

loc_0060A972: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A982; /* je: equal / zero */

loc_0060A977: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A96D; /* jb: below (unsigned <) */

loc_0060A980: ;
    goto loc_0060A98B;

loc_0060A982: ;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;

loc_0060A98B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060A98E
 * Original: 0x0060A98E - 0x0060A9B0 (34 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A98E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A98E: ;
    ecx = MEM32(ecx + 0x78);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_0060A996: ;
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A9AA; /* je: equal / zero */

loc_0060A99F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060A996; /* jb: below (unsigned <) */

loc_0060A9A8: ;
    goto loc_0060A9AC;

loc_0060A9AA: ;
    eax = MEM32(ecx);

loc_0060A9AC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A9B0
 * Original: 0x0060A9B0 - 0x0060A9B4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A9B0(void)
{

loc_0060A9B0: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_0060A9B4
 * Original: 0x0060A9B4 - 0x0060A9FF (75 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A9B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060A9B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060A9BDu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060A9BD: ;
    edi = eax;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060A9CE; /* je: equal / zero */

loc_0060A9C6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060A9CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A9CBu); } /* indirect call */
    }

loc_0060A9CE: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060A9DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060A9DAu); } /* indirect call */
    }

loc_0060A9DC: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x0060A9E9u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060A9E9: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esi + 0x40));
    PUSH32(esp, 0x0060A9F7u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_0060A9F7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060A9FF
 * Original: 0x0060A9FF - 0x0060AA1B (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060A9FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060A9FF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0060AA04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AA01u); } /* indirect call */
    }

loc_0060AA04: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

    eax = MEM32(0x8E4DC0);
    esp += 4; return; /* ret */

}

/**
 * sub_0060AA1B
 * Original: 0x0060AA1B - 0x0060AA23 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AA1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AA1B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060A7C8(); return; /* tail jmp 0x0060A7C8 */

}

/**
 * sub_0060AA23
 * Original: 0x0060AA23 - 0x0060AA62 (63 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AA23(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060AA23: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060AA2Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060AA2B: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = 0x86426C;
    MEM32(esi + 0xC) = 0x881110;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x881150;
    MEM32(esi + 8) = 0x881148;
    MEM32(esi + 0xC) = 0x88113C;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060AA62
 * Original: 0x0060AA62 - 0x0060AA6A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AA62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AA62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B360(); return; /* tail jmp 0x0060B360 */

}

/**
 * sub_0060AA6A
 * Original: 0x0060AA6A - 0x0060AA72 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AA6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AA6A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B360(); return; /* tail jmp 0x0060B360 */

}

/**
 * sub_0060AA72
 * Original: 0x0060AA72 - 0x0060AAB7 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AA72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AA72: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x881150;
    MEM32(esi + 8) = 0x881148;
    MEM32(esi + 0xC) = 0x88113C;
    if (CMP_EQ(_fa, _fb)) goto loc_0060AA95; /* je: equal / zero */

loc_0060AA90: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060AA95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AA92u); } /* indirect call */
    }

loc_0060AA95: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060AAA1; /* je: equal / zero */

loc_0060AA9C: ;
    PUSH32(esp, 0x0060AAA1u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060AAA1: ;
    MEM32(esi + 0xC) = 0x881110;
    MEM32(esi + 8) = 0x86426C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060AAB7
 * Original: 0x0060AAB7 - 0x0060AADF (40 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AAB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AAB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edi = esi + 0xC;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060AAC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AAC7u); } /* indirect call */
    }

loc_0060AAC9: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0060AAD6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060AAD6: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_0060AADF
 * Original: 0x0060AADF - 0x0060AB08 (41 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AADF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AADF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = esi + 0xC;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060AAF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AAEFu); } /* indirect call */
    }

loc_0060AAF1: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0060AAFEu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060AAFE: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0060AB08
 * Original: 0x0060AB08 - 0x0060AB4E (70 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AB08(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060AB08: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060AB10u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060AB10: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = 0x86426C;
    MEM32(esi + 0xC) = 0x88111C;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x18) = eax;
    MEM32(esi) = 0x881168;
    MEM32(esi + 8) = 0x881160;
    MEM32(esi + 0xC) = 0x881154;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060AB4E
 * Original: 0x0060AB4E - 0x0060AB56 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AB4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AB4E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B37C(); return; /* tail jmp 0x0060B37C */

}

/**
 * sub_0060AB56
 * Original: 0x0060AB56 - 0x0060AB5E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AB56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AB56: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B37C(); return; /* tail jmp 0x0060B37C */

}

/**
 * sub_0060AB5E
 * Original: 0x0060AB5E - 0x0060ABA3 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AB5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AB5E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x881168;
    MEM32(esi + 8) = 0x881160;
    MEM32(esi + 0xC) = 0x881154;
    if (CMP_EQ(_fa, _fb)) goto loc_0060AB81; /* je: equal / zero */

loc_0060AB7C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060AB81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AB7Eu); } /* indirect call */
    }

loc_0060AB81: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060AB8D; /* je: equal / zero */

loc_0060AB88: ;
    PUSH32(esp, 0x0060AB8Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060AB8D: ;
    MEM32(esi + 0xC) = 0x88111C;
    MEM32(esi + 8) = 0x86426C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060ABA3
 * Original: 0x0060ABA3 - 0x0060AC24 (129 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ABA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060ABA3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0060ABB3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060ABB3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0060ABBFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060ABBF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0060ABDF; /* je: equal / zero */

loc_0060ABC6: ;
    ecx = esi + -8;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax;
    PUSH32(esp, 0x0060ABDDu); RECOMP_ABI_CALL(0x0060A77Fu, sub_0060A77F); /* call 0x0060A77F */

loc_0060ABDD: ;
    goto loc_0060ABE1;

loc_0060ABDF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060ABE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060ABE7u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060ABE7: ;
    ecx = eax;
    PUSH32(esp, 0x0060ABEEu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060ABEE: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x14)) >> 32) & 1);
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060AC15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AC12u); } /* indirect call */
    }

loc_0060AC15: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0060AC1Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060AC1D: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060AC24
 * Original: 0x0060AC24 - 0x0060AC4C (40 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AC24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AC24: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edi = esi + 0x10;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060AC36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AC34u); } /* indirect call */
    }

loc_0060AC36: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0060AC43u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060AC43: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_0060AC4C
 * Original: 0x0060AC4C - 0x0060AC75 (41 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AC4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AC4C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = esi + 0x10;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060AC5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AC5Cu); } /* indirect call */
    }

loc_0060AC5E: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0060AC6Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060AC6B: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0060AC75
 * Original: 0x0060AC75 - 0x0060ACE0 (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AC75(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060AC75: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0060AC90; /* je: equal / zero */

loc_0060AC80: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060AC8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AC8Bu); } /* indirect call */
    }

loc_0060AC8E: ;
    goto loc_0060ACDA;

loc_0060AC90: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x1C);
    eax = MEM32(esi + 0x2C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 0x84;
    PUSH32(esp, 0x0060ACAEu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060ACAE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060ACB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060ACB2u); } /* indirect call */
    }

loc_0060ACB5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0060ACBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060ACBAu); } /* indirect call */
    }

loc_0060ACBD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0060ACC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060ACC1u); } /* indirect call */
    }

loc_0060ACC4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060ACCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060ACCCu); } /* indirect call */
    }

loc_0060ACCF: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060ACDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060ACD8u); } /* indirect call */
    }

loc_0060ACDA: ;
    MEM8(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060ACE0
 * Original: 0x0060ACE0 - 0x0060ACFE (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ACE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060ACE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x0060ACF0u); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_0060ACF0: ;
    PUSH32(esp, 0);
    ecx = esi + 0x64;
    PUSH32(esp, 0x0060ACFAu); RECOMP_ABI_CALL(0x004DF485u, sub_004DF485); /* call 0x004DF485 */

loc_0060ACFA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060ACFE
 * Original: 0x0060ACFE - 0x0060ADBE (192 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ACFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060ACFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x0060AD0Cu); RECOMP_ABI_CALL(0x00611EC0u, sub_00611EC0); /* call 0x00611EC0 */

loc_0060AD0C: ;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_0060AD63; /* jbe: below or equal (unsigned <=) */

loc_0060AD17: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x0060AD20u); RECOMP_ABI_CALL(0x00611ED0u, sub_00611ED0); /* call 0x00611ED0 */

loc_0060AD20: ;
    ebp = eax;
    PUSH32(esp, 0x0060AD27u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060AD27: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0060AD33u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060AD33: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060AD44; /* je: equal / zero */

loc_0060AD3A: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0060AD42u); RECOMP_ABI_CALL(0x0060DFB6u, sub_0060DFB6); /* call 0x0060DFB6 */

loc_0060AD42: ;
    goto loc_0060AD46;

loc_0060AD44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060AD46: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060AD4Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060AD4C: ;
    ecx = eax;
    PUSH32(esp, 0x0060AD53u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060AD53: ;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, 0x0060AD5Cu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060AD5C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060AD17; /* jb: below (unsigned <) */

loc_0060AD61: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060AD63: ;
    PUSH32(esp, 0x0060AD68u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060AD68: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0060AD72u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060AD72: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060AD84; /* je: equal / zero */

loc_0060AD79: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0060AD82u); RECOMP_ABI_CALL(0x004DF72Bu, sub_004DF72B); /* call 0x004DF72B */

loc_0060AD82: ;
    goto loc_0060AD86;

loc_0060AD84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060AD86: ;
    PUSH32(esp, eax);
    edi = esi + 4;
    PUSH32(esp, 0x0060AD8Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060AD8F: ;
    ecx = eax;
    PUSH32(esp, 0x0060AD96u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060AD96: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0060AD9Eu); RECOMP_ABI_CALL(0x004DF2E2u, sub_004DF2E2); /* call 0x004DF2E2 */

loc_0060AD9E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060ADB0; /* jbe: below or equal (unsigned <=) */

loc_0060ADA2: ;
    ecx = MEM32(edi);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060ADADu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060ADAD: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060ADA2; /* jne: not equal / not zero */

loc_0060ADB0: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x64;
    PUSH32(esp, 0x0060ADB9u); RECOMP_ABI_CALL(0x004DF4DCu, sub_004DF4DC); /* call 0x004DF4DC */

loc_0060ADB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060ADBE
 * Original: 0x0060ADBE - 0x0060ADCB (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ADBE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060ADBE: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060ADC8u); RECOMP_ABI_CALL(0x004DF4DCu, sub_004DF4DC); /* call 0x004DF4DC */

loc_0060ADC8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060ADCB
 * Original: 0x0060ADCB - 0x0060AF86 (443 bytes, 161 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060ADCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060ADCB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060ADDBu); RECOMP_ABI_CALL(0x0060E010u, sub_0060E010); /* call 0x0060E010 */

loc_0060ADDB: ;
    ebx = esi + 8;
    MEM32(ebx) = 0x881110;
    MEM32(esi + 0xC) = 0x88111C;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi) = 0x881188;
    MEM32(ebx) = 0x881178;
    MEM32(esi + 0xC) = 0x88116C;
    PUSH32(esp, 5);
    ecx = esi + 0x18;
    MEM32(esi + 0x10) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE0Eu); RECOMP_ABI_CALL(0x004DF309u, sub_004DF309); /* call 0x004DF309 */

loc_0060AE0E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    ecx = esi + 0x44;
    MEM32(esi + 0x40) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE1Cu); RECOMP_ABI_CALL(0x004DF3AFu, sub_004DF3AF); /* call 0x004DF3AF */

loc_0060AE1C: ;
    MEM32(esi + 0x6C) = edi;
    PUSH32(esp, edi);
    MEM32(esi + 0x70) = edi;
    PUSH32(esp, 5);
    ecx = esi + 0x7C;
    MEM32(esi + 0x74) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE30u); RECOMP_ABI_CALL(0x004DF503u, sub_004DF503); /* call 0x004DF503 */

loc_0060AE30: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE46u); RECOMP_ABI_CALL(0x00611B00u, sub_00611B00); /* call 0x00611B00 */

loc_0060AE46: ;
    MEM32(esi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE4Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060AE4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE58u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060AE58: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0060AE69; /* je: equal / zero */

loc_0060AE5F: ;
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE67u); RECOMP_ABI_CALL(0x0060AA23u, sub_0060AA23); /* call 0x0060AA23 */

loc_0060AE67: ;
    goto loc_0060AE6B;

loc_0060AE69: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060AE6B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE71u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060AE71: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE78u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060AE78: ;
    ebx = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AE83u); RECOMP_ABI_CALL(0x004DF485u, sub_004DF485); /* call 0x004DF485 */

loc_0060AE83: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x24);
    ebx = MEM32(ebx);
    eax = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(ebp + -12) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AEA7u); RECOMP_ABI_CALL(0x004BD7BAu, sub_004BD7BA); /* call 0x004BD7BA */

loc_0060AEA7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AEACu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060AEAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AEB6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060AEB6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0060AECD; /* je: equal / zero */

loc_0060AEBD: ;
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AECBu); RECOMP_ABI_CALL(0x0060AB08u, sub_0060AB08); /* call 0x0060AB08 */

loc_0060AECB: ;
    goto loc_0060AECF;

loc_0060AECD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060AECF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AED5u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060AED5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AEDCu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060AEDC: ;
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AEE5u); RECOMP_ABI_CALL(0x004DF4DCu, sub_004DF4DC); /* call 0x004DF4DC */

loc_0060AEE5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AEEAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060AEEA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0060AEF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AEF3u); } /* indirect call */
    }

loc_0060AEF5: ;
    MEM32(esi + 0x78) = eax;
    ebx = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF03u); RECOMP_ABI_CALL(0x004DC9EFu, sub_004DC9EF); /* call 0x004DC9EF */

loc_0060AF03: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0060AF0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AF08u); } /* indirect call */
    }

loc_0060AF0B: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF13u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060AF13: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF1Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060AF1D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0060AF3A; /* je: equal / zero */

loc_0060AF27: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF2Cu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060AF2C: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF38u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060AF38: ;
    goto loc_0060AF3C;

loc_0060AF3A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060AF3C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF42u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060AF42: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF49u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060AF49: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF51u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060AF51: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060AF53: ;
    ecx = MEM32(esi + 0x78);
    MEM32(eax + ecx + 4) = edi;
    ecx = MEM32(esi + 0x78);
    MEM32(eax + ecx) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0060AF53; /* jb: below (unsigned <) */

loc_0060AF68: ;
    eax = MEM32(esi + 0x70);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060AF7Fu); RECOMP_ABI_CALL(0x004BD7BAu, sub_004BD7BA); /* call 0x004BD7BA */

loc_0060AF7F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060AF86
 * Original: 0x0060AF86 - 0x0060AF8E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AF86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AF86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B594(); return; /* tail jmp 0x0060B594 */

}

/**
 * sub_0060AF8E
 * Original: 0x0060AF8E - 0x0060AF96 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AF8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AF8E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B594(); return; /* tail jmp 0x0060B594 */

}

/**
 * sub_0060AF96
 * Original: 0x0060AF96 - 0x0060B036 (160 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060AF96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060AF96: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    MEM32(esi) = 0x881188;
    MEM32(esi + 8) = 0x881178;
    MEM32(esi + 0xC) = 0x88116C;
    PUSH32(esp, 0x0060AFB6u); RECOMP_ABI_CALL(0x00611BA0u, sub_00611BA0); /* call 0x00611BA0 */

loc_0060AFB6: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x0060AFBCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060AFBC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x78));
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060AFC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AFC5u); } /* indirect call */
    }

loc_0060AFC8: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060AFD7; /* je: equal / zero */

loc_0060AFCF: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060AFD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060AFD4u); } /* indirect call */
    }

loc_0060AFD7: ;
    ecx = esi + 0x7C;
    PUSH32(esp, 0x0060AFDFu); RECOMP_ABI_CALL(0x004E1E84u, sub_004E1E84); /* call 0x004E1E84 */

loc_0060AFDF: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060AFEB; /* je: equal / zero */

loc_0060AFE6: ;
    PUSH32(esp, 0x0060AFEBu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060AFEB: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060AFF7; /* je: equal / zero */

loc_0060AFF2: ;
    PUSH32(esp, 0x0060AFF7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060AFF7: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B003; /* je: equal / zero */

loc_0060AFFE: ;
    PUSH32(esp, 0x0060B003u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060B003: ;
    ecx = esi + 0x44;
    PUSH32(esp, 0x0060B00Bu); RECOMP_ABI_CALL(0x004E1E08u, sub_004E1E08); /* call 0x004E1E08 */

loc_0060B00B: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x0060B013u); RECOMP_ABI_CALL(0x004E1DE4u, sub_004E1DE4); /* call 0x004E1DE4 */

loc_0060B013: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B01F; /* je: equal / zero */

loc_0060B01A: ;
    PUSH32(esp, 0x0060B01Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060B01F: ;
    MEM32(esi + 0xC) = 0x88111C;
    POP32(esp, edi);
    MEM32(esi + 8) = 0x881110;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060E022(); return; /* tail jmp 0x0060E022 */

}

/**
 * sub_0060B036
 * Original: 0x0060B036 - 0x0060B0DA (164 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060B036(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B036: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ebx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0060B08D; /* jbe: below or equal (unsigned <=) */

loc_0060B052: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B060u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B060: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B07F; /* je: equal / zero */

loc_0060B066: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi + 0x18;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060B071u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B06Eu); } /* indirect call */
    }

loc_0060B071: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B077u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060B077: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060B0D1; /* je: equal / zero */

loc_0060B07D: ;
    goto loc_0060B085;

loc_0060B07F: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;

loc_0060B085: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060B052; /* jb: below (unsigned <) */

loc_0060B08D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B092u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060B092: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B09Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060B09E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B0B1; /* je: equal / zero */

loc_0060B0A5: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B0AFu); RECOMP_ABI_CALL(0x0060E4F9u, sub_0060E4F9); /* call 0x0060E4F9 */

loc_0060B0AF: ;
    goto loc_0060B0B3;

loc_0060B0B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060B0B3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B0B9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060B0B9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B0C0u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060B0C0: ;
    ecx = MEM32(esi + 0x10);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B0D1u); RECOMP_ABI_CALL(0x004DB8DCu, sub_004DB8DC); /* call 0x004DB8DC */

loc_0060B0D1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B0DA
 * Original: 0x0060B0DA - 0x0060B14D (115 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060B0DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B0DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x58);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -40) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0060B13C; /* jbe: below or equal (unsigned <=) */

loc_0060B0F6: ;
    PUSH32(esp, ebx);
    ebx = ecx + 0x4C;

loc_0060B0FA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B102u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B102: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0060B109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B106u); } /* indirect call */
    }

loc_0060B109: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x20);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B11Eu); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060B11E: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B12Cu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0060B12C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060B136; /* jne: not equal / not zero */

loc_0060B133: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0060B136: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060B0FA; /* jb: below (unsigned <) */

loc_0060B13B: ;
    POP32(esp, ebx);

loc_0060B13C: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -40);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B149u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060B149: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B14D
 * Original: 0x0060B14D - 0x0060B1DA (141 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060B14D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B14D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0060B1BC; /* jbe: below or equal (unsigned <=) */

loc_0060B16F: ;
    ebx = esi + 0x4C;

loc_0060B172: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B17Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B17A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0060B181u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B17Eu); } /* indirect call */
    }

loc_0060B181: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x20);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B196u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060B196: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B1A4u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0060B1A4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060B1B6; /* jne: not equal / not zero */

loc_0060B1AB: ;
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B1D5; /* je: equal / zero */

loc_0060B1B3: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0060B1B6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -44) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060B172; /* jb: below (unsigned <) */

loc_0060B1BC: ;
    PUSH32(esp, 0);
    ecx = esi + 0x4C;

loc_0060B1C1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B1C6u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B1C6: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B1D1u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060B1D1: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0060B1D5: ;
    PUSH32(esp, edi);
    ecx = ebx;
    goto loc_0060B1C1;

}

/**
 * sub_0060B1DA
 * Original: 0x0060B1DA - 0x0060B2A4 (202 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B1DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060B1DA: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x40));
    PUSH32(esp, 0x0060B1EDu); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_0060B1ED: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0060B238; /* jle: less or equal (signed <=) */

loc_0060B1F8: ;
    eax = esi + 0x20;
    MEM32(esp + 0x14) = eax;

loc_0060B1FF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060B209u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B209: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060B210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B20Du); } /* indirect call */
    }

loc_0060B210: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060B218u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_0060B218: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0060B233; /* jne: not equal / not zero */

loc_0060B21F: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esi + 0x40));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060B22Cu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0060B22C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B241; /* je: equal / zero */

loc_0060B233: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0060B1FF; /* jl: less (signed <) */

loc_0060B238: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060B23A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0060B241: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060B24Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B24B: ;
    goto loc_0060B23A;

    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060B256u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060B256: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0060B262u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060B262: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B27E; /* je: equal / zero */

loc_0060B26B: ;
    PUSH32(esp, 0x0060B270u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060B270: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, 0x0060B27Cu); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060B27C: ;
    goto loc_0060B280;

loc_0060B27E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060B280: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060B286u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060B286: ;
    ecx = eax;
    PUSH32(esp, 0x0060B28Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060B28D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x84;
    PUSH32(esp, 0x0060B299u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060B299: ;
    MEM32(0x8E4DC0) = MEM32(0x8E4DC0) + 1;
    _fa = (uint32_t)(MEM32(0x8E4DC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B2A4
 * Original: 0x0060B2A4 - 0x0060B360 (188 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060B2A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B2A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    edi = MEM32(esi + 0x90);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B2C3u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_0060B2C3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0060B31D; /* jle: less or equal (signed <=) */

loc_0060B2CD: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B2D9u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B2D9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060B2E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B2DDu); } /* indirect call */
    }

loc_0060B2E0: ;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B2E9u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_0060B2E9: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0060B304; /* jne: not equal / not zero */

loc_0060B2EF: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B2FDu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0060B2FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B30B; /* je: equal / zero */

loc_0060B304: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0060B2CD; /* jl: less (signed <) */

loc_0060B309: ;
    goto loc_0060B31D;

loc_0060B30B: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B317u); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_0060B317: ;
    MEM32(0x8E4DC0) = MEM32(0x8E4DC0) - 1;
    _fa = (uint32_t)(MEM32(0x8E4DC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0060B31D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0060B359; /* jle: less or equal (signed <=) */

loc_0060B324: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060B327: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B32Fu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B32F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060B336u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B333u); } /* indirect call */
    }

loc_0060B336: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B342u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0060B342: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B351; /* je: equal / zero */

loc_0060B349: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0060B327; /* jl: less (signed <) */

loc_0060B34F: ;
    goto loc_0060B359;

loc_0060B351: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B359u); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_0060B359: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B360
 * Original: 0x0060B360 - 0x0060B37C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060B368u); RECOMP_ABI_CALL(0x0060AA72u, sub_0060AA72); /* call 0x0060AA72 */

loc_0060B368: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060B376; /* je: equal / zero */

loc_0060B36F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060B375u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060B375: ;
    POP32(esp, ecx);

loc_0060B376: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B37C
 * Original: 0x0060B37C - 0x0060B398 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B37C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B37C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060B384u); RECOMP_ABI_CALL(0x0060AB5Eu, sub_0060AB5E); /* call 0x0060AB5E */

loc_0060B384: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060B392; /* je: equal / zero */

loc_0060B38B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060B391u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060B391: ;
    POP32(esp, ecx);

loc_0060B392: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B398
 * Original: 0x0060B398 - 0x0060B481 (233 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060B398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B398: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B3A5u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060B3A5: ;
    edi = esi + 8;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B3AFu); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_0060B3AF: ;
    eax = MEM32(ebp + 8);
    ecx = esi;
    MEM32(esi) = 0x8811DC;
    MEM32(edi) = 0x8811CC;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B3CCu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_0060B3CC: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B3E2u); RECOMP_ABI_CALL(0x00612C40u, sub_00612C40); /* call 0x00612C40 */

loc_0060B3E2: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x1C);
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8E4DC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8E4DC0) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_0060B46A; /* jae: above or equal (unsigned >=) */

loc_0060B400: ;
    PUSH32(esp, eax);
    ecx = edi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B40Cu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B40C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060B413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B410u); } /* indirect call */
    }

loc_0060B413: ;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x60AC75);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B424u); RECOMP_ABI_CALL(0x00612D30u, sub_00612D30); /* call 0x00612D30 */

loc_0060B424: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060B46A; /* jne: not equal / not zero */

loc_0060B42B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B430u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060B430: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B43Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060B43C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B450; /* je: equal / zero */

loc_0060B443: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B44Eu); RECOMP_ABI_CALL(0x0060E6A0u, sub_0060E6A0); /* call 0x0060E6A0 */

loc_0060B44E: ;
    goto loc_0060B452;

loc_0060B450: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060B452: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B458u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060B458: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B45Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060B45F: ;
    PUSH32(esp, eax);
    ecx = edi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B468u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060B468: ;
    goto loc_0060B478;

loc_0060B46A: ;
    ecx = MEM32(esi + 0xC);
    MEM8(esi + 0x10) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060B478u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B475u); } /* indirect call */
    }

loc_0060B478: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B481
 * Original: 0x0060B481 - 0x0060B49D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B481(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B481: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060B489u); RECOMP_ABI_CALL(0x0060B49Du, sub_0060B49D); /* call 0x0060B49D */

loc_0060B489: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060B497; /* je: equal / zero */

loc_0060B490: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060B496u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060B496: ;
    POP32(esp, ecx);

loc_0060B497: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B49D
 * Original: 0x0060B49D - 0x0060B4BC (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B49D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060B49D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x8811DC;
    MEM32(ecx) = 0x8811CC;
    PUSH32(esp, 0x0060B4B4u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_0060B4B4: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060B4BC
 * Original: 0x0060B4BC - 0x0060B4C4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B4BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060B4BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B481(); return; /* tail jmp 0x0060B481 */

}

/**
 * sub_0060B4C4
 * Original: 0x0060B4C4 - 0x0060B594 (208 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B4C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060B4C4: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x24);
    ecx = ebx + -1;
    PUSH32(esp, ecx);
    ecx = eax + 0x84;
    PUSH32(esp, 0x0060B4E9u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060B4E9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060B4F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B4EDu); } /* indirect call */
    }

loc_0060B4F0: ;
    esi = edi + -8;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0060B4FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B4F8u); } /* indirect call */
    }

loc_0060B4FB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0060B502u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B4FFu); } /* indirect call */
    }

loc_0060B502: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060B50Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B508u); } /* indirect call */
    }

loc_0060B50B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060B511u); RECOMP_ABI_CALL(0x00612F00u, sub_00612F00); /* call 0x00612F00 */

loc_0060B511: ;
    edx = MEM32(esi);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0060B51Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B517u); } /* indirect call */
    }

loc_0060B51A: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8E4DC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x8E4DC0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0060B587; /* jae: above or equal (unsigned >=) */

loc_0060B524: ;
    PUSH32(esp, 0x0060B529u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060B529: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0060B533u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060B533: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0060B54D; /* je: equal / zero */

loc_0060B53A: ;
    ecx = edi + -8;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0060B54Bu); RECOMP_ABI_CALL(0x0060B398u, sub_0060B398); /* call 0x0060B398 */

loc_0060B54B: ;
    goto loc_0060B54F;

loc_0060B54D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060B54F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060B555u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060B555: ;
    ecx = eax;
    PUSH32(esp, 0x0060B55Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060B55C: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060B57Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B57Bu); } /* indirect call */
    }

loc_0060B57E: ;
    PUSH32(esp, eax);
    ecx = edi + 0x6C;
    PUSH32(esp, 0x0060B587u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060B587: ;
    PUSH32(esp, esi);
    ecx = edi + 0x64;
    PUSH32(esp, 0x0060B590u); RECOMP_ABI_CALL(0x004DF485u, sub_004DF485); /* call 0x004DF485 */

loc_0060B590: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060B594
 * Original: 0x0060B594 - 0x0060B5B0 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B594(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B594: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060B59Cu); RECOMP_ABI_CALL(0x0060AF96u, sub_0060AF96); /* call 0x0060AF96 */

loc_0060B59C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060B5AA; /* je: equal / zero */

loc_0060B5A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060B5A9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060B5A9: ;
    POP32(esp, ecx);

loc_0060B5AA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B5B0
 * Original: 0x0060B5B0 - 0x0060B63E (142 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060B5B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0060B5C0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060B5C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0060B5CCu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060B5CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B5E9; /* je: equal / zero */

loc_0060B5D3: ;
    ecx = esi + -8;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0060B5E7u); RECOMP_ABI_CALL(0x0060B398u, sub_0060B398); /* call 0x0060B398 */

loc_0060B5E7: ;
    goto loc_0060B5EB;

loc_0060B5E9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060B5EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060B5F1u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060B5F1: ;
    ecx = eax;
    PUSH32(esp, 0x0060B5F8u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060B5F8: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060B61Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B61Cu); } /* indirect call */
    }

loc_0060B61F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0060B627u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060B627: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B63E
 * Original: 0x0060B63E - 0x0060B65B (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B63E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B63E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8811E0;
    if (TEST_Z(_fa, _fb)) goto loc_0060B655; /* je: equal / zero */

loc_0060B64E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060B654u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060B654: ;
    POP32(esp, ecx);

loc_0060B655: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B65B
 * Original: 0x0060B65B - 0x0060B685 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B65B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B65B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8811F4);
    PUSH32(esp, MEM32(ecx + 0x10));
    PUSH32(esp, 0x0060B66Bu); RECOMP_ABI_CALL(0x00614180u, sub_00614180); /* call 0x00614180 */

loc_0060B66B: ;
    ecx = MEM32(0x90E7AC);
    esi = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0060B67Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B678u); } /* indirect call */
    }

loc_0060B67B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060B683u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B680u); } /* indirect call */
    }

loc_0060B683: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060B685
 * Original: 0x0060B685 - 0x0060B782 (253 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060B685(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B685: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7B891F;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x32);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x863188));
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B6B2u); RECOMP_ABI_CALL(0x006140A0u, sub_006140A0); /* call 0x006140A0 */

loc_0060B6B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    eax = ebp + -108;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x86318C));
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B6C7u); RECOMP_ABI_CALL(0x006140A0u, sub_006140A0); /* call 0x006140A0 */

loc_0060B6C7: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x863190));
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B6D7u); RECOMP_ABI_CALL(0x00614180u, sub_00614180); /* call 0x00614180 */

loc_0060B6D7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x863194));
    edi = eax;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B6EAu); RECOMP_ABI_CALL(0x00614180u, sub_00614180); /* call 0x00614180 */

loc_0060B6EA: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x863198));
    MEM32(ebp + -112) = eax;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B6FFu); RECOMP_ABI_CALL(0x00614180u, sub_00614180); /* call 0x00614180 */

loc_0060B6FF: ;
    ecx = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0060B71F; /* je: equal / zero */

loc_0060B70A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060B71B; /* je: equal / zero */

loc_0060B70D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060B717; /* je: equal / zero */

loc_0060B710: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060B722; /* jne: not equal / not zero */

loc_0060B713: ;
    PUSH32(esp, 0x70);
    goto loc_0060B721;

loc_0060B717: ;
    PUSH32(esp, 0x40);
    goto loc_0060B721;

loc_0060B71B: ;
    PUSH32(esp, 0x20);
    goto loc_0060B721;

loc_0060B71F: ;
    PUSH32(esp, 0x10);

loc_0060B721: ;
    POP32(esp, edx);

loc_0060B722: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B72C; /* je: equal / zero */

loc_0060B726: ;
    edx = edx | 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0060B72C: ;
    _fa = (uint32_t)(MEM8(ebp + -56)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -56), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060B737; /* jne: not equal / not zero */

loc_0060B731: ;
    edx = edx & 0xFFFFFF6Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060B737: ;
    _fa = (uint32_t)(MEM8(ebp + -108)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -108), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060B73F; /* jne: not equal / not zero */

loc_0060B73C: ;
    edx = edx & 0xFFFFFFDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060B73F: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x881208);
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B74Du); RECOMP_ABI_CALL(0x006141B0u, sub_006141B0); /* call 0x006141B0 */

loc_0060B74D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B758; /* je: equal / zero */

loc_0060B757: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0060B758: ;
    _fa = (uint32_t)(MEM8(ebp + -56)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -56), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060B764; /* jne: not equal / not zero */

loc_0060B75D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060B764; /* jne: not equal / not zero */

loc_0060B762: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060B764: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x881200);
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B772u); RECOMP_ABI_CALL(0x006141B0u, sub_006141B0); /* call 0x006141B0 */

loc_0060B772: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B780u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060B780: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060B782
 * Original: 0x0060B782 - 0x0060B7E4 (98 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060B782(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B782: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060B7E0; /* je: equal / zero */

loc_0060B791: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060B7AF; /* je: equal / zero */

loc_0060B794: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060B79E; /* je: equal / zero */

loc_0060B797: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060B7CC; /* jne: not equal / not zero */

loc_0060B79A: ;
    PUSH32(esp, 2);
    goto loc_0060B7A0;

loc_0060B79E: ;
    PUSH32(esp, 1);

loc_0060B7A0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, MEM32(ebp + 8));
    if (CMP_NE(_fa, _fb)) goto loc_0060B7C8; /* jne: not equal / not zero */

loc_0060B7AA: ;
    ecx = MEM32(esi + 0xC);
    goto loc_0060B7C8;

loc_0060B7AF: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060B7C1; /* je: equal / zero */

loc_0060B7B4: ;
    ecx = esi + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B7BCu); RECOMP_ABI_CALL(0x0060B65Bu, sub_0060B65B); /* call 0x0060B65B */

loc_0060B7BC: ;
    ecx = MEM32(esi + 8);
    goto loc_0060B7C4;

loc_0060B7C1: ;
    ecx = MEM32(esi + 0xC);

loc_0060B7C4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));

loc_0060B7C8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060B7CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B7CAu); } /* indirect call */
    }

loc_0060B7CC: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;

loc_0060B7D8: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0060B7E0: ;
    SET_LO8(ebx, 1);
    goto loc_0060B7D8;

}

/**
 * sub_0060B7E4
 * Original: 0x0060B7E4 - 0x0060B80C (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B7E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B7E4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0060B7EFu); RECOMP_ABI_CALL(0x00614080u, sub_00614080); /* call 0x00614080 */

loc_0060B7EF: ;
    POP32(esp, ecx);
    MEM32(esi + 0x14) = 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B80C
 * Original: 0x0060B80C - 0x0060B81F (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B80C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B80C: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0060B81F
 * Original: 0x0060B81F - 0x0060B855 (54 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B81F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060B81F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x10));
    MEM32(esi) = 0x881234;
    MEM32(esi + 8) = 0x881220;
    MEM32(esi + 0xC) = 0x881210;
    PUSH32(esp, 0x0060B83Eu); RECOMP_ABI_CALL(0x006141D0u, sub_006141D0); /* call 0x006141D0 */

loc_0060B83E: ;
    POP32(esp, ecx);
    MEM32(esi + 0xC) = 0x863F20;
    MEM32(esi + 8) = 0x8811E0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060B855
 * Original: 0x0060B855 - 0x0060B93B (230 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060B855(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B855: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060B875u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B872u); } /* indirect call */
    }

loc_0060B875: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0060B8D1; /* je: equal / zero */

loc_0060B87A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060B8AE; /* je: equal / zero */

loc_0060B87D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060B92C; /* jne: not equal / not zero */

loc_0060B884: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x0060B88Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B888u); } /* indirect call */
    }

loc_0060B88B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060B893u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B890u); } /* indirect call */
    }

loc_0060B893: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B89Cu); RECOMP_ABI_CALL(0x00614180u, sub_00614180); /* call 0x00614180 */

loc_0060B89C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0060B8A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B8A2u); } /* indirect call */
    }

loc_0060B8A5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0060B8ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B8A9u); } /* indirect call */
    }

loc_0060B8AC: ;
    goto loc_0060B92C;

loc_0060B8AE: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x0060B8B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B8B2u); } /* indirect call */
    }

loc_0060B8B5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060B8BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B8BAu); } /* indirect call */
    }

loc_0060B8BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B8C6u); RECOMP_ABI_CALL(0x00614180u, sub_00614180); /* call 0x00614180 */

loc_0060B8C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0060B8CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B8CCu); } /* indirect call */
    }

loc_0060B8CF: ;
    goto loc_0060B92C;

loc_0060B8D1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060B8D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B8D5u); } /* indirect call */
    }

loc_0060B8D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -516;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060B8ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B8E9u); } /* indirect call */
    }

loc_0060B8EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B8F5u); RECOMP_ABI_CALL(0x006140A0u, sub_006140A0); /* call 0x006140A0 */

loc_0060B8F5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -516;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0060B906u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B903u); } /* indirect call */
    }

loc_0060B906: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x863668);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060B912u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B90Fu); } /* indirect call */
    }

loc_0060B912: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B918u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060B918: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0060B92C; /* jne: not equal / not zero */

loc_0060B91E: ;
    eax = MEM32(esi);
    ecx = ebp + -516;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0060B92Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B929u); } /* indirect call */
    }

loc_0060B92C: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060B937u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060B937: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B93B
 * Original: 0x0060B93B - 0x0060B98F (84 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B93B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B93B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060B94Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B947u); } /* indirect call */
    }

loc_0060B94A: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0060B96F; /* je: equal / zero */

loc_0060B94F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060B955; /* je: equal / zero */

loc_0060B952: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060B98A; /* jne: not equal / not zero */

loc_0060B955: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0060B95Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B959u); } /* indirect call */
    }

loc_0060B95C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060B964u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B961u); } /* indirect call */
    }

loc_0060B964: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x0060B96Du); RECOMP_ABI_CALL(0x006141B0u, sub_006141B0); /* call 0x006141B0 */

loc_0060B96D: ;
    goto loc_0060B987;

loc_0060B96F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060B976u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B973u); } /* indirect call */
    }

loc_0060B976: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060B97Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060B97Bu); } /* indirect call */
    }

loc_0060B97E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x0060B987u); RECOMP_ABI_CALL(0x00614120u, sub_00614120); /* call 0x00614120 */

loc_0060B987: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060B98A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060B98F
 * Original: 0x0060B98F - 0x0060B997 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B98F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060B98F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B9F5(); return; /* tail jmp 0x0060B9F5 */

}

/**
 * sub_0060B997
 * Original: 0x0060B997 - 0x0060B99F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B997(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060B997: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060B9F5(); return; /* tail jmp 0x0060B9F5 */

}

/**
 * sub_0060B99F
 * Original: 0x0060B99F - 0x0060B9F5 (86 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B99F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B99F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060B9A7u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060B9A7: ;
    MEM32(esi + 8) = 0x8811E0;
    MEM32(esi + 0xC) = 0x863F20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x881234;
    MEM32(esi + 8) = 0x881220;
    MEM32(esi + 0xC) = 0x881210;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x0060B9EDu); RECOMP_ABI_CALL(0x00613F90u, sub_00613F90); /* call 0x00613F90 */

loc_0060B9ED: ;
    MEM32(esi + 0x10) = eax;
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060B9F5
 * Original: 0x0060B9F5 - 0x0060BA11 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060B9F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060B9F5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060B9FDu); RECOMP_ABI_CALL(0x0060B81Fu, sub_0060B81F); /* call 0x0060B81F */

loc_0060B9FD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060BA0B; /* je: equal / zero */

loc_0060BA04: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060BA0Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060BA0A: ;
    POP32(esp, ecx);

loc_0060BA0B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060BA11
 * Original: 0x0060BA11 - 0x0060BA66 (85 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BA11(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060BA11: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edx = esi + -8;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = esi + 4;
    _cf = 0; /* logical op clears CF */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060BA40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BA3Du); } /* indirect call */
    }

loc_0060BA40: ;
    MEM32(esi + 0x14) = eax;
    eax = esi + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x60B80C);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0x18) = 1;
    PUSH32(esp, 0x0060BA5Bu); RECOMP_ABI_CALL(0x00613FE0u, sub_00613FE0); /* call 0x00613FE0 */

loc_0060BA5B: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060BA66
 * Original: 0x0060BA66 - 0x0060BAC4 (94 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BA66(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060BA66: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + -8;
    ecx = edi;
    PUSH32(esp, 0x0060BA75u); RECOMP_ABI_CALL(0x0060B685u, sub_0060B685); /* call 0x0060B685 */

loc_0060BA75: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    edx = esi + -8;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebx = esi + 4;
    _cf = 0; /* logical op clears CF */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060BAA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BA9Du); } /* indirect call */
    }

loc_0060BAA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x60B80C);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = 1;
    PUSH32(esp, 0x0060BAB8u); RECOMP_ABI_CALL(0x00614030u, sub_00614030); /* call 0x00614030 */

loc_0060BAB8: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060BACC
 * Original: 0x0060BACC - 0x0060BAF9 (45 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BACC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BACC: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BAF5; /* jne: not equal / not zero */

loc_0060BAD5: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edi = MEM32(eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 0x10;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060BAEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BAE8u); } /* indirect call */
    }

loc_0060BAEB: ;
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x28));
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x0060BAF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BAF2u); } /* indirect call */
    }

loc_0060BAF4: ;
    POP32(esp, edi);

loc_0060BAF5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060BAF9
 * Original: 0x0060BAF9 - 0x0060BB23 (42 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BAF9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BAF9: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BB1F; /* jne: not equal / not zero */

loc_0060BB02: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 0x10;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060BB14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BB11u); } /* indirect call */
    }

loc_0060BB14: ;
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x28));
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x0060BB1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BB1Bu); } /* indirect call */
    }

loc_0060BB1E: ;
    POP32(esp, edi);

loc_0060BB1F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060BB23
 * Original: 0x0060BB23 - 0x0060BB4D (42 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BB23(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BB23: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BB49; /* jne: not equal / not zero */

loc_0060BB2C: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 0x10;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060BB3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BB3Bu); } /* indirect call */
    }

loc_0060BB3E: ;
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x28));
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x0060BB48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BB45u); } /* indirect call */
    }

loc_0060BB48: ;
    POP32(esp, edi);

loc_0060BB49: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060BB4D
 * Original: 0x0060BB4D - 0x0060BB71 (36 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BB4D(void)
{

loc_0060BB4D: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    MEM8(esi + 8) = 1;
    edi = MEM32(eax);
    ecx = esi + 0x10;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060BB64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BB61u); } /* indirect call */
    }

loc_0060BB64: ;
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x28));
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x0060BB6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BB6Bu); } /* indirect call */
    }

loc_0060BB6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060BB71
 * Original: 0x0060BB71 - 0x0060BBF2 (129 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BB71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060BB71: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060BB7Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060BB7A: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0060BB86u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060BB86: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BB96; /* je: equal / zero */

loc_0060BB8D: ;
    ecx = eax;
    PUSH32(esp, 0x0060BB94u); RECOMP_ABI_CALL(0x0060EC85u, sub_0060EC85); /* call 0x0060EC85 */

loc_0060BB94: ;
    goto loc_0060BB98;

loc_0060BB96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060BB98: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060BBA1u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060BBA1: ;
    ecx = eax;
    PUSH32(esp, 0x0060BBA8u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060BBA8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 4); PUSH32(esp, 0x0060BBAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BBABu); } /* indirect call */
    }

loc_0060BBAE: ;
    PUSH32(esp, 0x0060BBB3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060BBB3: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0060BBBDu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060BBBD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060BBCE; /* je: equal / zero */

loc_0060BBC5: ;
    ecx = eax;
    PUSH32(esp, 0x0060BBCCu); RECOMP_ABI_CALL(0x0060E8EFu, sub_0060E8EF); /* call 0x0060E8EF */

loc_0060BBCC: ;
    goto loc_0060BBD0;

loc_0060BBCE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060BBD0: ;
    edi = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060BBD8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060BBD8: ;
    ecx = eax;
    PUSH32(esp, 0x0060BBDFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060BBDF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x0060BBE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BBE2u); } /* indirect call */
    }

loc_0060BBE5: ;
    PUSH32(esp, 0x0060BBEAu); RECOMP_ABI_CALL(0x004DC9E4u, sub_004DC9E4); /* call 0x004DC9E4 */

loc_0060BBEA: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

}

/**
 * sub_0060BBF2
 * Original: 0x0060BBF2 - 0x0060BBFE (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BBF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060BBF2: ;
    PUSH32(esp, 0x0060BBF7u); RECOMP_ABI_CALL(0x004DC9E4u, sub_004DC9E4); /* call 0x004DC9E4 */

loc_0060BBF7: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0060BC0E
 * Original: 0x0060BC0E - 0x0060BC52 (68 bytes, 20 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BC0E(void)
{

loc_0060BC0E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060BC16u); RECOMP_ABI_CALL(0x004E6E8Eu, sub_004E6E8E); /* call 0x004E6E8E */

loc_0060BC16: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = esi + 0xC;
    MEM32(esi) = 0x881238;
    MEM8(esi + 8) = 0;
    PUSH32(esp, 0x0060BC2Cu); RECOMP_ABI_CALL(0x004DEF1Cu, sub_004DEF1C); /* call 0x004DEF1C */

loc_0060BC2C: ;
    PUSH32(esp, 0x0060BC31u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060BC31: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 0x10;
    PUSH32(esp, 0x0060BC3Eu); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060BC3E: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x28) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0060BC52
 * Original: 0x0060BC52 - 0x0060BC77 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BC52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060BC52: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x881238;
    PUSH32(esp, 0x0060BC63u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060BC63: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BC6F; /* je: equal / zero */

loc_0060BC6A: ;
    PUSH32(esp, 0x0060BC6Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060BC6F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E6EA0(); return; /* tail jmp 0x004E6EA0 */

}

/**
 * sub_0060BC77
 * Original: 0x0060BC77 - 0x0060BD42 (203 bytes, 71 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060BC77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BC77: ;
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
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BC87u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060BC87: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 8) = 0x863F20;
    edi = esi + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(esi) = 0x881250;
    MEM32(esi + 8) = 0x881240;
    MEM32(esi + 0xC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BCADu); RECOMP_ABI_CALL(0x004DEF6Du, sub_004DEF6D); /* call 0x004DEF6D */

loc_0060BCAD: ;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BCC2u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060BCC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BCCEu); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060BCCE: ;
    ebx = MEM32(ebp + -12);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BCD9u); RECOMP_ABI_CALL(0x004DDA89u, sub_004DDA89); /* call 0x004DDA89 */

loc_0060BCD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060BCEB; /* jbe: below or equal (unsigned <=) */

loc_0060BCDD: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0x23 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BCE8; /* je: equal / zero */

loc_0060BCE2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060BCDD; /* jne: not equal / not zero */

loc_0060BCE6: ;
    goto loc_0060BCEB;

loc_0060BCE8: ;
    MEM8(ebx) = 0;

loc_0060BCEB: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + -20);
    ecx = ebp + -20;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060BD01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BCFEu); } /* indirect call */
    }

loc_0060BD01: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x0060BD08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BD05u); } /* indirect call */
    }

loc_0060BD08: ;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BD11u); RECOMP_ABI_CALL(0x00019237u, sub_00019237); /* call 0x00019237 */

loc_0060BD11: ;
    edi = MEM32(edi);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0060BD1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BD17u); } /* indirect call */
    }

loc_0060BD1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BD31; /* je: equal / zero */

loc_0060BD1E: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BD31u); RECOMP_ABI_CALL(0x004E4B7Cu, sub_004E4B7C); /* call 0x004E4B7C */

loc_0060BD31: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BD39u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060BD39: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0060BD42
 * Original: 0x0060BD42 - 0x0060BD4A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BD42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060BD42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060C457(); return; /* tail jmp 0x0060C457 */

}

/**
 * sub_0060BD4A
 * Original: 0x0060BD4A - 0x0060BDC7 (125 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BD4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060BD4A: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x881250;
    MEM32(esi + 8) = 0x881240;
    if (CMP_EQ(_fa, _fb)) goto loc_0060BD75; /* je: equal / zero */

loc_0060BD61: ;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x0060BD75u); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_0060BD75: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0060BD7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BD7Au); } /* indirect call */
    }

loc_0060BD7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BD94; /* je: equal / zero */

loc_0060BD81: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x0060BD94u); RECOMP_ABI_CALL(0x004E4BAEu, sub_004E4BAE); /* call 0x004E4BAE */

loc_0060BD94: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BDA0; /* je: equal / zero */

loc_0060BD9B: ;
    PUSH32(esp, 0x0060BDA0u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060BDA0: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BDAC; /* je: equal / zero */

loc_0060BDA7: ;
    PUSH32(esp, 0x0060BDACu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060BDAC: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BDB8; /* je: equal / zero */

loc_0060BDB3: ;
    PUSH32(esp, 0x0060BDB8u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060BDB8: ;
    MEM32(esi + 8) = 0x863F20;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060BDC7
 * Original: 0x0060BDC7 - 0x0060BE42 (123 bytes, 45 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BDC7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BDC7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060BDD0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060BDD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0060BDDCu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060BDDC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BDFB; /* je: equal / zero */

loc_0060BDE3: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0060BDF9u); RECOMP_ABI_CALL(0x0060BC0Eu, sub_0060BC0E); /* call 0x0060BC0E */

loc_0060BDF9: ;
    goto loc_0060BDFD;

loc_0060BDFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060BDFD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060BE03u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060BE03: ;
    ecx = eax;
    PUSH32(esp, 0x0060BE0Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060BE0A: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0060BE15u); RECOMP_ABI_CALL(0x004DEF46u, sub_004DEF46); /* call 0x004DEF46 */

loc_0060BE15: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BE3B; /* jne: not equal / not zero */

loc_0060BE1B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x18));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060BE38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BE35u); } /* indirect call */
    }

loc_0060BE38: ;
    MEM32(esi + 0xC) = eax;

loc_0060BE3B: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0060BE42
 * Original: 0x0060BE42 - 0x0060BE6E (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BE42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BE42: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BE64; /* je: equal / zero */

loc_0060BE4B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BE64; /* jne: not equal / not zero */

loc_0060BE51: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0060BE61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BE5Eu); } /* indirect call */
    }

loc_0060BE61: ;
    MEM32(esi + 0x18) = eax;

loc_0060BE64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0060BE6E
 * Original: 0x0060BE6E - 0x0060BF80 (274 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060BE6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BE6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0060BE85; /* je: equal / zero */

loc_0060BE80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BECD; /* jne: not equal / not zero */

loc_0060BE85: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    edi = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -4;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0060BEA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060BE9Eu); } /* indirect call */
    }

loc_0060BEA1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0060BECD; /* je: equal / zero */

loc_0060BEA9: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BECD; /* je: equal / zero */

loc_0060BEB1: ;
    edi = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = eax;
    goto loc_0060BEC9;

loc_0060BEB9: ;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BEC6u); RECOMP_ABI_CALL(0x0060BACCu, sub_0060BACC); /* call 0x0060BACC */

loc_0060BEC6: ;
    edi = MEM32(edi + 0xC);

loc_0060BEC9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BEB9; /* jne: not equal / not zero */

loc_0060BECD: ;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BEF7; /* jne: not equal / not zero */

loc_0060BED6: ;
    edi = esi + 0x18;
    goto loc_0060BEF1;

loc_0060BEDB: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = MEM32(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BEE5u); RECOMP_ABI_CALL(0x0060BAF9u, sub_0060BAF9); /* call 0x0060BAF9 */

loc_0060BEE5: ;
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BEF1u); RECOMP_ABI_CALL(0x004DEF46u, sub_004DEF46); /* call 0x004DEF46 */

loc_0060BEF1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BEDB; /* jne: not equal / not zero */

loc_0060BEF5: ;
    goto loc_0060BF2F;

loc_0060BEF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BF2F; /* je: equal / zero */

loc_0060BEFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BF2F; /* je: equal / zero */

loc_0060BF01: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0060BF0E; /* je: equal / zero */

loc_0060BF06: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060BF11; /* jne: not equal / not zero */

loc_0060BF09: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);
    goto loc_0060BF11;

loc_0060BF0E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0060BF11: ;
    edi = esi + 0x18;
    goto loc_0060BF2A;

loc_0060BF16: ;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BF1Eu); RECOMP_ABI_CALL(0x0060BB23u, sub_0060BB23); /* call 0x0060BB23 */

loc_0060BF1E: ;
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BF2Au); RECOMP_ABI_CALL(0x004DEF46u, sub_004DEF46); /* call 0x004DEF46 */

loc_0060BF2A: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BF16; /* jne: not equal / not zero */

loc_0060BF2F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0x18;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BF62; /* je: equal / zero */

loc_0060BF3C: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), 0 (8-bit) */
    ebx = MEM32(eax + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0060BF4A; /* jne: not equal / not zero */

loc_0060BF45: ;
    MEM32(ebp + -8) = eax;
    goto loc_0060BF5C;

loc_0060BF4A: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ecx = eax + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_0060BF57; /* jne: not equal / not zero */

loc_0060BF55: ;
    ecx = edi;

loc_0060BF57: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060BF5Cu); RECOMP_ABI_CALL(0x004DEF46u, sub_004DEF46); /* call 0x004DEF46 */

loc_0060BF5C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0060BF3C; /* jne: not equal / not zero */

loc_0060BF62: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BF7C; /* je: equal / zero */

loc_0060BF6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060BF7C; /* je: equal / zero */

loc_0060BF6F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060BF75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_0060BF7C: ;
    SET_LO8(eax, 1);
    goto loc_0060BF75;

}

/**
 * sub_0060BF80
 * Original: 0x0060BF80 - 0x0060BFB3 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BF80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x10) = 4;
    esi = edi + 0x18;
    goto loc_0060BFA5;

loc_0060BF90: ;
    ecx = MEM32(esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0060BF99u); RECOMP_ABI_CALL(0x0060BB23u, sub_0060BB23); /* call 0x0060BB23 */

loc_0060BF99: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0xC));
    ecx = esi;
    PUSH32(esp, 0x0060BFA5u); RECOMP_ABI_CALL(0x004DEF46u, sub_004DEF46); /* call 0x004DEF46 */

loc_0060BFA5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BF90; /* jne: not equal / not zero */

loc_0060BFAA: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060BFB3
 * Original: 0x0060BFB3 - 0x0060BFE6 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060BFB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BFB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x10) = 4;
    esi = edi + 0x18;
    goto loc_0060BFD8;

loc_0060BFC3: ;
    ecx = MEM32(esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0060BFCCu); RECOMP_ABI_CALL(0x0060BB23u, sub_0060BB23); /* call 0x0060BB23 */

loc_0060BFCC: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0xC));
    ecx = esi;
    PUSH32(esp, 0x0060BFD8u); RECOMP_ABI_CALL(0x004DEF46u, sub_004DEF46); /* call 0x004DEF46 */

loc_0060BFD8: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060BFC3; /* jne: not equal / not zero */

loc_0060BFDD: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060BFE6
 * Original: 0x0060BFE6 - 0x0060C066 (128 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060BFE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060BFE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x3A (8-bit) */
    MEM32(ebp + -4) = eax;
    esi = ecx;
    eax = ebp + -68;
    if (CMP_EQ(_fa, _fb)) goto loc_0060C01E; /* je: equal / zero */

loc_0060C008: ;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0060C00C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3F (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0060C01E; /* jae: above or equal (unsigned >=) */

loc_0060C011: ;
    SET_LO8(ecx, MEM8(edx + eax));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C00C; /* jne: not equal / not zero */

loc_0060C01E: ;
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(eax) = LO8(ebx);
    MEM32(ebp + -72) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0060C054; /* jbe: below or equal (unsigned <=) */

loc_0060C02A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;

loc_0060C030: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C039u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C039: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = ebp + -68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060C046u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C043u); } /* indirect call */
    }

loc_0060C046: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C051; /* jne: not equal / not zero */

loc_0060C04A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C030; /* jb: below (unsigned <) */

loc_0060C04F: ;
    goto loc_0060C054;

loc_0060C051: ;
    MEM32(ebp + -72) = esi;

loc_0060C054: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -72);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C062u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060C062: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C066
 * Original: 0x0060C066 - 0x0060C0DD (119 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060C066(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C066: ;
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
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C076u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060C076: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C082u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060C082: ;
    esi = MEM32(ebp + -12);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C08Du); RECOMP_ABI_CALL(0x004DDA89u, sub_004DDA89); /* call 0x004DDA89 */

loc_0060C08D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C0A0; /* jbe: below or equal (unsigned <=) */

loc_0060C093: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x23 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C09E; /* je: equal / zero */

loc_0060C098: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060C093; /* jne: not equal / not zero */

loc_0060C09C: ;
    goto loc_0060C0A0;

loc_0060C09E: ;
    MEM8(esi) = LO8(ebx);

loc_0060C0A0: ;
    esi = MEM32(edi + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C0CC; /* jbe: below or equal (unsigned <=) */

loc_0060C0A7: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060C0AA: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C0B2u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C0B2: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060C0BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C0B7u); } /* indirect call */
    }

loc_0060C0BA: ;
    PUSH32(esp, eax);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C0C3u); RECOMP_ABI_CALL(0x004DDA6Bu, sub_004DDA6B); /* call 0x004DDA6B */

loc_0060C0C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C0CC; /* je: equal / zero */

loc_0060C0C7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C0AA; /* jb: below (unsigned <) */

loc_0060C0CC: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C0D4u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060C0D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C0DD
 * Original: 0x0060C0DD - 0x0060C121 (68 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C0DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C0DD: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C11B; /* jbe: below or equal (unsigned <=) */

loc_0060C0E5: ;
    PUSH32(esp, edi);
    edi = ecx + 0x38;

loc_0060C0E9: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0060C0F2u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C0F2: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C104; /* jne: not equal / not zero */

loc_0060C0F9: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C116; /* jne: not equal / not zero */

loc_0060C102: ;
    goto loc_0060C10E;

loc_0060C104: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C116; /* je: equal / zero */

loc_0060C109: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C116; /* je: equal / zero */

loc_0060C10E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0060C116u); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_0060C116: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0060C0E9; /* ja: above (unsigned >) */

loc_0060C11A: ;
    POP32(esp, edi);

loc_0060C11B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C121
 * Original: 0x0060C121 - 0x0060C221 (256 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060C121(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C121: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x74) = eax;
    esi = ecx;
    PUSH32(esp, 0x0060C13Eu); RECOMP_ABI_CALL(0x0060ED68u, sub_0060ED68); /* call 0x0060ED68 */

loc_0060C13E: ;
    edi = esi + 8;
    MEM32(edi) = 0x863F20;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x881270;
    MEM32(edi) = 0x881260;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0060C15Du); RECOMP_ABI_CALL(0x004DC9D9u, sub_004DC9D9); /* call 0x004DC9D9 */

loc_0060C15D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0060C164u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C162u); } /* indirect call */
    }

loc_0060C164: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0060C16Eu); RECOMP_ABI_CALL(0x004DEFB8u, sub_004DEFB8); /* call 0x004DEFB8 */

loc_0060C16E: ;
    PUSH32(esp, 0x0060C173u); RECOMP_ABI_CALL(0x004DC9D9u, sub_004DC9D9); /* call 0x004DC9D9 */

loc_0060C173: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060C17Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C178u); } /* indirect call */
    }

loc_0060C17B: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x0060C184u); RECOMP_ABI_CALL(0x004DF05Eu, sub_004DF05E); /* call 0x004DF05E */

loc_0060C184: ;
    MEM32(esi + 0x64) = ebx;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060C192u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C18Fu); } /* indirect call */
    }

loc_0060C192: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0060C199u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C196u); } /* indirect call */
    }

loc_0060C199: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x881254);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0060C1B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C1B0u); } /* indirect call */
    }

loc_0060C1B3: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C1BCu); RECOMP_ABI_CALL(0x00614BC0u, sub_00614BC0); /* call 0x00614BC0 */

loc_0060C1BC: ;
    POP32(esp, ecx);
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0x0060C1C5u); RECOMP_ABI_CALL(0x004DC9D9u, sub_004DC9D9); /* call 0x004DC9D9 */

loc_0060C1C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0060C1CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C1C9u); } /* indirect call */
    }

loc_0060C1CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0060C1F6; /* je: equal / zero */

loc_0060C1D3: ;
    PUSH32(esp, 0x0060C1D8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060C1D8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -16));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0060C1E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C1E2u); } /* indirect call */
    }

loc_0060C1E4: ;
    PUSH32(esp, MEM32(ebp + -16));
    MEM32(esi + 0x64) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x60));
    PUSH32(esp, 0x0060C1F3u); RECOMP_ABI_CALL(0x00614CA0u, sub_00614CA0); /* call 0x00614CA0 */

loc_0060C1F3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060C1F6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060C20Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C209u); } /* indirect call */
    }

loc_0060C20C: ;
    ecx = MEM32(ebp + 0x74);
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x0060C21Cu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060C21C: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060C215
 * Original: 0x0060C215 - 0x0060C221 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C215(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C215: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x0060C21Cu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060C21C: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060C221
 * Original: 0x0060C221 - 0x0060C224 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C221(void)
{

loc_0060C221: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C224
 * Original: 0x0060C224 - 0x0060C22C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C224(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C224: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060C473(); return; /* tail jmp 0x0060C473 */

}

/**
 * sub_0060C22C
 * Original: 0x0060C22C - 0x0060C2CF (163 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C22C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C22C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881270;
    MEM32(esi + 8) = 0x881260;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0060C254u); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_0060C254: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x60));
    PUSH32(esp, 0x0060C260u); RECOMP_ABI_CALL(0x00614CA0u, sub_00614CA0); /* call 0x00614CA0 */

loc_0060C260: ;
    PUSH32(esp, MEM32(esi + 0x60));
    PUSH32(esp, 0x0060C268u); RECOMP_ABI_CALL(0x00614C50u, sub_00614C50); /* call 0x00614C50 */

loc_0060C268: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C280; /* je: equal / zero */

loc_0060C271: ;
    PUSH32(esp, 0x0060C276u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060C276: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x64));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060C280u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C27Du); } /* indirect call */
    }

loc_0060C280: ;
    edi = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C297; /* jbe: below or equal (unsigned <=) */

loc_0060C287: ;
    ebx = esi + 0x40;

loc_0060C28A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0060C293u); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_0060C293: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0060C28A; /* ja: above (unsigned >) */

loc_0060C297: ;
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C2AE; /* jbe: below or equal (unsigned <=) */

loc_0060C29E: ;
    ebx = esi + 0x18;

loc_0060C2A1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0060C2AAu); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_0060C2AA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0060C2A1; /* ja: above (unsigned >) */

loc_0060C2AE: ;
    ecx = esi + 0x38;
    PUSH32(esp, 0x0060C2B6u); RECOMP_ABI_CALL(0x004E1C9Cu, sub_004E1C9C); /* call 0x004E1C9C */

loc_0060C2B6: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0060C2BEu); RECOMP_ABI_CALL(0x004E1C78u, sub_004E1C78); /* call 0x004E1C78 */

loc_0060C2BE: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0x863F20;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0060ED7A(); return; /* tail jmp 0x0060ED7A */

}

/**
 * sub_0060C2CF
 * Original: 0x0060C2CF - 0x0060C2D7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C2CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C2CF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DB91C(); return; /* tail jmp 0x004DB91C */

}

/**
 * sub_0060C2D7
 * Original: 0x0060C2D7 - 0x0060C2DF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C2D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C2D7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DBA5A(); return; /* tail jmp 0x004DBA5A */

}

/**
 * sub_0060C2DF
 * Original: 0x0060C2DF - 0x0060C2F1 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C2DF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060C2DF: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x0060C2E8u); RECOMP_ABI_CALL(0x0060BFE6u, sub_0060BFE6); /* call 0x0060BFE6 */

loc_0060C2E8: ;
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
 * sub_0060C2F1
 * Original: 0x0060C2F1 - 0x0060C3AD (188 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060C2F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C2F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C302u); RECOMP_ABI_CALL(0x0060BFE6u, sub_0060BFE6); /* call 0x0060BFE6 */

loc_0060C302: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C3A4; /* je: equal / zero */

loc_0060C30E: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C318u); RECOMP_ABI_CALL(0x0060C066u, sub_0060C066); /* call 0x0060C066 */

loc_0060C318: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0060C338; /* jae: above or equal (unsigned >=) */

loc_0060C31D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C326u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C326: ;
    esi = eax;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C32Fu); RECOMP_ABI_CALL(0x0060BE42u, sub_0060BE42); /* call 0x0060BE42 */

loc_0060C32F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C3A4; /* je: equal / zero */

loc_0060C333: ;
    ebx = MEM32(esi + 0x14);
    goto loc_0060C3A4;

loc_0060C338: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C341u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060C341: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C34Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060C34D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C367; /* je: equal / zero */

loc_0060C354: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C365u); RECOMP_ABI_CALL(0x0060BC77u, sub_0060BC77); /* call 0x0060BC77 */

loc_0060C365: ;
    goto loc_0060C369;

loc_0060C367: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060C369: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C36Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060C36F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C376u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060C376: ;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C37Fu); RECOMP_ABI_CALL(0x004E05A2u, sub_004E05A2); /* call 0x004E05A2 */

loc_0060C37F: ;
    edi = MEM32(ebp + -4);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C389u); RECOMP_ABI_CALL(0x0060BE42u, sub_0060BE42); /* call 0x0060BE42 */

loc_0060C389: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C399; /* je: equal / zero */

loc_0060C38D: ;
    ebx = MEM32(edi + 0x14);
    PUSH32(esp, edi);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C399u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060C399: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C3A4; /* je: equal / zero */

loc_0060C39D: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C3A4u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060C3A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060C3AD
 * Original: 0x0060C3AD - 0x0060C43B (142 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060C3AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C3AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C3BEu); RECOMP_ABI_CALL(0x0060BFE6u, sub_0060BFE6); /* call 0x0060BFE6 */

loc_0060C3BE: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C434; /* je: equal / zero */

loc_0060C3C6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C3CEu); RECOMP_ABI_CALL(0x0060C066u, sub_0060C066); /* call 0x0060C066 */

loc_0060C3CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0060C3E0; /* jae: above or equal (unsigned >=) */

loc_0060C3D3: ;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C3DCu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C3DC: ;
    edi = eax;
    goto loc_0060C423;

loc_0060C3E0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C3E5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060C3E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C3F1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060C3F1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C409; /* je: equal / zero */

loc_0060C3F8: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C407u); RECOMP_ABI_CALL(0x0060BC77u, sub_0060BC77); /* call 0x0060BC77 */

loc_0060C407: ;
    goto loc_0060C40B;

loc_0060C409: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060C40B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C411u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060C411: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C418u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060C418: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C423u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060C423: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C434u); RECOMP_ABI_CALL(0x0060BDC7u, sub_0060BDC7); /* call 0x0060BDC7 */

loc_0060C434: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0060C43B
 * Original: 0x0060C43B - 0x0060C457 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C43B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C43B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060C443u); RECOMP_ABI_CALL(0x0060BC52u, sub_0060BC52); /* call 0x0060BC52 */

loc_0060C443: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060C451; /* je: equal / zero */

loc_0060C44A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060C450u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060C450: ;
    POP32(esp, ecx);

loc_0060C451: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C457
 * Original: 0x0060C457 - 0x0060C473 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C457(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C457: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060C45Fu); RECOMP_ABI_CALL(0x0060BD4Au, sub_0060BD4A); /* call 0x0060BD4A */

loc_0060C45F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060C46D; /* je: equal / zero */

loc_0060C466: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060C46Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060C46C: ;
    POP32(esp, ecx);

loc_0060C46D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C473
 * Original: 0x0060C473 - 0x0060C48F (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C473(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C473: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060C47Bu); RECOMP_ABI_CALL(0x0060C22Cu, sub_0060C22C); /* call 0x0060C22C */

loc_0060C47B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060C489; /* je: equal / zero */

loc_0060C482: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060C488u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060C488: ;
    POP32(esp, ecx);

loc_0060C489: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C48F
 * Original: 0x0060C48F - 0x0060C497 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C48F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C48F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DDA93(); return; /* tail jmp 0x004DDA93 */

}

/**
 * sub_0060C497
 * Original: 0x0060C497 - 0x0060C49F (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C497(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C497: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060C49F
 * Original: 0x0060C49F - 0x0060C4A7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C49F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C49F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DDA93(); return; /* tail jmp 0x004DDA93 */

}

/**
 * sub_0060C4A7
 * Original: 0x0060C4A7 - 0x0060C4AF (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C4A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C4A7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060C4AF
 * Original: 0x0060C4AF - 0x0060C4B7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C4AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C4AF: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DDA93(); return; /* tail jmp 0x004DDA93 */

}

/**
 * sub_0060C4B7
 * Original: 0x0060C4B7 - 0x0060C4BF (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C4B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C4B7: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060C4BF
 * Original: 0x0060C4BF - 0x0060C4C7 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C4BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C4BF: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060C4C7
 * Original: 0x0060C4C7 - 0x0060C4E8 (33 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C4C7(void)
{

loc_0060C4C7: ;
    PUSH32(esp, esi);
    esi = ecx + 0x48;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060C4D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C4D1u); } /* indirect call */
    }

loc_0060C4D4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060C4DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C4D9u); } /* indirect call */
    }

loc_0060C4DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C4E2u); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_0060C4E2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C4E8
 * Original: 0x0060C4E8 - 0x0060C4FF (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C4E8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C4E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060C4F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C4F1u); } /* indirect call */
    }

loc_0060C4F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C4FAu); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_0060C4FA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C4FF
 * Original: 0x0060C4FF - 0x0060C504 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C4FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C4FF: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x6C)); return; /* indirect tail jmp */

}

/**
 * sub_0060C504
 * Original: 0x0060C504 - 0x0060C532 (46 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060C504(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C504: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xC);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x78756964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C51Au); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_0060C51A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C52E; /* jne: not equal / not zero */

loc_0060C521: ;
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0060C52E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060C532
 * Original: 0x0060C532 - 0x0060C58F (93 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C532(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C532: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060C53Au); RECOMP_ABI_CALL(0x0060EDA7u, sub_0060EDA7); /* call 0x0060EDA7 */

loc_0060C53A: ;
    MEM32(esi) = 0x881298;
    PUSH32(esp, 0x0060C545u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060C545: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x24);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0060C550u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_0060C550: ;
    PUSH32(esp, 0x0060C555u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060C555: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0060C563u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_0060C563: ;
    PUSH32(esp, 0x0060C568u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060C568: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x54);
    ecx = esi + 0x34;
    PUSH32(esp, 0x0060C573u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_0060C573: ;
    PUSH32(esp, 0x0060C578u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060C578: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 0x48;
    PUSH32(esp, 0x0060C585u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060C585: ;
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C58F
 * Original: 0x0060C58F - 0x0060C599 (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C58F(void)
{

loc_0060C58F: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C599
 * Original: 0x0060C599 - 0x0060C59D (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C599(void)
{

loc_0060C599: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C59D
 * Original: 0x0060C59D - 0x0060C5DA (61 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C59D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C59D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881298;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C5B2; /* je: equal / zero */

loc_0060C5AD: ;
    PUSH32(esp, 0x0060C5B2u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060C5B2: ;
    ecx = esi + 0x48;
    PUSH32(esp, 0x0060C5BAu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060C5BA: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x0060C5C2u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060C5C2: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0060C5CAu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060C5CA: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x0060C5D2u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060C5D2: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060EDB9(); return; /* tail jmp 0x0060EDB9 */

}

/**
 * sub_0060C5DA
 * Original: 0x0060C5DA - 0x0060C607 (45 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C5DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C5DA: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x73656C66);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C5F3u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_0060C5F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_0060C604; /* je: equal / zero */

loc_0060C5FE: ;
    ecx = eax + 0x1B8;

loc_0060C604: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0060C607
 * Original: 0x0060C607 - 0x0060C634 (45 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C607(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C607: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x73656C66);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C620u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_0060C620: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_0060C631; /* je: equal / zero */

loc_0060C62B: ;
    ecx = eax + 0x1CC;

loc_0060C631: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0060C634
 * Original: 0x0060C634 - 0x0060C647 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C634(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C634: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x10);
    g_seh_ebp = ebp; sub_004AF11B(); return; /* tail jmp 0x004AF11B */

}

/**
 * sub_0060C647
 * Original: 0x0060C647 - 0x0060C693 (76 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C647(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C647: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x84);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C68D; /* jbe: below or equal (unsigned <=) */

loc_0060C669: ;
    PUSH32(esp, ebp);
    ebp = eax + 8;

loc_0060C66D: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0060C675u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C675: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0060C67Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C679u); } /* indirect call */
    }

loc_0060C67F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C68A; /* jne: not equal / not zero */

loc_0060C683: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C66D; /* jb: below (unsigned <) */

loc_0060C688: ;
    goto loc_0060C68C;

loc_0060C68A: ;
    SET_LO8(ebx, 1);

loc_0060C68C: ;
    POP32(esp, ebp);

loc_0060C68D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C693
 * Original: 0x0060C693 - 0x0060C6DF (76 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C693(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C693: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x84);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C6D9; /* jbe: below or equal (unsigned <=) */

loc_0060C6B5: ;
    PUSH32(esp, ebp);
    ebp = eax + 8;

loc_0060C6B9: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0060C6C1u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C6C1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0060C6CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C6C5u); } /* indirect call */
    }

loc_0060C6CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C6D6; /* jne: not equal / not zero */

loc_0060C6CF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C6B9; /* jb: below (unsigned <) */

loc_0060C6D4: ;
    goto loc_0060C6D8;

loc_0060C6D6: ;
    SET_LO8(ebx, 1);

loc_0060C6D8: ;
    POP32(esp, ebp);

loc_0060C6D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C6DF
 * Original: 0x0060C6DF - 0x0060C72B (76 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C6DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C6DF: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x84);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C725; /* jbe: below or equal (unsigned <=) */

loc_0060C701: ;
    PUSH32(esp, ebp);
    ebp = eax + 8;

loc_0060C705: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0060C70Du); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C70D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x0060C717u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C711u); } /* indirect call */
    }

loc_0060C717: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C722; /* jne: not equal / not zero */

loc_0060C71B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C705; /* jb: below (unsigned <) */

loc_0060C720: ;
    goto loc_0060C724;

loc_0060C722: ;
    SET_LO8(ebx, 1);

loc_0060C724: ;
    POP32(esp, ebp);

loc_0060C725: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C72B
 * Original: 0x0060C72B - 0x0060C777 (76 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C72B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C72B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x84);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C771; /* jbe: below or equal (unsigned <=) */

loc_0060C74D: ;
    PUSH32(esp, ebp);
    ebp = eax + 8;

loc_0060C751: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0060C759u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C759: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0060C763u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C75Du); } /* indirect call */
    }

loc_0060C763: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C76E; /* jne: not equal / not zero */

loc_0060C767: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C751; /* jb: below (unsigned <) */

loc_0060C76C: ;
    goto loc_0060C770;

loc_0060C76E: ;
    SET_LO8(ebx, 1);

loc_0060C770: ;
    POP32(esp, ebp);

loc_0060C771: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C777
 * Original: 0x0060C777 - 0x0060C7C3 (76 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C777(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C777: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x84);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C7BD; /* jbe: below or equal (unsigned <=) */

loc_0060C799: ;
    PUSH32(esp, ebp);
    ebp = eax + 8;

loc_0060C79D: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0060C7A5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C7A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x0060C7AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C7A9u); } /* indirect call */
    }

loc_0060C7AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C7BA; /* jne: not equal / not zero */

loc_0060C7B3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C79D; /* jb: below (unsigned <) */

loc_0060C7B8: ;
    goto loc_0060C7BC;

loc_0060C7BA: ;
    SET_LO8(ebx, 1);

loc_0060C7BC: ;
    POP32(esp, ebp);

loc_0060C7BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C7C3
 * Original: 0x0060C7C3 - 0x0060C7D5 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C7C3(void)
{

loc_0060C7C3: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C7D5
 * Original: 0x0060C7D5 - 0x0060C7E8 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C7D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C7D5: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    g_seh_ebp = ebp; sub_004B40F1(); return; /* tail jmp 0x004B40F1 */

}

/**
 * sub_0060C7E8
 * Original: 0x0060C7E8 - 0x0060C80F (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060C7E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C7E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C80Bu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0060C80B: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C80F
 * Original: 0x0060C80F - 0x0060C836 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060C80F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C80F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060C832u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_0060C832: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C836
 * Original: 0x0060C836 - 0x0060C86B (53 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C836(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C836: ;
    PUSH32(esp, esi);
    esi = ecx + 0x5C;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060C867; /* jne: not equal / not zero */

loc_0060C83F: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x28);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060C856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C853u); } /* indirect call */
    }

loc_0060C856: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0060C85Eu); RECOMP_ABI_CALL(0x004AE415u, sub_004AE415); /* call 0x004AE415 */

loc_0060C85E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0060C866u); RECOMP_ABI_CALL(0x004DDF19u, sub_004DDF19); /* call 0x004DDF19 */

loc_0060C866: ;
    POP32(esp, edi);

loc_0060C867: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C86B
 * Original: 0x0060C86B - 0x0060C87A (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C86B(void)
{

loc_0060C86B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C87A
 * Original: 0x0060C87A - 0x0060C896 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C87A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C87A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060C882u); RECOMP_ABI_CALL(0x0060C59Du, sub_0060C59D); /* call 0x0060C59D */

loc_0060C882: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060C890; /* je: equal / zero */

loc_0060C889: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060C88Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060C88F: ;
    POP32(esp, ecx);

loc_0060C890: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C896
 * Original: 0x0060C896 - 0x0060C8BF (41 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C896(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C896: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0060C8AAu); RECOMP_ABI_CALL(0x0060EE03u, sub_0060EE03); /* call 0x0060EE03 */

loc_0060C8AA: ;
    ecx = MEM32(esi + 8);
    edi = eax;
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060C8B8u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060C8B8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060C8BF
 * Original: 0x0060C8BF - 0x0060C90C (77 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C8BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C8BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ebx = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060C906; /* jbe: below or equal (unsigned <=) */

loc_0060C8D0: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    ecx = eax + 8;
    PUSH32(esp, 0x0060C8DCu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C8DC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060C8E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C8E4u); } /* indirect call */
    }

loc_0060C8E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C8EDu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060C8ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060C8FA; /* je: equal / zero */

loc_0060C8F3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C8D0; /* jb: below (unsigned <) */

loc_0060C8F8: ;
    goto loc_0060C906;

loc_0060C8FA: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060C906u); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_0060C906: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C90C
 * Original: 0x0060C90C - 0x0060C95F (83 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C90C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C90C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ebx = MEM32(eax + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0xC) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_0060C954; /* jbe: below or equal (unsigned <=) */

loc_0060C922: ;
    PUSH32(esp, edi);

loc_0060C923: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebp);
    ecx = eax + 8;
    PUSH32(esp, 0x0060C92Fu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060C92F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x18));
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060C93Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060C939u); } /* indirect call */
    }

loc_0060C93C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C942u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060C942: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060C94F; /* je: equal / zero */

loc_0060C948: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060C923; /* jb: below (unsigned <) */

loc_0060C94D: ;
    goto loc_0060C953;

loc_0060C94F: ;
    MEM32(esp + 0x10) = edi;

loc_0060C953: ;
    POP32(esp, edi);

loc_0060C954: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060C95F
 * Original: 0x0060C95F - 0x0060C9E6 (135 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C95F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060C95F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060C969u); RECOMP_ABI_CALL(0x0060EEB1u, sub_0060EEB1); /* call 0x0060EEB1 */

loc_0060C969: ;
    MEM32(esi) = 0x881308;
    edi = esi + 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = ebx;
    PUSH32(esp, 0x0060C97Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060C97B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0060C985u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060C985: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C998; /* je: equal / zero */

loc_0060C98C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA);
    ecx = eax;
    PUSH32(esp, 0x0060C996u); RECOMP_ABI_CALL(0x004DF7D1u, sub_004DF7D1); /* call 0x004DF7D1 */

loc_0060C996: ;
    goto loc_0060C99A;

loc_0060C998: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060C99A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C9A0u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060C9A0: ;
    ecx = eax;
    PUSH32(esp, 0x0060C9A7u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060C9A7: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0060C9AFu); RECOMP_ABI_CALL(0x004DDDA5u, sub_004DDDA5); /* call 0x004DDDA5 */

loc_0060C9AF: ;
    PUSH32(esp, 0x0060C9B4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060C9B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0060C9BEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060C9BE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060C9CE; /* je: equal / zero */

loc_0060C9C5: ;
    ecx = eax;
    PUSH32(esp, 0x0060C9CCu); RECOMP_ABI_CALL(0x0060EDE6u, sub_0060EDE6); /* call 0x0060EDE6 */

loc_0060C9CC: ;
    goto loc_0060C9D0;

loc_0060C9CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060C9D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060C9D6u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060C9D6: ;
    ecx = eax;
    PUSH32(esp, 0x0060C9DDu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060C9DD: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060C9E6
 * Original: 0x0060C9E6 - 0x0060CA1B (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060C9E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060C9E6: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(esi) = 0x881308;
    edi = MEM32(eax + 0x14);
    goto loc_0060CA02;

loc_0060C9F8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060CA02u); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_0060CA02: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi + 8);
    if (CMP_A(_fa, _fb)) goto loc_0060C9F8; /* ja: above (unsigned >) */

loc_0060CA09: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060CA12; /* je: equal / zero */

loc_0060CA0D: ;
    PUSH32(esp, 0x0060CA12u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060CA12: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060EEC3(); return; /* tail jmp 0x0060EEC3 */

}

/**
 * sub_0060CA1B
 * Original: 0x0060CA1B - 0x0060CA37 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CA1B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CA1B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CA23u); RECOMP_ABI_CALL(0x0060C9E6u, sub_0060C9E6); /* call 0x0060C9E6 */

loc_0060CA23: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060CA31; /* je: equal / zero */

loc_0060CA2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CA30u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060CA30: ;
    POP32(esp, ecx);

loc_0060CA31: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CA37
 * Original: 0x0060CA37 - 0x0060CA49 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CA37(void)
{

loc_0060CA37: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CA3Fu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060CA3F: ;
    MEM32(esi) = 0x881318;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060CA49
 * Original: 0x0060CA49 - 0x0060CA54 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CA49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CA49: ;
    MEM32(ecx) = 0x881318;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060CA54
 * Original: 0x0060CA54 - 0x0060CA76 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CA54(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CA54: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881318;
    PUSH32(esp, 0x0060CA62u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060CA62: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060CA70; /* je: equal / zero */

loc_0060CA69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CA6Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060CA6F: ;
    POP32(esp, ecx);

loc_0060CA70: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CA76
 * Original: 0x0060CA76 - 0x0060CA7F (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CA76(void)
{

loc_0060CA76: ;
    eax = ecx;
    MEM32(eax) = 0x881328;
    esp += 4; return; /* ret */

}

/**
 * sub_0060CA7F
 * Original: 0x0060CA7F - 0x0060CA86 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CA7F(void)
{

loc_0060CA7F: ;
    MEM32(ecx) = 0x881328;
    esp += 4; return; /* ret */

}

/**
 * sub_0060CA86
 * Original: 0x0060CA86 - 0x0060CAA3 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CA86(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CA86: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881328;
    if (TEST_Z(_fa, _fb)) goto loc_0060CA9D; /* je: equal / zero */

loc_0060CA96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CA9Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060CA9C: ;
    POP32(esp, ecx);

loc_0060CA9D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CAA3
 * Original: 0x0060CAA3 - 0x0060CAC7 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CAA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CAA3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0060CAAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CAACu); } /* indirect call */
    }

loc_0060CAAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060CAB7; /* je: equal / zero */

loc_0060CAB3: ;
    SET_LO8(eax, 1);
    goto loc_0060CAC3;

loc_0060CAB7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0060CABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CABBu); } /* indirect call */
    }

loc_0060CABE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_0060CAC3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CAC7
 * Original: 0x0060CAC7 - 0x0060CAEA (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CAC7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CAC7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CACFu); RECOMP_ABI_CALL(0x0060EEF0u, sub_0060EEF0); /* call 0x0060EEF0 */

loc_0060CACF: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x881330;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CAEA
 * Original: 0x0060CAEA - 0x0060CAEF (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CAEA(void)
{

loc_0060CAEA: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CAEF
 * Original: 0x0060CAEF - 0x0060CB0C (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CAEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CAEF: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881330;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060CB04; /* je: equal / zero */

loc_0060CAFF: ;
    PUSH32(esp, 0x0060CB04u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060CB04: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060EF02(); return; /* tail jmp 0x0060EF02 */

}

/**
 * sub_0060CB0C
 * Original: 0x0060CB0C - 0x0060CB34 (40 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CB0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CB0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060CB19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CB16u); } /* indirect call */
    }

loc_0060CB19: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0060CB2D; /* je: equal / zero */

loc_0060CB22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060CB2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CB28u); } /* indirect call */
    }

loc_0060CB2B: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0060CB2D: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CB34
 * Original: 0x0060CB34 - 0x0060CB5C (40 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CB34(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CB34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060CB41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CB3Eu); } /* indirect call */
    }

loc_0060CB41: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0060CB55; /* je: equal / zero */

loc_0060CB4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0060CB53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CB50u); } /* indirect call */
    }

loc_0060CB53: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0060CB55: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CB5C
 * Original: 0x0060CB5C - 0x0060CB78 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CB5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CB5C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CB64u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_0060CB64: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060CB72; /* je: equal / zero */

loc_0060CB6B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CB71u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060CB71: ;
    POP32(esp, ecx);

loc_0060CB72: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CB78
 * Original: 0x0060CB78 - 0x0060CB81 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CB78(void)
{

loc_0060CB78: ;
    eax = ecx;
    MEM32(eax) = 0x88134C;
    esp += 4; return; /* ret */

}

/**
 * sub_0060CB81
 * Original: 0x0060CB81 - 0x0060CB88 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CB81(void)
{

loc_0060CB81: ;
    MEM32(ecx) = 0x88134C;
    esp += 4; return; /* ret */

}

/**
 * sub_0060CB88
 * Original: 0x0060CB88 - 0x0060CBA5 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CB88(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CB88: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x88134C;
    if (TEST_Z(_fa, _fb)) goto loc_0060CB9F; /* je: equal / zero */

loc_0060CB98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CB9Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060CB9E: ;
    POP32(esp, ecx);

loc_0060CB9F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CBA5
 * Original: 0x0060CBA5 - 0x0060CBB7 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CBA5(void)
{

loc_0060CBA5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CBADu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060CBAD: ;
    MEM32(esi) = 0x881354;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060CBB7
 * Original: 0x0060CBB7 - 0x0060CBC2 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CBB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CBB7: ;
    MEM32(ecx) = 0x881354;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060CBC2
 * Original: 0x0060CBC2 - 0x0060CBE4 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CBC2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CBC2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881354;
    PUSH32(esp, 0x0060CBD0u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060CBD0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060CBDE; /* je: equal / zero */

loc_0060CBD7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CBDDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060CBDD: ;
    POP32(esp, ecx);

loc_0060CBDE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CBE4
 * Original: 0x0060CBE4 - 0x0060CBF6 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CBE4(void)
{

loc_0060CBE4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CBECu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060CBEC: ;
    MEM32(esi) = 0x881368;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060CBF6
 * Original: 0x0060CBF6 - 0x0060CC01 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CBF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CBF6: ;
    MEM32(ecx) = 0x881368;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060CC01
 * Original: 0x0060CC01 - 0x0060CC23 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC01(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CC01: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881368;
    PUSH32(esp, 0x0060CC0Fu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060CC0F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060CC1D; /* je: equal / zero */

loc_0060CC16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CC1Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060CC1C: ;
    POP32(esp, ecx);

loc_0060CC1D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CC23
 * Original: 0x0060CC23 - 0x0060CC3C (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CC23: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x1C;
    MEM32(esi) = 0x88137C;
    PUSH32(esp, 0x0060CC34u); RECOMP_ABI_CALL(0x004E2180u, sub_004E2180); /* call 0x004E2180 */

loc_0060CC34: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060EF41(); return; /* tail jmp 0x0060EF41 */

}

/**
 * sub_0060CC3C
 * Original: 0x0060CC3C - 0x0060CC40 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC3C(void)
{

loc_0060CC3C: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0060CC40
 * Original: 0x0060CC40 - 0x0060CC44 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC40(void)
{

loc_0060CC40: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0060CC44
 * Original: 0x0060CC44 - 0x0060CC48 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC44(void)
{

loc_0060CC44: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0060CC48
 * Original: 0x0060CC48 - 0x0060CC4C (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC48(void)
{

loc_0060CC48: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0060CC4C
 * Original: 0x0060CC4C - 0x0060CC50 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC4C(void)
{

loc_0060CC4C: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0060CC50
 * Original: 0x0060CC50 - 0x0060CC97 (71 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CC58u); RECOMP_ABI_CALL(0x0060EF2Fu, sub_0060EF2F); /* call 0x0060EF2F */

loc_0060CC58: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = esi + 0x1C;
    MEM32(esi) = 0x88137C;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0060CC7Fu); RECOMP_ABI_CALL(0x004E0001u, sub_004E0001); /* call 0x004E0001 */

loc_0060CC7F: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060CC8Eu); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_0060CC8E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0060CC97
 * Original: 0x0060CC97 - 0x0060CCB3 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CC97(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CC97: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CC9Fu); RECOMP_ABI_CALL(0x0060CC23u, sub_0060CC23); /* call 0x0060CC23 */

loc_0060CC9F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060CCAD; /* je: equal / zero */

loc_0060CCA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CCACu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060CCAC: ;
    POP32(esp, ecx);

loc_0060CCAD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CCB3
 * Original: 0x0060CCB3 - 0x0060CCFB (72 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CCB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CCB3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CCBBu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060CCBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0060CCC7u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060CCC7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060CCDF; /* je: equal / zero */

loc_0060CCCE: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0060CCDDu); RECOMP_ABI_CALL(0x0060EF6Eu, sub_0060EF6E); /* call 0x0060EF6E */

loc_0060CCDD: ;
    goto loc_0060CCE1;

loc_0060CCDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060CCE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060CCE7u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060CCE7: ;
    ecx = eax;
    PUSH32(esp, 0x0060CCEEu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060CCEE: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x0060CCF7u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060CCF7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060CCFB
 * Original: 0x0060CCFB - 0x0060CD1B (32 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CCFB(void)
{

loc_0060CCFB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CD03u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060CD03: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi + 8;
    PUSH32(esp, 0x0060CD0Fu); RECOMP_ABI_CALL(0x004DF5B0u, sub_004DF5B0); /* call 0x004DF5B0 */

loc_0060CD0F: ;
    MEM32(esi) = 0x881398;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CD1B
 * Original: 0x0060CD1B - 0x0060CD34 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CD1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CD1B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x881398;
    PUSH32(esp, 0x0060CD2Cu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_0060CD2C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060CD34
 * Original: 0x0060CD34 - 0x0060CD50 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CD34(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CD34: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CD3Cu); RECOMP_ABI_CALL(0x0060CD1Bu, sub_0060CD1B); /* call 0x0060CD1B */

loc_0060CD3C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060CD4A; /* je: equal / zero */

loc_0060CD43: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CD49u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060CD49: ;
    POP32(esp, ecx);

loc_0060CD4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CD50
 * Original: 0x0060CD50 - 0x0060CD6A (26 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CD50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060CD5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CD5Cu); } /* indirect call */
    }

loc_0060CD5E: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CD6A
 * Original: 0x0060CD6A - 0x0060CD85 (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CD6A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CD6A: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060CD79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CD76u); } /* indirect call */
    }

loc_0060CD79: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CD85
 * Original: 0x0060CD85 - 0x0060CDB4 (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CD85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CD85: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x8813BC;
    MEM32(edi) = 0x8813B0;
    if (CMP_EQ(_fa, _fb)) goto loc_0060CDA4; /* je: equal / zero */

loc_0060CD9F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060CDA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CDA1u); } /* indirect call */
    }

loc_0060CDA4: ;
    ecx = edi;
    PUSH32(esp, 0x0060CDABu); RECOMP_ABI_CALL(0x0060808Bu, sub_0060808B); /* call 0x0060808B */

loc_0060CDAB: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F054(); return; /* tail jmp 0x0060F054 */

}

/**
 * sub_0060CDB4
 * Original: 0x0060CDB4 - 0x0060CDE1 (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CDB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CDB4: ;
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0060CDCB; /* je: equal / zero */

loc_0060CDC0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060CDC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CDC4u); } /* indirect call */
    }

loc_0060CDC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0060CDDE;

loc_0060CDCB: ;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060CDDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CDDBu); } /* indirect call */
    }

loc_0060CDDE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060CDE1
 * Original: 0x0060CDE1 - 0x0060CDE9 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CDE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CDE1: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_0060CDE9
 * Original: 0x0060CDE9 - 0x0060CE8A (161 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060CDE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CDE9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0060CE06; /* jne: not equal / not zero */

loc_0060CE00: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060CE72; /* je: equal / zero */

loc_0060CE06: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060CE13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CE10u); } /* indirect call */
    }

loc_0060CE13: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + -36) = eax;
    edi = 0x8813D0;
    esi = 0x7E0D78;
    if (CMP_EQ(_fa, _fb)) goto loc_0060CE47; /* je: equal / zero */

loc_0060CE26: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x19);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CE37u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060CE37: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CE44u); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_0060CE44: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060CE47: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060CE70; /* je: equal / zero */

loc_0060CE4D: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x19);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -36));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CE60u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060CE60: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CE6Du); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_0060CE6D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060CE70: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0060CE72: ;
    ecx = MEM32(ebx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0060CE7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CE7Au); } /* indirect call */
    }

loc_0060CE7D: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CE86u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060CE86: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060CE8A
 * Original: 0x0060CE8A - 0x0060CF2B (161 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060CE8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CE8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0060CEA7; /* jne: not equal / not zero */

loc_0060CEA1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060CF13; /* je: equal / zero */

loc_0060CEA7: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060CEB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CEB1u); } /* indirect call */
    }

loc_0060CEB4: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + -36) = eax;
    edi = 0x8813D0;
    esi = 0x7E0D78;
    if (CMP_EQ(_fa, _fb)) goto loc_0060CEE8; /* je: equal / zero */

loc_0060CEC7: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 0x19);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CED8u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060CED8: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CEE5u); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_0060CEE5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060CEE8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060CF11; /* je: equal / zero */

loc_0060CEEE: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x19);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -36));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CF01u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060CF01: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CF0Eu); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_0060CF0E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060CF11: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0060CF13: ;
    ecx = MEM32(ebx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060CF1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CF1Bu); } /* indirect call */
    }

loc_0060CF1E: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060CF27u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060CF27: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060CF2B
 * Original: 0x0060CF2B - 0x0060CF33 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CF2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060CF2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060CF7E(); return; /* tail jmp 0x0060CF7E */

}

/**
 * sub_0060CF33
 * Original: 0x0060CF33 - 0x0060CF7E (75 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CF33(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CF33: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060CF3Cu); RECOMP_ABI_CALL(0x0060F042u, sub_0060F042); /* call 0x0060F042 */

loc_0060CF3C: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x0060CF46u); RECOMP_ABI_CALL(0x00608082u, sub_00608082); /* call 0x00608082 */

loc_0060CF46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x8813BC;
    MEM32(edi) = 0x8813B0;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0060CF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CF71u); } /* indirect call */
    }

loc_0060CF74: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CF7E
 * Original: 0x0060CF7E - 0x0060CF9A (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CF7E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CF7E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060CF86u); RECOMP_ABI_CALL(0x0060CD85u, sub_0060CD85); /* call 0x0060CD85 */

loc_0060CF86: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060CF94; /* je: equal / zero */

loc_0060CF8D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060CF93u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060CF93: ;
    POP32(esp, ecx);

loc_0060CF94: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CF9A
 * Original: 0x0060CF9A - 0x0060CFB5 (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CF9A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CF9A: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060CFA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CFA6u); } /* indirect call */
    }

loc_0060CFA9: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060CFB5
 * Original: 0x0060CFB5 - 0x0060D00E (89 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060CFB5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060CFB5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0060CFBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CFBBu); } /* indirect call */
    }

loc_0060CFBE: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D00B; /* je: equal / zero */

loc_0060CFC5: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0060CFD2; /* jne: not equal / not zero */

loc_0060CFCF: ;
    edi = MEM32(esi + 0x18);

loc_0060CFD2: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D00A; /* jbe: below or equal (unsigned <=) */

loc_0060CFDA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060CFE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060CFE2u); } /* indirect call */
    }

loc_0060CFE5: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D00A; /* je: equal / zero */

loc_0060CFEC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D00A; /* je: equal / zero */

loc_0060CFF1: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060CFFCu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060CFFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060D00A; /* je: equal / zero */

loc_0060D002: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060CFDA; /* jb: below (unsigned <) */

loc_0060D00A: ;
    POP32(esp, edi);

loc_0060D00B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D00E
 * Original: 0x0060D00E - 0x0060D03D (47 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D00E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060D00E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x8813F8;
    MEM32(edi) = 0x8813EC;
    if (CMP_EQ(_fa, _fb)) goto loc_0060D02D; /* je: equal / zero */

loc_0060D028: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D02Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D02Au); } /* indirect call */
    }

loc_0060D02D: ;
    ecx = edi;
    PUSH32(esp, 0x0060D034u); RECOMP_ABI_CALL(0x0060808Bu, sub_0060808B); /* call 0x0060808B */

loc_0060D034: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F093(); return; /* tail jmp 0x0060F093 */

}

/**
 * sub_0060D03D
 * Original: 0x0060D03D - 0x0060D045 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D03D(void)
{

loc_0060D03D: ;
    eax = 0x7B891F;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060D045
 * Original: 0x0060D045 - 0x0060D072 (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D045(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D045: ;
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0060D05C; /* je: equal / zero */

loc_0060D051: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D055u); } /* indirect call */
    }

loc_0060D058: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0060D06F;

loc_0060D05C: ;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060D06Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D06Cu); } /* indirect call */
    }

loc_0060D06F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060D072
 * Original: 0x0060D072 - 0x0060D082 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D072(void)
{

loc_0060D072: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8813D4);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0060D081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D07Eu); } /* indirect call */
    }

loc_0060D081: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060D082
 * Original: 0x0060D082 - 0x0060D092 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D082(void)
{

loc_0060D082: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x8813D4);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0060D091u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D08Eu); } /* indirect call */
    }

loc_0060D091: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060D092
 * Original: 0x0060D092 - 0x0060D0A8 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060D092(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D092: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x8813D4);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0060D0A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D09Eu); } /* indirect call */
    }

loc_0060D0A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0060D0A7; /* jge: greater or equal (signed >=) */

loc_0060D0A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060D0A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060D0A8
 * Original: 0x0060D0A8 - 0x0060D0B8 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D0A8(void)
{

loc_0060D0A8: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8813DC);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0060D0B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D0B4u); } /* indirect call */
    }

loc_0060D0B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060D0B8
 * Original: 0x0060D0B8 - 0x0060D0CE (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D0B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060D0B8: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D0C6; /* jbe: below or equal (unsigned <=) */

loc_0060D0BE: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_0060D0C6: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D0CE
 * Original: 0x0060D0CE - 0x0060D0E4 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D0CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060D0CE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D0DC; /* jbe: below or equal (unsigned <=) */

loc_0060D0D4: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_0060D0DC: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D0E4
 * Original: 0x0060D0E4 - 0x0060D121 (61 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D0E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D0E4: ;
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 0 (32-bit) */
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0060D103; /* jne: not equal / not zero */

loc_0060D0F1: ;
    eax = MEM32(eax + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0060D101u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D0FEu); } /* indirect call */
    }

loc_0060D101: ;
    goto loc_0060D11E;

loc_0060D103: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(eax + 0x1C));
    eax = MEM32(eax + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0060D11Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D11Au); } /* indirect call */
    }

loc_0060D11D: ;
    POP32(esp, esi);

loc_0060D11E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060D121
 * Original: 0x0060D121 - 0x0060D125 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D121(void)
{

loc_0060D121: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D125
 * Original: 0x0060D125 - 0x0060D129 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D125(void)
{

loc_0060D125: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D129
 * Original: 0x0060D129 - 0x0060D175 (76 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D129(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D129: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 0x14));
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0060D13Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D138u); } /* indirect call */
    }

loc_0060D13B: ;
    ecx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(esp + 0x14));
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0060D14Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D148u); } /* indirect call */
    }

loc_0060D14B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060D15A; /* je: equal / zero */

loc_0060D14E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060D155; /* je: equal / zero */

loc_0060D151: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0060D15D;

loc_0060D155: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_0060D15D;

loc_0060D15A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0060D15D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060D16Cu); RECOMP_ABI_CALL(0x006083ACu, sub_006083AC); /* call 0x006083AC */

loc_0060D16C: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060D175
 * Original: 0x0060D175 - 0x0060D184 (15 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D175(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D175: ;
    edx = MEM32(ecx + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0060D183; /* jl: less (signed <) */

loc_0060D17E: ;
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0060D183: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060D184
 * Original: 0x0060D184 - 0x0060D299 (277 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060D184(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D184: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x30);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0060D1A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D1A3u); } /* indirect call */
    }

loc_0060D1A6: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 2);
    esi = 0x8813D0;
    PUSH32(esp, esi);
    PUSH32(esp, 0x19);
    POP32(esp, ebx);
    edi = eax;
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D1C0u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060D1C0: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D1C9u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060D1C9: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    MEM32(ebp + -60) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D1DCu); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060D1DC: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D1E5u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060D1E5: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(ebp + -56) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D1F8u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060D1F8: ;
    eax = ebp + -32;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D204u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060D204: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    MEM32(ebp + -52) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D217u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060D217: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D220u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060D220: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    MEM32(ebp + -48) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D233u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060D233: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D23Cu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060D23C: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    MEM32(ebp + -44) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D24Fu); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060D24F: ;
    eax = ebp + -32;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D25Bu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060D25B: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    MEM32(ebp + -40) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D26Eu); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060D26E: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D277u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060D277: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 7);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 8);
    POP32(esp, ecx);
    esi = ebp + -60;
    edi = eax;
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
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D295u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060D295: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060D299
 * Original: 0x0060D299 - 0x0060D2D0 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D299(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D299: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060D2B2; /* jne: not equal / not zero */

loc_0060D29F: ;
    edx = MEM32(ecx + 0x30);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D2B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D2ADu); } /* indirect call */
    }

loc_0060D2B0: ;
    goto loc_0060D2CD;

loc_0060D2B2: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ecx + 0x1C));
    _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0060D2CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D2C9u); } /* indirect call */
    }

loc_0060D2CC: ;
    POP32(esp, esi);

loc_0060D2CD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060D2D0
 * Original: 0x0060D2D0 - 0x0060D2F7 (39 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D2D0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8813E4);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060D2E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D2E0u); } /* indirect call */
    }

loc_0060D2E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D2F2; /* je: equal / zero */

loc_0060D2E8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060D2F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D2EDu); } /* indirect call */
    }

loc_0060D2F0: ;
    edi = eax;

loc_0060D2F2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D2F7
 * Original: 0x0060D2F7 - 0x0060D330 (57 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D2F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D2F7: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D32C; /* jbe: below or equal (unsigned <=) */

loc_0060D300: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = eax;

loc_0060D306: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    MEM32(esi + 0x28) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0060D313; /* jbe: below or equal (unsigned <=) */

loc_0060D30F: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060D313: ;
    ecx = esi;
    PUSH32(esp, 0x0060D31Au); RECOMP_ABI_CALL(0x0060CFB5u, sub_0060CFB5); /* call 0x0060CFB5 */

loc_0060D31A: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D327; /* je: equal / zero */

loc_0060D321: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D306; /* je: equal / zero */

loc_0060D327: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0060D32C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D330
 * Original: 0x0060D330 - 0x0060D369 (57 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D330: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D365; /* jbe: below or equal (unsigned <=) */

loc_0060D339: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = eax;

loc_0060D33F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D346; /* jbe: below or equal (unsigned <=) */

loc_0060D343: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0060D349;

loc_0060D346: ;
    eax = MEM32(esi + 0x24);

loc_0060D349: ;
    ecx = esi;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0060D353u); RECOMP_ABI_CALL(0x0060CFB5u, sub_0060CFB5); /* call 0x0060CFB5 */

loc_0060D353: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D360; /* je: equal / zero */

loc_0060D35A: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D33F; /* je: equal / zero */

loc_0060D360: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0060D365: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D369
 * Original: 0x0060D369 - 0x0060D371 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D369(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060D369: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060D4EA(); return; /* tail jmp 0x0060D4EA */

}

/**
 * sub_0060D371
 * Original: 0x0060D371 - 0x0060D489 (280 bytes, 117 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060D371(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D371: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060D386u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D383u); } /* indirect call */
    }

loc_0060D386: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 8) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x18) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0060D471; /* jbe: below or equal (unsigned <=) */

loc_0060D3A2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D3A7u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060D3A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0060D3B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D3ADu); } /* indirect call */
    }

loc_0060D3B0: ;
    PUSH32(esp, eax);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D3B9u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060D3B9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D406; /* jbe: below or equal (unsigned <=) */

loc_0060D3BF: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0060D3C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D3C4u); } /* indirect call */
    }

loc_0060D3C7: ;
    PUSH32(esp, eax);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D3D0u); RECOMP_ABI_CALL(0x004DDA6Bu, sub_004DDA6B); /* call 0x004DDA6B */

loc_0060D3D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D3DC; /* je: equal / zero */

loc_0060D3D4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060D3BF; /* jb: below (unsigned <) */

loc_0060D3DA: ;
    goto loc_0060D406;

loc_0060D3DC: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x14) = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x8813D4);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0060D3F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D3F4u); } /* indirect call */
    }

loc_0060D3F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0060D403; /* jle: less or equal (signed <=) */

loc_0060D3FB: ;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x10) = eax;
    goto loc_0060D406;

loc_0060D403: ;
    MEM32(esi + 0x10) = edi;

loc_0060D406: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0060D42D; /* jbe: below or equal (unsigned <=) */

loc_0060D412: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060D41Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D417u); } /* indirect call */
    }

loc_0060D41A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x21 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D427; /* je: equal / zero */

loc_0060D41F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060D412; /* jb: below (unsigned <) */

loc_0060D425: ;
    goto loc_0060D42D;

loc_0060D427: ;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x18) = edi;

loc_0060D42D: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D43E; /* jbe: below or equal (unsigned <=) */

loc_0060D434: ;
    eax = MEM32(esi + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0x18) = eax;

loc_0060D43E: ;
    ecx = esi + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D446u); RECOMP_ABI_CALL(0x0060CFB5u, sub_0060CFB5); /* call 0x0060CFB5 */

loc_0060D446: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060D467; /* jbe: below or equal (unsigned <=) */

loc_0060D44E: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0060D459u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D456u); } /* indirect call */
    }

loc_0060D459: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0060D461; /* jle: less or equal (signed <=) */

loc_0060D45E: ;
    MEM32(esi + 0x1C) = eax;

loc_0060D461: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060D44E; /* jb: below (unsigned <) */

loc_0060D467: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D46Fu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060D46F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060D471: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060D47Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D47Au); } /* indirect call */
    }

loc_0060D47C: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D489
 * Original: 0x0060D489 - 0x0060D4EA (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D489(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D489: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060D492u); RECOMP_ABI_CALL(0x0060F081u, sub_0060F081); /* call 0x0060F081 */

loc_0060D492: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x0060D49Cu); RECOMP_ABI_CALL(0x00608082u, sub_00608082); /* call 0x00608082 */

loc_0060D49C: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x8813F8;
    MEM32(edi) = 0x8813EC;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0060D4E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D4DDu); } /* indirect call */
    }

loc_0060D4E0: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D4EA
 * Original: 0x0060D4EA - 0x0060D506 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D4EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D4EA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060D4F2u); RECOMP_ABI_CALL(0x0060D00Eu, sub_0060D00E); /* call 0x0060D00E */

loc_0060D4F2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060D500; /* je: equal / zero */

loc_0060D4F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060D4FFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060D4FF: ;
    POP32(esp, ecx);

loc_0060D500: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D516
 * Original: 0x0060D516 - 0x0060D533 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D516(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D516: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881444;
    if (TEST_Z(_fa, _fb)) goto loc_0060D52D; /* je: equal / zero */

loc_0060D526: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060D52Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060D52C: ;
    POP32(esp, ecx);

loc_0060D52D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D533
 * Original: 0x0060D533 - 0x0060D565 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D533(void)
{

loc_0060D533: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060D53Bu); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_0060D53B: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x74727079);
    ecx = esi;
    MEM32(esi) = 0x881460;
    MEM32(esi + 8) = 0x881450;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0060D55Fu); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_0060D55F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060D565
 * Original: 0x0060D565 - 0x0060D58E (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D565(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D565: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881460;
    MEM32(esi + 8) = 0x881450;
    PUSH32(esp, 0x0060D57Au); RECOMP_ABI_CALL(0x004E31F2u, sub_004E31F2); /* call 0x004E31F2 */

loc_0060D57A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060D588; /* je: equal / zero */

loc_0060D581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060D587u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060D587: ;
    POP32(esp, ecx);

loc_0060D588: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D58E
 * Original: 0x0060D58E - 0x0060D599 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D58E(void)
{

loc_0060D58E: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D598u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D595u); } /* indirect call */
    }

loc_0060D598: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060D599
 * Original: 0x0060D599 - 0x0060D5CE (53 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D599(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D599: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D5C9; /* je: equal / zero */

loc_0060D59F: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0060D5C2; /* je: equal / zero */

loc_0060D5AD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69706572) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x69706572 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060D5BE; /* je: equal / zero */

loc_0060D5B7: ;
    PUSH32(esp, 0);

loc_0060D5B9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D5BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D5B9u); } /* indirect call */
    }

loc_0060D5BC: ;
    goto loc_0060D5C9;

loc_0060D5BE: ;
    PUSH32(esp, 1);
    goto loc_0060D5B9;

loc_0060D5C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x10));
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0060D5C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D5C7u); } /* indirect call */
    }

loc_0060D5C9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D5CE
 * Original: 0x0060D5CE - 0x0060D5D9 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D5CE(void)
{

loc_0060D5CE: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D5D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D5D5u); } /* indirect call */
    }

loc_0060D5D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060D5D9
 * Original: 0x0060D5D9 - 0x0060D67D (164 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D5D9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D5D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060D5E8u); RECOMP_ABI_CALL(0x005F9A10u, sub_005F9A10); /* call 0x005F9A10 */

loc_0060D5E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0060D5F7; /* jle: less or equal (signed <=) */

loc_0060D5EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060D5F4u); RECOMP_ABI_CALL(0x005F9A10u, sub_005F9A10); /* call 0x005F9A10 */

loc_0060D5F4: ;
    POP32(esp, ecx);
    goto loc_0060D5FA;

loc_0060D5F7: ;
    PUSH32(esp, 0x40);
    POP32(esp, eax);

loc_0060D5FA: ;
    PUSH32(esp, eax);
    MEM32(esi + 0x64) = eax;
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060D60Bu); RECOMP_ABI_CALL(0x005F9A30u, sub_005F9A30); /* call 0x005F9A30 */

loc_0060D60B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x64) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0060D664; /* jbe: below or equal (unsigned <=) */

loc_0060D617: ;
    edi = esi + 0x154;

loc_0060D61D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x881478);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060D62Au); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0060D62A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D658; /* je: equal / zero */

loc_0060D631: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x881470);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060D63Eu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0060D63E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D658; /* je: equal / zero */

loc_0060D645: ;
    PUSH32(esp, 0x0060D64Au); RECOMP_ABI_CALL(0x004DC9EFu, sub_004DC9EF); /* call 0x004DC9EF */

loc_0060D64A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0060D658u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D655u); } /* indirect call */
    }

loc_0060D658: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x64) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060D61D; /* jb: below (unsigned <) */

loc_0060D664: ;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    edx = esi + -36;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060D66Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D66Du); } /* indirect call */
    }

loc_0060D66F: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x60) = MEM32(esi + 0x60) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D67D
 * Original: 0x0060D67D - 0x0060D698 (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D67D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D67D: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D68Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D689u); } /* indirect call */
    }

loc_0060D68C: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x60) = MEM32(esi + 0x60) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D698
 * Original: 0x0060D698 - 0x0060D723 (139 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D698(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D698: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060D6A1u); RECOMP_ABI_CALL(0x0060F0C0u, sub_0060F0C0); /* call 0x0060F0C0 */

loc_0060D6A1: ;
    edi = esi + 0x28;
    ecx = edi;
    MEM32(esi + 0x24) = 0x881444;
    PUSH32(esp, 0x0060D6B2u); RECOMP_ABI_CALL(0x004AD997u, sub_004AD997); /* call 0x004AD997 */

loc_0060D6B2: ;
    MEM32(esi) = 0x88149C;
    MEM32(esi + 0x24) = 0x881490;
    MEM32(edi) = 0x881480;
    PUSH32(esp, 0x0060D6CAu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060D6CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x8636D0));
    ecx = esi + 0x2C;
    PUSH32(esp, 0x0060D6D9u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_0060D6D9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3600);
    eax = esi + 0xCC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x84) = edi;
    PUSH32(esp, 0x0060D6F6u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060D6F6: ;
    PUSH32(esp, 0x20);
    eax = esi + 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060D702u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060D702: ;
    PUSH32(esp, 0x20);
    eax = esi + 0x64;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060D70Eu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060D70E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    edi = esi + 0x8C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D723
 * Original: 0x0060D723 - 0x0060D72A (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D723(void)
{

loc_0060D723: ;
    eax = MEM32(ecx + 0x88);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D72A
 * Original: 0x0060D72A - 0x0060D73E (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D72A(void)
{

loc_0060D72A: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = MEM32(eax + ecx + 0xCC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D73E
 * Original: 0x0060D73E - 0x0060D752 (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D73E(void)
{

loc_0060D73E: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = eax + ecx + 0xD0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D752
 * Original: 0x0060D752 - 0x0060D766 (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D752(void)
{

loc_0060D752: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = eax + ecx + 0xF4;
    esp += 8; return; /* ret 4 */

}
