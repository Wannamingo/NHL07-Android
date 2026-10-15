#include "recomp_types.h"
#include <stdlib.h>
#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __attribute__((visibility("default")))
#endif
ptrdiff_t g_xbox_mem_offset;
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
RECOMP_TLS double g_fp_stack[8];
RECOMP_TLS int g_fp_top,g_fp_cmp;
RECOMP_TLS uint16_t g_fp_control_word,g_fp_cc;
void sub_006C744B(void);
EXPORT void nhl07_reverb_test(void *memory,uint32_t cw,uint32_t *esp_out) {
    g_xbox_mem_offset=(ptrdiff_t)memory;g_esp=0xf10000;g_ecx=0xb30000;
    g_fp_top=0;g_fp_cmp=0;g_fp_cc=0;g_fp_control_word=(uint16_t)cw;
    memset(g_fp_stack,0,sizeof(g_fp_stack));sub_006C744B();*esp_out=g_esp;
}
