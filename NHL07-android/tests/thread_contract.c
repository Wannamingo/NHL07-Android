/* Actual PsCreateSystemThreadEx/PsTerminateSystemThread, native query and XDK ABI. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef void (*guest_fn)(void);
extern guest_fn recomp_lookup_kernel(uint32_t);
extern RECOMP_TLS uint32_t g_eax,g_esp,g_ebx,g_esi,g_edi;
extern ptrdiff_t g_xbox_mem_offset;
extern uint32_t xbox_bridge_thread_exit_code(uint32_t,uint32_t *);
void sub_0044B23A(void);
static uint8_t *memory;static uint32_t *imports;static HANDLE gate;
static uint32_t last_status;static unsigned passed;
static void check(int okay,const char *name){if(!okay){fprintf(stderr,"THREAD_CONTRACT FAIL %s\n",name);exit(1);}passed++;}
void sub_00449A30(void){last_status=*(uint32_t *)(memory+g_esp+4);g_esp+=8;}
static void guest_worker(void) {
    uint32_t exit_code=*(uint32_t *)(memory+g_esp+4);
    WaitForSingleObject(gate,INFINITE);
    g_esp-=8;*(uint32_t *)(memory+g_esp)=0x123456;*(uint32_t *)(memory+g_esp+4)=exit_code;
    recomp_lookup_kernel(imports[1])();abort();
}
void *recomp_lookup(uint32_t address){return address==0x700000?(void *)guest_worker:NULL;}
void *recomp_lookup_manual(uint32_t address){(void)address;return NULL;}
void recomp_icall_fail_log(uint32_t a){(void)a;abort();}
void recomp_icall_not_code_log(uint32_t a){(void)a;abort();}
int xbox_VideoIsPlaying(void){abort();}
int xbox_VideoPlayFile(const char *p){(void)p;abort();}
void xbox_FramebufferWindowSet(uint32_t a,uint32_t b){(void)a;(void)b;abort();}
void xbox_FramebufferWindowStart(void){abort();}
/* Loader title metadata is unrelated to the worker contract. */
void xbox_FramebufferWindowSetTitle(const uint16_t *a,int b){(void)a;(void)b;}
static uint32_t call(unsigned slot,unsigned argc,const uint32_t *args) {
    uint32_t saved=g_esp;*(uint32_t *)(memory+g_esp)=0xabcdef;
    memcpy(memory+g_esp+4,args,argc*4);recomp_lookup_kernel(imports[slot])();
    check(g_esp==saved+4+argc*4,"actual import cleanup");g_esp=saved;return g_eax;
}
static uint32_t query(uint32_t handle,uint32_t out) {
    uint32_t saved=g_esp;*(uint32_t *)(memory+g_esp)=0xabcdef;
    *(uint32_t *)(memory+g_esp+4)=handle;*(uint32_t *)(memory+g_esp+8)=out;
    g_ebx=0x12345678;g_esi=0x23456789;g_edi=0x3456789a;
    sub_0044B23A();check(g_esp==saved+12,"XDK RET 8");
    check(g_ebx==0x12345678&&g_esi==0x23456789&&g_edi==0x3456789a,"callee saved registers");g_esp=saved;return g_eax;
}
int main(int argc,char **argv) {
    if(argc!=2)return 2;FILE *file=fopen(argv[1],"rb");if(!file)return 2;
    fseek(file,0,SEEK_END);long bytes=ftell(file);rewind(file);void *xbe=malloc(bytes);
    if(!xbe||fread(xbe,1,bytes,file)!=(size_t)bytes)return 2;fclose(file);
    check(xbox_MemoryLayoutInit(xbe,bytes)!=0,"actual guest memory and allocator initialization");free(xbe);
    g_xbox_mem_offset=xbox_GetMemoryOffset();memory=(uint8_t *)g_xbox_mem_offset;g_esp=0x20000;
    imports=(uint32_t *)(memory+0x10000);unsigned ordinals[]={255,258,187,234,189};
    for(unsigned i=0;i<5;i++)imports[i]=0x80000000u|ordinals[i];
    xbox_kernel_set_thunk_address(0x10000,5);xbox_kernel_bridge_init();xbox_SetThreadMode(XBOX_THREAD_MODE_SPAWN);
    uint32_t codes[]={0,0x12345678,0xc0000005,0x103};
    for(unsigned n=0;n<4;n++) {
        gate=CreateEventW(NULL,TRUE,FALSE,NULL);check(gate!=NULL,"worker gate");
        uint32_t args[10]={0x30000,0,0,0,0,codes[n],0,0,0,0x700000};
        check(call(0,10,args)==0,"create actual guest worker");uint32_t handle=*(uint32_t *)(memory+0x30000);
        for(unsigned i=0;i<16;i++){check(query(handle,0x30010)==1,"active native worker query");check(*(uint32_t *)(memory+0x30010)==0x103,"STILL_ACTIVE before release");}
        SetEvent(gate);uint32_t wait[4]={handle,0,0,0};check(call(3,4,wait)==0,"native worker completes");
        check(query(handle,0x30010)==1 && *(uint32_t *)(memory+0x30010)==codes[n],"exact terminated exit status");
        uint32_t close[1]={handle};check(call(2,1,close)==0,"close thread handle");CloseHandle(gate);
        *(uint32_t *)(memory+0x30010)=0xa5a5a5a5;last_status=0;
        check(query(handle,0x30010)==0 && last_status==0xc0000008,"closed handle guest error path");
        check(*(uint32_t *)(memory+0x30010)==0xa5a5a5a5,"error preserves output");
    }
    uint32_t event_args[4]={0x30000,0,0,0};check(call(4,4,event_args)==0,"event handle fixture");
    uint32_t event=*(uint32_t *)(memory+0x30000),code=0xdeadbeef;
    check(xbox_bridge_thread_exit_code(event,&code)==0xc0000008 && code==0xdeadbeef,"wrong object type rejected");
    check(xbox_bridge_thread_exit_code(0,&code)==0xc0000008,"null handle rejected");
    check(xbox_bridge_thread_exit_code(0x48003fff,&code)==0xc0000008,"empty slot rejected");
    check(xbox_bridge_thread_exit_code(event,NULL)==0xc000000d,"null host output rejected");
    check(query(event,0)==0 && last_status==0xc0000005,"invalid guest output rejected");
    uint32_t close[1]={event};check(call(2,1,close)==0,"close event fixture");
    printf("THREAD_CONTRACT passed=%u failed=0 real_guest_workers=4 native_exit_statuses=4\n",passed);return 0;
}
