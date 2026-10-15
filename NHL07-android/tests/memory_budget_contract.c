/* Actual runtime allocators and MmQueryStatistics, with the actual title XBE. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static unsigned passed;
static void check(int okay,const char *name){if(!okay){fprintf(stderr,"MEMORY_BUDGET FAIL %s\n",name);exit(1);}passed++;}
/* Unused game-call and multimedia dependencies of the linked kernel library. */
void *recomp_lookup(uint32_t address){(void)address;abort();}
void *recomp_lookup_manual(uint32_t address){(void)address;abort();}
void recomp_icall_fail_log(uint32_t address){(void)address;abort();}
void recomp_icall_not_code_log(uint32_t address){(void)address;abort();}
int xbox_VideoIsPlaying(void){abort();}
int xbox_VideoPlayFile(const char *path){(void)path;abort();}
void xbox_FramebufferWindowSet(uint32_t a,uint32_t b){(void)a;(void)b;abort();}
void xbox_FramebufferWindowStart(void){abort();}
void xbox_FramebufferWindowSetTitle(const uint16_t *a,int b){(void)a;(void)b;}
extern int xbox_ContiguousFree(uint32_t);
static XBOX_MM_STATISTICS query(void){
    struct {uint32_t before;XBOX_MM_STATISTICS stats;uint32_t after;} fixture;
    memset(&fixture,0xa5,sizeof(fixture));fixture.stats.Length=sizeof(fixture.stats);
    check(xbox_MmQueryStatistics(&fixture.stats)==0,"query succeeds");
    check(fixture.before==0xa5a5a5a5&&fixture.after==0xa5a5a5a5,"query guards");
    check(fixture.stats.Length==sizeof(fixture.stats),"exact guest ABI size");
    uint64_t used=fixture.stats.VirtualMemoryBytesCommitted/4096u+fixture.stats.PoolPagesCommitted+
        fixture.stats.StackPagesCommitted+fixture.stats.ImagePagesCommitted;
    check(fixture.stats.AvailablePages==(used<fixture.stats.TotalPhysicalPages?fixture.stats.TotalPhysicalPages-used:0),"budget conservation and saturation");
    return fixture.stats;
}
int main(int argc,char **argv){
    if(argc!=2)return 2;FILE *file=fopen(argv[1],"rb");if(!file)return 2;
    fseek(file,0,SEEK_END);long size=ftell(file);rewind(file);uint8_t *xbe=malloc(size);
    check(xbe&&fread(xbe,1,size,file)==(size_t)size,"read actual title XBE");fclose(file);
    uint32_t stack_commit;memcpy(&stack_commit,xbe+0x130u,4);
    check(xbox_MemoryLayoutInit(xbe,size)!=0,"initialize actual guest memory");free(xbe);
    XBOX_MM_STATISTICS initial=query();
    check(initial.TotalPhysicalPages==16384,"retail RAM budget");
    check(initial.AvailablePages>8192,"host RAM does not halve guest free pages");
    check(initial.StackPagesCommitted==(stack_commit+4095u)/4096u,"XBE initial stack commitment");
    check(initial.ImagePagesCommitted==(g_xbox_image_hi-0x10000u+4095u)/4096u,"loaded image pages");
    check(xbox_MmQueryStatistics(NULL)==STATUS_INVALID_PARAMETER,"null query rejected");
    uint32_t a=xbox_HeapAlloc(16,16),b=xbox_HeapAlloc(16,16);check(a&&b,"two tiny live heap blocks");
    XBOX_MM_STATISTICS shared=query();check(shared.AvailablePages==initial.AvailablePages-1,"tiny blocks share one page");
    xbox_HeapFree(a);check(query().AvailablePages==shared.AvailablePages,"live neighbor retains shared page");
    xbox_HeapFree(b);check(query().AvailablePages==initial.AvailablePages,"free heap pages return to budget");
    a=xbox_ContiguousAlloc(1,4096);b=xbox_ContiguousAlloc(1,65536);check(a&&b,"aligned physical blocks");
    check(query().AvailablePages==initial.AvailablePages-2,"free alignment gap not charged");
    check(xbox_ContiguousFree(a)&&xbox_ContiguousFree(b),"physical blocks released");
    check(query().AvailablePages==initial.AvailablePages,"physical coalescing returns pages");
    a=xbox_ContiguousAlloc(24u*1024u*1024u,4096);check(a!=0,"large physical allocation");
    check(query().AvailablePages==initial.AvailablePages-6144,"large allocation pages accounted");
    check(xbox_ContiguousFree(a),"large physical block released");
    check(query().AvailablePages==initial.AvailablePages,"large free restores budget");
    a=xbox_HeapAlloc(40u*1024u*1024u,4096);b=xbox_ContiguousAlloc(32u*1024u*1024u,4096);
    check(a&&b,"independent mapping budget saturation fixture");
    check(query().AvailablePages==0,"over-budget native mappings saturate instead of wrapping");
    xbox_HeapFree(a);check(xbox_ContiguousFree(b),"saturation fixture released");
    check(query().AvailablePages==initial.AvailablePages,"budget restored after saturation");
    printf("MEMORY_BUDGET passed=%u failed=0 initial_available_pages=%u\n",passed,initial.AvailablePages);return 0;
}
