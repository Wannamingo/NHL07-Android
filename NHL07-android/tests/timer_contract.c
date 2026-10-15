/* Exercise the actual Xbox import wrappers, guest pointers and host waits. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef void (*guest_fn)(void);
extern guest_fn recomp_lookup_kernel(uint32_t);
extern RECOMP_TLS uint32_t g_eax, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
void *recomp_lookup(uint32_t address) { (void)address; abort(); }
void *recomp_lookup_manual(uint32_t address) { (void)address; abort(); }
/* Unrelated kernel video exports must never be used by this contract. */
int xbox_VideoIsPlaying(void) { abort(); }
int xbox_VideoPlayFile(const char *path) { (void)path; abort(); }
void xbox_FramebufferWindowSet(uint32_t a,uint32_t b) { (void)a; (void)b; abort(); }
void xbox_FramebufferWindowStart(void) { abort(); }
void xbox_FramebufferWindowSetTitle(const uint16_t *a,int b) { (void)a; (void)b; abort(); }
static uint8_t *memory;
static uint32_t *imports;
static LONG passed;
static void check(int okay, const char *name) {
    if (!okay) { fprintf(stderr, "TIMER_CONTRACT FAIL %s\n", name); exit(1); }
    InterlockedIncrement(&passed);
}
static uint32_t call(unsigned slot, unsigned count, const uint32_t *args) {
    uint32_t stack = g_esp;
    *(uint32_t *)(memory+stack) = 0xBEEF0001;
    memcpy(memory+stack+4, args, count*4);
    guest_fn fn = recomp_lookup_kernel(imports[slot]);
    check(fn != NULL, "import resolved"); fn();
    check(g_esp == stack+4+count*4, "stdcall stack cleanup");
    g_esp = stack; return g_eax;
}
static uint32_t create(unsigned type) {
    uint32_t args[3] = {0x40000,0,type};
    check(call(0,3,args)==0, "create timer");
    uint32_t h=*(uint32_t *)(memory+0x40000);
    check((h&0xFF000000u)==0x48000000, "guest handle token");return h;
}
static uint32_t arm(uint32_t h, int64_t due) {
    memcpy(memory+0x40010,&due,8);
    uint32_t args[8]={h,0x40010,0,1,0,0,0,0};return call(1,8,args);
}
static uint32_t wait_for(uint32_t h, int64_t timeout) {
    memcpy(memory+0x40020,&timeout,8);
    uint32_t args[4]={h,0,0,0x40020};return call(2,4,args);
}
static DWORD WINAPI blocked_waiter(LPVOID context) {
    uint32_t h=(uint32_t)(uintptr_t)context;
    g_esp=0x30000;
    uint32_t args[4]={h,0,0,0};
    return call(2,4,args);
}
int main(void) {
    memory=VirtualAlloc(NULL,0x1000000,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    check(memory!=NULL,"guest memory");g_xbox_mem_offset=(ptrdiff_t)memory;
    g_xbox_map_size=0x1000000;g_esp=0x20000;
    imports=(uint32_t *)(memory+0x10000);
    unsigned ordinals[]={194,229,234,185,187};
    for(unsigned i=0;i<5;++i) imports[i]=0x80000000u|ordinals[i];
    xbox_kernel_set_thunk_address(0x10000,5);xbox_kernel_bridge_init();
    uint32_t h=create(0);
    check(wait_for(h,0)==0x102,"new timer unsignaled");
    HANDLE worker=CreateThread(NULL,0,blocked_waiter,(void *)(uintptr_t)h,0,NULL);
    check(worker!=NULL,"blocked worker created");
    check(WaitForSingleObject(worker,20)==WAIT_TIMEOUT,"worker blocks before arm");
    ULONGLONG begin=GetTickCount64();
    check(arm(h,-400000)==0,"arm relative 40ms");
    check(wait_for(h,0)==0x102,"relative timer not early");
    check(WaitForSingleObject(worker,3000)==WAIT_OBJECT_0,"arming wakes blocked worker");
    DWORD result=1;GetExitCodeThread(worker,&result);
    check(result==0,"guest worker wait succeeded");
    check(GetTickCount64()-begin>=15,"timer waited for deadline");CloseHandle(worker);
    check(wait_for(h,0)==0,"notification timer stays signaled");
    check(arm(h,-2000000)==0,"rearm notification timer");
    check(wait_for(h,0)==0x102,"rearm clears signal");
    uint32_t cancel[2]={h,0};check(call(3,2,cancel)==0,"cancel timer");
    check(wait_for(h,-2500000)==0x102,"cancel prevents expiry");
    LARGE_INTEGER now;GetSystemTimeAsFileTime((FILETIME *)&now);
    check(arm(h,now.QuadPart+400000)==0,"absolute FILETIME arm");
    check(wait_for(h,0)==0x102,"absolute timer not early");
    check(wait_for(h,-30000000)==0,"absolute timer expires");
    check(arm(h,1)==0,"past FILETIME arm");
    check(wait_for(h,-1000000)==0,"past FILETIME expires immediately");
    uint32_t sync=create(1);
    check(arm(sync,-10000)==0,"synchronization timer arm");
    check(wait_for(sync,-30000000)==0,"synchronization timer expires");
    check(wait_for(sync,0)==0x102,"synchronization timer resets on wait");
    uint32_t args[8]={h,0x40010,0,1,0,0,0,0};
    args[0]=0x4800FFFF;check(call(1,8,args)==0xC0000008,"invalid handle status");args[0]=h;
    args[1]=0;check(call(1,8,args)==0xC0000005,"null due pointer status");
    args[1]=0xFFFFFFFC;check(call(1,8,args)==0xC0000005,"overflowing due pointer status");args[1]=0x40010;
    args[2]=0x123456;check(call(1,8,args)==0xC0000002,"guest APC explicitly unsupported");args[2]=0;
    args[6]=16;check(call(1,8,args)==0xC0000002,"period explicitly unsupported");args[6]=0;
    args[7]=0x40030;check(call(1,8,args)==0xC0000002,"PreviousState explicitly unsupported");
    uint32_t bad_create[3]={0x40000,0,2};
    check(call(0,3,bad_create)==0xC000000D,"invalid timer type status");
    bad_create[0]=0;bad_create[2]=0;
    check(call(0,3,bad_create)==0xC0000005,"null handle output status");
    uint32_t close[1]={h};check(call(4,1,close)==0,"close notification timer");
    check(arm(h,-10000)==0xC0000008,"closed timer rejected");
    close[0]=sync;check(call(4,1,close)==0,"close synchronization timer");
    printf("TIMER_CONTRACT passed=%u failed=0\n",(unsigned)passed);
    VirtualFree(memory,0,MEM_RELEASE);return 0;
}
