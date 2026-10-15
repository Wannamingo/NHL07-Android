#include "scaled_upload.h"
#include <array>

namespace {
GLuint scratch_fbo,scratch_texture;
}
void nhl07_scaled_upload_clear(){
    if(scratch_fbo)glDeleteFramebuffers(1,&scratch_fbo);
    if(scratch_texture)glDeleteTextures(1,&scratch_texture);
    scratch_fbo=scratch_texture=0;
}
bool nhl07_scaled_upload(GLuint target_fbo,GLuint target_texture,GLenum internal_format,
        unsigned width,unsigned height,unsigned scale,GLenum format,GLenum type,const void *pixels){
    bool valid_format=(internal_format==GL_RGBA8&&format==GL_RGBA&&type==GL_UNSIGNED_BYTE)||
        (internal_format==GL_RGB8&&format==GL_RGB&&type==GL_UNSIGNED_BYTE)||
        (internal_format==GL_RGB565&&format==GL_RGB&&type==GL_UNSIGNED_SHORT_5_6_5);
    if(!target_fbo||!target_texture||!pixels||!width||!height||width>4096||height>4096||scale<1||scale>3||!valid_format)return false;
    if(glGetError()!=GL_NO_ERROR)return false;
    GLint unpack_alignment,unpack_row,unpack_skip_rows,unpack_skip_pixels,unpack_buffer,draw_count;
    glGetIntegerv(GL_UNPACK_ALIGNMENT,&unpack_alignment);glGetIntegerv(GL_UNPACK_ROW_LENGTH,&unpack_row);
    glGetIntegerv(GL_UNPACK_SKIP_ROWS,&unpack_skip_rows);glGetIntegerv(GL_UNPACK_SKIP_PIXELS,&unpack_skip_pixels);
    glGetIntegerv(GL_PIXEL_UNPACK_BUFFER_BINDING,&unpack_buffer);glGetIntegerv(GL_MAX_DRAW_BUFFERS,&draw_count);
    if(draw_count<1||draw_count>32||glGetError()!=GL_NO_ERROR)return false;
    GLboolean scissor=glIsEnabled(GL_SCISSOR_TEST);
    std::array<GLenum,32> draw_buffers{};
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER,target_fbo);
    for(GLint i=0;i<draw_count;i++){GLint buffer;glGetIntegerv(GL_DRAW_BUFFER0+i,&buffer);draw_buffers[i]=GLenum(buffer);}
    auto finish=[&](bool okay){
        glBindFramebuffer(GL_FRAMEBUFFER,target_fbo);glDrawBuffers(draw_count,draw_buffers.data());
        glBindTexture(GL_TEXTURE_2D,target_texture);
        glPixelStorei(GL_UNPACK_ALIGNMENT,unpack_alignment);glPixelStorei(GL_UNPACK_ROW_LENGTH,unpack_row);
        glPixelStorei(GL_UNPACK_SKIP_ROWS,unpack_skip_rows);glPixelStorei(GL_UNPACK_SKIP_PIXELS,unpack_skip_pixels);
        glBindBuffer(GL_PIXEL_UNPACK_BUFFER,GLuint(unpack_buffer));
        if(scissor)glEnable(GL_SCISSOR_TEST);else glDisable(GL_SCISSOR_TEST);
        return glGetError()==GL_NO_ERROR&&okay;
    };
    glBindBuffer(GL_PIXEL_UNPACK_BUFFER,0);glPixelStorei(GL_UNPACK_ALIGNMENT,1);
    glPixelStorei(GL_UNPACK_ROW_LENGTH,0);glPixelStorei(GL_UNPACK_SKIP_ROWS,0);glPixelStorei(GL_UNPACK_SKIP_PIXELS,0);
    glBindTexture(GL_TEXTURE_2D,target_texture);
    glTexImage2D(GL_TEXTURE_2D,0,internal_format,width*scale,height*scale,0,format,type,scale==1?pixels:nullptr);
    glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,target_texture,0);
    GLenum color=GL_COLOR_ATTACHMENT0;glDrawBuffers(1,&color);
    if(glGetError()!=GL_NO_ERROR||glCheckFramebufferStatus(GL_DRAW_FRAMEBUFFER)!=GL_FRAMEBUFFER_COMPLETE)return finish(false);
    if(scale==1)return finish(true);
    if(!scratch_fbo)glGenFramebuffers(1,&scratch_fbo);
    if(!scratch_texture)glGenTextures(1,&scratch_texture);
    glBindTexture(GL_TEXTURE_2D,scratch_texture);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    // Re-specifying storage permits the driver to orphan a source still used
    // by an earlier queued blit, rather than requiring a CPU-side wait.
    glTexImage2D(GL_TEXTURE_2D,0,internal_format,width,height,0,format,type,pixels);
    glBindFramebuffer(GL_READ_FRAMEBUFFER,scratch_fbo);
    glFramebufferTexture2D(GL_READ_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,scratch_texture,0);glReadBuffer(GL_COLOR_ATTACHMENT0);
    if(glGetError()!=GL_NO_ERROR||glCheckFramebufferStatus(GL_READ_FRAMEBUFFER)!=GL_FRAMEBUFFER_COMPLETE)return finish(false);
    // Source and destination have identical bit depths, avoiding additional
    // format conversion/rounding. Integer upscales reproduce whole texels.
    glDisable(GL_SCISSOR_TEST);
    glBlitFramebuffer(0,0,width,height,0,0,width*scale,height*scale,GL_COLOR_BUFFER_BIT,GL_NEAREST);
    bool okay=glGetError()==GL_NO_ERROR;return finish(okay);
}
