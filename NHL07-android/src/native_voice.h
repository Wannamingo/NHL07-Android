#pragma once
#include <stdint.h>
#include "native_audio.h"
uint32_t nhl07_voice_create(uint32_t descriptor,uint32_t out,uint32_t parent);
int nhl07_voice_handles(NhlAudioApi api);
uint32_t nhl07_voice_call(NhlAudioApi api,const uint32_t *args);
unsigned nhl07_voice_mix(float bins[32][32]);
