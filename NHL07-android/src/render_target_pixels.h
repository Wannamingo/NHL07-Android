#pragma once
#include "shaders/d3d_texture_model.h"
#include <cstddef>
#include <cstdint>
/* Store RGBA8 rows into the real guest layout. bottom_up describes GL
   readback order; padding and unrelated mip levels remain untouched. */
bool nhl07_store_render_target(const RecompD3dTextureDesc &desc,
    const uint8_t *rgba,size_t rgba_bytes,size_t rgba_pitch,bool bottom_up,
    void *destination,size_t destination_bytes);
