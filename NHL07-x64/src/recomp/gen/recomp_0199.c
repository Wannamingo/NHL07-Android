/**
 * nhl_07_recomp - Recompiled code chunk 199
 * Functions: 250 (0x004390F0 - 0x0043D100)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004390F0
 * Original: 0x004390F0 - 0x00439117 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004390F0(void)
{

loc_004390F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A790;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439106u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439106: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA266);
    ecx = eax;
    PUSH32(esp, 0x00439113u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439113: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439120
 * Original: 0x00439120 - 0x00439135 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439120(void)
{

loc_00439120: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A794);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439132u); } /* indirect call */
    }

loc_00439134: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439140
 * Original: 0x00439140 - 0x00439151 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439140(void)
{

loc_00439140: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439150u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043914Du); } /* indirect call */
    }

loc_00439150: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439160
 * Original: 0x00439160 - 0x00439187 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439160(void)
{

loc_00439160: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A7AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439176u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439176: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCAFF2);
    ecx = eax;
    PUSH32(esp, 0x00439183u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439183: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439190
 * Original: 0x00439190 - 0x004391A5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439190(void)
{

loc_00439190: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A7B0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004391A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004391A2u); } /* indirect call */
    }

loc_004391A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004391B0
 * Original: 0x004391B0 - 0x004391C1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004391B0(void)
{

loc_004391B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004391C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004391BDu); } /* indirect call */
    }

loc_004391C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004391D0
 * Original: 0x004391D0 - 0x004391F7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004391D0(void)
{

loc_004391D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A7CC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x004391E6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004391E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA3A4);
    ecx = eax;
    PUSH32(esp, 0x004391F3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004391F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439200
 * Original: 0x00439200 - 0x00439215 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439200(void)
{

loc_00439200: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A7D0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439212u); } /* indirect call */
    }

loc_00439214: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439220
 * Original: 0x00439220 - 0x00439231 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439220(void)
{

loc_00439220: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439230u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043922Du); } /* indirect call */
    }

loc_00439230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439240
 * Original: 0x00439240 - 0x00439267 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439240(void)
{

loc_00439240: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A7E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439256u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439256: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBE7E);
    ecx = eax;
    PUSH32(esp, 0x00439263u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439263: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439270
 * Original: 0x00439270 - 0x00439285 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439270(void)
{

loc_00439270: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A7EC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439282u); } /* indirect call */
    }

loc_00439284: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439290
 * Original: 0x00439290 - 0x004392A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439290(void)
{

loc_00439290: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004392A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043929Du); } /* indirect call */
    }

loc_004392A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004392B0
 * Original: 0x004392B0 - 0x004392D7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004392B0(void)
{

loc_004392B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A800;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x004392C6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004392C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCAC72);
    ecx = eax;
    PUSH32(esp, 0x004392D3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004392D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004392E0
 * Original: 0x004392E0 - 0x004392F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004392E0(void)
{

loc_004392E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A804);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004392F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004392F2u); } /* indirect call */
    }

loc_004392F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439300
 * Original: 0x00439300 - 0x00439311 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439300(void)
{

loc_00439300: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439310u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043930Du); } /* indirect call */
    }

loc_00439310: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439320
 * Original: 0x00439320 - 0x00439347 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439320(void)
{

loc_00439320: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A818;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439336u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439336: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA948);
    ecx = eax;
    PUSH32(esp, 0x00439343u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439343: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439350
 * Original: 0x00439350 - 0x00439365 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439350(void)
{

loc_00439350: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A81C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439364u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439362u); } /* indirect call */
    }

loc_00439364: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439370
 * Original: 0x00439370 - 0x00439381 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439370(void)
{

loc_00439370: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439380u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043937Du); } /* indirect call */
    }

loc_00439380: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439390
 * Original: 0x00439390 - 0x004393B7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439390(void)
{

loc_00439390: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A838;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x004393A6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004393A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB14B);
    ecx = eax;
    PUSH32(esp, 0x004393B3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004393B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004393C0
 * Original: 0x004393C0 - 0x004393D5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004393C0(void)
{

loc_004393C0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A83C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004393D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004393D2u); } /* indirect call */
    }

loc_004393D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004393E0
 * Original: 0x004393E0 - 0x004393F1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004393E0(void)
{

loc_004393E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004393F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004393EDu); } /* indirect call */
    }

loc_004393F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439400
 * Original: 0x00439400 - 0x00439427 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439400(void)
{

loc_00439400: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A858;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439416u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439416: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCACCF);
    ecx = eax;
    PUSH32(esp, 0x00439423u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439423: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439430
 * Original: 0x00439430 - 0x00439445 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439430(void)
{

loc_00439430: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A85C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439442u); } /* indirect call */
    }

loc_00439444: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439450
 * Original: 0x00439450 - 0x00439461 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439450(void)
{

loc_00439450: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439460u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043945Du); } /* indirect call */
    }

loc_00439460: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439470
 * Original: 0x00439470 - 0x00439497 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439470(void)
{

loc_00439470: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A880;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439486u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439486: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA97E);
    ecx = eax;
    PUSH32(esp, 0x00439493u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439493: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004394A0
 * Original: 0x004394A0 - 0x004394B5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004394A0(void)
{

loc_004394A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A884);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004394B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004394B2u); } /* indirect call */
    }

loc_004394B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004394C0
 * Original: 0x004394C0 - 0x004394D1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004394C0(void)
{

loc_004394C0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004394D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004394CDu); } /* indirect call */
    }

loc_004394D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004394E0
 * Original: 0x004394E0 - 0x00439507 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004394E0(void)
{

loc_004394E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A894;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x004394F6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004394F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBA8B);
    ecx = eax;
    PUSH32(esp, 0x00439503u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439503: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439510
 * Original: 0x00439510 - 0x00439525 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439510(void)
{

loc_00439510: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A898);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439524u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439522u); } /* indirect call */
    }

loc_00439524: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439530
 * Original: 0x00439530 - 0x00439541 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439530(void)
{

loc_00439530: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439540u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043953Du); } /* indirect call */
    }

loc_00439540: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439550
 * Original: 0x00439550 - 0x00439577 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439550(void)
{

loc_00439550: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A8AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439566u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439566: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBB1F);
    ecx = eax;
    PUSH32(esp, 0x00439573u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439573: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439580
 * Original: 0x00439580 - 0x00439595 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439580(void)
{

loc_00439580: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A8B0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439592u); } /* indirect call */
    }

loc_00439594: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004395A0
 * Original: 0x004395A0 - 0x004395B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004395A0(void)
{

loc_004395A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004395B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004395ADu); } /* indirect call */
    }

loc_004395B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004395C0
 * Original: 0x004395C0 - 0x004395E7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004395C0(void)
{

loc_004395C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A8C4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x004395D6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004395D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBD53);
    ecx = eax;
    PUSH32(esp, 0x004395E3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004395E3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004395F0
 * Original: 0x004395F0 - 0x00439605 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004395F0(void)
{

loc_004395F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A8C8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439602u); } /* indirect call */
    }

loc_00439604: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439610
 * Original: 0x00439610 - 0x00439621 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439610(void)
{

loc_00439610: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043961Du); } /* indirect call */
    }

loc_00439620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439630
 * Original: 0x00439630 - 0x00439657 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439630(void)
{

loc_00439630: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A8DC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439646u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439646: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCACC9);
    ecx = eax;
    PUSH32(esp, 0x00439653u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439653: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439660
 * Original: 0x00439660 - 0x00439675 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439660(void)
{

loc_00439660: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A8E0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439672u); } /* indirect call */
    }

loc_00439674: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439680
 * Original: 0x00439680 - 0x00439691 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439680(void)
{

loc_00439680: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439690u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043968Du); } /* indirect call */
    }

loc_00439690: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004396A0
 * Original: 0x004396A0 - 0x004396C7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004396A0(void)
{

loc_004396A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A8F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x004396B6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004396B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB5C5);
    ecx = eax;
    PUSH32(esp, 0x004396C3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004396C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004396D0
 * Original: 0x004396D0 - 0x004396E5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004396D0(void)
{

loc_004396D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A8F8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004396E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004396E2u); } /* indirect call */
    }

loc_004396E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004396F0
 * Original: 0x004396F0 - 0x00439701 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004396F0(void)
{

loc_004396F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439700u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004396FDu); } /* indirect call */
    }

loc_00439700: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439710
 * Original: 0x00439710 - 0x00439737 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439710(void)
{

loc_00439710: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A910;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439726u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439726: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBB9F);
    ecx = eax;
    PUSH32(esp, 0x00439733u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439733: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439740
 * Original: 0x00439740 - 0x00439755 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439740(void)
{

loc_00439740: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A914);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439752u); } /* indirect call */
    }

loc_00439754: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439760
 * Original: 0x00439760 - 0x00439771 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439760(void)
{

loc_00439760: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043976Du); } /* indirect call */
    }

loc_00439770: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439780
 * Original: 0x00439780 - 0x004397A7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439780(void)
{

loc_00439780: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A92C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439796u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439796: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB535);
    ecx = eax;
    PUSH32(esp, 0x004397A3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004397A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004397B0
 * Original: 0x004397B0 - 0x004397C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004397B0(void)
{

loc_004397B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A930);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004397C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004397C2u); } /* indirect call */
    }

loc_004397C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004397D0
 * Original: 0x004397D0 - 0x004397E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004397D0(void)
{

loc_004397D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004397E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004397DDu); } /* indirect call */
    }

loc_004397E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004397F0
 * Original: 0x004397F0 - 0x00439817 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004397F0(void)
{

loc_004397F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A950;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439806u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439806: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBA4A);
    ecx = eax;
    PUSH32(esp, 0x00439813u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439813: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439820
 * Original: 0x00439820 - 0x00439835 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439820(void)
{

loc_00439820: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A954);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439832u); } /* indirect call */
    }

loc_00439834: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439840
 * Original: 0x00439840 - 0x00439851 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439840(void)
{

loc_00439840: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439850u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043984Du); } /* indirect call */
    }

loc_00439850: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439860
 * Original: 0x00439860 - 0x00439887 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439860(void)
{

loc_00439860: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A980;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439876u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439876: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB6D6);
    ecx = eax;
    PUSH32(esp, 0x00439883u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439883: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439890
 * Original: 0x00439890 - 0x004398A5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439890(void)
{

loc_00439890: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A984);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004398A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004398A2u); } /* indirect call */
    }

loc_004398A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004398B0
 * Original: 0x004398B0 - 0x004398C1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004398B0(void)
{

loc_004398B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004398C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004398BDu); } /* indirect call */
    }

loc_004398C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004398D0
 * Original: 0x004398D0 - 0x004398F7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004398D0(void)
{

loc_004398D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A9B4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x004398E6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004398E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBD58);
    ecx = eax;
    PUSH32(esp, 0x004398F3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004398F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439900
 * Original: 0x00439900 - 0x00439915 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439900(void)
{

loc_00439900: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A9B8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439912u); } /* indirect call */
    }

loc_00439914: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439920
 * Original: 0x00439920 - 0x00439931 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439920(void)
{

loc_00439920: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043992Du); } /* indirect call */
    }

loc_00439930: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439940
 * Original: 0x00439940 - 0x00439967 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439940(void)
{

loc_00439940: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A9D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439956u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439956: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA408);
    ecx = eax;
    PUSH32(esp, 0x00439963u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439963: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439970
 * Original: 0x00439970 - 0x00439985 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439970(void)
{

loc_00439970: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A9D8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439984u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439982u); } /* indirect call */
    }

loc_00439984: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439990
 * Original: 0x00439990 - 0x004399A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439990(void)
{

loc_00439990: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004399A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043999Du); } /* indirect call */
    }

loc_004399A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004399B0
 * Original: 0x004399B0 - 0x004399D7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004399B0(void)
{

loc_004399B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A9F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x004399C6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004399C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA818);
    ecx = eax;
    PUSH32(esp, 0x004399D3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004399D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004399E0
 * Original: 0x004399E0 - 0x004399F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004399E0(void)
{

loc_004399E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A9F4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004399F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004399F2u); } /* indirect call */
    }

loc_004399F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439A00
 * Original: 0x00439A00 - 0x00439A11 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439A00(void)
{

loc_00439A00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439A10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439A0Du); } /* indirect call */
    }

loc_00439A10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439A20
 * Original: 0x00439A20 - 0x00439A47 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439A20(void)
{

loc_00439A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AA10;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439A36u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439A36: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCAE9A);
    ecx = eax;
    PUSH32(esp, 0x00439A43u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439A43: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439A50
 * Original: 0x00439A50 - 0x00439A65 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439A50(void)
{

loc_00439A50: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AA14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439A62u); } /* indirect call */
    }

loc_00439A64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439A70
 * Original: 0x00439A70 - 0x00439A81 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439A70(void)
{

loc_00439A70: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439A80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439A7Du); } /* indirect call */
    }

loc_00439A80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439A90
 * Original: 0x00439A90 - 0x00439AB7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439A90(void)
{

loc_00439A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AA40;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439AA6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439AA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA4D2);
    ecx = eax;
    PUSH32(esp, 0x00439AB3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439AB3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439AC0
 * Original: 0x00439AC0 - 0x00439AF0 (48 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439AC0(void)
{

loc_00439AC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00439B00
 * Original: 0x00439B00 - 0x00439B1A (26 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439B00(void)
{

loc_00439B00: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00439B20
 * Original: 0x00439B20 - 0x00439B45 (37 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439B20(void)
{

loc_00439B20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00439B50
 * Original: 0x00439B50 - 0x00439B80 (48 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439B50(void)
{

loc_00439B50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00439B90
 * Original: 0x00439B90 - 0x00439BF7 (103 bytes, 20 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439B90(void)
{

loc_00439B90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00439C10
 * Original: 0x00439C10 - 0x00439CC4 (180 bytes, 34 insns)
 * CC: cdecl, 16 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439C10(void)
{

loc_00439C10: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 68; return; /* ret 64 */

}

/**
 * sub_00439D00
 * Original: 0x00439D00 - 0x00439EF9 (505 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439D00(void)
{

loc_00439D00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D0Fu); } /* indirect call */
    }

loc_00439D12: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EC8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439D24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D21u); } /* indirect call */
    }

loc_00439D24: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909ED8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439D36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D33u); } /* indirect call */
    }

loc_00439D36: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909F18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439D48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D45u); } /* indirect call */
    }

loc_00439D48: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EF0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439D5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D57u); } /* indirect call */
    }

loc_00439D5A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909F10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439D6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D69u); } /* indirect call */
    }

loc_00439D6C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909F1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439D7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D7Bu); } /* indirect call */
    }

loc_00439D7E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909ED4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439D90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D8Du); } /* indirect call */
    }

loc_00439D90: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909F0C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439DA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439D9Fu); } /* indirect call */
    }

loc_00439DA2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EC4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439DB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439DB1u); } /* indirect call */
    }

loc_00439DB4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909F08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439DC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439DC3u); } /* indirect call */
    }

loc_00439DC6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EDC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439DD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439DD5u); } /* indirect call */
    }

loc_00439DD8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EC0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439DEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439DE7u); } /* indirect call */
    }

loc_00439DEA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909F00);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439DFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439DF9u); } /* indirect call */
    }

loc_00439DFC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EE4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E0Bu); } /* indirect call */
    }

loc_00439E0E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EB0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E1Du); } /* indirect call */
    }

loc_00439E20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EBC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E2Fu); } /* indirect call */
    }

loc_00439E32: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909ECC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E41u); } /* indirect call */
    }

loc_00439E44: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EEC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E53u); } /* indirect call */
    }

loc_00439E56: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EF4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E65u); } /* indirect call */
    }

loc_00439E68: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909ED0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E77u); } /* indirect call */
    }

loc_00439E7A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E89u); } /* indirect call */
    }

loc_00439E8C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EE8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439E9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439E9Bu); } /* indirect call */
    }

loc_00439E9E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439EB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439EADu); } /* indirect call */
    }

loc_00439EB0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EFC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439EC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439EBFu); } /* indirect call */
    }

loc_00439EC2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909F14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439ED4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439ED1u); } /* indirect call */
    }

loc_00439ED4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909EF8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439EE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439EE3u); } /* indirect call */
    }

loc_00439EE6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909F04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439EF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439EF5u); } /* indirect call */
    }

loc_00439EF8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439F80
 * Original: 0x00439F80 - 0x00439FA7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439F80(void)
{

loc_00439F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AA44;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439F96u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439F96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB395);
    ecx = eax;
    PUSH32(esp, 0x00439FA3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439FA3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439FB0
 * Original: 0x00439FB0 - 0x00439FCC (28 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439FB0(void)
{

loc_00439FB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00439FE0
 * Original: 0x00439FE0 - 0x00439FFC (28 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439FE0(void)
{

loc_00439FE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A010
 * Original: 0x0043A010 - 0x0043A02C (28 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A010(void)
{

loc_0043A010: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A040
 * Original: 0x0043A040 - 0x0043A05C (28 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A040(void)
{

loc_0043A040: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] / MEMF(edx); /* divss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A070
 * Original: 0x0043A070 - 0x0043A088 (24 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A070(void)
{

loc_0043A070: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A090
 * Original: 0x0043A090 - 0x0043A0A3 (19 bytes, 7 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A090: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A0B0
 * Original: 0x0043A0B0 - 0x0043A0CF (31 bytes, 10 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A0B0(void)
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

loc_0043A0B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0043A0C3u); RECOMP_ABI_CALL(0x005CDA41u, sub_005CDA41); /* call 0x005CDA41 */

loc_0043A0C3: ;
    edx = MEM32(esp + 0x10);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A0E0
 * Original: 0x0043A0E0 - 0x0043A0FF (31 bytes, 10 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A0E0(void)
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

loc_0043A0E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0043A0F3u); RECOMP_ABI_CALL(0x005CDB14u, sub_005CDB14); /* call 0x005CDB14 */

loc_0043A0F3: ;
    edx = MEM32(esp + 0x10);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A110
 * Original: 0x0043A110 - 0x0043A135 (37 bytes, 11 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A110(void)
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

loc_0043A110: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0043A129u); RECOMP_ABI_CALL(0x005CDA41u, sub_005CDA41); /* call 0x005CDA41 */

loc_0043A129: ;
    edx = MEM32(esp + 0x10);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A140
 * Original: 0x0043A140 - 0x0043A157 (23 bytes, 9 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A140(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A140: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A160
 * Original: 0x0043A160 - 0x0043A187 (39 bytes, 17 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A160: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A190
 * Original: 0x0043A190 - 0x0043A1BC (44 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A190(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043A190: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043A1B1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0043A1A6: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm1.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

loc_0043A1B1: ;
    ecx = MEM32(esp + 8);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A1D0
 * Original: 0x0043A1D0 - 0x0043A1FC (44 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A1D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043A1D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043A1F1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0043A1E6: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm1.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

loc_0043A1F1: ;
    ecx = MEM32(esp + 8);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A210
 * Original: 0x0043A210 - 0x0043A243 (51 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A210(void)
{

loc_0043A210: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A250
 * Original: 0x0043A250 - 0x0043A263 (19 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A250(void)
{

loc_0043A250: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x83A6C0)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A270
 * Original: 0x0043A270 - 0x0043A283 (19 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A270(void)
{

loc_0043A270: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x8CFF78)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A290
 * Original: 0x0043A290 - 0x0043A2A3 (19 bytes, 7 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A290(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A290: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A2B0
 * Original: 0x0043A2B0 - 0x0043A2C3 (19 bytes, 7 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A2B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A2B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A2D0
 * Original: 0x0043A2D0 - 0x0043A2E5 (21 bytes, 8 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A2D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A2D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A2F0
 * Original: 0x0043A2F0 - 0x0043A306 (22 bytes, 7 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A2F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A2F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, 0x0043A2FDu); RECOMP_ABI_CALL(0x005CDBE8u, sub_005CDBE8); /* call 0x005CDBE8 */

loc_0043A2FD: ;
    edx = MEM32(esp + 8);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A310
 * Original: 0x0043A310 - 0x0043A326 (22 bytes, 7 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A310(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A310: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, 0x0043A31Du); RECOMP_ABI_CALL(0x005CDCB4u, sub_005CDCB4); /* call 0x005CDCB4 */

loc_0043A31D: ;
    edx = MEM32(esp + 8);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A330
 * Original: 0x0043A330 - 0x0043A348 (24 bytes, 9 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0043A330: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(esp + 8);
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0043A350
 * Original: 0x0043A350 - 0x0043A3AB (91 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A350(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043A350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9EBC)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043A389; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0043A372: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_0043A376: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0043A376; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_0043A385: ;
    MEMF(eax) = xmm3.f[0]; /* movss */

loc_0043A389: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043A3A8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0043A392: ;
    xmm2 = xmm1; /* movaps */

loc_0043A395: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0043A395; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0043A3A4: ;
    MEMF(eax) = xmm2.f[0]; /* movss */

loc_0043A3A8: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A3D0
 * Original: 0x0043A3D0 - 0x0043A446 (118 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A3D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043A3D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9EBC)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043A413; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0043A3F7: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    goto loc_0043A400;

    /* nop */

loc_0043A400: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0043A400; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_0043A40F: ;
    MEMF(eax) = xmm3.f[0]; /* movss */

loc_0043A413: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x83A6C0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043A443; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0043A424: ;
    xmm3 = xmm2; /* movaps */
    goto loc_0043A430;

    /* nop */

loc_0043A430: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_0043A430; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0043A43F: ;
    MEMF(eax) = xmm3.f[0]; /* movss */

loc_0043A443: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A470
 * Original: 0x0043A470 - 0x0043A48A (26 bytes, 9 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A470(void)
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

loc_0043A470: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0043A47Eu); RECOMP_ABI_CALL(0x000135D0u, sub_000135D0); /* call 0x000135D0 */

loc_0043A47E: ;
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
 * sub_0043A490
 * Original: 0x0043A490 - 0x0043A4AA (26 bytes, 9 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A490(void)
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

loc_0043A490: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0043A49Eu); RECOMP_ABI_CALL(0x0002AE56u, sub_0002AE56); /* call 0x0002AE56 */

loc_0043A49E: ;
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
 * sub_0043A4B0
 * Original: 0x0043A4B0 - 0x0043A4CA (26 bytes, 9 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0043A4B0(void)
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

loc_0043A4B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0043A4BEu); RECOMP_ABI_CALL(0x00034B0Eu, sub_00034B0E); /* call 0x00034B0E */

loc_0043A4BE: ;
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
 * sub_0043A4D0
 * Original: 0x0043A4D0 - 0x0043A503 (51 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A4D0(void)
{

loc_0043A4D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043A510
 * Original: 0x0043A510 - 0x0043ACA4 (1940 bytes, 540 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043A510: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A6C4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A523u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A521u); } /* indirect call */
    }

loc_0043A523: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A553; /* je: equal / zero */

loc_0043A52B: ;
    MEM32(esi) = 0x83AA44;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A53Eu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A53E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB395);
    ecx = eax;
    PUSH32(esp, 0x0043A54Bu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A54B: ;
    MEM32(0x909EB4) = esi;
    goto loc_0043A559;

loc_0043A553: ;
    MEM32(0x909EB4) = edi;

loc_0043A559: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A6E0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A56Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A568u); } /* indirect call */
    }

loc_0043A56A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A598; /* je: equal / zero */

loc_0043A570: ;
    MEM32(esi) = 0x83A704;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A583u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A583: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBFD3);
    ecx = eax;
    PUSH32(esp, 0x0043A590u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A590: ;
    MEM32(0x909EC8) = esi;
    goto loc_0043A59E;

loc_0043A598: ;
    MEM32(0x909EC8) = edi;

loc_0043A59E: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A708);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A5AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A5ADu); } /* indirect call */
    }

loc_0043A5AF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A5DD; /* je: equal / zero */

loc_0043A5B5: ;
    MEM32(esi) = 0x83A72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A5C8u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A5C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB603);
    ecx = eax;
    PUSH32(esp, 0x0043A5D5u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A5D5: ;
    MEM32(0x909ED8) = esi;
    goto loc_0043A5E3;

loc_0043A5DD: ;
    MEM32(0x909ED8) = edi;

loc_0043A5E3: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A730);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A5F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A5F2u); } /* indirect call */
    }

loc_0043A5F4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A622; /* je: equal / zero */

loc_0043A5FA: ;
    MEM32(esi) = 0x83A750;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A60Du); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A60D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA08D);
    ecx = eax;
    PUSH32(esp, 0x0043A61Au); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A61A: ;
    MEM32(0x909F18) = esi;
    goto loc_0043A628;

loc_0043A622: ;
    MEM32(0x909F18) = edi;

loc_0043A628: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A754);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A639u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A637u); } /* indirect call */
    }

loc_0043A639: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A667; /* je: equal / zero */

loc_0043A63F: ;
    MEM32(esi) = 0x83A76C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A652u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A652: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB4F6);
    ecx = eax;
    PUSH32(esp, 0x0043A65Fu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A65F: ;
    MEM32(0x909EF0) = esi;
    goto loc_0043A66D;

loc_0043A667: ;
    MEM32(0x909EF0) = edi;

loc_0043A66D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A770);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A67Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A67Cu); } /* indirect call */
    }

loc_0043A67E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A6AC; /* je: equal / zero */

loc_0043A684: ;
    MEM32(esi) = 0x83A790;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A697u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A697: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA266);
    ecx = eax;
    PUSH32(esp, 0x0043A6A4u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A6A4: ;
    MEM32(0x909F10) = esi;
    goto loc_0043A6B2;

loc_0043A6AC: ;
    MEM32(0x909F10) = edi;

loc_0043A6B2: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A794);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A6C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A6C1u); } /* indirect call */
    }

loc_0043A6C3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A6F1; /* je: equal / zero */

loc_0043A6C9: ;
    MEM32(esi) = 0x83A7AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A6DCu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A6DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCAFF2);
    ecx = eax;
    PUSH32(esp, 0x0043A6E9u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A6E9: ;
    MEM32(0x909F1C) = esi;
    goto loc_0043A6F7;

loc_0043A6F1: ;
    MEM32(0x909F1C) = edi;

loc_0043A6F7: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A7B0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A708u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A706u); } /* indirect call */
    }

loc_0043A708: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A736; /* je: equal / zero */

loc_0043A70E: ;
    MEM32(esi) = 0x83A7CC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A721u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A721: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA3A4);
    ecx = eax;
    PUSH32(esp, 0x0043A72Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A72E: ;
    MEM32(0x909ED4) = esi;
    goto loc_0043A73C;

loc_0043A736: ;
    MEM32(0x909ED4) = edi;

loc_0043A73C: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A7D0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A74Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A74Bu); } /* indirect call */
    }

loc_0043A74D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A77B; /* je: equal / zero */

loc_0043A753: ;
    MEM32(esi) = 0x83A7E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A766u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A766: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBE7E);
    ecx = eax;
    PUSH32(esp, 0x0043A773u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A773: ;
    MEM32(0x909F0C) = esi;
    goto loc_0043A781;

loc_0043A77B: ;
    MEM32(0x909F0C) = edi;

loc_0043A781: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A7EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A792u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A790u); } /* indirect call */
    }

loc_0043A792: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A7C0; /* je: equal / zero */

loc_0043A798: ;
    MEM32(esi) = 0x83A800;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A7ABu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A7AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCAC72);
    ecx = eax;
    PUSH32(esp, 0x0043A7B8u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A7B8: ;
    MEM32(0x909EC4) = esi;
    goto loc_0043A7C6;

loc_0043A7C0: ;
    MEM32(0x909EC4) = edi;

loc_0043A7C6: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A804);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A7D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A7D5u); } /* indirect call */
    }

loc_0043A7D7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A805; /* je: equal / zero */

loc_0043A7DD: ;
    MEM32(esi) = 0x83A818;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A7F0u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A7F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA948);
    ecx = eax;
    PUSH32(esp, 0x0043A7FDu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A7FD: ;
    MEM32(0x909F08) = esi;
    goto loc_0043A80B;

loc_0043A805: ;
    MEM32(0x909F08) = edi;

loc_0043A80B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A81C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A81Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A81Au); } /* indirect call */
    }

loc_0043A81C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A84A; /* je: equal / zero */

loc_0043A822: ;
    MEM32(esi) = 0x83A838;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A835u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A835: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB14B);
    ecx = eax;
    PUSH32(esp, 0x0043A842u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A842: ;
    MEM32(0x909EDC) = esi;
    goto loc_0043A850;

loc_0043A84A: ;
    MEM32(0x909EDC) = edi;

loc_0043A850: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A83C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A85Fu); } /* indirect call */
    }

loc_0043A861: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A88F; /* je: equal / zero */

loc_0043A867: ;
    MEM32(esi) = 0x83A858;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A87Au); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A87A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCACCF);
    ecx = eax;
    PUSH32(esp, 0x0043A887u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A887: ;
    MEM32(0x909EC0) = esi;
    goto loc_0043A895;

loc_0043A88F: ;
    MEM32(0x909EC0) = edi;

loc_0043A895: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A85C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A8A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A8A4u); } /* indirect call */
    }

loc_0043A8A6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A8D4; /* je: equal / zero */

loc_0043A8AC: ;
    MEM32(esi) = 0x83A880;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A8BFu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A8BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA97E);
    ecx = eax;
    PUSH32(esp, 0x0043A8CCu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A8CC: ;
    MEM32(0x909F00) = esi;
    goto loc_0043A8DA;

loc_0043A8D4: ;
    MEM32(0x909F00) = edi;

loc_0043A8DA: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A884);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A8EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A8E9u); } /* indirect call */
    }

loc_0043A8EB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A919; /* je: equal / zero */

loc_0043A8F1: ;
    MEM32(esi) = 0x83A894;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A904u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A904: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBA8B);
    ecx = eax;
    PUSH32(esp, 0x0043A911u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A911: ;
    MEM32(0x909EE4) = esi;
    goto loc_0043A91F;

loc_0043A919: ;
    MEM32(0x909EE4) = edi;

loc_0043A91F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A898);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A92Eu); } /* indirect call */
    }

loc_0043A930: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A95E; /* je: equal / zero */

loc_0043A936: ;
    MEM32(esi) = 0x83A8AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A949u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A949: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBB1F);
    ecx = eax;
    PUSH32(esp, 0x0043A956u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A956: ;
    MEM32(0x909EB0) = esi;
    goto loc_0043A964;

loc_0043A95E: ;
    MEM32(0x909EB0) = edi;

loc_0043A964: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A8B0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A973u); } /* indirect call */
    }

loc_0043A975: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A9A3; /* je: equal / zero */

loc_0043A97B: ;
    MEM32(esi) = 0x83A8C4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A98Eu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A98E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBD53);
    ecx = eax;
    PUSH32(esp, 0x0043A99Bu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A99B: ;
    MEM32(0x909EBC) = esi;
    goto loc_0043A9A9;

loc_0043A9A3: ;
    MEM32(0x909EBC) = edi;

loc_0043A9A9: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A8C8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043A9BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A9B8u); } /* indirect call */
    }

loc_0043A9BA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A9E8; /* je: equal / zero */

loc_0043A9C0: ;
    MEM32(esi) = 0x83A8DC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043A9D3u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043A9D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCACC9);
    ecx = eax;
    PUSH32(esp, 0x0043A9E0u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043A9E0: ;
    MEM32(0x909ECC) = esi;
    goto loc_0043A9EE;

loc_0043A9E8: ;
    MEM32(0x909ECC) = edi;

loc_0043A9EE: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A8E0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043A9FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043A9FDu); } /* indirect call */
    }

loc_0043A9FF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AA2D; /* je: equal / zero */

loc_0043AA05: ;
    MEM32(esi) = 0x83A8F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043AA18u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AA18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB5C5);
    ecx = eax;
    PUSH32(esp, 0x0043AA25u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AA25: ;
    MEM32(0x909EEC) = esi;
    goto loc_0043AA33;

loc_0043AA2D: ;
    MEM32(0x909EEC) = edi;

loc_0043AA33: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A8F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043AA44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AA42u); } /* indirect call */
    }

loc_0043AA44: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AA72; /* je: equal / zero */

loc_0043AA4A: ;
    MEM32(esi) = 0x83A910;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043AA5Du); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AA5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBB9F);
    ecx = eax;
    PUSH32(esp, 0x0043AA6Au); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AA6A: ;
    MEM32(0x909EF4) = esi;
    goto loc_0043AA78;

loc_0043AA72: ;
    MEM32(0x909EF4) = edi;

loc_0043AA78: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A914);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043AA89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AA87u); } /* indirect call */
    }

loc_0043AA89: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AAB7; /* je: equal / zero */

loc_0043AA8F: ;
    MEM32(esi) = 0x83A92C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043AAA2u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AAA2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB535);
    ecx = eax;
    PUSH32(esp, 0x0043AAAFu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AAAF: ;
    MEM32(0x909ED0) = esi;
    goto loc_0043AABD;

loc_0043AAB7: ;
    MEM32(0x909ED0) = edi;

loc_0043AABD: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A930);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043AACEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AACCu); } /* indirect call */
    }

loc_0043AACE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AAFC; /* je: equal / zero */

loc_0043AAD4: ;
    MEM32(esi) = 0x83A950;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043AAE7u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AAE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBA4A);
    ecx = eax;
    PUSH32(esp, 0x0043AAF4u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AAF4: ;
    MEM32(0x909EE0) = esi;
    goto loc_0043AB02;

loc_0043AAFC: ;
    MEM32(0x909EE0) = edi;

loc_0043AB02: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A954);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043AB13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AB11u); } /* indirect call */
    }

loc_0043AB13: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AB41; /* je: equal / zero */

loc_0043AB19: ;
    MEM32(esi) = 0x83A980;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043AB2Cu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AB2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB6D6);
    ecx = eax;
    PUSH32(esp, 0x0043AB39u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AB39: ;
    MEM32(0x909EE8) = esi;
    goto loc_0043AB47;

loc_0043AB41: ;
    MEM32(0x909EE8) = edi;

loc_0043AB47: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A984);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043AB58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AB56u); } /* indirect call */
    }

loc_0043AB58: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AB86; /* je: equal / zero */

loc_0043AB5E: ;
    MEM32(esi) = 0x83A9B4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043AB71u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AB71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBD58);
    ecx = eax;
    PUSH32(esp, 0x0043AB7Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AB7E: ;
    MEM32(0x909EB8) = esi;
    goto loc_0043AB8C;

loc_0043AB86: ;
    MEM32(0x909EB8) = edi;

loc_0043AB8C: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A9B8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043AB9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AB9Bu); } /* indirect call */
    }

loc_0043AB9D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043ABCB; /* je: equal / zero */

loc_0043ABA3: ;
    MEM32(esi) = 0x83A9D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043ABB6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043ABB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA408);
    ecx = eax;
    PUSH32(esp, 0x0043ABC3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043ABC3: ;
    MEM32(0x909EFC) = esi;
    goto loc_0043ABD1;

loc_0043ABCB: ;
    MEM32(0x909EFC) = edi;

loc_0043ABD1: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A9D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043ABE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043ABE0u); } /* indirect call */
    }

loc_0043ABE2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AC10; /* je: equal / zero */

loc_0043ABE8: ;
    MEM32(esi) = 0x83A9F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043ABFBu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043ABFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA818);
    ecx = eax;
    PUSH32(esp, 0x0043AC08u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AC08: ;
    MEM32(0x909F14) = esi;
    goto loc_0043AC16;

loc_0043AC10: ;
    MEM32(0x909F14) = edi;

loc_0043AC16: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A9F4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043AC27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AC25u); } /* indirect call */
    }

loc_0043AC27: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AC55; /* je: equal / zero */

loc_0043AC2D: ;
    MEM32(esi) = 0x83AA10;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043AC40u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AC40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCAE9A);
    ecx = eax;
    PUSH32(esp, 0x0043AC4Du); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AC4D: ;
    MEM32(0x909EF8) = esi;
    goto loc_0043AC5B;

loc_0043AC55: ;
    MEM32(0x909EF8) = edi;

loc_0043AC5B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AA14);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043AC6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AC6Au); } /* indirect call */
    }

loc_0043AC6C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AC9B; /* je: equal / zero */

loc_0043AC72: ;
    MEM32(esi) = 0x83AA40;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x0043AC85u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AC85: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA4D2);
    ecx = eax;
    PUSH32(esp, 0x0043AC92u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043AC92: ;
    POP32(esp, edi);
    MEM32(0x909F04) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043AC9B: ;
    MEM32(0x909F04) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043AE90
 * Original: 0x0043AE90 - 0x0043AEA5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AE90(void)
{

loc_0043AE90: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AA48);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043AEA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AEA2u); } /* indirect call */
    }

loc_0043AEA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043AEB0
 * Original: 0x0043AEB0 - 0x0043AEC1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AEB0(void)
{

loc_0043AEB0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043AEC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AEBDu); } /* indirect call */
    }

loc_0043AEC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043AED0
 * Original: 0x0043AED0 - 0x0043AEE5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AED0(void)
{

loc_0043AED0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AA58);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043AEE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AEE2u); } /* indirect call */
    }

loc_0043AEE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043AEF0
 * Original: 0x0043AEF0 - 0x0043AF01 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AEF0(void)
{

loc_0043AEF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043AF00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AEFDu); } /* indirect call */
    }

loc_0043AF00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043AF10
 * Original: 0x0043AF10 - 0x0043AF3A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AF10(void)
{

loc_0043AF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7D6);
    PUSH32(esp, 0x0043AF29u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AF29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFACBDA);
    ecx = eax;
    PUSH32(esp, 0x0043AF36u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043AF36: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043AF50
 * Original: 0x0043AF50 - 0x0043AF75 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AF50(void)
{

loc_0043AF50: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909FEC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043AF62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AF5Fu); } /* indirect call */
    }

loc_0043AF62: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909FF0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043AF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AF71u); } /* indirect call */
    }

loc_0043AF74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043AF80
 * Original: 0x0043AF80 - 0x0043AFAA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AF80(void)
{

loc_0043AF80: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AA80;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7D6);
    PUSH32(esp, 0x0043AF99u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043AF99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFAC313);
    ecx = eax;
    PUSH32(esp, 0x0043AFA6u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043AFA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043AFC0
 * Original: 0x0043AFC0 - 0x0043AFDD (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043AFC0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043AFDA; /* jne: not equal / not zero */

loc_0043AFD0: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043AFDAu); RECOMP_ABI_CALL(0x0001B0B9u, sub_0001B0B9); /* call 0x0001B0B9 */

loc_0043AFDA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043AFF0
 * Original: 0x0043AFF0 - 0x0043B03C (76 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043AFF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0043B000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043AFFDu); } /* indirect call */
    }

loc_0043B000: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043B038; /* jl: less (signed <) */

loc_0043B005: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043B013u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B010u); } /* indirect call */
    }

loc_0043B013: ;
    edi = MEM32(eax);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043B022u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B01Fu); } /* indirect call */
    }

loc_0043B022: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0043B02Au); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0043B02A: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B034u); } /* indirect call */
    }

loc_0043B037: ;
    POP32(esp, edi);

loc_0043B038: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043B050
 * Original: 0x0043B050 - 0x0043B053 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B050(void)
{

loc_0043B050: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043B060
 * Original: 0x0043B060 - 0x0043B063 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B060(void)
{

loc_0043B060: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043B070
 * Original: 0x0043B070 - 0x0043B09E (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B070: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0043B091; /* je: equal / zero */

loc_0043B081: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0043B09B; /* jne: not equal / not zero */

loc_0043B084: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043B08Eu); RECOMP_ABI_CALL(0x000229B8u, sub_000229B8); /* call 0x000229B8 */

loc_0043B08E: ;
    esp += 12; return; /* ret 8 */

loc_0043B091: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043B09Bu); RECOMP_ABI_CALL(0x0001795Au, sub_0001795A); /* call 0x0001795A */

loc_0043B09B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043B0B0
 * Original: 0x0043B0B0 - 0x0043B19B (235 bytes, 93 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043B0B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0043B0C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B0BDu); } /* indirect call */
    }

loc_0043B0C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043B197; /* jl: less (signed <) */

loc_0043B0C9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043B115; /* jne: not equal / not zero */

loc_0043B0D4: ;
    PUSH32(esp, 0x1C);
    ecx = ebx;
    PUSH32(esp, 0x0043B0DDu); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0043B0DD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B0FC; /* je: equal / zero */

loc_0043B0E3: ;
    ecx = esi;
    PUSH32(esp, 0x0043B0EAu); RECOMP_ABI_CALL(0x0002A82Fu, sub_0002A82F); /* call 0x0002A82F */

loc_0043B0EA: ;
    MEM32(esi) = 0x83AA94;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x18) = ebx;
    goto loc_0043B0FE;

loc_0043B0FC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0043B0FE: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043B10Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B108u); } /* indirect call */
    }

loc_0043B10B: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0043B115u); RECOMP_ABI_CALL(0x0002A8BBu, sub_0002A8BB); /* call 0x0002A8BB */

loc_0043B115: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043B123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B120u); } /* indirect call */
    }

loc_0043B123: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B194; /* je: equal / zero */

loc_0043B129: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0043B134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B131u); } /* indirect call */
    }

loc_0043B134: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043B194; /* jl: less (signed <) */

loc_0043B139: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043B194; /* jne: not equal / not zero */

loc_0043B140: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0043B14Bu); RECOMP_ABI_CALL(0x000254A6u, sub_000254A6); /* call 0x000254A6 */

loc_0043B14B: ;
    ecx = ebp;
    PUSH32(esp, 0x0043B152u); RECOMP_ABI_CALL(0x00021202u, sub_00021202); /* call 0x00021202 */

loc_0043B152: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0043B15Au); RECOMP_ABI_CALL(0x00036F08u, sub_00036F08); /* call 0x00036F08 */

loc_0043B15A: ;
    MEM32(esi + 0x14) = 1;
    MEM8(ebx + 0x1C) = 1;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), esi (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ZX8(LO8(edx));
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    esi = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0043B187u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B184u); } /* indirect call */
    }

loc_0043B187: ;
    edi = MEM32(edi);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B194u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B191u); } /* indirect call */
    }

loc_0043B194: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0043B197: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043B1E0
 * Original: 0x0043B1E0 - 0x0043B210 (48 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B1E0: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043B1F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B1EDu); } /* indirect call */
    }

loc_0043B1F0: ;
    edx = MEM32(esp + 0xC);
    ecx = ZX8(MEM8(edx + 3));
    edi = MEM32(edx + 4);
    esi = eax;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043B220
 * Original: 0x0043B220 - 0x0043B234 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B220(void)
{

loc_0043B220: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AA94;
    PUSH32(esp, 0x0043B22Eu); RECOMP_ABI_CALL(0x000155B0u, sub_000155B0); /* call 0x000155B0 */

loc_0043B22E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043B240
 * Original: 0x0043B240 - 0x0043B296 (86 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0043B240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B240: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebp = MEM32(edi);
    esi = MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B27F; /* je: equal / zero */

loc_0043B250: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B25E; /* je: equal / zero */

loc_0043B257: ;
    ecx = esi;
    PUSH32(esp, 0x0043B25Eu); RECOMP_ABI_CALL(0x0002C6C5u, sub_0002C6C5); /* call 0x0002C6C5 */

loc_0043B25E: ;
    MEM32(esi + 0x14) = 0;
    eax = MEM32(edi);
    esi = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0043B27Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B27Cu); } /* indirect call */
    }

loc_0043B27F: ;
    MEM8(ebp + 0x1C) = 0;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043B290u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B28Du); } /* indirect call */
    }

loc_0043B290: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043B2B0
 * Original: 0x0043B2B0 - 0x0043B2CA (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B2B0(void)
{

loc_0043B2B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esp + 4) = eax;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043B2C7u); RECOMP_ABI_CALL(0x0003562Bu, sub_0003562B); /* call 0x0003562B */

loc_0043B2C7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043B2D0
 * Original: 0x0043B2D0 - 0x0043B31E (78 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B2D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0043B302; /* je: equal / zero */

loc_0043B2DE: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), ecx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = ZX8(LO8(ecx));
    esi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0043B2FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B2FBu); } /* indirect call */
    }

loc_0043B2FE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0043B302: ;
    esi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0043B31Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B317u); } /* indirect call */
    }

loc_0043B31A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043B340
 * Original: 0x0043B340 - 0x0043B35A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B340: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B357; /* je: equal / zero */

loc_0043B34B: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B357; /* je: equal / zero */

loc_0043B352: ;
    PUSH32(esp, 0x0043B357u); RECOMP_ABI_CALL(0x0002C6C5u, sub_0002C6C5); /* call 0x0002C6C5 */

loc_0043B357: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043B360
 * Original: 0x0043B360 - 0x0043B3FB (155 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B360: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x83AA48);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B370u); } /* indirect call */
    }

loc_0043B372: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B3A3; /* je: equal / zero */

loc_0043B378: ;
    MEM32(esi) = 0x83AA80;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7D6);
    PUSH32(esp, 0x0043B38Eu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B38E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFAC313);
    ecx = eax;
    PUSH32(esp, 0x0043B39Bu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043B39B: ;
    MEM32(0x909FEC) = esi;
    goto loc_0043B3AD;

loc_0043B3A3: ;
    MEM32(0x909FEC) = 0;

loc_0043B3AD: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AA58);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043B3BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B3BCu); } /* indirect call */
    }

loc_0043B3BE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B3EF; /* je: equal / zero */

loc_0043B3C4: ;
    MEM32(esi) = 0x83AA6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7D6);
    PUSH32(esp, 0x0043B3DAu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B3DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFACBDA);
    ecx = eax;
    PUSH32(esp, 0x0043B3E7u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043B3E7: ;
    MEM32(0x909FF0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043B3EF: ;
    MEM32(0x909FF0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B430
 * Original: 0x0043B430 - 0x0043B445 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B430(void)
{

loc_0043B430: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AAA8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B442u); } /* indirect call */
    }

loc_0043B444: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B450
 * Original: 0x0043B450 - 0x0043B461 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B450(void)
{

loc_0043B450: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B460u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B45Du); } /* indirect call */
    }

loc_0043B460: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B470
 * Original: 0x0043B470 - 0x0043B485 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B470(void)
{

loc_0043B470: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AABC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B482u); } /* indirect call */
    }

loc_0043B484: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B490
 * Original: 0x0043B490 - 0x0043B4A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B490(void)
{

loc_0043B490: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B4A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B49Du); } /* indirect call */
    }

loc_0043B4A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B4B0
 * Original: 0x0043B4B0 - 0x0043B4DA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B4B0(void)
{

loc_0043B4B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AAD8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B4C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B4C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F4E92);
    ecx = eax;
    PUSH32(esp, 0x0043B4D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B4D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B4F0
 * Original: 0x0043B4F0 - 0x0043B505 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B4F0(void)
{

loc_0043B4F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AADC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B504u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B502u); } /* indirect call */
    }

loc_0043B504: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B510
 * Original: 0x0043B510 - 0x0043B521 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B510(void)
{

loc_0043B510: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B51Du); } /* indirect call */
    }

loc_0043B520: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B530
 * Original: 0x0043B530 - 0x0043B55A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B530(void)
{

loc_0043B530: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AAF8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B549u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B549: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F52C2);
    ecx = eax;
    PUSH32(esp, 0x0043B556u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B556: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B570
 * Original: 0x0043B570 - 0x0043B585 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B570(void)
{

loc_0043B570: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AAFC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B582u); } /* indirect call */
    }

loc_0043B584: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B590
 * Original: 0x0043B590 - 0x0043B5A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B590(void)
{

loc_0043B590: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B5A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B59Du); } /* indirect call */
    }

loc_0043B5A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B5B0
 * Original: 0x0043B5B0 - 0x0043B5DA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B5B0(void)
{

loc_0043B5B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AB14;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B5C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B5C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F45CC);
    ecx = eax;
    PUSH32(esp, 0x0043B5D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B5D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B5F0
 * Original: 0x0043B5F0 - 0x0043B605 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B5F0(void)
{

loc_0043B5F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB18);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B602u); } /* indirect call */
    }

loc_0043B604: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B610
 * Original: 0x0043B610 - 0x0043B621 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B610(void)
{

loc_0043B610: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B61Du); } /* indirect call */
    }

loc_0043B620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B630
 * Original: 0x0043B630 - 0x0043B65A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B630(void)
{

loc_0043B630: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AB34;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B649u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B649: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F41B4);
    ecx = eax;
    PUSH32(esp, 0x0043B656u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B656: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B670
 * Original: 0x0043B670 - 0x0043B685 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B670(void)
{

loc_0043B670: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB38);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B682u); } /* indirect call */
    }

loc_0043B684: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B690
 * Original: 0x0043B690 - 0x0043B6A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B690(void)
{

loc_0043B690: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B6A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B69Du); } /* indirect call */
    }

loc_0043B6A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B6B0
 * Original: 0x0043B6B0 - 0x0043B6DA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B6B0(void)
{

loc_0043B6B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AB4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B6C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B6C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F5040);
    ecx = eax;
    PUSH32(esp, 0x0043B6D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B6D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B6F0
 * Original: 0x0043B6F0 - 0x0043B705 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B6F0(void)
{

loc_0043B6F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB50);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B702u); } /* indirect call */
    }

loc_0043B704: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B710
 * Original: 0x0043B710 - 0x0043B721 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B710(void)
{

loc_0043B710: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B720u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B71Du); } /* indirect call */
    }

loc_0043B720: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B730
 * Original: 0x0043B730 - 0x0043B75A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B730(void)
{

loc_0043B730: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AB6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B749u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B749: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F4270);
    ecx = eax;
    PUSH32(esp, 0x0043B756u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B756: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B770
 * Original: 0x0043B770 - 0x0043B785 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B770(void)
{

loc_0043B770: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB70);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B782u); } /* indirect call */
    }

loc_0043B784: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B790
 * Original: 0x0043B790 - 0x0043B7A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B790(void)
{

loc_0043B790: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B7A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B79Du); } /* indirect call */
    }

loc_0043B7A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B7B0
 * Original: 0x0043B7B0 - 0x0043B7DA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B7B0(void)
{

loc_0043B7B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AB84;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B7C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B7C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F47AA);
    ecx = eax;
    PUSH32(esp, 0x0043B7D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B7D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B7F0
 * Original: 0x0043B7F0 - 0x0043B805 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B7F0(void)
{

loc_0043B7F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB88);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043B804u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B802u); } /* indirect call */
    }

loc_0043B804: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B810
 * Original: 0x0043B810 - 0x0043B821 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B810(void)
{

loc_0043B810: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B81Du); } /* indirect call */
    }

loc_0043B820: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B830
 * Original: 0x0043B830 - 0x0043B85A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B830(void)
{

loc_0043B830: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AB9C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B849u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B849: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F49AE);
    ecx = eax;
    PUSH32(esp, 0x0043B856u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B856: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B870
 * Original: 0x0043B870 - 0x0043B925 (181 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B870(void)
{

loc_0043B870: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909FF8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B882u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B87Fu); } /* indirect call */
    }

loc_0043B882: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909FF8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B891u); } /* indirect call */
    }

loc_0043B894: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909FFC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B8A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B8A3u); } /* indirect call */
    }

loc_0043B8A6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A008);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B8B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B8B5u); } /* indirect call */
    }

loc_0043B8B8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A010);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B8CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B8C7u); } /* indirect call */
    }

loc_0043B8CA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A000);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B8DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B8D9u); } /* indirect call */
    }

loc_0043B8DC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A00C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B8EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B8EBu); } /* indirect call */
    }

loc_0043B8EE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A014);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B8FDu); } /* indirect call */
    }

loc_0043B900: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A018);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B912u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B90Fu); } /* indirect call */
    }

loc_0043B912: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A004);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043B924u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043B921u); } /* indirect call */
    }

loc_0043B924: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043B960
 * Original: 0x0043B960 - 0x0043B98A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B960(void)
{

loc_0043B960: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83ABA0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043B979u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043B979: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F4A34);
    ecx = eax;
    PUSH32(esp, 0x0043B986u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043B986: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B9A0
 * Original: 0x0043B9A0 - 0x0043B9B6 (22 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B9A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043B9C0
 * Original: 0x0043B9C0 - 0x0043B9D8 (24 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B9C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(edx);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043B9E0
 * Original: 0x0043B9E0 - 0x0043B9F7 (23 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B9E0(void)
{

loc_0043B9E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edx));
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043BA00
 * Original: 0x0043BA00 - 0x0043BA17 (23 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BA00(void)
{

loc_0043BA00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx))); }
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043BA20
 * Original: 0x0043BA20 - 0x0043BA37 (23 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BA20(void)
{

loc_0043BA20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    eax = MEM32(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx))); }
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043BA40
 * Original: 0x0043BA40 - 0x0043BA53 (19 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043BA40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043BA60
 * Original: 0x0043BA60 - 0x0043BA80 (32 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043BA60: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043BA75; /* jl: less (signed <) */

loc_0043BA6C: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043BA75: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043BA90
 * Original: 0x0043BA90 - 0x0043BAB3 (35 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043BA90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043BAAA; /* jle: less or equal (signed <=) */

loc_0043BAA1: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_0043BAAA: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043BAC0
 * Original: 0x0043BAC0 - 0x0043BAE3 (35 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043BAC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043BADA; /* jle: less or equal (signed <=) */

loc_0043BAD1: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043BADA: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043BAF0
 * Original: 0x0043BAF0 - 0x0043BD80 (656 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043BAF0: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AAA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BB03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BB01u); } /* indirect call */
    }

loc_0043BB03: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BB36; /* je: equal / zero */

loc_0043BB0B: ;
    MEM32(esi) = 0x83ABA0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BB21u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BB21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F4A34);
    ecx = eax;
    PUSH32(esp, 0x0043BB2Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BB2E: ;
    MEM32(0x909FF8) = esi;
    goto loc_0043BB3C;

loc_0043BB36: ;
    MEM32(0x909FF8) = edi;

loc_0043BB3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AABC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043BB4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BB4Bu); } /* indirect call */
    }

loc_0043BB4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BB7E; /* je: equal / zero */

loc_0043BB53: ;
    MEM32(esi) = 0x83AAD8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BB69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BB69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F4E92);
    ecx = eax;
    PUSH32(esp, 0x0043BB76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BB76: ;
    MEM32(0x909FFC) = esi;
    goto loc_0043BB84;

loc_0043BB7E: ;
    MEM32(0x909FFC) = edi;

loc_0043BB84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AADC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BB95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BB93u); } /* indirect call */
    }

loc_0043BB95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BBC6; /* je: equal / zero */

loc_0043BB9B: ;
    MEM32(esi) = 0x83AAF8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BBB1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BBB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F52C2);
    ecx = eax;
    PUSH32(esp, 0x0043BBBEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BBBE: ;
    MEM32(0x90A008) = esi;
    goto loc_0043BBCC;

loc_0043BBC6: ;
    MEM32(0x90A008) = edi;

loc_0043BBCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AAFC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043BBDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BBDBu); } /* indirect call */
    }

loc_0043BBDD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BC0E; /* je: equal / zero */

loc_0043BBE3: ;
    MEM32(esi) = 0x83AB14;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BBF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BBF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F45CC);
    ecx = eax;
    PUSH32(esp, 0x0043BC06u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BC06: ;
    MEM32(0x90A010) = esi;
    goto loc_0043BC14;

loc_0043BC0E: ;
    MEM32(0x90A010) = edi;

loc_0043BC14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB18);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BC25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BC23u); } /* indirect call */
    }

loc_0043BC25: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BC56; /* je: equal / zero */

loc_0043BC2B: ;
    MEM32(esi) = 0x83AB34;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BC41u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BC41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F41B4);
    ecx = eax;
    PUSH32(esp, 0x0043BC4Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BC4E: ;
    MEM32(0x90A000) = esi;
    goto loc_0043BC5C;

loc_0043BC56: ;
    MEM32(0x90A000) = edi;

loc_0043BC5C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB38);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043BC6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BC6Bu); } /* indirect call */
    }

loc_0043BC6D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BC9E; /* je: equal / zero */

loc_0043BC73: ;
    MEM32(esi) = 0x83AB4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BC89u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BC89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F5040);
    ecx = eax;
    PUSH32(esp, 0x0043BC96u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BC96: ;
    MEM32(0x90A00C) = esi;
    goto loc_0043BCA4;

loc_0043BC9E: ;
    MEM32(0x90A00C) = edi;

loc_0043BCA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB50);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BCB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BCB3u); } /* indirect call */
    }

loc_0043BCB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BCE6; /* je: equal / zero */

loc_0043BCBB: ;
    MEM32(esi) = 0x83AB6C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BCD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BCD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F4270);
    ecx = eax;
    PUSH32(esp, 0x0043BCDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BCDE: ;
    MEM32(0x90A014) = esi;
    goto loc_0043BCEC;

loc_0043BCE6: ;
    MEM32(0x90A014) = edi;

loc_0043BCEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB70);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043BCFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BCFBu); } /* indirect call */
    }

loc_0043BCFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BD2E; /* je: equal / zero */

loc_0043BD03: ;
    MEM32(esi) = 0x83AB84;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BD19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BD19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F47AA);
    ecx = eax;
    PUSH32(esp, 0x0043BD26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BD26: ;
    MEM32(0x90A018) = esi;
    goto loc_0043BD34;

loc_0043BD2E: ;
    MEM32(0x90A018) = edi;

loc_0043BD34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AB88);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BD45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BD43u); } /* indirect call */
    }

loc_0043BD45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043BD77; /* je: equal / zero */

loc_0043BD4B: ;
    MEM32(esi) = 0x83AB9C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x0043BD61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BD61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F49AE);
    ecx = eax;
    PUSH32(esp, 0x0043BD6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BD6E: ;
    POP32(esp, edi);
    MEM32(0x90A004) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043BD77: ;
    MEM32(0x90A004) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043BE30
 * Original: 0x0043BE30 - 0x0043BE45 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BE30(void)
{

loc_0043BE30: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ABA4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BE44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BE42u); } /* indirect call */
    }

loc_0043BE44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BE50
 * Original: 0x0043BE50 - 0x0043BE61 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BE50(void)
{

loc_0043BE50: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043BE60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BE5Du); } /* indirect call */
    }

loc_0043BE60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BE70
 * Original: 0x0043BE70 - 0x0043BE85 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BE70(void)
{

loc_0043BE70: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ABBC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BE84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BE82u); } /* indirect call */
    }

loc_0043BE84: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BE90
 * Original: 0x0043BE90 - 0x0043BEA1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BE90(void)
{

loc_0043BE90: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043BEA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BE9Du); } /* indirect call */
    }

loc_0043BEA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BEB0
 * Original: 0x0043BEB0 - 0x0043BEDA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BEB0(void)
{

loc_0043BEB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83ABD0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043BEC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BEC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x166CDB);
    ecx = eax;
    PUSH32(esp, 0x0043BED6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BED6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043BEF0
 * Original: 0x0043BEF0 - 0x0043BF05 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BEF0(void)
{

loc_0043BEF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ABD4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BF04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BF02u); } /* indirect call */
    }

loc_0043BF04: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BF10
 * Original: 0x0043BF10 - 0x0043BF21 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BF10(void)
{

loc_0043BF10: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043BF20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BF1Du); } /* indirect call */
    }

loc_0043BF20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BF30
 * Original: 0x0043BF30 - 0x0043BF5A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BF30(void)
{

loc_0043BF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83ABEC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043BF49u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BF49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x167787);
    ecx = eax;
    PUSH32(esp, 0x0043BF56u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BF56: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043BF70
 * Original: 0x0043BF70 - 0x0043BF85 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BF70(void)
{

loc_0043BF70: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ABF0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043BF84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BF82u); } /* indirect call */
    }

loc_0043BF84: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BF90
 * Original: 0x0043BF90 - 0x0043BFA1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BF90(void)
{

loc_0043BF90: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043BFA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043BF9Du); } /* indirect call */
    }

loc_0043BFA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BFB0
 * Original: 0x0043BFB0 - 0x0043BFDA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BFB0(void)
{

loc_0043BFB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AC04;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043BFC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043BFC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x167937);
    ecx = eax;
    PUSH32(esp, 0x0043BFD6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043BFD6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043BFF0
 * Original: 0x0043BFF0 - 0x0043C005 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BFF0(void)
{

loc_0043BFF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC08);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C002u); } /* indirect call */
    }

loc_0043C004: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C010
 * Original: 0x0043C010 - 0x0043C021 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C010(void)
{

loc_0043C010: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C01Du); } /* indirect call */
    }

loc_0043C020: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C030
 * Original: 0x0043C030 - 0x0043C05A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C030(void)
{

loc_0043C030: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AC20;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C049u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C049: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x166AD7);
    ecx = eax;
    PUSH32(esp, 0x0043C056u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C056: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C070
 * Original: 0x0043C070 - 0x0043C085 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C070(void)
{

loc_0043C070: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC24);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C084u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C082u); } /* indirect call */
    }

loc_0043C084: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C090
 * Original: 0x0043C090 - 0x0043C0A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C090(void)
{

loc_0043C090: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C0A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C09Du); } /* indirect call */
    }

loc_0043C0A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C0B0
 * Original: 0x0043C0B0 - 0x0043C0DA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C0B0(void)
{

loc_0043C0B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AC38;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C0C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C0C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1671FC);
    ecx = eax;
    PUSH32(esp, 0x0043C0D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C0D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C0F0
 * Original: 0x0043C0F0 - 0x0043C15D (109 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C0F0(void)
{

loc_0043C0F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A02C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C0FFu); } /* indirect call */
    }

loc_0043C102: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A024);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C114u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C111u); } /* indirect call */
    }

loc_0043C114: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A030);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C126u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C123u); } /* indirect call */
    }

loc_0043C126: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A038);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C138u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C135u); } /* indirect call */
    }

loc_0043C138: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A028);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C14Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C147u); } /* indirect call */
    }

loc_0043C14A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A034);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C15Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C159u); } /* indirect call */
    }

loc_0043C15C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C180
 * Original: 0x0043C180 - 0x0043C1AA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C180(void)
{

loc_0043C180: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AC3C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C199u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C199: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x16708B);
    ecx = eax;
    PUSH32(esp, 0x0043C1A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C1A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C1C0
 * Original: 0x0043C1C0 - 0x0043C1EC (44 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C1C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C1E1; /* je: equal / zero */

loc_0043C1CB: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C1E1; /* je: equal / zero */

loc_0043C1D3: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043C1E1: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043C200
 * Original: 0x0043C200 - 0x0043C23D (61 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C200: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0043C239; /* jle: less or equal (signed <=) */

loc_0043C215: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    /* nop */

loc_0043C220: ;
    edi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C232; /* je: equal / zero */

loc_0043C228: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043C220; /* jl: less (signed <) */

loc_0043C22D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0043C232: ;
    POP32(esp, edi);
    MEM32(esi) = 0;

loc_0043C239: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043C250
 * Original: 0x0043C250 - 0x0043C27C (44 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C250: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043C26E; /* jne: not equal / not zero */

loc_0043C25B: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043C26E; /* jne: not equal / not zero */

loc_0043C263: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043C26E: ;
    edx = MEM32(esp + 8);
    eax = 1;
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043C290
 * Original: 0x0043C290 - 0x0043C2CD (61 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C290: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0043C2C9; /* jle: less or equal (signed <=) */

loc_0043C2A5: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    /* nop */

loc_0043C2B0: ;
    edi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043C2C2; /* jne: not equal / not zero */

loc_0043C2B8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043C2B0; /* jl: less (signed <) */

loc_0043C2BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0043C2C2: ;
    POP32(esp, edi);
    MEM32(esi) = 1;

loc_0043C2C9: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043C2E0
 * Original: 0x0043C2E0 - 0x0043C311 (49 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C2E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0043C2FF; /* je: equal / zero */

loc_0043C2F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C303; /* je: equal / zero */

loc_0043C2F4: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043C2FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C2F4; /* je: equal / zero */

loc_0043C303: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043C320
 * Original: 0x0043C320 - 0x0043C338 (24 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C320: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 8);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043C340
 * Original: 0x0043C340 - 0x0043C4F8 (440 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C340: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ABA4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C353u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C351u); } /* indirect call */
    }

loc_0043C353: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C386; /* je: equal / zero */

loc_0043C35B: ;
    MEM32(esi) = 0x83AC3C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C371u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C371: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x16708B);
    ecx = eax;
    PUSH32(esp, 0x0043C37Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C37E: ;
    MEM32(0x90A02C) = esi;
    goto loc_0043C38C;

loc_0043C386: ;
    MEM32(0x90A02C) = edi;

loc_0043C38C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ABBC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043C39Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C39Bu); } /* indirect call */
    }

loc_0043C39D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C3CE; /* je: equal / zero */

loc_0043C3A3: ;
    MEM32(esi) = 0x83ABD0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C3B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C3B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x166CDB);
    ecx = eax;
    PUSH32(esp, 0x0043C3C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C3C6: ;
    MEM32(0x90A024) = esi;
    goto loc_0043C3D4;

loc_0043C3CE: ;
    MEM32(0x90A024) = edi;

loc_0043C3D4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ABD4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C3E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C3E3u); } /* indirect call */
    }

loc_0043C3E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C416; /* je: equal / zero */

loc_0043C3EB: ;
    MEM32(esi) = 0x83ABEC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C401u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C401: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x167787);
    ecx = eax;
    PUSH32(esp, 0x0043C40Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C40E: ;
    MEM32(0x90A030) = esi;
    goto loc_0043C41C;

loc_0043C416: ;
    MEM32(0x90A030) = edi;

loc_0043C41C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ABF0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043C42Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C42Bu); } /* indirect call */
    }

loc_0043C42D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C45E; /* je: equal / zero */

loc_0043C433: ;
    MEM32(esi) = 0x83AC04;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C449u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C449: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x167937);
    ecx = eax;
    PUSH32(esp, 0x0043C456u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C456: ;
    MEM32(0x90A038) = esi;
    goto loc_0043C464;

loc_0043C45E: ;
    MEM32(0x90A038) = edi;

loc_0043C464: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC08);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C475u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C473u); } /* indirect call */
    }

loc_0043C475: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C4A6; /* je: equal / zero */

loc_0043C47B: ;
    MEM32(esi) = 0x83AC20;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C491u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C491: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x166AD7);
    ecx = eax;
    PUSH32(esp, 0x0043C49Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C49E: ;
    MEM32(0x90A028) = esi;
    goto loc_0043C4AC;

loc_0043C4A6: ;
    MEM32(0x90A028) = edi;

loc_0043C4AC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC24);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043C4BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C4BBu); } /* indirect call */
    }

loc_0043C4BD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C4EF; /* je: equal / zero */

loc_0043C4C3: ;
    MEM32(esi) = 0x83AC38;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x0043C4D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C4D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1671FC);
    ecx = eax;
    PUSH32(esp, 0x0043C4E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C4E6: ;
    POP32(esp, edi);
    MEM32(0x90A034) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043C4EF: ;
    MEM32(0x90A034) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C570
 * Original: 0x0043C570 - 0x0043C585 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C570(void)
{

loc_0043C570: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC40);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C582u); } /* indirect call */
    }

loc_0043C584: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C590
 * Original: 0x0043C590 - 0x0043C5A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C590(void)
{

loc_0043C590: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C5A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C59Du); } /* indirect call */
    }

loc_0043C5A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C5B0
 * Original: 0x0043C5B0 - 0x0043C5C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C5B0(void)
{

loc_0043C5B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC48);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C5C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C5C2u); } /* indirect call */
    }

loc_0043C5C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C5D0
 * Original: 0x0043C5D0 - 0x0043C5E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C5D0(void)
{

loc_0043C5D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C5E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C5DDu); } /* indirect call */
    }

loc_0043C5E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C5F0
 * Original: 0x0043C5F0 - 0x0043C605 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C5F0(void)
{

loc_0043C5F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC60);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C602u); } /* indirect call */
    }

loc_0043C604: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C610
 * Original: 0x0043C610 - 0x0043C621 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C610(void)
{

loc_0043C610: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C61Du); } /* indirect call */
    }

loc_0043C620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C630
 * Original: 0x0043C630 - 0x0043C65A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C630(void)
{

loc_0043C630: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AC80;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x2B1);
    PUSH32(esp, 0x0043C649u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C649: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x563DE5);
    ecx = eax;
    PUSH32(esp, 0x0043C656u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C656: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C670
 * Original: 0x0043C670 - 0x0043C6A7 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C670(void)
{

loc_0043C670: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A044);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C682u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C67Fu); } /* indirect call */
    }

loc_0043C682: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A048);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C694u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C691u); } /* indirect call */
    }

loc_0043C694: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A040);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C6A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C6A3u); } /* indirect call */
    }

loc_0043C6A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C6C0
 * Original: 0x0043C6C0 - 0x0043C6EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C6C0(void)
{

loc_0043C6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AC84;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x2B1);
    PUSH32(esp, 0x0043C6D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C6D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5638F2);
    ecx = eax;
    PUSH32(esp, 0x0043C6E6u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043C6E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C700
 * Original: 0x0043C700 - 0x0043C71D (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C700: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043C71A; /* jne: not equal / not zero */

loc_0043C710: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043C71Au); RECOMP_ABI_CALL(0x00016960u, sub_00016960); /* call 0x00016960 */

loc_0043C71A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043C730
 * Original: 0x0043C730 - 0x0043C750 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043C730: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043C741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C73Eu); } /* indirect call */
    }

loc_0043C741: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0043C760
 * Original: 0x0043C760 - 0x0043C763 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C760(void)
{

loc_0043C760: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043C770
 * Original: 0x0043C770 - 0x0043C773 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C770(void)
{

loc_0043C770: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043C780
 * Original: 0x0043C780 - 0x0043C7AA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C780(void)
{

loc_0043C780: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AC98;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x2B1);
    PUSH32(esp, 0x0043C799u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C799: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x562224);
    ecx = eax;
    PUSH32(esp, 0x0043C7A6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C7A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C7C0
 * Original: 0x0043C7C0 - 0x0043C7F5 (53 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C7C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    ecx = MEM32(ecx);
    eax = MEM32(eax);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edi = eax;
    if (CMP_GE(_fas, _fbs)) edi = ecx; /* cmovge */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) esi = eax; /* cmovge */
    PUSH32(esp, 0x0043C7E2u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0043C7E2: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043C810
 * Original: 0x0043C810 - 0x0043C883 (115 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C810(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043C810: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043C829; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0043C823: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_0043C82D;

loc_0043C829: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_0043C82D: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043C83D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0043C83B: ;
    goto loc_0043C841;

loc_0043C83D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_0043C841: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0043C84Cu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0043C84C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xD431;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x83AC9C); /* mulss */
    edx = MEM32(esp + 0xC);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043C8A0
 * Original: 0x0043C8A0 - 0x0043C987 (231 bytes, 61 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C8A0: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x83AC40);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C8B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C8B0u); } /* indirect call */
    }

loc_0043C8B2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C8E3; /* je: equal / zero */

loc_0043C8B8: ;
    MEM32(esi) = 0x83AC84;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x2B1);
    PUSH32(esp, 0x0043C8CEu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C8CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5638F2);
    ecx = eax;
    PUSH32(esp, 0x0043C8DBu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043C8DB: ;
    MEM32(0x90A044) = esi;
    goto loc_0043C8ED;

loc_0043C8E3: ;
    MEM32(0x90A044) = 0;

loc_0043C8ED: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC48);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043C8FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C8FCu); } /* indirect call */
    }

loc_0043C8FE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C92F; /* je: equal / zero */

loc_0043C904: ;
    MEM32(esi) = 0x83AC98;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x2B1);
    PUSH32(esp, 0x0043C91Au); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C91A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x562224);
    ecx = eax;
    PUSH32(esp, 0x0043C927u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C927: ;
    MEM32(0x90A048) = esi;
    goto loc_0043C939;

loc_0043C92F: ;
    MEM32(0x90A048) = 0;

loc_0043C939: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AC60);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C94Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C948u); } /* indirect call */
    }

loc_0043C94A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C97B; /* je: equal / zero */

loc_0043C950: ;
    MEM32(esi) = 0x83AC80;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x2B1);
    PUSH32(esp, 0x0043C966u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043C966: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x563DE5);
    ecx = eax;
    PUSH32(esp, 0x0043C973u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043C973: ;
    MEM32(0x90A040) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043C97B: ;
    MEM32(0x90A040) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C9C0
 * Original: 0x0043C9C0 - 0x0043C9D5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C9C0(void)
{

loc_0043C9C0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ACA0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043C9D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C9D2u); } /* indirect call */
    }

loc_0043C9D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C9E0
 * Original: 0x0043C9E0 - 0x0043C9F1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C9E0(void)
{

loc_0043C9E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043C9F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043C9EDu); } /* indirect call */
    }

loc_0043C9F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CA00
 * Original: 0x0043CA00 - 0x0043CA15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CA00(void)
{

loc_0043CA00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ACB8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CA14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CA12u); } /* indirect call */
    }

loc_0043CA14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CA20
 * Original: 0x0043CA20 - 0x0043CA31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CA20(void)
{

loc_0043CA20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CA30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CA2Du); } /* indirect call */
    }

loc_0043CA30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CA40
 * Original: 0x0043CA40 - 0x0043CA6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CA40(void)
{

loc_0043CA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83ACD0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CA59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CA59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18245);
    ecx = eax;
    PUSH32(esp, 0x0043CA66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CA66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CA80
 * Original: 0x0043CA80 - 0x0043CA95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CA80(void)
{

loc_0043CA80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ACD4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CA94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CA92u); } /* indirect call */
    }

loc_0043CA94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CAA0
 * Original: 0x0043CAA0 - 0x0043CAB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CAA0(void)
{

loc_0043CAA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CAADu); } /* indirect call */
    }

loc_0043CAB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CAC0
 * Original: 0x0043CAC0 - 0x0043CAEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CAC0(void)
{

loc_0043CAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83ACEC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CAD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CAD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA199AD);
    ecx = eax;
    PUSH32(esp, 0x0043CAE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CAE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CB00
 * Original: 0x0043CB00 - 0x0043CB15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CB00(void)
{

loc_0043CB00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ACF0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CB14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CB12u); } /* indirect call */
    }

loc_0043CB14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CB20
 * Original: 0x0043CB20 - 0x0043CB31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CB20(void)
{

loc_0043CB20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CB30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CB2Du); } /* indirect call */
    }

loc_0043CB30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CB40
 * Original: 0x0043CB40 - 0x0043CB6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CB40(void)
{

loc_0043CB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AD08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CB59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CB59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA182E5);
    ecx = eax;
    PUSH32(esp, 0x0043CB66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CB66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CB80
 * Original: 0x0043CB80 - 0x0043CB95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CB80(void)
{

loc_0043CB80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD0C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CB94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CB92u); } /* indirect call */
    }

loc_0043CB94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CBA0
 * Original: 0x0043CBA0 - 0x0043CBB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CBA0(void)
{

loc_0043CBA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CBB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CBADu); } /* indirect call */
    }

loc_0043CBB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CBC0
 * Original: 0x0043CBC0 - 0x0043CBEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CBC0(void)
{

loc_0043CBC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AD24;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CBD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CBD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18613);
    ecx = eax;
    PUSH32(esp, 0x0043CBE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CBE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CC00
 * Original: 0x0043CC00 - 0x0043CC15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CC00(void)
{

loc_0043CC00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD28);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CC14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CC12u); } /* indirect call */
    }

loc_0043CC14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CC20
 * Original: 0x0043CC20 - 0x0043CC31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CC20(void)
{

loc_0043CC20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CC30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CC2Du); } /* indirect call */
    }

loc_0043CC30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CC40
 * Original: 0x0043CC40 - 0x0043CC6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CC40(void)
{

loc_0043CC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AD40;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CC59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CC59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18AD1);
    ecx = eax;
    PUSH32(esp, 0x0043CC66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CC66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CC80
 * Original: 0x0043CC80 - 0x0043CC95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CC80(void)
{

loc_0043CC80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD44);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CC94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CC92u); } /* indirect call */
    }

loc_0043CC94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CCA0
 * Original: 0x0043CCA0 - 0x0043CCB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CCA0(void)
{

loc_0043CCA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CCB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CCADu); } /* indirect call */
    }

loc_0043CCB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CCC0
 * Original: 0x0043CCC0 - 0x0043CCEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CCC0(void)
{

loc_0043CCC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AD60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CCD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CCD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18C61);
    ecx = eax;
    PUSH32(esp, 0x0043CCE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CCE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CD00
 * Original: 0x0043CD00 - 0x0043CD15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CD00(void)
{

loc_0043CD00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD64);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CD14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CD12u); } /* indirect call */
    }

loc_0043CD14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CD20
 * Original: 0x0043CD20 - 0x0043CD31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CD20(void)
{

loc_0043CD20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CD30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CD2Du); } /* indirect call */
    }

loc_0043CD30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CD40
 * Original: 0x0043CD40 - 0x0043CD6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CD40(void)
{

loc_0043CD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AD80;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CD59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CD59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18C77);
    ecx = eax;
    PUSH32(esp, 0x0043CD66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CD66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CD80
 * Original: 0x0043CD80 - 0x0043CD95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CD80(void)
{

loc_0043CD80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD84);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CD94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CD92u); } /* indirect call */
    }

loc_0043CD94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CDA0
 * Original: 0x0043CDA0 - 0x0043CDB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CDA0(void)
{

loc_0043CDA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CDB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CDADu); } /* indirect call */
    }

loc_0043CDB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CDC0
 * Original: 0x0043CDC0 - 0x0043CDEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CDC0(void)
{

loc_0043CDC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83ADA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CDD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CDD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA192A7);
    ecx = eax;
    PUSH32(esp, 0x0043CDE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CDE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CE00
 * Original: 0x0043CE00 - 0x0043CE15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CE00(void)
{

loc_0043CE00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ADA8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CE14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CE12u); } /* indirect call */
    }

loc_0043CE14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CE20
 * Original: 0x0043CE20 - 0x0043CE31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CE20(void)
{

loc_0043CE20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CE30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CE2Du); } /* indirect call */
    }

loc_0043CE30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CE40
 * Original: 0x0043CE40 - 0x0043CE6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CE40(void)
{

loc_0043CE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83ADC4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CE59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CE59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA19969);
    ecx = eax;
    PUSH32(esp, 0x0043CE66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CE66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CE80
 * Original: 0x0043CE80 - 0x0043CE95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CE80(void)
{

loc_0043CE80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ADC8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CE94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CE92u); } /* indirect call */
    }

loc_0043CE94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CEA0
 * Original: 0x0043CEA0 - 0x0043CEB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CEA0(void)
{

loc_0043CEA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CEB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CEADu); } /* indirect call */
    }

loc_0043CEB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CEC0
 * Original: 0x0043CEC0 - 0x0043CEEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CEC0(void)
{

loc_0043CEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83ADE4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CED9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CED9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA182E7);
    ecx = eax;
    PUSH32(esp, 0x0043CEE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CEE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CF00
 * Original: 0x0043CF00 - 0x0043CF15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CF00(void)
{

loc_0043CF00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ADE8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CF14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CF12u); } /* indirect call */
    }

loc_0043CF14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CF20
 * Original: 0x0043CF20 - 0x0043CF31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CF20(void)
{

loc_0043CF20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CF30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CF2Du); } /* indirect call */
    }

loc_0043CF30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CF40
 * Original: 0x0043CF40 - 0x0043CF6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CF40(void)
{

loc_0043CF40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AE0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CF59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CF59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA19E37);
    ecx = eax;
    PUSH32(esp, 0x0043CF66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CF66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CF80
 * Original: 0x0043CF80 - 0x0043CF95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CF80(void)
{

loc_0043CF80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AE10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043CF94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CF92u); } /* indirect call */
    }

loc_0043CF94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CFA0
 * Original: 0x0043CFA0 - 0x0043CFB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CFA0(void)
{

loc_0043CFA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043CFB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043CFADu); } /* indirect call */
    }

loc_0043CFB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043CFC0
 * Original: 0x0043CFC0 - 0x0043CFEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CFC0(void)
{

loc_0043CFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AE30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043CFD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043CFD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA1864D);
    ecx = eax;
    PUSH32(esp, 0x0043CFE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043CFE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043D000
 * Original: 0x0043D000 - 0x0043D015 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D000(void)
{

loc_0043D000: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AE34);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D012u); } /* indirect call */
    }

loc_0043D014: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043D020
 * Original: 0x0043D020 - 0x0043D031 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D020(void)
{

loc_0043D020: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D02Du); } /* indirect call */
    }

loc_0043D030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043D040
 * Original: 0x0043D040 - 0x0043D06A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D040(void)
{

loc_0043D040: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AE5C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D059u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D059: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18E3D);
    ecx = eax;
    PUSH32(esp, 0x0043D066u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D066: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043D080
 * Original: 0x0043D080 - 0x0043D095 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D080(void)
{

loc_0043D080: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AE60);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D094u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D092u); } /* indirect call */
    }

loc_0043D094: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043D0A0
 * Original: 0x0043D0A0 - 0x0043D0B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D0A0(void)
{

loc_0043D0A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D0B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D0ADu); } /* indirect call */
    }

loc_0043D0B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043D0C0
 * Original: 0x0043D0C0 - 0x0043D0EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D0C0(void)
{

loc_0043D0C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AE84;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D0D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D0D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18E7F);
    ecx = eax;
    PUSH32(esp, 0x0043D0E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D0E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043D100
 * Original: 0x0043D100 - 0x0043D20F (271 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D100(void)
{

loc_0043D100: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A060);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D112u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D10Fu); } /* indirect call */
    }

loc_0043D112: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A074);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D124u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D121u); } /* indirect call */
    }

loc_0043D124: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A058);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D136u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D133u); } /* indirect call */
    }

loc_0043D136: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A054);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D148u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D145u); } /* indirect call */
    }

loc_0043D148: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A088);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D15Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D157u); } /* indirect call */
    }

loc_0043D15A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A06C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D16Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D169u); } /* indirect call */
    }

loc_0043D16C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A064);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D17Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D17Bu); } /* indirect call */
    }

loc_0043D17E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A07C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D190u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D18Du); } /* indirect call */
    }

loc_0043D190: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A068);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D1A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D19Fu); } /* indirect call */
    }

loc_0043D1A2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A080);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D1B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D1B1u); } /* indirect call */
    }

loc_0043D1B4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A05C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D1C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D1C3u); } /* indirect call */
    }

loc_0043D1C6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A050);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D1D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D1D5u); } /* indirect call */
    }

loc_0043D1D8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A070);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D1EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D1E7u); } /* indirect call */
    }

loc_0043D1EA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A078);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D1FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D1F9u); } /* indirect call */
    }

loc_0043D1FC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A084);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043D20Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D20Bu); } /* indirect call */
    }

loc_0043D20E: ;
    esp += 4; return; /* ret */

}
