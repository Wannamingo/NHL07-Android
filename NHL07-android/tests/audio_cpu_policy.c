/* Capacity policy only: this does not change affinity or play audio. */
#include "audio_cpu_policy.h"
#include <stdio.h>

static unsigned checks;
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);return 1;}checks++;}while(0)

int main(void) {
    unsigned rg[8]={221,221,221,221,996,996,996,1024};
    CHECK(nhl07_audio_performance_mask(UINT64_C(0xff),rg,8)==UINT64_C(0xf0));
    /* Every existing RG477M restriction remains respected. In a single
       cluster there is no preference; a mixed mask retains allowed big CPUs. */
    for(unsigned mask=0;mask<256;mask++) {
        uint64_t high=mask&0xf0,low=mask&0x0f;
        uint64_t expected=high&&low?high:0;
        uint64_t selected=nhl07_audio_performance_mask(mask,rg,8);
        CHECK(selected==expected);
        CHECK((selected&~(uint64_t)mask)==0);
    }
    /* All CPU counts, including bit 63, and malformed masks above count. */
    for(unsigned count=1;count<=64;count++) {
        unsigned capacity[64]={0},split=count/2;
        uint64_t all=count==64?UINT64_MAX:(UINT64_C(1)<<count)-1;
        uint64_t high=all&~((UINT64_C(1)<<split)-1);
        for(unsigned i=0;i<count;i++)capacity[i]=i<split?100:400;
        CHECK(nhl07_audio_performance_mask(all,capacity,count)==(split?high:0));
        for(unsigned i=0;i<count;i++)CHECK(nhl07_audio_performance_mask(UINT64_C(1)<<i,capacity,count)==0);
        if(count<64)CHECK(nhl07_audio_performance_mask(all|(UINT64_C(1)<<count),capacity,count)==0);
        for(unsigned i=0;i<count;i++)capacity[i]=1024;
        CHECK(nhl07_audio_performance_mask(all,capacity,count)==0);
        for(unsigned i=0;i<count;i++)capacity[i]=0;
        CHECK(nhl07_audio_performance_mask(all,capacity,count)==0);
    }
    CHECK(nhl07_audio_performance_mask(1,NULL,1)==0);
    CHECK(nhl07_audio_performance_mask(1,rg,0)==0);
    CHECK(nhl07_audio_performance_mask(1,rg,65)==0);
    CHECK(nhl07_audio_performance_mask(0,rg,8)==0);
    /* The 75% boundary is inclusive, without integer-rounding ambiguity. */
    unsigned boundary[4]={749,750,751,1000};
    CHECK(nhl07_audio_performance_mask(15,boundary,4)==14);
    unsigned maximum[4]={49151,49152,65536,65537};
    CHECK(nhl07_audio_performance_mask(7,maximum,4)==6);
    CHECK(nhl07_audio_performance_mask(15,maximum,4)==0);
    /* Unknown/invalid capacity is fatal only for an allowed CPU. */
    unsigned missing[4]={221,0,996,1024};
    CHECK(nhl07_audio_performance_mask(15,missing,4)==0);
    CHECK(nhl07_audio_performance_mask(13,missing,4)==12);
    missing[1]=65537;
    CHECK(nhl07_audio_performance_mask(15,missing,4)==0);
    CHECK(nhl07_audio_performance_mask(13,missing,4)==12);
    missing[1]=UINT32_MAX;
    CHECK(nhl07_audio_performance_mask(15,missing,4)==0);
    CHECK(nhl07_audio_performance_mask(13,missing,4)==12);
    unsigned high_bit[64]={0};high_bit[0]=221;high_bit[63]=1024;
    CHECK(nhl07_audio_performance_mask((UINT64_C(1)<<63)|1,high_bit,64)==(UINT64_C(1)<<63));
    CHECK(nhl07_audio_performance_mask(UINT64_C(1)<<63,high_bit,64)==0);
    printf("AUDIO_CPU_POLICY passed=%u failed=0 affinity_changed=false\n",checks);
    return 0;
}
