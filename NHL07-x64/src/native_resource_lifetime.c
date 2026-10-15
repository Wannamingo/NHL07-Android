/* Presentation proxies use host ownership. Ordinary resources retain the
   actual XDK Common word, parent-surface references and destruction path. */
#include "recomp_types.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef _MSC_VER
#include <windows.h>
static volatile LONG reference_logs;
static int trace_reference(void){return InterlockedIncrement(&reference_logs)<=16;}
#else
#include <stdatomic.h>
static atomic_uint reference_logs;
static int trace_reference(void){return atomic_fetch_add_explicit(&reference_logs,1,memory_order_relaxed)<16;}
#endif
extern void sub_007630A0_original_xbox(void);
extern void sub_007630E0_original_xbox(void);
extern void nhl07_invalidate_vertex_cache(void);
uint32_t nhl07_guest_resource_reference(int add_ref,uint32_t resource) {
    uint32_t canonical=resource>=0x80000000u?resource-0x80000000u:resource;
    if(canonical<0x10000u||canonical>0x4000000u-24u||MEM32(g_esp+4)!=resource) {
        fprintf(stderr,"[NHL07-RESOURCE-REF-MISSING] invalid resource frame pointer=%08X\n",resource);abort();
    }
    uint32_t before=MEM32(resource),sp=g_esp;
    if(!add_ref)nhl07_invalidate_vertex_cache();
    if(add_ref)sub_007630A0_original_xbox();else sub_007630E0_original_xbox();
    if(g_esp!=sp+8u) {
        fprintf(stderr,"[NHL07-ABI] original resource reference RET 4 mismatch\n");abort();
    }
    uint32_t result=g_eax;
    /* The common graphics hook owns the final RET 4. Preserve all original
       register/memory effects and restore only its already-consumed frame. */
    g_esp=sp;
    if(trace_reference())fprintf(stderr,"[NHL07-RESOURCE-REF] original %s resource=%08X common_before=%08X result=%u\n",add_ref?"AddRef":"Release",resource,before,result);
    return result;
}

/* GetBackBuffer/GetDepthStencilSurface are device calls: their live frame
   contains an index (or no argument), not a resource. Build the actual AddRef
   frame below it and preserve the device caller's register state. */
uint32_t nhl07_guest_resource_acquire(uint32_t resource) {
    uint32_t eax=g_eax,ecx=g_ecx,edx=g_edx,ebx=g_ebx;
    uint32_t esp=g_esp,ebp=g_ebp,esi=g_esi,edi=g_edi;
    uint32_t old_return=MEM32(esp-8),old_argument=MEM32(esp-4);
    g_esp=esp-8;MEM32(g_esp)=0;MEM32(g_esp+4)=resource;
    uint32_t result=nhl07_guest_resource_reference(1,resource);
    MEM32(esp-8)=old_return;MEM32(esp-4)=old_argument;
    g_eax=eax;g_ecx=ecx;g_edx=edx;g_ebx=ebx;
    g_esp=esp;g_ebp=ebp;g_esi=esi;g_edi=edi;
    return result;
}
