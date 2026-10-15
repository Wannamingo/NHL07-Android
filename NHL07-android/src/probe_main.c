/* Separate, bounded command-line bring-up process. This is not an Android game UI. */
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <ucontext.h>
#include <dlfcn.h>
#include "recomp_types.h"
static uintptr_t library_base;

int nhl07_core_entry(const char *xbe,const char *disc,const char *saves);

/* Only async-signal-safe writes in the crash handler. */
static void print_hex(const char *label,size_t length,uint32_t value) {
    static const char digits[]="0123456789ABCDEF";
    char buffer[9];
    for(unsigned i=0;i<8;i++) buffer[i]=digits[(value>>(28-4*i))&15];
    buffer[8]='\n';
    (void)write(STDERR_FILENO,label,length);
    (void)write(STDERR_FILENO,buffer,sizeof(buffer));
}
static void fault(int number,siginfo_t *info,void *context) {
    static const char message[]="[NHL07-PROBE] stopped; no gameplay verification\n";
    (void)write(STDERR_FILENO,message,sizeof(message)-1);
    print_hex("signal=",7,(uint32_t)number);
    if(number==SIGSEGV || number==SIGBUS)
        print_hex("guest-address=",14,(uint32_t)((uintptr_t)info->si_addr-g_xbox_mem_offset));
    print_hex("eax=",4,g_eax); print_hex("ecx=",4,g_ecx);
    print_hex("edx=",4,g_edx); print_hex("esp=",4,g_esp);
#if defined(__aarch64__)
    const ucontext_t *machine=context;
    if(library_base) {
        print_hex("native-pc-relative=",19,(uint32_t)(machine->uc_mcontext.pc-library_base));
        print_hex("native-lr-relative=",19,(uint32_t)(machine->uc_mcontext.regs[30]-library_base));
    }
#endif
    if(g_esp>=0x10000 && g_esp<=0x4000000-128)for(unsigned i=0;i<32;i++) {
        print_hex("stack-address=",14,g_esp+i*4);print_hex("stack-word=",11,MEM32(g_esp+i*4));
    }
    _exit(number==SIGALRM?124:128+number);
}
void nhl07_install_probe_handlers(void) {
    Dl_info location;if(dladdr((const void *)&fault,&location))library_base=(uintptr_t)location.dli_fbase;
    struct sigaction action={0};
    action.sa_sigaction=fault; action.sa_flags=SA_SIGINFO;
    sigemptyset(&action.sa_mask);
    sigaction(SIGSEGV,&action,NULL); sigaction(SIGBUS,&action,NULL);
    sigaction(SIGILL,&action,NULL); sigaction(SIGABRT,&action,NULL);
    sigaction(SIGALRM,&action,NULL);
}
#ifndef NHL07_PROBE_HANDLERS_ONLY
int main(int argc,char **argv) {
    if(argc!=4) {
        fprintf(stderr,"Usage: nhl07_probe XBE DISC_DIRECTORY SAVES_DIRECTORY\n");
        return 2;
    }
    nhl07_install_probe_handlers();
    alarm(30);
    fprintf(stderr,"[NHL07-PROBE] ARM64 startup test, timeout=30s; diagnostic EGL pbuffer\n");
    int result=nhl07_core_entry(argv[1],argv[2],argv[3]);
    alarm(0);
    return result;
}
#endif
