/* XDK sound boundary: native PCM/ADPCM voices, original DSP and AAudio output. */
#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif
#include <aaudio/AAudio.h>
#include <stdatomic.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <time.h>
#include <errno.h>
#include <sched.h>
#include <unistd.h>
#include <sys/syscall.h>
#include "audio_cpu_policy.h"
#include "native_audio.h"
#include "native_dsp.h"
#include "native_voice.h"
#include "native_pause.h"
#include "recomp_types.h"
extern uint32_t xbox_HeapAlloc(uint32_t,uint32_t);
extern void sub_006C744B(void);
static AAudioStream *output;
static atomic_uint_fast64_t callback_frames;
static atomic_int output_error;
static atomic_uint_fast64_t callback_count,callback_work_ns,callback_cpu_ns,callback_late,callback_max_ns;
static atomic_uint_fast64_t dsp_work_ns,dsp_wait_ns,clipped_frames;
static atomic_int monitor_running,first_signal;
static atomic_uint first_active,first_peak_bits;
static atomic_int callback_tid;
static atomic_uint_fast64_t preferred_cpu_mask;
static pthread_t monitor_thread;
static int monitor_started;
static pthread_mutex_t audio_lock=PTHREAD_MUTEX_INITIALIZER;
/* Voice/control operations must not wait behind DSP execution. DSP image and
   effect state have a separate lock; callback never holds both locks. */
static pthread_mutex_t dsp_lock=PTHREAD_MUTEX_INITIALIZER;
static atomic_int sound_ready;
static uint32_t sound,settings,refs;
static uint32_t dsp_state_proxy,reverb_work;
static uint8_t headroom[32];
static float rendered_stereo[64];
static unsigned rendered_at=32;
static uint64_t monotonic_ns(void) {
    struct timespec t;clock_gettime(CLOCK_MONOTONIC,&t);
    return (uint64_t)t.tv_sec*1000000000ull+(uint64_t)t.tv_nsec;
}
static uint64_t thread_cpu_ns(void) {
    struct timespec t;clock_gettime(CLOCK_THREAD_CPUTIME_ID,&t);
    return (uint64_t)t.tv_sec*1000000000ull+(uint64_t)t.tv_nsec;
}
static void maximum(atomic_uint_fast64_t *counter,uint64_t value) {
    uint_fast64_t old=atomic_load_explicit(counter,memory_order_relaxed);
    while(old<value&&!atomic_compare_exchange_weak_explicit(counter,&old,value,memory_order_relaxed,memory_order_relaxed)){}
}
static void prefer_audio_performance_cpus(int tid) {
    const char *setting=getenv("NHL07_AUDIO_PERFORMANCE_CPUS");
    if(setting&&strcmp(setting,"0")==0){fprintf(stderr,"[NHL07-AUDIO-CPU] tid=%d preference=disabled\n",tid);return;}
    long count=sysconf(_SC_NPROCESSORS_CONF);cpu_set_t allowed_set,selected_set;
    if(count<1||count>64||sched_getaffinity(tid,sizeof(allowed_set),&allowed_set)!=0)return;
    uint64_t allowed=0;unsigned capacity[64]={0};
    for(unsigned i=0;i<(unsigned)count;i++)if(CPU_ISSET(i,&allowed_set)) {
        allowed|=UINT64_C(1)<<i;char path[128];snprintf(path,sizeof(path),"/sys/devices/system/cpu/cpu%u/cpu_capacity",i);
        FILE *file=fopen(path,"r");if(file){if(fscanf(file,"%u",&capacity[i])!=1)capacity[i]=0;fclose(file);}
    }
    uint64_t selected=nhl07_audio_performance_mask(allowed,capacity,(unsigned)count);
    if(!selected){fprintf(stderr,"[NHL07-AUDIO-CPU] tid=%d allowed=%llx preference=unchanged_or_topology_unavailable\n",tid,(unsigned long long)allowed);return;}
    CPU_ZERO(&selected_set);for(unsigned i=0;i<(unsigned)count;i++)if(selected&(UINT64_C(1)<<i))CPU_SET(i,&selected_set);
    int result=sched_setaffinity(tid,sizeof(selected_set),&selected_set),saved_errno=errno;
    if(!result)atomic_store_explicit(&preferred_cpu_mask,selected,memory_order_release);
    fprintf(stderr,"[NHL07-AUDIO-CPU] tid=%d allowed=%llx selected=%llx result=%d errno=%d callback_thread_only=1\n",
            tid,(unsigned long long)allowed,(unsigned long long)selected,result,result?saved_errno:0);
}
/* Android task profiles may replace a thread's affinity when an activity
   changes foreground state. Reapply our bounded preference before resuming
   the mixer, and audit it outside the callback while the game runs. */
static void restore_audio_performance_cpus(int tid,const char *reason) {
    uint64_t preferred=atomic_load_explicit(&preferred_cpu_mask,memory_order_acquire);
    if(!tid||!preferred)return;
    cpu_set_t current,selected;if(sched_getaffinity(tid,sizeof(current),&current)!=0)return;
    uint64_t actual=0;for(unsigned i=0;i<64;i++)if(CPU_ISSET(i,&current))actual|=UINT64_C(1)<<i;
    if(actual==preferred)return;
    CPU_ZERO(&selected);for(unsigned i=0;i<64;i++)if(preferred&(UINT64_C(1)<<i))CPU_SET(i,&selected);
    int result=sched_setaffinity(tid,sizeof(selected),&selected),saved_errno=errno;
    fprintf(stderr,"[NHL07-AUDIO-CPU-RESTORE] tid=%d previous=%llx selected=%llx reason=%s result=%d errno=%d\n",
            tid,(unsigned long long)actual,(unsigned long long)preferred,reason,result,result?saved_errno:0);
}
void nhl07_audio_resume(void) {
    restore_audio_performance_cpus(atomic_load_explicit(&callback_tid,memory_order_relaxed),"resume_before_unpause");
}
/* Logging belongs on an ordinary thread, never in the output callback. The
   counters are cumulative so reading them cannot disturb sound generation. */
static void *monitor_audio(void *unused) {
    (void)unused;unsigned ticks=0;int signal_reported=0,error_reported=0,configured_tid=0;
    while(atomic_load_explicit(&monitor_running,memory_order_acquire)) {
        struct timespec delay={0,100000000};nanosleep(&delay,NULL);
        if(!atomic_load_explicit(&monitor_running,memory_order_acquire))break;
        int tid=atomic_load_explicit(&callback_tid,memory_order_relaxed);
        if(tid&&tid!=configured_tid){atomic_store(&preferred_cpu_mask,0);prefer_audio_performance_cpus(tid);configured_tid=tid;}
        if(tid&&!nhl07_pause_active())restore_audio_performance_cpus(tid,"periodic_audit");
        if(!signal_reported&&atomic_load_explicit(&first_signal,memory_order_acquire)) {
            uint32_t bits=atomic_load_explicit(&first_peak_bits,memory_order_relaxed);float peak;memcpy(&peak,&bits,sizeof(peak));
            fprintf(stderr,"[NHL07-AUDIO-RENDER] first nonzero output active_voices=%u peak=%.7f; native voices -> original DSP -> AAudio\n",
                    atomic_load_explicit(&first_active,memory_order_relaxed),peak);signal_reported=1;
        }
        int result=atomic_load_explicit(&output_error,memory_order_relaxed);
        if(result&&!error_reported){fprintf(stderr,"[NHL07-AUDIO] asynchronous output error=%d %s\n",result,AAudio_convertResultToText(result));error_reported=1;}
        if(++ticks%50==0)fprintf(stderr,"[NHL07-AUDIO-STATS] callbacks=%llu frames=%llu work_ms=%.3f cpu_ms=%.3f late=%llu max_ms=%.3f dsp_ms=%.3f dsp_wait_ms=%.3f clipped_frames=%llu xruns=%d buffer_frames=%d\n",
            (unsigned long long)atomic_load(&callback_count),(unsigned long long)atomic_load(&callback_frames),
            atomic_load(&callback_work_ns)/1000000.,atomic_load(&callback_cpu_ns)/1000000.,
            (unsigned long long)atomic_load(&callback_late),atomic_load(&callback_max_ns)/1000000.,
            atomic_load(&dsp_work_ns)/1000000.,atomic_load(&dsp_wait_ns)/1000000.,
            (unsigned long long)atomic_load(&clipped_frames),AAudioStream_getXRunCount(output),AAudioStream_getBufferSizeInFrames(output));
    }
    return NULL;
}
static void *guest(uint32_t address,unsigned size) {
    uint32_t canonical=address>=0x80000000?address-0x80000000:address;
    if(canonical<0x10000 || (uint64_t)canonical+size>0x4000000) {
        fprintf(stderr,"[NHL07-AUDIO] invalid guest buffer=%08X bytes=%u\n",address,size);abort();
    }
    return (void *)(g_xbox_mem_offset+(uintptr_t)address);
}
static aaudio_data_callback_result_t fill(AAudioStream *stream,void *context,void *data,int32_t frames) {
    (void)stream;(void)context;
    uint64_t requested=monotonic_ns();
    uint64_t cpu_requested=thread_cpu_ns();
    static _Thread_local int cached_tid;if(!cached_tid)cached_tid=(int)syscall(SYS_gettid);
    atomic_store_explicit(&callback_tid,cached_tid,memory_order_relaxed);
    float *destination=data;
    if(nhl07_pause_active()){memset(destination,0,(size_t)frames*2*sizeof(float));return AAUDIO_CALLBACK_RESULT_CONTINUE;}
    for(int32_t f=0;f<frames;f++) {
        if(rendered_at==32) {
            float bins[32][32];int32_t input[1024],out[1024];uint8_t local_headroom[32];
            pthread_mutex_lock(&audio_lock);
            unsigned active=nhl07_voice_mix(bins);
            memcpy(local_headroom,headroom,sizeof(local_headroom));
            pthread_mutex_unlock(&audio_lock);
            for(unsigned b=0;b<32;b++)for(unsigned i=0;i<32;i++) {
                float value=bins[b][i]/(float)(1u<<(local_headroom[b]>24?24:local_headroom[b]));
                if(value>0.99999988f)value=0.99999988f;if(value<-1)value=-1;
                input[b*32+i]=(int32_t)lrintf(value*8388608.f)&0xffffff;
            }
            uint64_t dsp_requested=monotonic_ns();pthread_mutex_lock(&dsp_lock);
            uint64_t dsp_started=monotonic_ns();
            if(nhl07_dsp_effect_count()){if(!nhl07_dsp_frame(input,out))abort();}else memcpy(out,input,sizeof(out));
            atomic_fetch_add_explicit(&dsp_work_ns,monotonic_ns()-dsp_started,memory_order_relaxed);
            atomic_fetch_add_explicit(&dsp_wait_ns,dsp_started-dsp_requested,memory_order_relaxed);
            pthread_mutex_unlock(&dsp_lock);
            float peak=0;
            for(unsigned i=0;i<32;i++) {
                float s[6];for(unsigned ch=0;ch<6;ch++)s[ch]=((int32_t)((uint32_t)out[ch*32+i]<<8)>>8)/8388608.f;
                float left=s[0]+.70710678f*(s[2]+s[4])+.5f*s[3],right=s[1]+.70710678f*(s[2]+s[5])+.5f*s[3];
                rendered_stereo[i*2]=fminf(1,fmaxf(-1,left));rendered_stereo[i*2+1]=fminf(1,fmaxf(-1,right));
                if(fabsf(left)>1||fabsf(right)>1)atomic_fetch_add_explicit(&clipped_frames,1,memory_order_relaxed);
                peak=fmaxf(peak,fmaxf(fabsf(left),fabsf(right)));
            }
            if(!atomic_load_explicit(&first_signal,memory_order_relaxed)&&peak>0){uint32_t bits;memcpy(&bits,&peak,sizeof(bits));
                atomic_store_explicit(&first_active,active,memory_order_relaxed);atomic_store_explicit(&first_peak_bits,bits,memory_order_relaxed);
                atomic_store_explicit(&first_signal,1,memory_order_release);}
            rendered_at=0;
        }
        destination[f*2]=rendered_stereo[rendered_at*2];destination[f*2+1]=rendered_stereo[rendered_at*2+1];rendered_at++;
    }
    uint64_t elapsed=monotonic_ns()-requested;
    atomic_fetch_add_explicit(&callback_count,1,memory_order_relaxed);
    atomic_fetch_add_explicit(&callback_work_ns,elapsed,memory_order_relaxed);
    atomic_fetch_add_explicit(&callback_cpu_ns,thread_cpu_ns()-cpu_requested,memory_order_relaxed);
    if(elapsed>(uint64_t)frames*1000000000ull/48000)atomic_fetch_add_explicit(&callback_late,1,memory_order_relaxed);
    maximum(&callback_max_ns,elapsed);
    atomic_fetch_add_explicit(&callback_frames,(uint64_t)frames,memory_order_relaxed);
    return AAUDIO_CALLBACK_RESULT_CONTINUE;
}
static void error(AAudioStream *stream,void *context,aaudio_result_t result) {
    (void)stream;(void)context;atomic_store(&output_error,result);
}
uint64_t nhl07_audio_callback_frames(void) {return atomic_load(&callback_frames);}
int nhl07_audio_callback_tid(void) {return atomic_load(&callback_tid);}
uint32_t nhl07_audio_open(void) {
    if(output)return atomic_load(&output_error)?0x80004005u:0;
    AAudioStreamBuilder *builder=NULL;aaudio_result_t result=AAudio_createStreamBuilder(&builder);
    if(result!=AAUDIO_OK)return 0x80004005u;
    AAudioStreamBuilder_setDirection(builder,AAUDIO_DIRECTION_OUTPUT);
    AAudioStreamBuilder_setFormat(builder,AAUDIO_FORMAT_PCM_FLOAT);
    AAudioStreamBuilder_setChannelCount(builder,2);
    AAudioStreamBuilder_setSampleRate(builder,48000);
    AAudioStreamBuilder_setUsage(builder,AAUDIO_USAGE_GAME);
    AAudioStreamBuilder_setSharingMode(builder,AAUDIO_SHARING_MODE_SHARED);
    AAudioStreamBuilder_setPerformanceMode(builder,AAUDIO_PERFORMANCE_MODE_LOW_LATENCY);
    AAudioStreamBuilder_setDataCallback(builder,fill,NULL);
    AAudioStreamBuilder_setErrorCallback(builder,error,NULL);
    result=AAudioStreamBuilder_openStream(builder,&output);
    AAudioStreamBuilder_delete(builder);
    if(result!=AAUDIO_OK) {output=NULL;fprintf(stderr,"[NHL07-AUDIO] open failed: %s\n",AAudio_convertResultToText(result));return 0x80004005u;}
    if(AAudioStream_getFormat(output)!=AAUDIO_FORMAT_PCM_FLOAT || AAudioStream_getChannelCount(output)!=2 || AAudioStream_getSampleRate(output)!=48000) {
        AAudioStream_close(output);output=NULL;return 0x80004005u;
    }
    rendered_at=32;atomic_store(&output_error,0);atomic_store(&callback_frames,0);atomic_store(&callback_count,0);
    atomic_store(&callback_work_ns,0);atomic_store(&callback_cpu_ns,0);atomic_store(&callback_late,0);atomic_store(&callback_max_ns,0);
    atomic_store(&dsp_work_ns,0);atomic_store(&dsp_wait_ns,0);atomic_store(&clipped_frames,0);atomic_store(&first_signal,0);atomic_store(&callback_tid,0);atomic_store(&preferred_cpu_mask,0);
    result=AAudioStream_requestStart(output);
    if(result!=AAUDIO_OK) {AAudioStream_close(output);output=NULL;return 0x80004005u;}
    atomic_store_explicit(&monitor_running,1,memory_order_release);
    if(pthread_create(&monitor_thread,NULL,monitor_audio,NULL)!=0){atomic_store(&monitor_running,0);AAudioStream_requestStop(output);AAudioStream_close(output);output=NULL;return 0x80004005u;}
    monitor_started=1;
    fprintf(stderr,"[NHL07-AUDIO] AAudio output opened: 48000 Hz float stereo; native voices and original DSP connected\n");
    return 0;
}
void nhl07_audio_close(void) {
    atomic_store_explicit(&monitor_running,0,memory_order_release);
    if(monitor_started){pthread_join(monitor_thread,NULL);monitor_started=0;}
    if(output){AAudioStream_requestStop(output);AAudioStream_close(output);output=NULL;}
}
static uint32_t create(const uint32_t *a) {
    if(a[0]||a[2]||!a[1])return 0x80070057u;
    *(uint32_t *)guest(a[1],4)=0;
    uint32_t result=nhl07_audio_open();if(result)return result;
    if(!sound) {
        sound=xbox_HeapAlloc(0x2c,16);settings=xbox_HeapAlloc(0xb4,16);
        if(!sound||!settings)return 0x8007000eu;
        memset(guest(sound,0x2c),0,0x2c);memset(guest(settings,0xb4),0,0xb4);
        /* Audited NHL 07 constructor 6B91CB, allocation 6BE941, interface +8.
           This is the NHL-specific vtable, not the NFSU object's layout. */
        MEM32(sound)=0x83c1c0;refs=1;MEM32(sound+8)=settings;
        MEM32(sound+0x10)=sound+0x10;MEM32(sound+0x14)=sound+0x10;
        MEM32(0x6eb5d0)=sound;
    }
    MEM32(sound+4)=++refs;MEM32(a[1])=sound+8;return 0;
}
static uint32_t load_dsp(const uint32_t *a) {
    if(a[2]>4*1024*1024 || !a[2]) {fprintf(stderr,"[NHL07-AUDIO] invalid DSP image length\n");abort();}
    const char *directory=getenv("NHL07_DIAGNOSTIC_DIR");if(!directory)directory=".";
    char path[4096];snprintf(path,sizeof(path),"%s/first-dsp-image.bin",directory);
    FILE *f=fopen(path,"wb");if(!f || fwrite(guest(a[1],a[2]),1,a[2],f)!=a[2])abort();fclose(f);
    uint32_t location[2]={0xffffffff,0xffffffff};if(a[3])memcpy(location,guest(a[3],8),8);
    snprintf(path,sizeof(path),"%s/first-dsp-image.json",directory);f=fopen(path,"w");if(!f)abort();
    fprintf(f,"{\"image_guest_address\":\"%08X\",\"image_bytes\":%u,\"image_location\":[%u,%u],\"aaudio_callback_frames\":%llu,\"game_audio_verified\":false}\n",
        a[1],a[2],location[0],location[1],(unsigned long long)nhl07_audio_callback_frames());fclose(f);
    if(!nhl07_dsp_load(guest(a[1],a[2]),a[2]))return 0x80070057u;
    unsigned n=nhl07_dsp_effect_count();
    if(location[0]>=n || location[1]>=n || !a[4])return 0x80070057u;
    int32_t input[1024]={0},out[1024];
    if(!nhl07_dsp_frame(input,out))abort();
    for(unsigned i=0;i<1024;i++)if(out[i]){fprintf(stderr,"[NHL07-DSP] nonzero output for initial zero input\n");abort();}
    uint32_t program=xbox_HeapAlloc(16384,16),state=xbox_HeapAlloc(16384,16),yram=xbox_HeapAlloc(8192,16);
    uint32_t image_desc=xbox_HeapAlloc(8+n*32,16),scratch_proxy=xbox_HeapAlloc(0x60000,16);
    if(!program||!state||!yram||!image_desc||!scratch_proxy)return 0x8007000eu;
    memcpy(guest(program,16384),nhl07_dsp_program(),16384);memcpy(guest(state,16384),nhl07_dsp_state(),16384);
    memset(guest(yram,8192),0,8192);memset(guest(scratch_proxy,0x60000),0,0x60000);
    MEM32(image_desc)=n;MEM32(image_desc+4)=0x60000;
    for(unsigned i=0;i<n;i++) {
        const NhlDspEffect *e=nhl07_dsp_effect_info(i);uint32_t p=image_desc+8+i*32;
        MEM32(p)=program+e->code_offset-0x818;MEM32(p+4)=e->code_bytes;
        MEM32(p+8)=state+0x80*4+e->state_offset-MEM32(a[1]+0x808);MEM32(p+12)=e->state_bytes;
        MEM32(p+16)=yram+e->y_offset;MEM32(p+20)=e->y_bytes;
        MEM32(p+24)=scratch_proxy+e->scratch_offset-0xc000;MEM32(p+28)=e->scratch_bytes;
    }
    MEM32(settings+8)=location[0];MEM32(settings+12)=location[1];MEM32(a[4])=image_desc;
    dsp_state_proxy=state;
    snprintf(path,sizeof(path),"%s/dsp-loaded-program.bin",directory);f=fopen(path,"wb");if(!f)abort();fwrite(nhl07_dsp_program(),1,16384,f);fclose(f);
    snprintf(path,sizeof(path),"%s/dsp-loaded-state.bin",directory);f=fopen(path,"wb");if(!f)abort();fwrite(nhl07_dsp_state(),1,16384,f);fclose(f);
    fprintf(stderr,"[NHL07-DSP] DownloadEffectsImage loaded original DSP image captured bytes=%u; effects=%u; zero frame executed instructions=%llu DMA bytes=%llu; game audio unverified\n",
        a[2],n,(unsigned long long)nhl07_dsp_instructions(),(unsigned long long)nhl07_dsp_dma_bytes());return 0;
}
static void sync_dsp_state(void) {if(dsp_state_proxy)memcpy(guest(dsp_state_proxy,16384),nhl07_dsp_state(),16384);}
static uint32_t apply_listener(void) {
    if(!MEM16(settings+0x80))return 0;
    unsigned effect=MEM32(settings+8);const NhlDspEffect *e=nhl07_dsp_effect_info(effect);
    if(!e||e->state_bytes<0x220)return 0x80070057u;
    if(!reverb_work)reverb_work=xbox_HeapAlloc(0x228,16);if(!reverb_work)return 0x8007000eu;
    memset(guest(reverb_work,0x228),0,0x228);
    if(!nhl07_dsp_get_data(effect,0,guest(reverb_work,0x118),0x118))return 0x80070057u;
    uint32_t saved_sp=g_esp;g_ecx=reverb_work+0x224;
    /* Original call site 6BA990: this=&output_slot, stack=(flags/params,output).
       Audited RET 8; all 14 calculator functions validated against original x86. */
    PUSH32(g_esp,reverb_work);PUSH32(g_esp,settings+0x80);PUSH32(g_esp,0x6ba99e);
    RECOMP_ABI_CALL(0x6c744bu,sub_006C744B);
    if(g_esp!=saved_sp){fprintf(stderr,"[NHL07-ABI] reverb calculator stack mismatch\n");abort();}
    MEM32(reverb_work+0x10)|=4;
    if(!nhl07_dsp_set_data(effect,0x10,guest(reverb_work+0x10,4),4,1)||
        !nhl07_dsp_set_data(effect,0x118,guest(reverb_work+0x118,0x108),0x108,1))return 0x80070057u;
    nhl07_dsp_commit();sync_dsp_state();MEM16(settings+0x80)=0;
    fprintf(stderr,"[NHL07-AUDIO] I3DL2 listener calculated by original game functions and committed to DSP effect=%u\n",effect);return 0;
}
uint32_t nhl07_audio_call(NhlAudioApi api,const uint32_t *a) {
    if(api==NHL_AUDIO_DirectSoundDoWork)return 0; /* Mixer is driven by AAudio. */
    if(api==NHL_AUDIO_DirectSoundGetSampleTime) {
        if(!atomic_load_explicit(&sound_ready,memory_order_acquire))return 0;
        uint64_t t=nhl07_game_time_ns();
        return (uint32_t)((t/1000000000ull)*48000+(t%1000000000ull)*48000/1000000000ull);
    }
    uint64_t requested=monotonic_ns();
    pthread_mutex_lock(&audio_lock);uint32_t result=0;
    {static unsigned slow;uint64_t wait=monotonic_ns()-requested;
     if(wait>10000000ull&&slow++<24)fprintf(stderr,"[NHL07-AUDIO-WAIT] api=%u milliseconds=%.3f callback_frames=%llu\n",api,
                                            (double)wait/1000000.0,(unsigned long long)nhl07_audio_callback_frames());}
    int uses_dsp=api>=NHL_AUDIO_IDirectSound_DownloadEffectsImage&&api<=NHL_AUDIO_IDirectSound_CommitDeferredSettings;
    if(uses_dsp)pthread_mutex_lock(&dsp_lock);
    if(api==NHL_AUDIO_DirectSoundCreate) {
        result=create(a);if(!result)atomic_store_explicit(&sound_ready,1,memory_order_release);
    }
    else if(api==NHL_AUDIO_DirectSoundCreateBuffer)result=nhl07_voice_create(a[0],a[1],sound);
    else if(nhl07_voice_handles(api))result=nhl07_voice_call(api,a);
    else if(!sound || a[0]!=sound+8)result=0x80070057u;
    else switch(api) {
    case NHL_AUDIO_IDirectSound_AddRef: result=++refs;MEM32(sound+4)=refs;break;
    case NHL_AUDIO_IDirectSound_Release: if(refs>1)--refs;result=refs;MEM32(sound+4)=refs;break;
    case NHL_AUDIO_IDirectSound_SetMixBinHeadroom:
        /* 6B9497 uses the second argument as an index, despite the signature
           database's dwMixBinMask label. Retain the byte in the real settings. */
        if(a[1]>=32 || a[2]>255)result=0x80070057u;
        else {headroom[a[1]]=(uint8_t)a[2];MEM8(settings+0x10+a[1])=headroom[a[1]];}break;
    case NHL_AUDIO_IDirectSound_DownloadEffectsImage: result=load_dsp(a);break;
    case NHL_AUDIO_IDirectSound_SetI3DL2Listener:
        if(!a[1]||a[2]>1){result=0x80070057u;break;}
        memcpy(guest(settings+0x84,48),guest(a[1],48),48);MEM16(settings+0x80)|=0xfff;
        if(!a[2])result=apply_listener();break;
    case NHL_AUDIO_IDirectSound_CommitDeferredSettings:result=apply_listener();break;
    case NHL_AUDIO_IDirectSound_SetEffectData:
        if(a[5]>1||!nhl07_dsp_set_data(a[1],a[2],guest(a[3],a[4]),a[4],a[5]))result=0x80070057u;
        sync_dsp_state();break;
    case NHL_AUDIO_IDirectSound_GetEffectData:
        if(!nhl07_dsp_get_data(a[1],a[2],guest(a[3],a[4]),a[4]))result=0x80070057u;break;
    case NHL_AUDIO_IDirectSound_CommitEffectData:nhl07_dsp_commit();sync_dsp_state();break;
    case NHL_AUDIO_IDirectSound_CreateSoundBuffer:result=nhl07_voice_create(a[1],a[2],sound);break;
    default: fprintf(stderr,"[NHL07-AUDIO-MISSING] API=%u\n",api);abort();
    }
    if(api!=NHL_AUDIO_DirectSoundGetSampleTime&&(int32_t)result<0)fprintf(stderr,"[NHL07-AUDIO] API=%u returned error=%08X object=%08X\n",api,result,a[0]);
    if(uses_dsp)pthread_mutex_unlock(&dsp_lock);
    pthread_mutex_unlock(&audio_lock);return result;
}
