#pragma once
#include <GLES3/gl3.h>

// Upload tightly packed, already vertically flipped logical pixels, then
// replicate them into a matching-format native-size color attachment.
// Leaves target_fbo bound for reading/drawing and target_texture bound on the
// unchanged active texture unit. Other caller state is preserved. Scratch
// objects belong to the current context; clear before replacing that context.
bool nhl07_scaled_upload(GLuint target_fbo,GLuint target_texture,GLenum internal_format,
    unsigned width,unsigned height,unsigned scale,GLenum format,GLenum type,const void *pixels);
void nhl07_scaled_upload_clear();
