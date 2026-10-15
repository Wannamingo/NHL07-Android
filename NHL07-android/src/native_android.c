/* ARM64 bring-up core. Initial graphics interfaces are in native_graphics.c. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include "recomp_types.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdatomic.h>
#include <time.h>
#include <sys/stat.h>
#include "native_graphics.h"
#include "native_pause.h"

static atomic_int clock_running;
extern void nhl07_overlays_initialize(void);
static void *clock_worker(void *unused) {
    (void)unused;
    const struct timespec delay={0,1000000};
    while (atomic_load_explicit(&clock_running,memory_order_acquire)) {
        MEM32(XBOX_KERNEL_DATA_BASE+KDATA_TICK_COUNT)=
            (uint32_t)(nhl07_game_time_ns()/1000000);
        nanosleep(&delay,NULL);
    }
    return NULL;
}

void xbox_FramebufferWindowSetTitle(const char *title) { (void)title; }
void xbox_FramebufferWindowSet(unsigned width, unsigned height, unsigned format) {
    fprintf(stderr, "[NHL07-UNSUPPORTED] framebuffer %ux%u format=%u\n", width,height,format);
}
int xbox_FramebufferWindowStart(void) { return 0; }
int xbox_VideoPlayFile(const char *path) {
    fprintf(stderr, "[NHL07-UNSUPPORTED] video helper: %s\n", path); return 0;
}
int xbox_VideoIsPlaying(void) { return 0; }

__attribute__((visibility("default"))) int nhl07_core_entry(const char *xbe, const char *disc, const char *saves) {
    setvbuf(stderr,NULL,_IONBF,0);
    setenv("RECOMP_UNIMPL_TRAP","1",1);
    setenv("RECOMP_TITLE_KEVENTS","1",1);
    setenv("RECOMP_HEAP_RECLAIM","1",1);
    FILE *file=fopen(xbe,"rb");
    if(!file) return 2;
    fseek(file,0,SEEK_END); long length=ftell(file); rewind(file);
    if(length<=0 || length>64*1024*1024) {fclose(file);return 2;}
    void *data=malloc(length);
    if(!data || fread(data,1,length,file)!=(size_t)length) {fclose(file);free(data);return 2;}
    fclose(file);
    if(!xbox_MemoryLayoutInit(data,length)) {free(data);return 2;}
    g_xbox_mem_offset=xbox_GetMemoryOffset();
    fprintf(stderr,"[NHL07-CLOCK-BOOT] after map frequency=%u ticks=%u\n",MEM32(0x91a9c0),MEM32(0x91a9c4));
    uint32_t cert=MEM32(0x10118);
    if(cert<0x10000 || cert>=0x11000 || MEM32(cert+8)!=0x454100A5) return 2;
    mkdir(saves,0700);
    if(!getenv("NHL07_DIAGNOSTIC_DIR")) setenv("NHL07_DIAGNOSTIC_DIR",saves,1);
    xbox_kernel_init(); xbox_path_init(disc,saves); nhl07_overlays_initialize(); xbox_kernel_bridge_init();
    MEM32(cert+0x9c)=1;
    if(MEM32(cert)>0x1d8) MEM32(cert+0x1d8)&=~1u;
    g_esp=XBOX_STACK_TOP-4; MEM32(g_esp)=0;
    recomp_dispatch_init();
    fprintf(stderr,"[NHL07-CLOCK-BOOT] before entry frequency=%u ticks=%u\n",MEM32(0x91a9c0),MEM32(0x91a9c4));
    recomp_func_t entry=recomp_lookup(0x0044990f);
    if(!entry) return 2;
    pthread_t clock;
    atomic_store_explicit(&clock_running,1,memory_order_release);
    if(pthread_create(&clock,NULL,clock_worker,NULL)!=0) return 2;
    fprintf(stderr,"[NHL07-ARM64] diagnostic core, entry=0044990F; initial GLES interfaces\n");
    entry();
    atomic_store_explicit(&clock_running,0,memory_order_release);
    pthread_join(clock,NULL);
    return (int)g_eax;
}
