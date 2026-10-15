/* Native voice contract tests: deterministic PCM, Xbox block framing and state.
   These render to memory, without playing synthetic test sounds on the device. */
#include "recomp_types.h"
#include "native_voice.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
ptrdiff_t g_xbox_mem_offset;
uint32_t xbox_HeapAlloc(uint32_t bytes,uint32_t alignment){static uint32_t next=0x100000;uint32_t p=(next+alignment-1)&~(alignment-1);next=p+bytes;return p;}
void xbox_HeapFree(uint32_t address){(void)address;}
int nhl07_decode_xbox_adpcm(const uint8_t *,unsigned,unsigned,int16_t *);
static unsigned checks;
#define CHECK(x) do{if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);return 1;}checks++;}while(0)
static uint32_t call(NhlAudioApi api,uint32_t voice,uint32_t b,uint32_t c,uint32_t d) {uint32_t a[8]={voice,b,c,d};return nhl07_voice_call(api,a);}
static void descriptor(uint32_t tag) {
    MEM16(0x20000)=tag;MEM16(0x20002)=1;MEM32(0x20004)=48000;
    MEM16(0x2000c)=tag==1?2:36;MEM16(0x2000e)=tag==1?16:4;
    MEM32(0x2100c)=0x20000;
}
int main(void) {
    void *ram=calloc(1,0x4000000);if(!ram)return 2;g_xbox_mem_offset=(ptrdiff_t)ram;
    descriptor(1);CHECK(nhl07_voice_create(0x21000,0x22000,0)==0);uint32_t pcm=MEM32(0x22000);
    for(unsigned i=0;i<64;i++)MEM16(0x30000+i*2)=(i&1)?-4096:4096;
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetBufferData,pcm,0x30000,128,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Play,pcm,0,0,2)==0);float bins[32][32];CHECK(nhl07_voice_mix(bins)==1);
    for(unsigned i=0;i<32;i++){CHECK(bins[0][i]==((i&1)?-.125f:.125f));CHECK(bins[1][i]==bins[0][i]);}
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,pcm,0x22000,0,0)==0 && MEM32(0x22000)==64);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Pause,pcm,1,0,0)==0);CHECK(nhl07_voice_mix(bins)==0 && bins[0][0]==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Pause,pcm,0,0,0)==0);CHECK(nhl07_voice_mix(bins)==1);
    call(NHL_AUDIO_IDirectSoundBuffer_GetStatus,pcm,0x22000,0,0);CHECK(MEM32(0x22000)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetLoopRegion,pcm,32,64,0)==0);CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetCurrentPosition,pcm,32,0,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Play,pcm,0,0,1)==0);
    for(unsigned block=0;block<3;block++) {
        CHECK(nhl07_voice_mix(bins)==1);
        for(unsigned i=0;i<32;i++)CHECK(bins[0][i]==((i&1)?-.125f:.125f));
        CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,pcm,0x22000,0x22004,0)==0);
        CHECK(MEM32(0x22000)==32 && MEM32(0x22004)==36); /* Exact loop end returns loop begin. */
    }
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetLoopRegion,pcm,0,0,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetCurrentPosition,pcm,0,0,0)==0);
    for(unsigned block=0;block<4;block++) {
        CHECK(nhl07_voice_mix(bins)==1);
        CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,pcm,0x22000,0x22004,0)==0);
        unsigned cursor=((block+1)*32%64)*2;
        CHECK(MEM32(0x22000)==cursor && MEM32(0x22004)==(cursor+4)%128);
    }
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetFrequency,pcm,96000,0,0)==0);
    CHECK(nhl07_voice_mix(bins)==1);
    for(unsigned i=0;i<32;i++)CHECK(bins[0][i]==.125f);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,pcm,0x22000,0x22004,0)==0);
    CHECK(MEM32(0x22000)==0 && MEM32(0x22004)==4); /* A complete loop in one mix. */
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetFrequency,pcm,72000,0,0)==0);
    for(unsigned block=0;block<4;block++) {
        CHECK(nhl07_voice_mix(bins)==1);
        for(unsigned i=0;i<32;i++) {
            unsigned twice=((block*32+i)*3)%128;
            float expected=(twice&1)?0:(((twice/2)&1)?-.125f:.125f);
            CHECK(bins[0][i]==expected); /* Fractional position survives each wrap. */
        }
        CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,pcm,0x22000,0x22004,0)==0);
        unsigned cursor=((block+1)*48%64)*2;
        CHECK(MEM32(0x22000)==cursor && MEM32(0x22004)==(cursor+4)%128);
    }
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetFrequency,pcm,0,0,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetVolume,pcm,(uint32_t)-10000,0,0)==0);CHECK(nhl07_voice_mix(bins)==1 && bins[0][0]==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Stop,pcm,0,0,0)==0);CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Release,pcm,0,0,0)==0);
    descriptor(0x69);CHECK(nhl07_voice_create(0x21000,0x22000,0)==0);uint32_t adpcm=MEM32(0x22000);
    uint8_t *data=(uint8_t *)ram+0x30000;memset(data,0x33,36);data[0]=0xe8;data[1]=3;data[2]=data[3]=0;
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetBufferData,adpcm,0x30000,36,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Play,adpcm,0,0,2)==0);
    for(unsigned block=0;block<2;block++){CHECK(nhl07_voice_mix(bins)==1);for(unsigned i=0;i<32;i++)CHECK(bins[0][i]==(1000+(block*32+i)*4)/32768.f);}
    call(NHL_AUDIO_IDirectSoundBuffer_GetStatus,adpcm,0x22000,0,0);CHECK(MEM32(0x22000)==0);
    int16_t decoded[128];uint8_t stereo[72];memset(stereo,0,sizeof(stereo));stereo[0]=0x18;stereo[1]=0xfc;stereo[4]=0xe8;stereo[5]=3;
    for(unsigned i=0;i<8;i++){memset(stereo+8+i*8,0x33,4);memset(stereo+12+i*8,0xbb,4);}
    CHECK(nhl07_decode_xbox_adpcm(stereo,72,2,decoded));
    for(unsigned i=0;i<64;i++){CHECK(decoded[i*2]==-1000+(int)i*4);CHECK(decoded[i*2+1]==1000-(int)i*4);}
    stereo[2]=89;CHECK(!nhl07_decode_xbox_adpcm(stereo,72,2,decoded));stereo[2]=0;stereo[3]=1;CHECK(!nhl07_decode_xbox_adpcm(stereo,72,2,decoded));
    CHECK(!nhl07_decode_xbox_adpcm(stereo,71,2,decoded));CHECK(!nhl07_decode_xbox_adpcm(stereo,72,3,decoded));
    memcpy(data+36,data,36);data[36]=0x18;data[37]=0xfc;
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetBufferData,adpcm,0x30000,72,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Play,adpcm,0,0,1)==0);
    for(unsigned block=0;block<8;block++) {
        CHECK(nhl07_voice_mix(bins)==1);
        unsigned start=(block*32)%128;
        for(unsigned i=0;i<32;i++) {
            unsigned at=start+i;int value=(at<64?1000:-1000)+(int)(at%64)*4;
            CHECK(bins[0][i]==value/32768.f);
        }
        CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,adpcm,0x22000,0,0)==0);
        CHECK(MEM32(0x22000)==((block+1)*32%128)/64*36);
    }
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetLoopRegion,adpcm,36,36,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetCurrentPosition,adpcm,36,0,0)==0);
    for(unsigned block=0;block<4;block++) {
        CHECK(nhl07_voice_mix(bins)==1);
        for(unsigned i=0;i<32;i++)CHECK(bins[0][i]==(-1000+(int)((block*32+i)%64)*4)/32768.f);
        CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,adpcm,0x22000,0,0)==0);
        CHECK(MEM32(0x22000)==36); /* Partial ADPCM blocks report their block start. */
    }
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Release,adpcm,0,0,0)==0);
    descriptor(1);MEM16(0x20002)=6;MEM16(0x2000c)=12;
    MEM32(0x23000)=6;MEM32(0x23004)=0x23008;MEM32(0x21010)=0x23000;
    for(unsigned ch=0;ch<6;ch++){MEM32(0x23008+ch*8)=ch;MEM32(0x2300c+ch*8)=0;}
    CHECK(nhl07_voice_create(0x21000,0x22000,0)==0);uint32_t surround=MEM32(0x22000);
    for(unsigned i=0;i<64;i++)for(unsigned ch=0;ch<6;ch++)MEM16(0x30000+(i*6+ch)*2)=(ch+1)*1024+i;
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetBufferData,surround,0x30000,64*12,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Play,surround,0,0,1)==0);CHECK(nhl07_voice_mix(bins)==1);
    for(unsigned ch=0;ch<6;ch++)for(unsigned i=0;i<32;i++)CHECK(bins[ch][i]==((ch+1)*1024+i)/32768.f);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,surround,0x22000,0x22004,0)==0);
    CHECK(MEM32(0x22000)==32*12 && MEM32(0x22004)==34*12);
    /* Reproduce the game's 28,800-byte / 2,400-frame six-channel stream ring. */
    for(unsigned i=0;i<2400;i++)for(unsigned ch=0;ch<6;ch++)MEM16(0x30000+(i*6+ch)*2)=(ch+1)*1024+(i%64);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_SetBufferData,surround,0x30000,28800,0)==0);
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Play,surround,0,0,1)==0);
    for(unsigned block=0;block<151;block++) {
        CHECK(nhl07_voice_mix(bins)==1);
        for(unsigned ch=0;ch<6;ch++)for(unsigned i=0;i<32;i++)
            CHECK(bins[ch][i]==((ch+1)*1024+((block*32+i)%2400)%64)/32768.f);
        CHECK(call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,surround,0x22000,0x22004,0)==0);
        unsigned cursor=((block+1)*32%2400)*12;
        CHECK(MEM32(0x22000)==cursor && MEM32(0x22004)==(cursor+24)%28800);
    }
    CHECK(call(NHL_AUDIO_IDirectSoundBuffer_Release,surround,0,0,0)==0);
    printf("VOICE_CONTRACT passed=%u failed=0 synthetic_audio_played=false\n",checks);free(ram);return 0;
}
