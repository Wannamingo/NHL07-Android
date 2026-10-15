#include "native_dsp.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static unsigned checks;
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL line=%d %s\n",__LINE__,#x);return 1;}checks++;}while(0)
static void save(const char *dir,const char *name,const void *p,size_t size) {
    char path[4096];snprintf(path,sizeof(path),"%s/%s",dir,name);FILE *f=fopen(path,"wb");if(!f||fwrite(p,1,size,f)!=size)abort();fclose(f);
}
int main(int argc,char **argv) {
    if(argc!=3)return 2;FILE *f=fopen(argv[1],"rb");if(!f)return 2;fseek(f,0,SEEK_END);long size=ftell(f);rewind(f);
    uint8_t *image=malloc(size);if(fread(image,1,size,f)!=(size_t)size)return 2;fclose(f);
    CHECK(nhl07_dsp_load(image,size));CHECK(nhl07_dsp_effect_count()==13);
    save(argv[2],"program.bin",nhl07_dsp_program(),4096*4);save(argv[2],"initial-state.bin",nhl07_dsp_state(),4096*4);
    int32_t input[1024]={0},output[1024];
    /* Effect 2 multiplies two identical sources by 0.5 and adds them. Its
       destination is X:496. Check signed fixed-point samples independently. */
    for(unsigned i=0;i<32;i++)input[6*32+i]=(i&1)?0x100000+i*512:0xf00000-i*512;
    CHECK(nhl07_dsp_effect(2,input,output));
    for(unsigned i=0;i<32;i++)CHECK(nhl07_dsp_state()[0x496+i]==(uint32_t)input[6*32+i]);
    CHECK(nhl07_dsp_load(image,size));memset(input,0,sizeof(input));
    CHECK(nhl07_dsp_frame(input,output));
    for(unsigned i=0;i<1024;i++)CHECK(output[i]==0);
    /* Drive every input bin, then preserve output and all state across frames. */
    uint32_t random=0x12345678;
    for(unsigned frame=0;frame<8;frame++) {
        for(unsigned i=0;i<1024;i++){random=random*1664525u+1013904223u;input[i]=(int32_t)(random>>12)-0x80000;input[i]&=0xffffff;}
        CHECK(nhl07_dsp_frame(input,output));char name[48];snprintf(name,sizeof(name),"frame-%u.bin",frame);save(argv[2],name,output,sizeof(output));
    }
    save(argv[2],"final-state.bin",nhl07_dsp_state(),4096*4);
    printf("DSP_TEST passed=%u failed=0 instructions=%llu dma_bytes=%llu\n",checks,
        (unsigned long long)nhl07_dsp_instructions(),(unsigned long long)nhl07_dsp_dma_bytes());free(image);return 0;
}
