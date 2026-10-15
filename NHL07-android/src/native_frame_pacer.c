/* Strict spacing between completed presentations. No catch-up bursts. */
#include "native_frame_pacer.h"
#include "native_fps.h"
#include <time.h>
static uint64_t previous_present;
void nhl07_frame_pacer_reset(void){previous_present=0;}
void nhl07_frame_pacer_present_at(uint64_t now){previous_present=now;}
uint64_t nhl07_frame_pacer_wait_at(uint64_t now){
    if(!previous_present)return 0;
    uint64_t deadline=previous_present+NHL07_FRAME_PERIOD_NS;
    return now>=deadline?0:deadline-now;
}
void nhl07_frame_pacer_wait(void){
    uint64_t now=nhl07_monotonic_ns(),wait=nhl07_frame_pacer_wait_at(now),end=now+wait;
    while(wait){struct timespec delay={(time_t)(wait/1000000000ull),(long)(wait%1000000000ull)};nanosleep(&delay,NULL);now=nhl07_monotonic_ns();if(now>=end)break;wait=end-now;}
}
