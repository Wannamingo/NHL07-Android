/* Compare recovered interface arithmetic callback against original-x86 vectors. */
#include "recomp_types.h"
#include <stdio.h>
#include <stdlib.h>
ptrdiff_t g_xbox_mem_offset;
uint32_t g_xbox_code_lo,g_xbox_code_hi;
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
volatile uint32_t g_icall_trace[ICALL_TRACE_SIZE],g_icall_trace_idx;
volatile uint64_t g_icall_count;
extern recomp_func_t nhl07_lookup_recovered(uint32_t);
extern void initialize_original_tables(void);
extern void initialize_team_table(void);
extern void initialize_scene_table(void);
extern int is_scene_dispatch(uint32_t);
void test_virtual_free(void){g_edx=MEM32(g_esp+4);MEM32(g_edx+8)++;g_eax=0xcafebabe;g_esp+=8;}
recomp_func_t recomp_lookup_manual(uint32_t a){return a==0x600000?test_virtual_free:nhl07_lookup_recovered(a);}
recomp_func_t recomp_lookup(uint32_t a){(void)a;return NULL;}
recomp_func_t recomp_lookup_kernel(uint32_t a){(void)a;return NULL;}
void recomp_icall_fail_log(uint32_t a){(void)a;abort();}
void recomp_icall_not_code_log(uint32_t a){(void)a;abort();}
/* Observable dependency doubles, identical machine-code behavior in oracle. */
void sub_00029D67(void){MEM32(g_ecx+4)++;g_eax=0xdeadbeef;g_edx=0x11223344;g_esp+=4;}
void sub_00020951(void){g_ecx=MEM32(g_esp+4);MEM32(g_ecx+8)++;g_eax=0xcafebabe;g_edx=0x55667788;g_esp+=4;}
int main(int argc,char **argv) {
    if(argc!=2)return 2;FILE *f=fopen(argv[1],"rb");if(!f)return 2;
    void *ram=calloc(1,0x1000000);if(!ram)return 2;g_xbox_mem_offset=(ptrdiff_t)ram;
    initialize_original_tables();
    initialize_team_table();
    initialize_scene_table();
    unsigned count;if(fread(&count,4,1,f)!=1)return 2;
    for(unsigned i=0;i<count;i++) {
        uint32_t v[20];if(fread(v,sizeof(v),1,f)!=1)return 2;
        g_eax=0x12345678;g_ecx=0x12345679;g_edx=0x1234567a;g_ebx=0x1234567b;
        g_esp=0xf10000;g_ebp=0xf20000;g_esi=0x1234567c;g_edi=0x1234567d;
        MEM32(g_esp)=0xf00000;MEM32(g_esp+4)=0xa00000;
        MEM32(0xa00004)=v[0];MEM32(0xa00020)=0xb00008;
        MEM32(0xb00000)=v[1];MEM32(0xb00004)=v[2];
        uint32_t first=0xb00000,second=0xa00020;
        if(v[0]==0x20bd70||v[0]==0x21e7f0||v[0]==0x222980||v[0]==0x381db0||v[0]==0x27ef90) {
            g_ecx=v[2];MEM32(g_esp+4)=v[1];MEM32(v[2]+4)=MEM32(v[2]+8)=0;
            if(v[0]==0x27ef90) {
                MEM32(v[2])=0;MEM32(0x8fa540)=0xd00000;MEM32(0xd00000)=0xd00100;MEM32(0xd0011c)=0x600000;
                g_xbox_code_lo=0x10000;g_xbox_code_hi=0x900000;
            }
            nhl07_lookup_recovered(v[0])();first=v[2]+(v[0]==0x27ef90?0:4);second=v[2]+8;
        } else if(v[0]==0x22a270) {
            MEM32(g_esp+4)=v[1];MEM32(g_esp+8)=v[2];MEM32(g_esp+12)=0xfeedbeef;
            MEM32(0x8f6a68)=(v[2]^0xead00d07u)+v[1];
            nhl07_lookup_recovered(v[0])();first=0x8f6a68;second=0xf1000c;
        } else if(v[0]==0x22a840) {
            MEM32(g_esp+4)=v[1];MEM32(g_esp+8)=v[2];
            for(unsigned word=0;word<5;word++)MEM32(0x8f6a08+word*4)=(v[2]^0xead00d07u)+v[1]+word*0x11111111u;
            nhl07_lookup_recovered(v[0])();first=0x8f6a08;second=0x8f6a0c;
        } else if(v[0]==0x1febc0) {
            MEM32(g_esp+4)=v[1];
            for(unsigned word=0;word<36;word++)MEM32(0x904b90+word*4)=v[2]^(word*0x11111111u);
            nhl07_lookup_recovered(v[0])();first=0x904b90;second=0x904c1c;
        } else if(v[0]==0x234590||v[0]==0x234820) {
            uint32_t i=v[2]&3,j=(v[2]>>2)&3,k=(v[2]>>4)&1;
            uint32_t displacement=v[0]==0x234590?0x29c+(j+(i+k*2)*18)*36:0x149c+(j+(i+k*2)*2)*32;
            g_ecx=v[2]==0x80000000u?0u-displacement:0xc10000u;
            first=g_ecx+displacement;second=first+4;
            MEM32(g_esp+4)=i;MEM32(g_esp+8)=j;MEM32(g_esp+12)=k;MEM32(g_esp+16)=v[1];MEM32(g_esp+20)=v[2];
            for(unsigned word=0;word<9;word++)MEM32(first+word*4)=v[2]^(word*0x01010101u);
            nhl07_lookup_recovered(v[0])();
        } else if(is_scene_dispatch(v[0])) {
            uint32_t node=0xa00000+(v[2]&255)*16;
            g_ecx=0xc10000+(v[2]&0xffff)*4;MEM32(g_esp+4)=node;MEM32(node)=v[1];MEM32(0x900000)=0;
            MEM32(g_ecx+0x1c)=v[2]&7;
            nhl07_lookup_recovered(v[0])();first=0x900000;second=0xf10004;
        } else nhl07_lookup_recovered(0x556922)();
        uint32_t actual[17]={g_eax,g_ecx,g_edx,g_ebx,g_esp,g_ebp,g_esi,g_edi,MEM32(first),MEM32(second),0,0,0,0,0,0,0};
        if(v[0]==0x22a840)for(unsigned word=0;word<3;word++)actual[10+word]=MEM32(0x8f6a10+word*4);
        if(v[0]==0x234590||v[0]==0x234820)for(unsigned word=0;word<9;word++)actual[8+word]=MEM32(first+word*4);
        for(unsigned j=0;j<17;j++) {
            /* Framed helper keeps EBP local in current generated code. */
            if(j==5)continue;
            if(actual[j]!=v[j+3]){fprintf(stderr,"case=%u op=%X field=%u got=%08X expected=%08X\n",i,v[0],j,actual[j],v[j+3]);return 1;}
        }
    }
    fclose(f);free(ram);printf("RUNTIME_CALLBACK passed=%u failed=0\n",count);return 0;
}
