/* Native PCM / Xbox ADPCM voices. Callers serialize API calls and rendering.
   NHL 07 object ABI: 6BC4BC/6BBE44, 6BE09B returns base+1C, vtable=83C1F0. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "recomp_types.h"
#include "native_voice.h"
extern uint32_t xbox_HeapAlloc(uint32_t,uint32_t);
extern void xbox_HeapFree(uint32_t);
extern int nhl07_decode_xbox_adpcm(const uint8_t *,unsigned,unsigned,int16_t *);
typedef struct Voice {
    uint32_t object,refs,data,owned_data,bytes,flags,rate,loop_begin,loop_bytes,play_begin,play_bytes;
    uint16_t format,channels,align,bits;
    float volume,pitch,headroom,gain[32];
    uint8_t bins[8];unsigned bin_count;
    double frame;
    int playing,paused,looping;
    uint32_t cached_block;
    uint8_t compressed[72];int16_t decoded[128];
} Voice;
static Voice voices[256];
#define BAD_PARAM 0x88780032u
static void *guest(uint32_t address,unsigned bytes) {
    uint32_t canonical=address>=0x80000000?address-0x80000000:address;
    if(canonical<0x10000||(uint64_t)canonical+bytes>0x4000000){fprintf(stderr,"[NHL07-VOICE] invalid buffer=%08X bytes=%u\n",address,bytes);abort();}
    return (void *)(g_xbox_mem_offset+(uintptr_t)address);
}
static float gain(int32_t millibels){return millibels<=-10000?0:powf(10.f,millibels/2000.f);}
static uint32_t frames(const Voice *v){return v->format==0x69?v->bytes/v->align*64:v->bytes/v->align;}
static double byte_frame(const Voice *v,uint32_t bytes){return v->format==0x69?(double)(bytes/v->align)*64:(double)bytes/v->align;}
static uint32_t frame_byte(const Voice *v){return v->format==0x69?(uint32_t)v->frame/64*v->align:(uint32_t)v->frame*v->align;}
static uint32_t format(Voice *v,uint32_t p) {
    if(!p)return BAD_PARAM;guest(p,16);
    uint16_t tag=MEM16(p),channels=MEM16(p+2),align=MEM16(p+12),bits=MEM16(p+14);uint32_t rate=MEM32(p+4);
    if(channels<1||channels>6||rate<100||rate>200000)return BAD_PARAM;
    if(tag==1){if((bits!=8&&bits!=16)||align!=channels*(bits/8))return BAD_PARAM;}
    else if(tag==0x69){if(channels>2||bits!=4||align!=36*channels)return BAD_PARAM;}
    else {fprintf(stderr,"[NHL07-AUDIO-MISSING] voice format tag=%04X\n",tag);abort();}
    v->format=tag;v->channels=channels;v->align=align;v->bits=bits;v->rate=rate;v->cached_block=0xffffffffu;return 0;
}
static uint32_t mixbins(Voice *v,uint32_t p,int volumes_only) {
    if(!p)return BAD_PARAM;guest(p,8);unsigned n=MEM32(p);uint32_t pairs=MEM32(p+4);
    if(n>8||(n&&!pairs))return BAD_PARAM;if(n)guest(pairs,n*8);
    for(unsigned i=0;i<n;i++)if(MEM32(pairs+i*8)>=32||(int32_t)MEM32(pairs+i*8+4)>0)return BAD_PARAM;
    if(!volumes_only){memset(v->gain,0,sizeof(v->gain));v->bin_count=n;}
    for(unsigned i=0;i<n;i++){unsigned bin=MEM32(pairs+i*8);v->gain[bin]=gain((int32_t)MEM32(pairs+i*8+4));if(!volumes_only)v->bins[i]=bin;}
    return 0;
}
uint32_t nhl07_voice_create(uint32_t descriptor,uint32_t out,uint32_t parent) {
    if(!descriptor||!out)return BAD_PARAM;guest(descriptor,24);*(uint32_t *)guest(out,4)=0;
    Voice v={0};v.volume=v.pitch=v.headroom=1;v.gain[0]=v.gain[1]=1;v.bins[0]=0;v.bins[1]=1;v.bin_count=2;
    v.refs=1;v.flags=MEM32(descriptor+4);v.bytes=MEM32(descriptor+8);
    if(v.flags){fprintf(stderr,"[NHL07-AUDIO-MISSING] buffer creation flags=%08X\n",v.flags);abort();}
    uint32_t hr=format(&v,MEM32(descriptor+12));if(hr){fprintf(stderr,"[NHL07-VOICE] creation rejected: format=%08X result=%08X\n",MEM32(descriptor+12),hr);return hr;}
    if(v.bytes%v.align)return BAD_PARAM;
    if(MEM32(descriptor+16)){hr=mixbins(&v,MEM32(descriptor+16),0);if(hr)return hr;}
    unsigned index=0;while(index<256&&voices[index].object)index++;if(index==256)return 0x8007000eu;
    v.object=xbox_HeapAlloc(0x24,16);if(!v.object)return 0x8007000eu;
    memset(guest(v.object,0x24),0,0x24);MEM32(v.object)=0x83c1f0;MEM32(v.object+4)=1;MEM32(v.object+8)=parent;
    if(v.bytes){v.data=v.owned_data=xbox_HeapAlloc(v.bytes,16);if(!v.data){xbox_HeapFree(v.object);return 0x8007000eu;}memset(guest(v.data,v.bytes),0,v.bytes);}
    voices[index]=v;MEM32(out)=v.object+0x1c;
    if(index<3||v.channels>2)fprintf(stderr,"[NHL07-VOICE] created slot=%u tag=%04X channels=%u rate=%u bytes=%u\n",index,v.format,v.channels,v.rate,v.bytes);
    return 0;
}
int nhl07_voice_handles(NhlAudioApi api) {return api>=NHL_AUDIO_IDirectSoundBuffer_AddRef && api<=NHL_AUDIO_IDirectSoundBuffer_SetEG;}
uint32_t nhl07_voice_call(NhlAudioApi api,const uint32_t *a) {
    Voice *v=NULL;for(unsigned i=0;i<256;i++)if(voices[i].object&&a[0]==voices[i].object+0x1c){v=&voices[i];break;}
    if(!v)return BAD_PARAM;
    switch(api) {
    case NHL_AUDIO_IDirectSoundBuffer_AddRef:MEM32(v->object+4)=++v->refs;return v->refs;
    case NHL_AUDIO_IDirectSoundBuffer_Release:
        if(--v->refs){MEM32(v->object+4)=v->refs;return v->refs;}
        if(v->owned_data)xbox_HeapFree(v->owned_data);xbox_HeapFree(v->object);memset(v,0,sizeof(*v));return 0;
    case NHL_AUDIO_IDirectSoundBuffer_SetFormat:
        if(v->playing)return BAD_PARAM;return format(v,a[1]);
    case NHL_AUDIO_IDirectSoundBuffer_SetBufferData:
        if((a[2]&&(!a[1]||a[2]%v->align))||(!a[2]&&a[1]))return BAD_PARAM;
        if(a[2])guest(a[1],a[2]);if(v->owned_data&&v->owned_data!=a[1]){xbox_HeapFree(v->owned_data);v->owned_data=0;}
        v->data=a[1];v->bytes=a[2];v->frame=0;v->loop_begin=v->loop_bytes=v->play_begin=v->play_bytes=0;
        v->playing=v->paused=0;v->cached_block=0xffffffffu;return 0;
    case NHL_AUDIO_IDirectSoundBuffer_Play:
        if(a[1]||a[2]||(a[3]&~3u)||!v->data||!v->bytes)return BAD_PARAM;
        if(a[3]&2)v->frame=byte_frame(v,v->play_begin);v->playing=1;v->paused=0;v->looping=(a[3]&1)!=0;
        fprintf(stderr,"[NHL07-VOICE] play object=%08X bytes=%u flags=%X\n",v->object,v->bytes,a[3]);return 0;
    case NHL_AUDIO_IDirectSoundBuffer_Stop:v->playing=v->paused=0;return 0;
    case NHL_AUDIO_IDirectSoundBuffer_Pause:if(a[1]>1)return BAD_PARAM;v->paused=a[1]!=0;return 0;
    case NHL_AUDIO_IDirectSoundBuffer_GetStatus:
        *(uint32_t *)guest(a[1],4)=(v->playing&&!v->paused?1:0)|(v->paused?2:0)|(v->playing&&v->looping?4:0);return 0;
    case NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition:
        if(v->channels==6){static unsigned polls;if(++polls<=3||polls%100==0)fprintf(stderr,"[NHL07-VOICE] surround cursor poll=%u byte=%u playing=%d\n",polls,frame_byte(v),v->playing);}
        if(a[1])*(uint32_t *)guest(a[1],4)=frame_byte(v);
        if(a[2])*(uint32_t *)guest(a[2],4)=v->bytes?(frame_byte(v)+v->align*2)%v->bytes:0;return 0;
    case NHL_AUDIO_IDirectSoundBuffer_SetCurrentPosition:
        if(a[1]>=v->bytes)return BAD_PARAM;v->frame=byte_frame(v,a[1]);return 0;
    case NHL_AUDIO_IDirectSoundBuffer_SetPitch:
        if((int32_t)a[1]<-32768||(int32_t)a[1]>32767)return BAD_PARAM;v->pitch=powf(2.f,(int32_t)a[1]/4096.f);return 0;
    case NHL_AUDIO_IDirectSoundBuffer_SetFrequency:
        if(a[1]&&(a[1]<100||a[1]>200000))return BAD_PARAM;v->pitch=a[1]?(float)a[1]/v->rate:1;return 0;
    case NHL_AUDIO_IDirectSoundBuffer_SetVolume:
        if((int32_t)a[1]>0||(int32_t)a[1]<-10000)return BAD_PARAM;v->volume=gain((int32_t)a[1]);return 0;
    case NHL_AUDIO_IDirectSoundBuffer_SetHeadroom:
        if(a[1]>10000)return BAD_PARAM;v->headroom=gain(-(int32_t)a[1]);return 0;
    case NHL_AUDIO_IDirectSoundBuffer_SetMixBins:return mixbins(v,a[1],0);
    case NHL_AUDIO_IDirectSoundBuffer_SetMixBinVolumes:return mixbins(v,a[1],1);
    case NHL_AUDIO_IDirectSoundBuffer_SetLoopRegion:
    case NHL_AUDIO_IDirectSoundBuffer_SetPlayRegion:
        if(a[1]>v->bytes||a[2]>v->bytes-a[1]||a[1]%v->align||a[2]%v->align)return BAD_PARAM;
        if(api==NHL_AUDIO_IDirectSoundBuffer_SetLoopRegion){v->loop_begin=a[1];v->loop_bytes=a[2];}
        else {v->play_begin=a[1];v->play_bytes=a[2];}return 0;
    case NHL_AUDIO_IDirectSoundBuffer_Lock: {
        if(!v->data||!v->bytes||!a[3]||!a[4]||(a[7]&~3u))return BAD_PARAM;
        uint32_t at=(a[7]&1)?frame_byte(v):a[1],length=(a[7]&2)?v->bytes:a[2];
        if(at>=v->bytes||length>v->bytes)return BAD_PARAM;uint32_t first=length<v->bytes-at?length:v->bytes-at;
        *(uint32_t *)guest(a[3],4)=v->data+at;*(uint32_t *)guest(a[4],4)=first;
        if(a[5])*(uint32_t *)guest(a[5],4)=length>first?v->data:0;
        if(a[6])*(uint32_t *)guest(a[6],4)=length-first;return 0;
    }
    case NHL_AUDIO_IDirectSoundBuffer_Unlock:return 0; /* Original 6B8EB7 is XOR EAX,EAX; RET 20. */
    case NHL_AUDIO_IDirectSoundBuffer_SetEG: {
        const uint32_t *p=guest(a[1],40);
        if(p[0]==1&&p[1]==2&&!p[2]&&!p[3]&&!p[4]&&!p[5]&&!p[6]&&p[7]==255&&!p[8]&&!p[9])return 0;
        fprintf(stderr,"[NHL07-AUDIO-MISSING] non-neutral amplitude envelope\n");abort();
    }
    default:fprintf(stderr,"[NHL07-AUDIO-MISSING] voice API=%u\n",api);abort();
    }
}
static float sample(Voice *v,unsigned frame,unsigned channel) {
    if(frame>=frames(v))return 0;channel%=v->channels;
    if(v->format==0x69) {
        unsigned block=frame/64;const uint8_t *p=guest(v->data+block*v->align,v->align);
        if(v->cached_block!=block||memcmp(v->compressed,p,v->align)) {
            memcpy(v->compressed,p,v->align);
            if(!nhl07_decode_xbox_adpcm(p,v->align,v->channels,v->decoded)){fprintf(stderr,"[NHL07-VOICE] invalid Xbox ADPCM block\n");abort();}
            v->cached_block=block;
        }
        return v->decoded[(frame%64)*v->channels+channel]/32768.f;
    }
    const uint8_t *p=guest(v->data,v->bytes);unsigned at=frame*v->channels+channel;
    if(v->bits==8)return (p[at]-128)/128.f;int16_t value;memcpy(&value,p+at*2,2);return value/32768.f;
}
unsigned nhl07_voice_mix(float bins[32][32]) {
    memset(bins,0,32*32*sizeof(float));unsigned active=0;
    for(unsigned i=0;i<256;i++) {
        Voice *v=&voices[i];if(!v->object||!v->playing||v->paused||!v->data||!v->bytes)continue;active++;
        double begin=byte_frame(v,v->loop_begin),loop=byte_frame(v,v->loop_bytes?v->loop_bytes:v->bytes-v->loop_begin);
        double end=byte_frame(v,v->play_begin+(v->play_bytes?v->play_bytes:v->bytes-v->play_begin));
        for(unsigned f=0;f<32;f++) {
            if(v->looping&&loop>0&&v->frame>=begin+loop)v->frame=begin+fmod(v->frame-begin,loop);
            if(v->frame>=end){v->playing=0;break;}
            unsigned frame=(unsigned)v->frame,next=frame+1;float fraction=(float)(v->frame-frame),values[6];
            if(v->looping&&loop>0&&next>=begin+loop)next=(unsigned)begin;
            for(unsigned ch=0;ch<v->channels;ch++){float a=sample(v,frame,ch);values[ch]=a+(sample(v,next,ch)-a)*fraction;}
            for(unsigned b=0;b<v->bin_count;b++){unsigned bin=v->bins[b];bins[bin][f]+=values[b%v->channels]*v->volume*v->headroom*v->gain[bin];}
            v->frame+=(double)v->rate*v->pitch/48000;
        }
        /* A control query can run between mixes. Publish the wrapped cursor
           now, including an exact loop end after the final output sample. */
        if(v->looping&&loop>0&&v->frame>=begin+loop)v->frame=begin+fmod(v->frame-begin,loop);
        if(!v->looping&&v->frame>=end)v->playing=0;
    }
    return active;
}
