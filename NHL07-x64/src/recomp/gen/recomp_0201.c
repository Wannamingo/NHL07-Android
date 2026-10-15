/**
 * nhl_07_recomp - Recompiled code chunk 201
 * Functions: 250 (0x004406C0 - 0x004486D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004406C0
 * Original: 0x004406C0 - 0x004406EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004406C0(void)
{

loc_004406C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004406D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004406D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x004406E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004406E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440700
 * Original: 0x00440700 - 0x00440715 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440700(void)
{

loc_00440700: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440714u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440712u); } /* indirect call */
    }

loc_00440714: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440720
 * Original: 0x00440720 - 0x00440731 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440720(void)
{

loc_00440720: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440730u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044072Du); } /* indirect call */
    }

loc_00440730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440740
 * Original: 0x00440740 - 0x0044076A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440740(void)
{

loc_00440740: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440759u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440759: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00440766u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440766: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440780
 * Original: 0x00440780 - 0x00440795 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440780(void)
{

loc_00440780: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440794u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440792u); } /* indirect call */
    }

loc_00440794: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004407A0
 * Original: 0x004407A0 - 0x004407B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004407A0(void)
{

loc_004407A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004407B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004407ADu); } /* indirect call */
    }

loc_004407B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004407C0
 * Original: 0x004407C0 - 0x004407EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004407C0(void)
{

loc_004407C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004407D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004407D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x004407E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004407E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440800
 * Original: 0x00440800 - 0x00440815 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440800(void)
{

loc_00440800: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440812u); } /* indirect call */
    }

loc_00440814: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440820
 * Original: 0x00440820 - 0x00440831 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440820(void)
{

loc_00440820: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044082Du); } /* indirect call */
    }

loc_00440830: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440840
 * Original: 0x00440840 - 0x0044086A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440840(void)
{

loc_00440840: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440859u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440859: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00440866u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440866: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440880
 * Original: 0x00440880 - 0x00440895 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440880(void)
{

loc_00440880: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440892u); } /* indirect call */
    }

loc_00440894: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004408A0
 * Original: 0x004408A0 - 0x004408B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004408A0(void)
{

loc_004408A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004408B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004408ADu); } /* indirect call */
    }

loc_004408B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004408C0
 * Original: 0x004408C0 - 0x004408EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004408C0(void)
{

loc_004408C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004408D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004408D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x004408E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004408E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440900
 * Original: 0x00440900 - 0x00440915 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440900(void)
{

loc_00440900: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440912u); } /* indirect call */
    }

loc_00440914: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440920
 * Original: 0x00440920 - 0x00440931 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440920(void)
{

loc_00440920: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044092Du); } /* indirect call */
    }

loc_00440930: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440940
 * Original: 0x00440940 - 0x0044096A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440940(void)
{

loc_00440940: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440959u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440959: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00440966u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440966: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440980
 * Original: 0x00440980 - 0x00440995 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440980(void)
{

loc_00440980: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440992u); } /* indirect call */
    }

loc_00440994: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004409A0
 * Original: 0x004409A0 - 0x004409B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004409A0(void)
{

loc_004409A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004409B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004409ADu); } /* indirect call */
    }

loc_004409B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004409C0
 * Original: 0x004409C0 - 0x004409EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004409C0(void)
{

loc_004409C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004409D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004409D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x004409E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004409E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440A00
 * Original: 0x00440A00 - 0x00440A15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440A00(void)
{

loc_00440A00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440A14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440A12u); } /* indirect call */
    }

loc_00440A14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440A20
 * Original: 0x00440A20 - 0x00440A31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440A20(void)
{

loc_00440A20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440A30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440A2Du); } /* indirect call */
    }

loc_00440A30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440A40
 * Original: 0x00440A40 - 0x00440A6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440A40(void)
{

loc_00440A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440A59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440A59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00440A66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440A66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440A80
 * Original: 0x00440A80 - 0x00440A95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440A80(void)
{

loc_00440A80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440A92u); } /* indirect call */
    }

loc_00440A94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440AA0
 * Original: 0x00440AA0 - 0x00440AB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440AA0(void)
{

loc_00440AA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440AB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440AADu); } /* indirect call */
    }

loc_00440AB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440AC0
 * Original: 0x00440AC0 - 0x00440AEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440AC0(void)
{

loc_00440AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00440AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440AE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440B00
 * Original: 0x00440B00 - 0x00440B15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440B00(void)
{

loc_00440B00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440B14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440B12u); } /* indirect call */
    }

loc_00440B14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440B20
 * Original: 0x00440B20 - 0x00440B31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440B20(void)
{

loc_00440B20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440B30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440B2Du); } /* indirect call */
    }

loc_00440B30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440B40
 * Original: 0x00440B40 - 0x00440B6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440B40(void)
{

loc_00440B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440B59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440B59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00440B66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440B66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440B80
 * Original: 0x00440B80 - 0x00440B95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440B80(void)
{

loc_00440B80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440B94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440B92u); } /* indirect call */
    }

loc_00440B94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440BA0
 * Original: 0x00440BA0 - 0x00440BB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440BA0(void)
{

loc_00440BA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440BB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440BADu); } /* indirect call */
    }

loc_00440BB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440BC0
 * Original: 0x00440BC0 - 0x00440BEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440BC0(void)
{

loc_00440BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440BD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440BD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00440BE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440BE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440C00
 * Original: 0x00440C00 - 0x00440C15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440C00(void)
{

loc_00440C00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440C14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440C12u); } /* indirect call */
    }

loc_00440C14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440C20
 * Original: 0x00440C20 - 0x00440C31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440C20(void)
{

loc_00440C20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440C2Du); } /* indirect call */
    }

loc_00440C30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440C40
 * Original: 0x00440C40 - 0x00440C6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440C40(void)
{

loc_00440C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440C59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440C59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00440C66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440C66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440C80
 * Original: 0x00440C80 - 0x00440C95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440C80(void)
{

loc_00440C80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440C94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440C92u); } /* indirect call */
    }

loc_00440C94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440CA0
 * Original: 0x00440CA0 - 0x00440CB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440CA0(void)
{

loc_00440CA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440CB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440CADu); } /* indirect call */
    }

loc_00440CB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440CC0
 * Original: 0x00440CC0 - 0x00440CEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440CC0(void)
{

loc_00440CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440CD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440CD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00440CE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440CE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440D00
 * Original: 0x00440D00 - 0x00440D15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440D00(void)
{

loc_00440D00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440D14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440D12u); } /* indirect call */
    }

loc_00440D14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440D20
 * Original: 0x00440D20 - 0x00440D31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440D20(void)
{

loc_00440D20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440D30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440D2Du); } /* indirect call */
    }

loc_00440D30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440D40
 * Original: 0x00440D40 - 0x00440D6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440D40(void)
{

loc_00440D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440D59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440D59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00440D66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440D66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440D80
 * Original: 0x00440D80 - 0x00440D95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440D80(void)
{

loc_00440D80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440D94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440D92u); } /* indirect call */
    }

loc_00440D94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440DA0
 * Original: 0x00440DA0 - 0x00440DB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440DA0(void)
{

loc_00440DA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440DB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440DADu); } /* indirect call */
    }

loc_00440DB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440DC0
 * Original: 0x00440DC0 - 0x00440DEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440DC0(void)
{

loc_00440DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440DD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440DD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00440DE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440DE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440E00
 * Original: 0x00440E00 - 0x00441335 (1333 bytes, 371 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440E00(void)
{

loc_00440E00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A110);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440E12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E0Fu); } /* indirect call */
    }

loc_00440E12: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0F0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440E24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E21u); } /* indirect call */
    }

loc_00440E24: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440E36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E33u); } /* indirect call */
    }

loc_00440E36: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440E48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E45u); } /* indirect call */
    }

loc_00440E48: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440E5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E57u); } /* indirect call */
    }

loc_00440E5A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A180);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440E6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E69u); } /* indirect call */
    }

loc_00440E6C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A17C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440E7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E7Bu); } /* indirect call */
    }

loc_00440E7E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A124);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440E90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E8Du); } /* indirect call */
    }

loc_00440E90: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440EA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440E9Fu); } /* indirect call */
    }

loc_00440EA2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1D8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440EB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440EB1u); } /* indirect call */
    }

loc_00440EB4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0C8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440EC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440EC3u); } /* indirect call */
    }

loc_00440EC6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0D0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440ED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440ED5u); } /* indirect call */
    }

loc_00440ED8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A114);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440EEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440EE7u); } /* indirect call */
    }

loc_00440EEA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A168);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440EFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440EF9u); } /* indirect call */
    }

loc_00440EFC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A120);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F0Bu); } /* indirect call */
    }

loc_00440F0E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A194);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F1Du); } /* indirect call */
    }

loc_00440F20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F2Fu); } /* indirect call */
    }

loc_00440F32: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1C0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F41u); } /* indirect call */
    }

loc_00440F44: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A134);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F53u); } /* indirect call */
    }

loc_00440F56: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A154);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F65u); } /* indirect call */
    }

loc_00440F68: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F77u); } /* indirect call */
    }

loc_00440F7A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A104);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F89u); } /* indirect call */
    }

loc_00440F8C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440F9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440F9Bu); } /* indirect call */
    }

loc_00440F9E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A128);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440FB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440FADu); } /* indirect call */
    }

loc_00440FB0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1C4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440FC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440FBFu); } /* indirect call */
    }

loc_00440FC2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A130);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440FD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440FD1u); } /* indirect call */
    }

loc_00440FD4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1E0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440FE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440FE3u); } /* indirect call */
    }

loc_00440FE6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1BC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440FF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440FF5u); } /* indirect call */
    }

loc_00440FF8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A170);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044100Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441007u); } /* indirect call */
    }

loc_0044100A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0C4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044101Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441019u); } /* indirect call */
    }

loc_0044101C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A160);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044102Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044102Bu); } /* indirect call */
    }

loc_0044102E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441040u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044103Du); } /* indirect call */
    }

loc_00441040: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    edx = MEM32(0x90A1E4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441052u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044104Fu); } /* indirect call */
    }

loc_00441052: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A18C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441064u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441061u); } /* indirect call */
    }

loc_00441064: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0EC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441073u); } /* indirect call */
    }

loc_00441076: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0C0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441085u); } /* indirect call */
    }

loc_00441088: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A19C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044109Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441097u); } /* indirect call */
    }

loc_0044109A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A188);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004410ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004410A9u); } /* indirect call */
    }

loc_004410AC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A16C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004410BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004410BBu); } /* indirect call */
    }

loc_004410BE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A140);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004410D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004410CDu); } /* indirect call */
    }

loc_004410D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A158);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004410E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004410DFu); } /* indirect call */
    }

loc_004410E2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0DC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004410F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004410F1u); } /* indirect call */
    }

loc_004410F4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0E0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441106u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441103u); } /* indirect call */
    }

loc_00441106: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A14C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441118u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441115u); } /* indirect call */
    }

loc_00441118: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A148);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044112Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441127u); } /* indirect call */
    }

loc_0044112A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A13C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044113Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441139u); } /* indirect call */
    }

loc_0044113C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A198);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044114Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044114Bu); } /* indirect call */
    }

loc_0044114E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1DC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441160u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044115Du); } /* indirect call */
    }

loc_00441160: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    edx = MEM32(0x90A108);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441172u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044116Fu); } /* indirect call */
    }

loc_00441172: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1B4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441181u); } /* indirect call */
    }

loc_00441184: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A184);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441196u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441193u); } /* indirect call */
    }

loc_00441196: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A178);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004411A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004411A5u); } /* indirect call */
    }

loc_004411A8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1A8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004411BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004411B7u); } /* indirect call */
    }

loc_004411BA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A10C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004411CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004411C9u); } /* indirect call */
    }

loc_004411CC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1CC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004411DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004411DBu); } /* indirect call */
    }

loc_004411DE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A190);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004411F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004411EDu); } /* indirect call */
    }

loc_004411F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0FC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441202u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004411FFu); } /* indirect call */
    }

loc_00441202: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A144);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441211u); } /* indirect call */
    }

loc_00441214: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1B0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441223u); } /* indirect call */
    }

loc_00441226: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A174);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441238u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441235u); } /* indirect call */
    }

loc_00441238: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A150);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044124Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441247u); } /* indirect call */
    }

loc_0044124A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A12C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044125Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441259u); } /* indirect call */
    }

loc_0044125C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0D8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0044126Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044126Bu); } /* indirect call */
    }

loc_0044126E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0CC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441280u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044127Du); } /* indirect call */
    }

loc_00441280: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A15C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441292u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044128Fu); } /* indirect call */
    }

loc_00441292: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A118);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004412A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004412A1u); } /* indirect call */
    }

loc_004412A4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1C8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004412B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004412B3u); } /* indirect call */
    }

loc_004412B6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A138);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004412C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004412C5u); } /* indirect call */
    }

loc_004412C8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A164);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004412DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004412D7u); } /* indirect call */
    }

loc_004412DA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004412ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004412E9u); } /* indirect call */
    }

loc_004412EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0E4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004412FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004412FBu); } /* indirect call */
    }

loc_004412FE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1D0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441310u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044130Du); } /* indirect call */
    }

loc_00441310: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A100);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441322u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044131Fu); } /* indirect call */
    }

loc_00441322: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A1A4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00441334u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00441331u); } /* indirect call */
    }

loc_00441334: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00441490
 * Original: 0x00441490 - 0x004414BA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441490(void)
{

loc_00441490: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83BB64;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004414A9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004414A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C423B);
    ecx = eax;
    PUSH32(esp, 0x004414B6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004414B6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004414D0
 * Original: 0x004414D0 - 0x004414E1 (17 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004414D0(void)
{

loc_004414D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004414F0
 * Original: 0x004414F0 - 0x00441502 (18 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004414F0(void)
{

loc_004414F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441510
 * Original: 0x00441510 - 0x00441522 (18 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441510(void)
{

loc_00441510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441530
 * Original: 0x00441530 - 0x00441553 (35 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441530(void)
{

loc_00441530: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = esi;
    edx = MEM32(edx);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441560
 * Original: 0x00441560 - 0x0044158A (42 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441560(void)
{

loc_00441560: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004415A0
 * Original: 0x004415A0 - 0x004415CB (43 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004415A0(void)
{

loc_004415A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004415E0
 * Original: 0x004415E0 - 0x0044160B (43 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004415E0(void)
{

loc_004415E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441620
 * Original: 0x00441620 - 0x00441669 (73 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00441620: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 1;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0044165F; /* jp: parity */

loc_00441641: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0044165F; /* jp: parity */

loc_00441650: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00441665; /* jnp: not parity */

loc_0044165F: ;
    MEM32(esi) = 0;

loc_00441665: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441680
 * Original: 0x00441680 - 0x0044169E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00441680: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001EC0A(); return; /* tail jmp 0x0001EC0A */

}

/**
 * sub_004416B0
 * Original: 0x004416B0 - 0x004416E9 (57 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004416B0(void)
{

loc_004416B0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441700
 * Original: 0x00441700 - 0x0044171E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00441700: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001FC8B(); return; /* tail jmp 0x0001FC8B */

}

/**
 * sub_00441730
 * Original: 0x00441730 - 0x00441769 (57 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441730(void)
{

loc_00441730: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441780
 * Original: 0x00441780 - 0x004417BB (59 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441780(void)
{

loc_00441780: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(esp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004417D0
 * Original: 0x004417D0 - 0x004417E4 (20 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004417D0(void)
{

loc_004417D0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004417E1u); RECOMP_ABI_CALL(0x000211BCu, sub_000211BC); /* call 0x000211BC */

loc_004417E1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004417F0
 * Original: 0x004417F0 - 0x0044182F (63 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004417F0(void)
{

loc_004417F0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x90A1F0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x90A1F4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x90A1F8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00441840
 * Original: 0x00441840 - 0x00441854 (20 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441840(void)
{

loc_00441840: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00441851u); RECOMP_ABI_CALL(0x0002BC66u, sub_0002BC66); /* call 0x0002BC66 */

loc_00441851: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441860
 * Original: 0x00441860 - 0x004418A8 (72 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441860(void)
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

loc_00441860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0044186Bu); RECOMP_ABI_CALL(0x00017F1Du, sub_00017F1D); /* call 0x00017F1D */

loc_0044186B: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004418C0
 * Original: 0x004418C0 - 0x004418EB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004418C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004418C0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00441900
 * Original: 0x00441900 - 0x00441938 (56 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441900(void)
{

loc_00441900: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441950
 * Original: 0x00441950 - 0x00441982 (50 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00441950: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00441968u); RECOMP_ABI_CALL(0x0001CAC2u, sub_0001CAC2); /* call 0x0001CAC2 */

loc_00441968: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441990
 * Original: 0x00441990 - 0x004419EF (95 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441990(void)
{

loc_00441990: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(esp + 4);
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00441A10
 * Original: 0x00441A10 - 0x00441A2E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00441A10: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000204DD(); return; /* tail jmp 0x000204DD */

}

/**
 * sub_00441A40
 * Original: 0x00441A40 - 0x00441A8B (75 bytes, 25 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00441A40(void)
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

loc_00441A40: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    PUSH32(esp, eax);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00441A67u); RECOMP_ABI_CALL(0x0002F811u, sub_0002F811); /* call 0x0002F811 */

loc_00441A67: ;
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00441A71u); RECOMP_ABI_CALL(0x0002F811u, sub_0002F811); /* call 0x0002F811 */

loc_00441A71: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) / fp_top()); /* fdivr dword ptr [esp + 0xc] */
    PUSH32(esp, 0x00441A81u); RECOMP_ABI_CALL(0x005CDCB4u, sub_005CDCB4); /* call 0x005CDCB4 */

loc_00441A81: ;
    eax = MEM32(esp + 0x10);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00441AA0
 * Original: 0x00441AA0 - 0x00441AC5 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00441AA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00441AA0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00441AD0
 * Original: 0x00441AD0 - 0x00441AE8 (24 bytes, 8 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00441AD0(void)
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

loc_00441AD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00441ADCu); RECOMP_ABI_CALL(0x0002F811u, sub_0002F811); /* call 0x0002F811 */

loc_00441ADC: ;
    edx = MEM32(esp + 0xC);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00441AF0
 * Original: 0x00441AF0 - 0x00441B0E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00441AF0: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014F48(); return; /* tail jmp 0x00014F48 */

}

/**
 * sub_00441B20
 * Original: 0x00441B20 - 0x00441B8E (110 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00441B20: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00441B68u); RECOMP_ABI_CALL(0x0001D963u, sub_0001D963); /* call 0x0001D963 */

loc_00441B68: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441BB0
 * Original: 0x00441BB0 - 0x00441C9B (235 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441BB0(void)
{

loc_00441BB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx); /* mulss */
    eax = MEM32(esp + 4);
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00441CE0
 * Original: 0x00441CE0 - 0x00441D12 (50 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00441CE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00441CF8u); RECOMP_ABI_CALL(0x00013D8Cu, sub_00013D8C); /* call 0x00013D8C */

loc_00441CF8: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441D20
 * Original: 0x00441D20 - 0x00441E78 (344 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00441D20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 8) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xC); /* mulss */
    eax = MEM32(esp + 0x1C);
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * MEMF(eax); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 8); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * MEMF(eax + 8); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 4); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0xC); /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * MEMF(eax + 4); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00441ED0
 * Original: 0x00441ED0 - 0x00441EE7 (23 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441ED0(void)
{

loc_00441ED0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441EF0
 * Original: 0x00441EF0 - 0x00441F0C (28 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441EF0(void)
{

loc_00441EF0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00441F09u); RECOMP_ABI_CALL(0x00013170u, sub_00013170); /* call 0x00013170 */

loc_00441F09: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441F20
 * Original: 0x00441F20 - 0x00441F91 (113 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441F20(void)
{

loc_00441F20: ;
    eax = MEM32(esp + 4);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm6 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00441FB0
 * Original: 0x00441FB0 - 0x00441FB3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441FB0(void)
{

loc_00441FB0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00441FC0
 * Original: 0x00441FC0 - 0x00441FF4 (52 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00441FC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00441FD4u); RECOMP_ABI_CALL(0x000223CDu, sub_000223CD); /* call 0x000223CD */

loc_00441FD4: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x20);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442010
 * Original: 0x00442010 - 0x00442013 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442010(void)
{

loc_00442010: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442020
 * Original: 0x00442020 - 0x00442023 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442020(void)
{

loc_00442020: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442030
 * Original: 0x00442030 - 0x00442033 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442030(void)
{

loc_00442030: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442040
 * Original: 0x00442040 - 0x0044206E (46 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442040: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00442056u); RECOMP_ABI_CALL(0x00027404u, sub_00027404); /* call 0x00027404 */

loc_00442056: ;
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442080
 * Original: 0x00442080 - 0x004421DC (348 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442080: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 4); /* mulss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    eax = MEM32(esp + 0x10);
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp); /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x14) = xmm7.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x14); /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00442240
 * Original: 0x00442240 - 0x00442285 (69 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00442240: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = eax;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00442250: ;
    xmm0 = XMM_SCALAR(MEMF(esi + ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00442276; /* jp: parity */

loc_0044225E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00442250; /* jl: less (signed <) */

loc_00442267: ;
    SET_LO8(eax, 1);
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00442276: ;
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004422A0
 * Original: 0x004422A0 - 0x004422BE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004422A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004422A0: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00018DD2(); return; /* tail jmp 0x00018DD2 */

}

/**
 * sub_004422D0
 * Original: 0x004422D0 - 0x00442316 (70 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004422D0(void)
{

loc_004422D0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = 0x10;
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
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442330
 * Original: 0x00442330 - 0x0044235D (45 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442330: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442370
 * Original: 0x00442370 - 0x00442399 (41 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442370(void)
{

loc_00442370: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004423B0
 * Original: 0x004423B0 - 0x004423DD (45 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004423B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004423B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004423F0
 * Original: 0x004423F0 - 0x0044241D (45 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004423F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004423F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442430
 * Original: 0x00442430 - 0x0044244E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00442430: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000315B7(); return; /* tail jmp 0x000315B7 */

}

/**
 * sub_00442460
 * Original: 0x00442460 - 0x00442564 (260 bytes, 59 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442460: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x94);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0044247Cu); RECOMP_ABI_CALL(0x00015443u, sub_00015443); /* call 0x00015443 */

loc_0044247C: ;
    xmm3 = XMM_SCALAR(MEMF(0x8D00B0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x8D00AC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x8D00A8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    ecx = MEM32(esp + 0xA0);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x4C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x50); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, ecx);
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    edx = esp + 0x64;
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x5C); /* addss */
    PUSH32(esp, 0x90A1F0);
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x00442546u); RECOMP_ABI_CALL(0x00030F13u, sub_00030F13); /* call 0x00030F13 */

loc_00442546: ;
    edi = MEM32(esp + 0xB8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004425B0
 * Original: 0x004425B0 - 0x004425E0 (48 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004425B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004425B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004425C8u); RECOMP_ABI_CALL(0x00032093u, sub_00032093); /* call 0x00032093 */

loc_004425C8: ;
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004425F0
 * Original: 0x004425F0 - 0x00442620 (48 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004425F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004425F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00442608u); RECOMP_ABI_CALL(0x00033236u, sub_00033236); /* call 0x00033236 */

loc_00442608: ;
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442630
 * Original: 0x00442630 - 0x00442660 (48 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442630: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00442648u); RECOMP_ABI_CALL(0x00015443u, sub_00015443); /* call 0x00015443 */

loc_00442648: ;
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442670
 * Original: 0x00442670 - 0x0044268D (29 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442670: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00442687u); RECOMP_ABI_CALL(0x004426A0u, sub_004426A0); /* call 0x004426A0 */

loc_00442687: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004426A0
 * Original: 0x004426A0 - 0x0044287B (475 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004426A0(void)
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

loc_004426A0: ;
    edx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    ecx = 0x10;
    esi = 0x8D0138;
    edi = edx;
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
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00442877; /* jnp: not parity */

loc_004426CF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x18);
    fp_top() = sin(fp_top()); /* fsin */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00442713; /* jp: parity */

loc_004426F3: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AD44C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00442713; /* jp: parity */

loc_00442705: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0044275A; /* jnp: not parity */

loc_00442713: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    xmm6 = XMM_SCALAR(MEMF(ecx)); /* movss */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 4); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    goto loc_0044276C;

loc_0044275A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_0044276C: ;
    xmm7 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm7.f[0]; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    MEMF(edx + 8) = xmm2.f[0]; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(edx + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(edx + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    MEMF(edx + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0x24) = xmm3.f[0]; /* movss */
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */

loc_00442877: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00442900
 * Original: 0x00442900 - 0x0044291E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00442900: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00033015(); return; /* tail jmp 0x00033015 */

}

/**
 * sub_00442930
 * Original: 0x00442930 - 0x00442A30 (256 bytes, 73 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442930(void)
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

loc_00442930: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    edx = MEM32(ecx + 8);
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp) = edx;
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = MEM32(eax + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 4) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    edx = MEM32(eax);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    edx = MEM32(esp + 0x28);
    fp_push(MEMF(esp)); /* fld float */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, 0x00442A1Cu); RECOMP_ABI_CALL(0x005CDCB4u, sub_005CDCB4); /* call 0x005CDCB4 */

loc_00442A1C: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00442A2Au); RECOMP_ABI_CALL(0x004426A0u, sub_004426A0); /* call 0x004426A0 */

loc_00442A2A: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00442A70
 * Original: 0x00442A70 - 0x00442A9E (46 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442A70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00442A86u); RECOMP_ABI_CALL(0x0002E628u, sub_0002E628); /* call 0x0002E628 */

loc_00442A86: ;
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442AB0
 * Original: 0x00442AB0 - 0x00442AFB (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442AB0: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    edx = 4;
    PUSH32(esp, edi);

loc_00442AC5: ;
    esi = MEM32(ecx + -32);
    MEM32(eax + -8) = esi;
    esi = MEM32(ecx + -16);
    MEM32(eax + -4) = esi;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00442AC5; /* jne: not equal / not zero */

loc_00442AE4: ;
    eax = MEM32(esp + 0x4C);
    ecx = 0x10;
    esi = esp + 8;
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
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00442B10
 * Original: 0x00442B10 - 0x00442B3E (46 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442B10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00442B26u); RECOMP_ABI_CALL(0x0001485Eu, sub_0001485E); /* call 0x0001485E */

loc_00442B26: ;
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442B50
 * Original: 0x00442B50 - 0x00442BB2 (98 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00442B50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00442BA4; /* jp: parity */

loc_00442B66: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00442BA4; /* jp: parity */

loc_00442B75: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00442BA4; /* jp: parity */

loc_00442B84: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00442BA4; /* jp: parity */

loc_00442B93: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    eax = ZX8(LO8(eax));
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_00442BA4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442BD0
 * Original: 0x00442BD0 - 0x00442BFC (44 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442BD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00442BE2u); RECOMP_ABI_CALL(0x0002C337u, sub_0002C337); /* call 0x0002C337 */

loc_00442BE2: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442C10
 * Original: 0x00442C10 - 0x00442C8F (127 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442C10(void)
{

loc_00442C10: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00442CB0
 * Original: 0x00442CB0 - 0x00442CDC (44 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442CB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00442CC2u); RECOMP_ABI_CALL(0x00033CE5u, sub_00033CE5); /* call 0x00033CE5 */

loc_00442CC2: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442CF0
 * Original: 0x00442CF0 - 0x00442D6E (126 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442CF0(void)
{

loc_00442CF0: ;
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = MEM32(esp + 4);
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00442D90
 * Original: 0x00442D90 - 0x00442DBC (44 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442D90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00442DA2u); RECOMP_ABI_CALL(0x0001559Cu, sub_0001559C); /* call 0x0001559C */

loc_00442DA2: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442DD0
 * Original: 0x00442DD0 - 0x00442E4E (126 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442DD0(void)
{

loc_00442DD0: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx); /* mulss */
    eax = MEM32(esp + 4);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00442E70
 * Original: 0x00442E70 - 0x00442E88 (24 bytes, 8 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00442E70(void)
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

loc_00442E70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00442E7Cu); RECOMP_ABI_CALL(0x0003041Eu, sub_0003041E); /* call 0x0003041E */

loc_00442E7C: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00442E90
 * Original: 0x00442E90 - 0x00442EC0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00442E90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00442E90: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00442ED0
 * Original: 0x00442ED0 - 0x00442F08 (56 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442ED0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00442EE8u); RECOMP_ABI_CALL(0x0001E9F3u, sub_0001E9F3); /* call 0x0001E9F3 */

loc_00442EE8: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00442F20
 * Original: 0x00442F20 - 0x0044302E (270 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00442F20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    eax = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00443080
 * Original: 0x00443080 - 0x004430ED (109 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00443080: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    edx = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    MEM32(edx) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443110
 * Original: 0x00443110 - 0x0044312E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00443110: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001150F(); return; /* tail jmp 0x0001150F */

}

/**
 * sub_00443140
 * Original: 0x00443140 - 0x004431B9 (121 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443140(void)
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

loc_00443140: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(eax + 8)); /* fld float */
    edx = esp;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00443199u); RECOMP_ABI_CALL(0x00013571u, sub_00013571); /* call 0x00013571 */

loc_00443199: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x34);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004431E0
 * Original: 0x004431E0 - 0x0044322A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004431E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004431E0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00443240
 * Original: 0x00443240 - 0x0044325E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00443240: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00034591(); return; /* tail jmp 0x00034591 */

}

/**
 * sub_00443270
 * Original: 0x00443270 - 0x004433DF (367 bytes, 108 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443270(void)
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

loc_00443270: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 8); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, 0x0044338Cu); RECOMP_ABI_CALL(0x005CDCB4u, sub_005CDCB4); /* call 0x005CDCB4 */

loc_0044338C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    eax = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(eax) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 4);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(eax + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00443440
 * Original: 0x00443440 - 0x0044345C (28 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00443440: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00443456u); RECOMP_ABI_CALL(0x000257C1u, sub_000257C1); /* call 0x000257C1 */

loc_00443456: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443470
 * Original: 0x00443470 - 0x004434AF (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00443470(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00443470: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    PUSH32(esp, 0x0044347Du); RECOMP_ABI_CALL(0x005CDCB4u, sub_005CDCB4); /* call 0x005CDCB4 */

loc_0044347D: ;
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    POP32(esp, esi);
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004434C0
 * Original: 0x004434C0 - 0x004434DF (31 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004434C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004434C0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004434D9u); RECOMP_ABI_CALL(0x000257C1u, sub_000257C1); /* call 0x000257C1 */

loc_004434D9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004434F0
 * Original: 0x004434F0 - 0x0044354A (90 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004434F0(void)
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

loc_004434F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00443500u); RECOMP_ABI_CALL(0x00031157u, sub_00031157); /* call 0x00031157 */

loc_00443500: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00443560
 * Original: 0x00443560 - 0x00443596 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00443560(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00443560: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004435B0
 * Original: 0x004435B0 - 0x004435E4 (52 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004435B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004435B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004435C4u); RECOMP_ABI_CALL(0x00022E18u, sub_00022E18); /* call 0x00022E18 */

loc_004435C4: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x20);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443600
 * Original: 0x00443600 - 0x00443699 (153 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443600(void)
{

loc_00443600: ;
    eax = MEM32(esp + 8);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 8); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xC); /* mulss */
    eax = MEM32(esp + 4);
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004436C0
 * Original: 0x004436C0 - 0x00443706 (70 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004436C0(void)
{

loc_004436C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443720
 * Original: 0x00443720 - 0x0044376D (77 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00443720: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00443762; /* jp: parity */

loc_00443736: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00443762; /* jp: parity */

loc_00443745: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00443762; /* jp: parity */

loc_00443754: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_00443762: ;
    edx = MEM32(esp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443780
 * Original: 0x00443780 - 0x004437A3 (35 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443780(void)
{

loc_00443780: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = esi;
    edx = MEM32(edx);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004437B0
 * Original: 0x004437B0 - 0x004437DA (42 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004437B0(void)
{

loc_004437B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004437F0
 * Original: 0x004437F0 - 0x0044381B (43 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004437F0(void)
{

loc_004437F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443830
 * Original: 0x00443830 - 0x0044385B (43 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443830(void)
{

loc_00443830: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443870
 * Original: 0x00443870 - 0x00443881 (17 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443870(void)
{

loc_00443870: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443890
 * Original: 0x00443890 - 0x004438A2 (18 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443890(void)
{

loc_00443890: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004438B0
 * Original: 0x004438B0 - 0x004438C2 (18 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004438B0(void)
{

loc_004438B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004438D0
 * Original: 0x004438D0 - 0x004438D3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004438D0(void)
{

loc_004438D0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004438E0
 * Original: 0x004438E0 - 0x004438E3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004438E0(void)
{

loc_004438E0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004438F0
 * Original: 0x004438F0 - 0x0044390C (28 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004438F0(void)
{

loc_004438F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00443909u); RECOMP_ABI_CALL(0x00011BF9u, sub_00011BF9); /* call 0x00011BF9 */

loc_00443909: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443920
 * Original: 0x00443920 - 0x00443A23 (259 bytes, 65 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443920(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00443920: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 8);
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    xmm6 = XMM_SCALAR(MEMF(0x8D0098)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(0x83AFA8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0044396C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_00443966: ;
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    goto loc_00443983;

loc_0044396C: ;
    xmm7 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00443983; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm0.f[0]) */

loc_00443979: ;
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */

loc_00443983: ;
    xmm7 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0044399A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_00443994: ;
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    goto loc_004439B1;

loc_0044399A: ;
    xmm7 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004439B1; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm0.f[0]) */

loc_004439A7: ;
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */

loc_004439B1: ;
    xmm7 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004439C8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_004439C2: ;
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    goto loc_004439DC;

loc_004439C8: ;
    xmm5 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004439DC; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_004439D5: ;
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm6; /* movaps */

loc_004439DC: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    edx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00443A70
 * Original: 0x00443A70 - 0x00443A8C (28 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443A70(void)
{

loc_00443A70: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00443A89u); RECOMP_ABI_CALL(0x00026C75u, sub_00026C75); /* call 0x00026C75 */

loc_00443A89: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00443AA0
 * Original: 0x00443AA0 - 0x00443B11 (113 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443AA0(void)
{

loc_00443AA0: ;
    eax = MEM32(esp + 4);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm6 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00443B30
 * Original: 0x00443B30 - 0x00445008 (5336 bytes, 1414 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00443B30: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AFB0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443B43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443B41u); } /* indirect call */
    }

loc_00443B43: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443B76; /* je: equal / zero */

loc_00443B4B: ;
    MEM32(esi) = 0x83BB64;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443B61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443B61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C423B);
    ecx = eax;
    PUSH32(esp, 0x00443B6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443B6E: ;
    MEM32(0x90A110) = esi;
    goto loc_00443B7C;

loc_00443B76: ;
    MEM32(0x90A110) = edi;

loc_00443B7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AFC8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00443B8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443B8Bu); } /* indirect call */
    }

loc_00443B8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443BBE; /* je: equal / zero */

loc_00443B93: ;
    MEM32(esi) = 0x83AFE0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443BA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443BA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C487D);
    ecx = eax;
    PUSH32(esp, 0x00443BB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443BB6: ;
    MEM32(0x90A0F0) = esi;
    goto loc_00443BC4;

loc_00443BBE: ;
    MEM32(0x90A0F0) = edi;

loc_00443BC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AFE4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443BD3u); } /* indirect call */
    }

loc_00443BD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443C06; /* je: equal / zero */

loc_00443BDB: ;
    MEM32(esi) = 0x83AFFC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443BF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443BF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EBF);
    ecx = eax;
    PUSH32(esp, 0x00443BFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443BFE: ;
    MEM32(0x90A0D4) = esi;
    goto loc_00443C0C;

loc_00443C06: ;
    MEM32(0x90A0D4) = edi;

loc_00443C0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B000);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00443C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443C1Bu); } /* indirect call */
    }

loc_00443C1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443C4E; /* je: equal / zero */

loc_00443C23: ;
    MEM32(esi) = 0x83B02C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443C39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443C39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F3);
    ecx = eax;
    PUSH32(esp, 0x00443C46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443C46: ;
    MEM32(0x90A0E8) = esi;
    goto loc_00443C54;

loc_00443C4E: ;
    MEM32(0x90A0E8) = edi;

loc_00443C54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B030);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443C65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443C63u); } /* indirect call */
    }

loc_00443C65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443C96; /* je: equal / zero */

loc_00443C6B: ;
    MEM32(esi) = 0x83B050;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443C81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443C81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A25);
    ecx = eax;
    PUSH32(esp, 0x00443C8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443C8E: ;
    MEM32(0x90A1AC) = esi;
    goto loc_00443C9C;

loc_00443C96: ;
    MEM32(0x90A1AC) = edi;

loc_00443C9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B054);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00443CADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443CABu); } /* indirect call */
    }

loc_00443CAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443CDE; /* je: equal / zero */

loc_00443CB3: ;
    MEM32(esi) = 0x83B074;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443CC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443CC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D47);
    ecx = eax;
    PUSH32(esp, 0x00443CD6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443CD6: ;
    MEM32(0x90A180) = esi;
    goto loc_00443CE4;

loc_00443CDE: ;
    MEM32(0x90A180) = edi;

loc_00443CE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B078);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443CF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443CF3u); } /* indirect call */
    }

loc_00443CF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443D26; /* je: equal / zero */

loc_00443CFB: ;
    MEM32(esi) = 0x83B098;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443D11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443D11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5069);
    ecx = eax;
    PUSH32(esp, 0x00443D1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443D1E: ;
    MEM32(0x90A17C) = esi;
    goto loc_00443D2C;

loc_00443D26: ;
    MEM32(0x90A17C) = edi;

loc_00443D2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B09C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00443D3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443D3Bu); } /* indirect call */
    }

loc_00443D3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443D6E; /* je: equal / zero */

loc_00443D43: ;
    MEM32(esi) = 0x83B0BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443D59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443D59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AE3);
    ecx = eax;
    PUSH32(esp, 0x00443D66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443D66: ;
    MEM32(0x90A124) = esi;
    goto loc_00443D74;

loc_00443D6E: ;
    MEM32(0x90A124) = edi;

loc_00443D74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B0C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443D85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443D83u); } /* indirect call */
    }

loc_00443D85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443DB6; /* je: equal / zero */

loc_00443D8B: ;
    MEM32(esi) = 0x83B0E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443DA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443DA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C404C);
    ecx = eax;
    PUSH32(esp, 0x00443DAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443DAE: ;
    MEM32(0x90A11C) = esi;
    goto loc_00443DBC;

loc_00443DB6: ;
    MEM32(0x90A11C) = edi;

loc_00443DBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B0E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00443DCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443DCBu); } /* indirect call */
    }

loc_00443DCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443DFE; /* je: equal / zero */

loc_00443DD3: ;
    MEM32(esi) = 0x83B10C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443DE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443DE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C428A);
    ecx = eax;
    PUSH32(esp, 0x00443DF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443DF6: ;
    MEM32(0x90A1D8) = esi;
    goto loc_00443E04;

loc_00443DFE: ;
    MEM32(0x90A1D8) = edi;

loc_00443E04: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B110);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443E15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443E13u); } /* indirect call */
    }

loc_00443E15: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443E46; /* je: equal / zero */

loc_00443E1B: ;
    MEM32(esi) = 0x83B134;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443E31u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443E31: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5F9D);
    ecx = eax;
    PUSH32(esp, 0x00443E3Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443E3E: ;
    MEM32(0x90A0C8) = esi;
    goto loc_00443E4C;

loc_00443E46: ;
    MEM32(0x90A0C8) = edi;

loc_00443E4C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B138);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00443E5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443E5Bu); } /* indirect call */
    }

loc_00443E5D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443E8E; /* je: equal / zero */

loc_00443E63: ;
    MEM32(esi) = 0x83B154;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443E79u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443E79: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5CB0);
    ecx = eax;
    PUSH32(esp, 0x00443E86u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443E86: ;
    MEM32(0x90A0D0) = esi;
    goto loc_00443E94;

loc_00443E8E: ;
    MEM32(0x90A0D0) = edi;

loc_00443E94: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B158);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443EA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443EA3u); } /* indirect call */
    }

loc_00443EA5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443ED6; /* je: equal / zero */

loc_00443EAB: ;
    MEM32(esi) = 0x83B178;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443EC1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443EC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C480A);
    ecx = eax;
    PUSH32(esp, 0x00443ECEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443ECE: ;
    MEM32(0x90A114) = esi;
    goto loc_00443EDC;

loc_00443ED6: ;
    MEM32(0x90A114) = edi;

loc_00443EDC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B17C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00443EEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443EEBu); } /* indirect call */
    }

loc_00443EED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443F1E; /* je: equal / zero */

loc_00443EF3: ;
    MEM32(esi) = 0x83B1A4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443F09u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443F09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C420D);
    ecx = eax;
    PUSH32(esp, 0x00443F16u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443F16: ;
    MEM32(0x90A168) = esi;
    goto loc_00443F24;

loc_00443F1E: ;
    MEM32(0x90A168) = edi;

loc_00443F24: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B1A8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443F35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443F33u); } /* indirect call */
    }

loc_00443F35: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443F66; /* je: equal / zero */

loc_00443F3B: ;
    MEM32(esi) = 0x83B1D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443F51u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443F51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5610);
    ecx = eax;
    PUSH32(esp, 0x00443F5Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443F5E: ;
    MEM32(0x90A120) = esi;
    goto loc_00443F6C;

loc_00443F66: ;
    MEM32(0x90A120) = edi;

loc_00443F6C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B1D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00443F7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443F7Bu); } /* indirect call */
    }

loc_00443F7D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443FAE; /* je: equal / zero */

loc_00443F83: ;
    MEM32(esi) = 0x83B1FC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443F99u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443F99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C497C);
    ecx = eax;
    PUSH32(esp, 0x00443FA6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443FA6: ;
    MEM32(0x90A194) = esi;
    goto loc_00443FB4;

loc_00443FAE: ;
    MEM32(0x90A194) = edi;

loc_00443FB4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B200);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00443FC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00443FC3u); } /* indirect call */
    }

loc_00443FC5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443FF6; /* je: equal / zero */

loc_00443FCB: ;
    MEM32(esi) = 0x83B220;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00443FE1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00443FE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5787);
    ecx = eax;
    PUSH32(esp, 0x00443FEEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00443FEE: ;
    MEM32(0x90A1A0) = esi;
    goto loc_00443FFC;

loc_00443FF6: ;
    MEM32(0x90A1A0) = edi;

loc_00443FFC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B224);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044400Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044400Bu); } /* indirect call */
    }

loc_0044400D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044403E; /* je: equal / zero */

loc_00444013: ;
    MEM32(esi) = 0x83B24C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444029u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444029: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56F5);
    ecx = eax;
    PUSH32(esp, 0x00444036u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444036: ;
    MEM32(0x90A1C0) = esi;
    goto loc_00444044;

loc_0044403E: ;
    MEM32(0x90A1C0) = edi;

loc_00444044: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B250);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444053u); } /* indirect call */
    }

loc_00444055: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444086; /* je: equal / zero */

loc_0044405B: ;
    MEM32(esi) = 0x83B278;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444071u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444071: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C562A);
    ecx = eax;
    PUSH32(esp, 0x0044407Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044407E: ;
    MEM32(0x90A134) = esi;
    goto loc_0044408C;

loc_00444086: ;
    MEM32(0x90A134) = edi;

loc_0044408C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B27C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044409Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044409Bu); } /* indirect call */
    }

loc_0044409D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004440CE; /* je: equal / zero */

loc_004440A3: ;
    MEM32(esi) = 0x83B2AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004440B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004440B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5E7B);
    ecx = eax;
    PUSH32(esp, 0x004440C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004440C6: ;
    MEM32(0x90A154) = esi;
    goto loc_004440D4;

loc_004440CE: ;
    MEM32(0x90A154) = edi;

loc_004440D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B2B0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004440E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004440E3u); } /* indirect call */
    }

loc_004440E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444116; /* je: equal / zero */

loc_004440EB: ;
    MEM32(esi) = 0x83B2CC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444101u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444101: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A3C);
    ecx = eax;
    PUSH32(esp, 0x0044410Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044410E: ;
    MEM32(0x90A0F4) = esi;
    goto loc_0044411C;

loc_00444116: ;
    MEM32(0x90A0F4) = edi;

loc_0044411C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B2D0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044412Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044412Bu); } /* indirect call */
    }

loc_0044412D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044415E; /* je: equal / zero */

loc_00444133: ;
    MEM32(esi) = 0x83B300;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444149u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444149: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4349);
    ecx = eax;
    PUSH32(esp, 0x00444156u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444156: ;
    MEM32(0x90A104) = esi;
    goto loc_00444164;

loc_0044415E: ;
    MEM32(0x90A104) = edi;

loc_00444164: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B304);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444175u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444173u); } /* indirect call */
    }

loc_00444175: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004441A6; /* je: equal / zero */

loc_0044417B: ;
    MEM32(esi) = 0x83B320;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444191u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444191: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4176);
    ecx = eax;
    PUSH32(esp, 0x0044419Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044419E: ;
    MEM32(0x90A1D4) = esi;
    goto loc_004441AC;

loc_004441A6: ;
    MEM32(0x90A1D4) = edi;

loc_004441AC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B324);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004441BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004441BBu); } /* indirect call */
    }

loc_004441BD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004441EE; /* je: equal / zero */

loc_004441C3: ;
    MEM32(esi) = 0x83B344;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004441D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004441D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C45FF);
    ecx = eax;
    PUSH32(esp, 0x004441E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004441E6: ;
    MEM32(0x90A128) = esi;
    goto loc_004441F4;

loc_004441EE: ;
    MEM32(0x90A128) = edi;

loc_004441F4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B348);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444205u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444203u); } /* indirect call */
    }

loc_00444205: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444236; /* je: equal / zero */

loc_0044420B: ;
    MEM32(esi) = 0x83B364;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444221u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444221: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD6);
    ecx = eax;
    PUSH32(esp, 0x0044422Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044422E: ;
    MEM32(0x90A1C4) = esi;
    goto loc_0044423C;

loc_00444236: ;
    MEM32(0x90A1C4) = edi;

loc_0044423C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B368);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044424Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044424Bu); } /* indirect call */
    }

loc_0044424D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044427E; /* je: equal / zero */

loc_00444253: ;
    MEM32(esi) = 0x83B388;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444269u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444269: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5427);
    ecx = eax;
    PUSH32(esp, 0x00444276u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444276: ;
    MEM32(0x90A130) = esi;
    goto loc_00444284;

loc_0044427E: ;
    MEM32(0x90A130) = edi;

loc_00444284: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B38C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444295u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444293u); } /* indirect call */
    }

loc_00444295: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004442C6; /* je: equal / zero */

loc_0044429B: ;
    MEM32(esi) = 0x83B3AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004442B1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004442B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F27);
    ecx = eax;
    PUSH32(esp, 0x004442BEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004442BE: ;
    MEM32(0x90A1E0) = esi;
    goto loc_004442CC;

loc_004442C6: ;
    MEM32(0x90A1E0) = edi;

loc_004442CC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3B0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004442DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004442DBu); } /* indirect call */
    }

loc_004442DD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044430E; /* je: equal / zero */

loc_004442E3: ;
    MEM32(esi) = 0x83B3D0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004442F9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004442F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C457F);
    ecx = eax;
    PUSH32(esp, 0x00444306u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444306: ;
    MEM32(0x90A1BC) = esi;
    goto loc_00444314;

loc_0044430E: ;
    MEM32(0x90A1BC) = edi;

loc_00444314: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3D4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444325u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444323u); } /* indirect call */
    }

loc_00444325: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444356; /* je: equal / zero */

loc_0044432B: ;
    MEM32(esi) = 0x83B3F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444341u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444341: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5527);
    ecx = eax;
    PUSH32(esp, 0x0044434Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044434E: ;
    MEM32(0x90A170) = esi;
    goto loc_0044435C;

loc_00444356: ;
    MEM32(0x90A170) = edi;

loc_0044435C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044436Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044436Bu); } /* indirect call */
    }

loc_0044436D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044439E; /* je: equal / zero */

loc_00444373: ;
    MEM32(esi) = 0x83B420;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444389u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444389: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5A40);
    ecx = eax;
    PUSH32(esp, 0x00444396u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444396: ;
    MEM32(0x90A0C4) = esi;
    goto loc_004443A4;

loc_0044439E: ;
    MEM32(0x90A0C4) = edi;

loc_004443A4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B424);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004443B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004443B3u); } /* indirect call */
    }

loc_004443B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004443E6; /* je: equal / zero */

loc_004443BB: ;
    MEM32(esi) = 0x83B444;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004443D1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004443D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D14);
    ecx = eax;
    PUSH32(esp, 0x004443DEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004443DE: ;
    MEM32(0x90A160) = esi;
    goto loc_004443EC;

loc_004443E6: ;
    MEM32(0x90A160) = edi;

loc_004443EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B448);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004443FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004443FBu); } /* indirect call */
    }

loc_004443FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044442E; /* je: equal / zero */

loc_00444403: ;
    MEM32(esi) = 0x83B460;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444419u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444419: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C3A);
    ecx = eax;
    PUSH32(esp, 0x00444426u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444426: ;
    MEM32(0x90A0F8) = esi;
    goto loc_00444434;

loc_0044442E: ;
    MEM32(0x90A0F8) = edi;

loc_00444434: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B464);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444445u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444443u); } /* indirect call */
    }

loc_00444445: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444476; /* je: equal / zero */

loc_0044444B: ;
    MEM32(esi) = 0x83B47C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444461u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444461: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A9C);
    ecx = eax;
    PUSH32(esp, 0x0044446Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044446E: ;
    MEM32(0x90A1E4) = esi;
    goto loc_0044447C;

loc_00444476: ;
    MEM32(0x90A1E4) = edi;

loc_0044447C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B480);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044448Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044448Bu); } /* indirect call */
    }

loc_0044448D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004444BE; /* je: equal / zero */

loc_00444493: ;
    MEM32(esi) = 0x83B498;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004444A9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004444A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58FE);
    ecx = eax;
    PUSH32(esp, 0x004444B6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004444B6: ;
    MEM32(0x90A18C) = esi;
    goto loc_004444C4;

loc_004444BE: ;
    MEM32(0x90A18C) = edi;

loc_004444C4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B49C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004444D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004444D3u); } /* indirect call */
    }

loc_004444D5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444506; /* je: equal / zero */

loc_004444DB: ;
    MEM32(esi) = 0x83B4C8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004444F1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004444F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C46E4);
    ecx = eax;
    PUSH32(esp, 0x004444FEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004444FE: ;
    MEM32(0x90A0EC) = esi;
    goto loc_0044450C;

loc_00444506: ;
    MEM32(0x90A0EC) = edi;

loc_0044450C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4CC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044451Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044451Bu); } /* indirect call */
    }

loc_0044451D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044454E; /* je: equal / zero */

loc_00444523: ;
    MEM32(esi) = 0x83B4F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444539u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444539: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4E78);
    ecx = eax;
    PUSH32(esp, 0x00444546u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444546: ;
    MEM32(0x90A0C0) = esi;
    goto loc_00444554;

loc_0044454E: ;
    MEM32(0x90A0C0) = edi;

loc_00444554: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444563u); } /* indirect call */
    }

loc_00444565: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444596; /* je: equal / zero */

loc_0044456B: ;
    MEM32(esi) = 0x83B520;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444581u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4DFA);
    ecx = eax;
    PUSH32(esp, 0x0044458Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044458E: ;
    MEM32(0x90A19C) = esi;
    goto loc_0044459C;

loc_00444596: ;
    MEM32(0x90A19C) = edi;

loc_0044459C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B524);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004445ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445ABu); } /* indirect call */
    }

loc_004445AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004445DE; /* je: equal / zero */

loc_004445B3: ;
    MEM32(esi) = 0x83B54C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004445C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004445C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4D7C);
    ecx = eax;
    PUSH32(esp, 0x004445D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004445D6: ;
    MEM32(0x90A188) = esi;
    goto loc_004445E4;

loc_004445DE: ;
    MEM32(0x90A188) = edi;

loc_004445E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B550);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004445F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445F3u); } /* indirect call */
    }

loc_004445F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444626; /* je: equal / zero */

loc_004445FB: ;
    MEM32(esi) = 0x83B584;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444611u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444611: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54C2);
    ecx = eax;
    PUSH32(esp, 0x0044461Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044461E: ;
    MEM32(0x90A16C) = esi;
    goto loc_0044462C;

loc_00444626: ;
    MEM32(0x90A16C) = edi;

loc_0044462C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B588);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044463Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044463Bu); } /* indirect call */
    }

loc_0044463D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044466E; /* je: equal / zero */

loc_00444643: ;
    MEM32(esi) = 0x83B5C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56D8);
    ecx = eax;
    PUSH32(esp, 0x00444666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444666: ;
    MEM32(0x90A140) = esi;
    goto loc_00444674;

loc_0044466E: ;
    MEM32(0x90A140) = edi;

loc_00444674: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444683u); } /* indirect call */
    }

loc_00444685: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446B6; /* je: equal / zero */

loc_0044468B: ;
    MEM32(esi) = 0x83B5E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEA);
    ecx = eax;
    PUSH32(esp, 0x004446AEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446AE: ;
    MEM32(0x90A158) = esi;
    goto loc_004446BC;

loc_004446B6: ;
    MEM32(0x90A158) = edi;

loc_004446BC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5E8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004446CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004446CBu); } /* indirect call */
    }

loc_004446CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446FE; /* je: equal / zero */

loc_004446D3: ;
    MEM32(esi) = 0x83B604;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446E9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C49A4);
    ecx = eax;
    PUSH32(esp, 0x004446F6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446F6: ;
    MEM32(0x90A0DC) = esi;
    goto loc_00444704;

loc_004446FE: ;
    MEM32(0x90A0DC) = edi;

loc_00444704: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B608);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444713u); } /* indirect call */
    }

loc_00444715: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444746; /* je: equal / zero */

loc_0044471B: ;
    MEM32(esi) = 0x83B630;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444731u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4200);
    ecx = eax;
    PUSH32(esp, 0x0044473Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044473E: ;
    MEM32(0x90A0E0) = esi;
    goto loc_0044474C;

loc_00444746: ;
    MEM32(0x90A0E0) = edi;

loc_0044474C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B634);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044475Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044475Bu); } /* indirect call */
    }

loc_0044475D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044478E; /* je: equal / zero */

loc_00444763: ;
    MEM32(esi) = 0x83B658;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444779u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444779: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5221);
    ecx = eax;
    PUSH32(esp, 0x00444786u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444786: ;
    MEM32(0x90A14C) = esi;
    goto loc_00444794;

loc_0044478E: ;
    MEM32(0x90A14C) = edi;

loc_00444794: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B65C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004447A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447A3u); } /* indirect call */
    }

loc_004447A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004447D6; /* je: equal / zero */

loc_004447AB: ;
    MEM32(esi) = 0x83B67C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004447C1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004447C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4CD2);
    ecx = eax;
    PUSH32(esp, 0x004447CEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004447CE: ;
    MEM32(0x90A148) = esi;
    goto loc_004447DC;

loc_004447D6: ;
    MEM32(0x90A148) = edi;

loc_004447DC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B680);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004447EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447EBu); } /* indirect call */
    }

loc_004447ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044481E; /* je: equal / zero */

loc_004447F3: ;
    MEM32(esi) = 0x83B6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444809u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444809: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C52D0);
    ecx = eax;
    PUSH32(esp, 0x00444816u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444816: ;
    MEM32(0x90A13C) = esi;
    goto loc_00444824;

loc_0044481E: ;
    MEM32(0x90A13C) = edi;

loc_00444824: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444833u); } /* indirect call */
    }

loc_00444835: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444866; /* je: equal / zero */

loc_0044483B: ;
    MEM32(esi) = 0x83B6D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444851u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5829);
    ecx = eax;
    PUSH32(esp, 0x0044485Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044485E: ;
    MEM32(0x90A198) = esi;
    goto loc_0044486C;

loc_00444866: ;
    MEM32(0x90A198) = edi;

loc_0044486C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044487Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044487Bu); } /* indirect call */
    }

loc_0044487D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448AE; /* je: equal / zero */

loc_00444883: ;
    MEM32(esi) = 0x83B700;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444899u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444899: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54AD);
    ecx = eax;
    PUSH32(esp, 0x004448A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448A6: ;
    MEM32(0x90A1DC) = esi;
    goto loc_004448B4;

loc_004448AE: ;
    MEM32(0x90A1DC) = edi;

loc_004448B4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B704);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004448C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004448C3u); } /* indirect call */
    }

loc_004448C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448F6; /* je: equal / zero */

loc_004448CB: ;
    MEM32(esi) = 0x83B72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004448E1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004448E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEF);
    ecx = eax;
    PUSH32(esp, 0x004448EEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448EE: ;
    MEM32(0x90A108) = esi;
    goto loc_004448FC;

loc_004448F6: ;
    MEM32(0x90A108) = edi;

loc_004448FC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B730);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044490Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044490Bu); } /* indirect call */
    }

loc_0044490D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044493E; /* je: equal / zero */

loc_00444913: ;
    MEM32(esi) = 0x83B758;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444929u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4131);
    ecx = eax;
    PUSH32(esp, 0x00444936u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444936: ;
    MEM32(0x90A1B4) = esi;
    goto loc_00444944;

loc_0044493E: ;
    MEM32(0x90A1B4) = edi;

loc_00444944: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044414F
 * Original: 0x0044414F - 0x00445008 (3769 bytes, 998 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044414F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0044414F: ;
    ecx = eax;
    PUSH32(esp, 0x00444156u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444156: ;
    MEM32(0x90A104) = esi;
    goto loc_00444164;

    MEM32(0x90A104) = edi;

loc_00444164: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B304);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444175u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444173u); } /* indirect call */
    }

loc_00444175: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004441A6; /* je: equal / zero */

loc_0044417B: ;
    MEM32(esi) = 0x83B320;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444191u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444191: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4176);
    ecx = eax;
    PUSH32(esp, 0x0044419Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044419E: ;
    MEM32(0x90A1D4) = esi;
    goto loc_004441AC;

loc_004441A6: ;
    MEM32(0x90A1D4) = edi;

loc_004441AC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B324);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004441BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004441BBu); } /* indirect call */
    }

loc_004441BD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004441EE; /* je: equal / zero */

loc_004441C3: ;
    MEM32(esi) = 0x83B344;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004441D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004441D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C45FF);
    ecx = eax;
    PUSH32(esp, 0x004441E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004441E6: ;
    MEM32(0x90A128) = esi;
    goto loc_004441F4;

loc_004441EE: ;
    MEM32(0x90A128) = edi;

loc_004441F4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B348);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444205u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444203u); } /* indirect call */
    }

loc_00444205: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444236; /* je: equal / zero */

loc_0044420B: ;
    MEM32(esi) = 0x83B364;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444221u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444221: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD6);
    ecx = eax;
    PUSH32(esp, 0x0044422Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044422E: ;
    MEM32(0x90A1C4) = esi;
    goto loc_0044423C;

loc_00444236: ;
    MEM32(0x90A1C4) = edi;

loc_0044423C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B368);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044424Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044424Bu); } /* indirect call */
    }

loc_0044424D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044427E; /* je: equal / zero */

loc_00444253: ;
    MEM32(esi) = 0x83B388;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444269u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444269: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5427);
    ecx = eax;
    PUSH32(esp, 0x00444276u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444276: ;
    MEM32(0x90A130) = esi;
    goto loc_00444284;

loc_0044427E: ;
    MEM32(0x90A130) = edi;

loc_00444284: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B38C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444295u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444293u); } /* indirect call */
    }

loc_00444295: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004442C6; /* je: equal / zero */

loc_0044429B: ;
    MEM32(esi) = 0x83B3AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004442B1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004442B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F27);
    ecx = eax;
    PUSH32(esp, 0x004442BEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004442BE: ;
    MEM32(0x90A1E0) = esi;
    goto loc_004442CC;

loc_004442C6: ;
    MEM32(0x90A1E0) = edi;

loc_004442CC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3B0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004442DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004442DBu); } /* indirect call */
    }

loc_004442DD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044430E; /* je: equal / zero */

loc_004442E3: ;
    MEM32(esi) = 0x83B3D0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004442F9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004442F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C457F);
    ecx = eax;
    PUSH32(esp, 0x00444306u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444306: ;
    MEM32(0x90A1BC) = esi;
    goto loc_00444314;

loc_0044430E: ;
    MEM32(0x90A1BC) = edi;

loc_00444314: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3D4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444325u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444323u); } /* indirect call */
    }

loc_00444325: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444356; /* je: equal / zero */

loc_0044432B: ;
    MEM32(esi) = 0x83B3F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444341u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444341: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5527);
    ecx = eax;
    PUSH32(esp, 0x0044434Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044434E: ;
    MEM32(0x90A170) = esi;
    goto loc_0044435C;

loc_00444356: ;
    MEM32(0x90A170) = edi;

loc_0044435C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044436Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044436Bu); } /* indirect call */
    }

loc_0044436D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044439E; /* je: equal / zero */

loc_00444373: ;
    MEM32(esi) = 0x83B420;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444389u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444389: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5A40);
    ecx = eax;
    PUSH32(esp, 0x00444396u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444396: ;
    MEM32(0x90A0C4) = esi;
    goto loc_004443A4;

loc_0044439E: ;
    MEM32(0x90A0C4) = edi;

loc_004443A4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B424);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004443B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004443B3u); } /* indirect call */
    }

loc_004443B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004443E6; /* je: equal / zero */

loc_004443BB: ;
    MEM32(esi) = 0x83B444;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004443D1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004443D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D14);
    ecx = eax;
    PUSH32(esp, 0x004443DEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004443DE: ;
    MEM32(0x90A160) = esi;
    goto loc_004443EC;

loc_004443E6: ;
    MEM32(0x90A160) = edi;

loc_004443EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B448);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004443FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004443FBu); } /* indirect call */
    }

loc_004443FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044442E; /* je: equal / zero */

loc_00444403: ;
    MEM32(esi) = 0x83B460;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444419u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444419: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C3A);
    ecx = eax;
    PUSH32(esp, 0x00444426u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444426: ;
    MEM32(0x90A0F8) = esi;
    goto loc_00444434;

loc_0044442E: ;
    MEM32(0x90A0F8) = edi;

loc_00444434: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B464);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444445u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444443u); } /* indirect call */
    }

loc_00444445: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444476; /* je: equal / zero */

loc_0044444B: ;
    MEM32(esi) = 0x83B47C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444461u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444461: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A9C);
    ecx = eax;
    PUSH32(esp, 0x0044446Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044446E: ;
    MEM32(0x90A1E4) = esi;
    goto loc_0044447C;

loc_00444476: ;
    MEM32(0x90A1E4) = edi;

loc_0044447C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B480);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044448Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044448Bu); } /* indirect call */
    }

loc_0044448D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004444BE; /* je: equal / zero */

loc_00444493: ;
    MEM32(esi) = 0x83B498;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004444A9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004444A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58FE);
    ecx = eax;
    PUSH32(esp, 0x004444B6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004444B6: ;
    MEM32(0x90A18C) = esi;
    goto loc_004444C4;

loc_004444BE: ;
    MEM32(0x90A18C) = edi;

loc_004444C4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B49C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004444D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004444D3u); } /* indirect call */
    }

loc_004444D5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444506; /* je: equal / zero */

loc_004444DB: ;
    MEM32(esi) = 0x83B4C8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004444F1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004444F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C46E4);
    ecx = eax;
    PUSH32(esp, 0x004444FEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004444FE: ;
    MEM32(0x90A0EC) = esi;
    goto loc_0044450C;

loc_00444506: ;
    MEM32(0x90A0EC) = edi;

loc_0044450C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4CC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044451Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044451Bu); } /* indirect call */
    }

loc_0044451D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044454E; /* je: equal / zero */

loc_00444523: ;
    MEM32(esi) = 0x83B4F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444539u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444539: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4E78);
    ecx = eax;
    PUSH32(esp, 0x00444546u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444546: ;
    MEM32(0x90A0C0) = esi;
    goto loc_00444554;

loc_0044454E: ;
    MEM32(0x90A0C0) = edi;

loc_00444554: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444563u); } /* indirect call */
    }

loc_00444565: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444596; /* je: equal / zero */

loc_0044456B: ;
    MEM32(esi) = 0x83B520;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444581u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4DFA);
    ecx = eax;
    PUSH32(esp, 0x0044458Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044458E: ;
    MEM32(0x90A19C) = esi;
    goto loc_0044459C;

loc_00444596: ;
    MEM32(0x90A19C) = edi;

loc_0044459C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B524);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004445ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445ABu); } /* indirect call */
    }

loc_004445AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004445DE; /* je: equal / zero */

loc_004445B3: ;
    MEM32(esi) = 0x83B54C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004445C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004445C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4D7C);
    ecx = eax;
    PUSH32(esp, 0x004445D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004445D6: ;
    MEM32(0x90A188) = esi;
    goto loc_004445E4;

loc_004445DE: ;
    MEM32(0x90A188) = edi;

loc_004445E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B550);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004445F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445F3u); } /* indirect call */
    }

loc_004445F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444626; /* je: equal / zero */

loc_004445FB: ;
    MEM32(esi) = 0x83B584;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444611u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444611: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54C2);
    ecx = eax;
    PUSH32(esp, 0x0044461Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044461E: ;
    MEM32(0x90A16C) = esi;
    goto loc_0044462C;

loc_00444626: ;
    MEM32(0x90A16C) = edi;

loc_0044462C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B588);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044463Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044463Bu); } /* indirect call */
    }

loc_0044463D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044466E; /* je: equal / zero */

loc_00444643: ;
    MEM32(esi) = 0x83B5C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56D8);
    ecx = eax;
    PUSH32(esp, 0x00444666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444666: ;
    MEM32(0x90A140) = esi;
    goto loc_00444674;

loc_0044466E: ;
    MEM32(0x90A140) = edi;

loc_00444674: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444683u); } /* indirect call */
    }

loc_00444685: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446B6; /* je: equal / zero */

loc_0044468B: ;
    MEM32(esi) = 0x83B5E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEA);
    ecx = eax;
    PUSH32(esp, 0x004446AEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446AE: ;
    MEM32(0x90A158) = esi;
    goto loc_004446BC;

loc_004446B6: ;
    MEM32(0x90A158) = edi;

loc_004446BC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5E8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004446CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004446CBu); } /* indirect call */
    }

loc_004446CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446FE; /* je: equal / zero */

loc_004446D3: ;
    MEM32(esi) = 0x83B604;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446E9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C49A4);
    ecx = eax;
    PUSH32(esp, 0x004446F6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446F6: ;
    MEM32(0x90A0DC) = esi;
    goto loc_00444704;

loc_004446FE: ;
    MEM32(0x90A0DC) = edi;

loc_00444704: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B608);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444713u); } /* indirect call */
    }

loc_00444715: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444746; /* je: equal / zero */

loc_0044471B: ;
    MEM32(esi) = 0x83B630;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444731u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4200);
    ecx = eax;
    PUSH32(esp, 0x0044473Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044473E: ;
    MEM32(0x90A0E0) = esi;
    goto loc_0044474C;

loc_00444746: ;
    MEM32(0x90A0E0) = edi;

loc_0044474C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B634);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044475Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044475Bu); } /* indirect call */
    }

loc_0044475D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044478E; /* je: equal / zero */

loc_00444763: ;
    MEM32(esi) = 0x83B658;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444779u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444779: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5221);
    ecx = eax;
    PUSH32(esp, 0x00444786u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444786: ;
    MEM32(0x90A14C) = esi;
    goto loc_00444794;

loc_0044478E: ;
    MEM32(0x90A14C) = edi;

loc_00444794: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B65C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004447A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447A3u); } /* indirect call */
    }

loc_004447A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004447D6; /* je: equal / zero */

loc_004447AB: ;
    MEM32(esi) = 0x83B67C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004447C1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004447C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4CD2);
    ecx = eax;
    PUSH32(esp, 0x004447CEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004447CE: ;
    MEM32(0x90A148) = esi;
    goto loc_004447DC;

loc_004447D6: ;
    MEM32(0x90A148) = edi;

loc_004447DC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B680);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004447EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447EBu); } /* indirect call */
    }

loc_004447ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044481E; /* je: equal / zero */

loc_004447F3: ;
    MEM32(esi) = 0x83B6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444809u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444809: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C52D0);
    ecx = eax;
    PUSH32(esp, 0x00444816u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444816: ;
    MEM32(0x90A13C) = esi;
    goto loc_00444824;

loc_0044481E: ;
    MEM32(0x90A13C) = edi;

loc_00444824: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444833u); } /* indirect call */
    }

loc_00444835: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444866; /* je: equal / zero */

loc_0044483B: ;
    MEM32(esi) = 0x83B6D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444851u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5829);
    ecx = eax;
    PUSH32(esp, 0x0044485Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044485E: ;
    MEM32(0x90A198) = esi;
    goto loc_0044486C;

loc_00444866: ;
    MEM32(0x90A198) = edi;

loc_0044486C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044487Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044487Bu); } /* indirect call */
    }

loc_0044487D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448AE; /* je: equal / zero */

loc_00444883: ;
    MEM32(esi) = 0x83B700;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444899u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444899: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54AD);
    ecx = eax;
    PUSH32(esp, 0x004448A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448A6: ;
    MEM32(0x90A1DC) = esi;
    goto loc_004448B4;

loc_004448AE: ;
    MEM32(0x90A1DC) = edi;

loc_004448B4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B704);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004448C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004448C3u); } /* indirect call */
    }

loc_004448C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448F6; /* je: equal / zero */

loc_004448CB: ;
    MEM32(esi) = 0x83B72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004448E1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004448E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEF);
    ecx = eax;
    PUSH32(esp, 0x004448EEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448EE: ;
    MEM32(0x90A108) = esi;
    goto loc_004448FC;

loc_004448F6: ;
    MEM32(0x90A108) = edi;

loc_004448FC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B730);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044490Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044490Bu); } /* indirect call */
    }

loc_0044490D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044493E; /* je: equal / zero */

loc_00444913: ;
    MEM32(esi) = 0x83B758;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444929u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4131);
    ecx = eax;
    PUSH32(esp, 0x00444936u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444936: ;
    MEM32(0x90A1B4) = esi;
    goto loc_00444944;

loc_0044493E: ;
    MEM32(0x90A1B4) = edi;

loc_00444944: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444201
 * Original: 0x00444201 - 0x00445008 (3591 bytes, 952 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444201(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444201: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444205u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444203u); } /* indirect call */
    }

loc_00444205: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444236; /* je: equal / zero */

loc_0044420B: ;
    MEM32(esi) = 0x83B364;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444221u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444221: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD6);
    ecx = eax;
    PUSH32(esp, 0x0044422Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044422E: ;
    MEM32(0x90A1C4) = esi;
    goto loc_0044423C;

loc_00444236: ;
    MEM32(0x90A1C4) = edi;

loc_0044423C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B368);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044424Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044424Bu); } /* indirect call */
    }

loc_0044424D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044427E; /* je: equal / zero */

loc_00444253: ;
    MEM32(esi) = 0x83B388;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444269u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444269: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5427);
    ecx = eax;
    PUSH32(esp, 0x00444276u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444276: ;
    MEM32(0x90A130) = esi;
    goto loc_00444284;

loc_0044427E: ;
    MEM32(0x90A130) = edi;

loc_00444284: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B38C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444295u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444293u); } /* indirect call */
    }

loc_00444295: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004442C6; /* je: equal / zero */

loc_0044429B: ;
    MEM32(esi) = 0x83B3AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004442B1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004442B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F27);
    ecx = eax;
    PUSH32(esp, 0x004442BEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004442BE: ;
    MEM32(0x90A1E0) = esi;
    goto loc_004442CC;

loc_004442C6: ;
    MEM32(0x90A1E0) = edi;

loc_004442CC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3B0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004442DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004442DBu); } /* indirect call */
    }

loc_004442DD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044430E; /* je: equal / zero */

loc_004442E3: ;
    MEM32(esi) = 0x83B3D0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004442F9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004442F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C457F);
    ecx = eax;
    PUSH32(esp, 0x00444306u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444306: ;
    MEM32(0x90A1BC) = esi;
    goto loc_00444314;

loc_0044430E: ;
    MEM32(0x90A1BC) = edi;

loc_00444314: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3D4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444325u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444323u); } /* indirect call */
    }

loc_00444325: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444356; /* je: equal / zero */

loc_0044432B: ;
    MEM32(esi) = 0x83B3F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444341u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444341: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5527);
    ecx = eax;
    PUSH32(esp, 0x0044434Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044434E: ;
    MEM32(0x90A170) = esi;
    goto loc_0044435C;

loc_00444356: ;
    MEM32(0x90A170) = edi;

loc_0044435C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044436Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044436Bu); } /* indirect call */
    }

loc_0044436D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044439E; /* je: equal / zero */

loc_00444373: ;
    MEM32(esi) = 0x83B420;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444389u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444389: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5A40);
    ecx = eax;
    PUSH32(esp, 0x00444396u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444396: ;
    MEM32(0x90A0C4) = esi;
    goto loc_004443A4;

loc_0044439E: ;
    MEM32(0x90A0C4) = edi;

loc_004443A4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B424);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004443B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004443B3u); } /* indirect call */
    }

loc_004443B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004443E6; /* je: equal / zero */

loc_004443BB: ;
    MEM32(esi) = 0x83B444;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004443D1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004443D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D14);
    ecx = eax;
    PUSH32(esp, 0x004443DEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004443DE: ;
    MEM32(0x90A160) = esi;
    goto loc_004443EC;

loc_004443E6: ;
    MEM32(0x90A160) = edi;

loc_004443EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B448);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004443FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004443FBu); } /* indirect call */
    }

loc_004443FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044442E; /* je: equal / zero */

loc_00444403: ;
    MEM32(esi) = 0x83B460;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444419u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444419: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C3A);
    ecx = eax;
    PUSH32(esp, 0x00444426u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444426: ;
    MEM32(0x90A0F8) = esi;
    goto loc_00444434;

loc_0044442E: ;
    MEM32(0x90A0F8) = edi;

loc_00444434: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B464);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444445u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444443u); } /* indirect call */
    }

loc_00444445: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444476; /* je: equal / zero */

loc_0044444B: ;
    MEM32(esi) = 0x83B47C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444461u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444461: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A9C);
    ecx = eax;
    PUSH32(esp, 0x0044446Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044446E: ;
    MEM32(0x90A1E4) = esi;
    goto loc_0044447C;

loc_00444476: ;
    MEM32(0x90A1E4) = edi;

loc_0044447C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B480);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044448Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044448Bu); } /* indirect call */
    }

loc_0044448D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004444BE; /* je: equal / zero */

loc_00444493: ;
    MEM32(esi) = 0x83B498;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004444A9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004444A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58FE);
    ecx = eax;
    PUSH32(esp, 0x004444B6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004444B6: ;
    MEM32(0x90A18C) = esi;
    goto loc_004444C4;

loc_004444BE: ;
    MEM32(0x90A18C) = edi;

loc_004444C4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B49C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004444D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004444D3u); } /* indirect call */
    }

loc_004444D5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444506; /* je: equal / zero */

loc_004444DB: ;
    MEM32(esi) = 0x83B4C8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004444F1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004444F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C46E4);
    ecx = eax;
    PUSH32(esp, 0x004444FEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004444FE: ;
    MEM32(0x90A0EC) = esi;
    goto loc_0044450C;

loc_00444506: ;
    MEM32(0x90A0EC) = edi;

loc_0044450C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4CC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044451Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044451Bu); } /* indirect call */
    }

loc_0044451D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044454E; /* je: equal / zero */

loc_00444523: ;
    MEM32(esi) = 0x83B4F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444539u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444539: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4E78);
    ecx = eax;
    PUSH32(esp, 0x00444546u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444546: ;
    MEM32(0x90A0C0) = esi;
    goto loc_00444554;

loc_0044454E: ;
    MEM32(0x90A0C0) = edi;

loc_00444554: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444563u); } /* indirect call */
    }

loc_00444565: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444596; /* je: equal / zero */

loc_0044456B: ;
    MEM32(esi) = 0x83B520;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444581u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4DFA);
    ecx = eax;
    PUSH32(esp, 0x0044458Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044458E: ;
    MEM32(0x90A19C) = esi;
    goto loc_0044459C;

loc_00444596: ;
    MEM32(0x90A19C) = edi;

loc_0044459C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B524);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004445ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445ABu); } /* indirect call */
    }

loc_004445AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004445DE; /* je: equal / zero */

loc_004445B3: ;
    MEM32(esi) = 0x83B54C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004445C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004445C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4D7C);
    ecx = eax;
    PUSH32(esp, 0x004445D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004445D6: ;
    MEM32(0x90A188) = esi;
    goto loc_004445E4;

loc_004445DE: ;
    MEM32(0x90A188) = edi;

loc_004445E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B550);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004445F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445F3u); } /* indirect call */
    }

loc_004445F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444626; /* je: equal / zero */

loc_004445FB: ;
    MEM32(esi) = 0x83B584;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444611u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444611: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54C2);
    ecx = eax;
    PUSH32(esp, 0x0044461Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044461E: ;
    MEM32(0x90A16C) = esi;
    goto loc_0044462C;

loc_00444626: ;
    MEM32(0x90A16C) = edi;

loc_0044462C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B588);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044463Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044463Bu); } /* indirect call */
    }

loc_0044463D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044466E; /* je: equal / zero */

loc_00444643: ;
    MEM32(esi) = 0x83B5C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56D8);
    ecx = eax;
    PUSH32(esp, 0x00444666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444666: ;
    MEM32(0x90A140) = esi;
    goto loc_00444674;

loc_0044466E: ;
    MEM32(0x90A140) = edi;

loc_00444674: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444683u); } /* indirect call */
    }

loc_00444685: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446B6; /* je: equal / zero */

loc_0044468B: ;
    MEM32(esi) = 0x83B5E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEA);
    ecx = eax;
    PUSH32(esp, 0x004446AEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446AE: ;
    MEM32(0x90A158) = esi;
    goto loc_004446BC;

loc_004446B6: ;
    MEM32(0x90A158) = edi;

loc_004446BC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5E8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004446CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004446CBu); } /* indirect call */
    }

loc_004446CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446FE; /* je: equal / zero */

loc_004446D3: ;
    MEM32(esi) = 0x83B604;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446E9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C49A4);
    ecx = eax;
    PUSH32(esp, 0x004446F6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446F6: ;
    MEM32(0x90A0DC) = esi;
    goto loc_00444704;

loc_004446FE: ;
    MEM32(0x90A0DC) = edi;

loc_00444704: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B608);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444713u); } /* indirect call */
    }

loc_00444715: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444746; /* je: equal / zero */

loc_0044471B: ;
    MEM32(esi) = 0x83B630;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444731u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4200);
    ecx = eax;
    PUSH32(esp, 0x0044473Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044473E: ;
    MEM32(0x90A0E0) = esi;
    goto loc_0044474C;

loc_00444746: ;
    MEM32(0x90A0E0) = edi;

loc_0044474C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B634);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044475Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044475Bu); } /* indirect call */
    }

loc_0044475D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044478E; /* je: equal / zero */

loc_00444763: ;
    MEM32(esi) = 0x83B658;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444779u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444779: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5221);
    ecx = eax;
    PUSH32(esp, 0x00444786u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444786: ;
    MEM32(0x90A14C) = esi;
    goto loc_00444794;

loc_0044478E: ;
    MEM32(0x90A14C) = edi;

loc_00444794: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B65C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004447A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447A3u); } /* indirect call */
    }

loc_004447A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004447D6; /* je: equal / zero */

loc_004447AB: ;
    MEM32(esi) = 0x83B67C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004447C1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004447C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4CD2);
    ecx = eax;
    PUSH32(esp, 0x004447CEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004447CE: ;
    MEM32(0x90A148) = esi;
    goto loc_004447DC;

loc_004447D6: ;
    MEM32(0x90A148) = edi;

loc_004447DC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B680);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004447EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447EBu); } /* indirect call */
    }

loc_004447ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044481E; /* je: equal / zero */

loc_004447F3: ;
    MEM32(esi) = 0x83B6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444809u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444809: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C52D0);
    ecx = eax;
    PUSH32(esp, 0x00444816u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444816: ;
    MEM32(0x90A13C) = esi;
    goto loc_00444824;

loc_0044481E: ;
    MEM32(0x90A13C) = edi;

loc_00444824: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444833u); } /* indirect call */
    }

loc_00444835: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444866; /* je: equal / zero */

loc_0044483B: ;
    MEM32(esi) = 0x83B6D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444851u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5829);
    ecx = eax;
    PUSH32(esp, 0x0044485Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044485E: ;
    MEM32(0x90A198) = esi;
    goto loc_0044486C;

loc_00444866: ;
    MEM32(0x90A198) = edi;

loc_0044486C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044487Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044487Bu); } /* indirect call */
    }

loc_0044487D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448AE; /* je: equal / zero */

loc_00444883: ;
    MEM32(esi) = 0x83B700;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444899u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444899: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54AD);
    ecx = eax;
    PUSH32(esp, 0x004448A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448A6: ;
    MEM32(0x90A1DC) = esi;
    goto loc_004448B4;

loc_004448AE: ;
    MEM32(0x90A1DC) = edi;

loc_004448B4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B704);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004448C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004448C3u); } /* indirect call */
    }

loc_004448C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448F6; /* je: equal / zero */

loc_004448CB: ;
    MEM32(esi) = 0x83B72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004448E1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004448E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEF);
    ecx = eax;
    PUSH32(esp, 0x004448EEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448EE: ;
    MEM32(0x90A108) = esi;
    goto loc_004448FC;

loc_004448F6: ;
    MEM32(0x90A108) = edi;

loc_004448FC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B730);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044490Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044490Bu); } /* indirect call */
    }

loc_0044490D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044493E; /* je: equal / zero */

loc_00444913: ;
    MEM32(esi) = 0x83B758;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444929u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4131);
    ecx = eax;
    PUSH32(esp, 0x00444936u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444936: ;
    MEM32(0x90A1B4) = esi;
    goto loc_00444944;

loc_0044493E: ;
    MEM32(0x90A1B4) = edi;

loc_00444944: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444441
 * Original: 0x00444441 - 0x00445008 (3015 bytes, 800 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444441(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444441: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444445u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444443u); } /* indirect call */
    }

loc_00444445: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444476; /* je: equal / zero */

loc_0044444B: ;
    MEM32(esi) = 0x83B47C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444461u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444461: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A9C);
    ecx = eax;
    PUSH32(esp, 0x0044446Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044446E: ;
    MEM32(0x90A1E4) = esi;
    goto loc_0044447C;

loc_00444476: ;
    MEM32(0x90A1E4) = edi;

loc_0044447C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B480);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044448Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044448Bu); } /* indirect call */
    }

loc_0044448D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004444BE; /* je: equal / zero */

loc_00444493: ;
    MEM32(esi) = 0x83B498;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004444A9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004444A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58FE);
    ecx = eax;
    PUSH32(esp, 0x004444B6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004444B6: ;
    MEM32(0x90A18C) = esi;
    goto loc_004444C4;

loc_004444BE: ;
    MEM32(0x90A18C) = edi;

loc_004444C4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B49C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004444D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004444D3u); } /* indirect call */
    }

loc_004444D5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444506; /* je: equal / zero */

loc_004444DB: ;
    MEM32(esi) = 0x83B4C8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004444F1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004444F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C46E4);
    ecx = eax;
    PUSH32(esp, 0x004444FEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004444FE: ;
    MEM32(0x90A0EC) = esi;
    goto loc_0044450C;

loc_00444506: ;
    MEM32(0x90A0EC) = edi;

loc_0044450C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4CC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044451Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044451Bu); } /* indirect call */
    }

loc_0044451D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044454E; /* je: equal / zero */

loc_00444523: ;
    MEM32(esi) = 0x83B4F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444539u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444539: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4E78);
    ecx = eax;
    PUSH32(esp, 0x00444546u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444546: ;
    MEM32(0x90A0C0) = esi;
    goto loc_00444554;

loc_0044454E: ;
    MEM32(0x90A0C0) = edi;

loc_00444554: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444563u); } /* indirect call */
    }

loc_00444565: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444596; /* je: equal / zero */

loc_0044456B: ;
    MEM32(esi) = 0x83B520;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444581u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4DFA);
    ecx = eax;
    PUSH32(esp, 0x0044458Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044458E: ;
    MEM32(0x90A19C) = esi;
    goto loc_0044459C;

loc_00444596: ;
    MEM32(0x90A19C) = edi;

loc_0044459C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B524);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004445ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445ABu); } /* indirect call */
    }

loc_004445AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004445DE; /* je: equal / zero */

loc_004445B3: ;
    MEM32(esi) = 0x83B54C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004445C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004445C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4D7C);
    ecx = eax;
    PUSH32(esp, 0x004445D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004445D6: ;
    MEM32(0x90A188) = esi;
    goto loc_004445E4;

loc_004445DE: ;
    MEM32(0x90A188) = edi;

loc_004445E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B550);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004445F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445F3u); } /* indirect call */
    }

loc_004445F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444626; /* je: equal / zero */

loc_004445FB: ;
    MEM32(esi) = 0x83B584;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444611u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444611: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54C2);
    ecx = eax;
    PUSH32(esp, 0x0044461Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044461E: ;
    MEM32(0x90A16C) = esi;
    goto loc_0044462C;

loc_00444626: ;
    MEM32(0x90A16C) = edi;

loc_0044462C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B588);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044463Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044463Bu); } /* indirect call */
    }

loc_0044463D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044466E; /* je: equal / zero */

loc_00444643: ;
    MEM32(esi) = 0x83B5C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56D8);
    ecx = eax;
    PUSH32(esp, 0x00444666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444666: ;
    MEM32(0x90A140) = esi;
    goto loc_00444674;

loc_0044466E: ;
    MEM32(0x90A140) = edi;

loc_00444674: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444683u); } /* indirect call */
    }

loc_00444685: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446B6; /* je: equal / zero */

loc_0044468B: ;
    MEM32(esi) = 0x83B5E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEA);
    ecx = eax;
    PUSH32(esp, 0x004446AEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446AE: ;
    MEM32(0x90A158) = esi;
    goto loc_004446BC;

loc_004446B6: ;
    MEM32(0x90A158) = edi;

loc_004446BC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5E8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004446CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004446CBu); } /* indirect call */
    }

loc_004446CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446FE; /* je: equal / zero */

loc_004446D3: ;
    MEM32(esi) = 0x83B604;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446E9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C49A4);
    ecx = eax;
    PUSH32(esp, 0x004446F6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446F6: ;
    MEM32(0x90A0DC) = esi;
    goto loc_00444704;

loc_004446FE: ;
    MEM32(0x90A0DC) = edi;

loc_00444704: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B608);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444713u); } /* indirect call */
    }

loc_00444715: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444746; /* je: equal / zero */

loc_0044471B: ;
    MEM32(esi) = 0x83B630;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444731u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4200);
    ecx = eax;
    PUSH32(esp, 0x0044473Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044473E: ;
    MEM32(0x90A0E0) = esi;
    goto loc_0044474C;

loc_00444746: ;
    MEM32(0x90A0E0) = edi;

loc_0044474C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B634);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044475Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044475Bu); } /* indirect call */
    }

loc_0044475D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044478E; /* je: equal / zero */

loc_00444763: ;
    MEM32(esi) = 0x83B658;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444779u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444779: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5221);
    ecx = eax;
    PUSH32(esp, 0x00444786u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444786: ;
    MEM32(0x90A14C) = esi;
    goto loc_00444794;

loc_0044478E: ;
    MEM32(0x90A14C) = edi;

loc_00444794: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B65C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004447A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447A3u); } /* indirect call */
    }

loc_004447A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004447D6; /* je: equal / zero */

loc_004447AB: ;
    MEM32(esi) = 0x83B67C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004447C1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004447C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4CD2);
    ecx = eax;
    PUSH32(esp, 0x004447CEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004447CE: ;
    MEM32(0x90A148) = esi;
    goto loc_004447DC;

loc_004447D6: ;
    MEM32(0x90A148) = edi;

loc_004447DC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B680);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004447EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447EBu); } /* indirect call */
    }

loc_004447ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044481E; /* je: equal / zero */

loc_004447F3: ;
    MEM32(esi) = 0x83B6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444809u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444809: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C52D0);
    ecx = eax;
    PUSH32(esp, 0x00444816u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444816: ;
    MEM32(0x90A13C) = esi;
    goto loc_00444824;

loc_0044481E: ;
    MEM32(0x90A13C) = edi;

loc_00444824: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444833u); } /* indirect call */
    }

loc_00444835: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444866; /* je: equal / zero */

loc_0044483B: ;
    MEM32(esi) = 0x83B6D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444851u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5829);
    ecx = eax;
    PUSH32(esp, 0x0044485Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044485E: ;
    MEM32(0x90A198) = esi;
    goto loc_0044486C;

loc_00444866: ;
    MEM32(0x90A198) = edi;

loc_0044486C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044487Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044487Bu); } /* indirect call */
    }

loc_0044487D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448AE; /* je: equal / zero */

loc_00444883: ;
    MEM32(esi) = 0x83B700;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444899u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444899: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54AD);
    ecx = eax;
    PUSH32(esp, 0x004448A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448A6: ;
    MEM32(0x90A1DC) = esi;
    goto loc_004448B4;

loc_004448AE: ;
    MEM32(0x90A1DC) = edi;

loc_004448B4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B704);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004448C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004448C3u); } /* indirect call */
    }

loc_004448C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448F6; /* je: equal / zero */

loc_004448CB: ;
    MEM32(esi) = 0x83B72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004448E1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004448E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEF);
    ecx = eax;
    PUSH32(esp, 0x004448EEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448EE: ;
    MEM32(0x90A108) = esi;
    goto loc_004448FC;

loc_004448F6: ;
    MEM32(0x90A108) = edi;

loc_004448FC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B730);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044490Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044490Bu); } /* indirect call */
    }

loc_0044490D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044493E; /* je: equal / zero */

loc_00444913: ;
    MEM32(esi) = 0x83B758;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444929u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4131);
    ecx = eax;
    PUSH32(esp, 0x00444936u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444936: ;
    MEM32(0x90A1B4) = esi;
    goto loc_00444944;

loc_0044493E: ;
    MEM32(0x90A1B4) = edi;

loc_00444944: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044454C
 * Original: 0x0044454C - 0x00445008 (2748 bytes, 729 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044454C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0044454C: ;
    goto loc_00444554;

    MEM32(0x90A0C0) = edi;

loc_00444554: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444563u); } /* indirect call */
    }

loc_00444565: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444596; /* je: equal / zero */

loc_0044456B: ;
    MEM32(esi) = 0x83B520;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444581u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4DFA);
    ecx = eax;
    PUSH32(esp, 0x0044458Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044458E: ;
    MEM32(0x90A19C) = esi;
    goto loc_0044459C;

loc_00444596: ;
    MEM32(0x90A19C) = edi;

loc_0044459C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B524);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004445ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445ABu); } /* indirect call */
    }

loc_004445AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004445DE; /* je: equal / zero */

loc_004445B3: ;
    MEM32(esi) = 0x83B54C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004445C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004445C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4D7C);
    ecx = eax;
    PUSH32(esp, 0x004445D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004445D6: ;
    MEM32(0x90A188) = esi;
    goto loc_004445E4;

loc_004445DE: ;
    MEM32(0x90A188) = edi;

loc_004445E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B550);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004445F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445F3u); } /* indirect call */
    }

loc_004445F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444626; /* je: equal / zero */

loc_004445FB: ;
    MEM32(esi) = 0x83B584;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444611u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444611: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54C2);
    ecx = eax;
    PUSH32(esp, 0x0044461Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044461E: ;
    MEM32(0x90A16C) = esi;
    goto loc_0044462C;

loc_00444626: ;
    MEM32(0x90A16C) = edi;

loc_0044462C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B588);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044463Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044463Bu); } /* indirect call */
    }

loc_0044463D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044466E; /* je: equal / zero */

loc_00444643: ;
    MEM32(esi) = 0x83B5C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56D8);
    ecx = eax;
    PUSH32(esp, 0x00444666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444666: ;
    MEM32(0x90A140) = esi;
    goto loc_00444674;

loc_0044466E: ;
    MEM32(0x90A140) = edi;

loc_00444674: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444683u); } /* indirect call */
    }

loc_00444685: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446B6; /* je: equal / zero */

loc_0044468B: ;
    MEM32(esi) = 0x83B5E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEA);
    ecx = eax;
    PUSH32(esp, 0x004446AEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446AE: ;
    MEM32(0x90A158) = esi;
    goto loc_004446BC;

loc_004446B6: ;
    MEM32(0x90A158) = edi;

loc_004446BC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5E8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004446CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004446CBu); } /* indirect call */
    }

loc_004446CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446FE; /* je: equal / zero */

loc_004446D3: ;
    MEM32(esi) = 0x83B604;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446E9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C49A4);
    ecx = eax;
    PUSH32(esp, 0x004446F6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446F6: ;
    MEM32(0x90A0DC) = esi;
    goto loc_00444704;

loc_004446FE: ;
    MEM32(0x90A0DC) = edi;

loc_00444704: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B608);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444713u); } /* indirect call */
    }

loc_00444715: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444746; /* je: equal / zero */

loc_0044471B: ;
    MEM32(esi) = 0x83B630;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444731u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4200);
    ecx = eax;
    PUSH32(esp, 0x0044473Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044473E: ;
    MEM32(0x90A0E0) = esi;
    goto loc_0044474C;

loc_00444746: ;
    MEM32(0x90A0E0) = edi;

loc_0044474C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B634);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044475Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044475Bu); } /* indirect call */
    }

loc_0044475D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044478E; /* je: equal / zero */

loc_00444763: ;
    MEM32(esi) = 0x83B658;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444779u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444779: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5221);
    ecx = eax;
    PUSH32(esp, 0x00444786u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444786: ;
    MEM32(0x90A14C) = esi;
    goto loc_00444794;

loc_0044478E: ;
    MEM32(0x90A14C) = edi;

loc_00444794: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B65C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004447A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447A3u); } /* indirect call */
    }

loc_004447A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004447D6; /* je: equal / zero */

loc_004447AB: ;
    MEM32(esi) = 0x83B67C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004447C1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004447C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4CD2);
    ecx = eax;
    PUSH32(esp, 0x004447CEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004447CE: ;
    MEM32(0x90A148) = esi;
    goto loc_004447DC;

loc_004447D6: ;
    MEM32(0x90A148) = edi;

loc_004447DC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B680);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004447EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447EBu); } /* indirect call */
    }

loc_004447ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044481E; /* je: equal / zero */

loc_004447F3: ;
    MEM32(esi) = 0x83B6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444809u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444809: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C52D0);
    ecx = eax;
    PUSH32(esp, 0x00444816u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444816: ;
    MEM32(0x90A13C) = esi;
    goto loc_00444824;

loc_0044481E: ;
    MEM32(0x90A13C) = edi;

loc_00444824: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444833u); } /* indirect call */
    }

loc_00444835: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444866; /* je: equal / zero */

loc_0044483B: ;
    MEM32(esi) = 0x83B6D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444851u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5829);
    ecx = eax;
    PUSH32(esp, 0x0044485Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044485E: ;
    MEM32(0x90A198) = esi;
    goto loc_0044486C;

loc_00444866: ;
    MEM32(0x90A198) = edi;

loc_0044486C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044487Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044487Bu); } /* indirect call */
    }

loc_0044487D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448AE; /* je: equal / zero */

loc_00444883: ;
    MEM32(esi) = 0x83B700;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444899u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444899: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54AD);
    ecx = eax;
    PUSH32(esp, 0x004448A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448A6: ;
    MEM32(0x90A1DC) = esi;
    goto loc_004448B4;

loc_004448AE: ;
    MEM32(0x90A1DC) = edi;

loc_004448B4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B704);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004448C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004448C3u); } /* indirect call */
    }

loc_004448C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448F6; /* je: equal / zero */

loc_004448CB: ;
    MEM32(esi) = 0x83B72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004448E1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004448E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEF);
    ecx = eax;
    PUSH32(esp, 0x004448EEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448EE: ;
    MEM32(0x90A108) = esi;
    goto loc_004448FC;

loc_004448F6: ;
    MEM32(0x90A108) = edi;

loc_004448FC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B730);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044490Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044490Bu); } /* indirect call */
    }

loc_0044490D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044493E; /* je: equal / zero */

loc_00444913: ;
    MEM32(esi) = 0x83B758;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444929u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4131);
    ecx = eax;
    PUSH32(esp, 0x00444936u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444936: ;
    MEM32(0x90A1B4) = esi;
    goto loc_00444944;

loc_0044493E: ;
    MEM32(0x90A1B4) = edi;

loc_00444944: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044454E
 * Original: 0x0044454E - 0x00445008 (2746 bytes, 728 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044454E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0044454E: ;
    MEM32(0x90A0C0) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444563u); } /* indirect call */
    }

loc_00444565: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444596; /* je: equal / zero */

loc_0044456B: ;
    MEM32(esi) = 0x83B520;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444581u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4DFA);
    ecx = eax;
    PUSH32(esp, 0x0044458Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044458E: ;
    MEM32(0x90A19C) = esi;
    goto loc_0044459C;

loc_00444596: ;
    MEM32(0x90A19C) = edi;

loc_0044459C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B524);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004445ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445ABu); } /* indirect call */
    }

loc_004445AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004445DE; /* je: equal / zero */

loc_004445B3: ;
    MEM32(esi) = 0x83B54C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004445C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004445C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4D7C);
    ecx = eax;
    PUSH32(esp, 0x004445D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004445D6: ;
    MEM32(0x90A188) = esi;
    goto loc_004445E4;

loc_004445DE: ;
    MEM32(0x90A188) = edi;

loc_004445E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B550);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004445F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445F3u); } /* indirect call */
    }

loc_004445F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444626; /* je: equal / zero */

loc_004445FB: ;
    MEM32(esi) = 0x83B584;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444611u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444611: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54C2);
    ecx = eax;
    PUSH32(esp, 0x0044461Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044461E: ;
    MEM32(0x90A16C) = esi;
    goto loc_0044462C;

loc_00444626: ;
    MEM32(0x90A16C) = edi;

loc_0044462C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B588);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044463Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044463Bu); } /* indirect call */
    }

loc_0044463D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044466E; /* je: equal / zero */

loc_00444643: ;
    MEM32(esi) = 0x83B5C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56D8);
    ecx = eax;
    PUSH32(esp, 0x00444666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444666: ;
    MEM32(0x90A140) = esi;
    goto loc_00444674;

loc_0044466E: ;
    MEM32(0x90A140) = edi;

loc_00444674: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444683u); } /* indirect call */
    }

loc_00444685: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446B6; /* je: equal / zero */

loc_0044468B: ;
    MEM32(esi) = 0x83B5E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEA);
    ecx = eax;
    PUSH32(esp, 0x004446AEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446AE: ;
    MEM32(0x90A158) = esi;
    goto loc_004446BC;

loc_004446B6: ;
    MEM32(0x90A158) = edi;

loc_004446BC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5E8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004446CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004446CBu); } /* indirect call */
    }

loc_004446CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446FE; /* je: equal / zero */

loc_004446D3: ;
    MEM32(esi) = 0x83B604;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446E9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C49A4);
    ecx = eax;
    PUSH32(esp, 0x004446F6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446F6: ;
    MEM32(0x90A0DC) = esi;
    goto loc_00444704;

loc_004446FE: ;
    MEM32(0x90A0DC) = edi;

loc_00444704: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B608);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444713u); } /* indirect call */
    }

loc_00444715: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444746; /* je: equal / zero */

loc_0044471B: ;
    MEM32(esi) = 0x83B630;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444731u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4200);
    ecx = eax;
    PUSH32(esp, 0x0044473Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044473E: ;
    MEM32(0x90A0E0) = esi;
    goto loc_0044474C;

loc_00444746: ;
    MEM32(0x90A0E0) = edi;

loc_0044474C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B634);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044475Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044475Bu); } /* indirect call */
    }

loc_0044475D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044478E; /* je: equal / zero */

loc_00444763: ;
    MEM32(esi) = 0x83B658;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444779u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444779: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5221);
    ecx = eax;
    PUSH32(esp, 0x00444786u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444786: ;
    MEM32(0x90A14C) = esi;
    goto loc_00444794;

loc_0044478E: ;
    MEM32(0x90A14C) = edi;

loc_00444794: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B65C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004447A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447A3u); } /* indirect call */
    }

loc_004447A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004447D6; /* je: equal / zero */

loc_004447AB: ;
    MEM32(esi) = 0x83B67C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004447C1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004447C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4CD2);
    ecx = eax;
    PUSH32(esp, 0x004447CEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004447CE: ;
    MEM32(0x90A148) = esi;
    goto loc_004447DC;

loc_004447D6: ;
    MEM32(0x90A148) = edi;

loc_004447DC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B680);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004447EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447EBu); } /* indirect call */
    }

loc_004447ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044481E; /* je: equal / zero */

loc_004447F3: ;
    MEM32(esi) = 0x83B6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444809u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444809: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C52D0);
    ecx = eax;
    PUSH32(esp, 0x00444816u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444816: ;
    MEM32(0x90A13C) = esi;
    goto loc_00444824;

loc_0044481E: ;
    MEM32(0x90A13C) = edi;

loc_00444824: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444833u); } /* indirect call */
    }

loc_00444835: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444866; /* je: equal / zero */

loc_0044483B: ;
    MEM32(esi) = 0x83B6D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444851u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5829);
    ecx = eax;
    PUSH32(esp, 0x0044485Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044485E: ;
    MEM32(0x90A198) = esi;
    goto loc_0044486C;

loc_00444866: ;
    MEM32(0x90A198) = edi;

loc_0044486C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044487Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044487Bu); } /* indirect call */
    }

loc_0044487D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448AE; /* je: equal / zero */

loc_00444883: ;
    MEM32(esi) = 0x83B700;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444899u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444899: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54AD);
    ecx = eax;
    PUSH32(esp, 0x004448A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448A6: ;
    MEM32(0x90A1DC) = esi;
    goto loc_004448B4;

loc_004448AE: ;
    MEM32(0x90A1DC) = edi;

loc_004448B4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B704);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004448C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004448C3u); } /* indirect call */
    }

loc_004448C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448F6; /* je: equal / zero */

loc_004448CB: ;
    MEM32(esi) = 0x83B72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004448E1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004448E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEF);
    ecx = eax;
    PUSH32(esp, 0x004448EEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448EE: ;
    MEM32(0x90A108) = esi;
    goto loc_004448FC;

loc_004448F6: ;
    MEM32(0x90A108) = edi;

loc_004448FC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B730);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044490Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044490Bu); } /* indirect call */
    }

loc_0044490D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044493E; /* je: equal / zero */

loc_00444913: ;
    MEM32(esi) = 0x83B758;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444929u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4131);
    ecx = eax;
    PUSH32(esp, 0x00444936u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444936: ;
    MEM32(0x90A1B4) = esi;
    goto loc_00444944;

loc_0044493E: ;
    MEM32(0x90A1B4) = edi;

loc_00444944: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444554
 * Original: 0x00444554 - 0x00445008 (2740 bytes, 727 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444554(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444554: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444563u); } /* indirect call */
    }

loc_00444565: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444596; /* je: equal / zero */

loc_0044456B: ;
    MEM32(esi) = 0x83B520;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444581u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4DFA);
    ecx = eax;
    PUSH32(esp, 0x0044458Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044458E: ;
    MEM32(0x90A19C) = esi;
    goto loc_0044459C;

loc_00444596: ;
    MEM32(0x90A19C) = edi;

loc_0044459C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B524);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004445ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445ABu); } /* indirect call */
    }

loc_004445AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004445DE; /* je: equal / zero */

loc_004445B3: ;
    MEM32(esi) = 0x83B54C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004445C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004445C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4D7C);
    ecx = eax;
    PUSH32(esp, 0x004445D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004445D6: ;
    MEM32(0x90A188) = esi;
    goto loc_004445E4;

loc_004445DE: ;
    MEM32(0x90A188) = edi;

loc_004445E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B550);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004445F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004445F3u); } /* indirect call */
    }

loc_004445F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444626; /* je: equal / zero */

loc_004445FB: ;
    MEM32(esi) = 0x83B584;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444611u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444611: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54C2);
    ecx = eax;
    PUSH32(esp, 0x0044461Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044461E: ;
    MEM32(0x90A16C) = esi;
    goto loc_0044462C;

loc_00444626: ;
    MEM32(0x90A16C) = edi;

loc_0044462C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B588);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044463Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044463Bu); } /* indirect call */
    }

loc_0044463D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044466E; /* je: equal / zero */

loc_00444643: ;
    MEM32(esi) = 0x83B5C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56D8);
    ecx = eax;
    PUSH32(esp, 0x00444666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444666: ;
    MEM32(0x90A140) = esi;
    goto loc_00444674;

loc_0044466E: ;
    MEM32(0x90A140) = edi;

loc_00444674: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444683u); } /* indirect call */
    }

loc_00444685: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446B6; /* je: equal / zero */

loc_0044468B: ;
    MEM32(esi) = 0x83B5E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEA);
    ecx = eax;
    PUSH32(esp, 0x004446AEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446AE: ;
    MEM32(0x90A158) = esi;
    goto loc_004446BC;

loc_004446B6: ;
    MEM32(0x90A158) = edi;

loc_004446BC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5E8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004446CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004446CBu); } /* indirect call */
    }

loc_004446CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004446FE; /* je: equal / zero */

loc_004446D3: ;
    MEM32(esi) = 0x83B604;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004446E9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004446E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C49A4);
    ecx = eax;
    PUSH32(esp, 0x004446F6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004446F6: ;
    MEM32(0x90A0DC) = esi;
    goto loc_00444704;

loc_004446FE: ;
    MEM32(0x90A0DC) = edi;

loc_00444704: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B608);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444713u); } /* indirect call */
    }

loc_00444715: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444746; /* je: equal / zero */

loc_0044471B: ;
    MEM32(esi) = 0x83B630;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444731u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4200);
    ecx = eax;
    PUSH32(esp, 0x0044473Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044473E: ;
    MEM32(0x90A0E0) = esi;
    goto loc_0044474C;

loc_00444746: ;
    MEM32(0x90A0E0) = edi;

loc_0044474C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B634);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044475Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044475Bu); } /* indirect call */
    }

loc_0044475D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044478E; /* je: equal / zero */

loc_00444763: ;
    MEM32(esi) = 0x83B658;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444779u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444779: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5221);
    ecx = eax;
    PUSH32(esp, 0x00444786u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444786: ;
    MEM32(0x90A14C) = esi;
    goto loc_00444794;

loc_0044478E: ;
    MEM32(0x90A14C) = edi;

loc_00444794: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B65C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004447A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447A3u); } /* indirect call */
    }

loc_004447A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004447D6; /* je: equal / zero */

loc_004447AB: ;
    MEM32(esi) = 0x83B67C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004447C1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004447C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4CD2);
    ecx = eax;
    PUSH32(esp, 0x004447CEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004447CE: ;
    MEM32(0x90A148) = esi;
    goto loc_004447DC;

loc_004447D6: ;
    MEM32(0x90A148) = edi;

loc_004447DC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B680);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004447EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004447EBu); } /* indirect call */
    }

loc_004447ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044481E; /* je: equal / zero */

loc_004447F3: ;
    MEM32(esi) = 0x83B6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444809u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444809: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C52D0);
    ecx = eax;
    PUSH32(esp, 0x00444816u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444816: ;
    MEM32(0x90A13C) = esi;
    goto loc_00444824;

loc_0044481E: ;
    MEM32(0x90A13C) = edi;

loc_00444824: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444833u); } /* indirect call */
    }

loc_00444835: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444866; /* je: equal / zero */

loc_0044483B: ;
    MEM32(esi) = 0x83B6D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444851u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5829);
    ecx = eax;
    PUSH32(esp, 0x0044485Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044485E: ;
    MEM32(0x90A198) = esi;
    goto loc_0044486C;

loc_00444866: ;
    MEM32(0x90A198) = edi;

loc_0044486C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044487Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044487Bu); } /* indirect call */
    }

loc_0044487D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448AE; /* je: equal / zero */

loc_00444883: ;
    MEM32(esi) = 0x83B700;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444899u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444899: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54AD);
    ecx = eax;
    PUSH32(esp, 0x004448A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448A6: ;
    MEM32(0x90A1DC) = esi;
    goto loc_004448B4;

loc_004448AE: ;
    MEM32(0x90A1DC) = edi;

loc_004448B4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B704);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004448C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004448C3u); } /* indirect call */
    }

loc_004448C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004448F6; /* je: equal / zero */

loc_004448CB: ;
    MEM32(esi) = 0x83B72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004448E1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004448E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEF);
    ecx = eax;
    PUSH32(esp, 0x004448EEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004448EE: ;
    MEM32(0x90A108) = esi;
    goto loc_004448FC;

loc_004448F6: ;
    MEM32(0x90A108) = edi;

loc_004448FC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B730);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044490Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044490Bu); } /* indirect call */
    }

loc_0044490D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044493E; /* je: equal / zero */

loc_00444913: ;
    MEM32(esi) = 0x83B758;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444929u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4131);
    ecx = eax;
    PUSH32(esp, 0x00444936u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444936: ;
    MEM32(0x90A1B4) = esi;
    goto loc_00444944;

loc_0044493E: ;
    MEM32(0x90A1B4) = edi;

loc_00444944: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444931
 * Original: 0x00444931 - 0x00445008 (1751 bytes, 465 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444931(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444931: ;
    PUSH32(esp, 0x00444936u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444936: ;
    MEM32(0x90A1B4) = esi;
    goto loc_00444944;

    MEM32(0x90A1B4) = edi;

loc_00444944: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044494C
 * Original: 0x0044494C - 0x00445008 (1724 bytes, 459 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044494C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0044494C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444953
 * Original: 0x00444953 - 0x00445008 (1717 bytes, 457 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444953(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444953: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444953u); } /* indirect call */
    }

loc_00444955: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444986; /* je: equal / zero */

loc_0044495B: ;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

loc_00444986: ;
    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044496C
 * Original: 0x0044496C - 0x00445008 (1692 bytes, 450 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044496C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0044496C: ;
    PUSH32(esp, 0x00444971u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444972
 * Original: 0x00444972 - 0x00445008 (1686 bytes, 448 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444972(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444972: ;
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444979
 * Original: 0x00444979 - 0x00445008 (1679 bytes, 446 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444979(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444979: ;
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0044497E: ;
    MEM32(0x90A184) = esi;
    goto loc_0044498C;

    MEM32(0x90A184) = edi;

loc_0044498C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0044499Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044499Bu); } /* indirect call */
    }

loc_0044499D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004449CE; /* je: equal / zero */

loc_004449A3: ;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004449B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004449C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004449C6: ;
    MEM32(0x90A178) = esi;
    goto loc_004449D4;

loc_004449CE: ;
    MEM32(0x90A178) = edi;

loc_004449D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004449E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449E3u); } /* indirect call */
    }

loc_004449E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A16; /* je: equal / zero */

loc_004449EB: ;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A01u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00444A0Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A0E: ;
    MEM32(0x90A1A8) = esi;
    goto loc_00444A1C;

loc_00444A16: ;
    MEM32(0x90A1A8) = edi;

loc_00444A1C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A2Bu); } /* indirect call */
    }

loc_00444A2D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A5E; /* je: equal / zero */

loc_00444A33: ;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x00444A56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A56: ;
    MEM32(0x90A10C) = esi;
    goto loc_00444A64;

loc_00444A5E: ;
    MEM32(0x90A10C) = edi;

loc_00444A64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A73u); } /* indirect call */
    }

loc_00444A75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AA6; /* je: equal / zero */

loc_00444A7B: ;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444A91u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444A91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00444A9Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444A9E: ;
    MEM32(0x90A1CC) = esi;
    goto loc_00444AAC;

loc_00444AA6: ;
    MEM32(0x90A1CC) = edi;

loc_00444AAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444ABBu); } /* indirect call */
    }

loc_00444ABD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AEE; /* je: equal / zero */

loc_00444AC3: ;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444AD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x00444AE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444AE6: ;
    MEM32(0x90A190) = esi;
    goto loc_00444AF4;

loc_00444AEE: ;
    MEM32(0x90A190) = edi;

loc_00444AF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B03u); } /* indirect call */
    }

loc_00444B05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B36; /* je: equal / zero */

loc_00444B0B: ;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00444B2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B2E: ;
    MEM32(0x90A0FC) = esi;
    goto loc_00444B3C;

loc_00444B36: ;
    MEM32(0x90A0FC) = edi;

loc_00444B3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B4Bu); } /* indirect call */
    }

loc_00444B4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444B7E; /* je: equal / zero */

loc_00444B53: ;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444B69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x00444B76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444B76: ;
    MEM32(0x90A144) = esi;
    goto loc_00444B84;

loc_00444B7E: ;
    MEM32(0x90A144) = edi;

loc_00444B84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444B95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444B93u); } /* indirect call */
    }

loc_00444B95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444BC6; /* je: equal / zero */

loc_00444B9B: ;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00444BBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444BBE: ;
    MEM32(0x90A1B0) = esi;
    goto loc_00444BCC;

loc_00444BC6: ;
    MEM32(0x90A1B0) = edi;

loc_00444BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444BDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444BDBu); } /* indirect call */
    }

loc_00444BDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C0E; /* je: equal / zero */

loc_00444BE3: ;
    MEM32(esi) = 0x83B948;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444BF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD3);
    ecx = eax;
    PUSH32(esp, 0x00444C06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C06: ;
    MEM32(0x90A174) = esi;
    goto loc_00444C14;

loc_00444C0E: ;
    MEM32(0x90A174) = edi;

loc_00444C14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B94C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C23u); } /* indirect call */
    }

loc_00444C25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C56; /* je: equal / zero */

loc_00444C2B: ;
    MEM32(esi) = 0x83B984;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58CA);
    ecx = eax;
    PUSH32(esp, 0x00444C4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C4E: ;
    MEM32(0x90A150) = esi;
    goto loc_00444C5C;

loc_00444C56: ;
    MEM32(0x90A150) = edi;

loc_00444C5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B988);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444C6Bu); } /* indirect call */
    }

loc_00444C6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C9E; /* je: equal / zero */

loc_00444C73: ;
    MEM32(esi) = 0x83B9C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444C89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444C89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51F4);
    ecx = eax;
    PUSH32(esp, 0x00444C96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444C96: ;
    MEM32(0x90A12C) = esi;
    goto loc_00444CA4;

loc_00444C9E: ;
    MEM32(0x90A12C) = edi;

loc_00444CA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CB3u); } /* indirect call */
    }

loc_00444CB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444CE6; /* je: equal / zero */

loc_00444CBB: ;
    MEM32(esi) = 0x83B9E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444CD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5B37);
    ecx = eax;
    PUSH32(esp, 0x00444CDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444CDE: ;
    MEM32(0x90A0D8) = esi;
    goto loc_00444CEC;

loc_00444CE6: ;
    MEM32(0x90A0D8) = edi;

loc_00444CEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B9E4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444CFBu); } /* indirect call */
    }

loc_00444CFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D2E; /* je: equal / zero */

loc_00444D03: ;
    MEM32(esi) = 0x83BA0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4164);
    ecx = eax;
    PUSH32(esp, 0x00444D26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D26: ;
    MEM32(0x90A0CC) = esi;
    goto loc_00444D34;

loc_00444D2E: ;
    MEM32(0x90A0CC) = edi;

loc_00444D34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444D43
 * Original: 0x00444D43 - 0x00445008 (709 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444D43(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444D43: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D43u); } /* indirect call */
    }

loc_00444D45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D76; /* je: equal / zero */

loc_00444D4B: ;
    MEM32(esi) = 0x83BA2C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444D61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444D61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C412A);
    ecx = eax;
    PUSH32(esp, 0x00444D6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444D6E: ;
    MEM32(0x90A15C) = esi;
    goto loc_00444D7C;

loc_00444D76: ;
    MEM32(0x90A15C) = edi;

loc_00444D7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444D8Bu); } /* indirect call */
    }

loc_00444D8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444DBE; /* je: equal / zero */

loc_00444D93: ;
    MEM32(esi) = 0x83BA4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C580C);
    ecx = eax;
    PUSH32(esp, 0x00444DB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DB6: ;
    MEM32(0x90A118) = esi;
    goto loc_00444DC4;

loc_00444DBE: ;
    MEM32(0x90A118) = edi;

loc_00444DC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444DD3u); } /* indirect call */
    }

loc_00444DD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E06; /* je: equal / zero */

loc_00444DDB: ;
    MEM32(esi) = 0x83BA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444DF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EEE);
    ecx = eax;
    PUSH32(esp, 0x00444DFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444DFE: ;
    MEM32(0x90A1C8) = esi;
    goto loc_00444E0C;

loc_00444E06: ;
    MEM32(0x90A1C8) = edi;

loc_00444E0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E1Bu); } /* indirect call */
    }

loc_00444E1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E4E; /* je: equal / zero */

loc_00444E23: ;
    MEM32(esi) = 0x83BA88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C57D6);
    ecx = eax;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

loc_00444E4E: ;
    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444E41
 * Original: 0x00444E41 - 0x00445008 (455 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444E41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444E41: ;
    PUSH32(esp, 0x00444E46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E46: ;
    MEM32(0x90A138) = esi;
    goto loc_00444E54;

    MEM32(0x90A138) = edi;

loc_00444E54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BA8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444E63u); } /* indirect call */
    }

loc_00444E65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E96; /* je: equal / zero */

loc_00444E6B: ;
    MEM32(esi) = 0x83BAA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F8);
    ecx = eax;
    PUSH32(esp, 0x00444E8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444E8E: ;
    MEM32(0x90A164) = esi;
    goto loc_00444E9C;

loc_00444E96: ;
    MEM32(0x90A164) = edi;

loc_00444E9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EABu); } /* indirect call */
    }

loc_00444EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444EB3: ;
    MEM32(esi) = 0x83BAC0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444EC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444EC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C1A);
    ecx = eax;
    PUSH32(esp, 0x00444ED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444ED6: ;
    MEM32(0x90A1B8) = esi;
    goto loc_00444EE4;

loc_00444EDE: ;
    MEM32(0x90A1B8) = edi;

loc_00444EE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAC4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444EF3u); } /* indirect call */
    }

loc_00444EF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F26; /* je: equal / zero */

loc_00444EFB: ;
    MEM32(esi) = 0x83BAE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5078);
    ecx = eax;
    PUSH32(esp, 0x00444F1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F1E: ;
    MEM32(0x90A0E4) = esi;
    goto loc_00444F2C;

loc_00444F26: ;
    MEM32(0x90A0E4) = edi;

loc_00444F2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BAEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F3Bu); } /* indirect call */
    }

loc_00444F3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444F6E; /* je: equal / zero */

loc_00444F43: ;
    MEM32(esi) = 0x83BB08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444F59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD4);
    ecx = eax;
    PUSH32(esp, 0x00444F66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444F66: ;
    MEM32(0x90A1D0) = esi;
    goto loc_00444F74;

loc_00444F6E: ;
    MEM32(0x90A1D0) = edi;

loc_00444F74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00444F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444F83u); } /* indirect call */
    }

loc_00444F85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FB6; /* je: equal / zero */

loc_00444F8B: ;
    MEM32(esi) = 0x83BB30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C53F3);
    ecx = eax;
    PUSH32(esp, 0x00444FAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FAE: ;
    MEM32(0x90A100) = esi;
    goto loc_00444FBC;

loc_00444FB6: ;
    MEM32(0x90A100) = edi;

loc_00444FBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83BB34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00444FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444FCBu); } /* indirect call */
    }

loc_00444FCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444FFF; /* je: equal / zero */

loc_00444FD3: ;
    MEM32(esi) = 0x83BB60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00444FE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00444FE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5307);
    ecx = eax;
    PUSH32(esp, 0x00444FF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00444FF6: ;
    POP32(esp, edi);
    MEM32(0x90A1A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444FFF: ;
    MEM32(0x90A1A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445540
 * Original: 0x00445540 - 0x00445578 (56 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445540: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx);
    eax = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0044555Eu); RECOMP_ABI_CALL(0x0001F574u, sub_0001F574); /* call 0x0001F574 */

loc_0044555E: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00445590
 * Original: 0x00445590 - 0x004455EF (95 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445590(void)
{

loc_00445590: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 4);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00445610
 * Original: 0x00445610 - 0x00445642 (50 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445610: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0044562Au); RECOMP_ABI_CALL(0x00011C67u, sub_00011C67); /* call 0x00011C67 */

loc_0044562A: ;
    edi = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00445650
 * Original: 0x00445650 - 0x00445783 (307 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445650: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    esi = esp + 0xC;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    eax = ebx + 8;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 4;
    goto loc_00445680;

    /* nop */
    /* nop */

loc_00445680: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x14); /* mulss */
    MEMF(edx + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x3C); /* mulss */
    MEMF(esi + eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi + eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00445680; /* jne: not equal / not zero */

loc_0044576B: ;
    eax = MEM32(esp + 0x50);
    ecx = 0x10;
    esi = esp + 0xC;
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004457D0
 * Original: 0x004457D0 - 0x00445804 (52 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004457D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004457D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004457ECu); RECOMP_ABI_CALL(0x0001EA16u, sub_0001EA16); /* call 0x0001EA16 */

loc_004457EC: ;
    edi = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00445820
 * Original: 0x00445820 - 0x0044597D (349 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445820: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0xC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x18) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x20) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x24) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004459E0
 * Original: 0x004459E0 - 0x00445A12 (50 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004459E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004459E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004459FAu); RECOMP_ABI_CALL(0x0002D81Du, sub_0002D81D); /* call 0x0002D81D */

loc_004459FA: ;
    edi = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00445A20
 * Original: 0x00445A20 - 0x00445C32 (530 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445A20: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    xmm6 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    MEMF(esp + 0x2C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(ecx); /* addss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEMF(esp + 4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x60) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 8); /* addss */
    MEMF(eax + 0xC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(eax + 0x14) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(eax + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(eax + 0x1C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x40); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x44); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x48); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x4C); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(eax + 0x20) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(eax + 0x24) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00445CC0
 * Original: 0x00445CC0 - 0x00445CF2 (50 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445CC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445CDAu); RECOMP_ABI_CALL(0x000298FDu, sub_000298FD); /* call 0x000298FD */

loc_00445CDA: ;
    edi = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = eax;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00445D00
 * Original: 0x00445D00 - 0x00445F12 (530 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445D00: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x5C);
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x2C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x60) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x5C) = xmm7.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x5C); /* subss */
    xmm7 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(esp + 0x40) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    eax = MEM32(esp + 0x58);
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp); /* subss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 8); /* subss */
    MEMF(eax + 0xC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(eax + 0x10) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(eax + 0x14) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(eax + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(eax + 0x1C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x3C); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x40); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x44); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x48); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x4C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    MEMF(eax + 0x20) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x38); /* subss */
    MEMF(eax + 0x24) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00445FA0
 * Original: 0x00445FA0 - 0x00445FDE (62 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445FA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00445FBEu); RECOMP_ABI_CALL(0x00026AA9u, sub_00026AA9); /* call 0x00026AA9 */

loc_00445FBE: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x28);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00445FF0
 * Original: 0x00445FF0 - 0x00446234 (580 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00445FF0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004460F6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00446039: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xC); /* subss */
    ecx = MEM32(esp);
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0xC);
    goto loc_004461B0;

loc_004460F6: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 8); /* addss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0xC); /* addss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x1C);

loc_004461B0: ;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    ecx = esp + 0x20;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 0x24;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x0044622Au); RECOMP_ABI_CALL(0x00020456u, sub_00020456); /* call 0x00020456 */

loc_0044622A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004462D0
 * Original: 0x004462D0 - 0x0044634C (124 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004462D0(void)
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

loc_004462D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446370
 * Original: 0x00446370 - 0x004463AE (62 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446370: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0044638Eu); RECOMP_ABI_CALL(0x000271BBu, sub_000271BB); /* call 0x000271BB */

loc_0044638E: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x28);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004463C0
 * Original: 0x004463C0 - 0x004465BB (507 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004463C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004463C0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    MEM32(esp + 0xC) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_push(MEMD(0x7BA2D0)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00446462; /* jbe: below or equal (unsigned <=) */

loc_00446417: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 4); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 8); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_00446462: ;
    fp_push(MEMD(0x83BB68)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00446493; /* jbe: below or equal (unsigned <=) */

loc_00446474: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00446489u); RECOMP_ABI_CALL(0x00026AA9u, sub_00026AA9); /* call 0x00026AA9 */

loc_00446489: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00446493: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    PUSH32(esp, 0x0044649Cu); RECOMP_ABI_CALL(0x005CDCB4u, sub_005CDCB4); /* call 0x005CDCB4 */

loc_0044649C: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = edx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    fp_push(MEMF(0x7A9980)); /* fld float */
    MEM32(esp + 0x2C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 4) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEM32(esp + 8) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0xC) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    edx = MEM32(esp + 0x14);
    ecx = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446640
 * Original: 0x00446640 - 0x00446651 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446640(void)
{

loc_00446640: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D01B8);
    PUSH32(esp, 0x00446650u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00446650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00446660
 * Original: 0x00446660 - 0x00446671 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446660(void)
{

loc_00446660: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D0528);
    PUSH32(esp, 0x00446670u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00446670: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00446680
 * Original: 0x00446680 - 0x00446691 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446680(void)
{

loc_00446680: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D0AA8);
    PUSH32(esp, 0x00446690u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00446690: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004466A0
 * Original: 0x004466A0 - 0x004466B1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004466A0(void)
{

loc_004466A0: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D0BB0);
    PUSH32(esp, 0x004466B0u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_004466B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004466C0
 * Original: 0x004466C0 - 0x004466D1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004466C0(void)
{

loc_004466C0: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D12B0);
    PUSH32(esp, 0x004466D0u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_004466D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004466E0
 * Original: 0x004466E0 - 0x004466F1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004466E0(void)
{

loc_004466E0: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D13B8);
    PUSH32(esp, 0x004466F0u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_004466F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00446700
 * Original: 0x00446700 - 0x00446711 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446700(void)
{

loc_00446700: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D1668);
    PUSH32(esp, 0x00446710u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00446710: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00446720
 * Original: 0x00446720 - 0x00446731 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446720(void)
{

loc_00446720: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D1848);
    PUSH32(esp, 0x00446730u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00446730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00446740
 * Original: 0x00446740 - 0x00446751 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446740(void)
{

loc_00446740: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D1998);
    PUSH32(esp, 0x00446750u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00446750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00446760
 * Original: 0x00446760 - 0x00446771 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446760(void)
{

loc_00446760: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D1DB0);
    PUSH32(esp, 0x00446770u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00446770: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00446780
 * Original: 0x00446780 - 0x00446791 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446780(void)
{

loc_00446780: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D1F20);
    PUSH32(esp, 0x00446790u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00446790: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004467A0
 * Original: 0x004467A0 - 0x004467B1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004467A0(void)
{

loc_004467A0: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8D20B0);
    PUSH32(esp, 0x004467B0u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_004467B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004467C0
 * Original: 0x004467C0 - 0x004467D9 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004467C0(void)
{

loc_004467C0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004467E0
 * Original: 0x004467E0 - 0x004467E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004467E0(void)
{

loc_004467E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004467F0
 * Original: 0x004467F0 - 0x004467F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004467F0(void)
{

loc_004467F0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00446800
 * Original: 0x00446800 - 0x00446813 (19 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446800: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    edx = edx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + edx * 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00446820
 * Original: 0x00446820 - 0x00446833 (19 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446820(void)
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

loc_00446820: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    edx = edx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + edx * 4)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446840
 * Original: 0x00446840 - 0x0044684C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446840: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00446850
 * Original: 0x00446850 - 0x0044685A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446850(void)
{

loc_00446850: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00446860
 * Original: 0x00446860 - 0x00446871 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446860(void)
{

loc_00446860: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = eax + edx * 4;
    eax = ecx + eax * 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00446880
 * Original: 0x00446880 - 0x00446891 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446880(void)
{

loc_00446880: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = eax + edx * 4;
    eax = ecx + eax * 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004468A0
 * Original: 0x004468A0 - 0x004468B1 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004468A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004468A0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = eax + edx * 4;
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004468C0
 * Original: 0x004468C0 - 0x004468C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004468C0(void)
{

loc_004468C0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004468D0
 * Original: 0x004468D0 - 0x004468D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004468D0(void)
{

loc_004468D0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_004468E0
 * Original: 0x004468E0 - 0x004468E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004468E0(void)
{

loc_004468E0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_004468F0
 * Original: 0x004468F0 - 0x004468F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004468F0(void)
{

loc_004468F0: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00446900
 * Original: 0x00446900 - 0x00446903 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446900(void)
{

loc_00446900: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00446910
 * Original: 0x00446910 - 0x00446914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446910(void)
{

loc_00446910: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00446920
 * Original: 0x00446920 - 0x00446929 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00446920(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00446920: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446930
 * Original: 0x00446930 - 0x00446937 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446930(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00446930: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446940
 * Original: 0x00446940 - 0x00446947 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446940(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00446940: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446950
 * Original: 0x00446950 - 0x00446959 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00446950(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00446950: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446960
 * Original: 0x00446960 - 0x00446967 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446960(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00446960: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446970
 * Original: 0x00446970 - 0x00446994 (36 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446970(void)
{

loc_00446970: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004469A0
 * Original: 0x004469A0 - 0x004469BD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004469A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004469A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004469D0
 * Original: 0x004469D0 - 0x004469D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004469D0(void)
{

loc_004469D0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004469E0
 * Original: 0x004469E0 - 0x004469E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004469E0(void)
{

loc_004469E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004469F0
 * Original: 0x004469F0 - 0x00446A3F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004469F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004469F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM32(edx + 0x20) = eax;
    MEM32(edx + 0x24) = eax;
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0x2C) = eax;
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x34) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x3C) = eax;
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00446A60
 * Original: 0x00446A60 - 0x00446B3D (221 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446A60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    edi = 1;
    MEM32(esp + 0x10) = 3;
    /* nop */

loc_00446A80: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 4 (32-bit) */
    ebx = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00446AEA; /* jl: less (signed <) */

loc_00446A89: ;
    esi = edi;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = edi + ebp;
    edx = ecx + eax * 4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edi + ebp;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + eax * 4 + 0x2C;
    ebx = edi + esi * 4;

loc_00446AA1: ;
    ebp = MEM32(eax + -32);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEM32(edx) = ebp;
    ebp = MEM32(eax + -16);
    MEMF(eax + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax);
    MEMF(eax + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEM32(edx + 8) = ebp;
    ebp = MEM32(eax + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    MEM32(edx + 0xC) = ebp;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00446AA1; /* jne: not equal / not zero */

loc_00446AE6: ;
    ebp = MEM32(esp + 0x14);

loc_00446AEA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00446B18; /* jge: greater or equal (signed >=) */

loc_00446AEF: ;
    edx = ebx + ebp;
    eax = edi + ebx * 4;
    esi = 4;
    edx = ecx + edx * 4;
    eax = ecx + eax * 4 + -4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00446B03: ;
    ebx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEM32(edx) = ebx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00446B03; /* jne: not equal / not zero */

loc_00446B18: ;
    ebx = MEM32(esp + 0x10);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00446A80; /* jl: less (signed <) */

loc_00446B35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00446B80
 * Original: 0x00446B80 - 0x00446BB3 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446B80(void)
{

loc_00446B80: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00446BC0
 * Original: 0x00446BC0 - 0x00446BEE (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446BC0(void)
{

loc_00446BC0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00446C00
 * Original: 0x00446C00 - 0x00446C37 (55 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446C00(void)
{

loc_00446C00: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00446C50
 * Original: 0x00446C50 - 0x00446C87 (55 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446C50(void)
{

loc_00446C50: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00446CA0
 * Original: 0x00446CA0 - 0x00446CD7 (55 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446CA0(void)
{

loc_00446CA0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00446CF0
 * Original: 0x00446CF0 - 0x00446D8B (155 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446CF0(void)
{

loc_00446CF0: ;
    eax = MEM32(esp + 4);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0xC); /* divss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] / xmm1.f[0]; /* divss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00446DC0
 * Original: 0x00446DC0 - 0x00446E61 (161 bytes, 38 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00446DC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00446DC0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] / xmm2.f[0]; /* divss */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7A9980)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446E90
 * Original: 0x00446E90 - 0x0044716B (731 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446E90(void)
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

loc_00446E90: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    esi = MEM32(esp + 0x6C);
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x70);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = MEM32(esp + 0x74);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(eax + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    ecx = esp + 0x24;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm6 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm7.f[0]; /* subss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00447055u); RECOMP_ABI_CALL(0x00030B7Bu, sub_00030B7B); /* call 0x00030B7B */

loc_00447055: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 4); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edx = MEM32(esp + 0x18);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x68);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = 0x10;
    esi = esp + 0x24;
    edi = eax;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
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
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00446F74
 * Original: 0x00446F74 - 0x0044716B (503 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446F74(void)
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

loc_00446F74: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(eax + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    ecx = esp + 0x24;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm6 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm7.f[0]; /* subss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00447055u); RECOMP_ABI_CALL(0x00030B7Bu, sub_00030B7B); /* call 0x00030B7B */

loc_00447055: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 4); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edx = MEM32(esp + 0x18);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x68);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = 0x10;
    esi = esp + 0x24;
    edi = eax;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
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
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00447230
 * Original: 0x00447230 - 0x00447273 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447230(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00447230: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00447290
 * Original: 0x00447290 - 0x004473F2 (354 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447290(void)
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

loc_00447290: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0044731B; /* jp: parity */

loc_00447313: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0044731B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    ebx = 1;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = 3;
    /* nop */

loc_00447340: ;
    ebp = ebx + 1;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ebx;
    ebx = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = ebp;
    eax = edx + edx * 2;
    xmm2 = XMM_SCALAR(MEMF(ecx + eax * 4 + 4)); /* movss */
    edx = esi + esi * 2;
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + edx * 4 + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + edx * 4 + 4)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + -28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + eax * 4 + 8)); /* movss */
    edx = esi + esi * 2;
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + edx * 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + edx * 4 + 8)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + -16) = xmm2.f[0]; /* movss */
    esi = esi + esi * 2;
    xmm1 = XMM_SCALAR(MEMF(ecx + esi * 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + esi * 4 + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + eax * 4); /* mulss */
    eax = MEM32(esp + 0x1C);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + -4) = xmm2.f[0]; /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00447340; /* jne: not equal / not zero */

loc_004473E8: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00447450
 * Original: 0x00447450 - 0x00447493 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00447450: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004474B0
 * Original: 0x004474B0 - 0x00447644 (404 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004474B0(void)
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

loc_004474B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0044753F; /* jp: parity */

loc_00447535: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0044753F: ;
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esi + 0xC;
    xmm0 = xmm3; /* movaps */
    PUSH32(esp, edi);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    ebx = 1;
    MEM32(esp + 0x20) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 3;
    /* nop */

loc_00447570: ;
    ebp = ebx + 1;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = ebx;
    ebx = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = edi * 4;
    xmm1 = XMM_SCALAR(MEMF(ecx + eax * 4 + 4)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    ebx = ebp;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm4 = XMM_SCALAR(MEMF(ecx + edx * 4 + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + eax * 4 + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + -36) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + edx * 4 + 8)); /* movss */
    eax = edi * 4;
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + eax * 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax * 4 + 8)); /* movss */
    eax = MEM32(esp + 0x20);
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + -20) = xmm4.f[0]; /* movss */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_SCALAR(MEMF(ecx + edi * 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + edi * 4 + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + edx * 4); /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + -4) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00447570; /* jne: not equal / not zero */

loc_0044762F: ;
    ecx = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ecx + 0x3C) = xmm3.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_004476B0
 * Original: 0x004476B0 - 0x00447784 (212 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004476B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004476B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(eax);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEM32(eax) = ecx;
    MEMF(eax + 0x18) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004477C0
 * Original: 0x004477C0 - 0x004479D8 (536 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004477C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004477C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00447852; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_004477E9: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x24); /* subss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_004479B3;

loc_00447852: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0044786E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00447863: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    ecx = 1;
    goto loc_00447871;

loc_0044786E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */

loc_00447871: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00447878; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_00447873: ;
    ecx = 2;

loc_00447878: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0044794E; /* je: equal / zero */

loc_00447881: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004478EE; /* je: equal / zero */

loc_00447884: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004479B3; /* jne: not equal / not zero */

loc_0044788B: ;
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x14)); /* fadd dword ptr [eax + 0x14] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 0x28) - fp_top()); /* fsubr dword ptr [eax + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x18); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    goto loc_004479A9;

loc_004478EE: ;
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x18); /* addss */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 0x14) - fp_top()); /* fsubr dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    goto loc_004479A9;

loc_0044794E: ;
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x24); /* subss */

loc_004479A9: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_004479B3: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00447A60
 * Original: 0x00447A60 - 0x00447C78 (536 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00447A60: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00447AF2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00447A89: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x1C); /* subss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_00447C53;

loc_00447AF2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00447B0E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00447B03: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    ecx = 1;
    goto loc_00447B11;

loc_00447B0E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */

loc_00447B11: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00447B18; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_00447B13: ;
    ecx = 2;

loc_00447B18: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00447BEE; /* je: equal / zero */

loc_00447B21: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00447B8E; /* je: equal / zero */

loc_00447B24: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00447C53; /* jne: not equal / not zero */

loc_00447B2B: ;
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x10)); /* fadd dword ptr [eax + 0x10] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 0x20) - fp_top()); /* fsubr dword ptr [eax + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x14); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    goto loc_00447C49;

loc_00447B8E: ;
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x20)); /* fadd dword ptr [eax + 0x20] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x14); /* addss */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 0x10) - fp_top()); /* fsubr dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    goto loc_00447C49;

loc_00447BEE: ;
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x1C); /* subss */

loc_00447C49: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_00447C53: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00447D00
 * Original: 0x00447D00 - 0x00447DB8 (184 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447D00(void)
{

loc_00447D00: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(esp + 8);
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 4);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00447DF0
 * Original: 0x00447DF0 - 0x00447F11 (289 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00447DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00447DF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00447F0E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00447E2D: ;
    edx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(edx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0xC); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00447F0E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00447E63: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 4); /* subss */
    xmm4 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ecx + 8); /* subss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm5.f[0]; /* divss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 4); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 0xC); /* addss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 4); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

loc_00447F0E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00447F60
 * Original: 0x00447F60 - 0x00448081 (289 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447F60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x18);
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(esp);
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004480D0
 * Original: 0x004480D0 - 0x004480D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004480D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004480D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004480E0
 * Original: 0x004480E0 - 0x0044815E (126 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004480E0(void)
{

loc_004480E0: ;
    eax = MEM32(esp + 4);
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7C0B1C); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm4.f[0] = xmm4.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00448180
 * Original: 0x00448180 - 0x004482AC (300 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448180(void)
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

loc_00448180: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = sin(fp_top()); /* fsin */
    xmm6 = xmm2; /* movaps */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    MEMF(eax + 0x18) = xmm7.f[0]; /* movss */
    xmm7 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00448300
 * Original: 0x00448300 - 0x0044832F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448300: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0x00448317u); RECOMP_ABI_CALL(0x00448180u, sub_00448180); /* call 0x00448180 */

loc_00448317: ;
    esi = eax;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00448340
 * Original: 0x00448340 - 0x0044836F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448340: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, 0x00448357u); RECOMP_ABI_CALL(0x00448180u, sub_00448180); /* call 0x00448180 */

loc_00448357: ;
    esi = eax;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00448380
 * Original: 0x00448380 - 0x004483AF (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448380: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, 0x00448397u); RECOMP_ABI_CALL(0x00448180u, sub_00448180); /* call 0x00448180 */

loc_00448397: ;
    esi = eax;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004483C0
 * Original: 0x004483C0 - 0x00448426 (102 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004483C0(void)
{

loc_004483C0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = MEM32(esp + 4);
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD450); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00448440
 * Original: 0x00448440 - 0x0044845C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448440(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00448440: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xC)); /* fadd dword ptr [eax + 0xc] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00448470
 * Original: 0x00448470 - 0x00448489 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448470(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00448470: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7A9EC0)); /* fmul dword ptr [0x7a9ec0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AD450)); /* fadd dword ptr [0x7ad450] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00448490
 * Original: 0x00448490 - 0x004484A9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00448490: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AACB4)); /* fmul dword ptr [0x7aacb4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7ABE28)); /* fadd dword ptr [0x7abe28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004484B0
 * Original: 0x004484B0 - 0x004484CF (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004484B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004484B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AACB4)); /* fmul dword ptr [0x7aacb4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004484E0
 * Original: 0x004484E0 - 0x004484FF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004484E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004484E0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD450)); /* fmul dword ptr [0x7ad450] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00448510
 * Original: 0x00448510 - 0x00448556 (70 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448510(void)
{

loc_00448510: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    edx = MEM32(esp + 0xC);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00448570
 * Original: 0x00448570 - 0x004485B6 (70 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448570(void)
{

loc_00448570: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    edx = MEM32(esp + 0xC);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004485D0
 * Original: 0x004485D0 - 0x00448601 (49 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004485D0(void)
{

loc_004485D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD450); /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00448610
 * Original: 0x00448610 - 0x00448625 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448610(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00448610: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00448630
 * Original: 0x00448630 - 0x00448667 (55 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448630(void)
{

loc_00448630: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    edx = MEM32(esp + 0xC);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00448680
 * Original: 0x00448680 - 0x004486B7 (55 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448680(void)
{

loc_00448680: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    edx = MEM32(esp + 0xC);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004486D0
 * Original: 0x004486D0 - 0x00448707 (55 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004486D0(void)
{

loc_004486D0: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}
