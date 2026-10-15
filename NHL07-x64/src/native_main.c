/* NHL 07 USA: native Windows startup for statically translated Xbox code. */
#include <windows.h>
#include <dbghelp.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "kernel.h"
#include "xbox_memory_layout.h"
#include "recomp_types.h"

static HANDLE clock_stop;
static DWORD WINAPI clock_worker(void *unused) {
    (void)unused;
    do {
        MEM32(XBOX_KERNEL_DATA_BASE + KDATA_TICK_COUNT) = (uint32_t)GetTickCount64();
    } while (WaitForSingleObject(clock_stop, 1) == WAIT_TIMEOUT);
    return 0;
}

static LONG CALLBACK fault_handler(EXCEPTION_POINTERS *info) {
    DWORD code = info->ExceptionRecord->ExceptionCode;
    if (code != EXCEPTION_ACCESS_VIOLATION && code != EXCEPTION_ILLEGAL_INSTRUCTION)
        return EXCEPTION_CONTINUE_SEARCH;
    uintptr_t pc = (uintptr_t)info->ExceptionRecord->ExceptionAddress;
    char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME] = {0};
    SYMBOL_INFO *symbol = (SYMBOL_INFO *)buffer;
    DWORD64 displacement = 0;
    symbol->SizeOfStruct = sizeof(*symbol); symbol->MaxNameLen = MAX_SYM_NAME;
    const char *name = SymFromAddr(GetCurrentProcess(), pc, &displacement, symbol) ? symbol->Name : "unknown";
    fprintf(stderr, "[NHL07-FAULT] exception=%08lX pc=%p function=%s+%llu\n", code, (void *)pc, name, (unsigned long long)displacement);
    fprintf(stderr, "[REGISTERS] eax=%08X ecx=%08X edx=%08X ebx=%08X esp=%08X ebp=%08X esi=%08X edi=%08X\n", g_eax,g_ecx,g_edx,g_ebx,g_esp,g_ebp,g_esi,g_edi);
    if (code == EXCEPTION_ACCESS_VIOLATION) {
        uintptr_t address = info->ExceptionRecord->ExceptionInformation[1];
        fprintf(stderr, "[ACCESS] host=%p guest=%08X write=%llu\n", (void *)address, (uint32_t)(address-(uintptr_t)g_xbox_mem_offset), (unsigned long long)info->ExceptionRecord->ExceptionInformation[0]);
    }
    CONTEXT context=*info->ContextRecord;
    STACKFRAME64 frame={0};
    frame.AddrPC.Offset=context.Rip; frame.AddrPC.Mode=AddrModeFlat;
    frame.AddrFrame.Offset=context.Rbp; frame.AddrFrame.Mode=AddrModeFlat;
    frame.AddrStack.Offset=context.Rsp; frame.AddrStack.Mode=AddrModeFlat;
    for(unsigned index=0;index<24;index++) {
        if(!StackWalk64(IMAGE_FILE_MACHINE_AMD64,GetCurrentProcess(),GetCurrentThread(),
            &frame,&context,NULL,SymFunctionTableAccess64,SymGetModuleBase64,NULL)) break;
        if(!frame.AddrPC.Offset) break;
        name=SymFromAddr(GetCurrentProcess(),frame.AddrPC.Offset,&displacement,symbol)?symbol->Name:"unknown";
        fprintf(stderr,"[STACK] %u %s+%llu\n",index,name,(unsigned long long)displacement);
    }
    fflush(stderr);
    return EXCEPTION_CONTINUE_SEARCH;
}

int main(int argc, char **argv) {
    const char *xbe = argc > 1 ? argv[1] : "input/default.xbe";
    const char *disc = argc > 2 ? argv[2] : "disc";
    const char *saves = argc > 3 ? argv[3] : "saves";
    setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX);
    _putenv_s("RECOMP_UNIMPL_TRAP", "1");
    _putenv_s("RECOMP_TITLE_KEVENTS", "1");
    _putenv_s("RECOMP_HEAP_RECLAIM", "1");
    if(!getenv("NHL07_DIAGNOSTIC_DIR")) _putenv_s("NHL07_DIAGNOSTIC_DIR","logs");
    SymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_UNDNAME);
    SymInitialize(GetCurrentProcess(), NULL, TRUE);
    AddVectoredExceptionHandler(1, fault_handler);
    fprintf(stderr, "[BOOT] NHL 07 USA, Windows x64, statically translated game code\n");
    FILE *file = fopen(xbe, "rb");
    if (!file) { perror(xbe); return 2; }
    fseek(file, 0, SEEK_END); long length = ftell(file); rewind(file);
    if (length <= 0 || length > 64*1024*1024) { fclose(file); return 2; }
    void *data = malloc((size_t)length);
    if (!data || fread(data, 1, length, file) != (size_t)length) { fclose(file); free(data); return 2; }
    fclose(file);
    if (!xbox_MemoryLayoutInit(data, (size_t)length)) { free(data); return 2; }
    g_xbox_mem_offset = xbox_GetMemoryOffset();
    uint32_t cert = MEM32(0x10118);
    if (cert < 0x10000 || cert >= 0x11000 || MEM32(cert+8) != 0x454100A5) {
        fprintf(stderr,"[BOOT] Unexpected title certificate\n"); return 2;
    }
    xbox_kernel_init();
    CreateDirectoryA(saves, NULL);
    xbox_path_init(disc, saves);
    xbox_kernel_bridge_init();
    /* Select the original XAPI's hard-disk path for extracted disc files. */
    if (!getenv("RECOMP_ORIGINAL_MEDIA")) {
        MEM32(cert+0x9c) = 1;
        if (MEM32(cert) > 0x1d8) MEM32(cert+0x1d8) &= ~1u;
    }
    clock_stop = CreateEventW(NULL, TRUE, FALSE, NULL);
    HANDLE clock = clock_stop ? CreateThread(NULL, 0, clock_worker, NULL, 0, NULL) : NULL;
    if (!clock) return 2;
    g_esp = XBOX_STACK_TOP-4; MEM32(g_esp)=0;
    recomp_dispatch_init();
    recomp_func_t entry = recomp_lookup(0x0044990f);
    if (!entry) { fprintf(stderr,"[BOOT] Missing entry function\n"); return 2; }
    xbox_WatchdogStart();
    fprintf(stderr,"[BOOT] entry=0044990F esp=%08X, entering translated XBE\n",g_esp);
    entry();
    fprintf(stderr,"[BOOT] XBE entry returned eax=%08X\n",g_eax);
    SetEvent(clock_stop); WaitForSingleObject(clock, INFINITE);
    CloseHandle(clock); CloseHandle(clock_stop);
    xbox_kernel_shutdown(); xbox_MemoryLayoutShutdown(); free(data);
    return (int)g_eax;
}
