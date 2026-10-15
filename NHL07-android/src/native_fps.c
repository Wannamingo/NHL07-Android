/* Counts completed presentations on the render thread; UI reads atomics. */
#include "native_fps.h"
#include <stdatomic.h>
#include <time.h>
static uint64_t window_start;
static unsigned intervals;
static atomic_uint millifps;
static atomic_uint_fast64_t updated;
uint64_t nhl07_monotonic_ns(void){struct timespec t;clock_gettime(CLOCK_MONOTONIC,&t);return (uint64_t)t.tv_sec*1000000000ull+t.tv_nsec;}
void nhl07_fps_reset(void){window_start=0;intervals=0;atomic_store(&millifps,0);atomic_store(&updated,0);}
void nhl07_fps_present_at(uint64_t now){
    if(!window_start||now<=window_start||now-window_start>2500000000ull){window_start=now;intervals=0;atomic_store(&millifps,0);return;}
    ++intervals;uint64_t elapsed=now-window_start;
    if(elapsed>=500000000ull){atomic_store(&millifps,(unsigned)((uint64_t)intervals*1000000000000ull/elapsed));atomic_store_explicit(&updated,now,memory_order_release);window_start=now;intervals=0;}
}
float nhl07_fps_get_at(uint64_t now){uint64_t last=atomic_load_explicit(&updated,memory_order_acquire);return !last||now<last||now-last>2500000000ull?0:atomic_load(&millifps)/1000.f;}
void nhl07_fps_present(void){nhl07_fps_present_at(nhl07_monotonic_ns());}
float nhl07_fps_get(void){return nhl07_fps_get_at(nhl07_monotonic_ns());}
