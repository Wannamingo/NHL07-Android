#pragma once
#include <stdint.h>
/* Select the highest-capacity cluster from the thread's existing allowed CPUs.
   Missing topology means no preference; homogeneous CPUs need no restriction. */
static inline uint64_t nhl07_audio_performance_mask(uint64_t allowed,const unsigned *capacity,unsigned count) {
    if(!capacity||!count||count>64||!allowed)return 0;
    if(count<64&&(allowed>>count))return 0;
    unsigned maximum=0;uint64_t selected=0;
    for(unsigned i=0;i<count;i++)if(allowed&(UINT64_C(1)<<i)) {
        if(!capacity[i]||capacity[i]>65536)return 0;
        if(capacity[i]>maximum)maximum=capacity[i];
    }
    for(unsigned i=0;i<count;i++)if((allowed&(UINT64_C(1)<<i))&&(uint64_t)capacity[i]*4>=(uint64_t)maximum*3)
        selected|=UINT64_C(1)<<i;
    return selected==allowed?0:selected;
}
