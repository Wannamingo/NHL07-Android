/* Reuse actual-wrapper setup, never substitute a host handle implementation. */
#define main unused_timer_contract_main
#include "timer_contract.c"
#undef main
enum { THREADS=16, PER_THREAD=64, HANDLES=THREADS*PER_THREAD };
static uint32_t tokens[HANDLES];
static HANDLE start_gate;
static DWORD WINAPI create_batch(LPVOID arg) {
    unsigned id=(unsigned)(uintptr_t)arg;
    g_esp=0x80000+id*0x1000;
    WaitForSingleObject(start_gate,INFINITE);
    for(unsigned j=0;j<PER_THREAD;++j) {
        uint32_t output=0x100000+id*0x1000+j*4;
        uint32_t args[4]={output,0,0,0};
        check(call(0,4,args)==0,"parallel NtCreateEvent");
        tokens[id*PER_THREAD+j]=*(uint32_t *)(memory+output);
    }
    return 0;
}
static int compare_tokens(const void *a,const void *b) {
    uint32_t x=*(const uint32_t *)a,y=*(const uint32_t *)b;
    return x<y?-1:x>y?1:0;
}
int main(void) {
    memory=VirtualAlloc(NULL,0x1000000,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    check(memory!=NULL,"guest memory");g_xbox_mem_offset=(ptrdiff_t)memory;
    g_xbox_map_size=0x1000000;g_esp=0x20000;
    imports=(uint32_t *)(memory+0x10000);
    unsigned ordinals[]={189,225,234,187};
    for(unsigned i=0;i<4;++i)imports[i]=0x80000000u|ordinals[i];
    xbox_kernel_set_thunk_address(0x10000,4);xbox_kernel_bridge_init();
    start_gate=CreateEventW(NULL,TRUE,FALSE,NULL);HANDLE workers[THREADS];
    for(unsigned i=0;i<THREADS;++i){workers[i]=CreateThread(NULL,0,create_batch,(void *)(uintptr_t)i,0,NULL);check(workers[i]!=NULL,"create worker");}
    SetEvent(start_gate);
    for(unsigned i=0;i<THREADS;++i){check(WaitForSingleObject(workers[i],10000)==WAIT_OBJECT_0,"worker finished");CloseHandle(workers[i]);}
    CloseHandle(start_gate);
    qsort(tokens,HANDLES,sizeof(tokens[0]),compare_tokens);
    for(unsigned i=0;i<HANDLES;++i) {
        check((tokens[i]&0xFF000000u)==0x48000000,"tagged handle");
        if(i&&tokens[i]==tokens[i-1]){fprintf(stderr,"HANDLE_CONTRACT duplicate token=%08X index=%u\n",tokens[i],i);return 1;}
        check(i==0||tokens[i]!=tokens[i-1],"distinct token for each live object");
    }
    int64_t zero=0;memcpy(memory+0x40020,&zero,8);
    for(unsigned i=0;i<HANDLES;++i) {
        uint32_t wait[4]={tokens[i],0,0,0x40020};
        check(call(2,4,wait)==0x102,"new event unsignaled");
        uint32_t signal[2]={tokens[i],0};check(call(1,2,signal)==0,"signal original event");
        check(call(2,4,wait)==0,"resolve original event");
        uint32_t close[1]={tokens[i]};check(call(3,1,close)==0,"close original event");
    }
    printf("HANDLE_CONTRACT passed=%u failed=0 threads=%u live_objects=%u\n",(unsigned)passed,THREADS,HANDLES);
    VirtualFree(memory,0,MEM_RELEASE);return 0;
}
