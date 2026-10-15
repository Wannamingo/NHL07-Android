#include "recomp_types.h"
#include "native_graphics.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
ptrdiff_t g_xbox_mem_offset;
uint32_t g_xbox_code_lo,g_xbox_code_hi;
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
volatile uint32_t g_icall_trace[ICALL_TRACE_SIZE],g_icall_trace_idx;
volatile uint64_t g_icall_count;
static uint32_t invalidations;
extern uint32_t nhl07_guest_resource_reference(int,uint32_t);
extern uint32_t nhl07_guest_resource_acquire(uint32_t);
extern void sub_007630A0(void),sub_007630E0(void);
void nhl07_invalidate_vertex_cache(void){++invalidations;}
uint32_t nhl07_graphics_call(NhlGraphicsApi api,const uint32_t *args){
    if(api!=NHL_GFX_D3DResource_AddRef&&api!=NHL_GFX_D3DResource_Release)abort();
    return nhl07_guest_resource_reference(api==NHL_GFX_D3DResource_AddRef,args[0]);
}
void sub_00762F80(void){
    g_ecx=MEM32(g_esp+4);g_eax=MEM32(0x900000);
    if(g_eax>=3)abort();MEM32(0x900004+g_eax*4)=g_ecx;++MEM32(0x900000);g_esp+=8;
}
recomp_func_t recomp_lookup_manual(uint32_t a){(void)a;return NULL;}
recomp_func_t recomp_lookup(uint32_t a){(void)a;return NULL;}
recomp_func_t recomp_lookup_kernel(uint32_t a){(void)a;return NULL;}
void recomp_icall_fail_log(uint32_t a){(void)a;abort();}
void recomp_icall_not_code_log(uint32_t a){(void)a;abort();}
int main(int argc,char **argv){
    if(argc!=2)return 2;FILE *file=fopen(argv[1],"rb");if(!file)return 2;
    void *ram=calloc(1,0x1000000);if(!ram)return 2;g_xbox_mem_offset=(ptrdiff_t)ram;
    uint32_t count;if(fread(&count,4,1,file)!=1)return 2;
    for(uint32_t row=0;row<count;row++){
        uint32_t v[20];if(fread(v,sizeof(v),1,file)!=1)return 2;
        memset((char *)ram+0xa00000,0,96);memset((char *)ram+0x900000,0,16);
        MEM32(0xa00000)=v[1];MEM32(0xa00014)=v[2]?0xa00020:0;
        MEM32(0xa00020)=(v[2]==3?0x40001u:(v[2]==1||v[2]==5)?0x50000u:0x50001u)|v[3];
        MEM32(0xa00034)=(v[2]==4||v[2]==5)?0xa00040:0;
        MEM32(0xa00040)=(v[2]==5?0x40000u:0x40001u)|v[3];
        g_eax=0x12345678;g_ecx=0x12345679;g_edx=0x1234567a;g_ebx=0x1234567b;
        g_esp=0xf10000;g_ebp=0xf20000;g_esi=0x1234567c;g_edi=0x1234567d;
        MEM32(g_esp)=0xf00000;MEM32(g_esp+4)=0xa00000;invalidations=0;
        if(v[0])sub_007630E0();else sub_007630A0();
        uint32_t actual[16]={g_eax,g_ecx,g_edx,g_ebx,g_esp,g_ebp,g_esi,g_edi,MEM32(0xa00000),MEM32(0xa00020),MEM32(0xa00040),MEM32(0x900000),MEM32(0x900004),MEM32(0x900008),MEM32(0x90000c),invalidations};
        for(unsigned field=0;field<16;field++)if(actual[field]!=v[field+4]){
            fprintf(stderr,"row=%u op=%u common=%08X parent_mode=%u field=%u actual=%08X expected=%08X\n",row,v[0],v[1],v[2],field,actual[field],v[field+4]);return 1;
        }
        if(!v[0]){
            MEM32(0xa00000)=v[1];
            MEM32(0xa00020)=(v[2]==3?0x40001u:(v[2]==1||v[2]==5)?0x50000u:0x50001u)|v[3];
            MEM32(0xa00040)=(v[2]==5?0x40000u:0x40001u)|v[3];
            g_eax=0x12345678;g_ecx=0x12345679;g_edx=0x1234567a;g_ebx=0x1234567b;
            g_esp=0xf10000;g_ebp=0xf20000;g_esi=0x1234567c;g_edi=0x1234567d;
            MEM32(g_esp-8)=0xface1234;MEM32(g_esp-4)=0xfedc5678;
            MEM32(g_esp+4)=0xffffffff;
            uint32_t result=nhl07_guest_resource_acquire(0xa00000);
            uint32_t preserved[8]={g_eax,g_ecx,g_edx,g_ebx,g_esp,g_ebp,g_esi,g_edi};
            const uint32_t initial[8]={0x12345678,0x12345679,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d};
            if(result!=v[4]||memcmp(preserved,initial,sizeof(initial))||
               MEM32(0xa00000)!=v[12]||MEM32(0xa00020)!=v[13]||MEM32(0xa00040)!=v[14]||
               MEM32(g_esp-8)!=0xface1234||MEM32(g_esp-4)!=0xfedc5678||
               MEM32(g_esp)!=0xf00000||MEM32(g_esp+4)!=0xffffffff){
                fprintf(stderr,"Internal device acquisition failed row=%u\n",row);return 1;
            }
        }
    }
    fclose(file);free(ram);printf("RESOURCE_ACQUIRE passed=%u failed=0\n",count/2);printf("RESOURCE_LIFETIME passed=%u failed=0\n",count);return 0;
}
