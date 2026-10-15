/* Synthetic controller ABI tests plus real AAudio-service smoke test.
   These do not claim a physical button was exercised inside the game. */
#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif
#include "recomp_types.h"
#include "native_input.h"
#include "native_audio.h"
#include "native_pause.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sched.h>
ptrdiff_t g_xbox_mem_offset;
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
RECOMP_TLS double g_fp_stack[8];
RECOMP_TLS int g_fp_top,g_fp_cmp;
RECOMP_TLS uint16_t g_fp_control_word=0x37f,g_fp_cc;
uint32_t xbox_HeapAlloc(uint32_t size,uint32_t alignment) {
    static uint32_t next=0x40000;uint32_t p=(next+alignment-1)&~(alignment-1);next=p+size;
    if(next>=0x4000000)abort();return p;
}
void xbox_HeapFree(uint32_t address) {(void)address;}
void nhl07_input_update(int,uint16_t,const int32_t *,const int32_t *);
void sub_007A4EFB(void);
static unsigned passed;
static uint64_t monotonic_ns(void) {struct timespec t;clock_gettime(CLOCK_MONOTONIC,&t);return (uint64_t)t.tv_sec*1000000000ull+t.tv_nsec;}
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL line=%d: %s\n",__LINE__,#x);return 1;}passed++;}while(0)
static uint32_t call(NhlInputApi api,uint32_t a,uint32_t b,uint32_t c,uint32_t d) {uint32_t args[4]={a,b,c,d};return nhl07_input_call(api,args);}
int main(int argc,char **argv) {
    if(argc!=4)return 2;setenv("NHL07_DIAGNOSTIC_DIR",argv[2],1);
    void *ram=calloc(1,0x4000000);if(!ram)return 2;g_xbox_mem_offset=(ptrdiff_t)ram;
    FILE *baseline=fopen(argv[3],"rb");if(!baseline||fread(ram,1,0x1000000,baseline)!=0x1000000)return 2;fclose(baseline);
    const uint32_t type=0x79975c,out=0x30000;int32_t analog[8]={1,2,3,4,5,6,300,-1},axes[4]={-40000,40000,-1234,5678};
    call(NHL_INPUT_XInitDevices,0,0,0,0);
    CHECK(call(NHL_INPUT_XGetDevices,type,0,0,0)==0);
    nhl07_input_update(1,0xa5,analog,axes);
    CHECK(call(NHL_INPUT_XGetDeviceChanges,type,out,out+4,0)==1 && MEM32(out)==1 && MEM32(out+4)==0);
    CHECK(call(NHL_INPUT_XGetDeviceChanges,type,out,out+4,0)==0 && MEM32(out)==0 && MEM32(out+4)==0);
    CHECK(call(NHL_INPUT_XInputOpen,type,1,0,0)==0);
    uint32_t handle=call(NHL_INPUT_XInputOpen,type,0,0,0);CHECK(handle!=0);
    memset((char *)ram+out,0xcc,32);CHECK(call(NHL_INPUT_XInputGetState,handle,out,0,0)==0);
    uint32_t packet=MEM32(out);
    CHECK(MEM16(out+4)==0xa5 && MEM8(out+6)==1 && MEM8(out+12)==255 && MEM8(out+13)==0);
    CHECK(MEM16(out+14)==0x8000 && MEM16(out+16)==0x7fff && (int16_t)MEM16(out+18)==-1234 && MEM16(out+20)==5678 && MEM8(out+22)==0xcc);
    nhl07_input_update(1,0xa5,analog,axes);call(NHL_INPUT_XInputGetState,handle,out,0,0);CHECK(MEM32(out)==packet);
    analog[0]=120;nhl07_input_update(1,0xa5,analog,axes);call(NHL_INPUT_XInputGetState,handle,out,0,0);CHECK(MEM32(out)==packet+1 && MEM8(out+6)==120);
    memset((char *)ram+out,0xcc,32);call(NHL_INPUT_XInputGetCapabilities,handle,out,0,0);
    CHECK(MEM8(out)==1 && MEM16(out+1)==0 && MEM16(out+3)==255 && MEM32(out+5)==0xffffffff && MEM16(out+13)==0x7fff && MEM32(out+21)==0 && MEM8(out+25)==0xcc);
    CHECK(call(NHL_INPUT_XInputSetState,handle,out,0,0)==50 && MEM32(out)==50);
    g_esp=0x20000;MEM32(g_esp)=0x123456;MEM32(g_esp+4)=handle;MEM32(g_esp+8)=out;
    sub_007A4EFB();CHECK(g_eax==0 && g_esp==0x2000c && MEM8(out+6)==120);
    call(NHL_INPUT_XInputClose,handle,0,0,0);CHECK(call(NHL_INPUT_XInputGetState,handle,out,0,0)==1167);
    nhl07_input_update(0,0,analog,axes);CHECK(call(NHL_INPUT_XGetDeviceChanges,type,out,out+4,0)==1 && MEM32(out)==0 && MEM32(out+4)==1);
    CHECK(call(NHL_INPUT_XGetDevices,type+4,0,0,0)==0);
    /* Already connected at boot: asynchronous initial enumeration must
       preserve the insertion the original NHL polling loop consumes. */
    nhl07_input_update(1,0,analog,axes);
    call(NHL_INPUT_XInitDevices,0,0,0,0);
    CHECK(call(NHL_INPUT_XGetDevices,type,0,0,0)==0 && MEM32(type)==0);
    CHECK(call(NHL_INPUT_XGetDeviceChanges,type,out,out+4,0)==1 && MEM32(out)==1 && MEM32(out+4)==0 && MEM32(type)==1 && MEM32(type+8)==1);
    CHECK(call(NHL_INPUT_XGetDevices,type,0,0,0)==1 && MEM32(type+4)==0);
    nhl07_input_update(0,0,analog,axes);nhl07_input_update(1,0,analog,axes);
    CHECK(call(NHL_INPUT_XGetDeviceChanges,type,out,out+4,0)==1 && MEM32(out)==1 && MEM32(out+4)==1);
    CHECK(call(NHL_INPUT_XGetDeviceChanges,type,out,out+4,0)==0 && MEM32(out)==0 && MEM32(out+4)==0);
    call(NHL_INPUT_XInitDevices,0,0,0,0);
    CHECK(call(NHL_INPUT_XGetDeviceEnumerationStatus,0,0,0,0)==0 && MEM32(type)==1);
    CHECK(call(NHL_INPUT_XGetDevices,type,0,0,0)==1);
    CHECK(call(NHL_INPUT_XGetDeviceChanges,type,out,out+4,0)==0);
    CHECK(nhl07_audio_open()==0);
    struct timespec pause={0,10000000};for(unsigned i=0;i<100 && nhl07_audio_callback_frames()==0;i++)nanosleep(&pause,NULL);
    uint64_t frames=nhl07_audio_callback_frames();CHECK(frames>0);
    FILE *file=fopen(argv[1],"rb");if(!file)return 2;fseek(file,0,SEEK_END);long image_size=ftell(file);rewind(file);
    uint32_t image=0x2000000;CHECK(image_size==20528 && fread((char *)ram+image,1,image_size,file)==(size_t)image_size);fclose(file);
    uint32_t audio_args[6]={0,out,0,0,0,0};CHECK(nhl07_audio_call(NHL_AUDIO_DirectSoundCreate,audio_args)==0);
    uint32_t sound=MEM32(out);CHECK(sound!=0);
    MEM32(out+8)=0;MEM32(out+12)=6;audio_args[0]=sound;audio_args[1]=image;audio_args[2]=image_size;audio_args[3]=out+8;audio_args[4]=out+16;
    CHECK(nhl07_audio_call(NHL_AUDIO_IDirectSound_DownloadEffectsImage,audio_args)==0);
    uint32_t descriptor=MEM32(out+16);CHECK(MEM32(descriptor)==13 && MEM32(descriptor+4)==0x60000);
    CHECK(MEM32(descriptor+12)==4844 && MEM32(descriptor+20)==2216 && MEM32(MEM32(descriptor+8))==0x65f400);
    uint32_t original_listener[12]={0xffffd8f0,0xffffd8f0,0,0x3f800000,0x3f800000,0xffffd8f0,0,0xffffd8f0,0,0,0,0x459c4000};
    memcpy((char *)ram+out,original_listener,sizeof(original_listener));audio_args[0]=sound;audio_args[1]=out;audio_args[2]=0;
    uint32_t saved_sp=g_esp;CHECK(nhl07_audio_call(NHL_AUDIO_IDirectSound_SetI3DL2Listener,audio_args)==0 && g_esp==saved_sp);
    uint32_t state_pointer=MEM32(descriptor+16);CHECK((MEM32(state_pointer+0x10)&4)!=0);
    MEM32(out)=0x123456;audio_args[1]=1;audio_args[2]=0x3c;audio_args[3]=out;audio_args[4]=4;audio_args[5]=1;
    uint32_t effect_one=MEM32(descriptor+8+32+8),before=MEM32(effect_one+0x3c);
    CHECK(nhl07_audio_call(NHL_AUDIO_IDirectSound_SetEffectData,audio_args)==0 && MEM32(effect_one+0x3c)==before);
    CHECK(nhl07_audio_call(NHL_AUDIO_IDirectSound_CommitEffectData,audio_args)==0 && MEM32(effect_one+0x3c)==0x123456);
    /* Poll an actual playing surround voice while AAudio executes the original
       DSP image. The old single mutex made these calls wait multiple seconds. */
    uint32_t wave=0x3100000,desc=wave+64;
    MEM16(wave)=1;MEM16(wave+2)=6;MEM32(wave+4)=48000;
    MEM32(wave+8)=48000*12;MEM16(wave+12)=12;MEM16(wave+14)=16;MEM16(wave+16)=0;
    memset((char *)ram+desc,0,24);MEM32(desc)=24;MEM32(desc+8)=28800;MEM32(desc+12)=wave;
    audio_args[0]=desc;audio_args[1]=out+128;
    CHECK(nhl07_audio_call(NHL_AUDIO_DirectSoundCreateBuffer,audio_args)==0);
    uint32_t voice=MEM32(out+128);audio_args[0]=voice;audio_args[1]=audio_args[2]=0;audio_args[3]=1;
    CHECK(nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Play,audio_args)==0);
    uint64_t maximum_wait=0,begin_frames=nhl07_audio_callback_frames();unsigned changes=0,previous=0;
    struct timespec poll_pause={0,1000000};
    for(unsigned i=0;i<200;i++) {
        audio_args[1]=out+132;audio_args[2]=out+136;
        uint64_t begin=monotonic_ns();
        CHECK(nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,audio_args)==0);
        uint64_t elapsed=monotonic_ns()-begin;if(elapsed>maximum_wait)maximum_wait=elapsed;
        uint32_t position=MEM32(out+132),write=MEM32(out+136);
        CHECK(position<28800 && position%12==0 && write<28800 && write%12==0);
        if(position!=previous)changes++;previous=position;nanosleep(&poll_pause,NULL);
    }
    CHECK(changes>0 && nhl07_audio_callback_frames()>begin_frames);
    CHECK(maximum_wait<100000000ull);
    /* Reproduce Android replacing the callback mask while playback runs.
       The monitor must restore it, and resume must restore it synchronously
       before allowing the mixer to execute again. */
    int audio_tid=nhl07_audio_callback_tid();cpu_set_t original_mask,process_mask,restored_mask;
    CHECK(audio_tid>0&&sched_getaffinity(audio_tid,sizeof(original_mask),&original_mask)==0);
    CHECK(sched_getaffinity(0,sizeof(process_mask),&process_mask)==0);
    CHECK(sched_setaffinity(audio_tid,sizeof(process_mask),&process_mask)==0);
    struct timespec audit_wait={0,300000000};nanosleep(&audit_wait,NULL);
    CHECK(sched_getaffinity(audio_tid,sizeof(restored_mask),&restored_mask)==0&&CPU_EQUAL(&restored_mask,&original_mask));
    nhl07_pause_set(1);
    CHECK(sched_setaffinity(audio_tid,sizeof(process_mask),&process_mask)==0);
    nhl07_pause_set(0);
    CHECK(sched_getaffinity(audio_tid,sizeof(restored_mask),&restored_mask)==0&&CPU_EQUAL(&restored_mask,&original_mask));
    fprintf(stderr,"AUDIO_AFFINITY_RESTORE tid=%d periodic=true resume_before_unpause=true\n",audio_tid);
    audio_args[0]=voice;CHECK(nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Stop,audio_args)==0);
    CHECK(nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Release,audio_args)==0);
    nhl07_pause_set(1);
    struct timespec settle={0,150000000};nanosleep(&settle,NULL);
    uint64_t paused_frames=nhl07_audio_callback_frames();nanosleep(&settle,NULL);
    CHECK(nhl07_audio_callback_frames()==paused_frames);
    nhl07_pause_set(0);
    for(unsigned i=0;i<100&&nhl07_audio_callback_frames()==paused_frames;i++)nanosleep(&pause,NULL);
    CHECK(nhl07_audio_callback_frames()>paused_frames);
    nhl07_audio_close();
    for(unsigned cycle=0;cycle<2;cycle++) {
        CHECK(nhl07_audio_open()==0);
        for(unsigned i=0;i<100&&nhl07_audio_callback_frames()==0;i++)nanosleep(&pause,NULL);
        CHECK(nhl07_audio_callback_frames()>0);nhl07_audio_close();
    }
    printf("AUDIO_CONCURRENCY polls=200 cursor_changes=%u maximum_control_wait_ms=%.3f original_DSP_active=true\n",changes,(double)maximum_wait/1000000.0);
    printf("PLATFORM_CONTRACT passed=%u failed=0 audio_callback_frames=%llu physical_buttons_tested=false game_audio_tested=false\n",passed,(unsigned long long)nhl07_audio_callback_frames());
    free(ram);return 0;
}
