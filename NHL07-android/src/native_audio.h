#pragma once
#include <stdint.h>
typedef enum {
 NHL_AUDIO_DirectSoundCreate,
 NHL_AUDIO_IDirectSound_AddRef,
 NHL_AUDIO_IDirectSound_Release,
 NHL_AUDIO_IDirectSound_SetMixBinHeadroom,
 NHL_AUDIO_IDirectSound_DownloadEffectsImage,
 NHL_AUDIO_IDirectSound_SetI3DL2Listener,
 NHL_AUDIO_IDirectSound_SetEffectData,
 NHL_AUDIO_IDirectSound_GetEffectData,
 NHL_AUDIO_IDirectSound_CommitEffectData,
 NHL_AUDIO_IDirectSound_CommitDeferredSettings,
 NHL_AUDIO_IDirectSound_CreateSoundBuffer,
 NHL_AUDIO_DirectSoundCreateBuffer,
 NHL_AUDIO_DirectSoundDoWork,
 NHL_AUDIO_DirectSoundGetSampleTime,
 NHL_AUDIO_IDirectSoundBuffer_AddRef,
 NHL_AUDIO_IDirectSoundBuffer_Release,
 NHL_AUDIO_IDirectSoundBuffer_Play,
 NHL_AUDIO_IDirectSoundBuffer_Stop,
 NHL_AUDIO_IDirectSoundBuffer_Pause,
 NHL_AUDIO_IDirectSoundBuffer_GetStatus,
 NHL_AUDIO_IDirectSoundBuffer_GetCurrentPosition,
 NHL_AUDIO_IDirectSoundBuffer_SetCurrentPosition,
 NHL_AUDIO_IDirectSoundBuffer_SetBufferData,
 NHL_AUDIO_IDirectSoundBuffer_SetFormat,
 NHL_AUDIO_IDirectSoundBuffer_SetPitch,
 NHL_AUDIO_IDirectSoundBuffer_SetFrequency,
 NHL_AUDIO_IDirectSoundBuffer_SetVolume,
 NHL_AUDIO_IDirectSoundBuffer_SetHeadroom,
 NHL_AUDIO_IDirectSoundBuffer_SetMixBins,
 NHL_AUDIO_IDirectSoundBuffer_SetMixBinVolumes,
 NHL_AUDIO_IDirectSoundBuffer_SetLoopRegion,
 NHL_AUDIO_IDirectSoundBuffer_SetPlayRegion,
 NHL_AUDIO_IDirectSoundBuffer_Lock,
 NHL_AUDIO_IDirectSoundBuffer_Unlock,
 NHL_AUDIO_IDirectSoundBuffer_SetEG,
} NhlAudioApi;
uint32_t nhl07_audio_call(NhlAudioApi api,const uint32_t *args);
uint32_t nhl07_audio_open(void);
void nhl07_audio_close(void);
void nhl07_audio_resume(void);
uint64_t nhl07_audio_callback_frames(void);
int nhl07_audio_callback_tid(void);
