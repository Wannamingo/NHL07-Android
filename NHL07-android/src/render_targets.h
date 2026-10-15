#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
void nhl07_targets_initialize(unsigned framebuffer,unsigned depth_object,unsigned width,unsigned height,uint32_t back,uint32_t depth);
void nhl07_targets_set(uint32_t color,uint32_t depth);
void nhl07_targets_flush(void);
void nhl07_targets_color_changed(void);
void nhl07_targets_prepare_texture(uint32_t address);
void nhl07_targets_configure_scale(unsigned scale);
void nhl07_targets_replace_back(unsigned framebuffer,unsigned depth_object,unsigned scale);
unsigned nhl07_targets_scale(void);
void nhl07_targets_read_pixels(unsigned width,unsigned height,uint8_t *rgba);
unsigned nhl07_targets_framebuffer(void);
unsigned nhl07_targets_width(void);
unsigned nhl07_targets_height(void);
int nhl07_targets_original_state(void);
int nhl07_targets_alpha(void);
int nhl07_targets_rgb565(void);
#ifdef __cplusplus
}
#endif
