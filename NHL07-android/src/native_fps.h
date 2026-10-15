#pragma once
#include <stdint.h>
void nhl07_fps_reset(void);
void nhl07_fps_present_at(uint64_t now);
float nhl07_fps_get_at(uint64_t now);
uint64_t nhl07_monotonic_ns(void);
void nhl07_fps_present(void);
float nhl07_fps_get(void);
