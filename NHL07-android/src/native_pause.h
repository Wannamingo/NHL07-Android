#pragma once
#include <stdint.h>
void nhl07_pause_set(int value);
int nhl07_pause_active(void);
void nhl07_pause_wait(void);
/* The pause loop services renderer-owned surface-release requests every50ms. */
uint64_t nhl07_game_time_ns(void);
