#pragma once
#include <stdint.h>
#define NHL07_FRAME_PERIOD_NS 16666667ull
void nhl07_frame_pacer_reset(void);
uint64_t nhl07_frame_pacer_wait_at(uint64_t now);
void nhl07_frame_pacer_present_at(uint64_t now);
void nhl07_frame_pacer_wait(void);
