/* Freeze the guest time source and wait at a completed frame, keeping EGL alive. */
#include "native_pause.h"
#include "native_fps.h"
#include <pthread.h>
#include <stdatomic.h>
#include <stdio.h>
#include <time.h>
extern void nhl07_graphics_pause_checkpoint(void) __attribute__((weak));
extern void nhl07_audio_resume(void) __attribute__((weak));
static pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t changed=PTHREAD_COND_INITIALIZER;
static atomic_int paused;
static uint64_t pause_start,excluded;
void nhl07_pause_set(int value){
    pthread_mutex_lock(&mutex);value=!!value;
    if(value!=atomic_load(&paused)){
        if(!value&&nhl07_audio_resume)nhl07_audio_resume();
        uint64_t now=nhl07_monotonic_ns();
        if(value)pause_start=now;else excluded+=now-pause_start;
        atomic_store(&paused,value);pthread_cond_broadcast(&changed);
        fprintf(stderr,"[NHL07-APP-PAUSE] paused=%d excluded_ms=%llu\n",value,(unsigned long long)(excluded/1000000));
    }
    pthread_mutex_unlock(&mutex);
}
int nhl07_pause_active(void){return atomic_load(&paused);}
void nhl07_pause_wait(void){
    int waited=0;
    for(;;){
        // Surface-release work belongs to the renderer thread and must also
        // run when a menu has already parked that thread in this pause loop.
        if(nhl07_graphics_pause_checkpoint)nhl07_graphics_pause_checkpoint();
        pthread_mutex_lock(&mutex);
        if(!atomic_load(&paused)){pthread_mutex_unlock(&mutex);break;}
        waited=1;struct timespec deadline;clock_gettime(CLOCK_REALTIME,&deadline);
        deadline.tv_nsec+=50000000;if(deadline.tv_nsec>=1000000000){++deadline.tv_sec;deadline.tv_nsec-=1000000000;}
        pthread_cond_timedwait(&changed,&mutex,&deadline);pthread_mutex_unlock(&mutex);
    }
    if(waited)nhl07_fps_reset();
}
uint64_t nhl07_game_time_ns(void){pthread_mutex_lock(&mutex);uint64_t now=(atomic_load(&paused)?pause_start:nhl07_monotonic_ns())-excluded;pthread_mutex_unlock(&mutex);return now;}
