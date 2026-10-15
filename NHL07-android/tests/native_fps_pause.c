#include "native_fps.h"
#include "native_pause.h"
#include "native_frame_pacer.h"
#include <assert.h>
#include <math.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdio.h>
#include <time.h>
static atomic_int returned;
static void *waiter(void *unused){(void)unused;nhl07_pause_wait();atomic_store(&returned,1);return NULL;}
int main(void){
    nhl07_frame_pacer_reset();uint64_t simulated=1000000000ull;assert(nhl07_frame_pacer_wait_at(simulated)==0);
    nhl07_frame_pacer_present_at(simulated);
    for(unsigned i=0;i<1000;i++){uint64_t previous=simulated;simulated+=4000000ull;uint64_t wait=nhl07_frame_pacer_wait_at(simulated);assert(wait<=NHL07_FRAME_PERIOD_NS);simulated+=wait+200000ull;assert(simulated-previous>=NHL07_FRAME_PERIOD_NS);nhl07_frame_pacer_present_at(simulated);}
    assert(simulated>=1000000000ull+1000*NHL07_FRAME_PERIOD_NS);
    for(unsigned i=0;i<100;i++){simulated+=33000000ull;assert(nhl07_frame_pacer_wait_at(simulated)==0);nhl07_frame_pacer_present_at(simulated);}
    simulated+=10000000000ull;assert(nhl07_frame_pacer_wait_at(simulated)==0);nhl07_frame_pacer_present_at(simulated);
    simulated+=4000000ull;assert(nhl07_frame_pacer_wait_at(simulated)==NHL07_FRAME_PERIOD_NS-4000000ull);
    puts("FRAME_PACER passed: 1000 fast intervals strictly >= 1/60 s; 100 slow frames add no delay; no catch-up burst after a stall.");
    nhl07_fps_reset();assert(nhl07_fps_get_at(1000000000ull)==0);
    for(unsigned hz=30;hz<=120;hz*=2){nhl07_fps_reset();for(unsigned i=0;i<=hz*2;i++)nhl07_fps_present_at(1000000000ull+(uint64_t)i*1000000000ull/hz);assert(fabsf(nhl07_fps_get_at(3000000000ull)-hz)<.01f);assert(nhl07_fps_get_at(6000000000ull)==0);}
    nhl07_fps_present_at(7000000000ull);assert(nhl07_fps_get_at(7000000000ull)==0);
    uint64_t before=nhl07_game_time_ns();nhl07_pause_set(1);uint64_t frozen=nhl07_game_time_ns();assert(frozen>=before);
    pthread_t worker;assert(!pthread_create(&worker,NULL,waiter,NULL));struct timespec delay={0,60000000};nanosleep(&delay,NULL);assert(!atomic_load(&returned));assert(nhl07_game_time_ns()==frozen);
    nhl07_pause_set(0);pthread_join(worker,NULL);assert(atomic_load(&returned));uint64_t after=nhl07_game_time_ns();assert(after>=frozen&&after-frozen<50000000ull);assert(nhl07_fps_get()==0);
    puts("FPS_PAUSE passed: actual intervals 30/60/120 Hz; stale and reset; frame wait; frozen game clock; resume excludes pause.");return 0;
}
