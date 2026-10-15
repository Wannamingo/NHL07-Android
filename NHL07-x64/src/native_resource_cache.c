/* There is no guest CPU cache or direct GPU DMA. All native buffer
   uploads must read current guest bytes or check this publication generation. */
#include "recomp_types.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#ifdef _MSC_VER
#include <windows.h>
static volatile LONG generation;
uint32_t nhl07_vertex_data_generation(void) {return (uint32_t)InterlockedCompareExchange(&generation,0,0);}
void nhl07_invalidate_vertex_cache(void) {InterlockedIncrement(&generation);}
#else
#include <stdatomic.h>
static atomic_uint generation;
uint32_t nhl07_vertex_data_generation(void) {return atomic_load_explicit(&generation,memory_order_acquire);}
void nhl07_invalidate_vertex_cache(void) {atomic_fetch_add_explicit(&generation,1,memory_order_seq_cst);}
#endif
void nhl07_publish_vertex_data(uint32_t resource) {
    uint32_t canonical=resource&0x0fffffffu;
    if(canonical<0x10000 || canonical>0x4000000-12 || (MEM32(resource)&0x70000)!=0 ||
        MEM32(resource+4)<0x10000 || MEM32(resource+4)>=0x4000000) {
        fprintf(stderr,"[NHL07-RESOURCE-MISSING] vertex publication resource=%08X\n",resource);abort();
    }
    nhl07_invalidate_vertex_cache();
    fprintf(stderr,"[NHL07-RESOURCE] CPU vertex data published resource=%08X data=%08X generation=%u; upload deferred until native draw\n",
        resource,MEM32(resource+4),nhl07_vertex_data_generation());
}
/* Save actual inputs before the first draw; rendering results are recorded
   separately by the native graphics implementation. */
void nhl07_capture_first_draw(const uint32_t *args,uint32_t push_begin,uint32_t push_end) {
    const char *folder=getenv("NHL07_DIAGNOSTIC_DIR");
    if(!folder) folder=".";
    char path[2048];
    snprintf(path,sizeof(path),"%s/first-draw.json",folder);
    FILE *file=fopen(path,"w");
    if(file) {
        fprintf(file,"{\"primitive\":%u,\"index_count\":%u,\"indices\":%u,\"push_begin\":%u,\"push_end\":%u,\"memory_base\":65536,\"vertex_generation\":%u,\"capture_phase\":\"before_native_draw\"}\n",
            args[0],args[1],args[2],push_begin,push_end,nhl07_vertex_data_generation());fclose(file);
    }
    snprintf(path,sizeof(path),"%s/first-draw-ram.bin",folder);
    file=fopen(path,"wb");
    if(file) {
        size_t size=0x4000000u-0x10000u;
        size_t written=fwrite((void *)(g_xbox_mem_offset+0x10000u),1,size,file);fclose(file);
        fprintf(stderr,"[NHL07-DRAW-CAPTURE] RAM bytes=%zu expected=%zu path=%s\n",written,size,path);
    }
    /* Physical allocations use a distinct host mapping, not a low-RAM alias. */
    snprintf(path,sizeof(path),"%s/first-draw-contiguous.bin",folder);
    file=fopen(path,"wb");
    if(file) {
        size_t size=0x4000000u;
        size_t written=fwrite((void *)(g_xbox_mem_offset+(uintptr_t)0x80000000u),1,size,file);fclose(file);
        fprintf(stderr,"[NHL07-DRAW-CAPTURE] contiguous bytes=%zu expected=%zu path=%s\n",written,size,path);
    }
    fprintf(stderr,"[NHL07-DRAW-CAPTURE] primitive=%u indices=%u pointer=%08X pending_gpu_bytes=%u; inputs captured before native draw\n",
        args[0],args[1],args[2],push_end-push_begin);
}
void nhl07_trace_decompress_input(uint32_t source,uint32_t destination){
    const char *enabled=getenv("NHL07_TEXTURE_PROBES"),*folder=getenv("NHL07_DIAGNOSTIC_DIR");
    if(!enabled||strcmp(enabled,"1")||!folder)return;
    uint32_t canonical=source&0x7fffffffu;if(canonical<0x10000||canonical>0x4000000-8)return;
    const unsigned char *input=(const unsigned char *)(g_xbox_mem_offset+(uintptr_t)source);
    static RECOMP_TLS unsigned calls;unsigned current=++calls;
    uint32_t size=((uint32_t)input[2]<<16)|((uint32_t)input[3]<<8)|input[4];
    if(current<=32)fprintf(stderr,"[NHL07-REFPACK-INPUT] call=%u source=%08X destination=%08X header=%02X%02X%02X%02X%02X size=%u\n",current,source,destination,input[0],input[1],input[2],input[3],input[4],size);
    if(input[0]!=0x10||input[1]!=0xfb||size<0x100000||size>0x300000)return;
    size_t span=size+(size+111)/112+6;if(span>0x4000000-canonical)span=0x4000000-canonical;
    char path[4096];snprintf(path,sizeof(path),"%s/refpack-input-%08X.bin",folder,source);
    FILE *file=fopen(path,"wb");if(file){size_t written=fwrite(input,1,span,file);fclose(file);fprintf(stderr,"[NHL07-REFPACK-INPUT] captured=%zu path=%s\n",written,path);}
}
