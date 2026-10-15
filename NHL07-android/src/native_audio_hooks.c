#include "recomp_types.h"
#include "native_audio.h"
void sub_006BE9AE(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    g_eax=nhl07_audio_call(NHL_AUDIO_DirectSoundCreate,args);
    g_esp+=16;
}
void sub_006B8E8B(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_AddRef,args);
    g_esp+=8;
}
void sub_006B8EA1(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_Release,args);
    g_esp+=8;
}
void sub_006BB1BD(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_SetMixBinHeadroom,args);
    g_esp+=16;
}
void sub_006BB111(void) {
    uint32_t args[5]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    args[4]=MEM32(g_esp+20);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_DownloadEffectsImage,args);
    g_esp+=24;
}
void sub_006BE7E8(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_SetI3DL2Listener,args);
    g_esp+=16;
}
void sub_006BB15F(void) {
    uint32_t args[6]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    args[4]=MEM32(g_esp+20);
    args[5]=MEM32(g_esp+24);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_SetEffectData,args);
    g_esp+=28;
}
void sub_006BB138(void) {
    uint32_t args[5]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    args[4]=MEM32(g_esp+20);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_GetEffectData,args);
    g_esp+=24;
}
void sub_006BB189(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_CommitEffectData,args);
    g_esp+=8;
}
void sub_006BE083(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_CommitDeferredSettings,args);
    g_esp+=8;
}
void sub_006BE660(void) {
    uint32_t args[4]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSound_CreateSoundBuffer,args);
    g_esp+=20;
}
void sub_006BE9F5(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_DirectSoundCreateBuffer,args);
    g_esp+=12;
}
void sub_006BB5D9(void) {
    uint32_t args[1]={0};
    g_eax=nhl07_audio_call(NHL_AUDIO_DirectSoundDoWork,args);
    g_esp+=4;
}
void sub_006B8F19(void) {
    uint32_t args[1]={0};
    g_eax=nhl07_audio_call(NHL_AUDIO_DirectSoundGetSampleTime,args);
    g_esp+=4;
}
void sub_006B8EC1(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_AddRef,args);
    g_esp+=8;
}
void sub_006B8ED7(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Release,args);
    g_esp+=8;
}
void sub_006BB363(void) {
    uint32_t args[4]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Play,args);
    g_esp+=20;
}
void sub_006BB3AB(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Stop,args);
    g_esp+=8;
}
void sub_006BB3E7(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Pause,args);
    g_esp+=12;
}
void sub_006BB447(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_GetStatus,args);
    g_esp+=12;
}
void sub_006BB463(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,args);
    g_esp+=16;
}
void sub_006BB483(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetCurrentPosition,args);
    g_esp+=12;
}
void sub_006BDB7D(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetBufferData,args);
    g_esp+=16;
}
void sub_006BDB61(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetFormat,args);
    g_esp+=12;
}
void sub_006BB2BB(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetPitch,args);
    g_esp+=12;
}
void sub_006BD165(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetFrequency,args);
    g_esp+=12;
}
void sub_006BB29F(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetVolume,args);
    g_esp+=12;
}
void sub_006BB32B(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetHeadroom,args);
    g_esp+=12;
}
void sub_006BD19D(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetMixBins,args);
    g_esp+=12;
}
void sub_006BB347(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetMixBinVolumes,args);
    g_esp+=12;
}
void sub_006BB427(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetLoopRegion,args);
    g_esp+=16;
}
void sub_006BD3D4(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetPlayRegion,args);
    g_esp+=16;
}
void sub_006BB49F(void) {
    uint32_t args[8]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    args[4]=MEM32(g_esp+20);
    args[5]=MEM32(g_esp+24);
    args[6]=MEM32(g_esp+28);
    args[7]=MEM32(g_esp+32);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Lock,args);
    g_esp+=36;
}
void sub_006B8EB7(void) {
    uint32_t args[5]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    args[4]=MEM32(g_esp+20);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_Unlock,args);
    g_esp+=24;
}
void sub_006BB2F3(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_audio_call(NHL_AUDIO_IDirectSoundBuffer_SetEG,args);
    g_esp+=12;
}
