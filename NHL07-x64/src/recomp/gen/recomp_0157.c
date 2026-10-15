/**
 * nhl_07_recomp - Recompiled code chunk 157
 * Functions: 250 (0x003042A0 - 0x00306100)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003042A0
 * Original: 0x003042A0 - 0x003042B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003042A0(void)
{

loc_003042A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003042B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003042ADu); } /* indirect call */
    }

loc_003042B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003042C0
 * Original: 0x003042C0 - 0x003042E7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003042C0(void)
{

loc_003042C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825798;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003042D6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003042D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AB3A);
    ecx = eax;
    PUSH32(esp, 0x003042E3u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_003042E3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003042F0
 * Original: 0x003042F0 - 0x003042F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003042F0(void)
{

loc_003042F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00304300
 * Original: 0x00304300 - 0x0030430E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304300(void)
{

loc_00304300: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030430Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030430Au); } /* indirect call */
    }

loc_0030430D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304320
 * Original: 0x00304320 - 0x0030432E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304320(void)
{

loc_00304320: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030432Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030432Au); } /* indirect call */
    }

loc_0030432D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304340
 * Original: 0x00304340 - 0x0030434E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304340(void)
{

loc_00304340: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030434Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030434Au); } /* indirect call */
    }

loc_0030434D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304360
 * Original: 0x00304360 - 0x0030436E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304360(void)
{

loc_00304360: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030436Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030436Au); } /* indirect call */
    }

loc_0030436D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304380
 * Original: 0x00304380 - 0x0030438E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304380(void)
{

loc_00304380: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030438Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030438Au); } /* indirect call */
    }

loc_0030438D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003043A0
 * Original: 0x003043A0 - 0x003043AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003043A0(void)
{

loc_003043A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003043ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003043AAu); } /* indirect call */
    }

loc_003043AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003043C0
 * Original: 0x003043C0 - 0x003043CE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003043C0(void)
{

loc_003043C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003043CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003043CAu); } /* indirect call */
    }

loc_003043CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003043E0
 * Original: 0x003043E0 - 0x003043EE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003043E0(void)
{

loc_003043E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003043EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003043EAu); } /* indirect call */
    }

loc_003043ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304400
 * Original: 0x00304400 - 0x0030440E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304400(void)
{

loc_00304400: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030440Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030440Au); } /* indirect call */
    }

loc_0030440D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304420
 * Original: 0x00304420 - 0x0030442E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304420(void)
{

loc_00304420: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030442Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030442Au); } /* indirect call */
    }

loc_0030442D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304440
 * Original: 0x00304440 - 0x0030444E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304440(void)
{

loc_00304440: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030444Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030444Au); } /* indirect call */
    }

loc_0030444D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304460
 * Original: 0x00304460 - 0x0030446E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304460(void)
{

loc_00304460: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030446Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030446Au); } /* indirect call */
    }

loc_0030446D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304480
 * Original: 0x00304480 - 0x0030448E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304480(void)
{

loc_00304480: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030448Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030448Au); } /* indirect call */
    }

loc_0030448D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003044A0
 * Original: 0x003044A0 - 0x003044AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003044A0(void)
{

loc_003044A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003044ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003044AAu); } /* indirect call */
    }

loc_003044AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003044C0
 * Original: 0x003044C0 - 0x003044CE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003044C0(void)
{

loc_003044C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003044CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003044CAu); } /* indirect call */
    }

loc_003044CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003044E0
 * Original: 0x003044E0 - 0x003044F7 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003044E0(void)
{

loc_003044E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003044F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003044F0u); } /* indirect call */
    }

loc_003044F3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304500
 * Original: 0x00304500 - 0x00304515 (21 bytes, 7 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304500(void)
{

loc_00304500: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8257AC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304514u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304512u); } /* indirect call */
    }

loc_00304514: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304520
 * Original: 0x00304520 - 0x00304531 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304520(void)
{

loc_00304520: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030452Du); } /* indirect call */
    }

loc_00304530: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304540
 * Original: 0x00304540 - 0x00304567 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304540(void)
{

loc_00304540: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8257C4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304556u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304556: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B3BC);
    ecx = eax;
    PUSH32(esp, 0x00304563u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00304563: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304570
 * Original: 0x00304570 - 0x00304573 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304570(void)
{

loc_00304570: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00304580
 * Original: 0x00304580 - 0x0030458E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304580(void)
{

loc_00304580: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030458Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030458Au); } /* indirect call */
    }

loc_0030458D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003045A0
 * Original: 0x003045A0 - 0x003045AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003045A0(void)
{

loc_003045A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003045ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003045AAu); } /* indirect call */
    }

loc_003045AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003045C0
 * Original: 0x003045C0 - 0x003045CE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003045C0(void)
{

loc_003045C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003045CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003045CAu); } /* indirect call */
    }

loc_003045CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003045E0
 * Original: 0x003045E0 - 0x003045EE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003045E0(void)
{

loc_003045E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003045EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003045EAu); } /* indirect call */
    }

loc_003045ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304600
 * Original: 0x00304600 - 0x0030460E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304600(void)
{

loc_00304600: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030460Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030460Au); } /* indirect call */
    }

loc_0030460D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304620
 * Original: 0x00304620 - 0x0030462E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304620(void)
{

loc_00304620: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030462Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030462Au); } /* indirect call */
    }

loc_0030462D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304640
 * Original: 0x00304640 - 0x00304655 (21 bytes, 7 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304640(void)
{

loc_00304640: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8257D8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304654u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304652u); } /* indirect call */
    }

loc_00304654: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304660
 * Original: 0x00304660 - 0x00304671 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304660(void)
{

loc_00304660: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304670u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030466Du); } /* indirect call */
    }

loc_00304670: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304680
 * Original: 0x00304680 - 0x003046A7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304680(void)
{

loc_00304680: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8257F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304696u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304696: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A3B8);
    ecx = eax;
    PUSH32(esp, 0x003046A3u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_003046A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003046B0
 * Original: 0x003046B0 - 0x003046C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003046B0(void)
{

loc_003046B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825804);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003046C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003046C2u); } /* indirect call */
    }

loc_003046C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003046D0
 * Original: 0x003046D0 - 0x003046E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003046D0(void)
{

loc_003046D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003046E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003046DDu); } /* indirect call */
    }

loc_003046E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003046F0
 * Original: 0x003046F0 - 0x00304717 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003046F0(void)
{

loc_003046F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82582C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304706u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304706: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A38A);
    ecx = eax;
    PUSH32(esp, 0x00304713u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304713: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304720
 * Original: 0x00304720 - 0x00304735 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304720(void)
{

loc_00304720: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825830);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304732u); } /* indirect call */
    }

loc_00304734: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304740
 * Original: 0x00304740 - 0x00304751 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304740(void)
{

loc_00304740: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304750u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030474Du); } /* indirect call */
    }

loc_00304750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304760
 * Original: 0x00304760 - 0x00304787 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304760(void)
{

loc_00304760: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825848;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304776u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304776: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1BE90);
    ecx = eax;
    PUSH32(esp, 0x00304783u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304783: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304790
 * Original: 0x00304790 - 0x003047A5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304790(void)
{

loc_00304790: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82584C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003047A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003047A2u); } /* indirect call */
    }

loc_003047A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003047B0
 * Original: 0x003047B0 - 0x003047C1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003047B0(void)
{

loc_003047B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003047C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003047BDu); } /* indirect call */
    }

loc_003047C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003047D0
 * Original: 0x003047D0 - 0x003047F7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003047D0(void)
{

loc_003047D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825864;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003047E6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003047E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A1DB);
    ecx = eax;
    PUSH32(esp, 0x003047F3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003047F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304800
 * Original: 0x00304800 - 0x00304815 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304800(void)
{

loc_00304800: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825868);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304812u); } /* indirect call */
    }

loc_00304814: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304820
 * Original: 0x00304820 - 0x00304831 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304820(void)
{

loc_00304820: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030482Du); } /* indirect call */
    }

loc_00304830: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304840
 * Original: 0x00304840 - 0x00304867 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304840(void)
{

loc_00304840: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82588C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304856u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304856: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A175);
    ecx = eax;
    PUSH32(esp, 0x00304863u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304863: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304870
 * Original: 0x00304870 - 0x00304885 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304870(void)
{

loc_00304870: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825890);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304884u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304882u); } /* indirect call */
    }

loc_00304884: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304890
 * Original: 0x00304890 - 0x003048A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304890(void)
{

loc_00304890: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003048A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030489Du); } /* indirect call */
    }

loc_003048A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003048B0
 * Original: 0x003048B0 - 0x003048D7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003048B0(void)
{

loc_003048B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8258AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003048C6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003048C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B6D4);
    ecx = eax;
    PUSH32(esp, 0x003048D3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003048D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003048E0
 * Original: 0x003048E0 - 0x003048F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003048E0(void)
{

loc_003048E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8258B0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003048F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003048F2u); } /* indirect call */
    }

loc_003048F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304900
 * Original: 0x00304900 - 0x00304911 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304900(void)
{

loc_00304900: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304910u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030490Du); } /* indirect call */
    }

loc_00304910: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304920
 * Original: 0x00304920 - 0x00304947 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304920(void)
{

loc_00304920: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8258D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304936u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304936: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B7CA);
    ecx = eax;
    PUSH32(esp, 0x00304943u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304943: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304950
 * Original: 0x00304950 - 0x00304965 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304950(void)
{

loc_00304950: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8258D8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304964u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304962u); } /* indirect call */
    }

loc_00304964: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304970
 * Original: 0x00304970 - 0x00304981 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304970(void)
{

loc_00304970: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304980u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030497Du); } /* indirect call */
    }

loc_00304980: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304990
 * Original: 0x00304990 - 0x003049B7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304990(void)
{

loc_00304990: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825908;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003049A6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003049A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B910);
    ecx = eax;
    PUSH32(esp, 0x003049B3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003049B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003049C0
 * Original: 0x003049C0 - 0x003049D5 (21 bytes, 7 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003049C0(void)
{

loc_003049C0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82590C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003049D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003049D2u); } /* indirect call */
    }

loc_003049D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003049E0
 * Original: 0x003049E0 - 0x003049F1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003049E0(void)
{

loc_003049E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003049F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003049EDu); } /* indirect call */
    }

loc_003049F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304A00
 * Original: 0x00304A00 - 0x00304A27 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304A00(void)
{

loc_00304A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825928;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304A16u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304A16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B568);
    ecx = eax;
    PUSH32(esp, 0x00304A23u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304A23: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304A30
 * Original: 0x00304A30 - 0x00304A45 (21 bytes, 7 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304A30(void)
{

loc_00304A30: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82592C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304A44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304A42u); } /* indirect call */
    }

loc_00304A44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304A50
 * Original: 0x00304A50 - 0x00304A61 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304A50(void)
{

loc_00304A50: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304A60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304A5Du); } /* indirect call */
    }

loc_00304A60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304A70
 * Original: 0x00304A70 - 0x00304A97 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304A70(void)
{

loc_00304A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825974;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304A86u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304A86: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B3ED);
    ecx = eax;
    PUSH32(esp, 0x00304A93u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304A93: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304AA0
 * Original: 0x00304AA0 - 0x00304AB5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304AA0(void)
{

loc_00304AA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825978);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304AB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304AB2u); } /* indirect call */
    }

loc_00304AB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304AC0
 * Original: 0x00304AC0 - 0x00304AD1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304AC0(void)
{

loc_00304AC0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304AD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304ACDu); } /* indirect call */
    }

loc_00304AD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304AE0
 * Original: 0x00304AE0 - 0x00304B07 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304AE0(void)
{

loc_00304AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8259B8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304AF6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304AF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A6EE);
    ecx = eax;
    PUSH32(esp, 0x00304B03u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304B03: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304B10
 * Original: 0x00304B10 - 0x00304B25 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304B10(void)
{

loc_00304B10: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8259BC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304B24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304B22u); } /* indirect call */
    }

loc_00304B24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304B30
 * Original: 0x00304B30 - 0x00304B41 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304B30(void)
{

loc_00304B30: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304B40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304B3Du); } /* indirect call */
    }

loc_00304B40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304B50
 * Original: 0x00304B50 - 0x00304B77 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304B50(void)
{

loc_00304B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825A00;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304B66u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304B66: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A785);
    ecx = eax;
    PUSH32(esp, 0x00304B73u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304B73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304B80
 * Original: 0x00304B80 - 0x00304B95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304B80(void)
{

loc_00304B80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825A08);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304B94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304B92u); } /* indirect call */
    }

loc_00304B94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304BA0
 * Original: 0x00304BA0 - 0x00304BB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304BA0(void)
{

loc_00304BA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304BB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304BADu); } /* indirect call */
    }

loc_00304BB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304BC0
 * Original: 0x00304BC0 - 0x00304BE7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304BC0(void)
{

loc_00304BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825A5C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304BD6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304BD6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B2BE);
    ecx = eax;
    PUSH32(esp, 0x00304BE3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304BE3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304BF0
 * Original: 0x00304BF0 - 0x00304C05 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304BF0(void)
{

loc_00304BF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825A60);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304C04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304C02u); } /* indirect call */
    }

loc_00304C04: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304C10
 * Original: 0x00304C10 - 0x00304C21 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304C10(void)
{

loc_00304C10: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304C20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304C1Du); } /* indirect call */
    }

loc_00304C20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304C30
 * Original: 0x00304C30 - 0x00304C57 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304C30(void)
{

loc_00304C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825AB8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304C46u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304C46: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B6F2);
    ecx = eax;
    PUSH32(esp, 0x00304C53u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304C53: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304C60
 * Original: 0x00304C60 - 0x00304C75 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304C60(void)
{

loc_00304C60: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825AC0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304C74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304C72u); } /* indirect call */
    }

loc_00304C74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304C80
 * Original: 0x00304C80 - 0x00304C91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304C80(void)
{

loc_00304C80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304C90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304C8Du); } /* indirect call */
    }

loc_00304C90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304CA0
 * Original: 0x00304CA0 - 0x00304CC7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304CA0(void)
{

loc_00304CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825B1C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304CB6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304CB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A266);
    ecx = eax;
    PUSH32(esp, 0x00304CC3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304CC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304CD0
 * Original: 0x00304CD0 - 0x00304CE5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304CD0(void)
{

loc_00304CD0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825B20);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304CE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304CE2u); } /* indirect call */
    }

loc_00304CE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304CF0
 * Original: 0x00304CF0 - 0x00304D01 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304CF0(void)
{

loc_00304CF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00304D00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304CFDu); } /* indirect call */
    }

loc_00304D00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304D10
 * Original: 0x00304D10 - 0x00304D37 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304D10(void)
{

loc_00304D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825B44;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304D26u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304D26: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A41F);
    ecx = eax;
    PUSH32(esp, 0x00304D33u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00304D33: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304D40
 * Original: 0x00304D40 - 0x00304D55 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304D40(void)
{

loc_00304D40: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304D54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304D52u); } /* indirect call */
    }

loc_00304D54: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304D60
 * Original: 0x00304D60 - 0x00304D82 (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304D60(void)
{

loc_00304D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00304D68u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00304D68: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825B48;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304D90
 * Original: 0x00304D90 - 0x00304D93 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304D90(void)
{

loc_00304D90: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00304DA0
 * Original: 0x00304DA0 - 0x00304DA5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00304DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304DA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304DB0
 * Original: 0x00304DB0 - 0x00304DB5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00304DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304DB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304DC0
 * Original: 0x00304DC0 - 0x00304DC5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00304DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304DC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304DD0
 * Original: 0x00304DD0 - 0x00304DD5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00304DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304DD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304DE0
 * Original: 0x00304DE0 - 0x00304DF7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304DE0(void)
{

loc_00304DE0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1800021);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304DF6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00304DF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304E00
 * Original: 0x00304E00 - 0x00304E17 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304E00(void)
{

loc_00304E00: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1800021);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304E16u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00304E16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304E20
 * Original: 0x00304E20 - 0x00304E37 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304E20(void)
{

loc_00304E20: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1800021);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304E36u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00304E36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304E40
 * Original: 0x00304E40 - 0x00304E41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304E40(void)
{

loc_00304E40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304E50
 * Original: 0x00304E50 - 0x00304E51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304E50(void)
{

loc_00304E50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304E60
 * Original: 0x00304E60 - 0x00304E61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304E60(void)
{

loc_00304E60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304E70
 * Original: 0x00304E70 - 0x00304E97 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304E70: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00304E8F; /* je: equal / zero */

loc_00304E79: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00304E87; /* je: equal / zero */

loc_00304E7C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00304E94; /* jne: not equal / not zero */

loc_00304E7F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00304E84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304E81u); } /* indirect call */
    }

loc_00304E84: ;
    esp += 12; return; /* ret 8 */

loc_00304E87: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00304E8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304E89u); } /* indirect call */
    }

loc_00304E8C: ;
    esp += 12; return; /* ret 8 */

loc_00304E8F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00304E94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304E91u); } /* indirect call */
    }

loc_00304E94: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00304EA0
 * Original: 0x00304EA0 - 0x00304EB3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304EA0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304EAD; /* je: equal / zero */

loc_00304EA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00304EAD: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00304EC0
 * Original: 0x00304EC0 - 0x00304ED5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304EC0(void)
{

loc_00304EC0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304ED4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304ED2u); } /* indirect call */
    }

loc_00304ED4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304EE0
 * Original: 0x00304EE0 - 0x00304F02 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304EE0(void)
{

loc_00304EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00304EE8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00304EE8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825B7C;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304F10
 * Original: 0x00304F10 - 0x00304F27 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304F10(void)
{

loc_00304F10: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28009F4);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304F26u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00304F26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304F30
 * Original: 0x00304F30 - 0x00304F47 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304F30(void)
{

loc_00304F30: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x28009F4);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304F46u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00304F46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304F50
 * Original: 0x00304F50 - 0x00304F67 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304F50(void)
{

loc_00304F50: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x28009F4);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304F66u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00304F66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304F70
 * Original: 0x00304F70 - 0x00304F71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304F70(void)
{

loc_00304F70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304F80
 * Original: 0x00304F80 - 0x00304F81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304F80(void)
{

loc_00304F80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304F90
 * Original: 0x00304F90 - 0x00304F91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304F90(void)
{

loc_00304F90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304FA0
 * Original: 0x00304FA0 - 0x00304FC7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304FA0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00304FBF; /* je: equal / zero */

loc_00304FA9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00304FB7; /* je: equal / zero */

loc_00304FAC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00304FC4; /* jne: not equal / not zero */

loc_00304FAF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00304FB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304FB1u); } /* indirect call */
    }

loc_00304FB4: ;
    esp += 12; return; /* ret 8 */

loc_00304FB7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00304FBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304FB9u); } /* indirect call */
    }

loc_00304FBC: ;
    esp += 12; return; /* ret 8 */

loc_00304FBF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00304FC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304FC1u); } /* indirect call */
    }

loc_00304FC4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00304FD0
 * Original: 0x00304FD0 - 0x00304FE3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304FD0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304FDD; /* je: equal / zero */

loc_00304FD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00304FDD: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00304FF0
 * Original: 0x00304FF0 - 0x00305005 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304FF0(void)
{

loc_00304FF0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305002u); } /* indirect call */
    }

loc_00305004: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305010
 * Original: 0x00305010 - 0x00305032 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305010(void)
{

loc_00305010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305018u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305018: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825BB0;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305040
 * Original: 0x00305040 - 0x00305057 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305040(void)
{

loc_00305040: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3801980);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305056u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305056: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305060
 * Original: 0x00305060 - 0x00305077 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305060(void)
{

loc_00305060: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3801980);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305076u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305076: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305080
 * Original: 0x00305080 - 0x00305097 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305080(void)
{

loc_00305080: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3801980);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305096u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305096: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003050A0
 * Original: 0x003050A0 - 0x003050A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003050A0(void)
{

loc_003050A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003050B0
 * Original: 0x003050B0 - 0x003050B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003050B0(void)
{

loc_003050B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003050C0
 * Original: 0x003050C0 - 0x003050C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003050C0(void)
{

loc_003050C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003050D0
 * Original: 0x003050D0 - 0x003050F7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003050D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003050D0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003050EF; /* je: equal / zero */

loc_003050D9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003050E7; /* je: equal / zero */

loc_003050DC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003050F4; /* jne: not equal / not zero */

loc_003050DF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003050E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003050E1u); } /* indirect call */
    }

loc_003050E4: ;
    esp += 12; return; /* ret 8 */

loc_003050E7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003050ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003050E9u); } /* indirect call */
    }

loc_003050EC: ;
    esp += 12; return; /* ret 8 */

loc_003050EF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003050F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003050F1u); } /* indirect call */
    }

loc_003050F4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305100
 * Original: 0x00305100 - 0x00305113 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305100: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030510D; /* je: equal / zero */

loc_00305108: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030510D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305120
 * Original: 0x00305120 - 0x00305135 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305120(void)
{

loc_00305120: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305132u); } /* indirect call */
    }

loc_00305134: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305140
 * Original: 0x00305140 - 0x00305162 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305140(void)
{

loc_00305140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305148u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305148: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825BE4;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305170
 * Original: 0x00305170 - 0x00305187 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305170(void)
{

loc_00305170: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4801A8D);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305186u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305186: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305190
 * Original: 0x00305190 - 0x003051A7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305190(void)
{

loc_00305190: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4801A8D);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003051A6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003051A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003051B0
 * Original: 0x003051B0 - 0x003051C7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051B0(void)
{

loc_003051B0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x4801A8D);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003051C6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003051C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003051D0
 * Original: 0x003051D0 - 0x003051D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051D0(void)
{

loc_003051D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003051E0
 * Original: 0x003051E0 - 0x003051E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051E0(void)
{

loc_003051E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003051F0
 * Original: 0x003051F0 - 0x003051F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051F0(void)
{

loc_003051F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305200
 * Original: 0x00305200 - 0x00305227 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305200: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030521F; /* je: equal / zero */

loc_00305209: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305217; /* je: equal / zero */

loc_0030520C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305224; /* jne: not equal / not zero */

loc_0030520F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305211u); } /* indirect call */
    }

loc_00305214: ;
    esp += 12; return; /* ret 8 */

loc_00305217: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030521Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305219u); } /* indirect call */
    }

loc_0030521C: ;
    esp += 12; return; /* ret 8 */

loc_0030521F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305224u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305221u); } /* indirect call */
    }

loc_00305224: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305230
 * Original: 0x00305230 - 0x00305243 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305230: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030523D; /* je: equal / zero */

loc_00305238: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030523D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305250
 * Original: 0x00305250 - 0x00305265 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305250(void)
{

loc_00305250: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305262u); } /* indirect call */
    }

loc_00305264: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305270
 * Original: 0x00305270 - 0x00305292 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305270(void)
{

loc_00305270: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305278u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305278: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825C18;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003052A0
 * Original: 0x003052A0 - 0x003052B7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003052A0(void)
{

loc_003052A0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x580055C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003052B6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003052B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003052C0
 * Original: 0x003052C0 - 0x003052D7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003052C0(void)
{

loc_003052C0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x580055C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003052D6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003052D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003052E0
 * Original: 0x003052E0 - 0x003052F7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003052E0(void)
{

loc_003052E0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x580055C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003052F6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003052F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305300
 * Original: 0x00305300 - 0x00305301 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305300(void)
{

loc_00305300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305310
 * Original: 0x00305310 - 0x00305311 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305310(void)
{

loc_00305310: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305320
 * Original: 0x00305320 - 0x00305321 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305320(void)
{

loc_00305320: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305330
 * Original: 0x00305330 - 0x00305357 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305330: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030534F; /* je: equal / zero */

loc_00305339: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305347; /* je: equal / zero */

loc_0030533C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305354; /* jne: not equal / not zero */

loc_0030533F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305344u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305341u); } /* indirect call */
    }

loc_00305344: ;
    esp += 12; return; /* ret 8 */

loc_00305347: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030534Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305349u); } /* indirect call */
    }

loc_0030534C: ;
    esp += 12; return; /* ret 8 */

loc_0030534F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305354u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305351u); } /* indirect call */
    }

loc_00305354: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305347
 * Original: 0x00305347 - 0x00305357 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305347(void)
{

loc_00305347: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030534Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305349u); } /* indirect call */
    }

loc_0030534C: ;
    esp += 12; return; /* ret 8 */

    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305360
 * Original: 0x00305360 - 0x00305373 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305360: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030536D; /* je: equal / zero */

loc_00305368: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030536D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305380
 * Original: 0x00305380 - 0x00305395 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305380(void)
{

loc_00305380: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305392u); } /* indirect call */
    }

loc_00305394: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003053A0
 * Original: 0x003053A0 - 0x003053C2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003053A0(void)
{

loc_003053A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003053A8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_003053A8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825C4C;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003053D0
 * Original: 0x003053D0 - 0x003053E7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003053D0(void)
{

loc_003053D0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6801F43);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003053E6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003053E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003053F0
 * Original: 0x003053F0 - 0x00305407 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003053F0(void)
{

loc_003053F0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6801F43);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305406u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305406: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305410
 * Original: 0x00305410 - 0x00305427 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305410(void)
{

loc_00305410: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6801F43);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305426u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305426: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305430
 * Original: 0x00305430 - 0x00305431 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305430(void)
{

loc_00305430: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305440
 * Original: 0x00305440 - 0x00305441 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305440(void)
{

loc_00305440: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305450
 * Original: 0x00305450 - 0x00305451 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305450(void)
{

loc_00305450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305460
 * Original: 0x00305460 - 0x00305487 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305460: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030547F; /* je: equal / zero */

loc_00305469: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305477; /* je: equal / zero */

loc_0030546C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305484; /* jne: not equal / not zero */

loc_0030546F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305474u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305471u); } /* indirect call */
    }

loc_00305474: ;
    esp += 12; return; /* ret 8 */

loc_00305477: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030547Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305479u); } /* indirect call */
    }

loc_0030547C: ;
    esp += 12; return; /* ret 8 */

loc_0030547F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305481u); } /* indirect call */
    }

loc_00305484: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305490
 * Original: 0x00305490 - 0x003054A3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305490: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030549D; /* je: equal / zero */

loc_00305498: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030549D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003054B0
 * Original: 0x003054B0 - 0x003054C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003054B0(void)
{

loc_003054B0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003054C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003054C2u); } /* indirect call */
    }

loc_003054C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003054D0
 * Original: 0x003054D0 - 0x003054F2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003054D0(void)
{

loc_003054D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003054D8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_003054D8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825C80;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305500
 * Original: 0x00305500 - 0x00305517 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305500(void)
{

loc_00305500: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x78002A3);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305516u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305516: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305520
 * Original: 0x00305520 - 0x00305537 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305520(void)
{

loc_00305520: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x78002A3);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305536u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305536: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305540
 * Original: 0x00305540 - 0x00305557 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305540(void)
{

loc_00305540: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x78002A3);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305556u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305556: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305560
 * Original: 0x00305560 - 0x00305561 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305560(void)
{

loc_00305560: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305570
 * Original: 0x00305570 - 0x00305571 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305570(void)
{

loc_00305570: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305580
 * Original: 0x00305580 - 0x00305581 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305580(void)
{

loc_00305580: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305590
 * Original: 0x00305590 - 0x003055B7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305590: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003055AF; /* je: equal / zero */

loc_00305599: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003055A7; /* je: equal / zero */

loc_0030559C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003055B4; /* jne: not equal / not zero */

loc_0030559F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003055A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003055A1u); } /* indirect call */
    }

loc_003055A4: ;
    esp += 12; return; /* ret 8 */

loc_003055A7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003055ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003055A9u); } /* indirect call */
    }

loc_003055AC: ;
    esp += 12; return; /* ret 8 */

loc_003055AF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003055B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003055B1u); } /* indirect call */
    }

loc_003055B4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003055C0
 * Original: 0x003055C0 - 0x003055D3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003055C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003055C0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003055CD; /* je: equal / zero */

loc_003055C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_003055CD: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003055E0
 * Original: 0x003055E0 - 0x003055F5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003055E0(void)
{

loc_003055E0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003055F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003055F2u); } /* indirect call */
    }

loc_003055F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305600
 * Original: 0x00305600 - 0x00305622 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305600(void)
{

loc_00305600: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305608u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305608: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825CB4;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305630
 * Original: 0x00305630 - 0x00305647 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305630(void)
{

loc_00305630: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x88002F7);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305646u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305646: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305650
 * Original: 0x00305650 - 0x00305667 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305650(void)
{

loc_00305650: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x88002F7);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305666u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305666: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305670
 * Original: 0x00305670 - 0x00305687 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305670(void)
{

loc_00305670: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x88002F7);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305686u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305686: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305690
 * Original: 0x00305690 - 0x00305691 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305690(void)
{

loc_00305690: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003056A0
 * Original: 0x003056A0 - 0x003056A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056A0(void)
{

loc_003056A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003056B0
 * Original: 0x003056B0 - 0x003056B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056B0(void)
{

loc_003056B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003056C0
 * Original: 0x003056C0 - 0x003056E7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003056C0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003056DF; /* je: equal / zero */

loc_003056C9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003056D7; /* je: equal / zero */

loc_003056CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003056E4; /* jne: not equal / not zero */

loc_003056CF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003056D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003056D1u); } /* indirect call */
    }

loc_003056D4: ;
    esp += 12; return; /* ret 8 */

loc_003056D7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003056DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003056D9u); } /* indirect call */
    }

loc_003056DC: ;
    esp += 12; return; /* ret 8 */

loc_003056DF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003056E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003056E1u); } /* indirect call */
    }

loc_003056E4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003056F0
 * Original: 0x003056F0 - 0x00305703 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003056F0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003056FD; /* je: equal / zero */

loc_003056F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_003056FD: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305710
 * Original: 0x00305710 - 0x00305725 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305710(void)
{

loc_00305710: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305724u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305722u); } /* indirect call */
    }

loc_00305724: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305730
 * Original: 0x00305730 - 0x00305752 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305730(void)
{

loc_00305730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305738u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305738: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825CE8;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305760
 * Original: 0x00305760 - 0x00305777 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305760(void)
{

loc_00305760: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9801FB6);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305776u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305776: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305780
 * Original: 0x00305780 - 0x00305797 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305780(void)
{

loc_00305780: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x9801FB6);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305796u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305796: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003057A0
 * Original: 0x003057A0 - 0x003057B7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003057A0(void)
{

loc_003057A0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x9801FB6);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003057B6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003057B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003057C0
 * Original: 0x003057C0 - 0x003057C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003057C0(void)
{

loc_003057C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003057D0
 * Original: 0x003057D0 - 0x003057D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003057D0(void)
{

loc_003057D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003057E0
 * Original: 0x003057E0 - 0x003057E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003057E0(void)
{

loc_003057E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003057F0
 * Original: 0x003057F0 - 0x00305817 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003057F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003057F0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030580F; /* je: equal / zero */

loc_003057F9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305807; /* je: equal / zero */

loc_003057FC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305814; /* jne: not equal / not zero */

loc_003057FF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305804u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305801u); } /* indirect call */
    }

loc_00305804: ;
    esp += 12; return; /* ret 8 */

loc_00305807: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030580Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305809u); } /* indirect call */
    }

loc_0030580C: ;
    esp += 12; return; /* ret 8 */

loc_0030580F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305811u); } /* indirect call */
    }

loc_00305814: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305820
 * Original: 0x00305820 - 0x00305833 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305820: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030582D; /* je: equal / zero */

loc_00305828: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030582D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305840
 * Original: 0x00305840 - 0x00305855 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305840(void)
{

loc_00305840: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305852u); } /* indirect call */
    }

loc_00305854: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305860
 * Original: 0x00305860 - 0x00305882 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305860(void)
{

loc_00305860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305868u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305868: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825D1C;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305890
 * Original: 0x00305890 - 0x003058A7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305890(void)
{

loc_00305890: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA80131F);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003058A6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003058A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003058B0
 * Original: 0x003058B0 - 0x003058C7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058B0(void)
{

loc_003058B0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xA80131F);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003058C6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003058C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003058D0
 * Original: 0x003058D0 - 0x003058E7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058D0(void)
{

loc_003058D0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0xA80131F);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003058E6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003058E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003058F0
 * Original: 0x003058F0 - 0x003058F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058F0(void)
{

loc_003058F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305900
 * Original: 0x00305900 - 0x00305901 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305900(void)
{

loc_00305900: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305910
 * Original: 0x00305910 - 0x00305911 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305910(void)
{

loc_00305910: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305920
 * Original: 0x00305920 - 0x00305947 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305920: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030593F; /* je: equal / zero */

loc_00305929: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305937; /* je: equal / zero */

loc_0030592C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305944; /* jne: not equal / not zero */

loc_0030592F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305934u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305931u); } /* indirect call */
    }

loc_00305934: ;
    esp += 12; return; /* ret 8 */

loc_00305937: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030593Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305939u); } /* indirect call */
    }

loc_0030593C: ;
    esp += 12; return; /* ret 8 */

loc_0030593F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305941u); } /* indirect call */
    }

loc_00305944: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305950
 * Original: 0x00305950 - 0x00305963 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305950: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030595D; /* je: equal / zero */

loc_00305958: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030595D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305970
 * Original: 0x00305970 - 0x00305985 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305970(void)
{

loc_00305970: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305984u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305982u); } /* indirect call */
    }

loc_00305984: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305990
 * Original: 0x00305990 - 0x003059B2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305990(void)
{

loc_00305990: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305998u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305998: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825D50;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003059C0
 * Original: 0x003059C0 - 0x003059D7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003059C0(void)
{

loc_003059C0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB80009B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003059D6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003059D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003059E0
 * Original: 0x003059E0 - 0x003059F7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003059E0(void)
{

loc_003059E0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB80009B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003059F6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003059F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305A00
 * Original: 0x00305A00 - 0x00305A17 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A00(void)
{

loc_00305A00: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0xB80009B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305A16u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305A16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305A20
 * Original: 0x00305A20 - 0x00305A21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A20(void)
{

loc_00305A20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305A30
 * Original: 0x00305A30 - 0x00305A31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A30(void)
{

loc_00305A30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305A40
 * Original: 0x00305A40 - 0x00305A41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A40(void)
{

loc_00305A40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305A50
 * Original: 0x00305A50 - 0x00305A77 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305A50: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00305A6F; /* je: equal / zero */

loc_00305A59: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305A67; /* je: equal / zero */

loc_00305A5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305A74; /* jne: not equal / not zero */

loc_00305A5F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305A61u); } /* indirect call */
    }

loc_00305A64: ;
    esp += 12; return; /* ret 8 */

loc_00305A67: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00305A6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305A69u); } /* indirect call */
    }

loc_00305A6C: ;
    esp += 12; return; /* ret 8 */

loc_00305A6F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305A74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305A71u); } /* indirect call */
    }

loc_00305A74: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305A80
 * Original: 0x00305A80 - 0x00305A93 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305A80: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305A8D; /* je: equal / zero */

loc_00305A88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00305A8D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305AA0
 * Original: 0x00305AA0 - 0x00305AB5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305AA0(void)
{

loc_00305AA0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305AB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305AB2u); } /* indirect call */
    }

loc_00305AB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305AC0
 * Original: 0x00305AC0 - 0x00305AE2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305AC0(void)
{

loc_00305AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305AC8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305AC8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825D84;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305AF0
 * Original: 0x00305AF0 - 0x00305B07 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305AF0(void)
{

loc_00305AF0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC800A50);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305B06u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305B06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305B10
 * Original: 0x00305B10 - 0x00305B27 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B10(void)
{

loc_00305B10: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC800A50);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305B26u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305B26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305B30
 * Original: 0x00305B30 - 0x00305B47 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B30(void)
{

loc_00305B30: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC800A50);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305B46u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305B46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305B50
 * Original: 0x00305B50 - 0x00305B51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B50(void)
{

loc_00305B50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305B60
 * Original: 0x00305B60 - 0x00305B61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B60(void)
{

loc_00305B60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305B70
 * Original: 0x00305B70 - 0x00305B71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B70(void)
{

loc_00305B70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305B80
 * Original: 0x00305B80 - 0x00305BA7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305B80: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00305B9F; /* je: equal / zero */

loc_00305B89: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305B97; /* je: equal / zero */

loc_00305B8C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305BA4; /* jne: not equal / not zero */

loc_00305B8F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305B94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305B91u); } /* indirect call */
    }

loc_00305B94: ;
    esp += 12; return; /* ret 8 */

loc_00305B97: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00305B9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305B99u); } /* indirect call */
    }

loc_00305B9C: ;
    esp += 12; return; /* ret 8 */

loc_00305B9F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305BA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305BA1u); } /* indirect call */
    }

loc_00305BA4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305BB0
 * Original: 0x00305BB0 - 0x00305BC3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305BB0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305BBD; /* je: equal / zero */

loc_00305BB8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00305BBD: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305BD0
 * Original: 0x00305BD0 - 0x00305BE5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305BD0(void)
{

loc_00305BD0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305BE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305BE2u); } /* indirect call */
    }

loc_00305BE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305BF0
 * Original: 0x00305BF0 - 0x00305C12 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305BF0(void)
{

loc_00305BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305BF8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305BF8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825DB8;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305C20
 * Original: 0x00305C20 - 0x00305C37 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305C20(void)
{

loc_00305C20: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD80161F);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305C36u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305C36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305C40
 * Original: 0x00305C40 - 0x00305C57 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305C40(void)
{

loc_00305C40: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xD80161F);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305C56u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305C56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305C60
 * Original: 0x00305C60 - 0x00305C77 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305C60(void)
{

loc_00305C60: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0xD80161F);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305C76u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305C76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305C80
 * Original: 0x00305C80 - 0x00305C81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305C80(void)
{

loc_00305C80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305C90
 * Original: 0x00305C90 - 0x00305C91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305C90(void)
{

loc_00305C90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305CA0
 * Original: 0x00305CA0 - 0x00305CA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305CA0(void)
{

loc_00305CA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305CB0
 * Original: 0x00305CB0 - 0x00305CD7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305CB0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00305CCF; /* je: equal / zero */

loc_00305CB9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305CC7; /* je: equal / zero */

loc_00305CBC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305CD4; /* jne: not equal / not zero */

loc_00305CBF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305CC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305CC1u); } /* indirect call */
    }

loc_00305CC4: ;
    esp += 12; return; /* ret 8 */

loc_00305CC7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00305CCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305CC9u); } /* indirect call */
    }

loc_00305CCC: ;
    esp += 12; return; /* ret 8 */

loc_00305CCF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305CD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305CD1u); } /* indirect call */
    }

loc_00305CD4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305CE0
 * Original: 0x00305CE0 - 0x00305CF3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305CE0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305CED; /* je: equal / zero */

loc_00305CE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00305CED: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305D00
 * Original: 0x00305D00 - 0x00305D15 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305D00(void)
{

loc_00305D00: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305D14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305D12u); } /* indirect call */
    }

loc_00305D14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305D20
 * Original: 0x00305D20 - 0x00305D42 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305D20(void)
{

loc_00305D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305D28u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305D28: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825DEC;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305D50
 * Original: 0x00305D50 - 0x00305D67 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305D50(void)
{

loc_00305D50: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE80150E);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305D66u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305D66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305D70
 * Original: 0x00305D70 - 0x00305D87 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305D70(void)
{

loc_00305D70: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xE80150E);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305D86u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305D86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305D90
 * Original: 0x00305D90 - 0x00305DA7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305D90(void)
{

loc_00305D90: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0xE80150E);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305DA6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305DA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305DB0
 * Original: 0x00305DB0 - 0x00305DB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305DB0(void)
{

loc_00305DB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305DC0
 * Original: 0x00305DC0 - 0x00305DC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305DC0(void)
{

loc_00305DC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305DD0
 * Original: 0x00305DD0 - 0x00305DD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305DD0(void)
{

loc_00305DD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305DE0
 * Original: 0x00305DE0 - 0x00305E07 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305DE0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00305DFF; /* je: equal / zero */

loc_00305DE9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305DF7; /* je: equal / zero */

loc_00305DEC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305E04; /* jne: not equal / not zero */

loc_00305DEF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305DF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305DF1u); } /* indirect call */
    }

loc_00305DF4: ;
    esp += 12; return; /* ret 8 */

loc_00305DF7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00305DFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305DF9u); } /* indirect call */
    }

loc_00305DFC: ;
    esp += 12; return; /* ret 8 */

loc_00305DFF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305E04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305E01u); } /* indirect call */
    }

loc_00305E04: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305E10
 * Original: 0x00305E10 - 0x00305E23 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305E10: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305E1D; /* je: equal / zero */

loc_00305E18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00305E1D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305E30
 * Original: 0x00305E30 - 0x00305E45 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305E30(void)
{

loc_00305E30: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305E42u); } /* indirect call */
    }

loc_00305E44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305E50
 * Original: 0x00305E50 - 0x00305E72 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305E50(void)
{

loc_00305E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305E58u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305E58: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825E20;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305E80
 * Original: 0x00305E80 - 0x00305E97 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305E80(void)
{

loc_00305E80: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF801AC4);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305E96u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305E96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305EA0
 * Original: 0x00305EA0 - 0x00305EB7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305EA0(void)
{

loc_00305EA0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xF801AC4);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305EB6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305EB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305EC0
 * Original: 0x00305EC0 - 0x00305ED7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305EC0(void)
{

loc_00305EC0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0xF801AC4);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305ED6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305ED6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305EE0
 * Original: 0x00305EE0 - 0x00305EE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305EE0(void)
{

loc_00305EE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305EF0
 * Original: 0x00305EF0 - 0x00305EF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305EF0(void)
{

loc_00305EF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F00
 * Original: 0x00305F00 - 0x00305F01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F00(void)
{

loc_00305F00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F10
 * Original: 0x00305F10 - 0x00305F37 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305F10: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00305F2F; /* je: equal / zero */

loc_00305F19: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00305F27; /* je: equal / zero */

loc_00305F1C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305F34; /* jne: not equal / not zero */

loc_00305F1F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00305F24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305F21u); } /* indirect call */
    }

loc_00305F24: ;
    esp += 12; return; /* ret 8 */

loc_00305F27: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00305F2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305F29u); } /* indirect call */
    }

loc_00305F2C: ;
    esp += 12; return; /* ret 8 */

loc_00305F2F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00305F34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305F31u); } /* indirect call */
    }

loc_00305F34: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305F40
 * Original: 0x00305F40 - 0x00305F53 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305F40: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305F4D; /* je: equal / zero */

loc_00305F48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00305F4D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305F46
 * Original: 0x00305F46 - 0x00305F53 (13 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305F46: ;
    if (_flags /* je: equal / zero */) goto loc_00305F4D;

loc_00305F48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00305F4D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00305F60
 * Original: 0x00305F60 - 0x00305F75 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F60(void)
{

loc_00305F60: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305F74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305F72u); } /* indirect call */
    }

loc_00305F74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F6C
 * Original: 0x00305F6C - 0x00305F75 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F6C(void)
{

loc_00305F6C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00305F74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00305F72u); } /* indirect call */
    }

loc_00305F74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F74
 * Original: 0x00305F74 - 0x00305F75 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F74(void)
{

loc_00305F74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F80
 * Original: 0x00305F80 - 0x00305FA2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F80(void)
{

loc_00305F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00305F88u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00305F88: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825E54;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305FB0
 * Original: 0x00305FB0 - 0x00305FC7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305FB0(void)
{

loc_00305FB0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1080050B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305FC6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305FC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305FD0
 * Original: 0x00305FD0 - 0x00305FE7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305FD0(void)
{

loc_00305FD0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1080050B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305FE6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00305FE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305FF0
 * Original: 0x00305FF0 - 0x00306007 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305FF0(void)
{

loc_00305FF0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1080050B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306006u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306006: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306010
 * Original: 0x00306010 - 0x00306011 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306010(void)
{

loc_00306010: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306020
 * Original: 0x00306020 - 0x00306021 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306020(void)
{

loc_00306020: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306030
 * Original: 0x00306030 - 0x00306031 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306030(void)
{

loc_00306030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306040
 * Original: 0x00306040 - 0x00306067 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306040: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030605F; /* je: equal / zero */

loc_00306049: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00306057; /* je: equal / zero */

loc_0030604C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00306064; /* jne: not equal / not zero */

loc_0030604F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00306054u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306051u); } /* indirect call */
    }

loc_00306054: ;
    esp += 12; return; /* ret 8 */

loc_00306057: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030605Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306059u); } /* indirect call */
    }

loc_0030605C: ;
    esp += 12; return; /* ret 8 */

loc_0030605F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00306064u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306061u); } /* indirect call */
    }

loc_00306064: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306070
 * Original: 0x00306070 - 0x00306083 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306070: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030607D; /* je: equal / zero */

loc_00306078: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030607D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306090
 * Original: 0x00306090 - 0x003060A5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306090(void)
{

loc_00306090: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003060A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003060A2u); } /* indirect call */
    }

loc_003060A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003060B0
 * Original: 0x003060B0 - 0x003060D2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003060B0(void)
{

loc_003060B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003060B8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_003060B8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825E88;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003060E0
 * Original: 0x003060E0 - 0x003060F7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003060E0(void)
{

loc_003060E0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1180088C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003060F6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003060F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306100
 * Original: 0x00306100 - 0x00306117 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306100(void)
{

loc_00306100: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1180088C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306116u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306116: ;
    esp += 4; return; /* ret */

}
