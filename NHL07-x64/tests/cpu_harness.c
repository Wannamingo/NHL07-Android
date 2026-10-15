/* Differential-test host for two real NHL 07 functions. Dependencies of the
   thread callback are controlled test callees with matching x86 byte bodies. */
#include "recomp_types.h"
#include <stdlib.h>
#ifdef _WIN32
#define TEST_EXPORT __declspec(dllexport)
#else
#define TEST_EXPORT __attribute__((visibility("default")))
#endif

ptrdiff_t g_xbox_mem_offset;
uint32_t g_xbox_code_lo,g_xbox_code_hi;
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
volatile uint32_t g_icall_trace[ICALL_TRACE_SIZE],g_icall_trace_idx;
volatile uint64_t g_icall_count;

void sub_005D7E7F(void);
void sub_0059DF4F(void);
/* Unrelated thread-exit override is linked but must never run in this matrix. */
uint32_t xbox_bridge_thread_exit_code(uint32_t handle,uint32_t *code){(void)handle;(void)code;abort();}
void sub_00449A30(void){abort();}
void sub_005D1D3A(void) { g_eax=0x33333333; g_esp+=4; }
static void attach(void) { g_eax=0x11111111; g_esp+=4; }
static void detach(void) { g_eax=0x22222222; g_esp+=4; }
recomp_func_t recomp_lookup_manual(uint32_t address) {
    if(address==0x008F0000) return attach;
    if(address==0x008F0010) return detach;
    return NULL;
}
recomp_func_t recomp_lookup(uint32_t address) { (void)address; return NULL; }
recomp_func_t recomp_lookup_kernel(uint32_t address) { (void)address; return NULL; }
void recomp_icall_fail_log(uint32_t address) { (void)address; abort(); }
void recomp_icall_not_code_log(uint32_t address) { (void)address; abort(); }

TEST_EXPORT void nhl07_test_init(void *memory,const uint32_t *regs) {
    g_xbox_mem_offset=(ptrdiff_t)memory;
    g_eax=regs[0]; g_ecx=regs[1]; g_edx=regs[2]; g_ebx=regs[3];
    g_esp=regs[4]; g_ebp=regs[5]; g_esi=regs[6]; g_edi=regs[7];
}
TEST_EXPORT void nhl07_test_run(unsigned kind,uint32_t *regs) {
    if(kind==0) sub_005D7E7F(); else sub_0059DF4F();
    regs[0]=g_eax; regs[1]=g_ecx; regs[2]=g_edx; regs[3]=g_ebx;
    regs[4]=g_esp; regs[5]=g_ebp; regs[6]=g_esi; regs[7]=g_edi;
}
