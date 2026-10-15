#ifndef NHL07_NATIVE_GL_DISPATCH_H
#define NHL07_NATIVE_GL_DISPATCH_H

#if !defined(__ANDROID__)
#error "NHL07 native GL dispatch is Android-only"
#endif

// Include original API declarations before defining any call-site remaps.
#include <stddef.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES3/gl3.h>

#define NHL07_GL_DISPATCH_EGL_FUNCTIONS(X) \
    X(eglChooseConfig) \
    X(eglCreateContext) \
    X(eglCreatePbufferSurface) \
    X(eglCreateWindowSurface) \
    X(eglDestroyContext) \
    X(eglDestroySurface) \
    X(eglGetConfigAttrib) \
    X(eglGetDisplay) \
    X(eglGetError) \
    X(eglInitialize) \
    X(eglMakeCurrent) \
    X(eglQueryContext) \
    X(eglQuerySurface) \
    X(eglSwapBuffers) \
    X(eglTerminate)

#define NHL07_GL_DISPATCH_GLES_FUNCTIONS(X) \
    X(glActiveTexture) \
    X(glAttachShader) \
    X(glBeginTransformFeedback) \
    X(glBindBuffer) \
    X(glBindBufferBase) \
    X(glBindFramebuffer) \
    X(glBindRenderbuffer) \
    X(glBindSampler) \
    X(glBindTexture) \
    X(glBindVertexArray) \
    X(glBlendColor) \
    X(glBlendEquation) \
    X(glBlendFunc) \
    X(glBlitFramebuffer) \
    X(glBufferData) \
    X(glCheckFramebufferStatus) \
    X(glClear) \
    X(glClearColor) \
    X(glClearDepthf) \
    X(glClearStencil) \
    X(glClientWaitSync) \
    X(glColorMask) \
    X(glCompileShader) \
    X(glCreateProgram) \
    X(glCreateShader) \
    X(glCullFace) \
    X(glDeleteBuffers) \
    X(glDeleteFramebuffers) \
    X(glDeleteProgram) \
    X(glDeleteRenderbuffers) \
    X(glDeleteShader) \
    X(glDeleteSync) \
    X(glDeleteTextures) \
    X(glDeleteVertexArrays) \
    X(glDepthFunc) \
    X(glDepthMask) \
    X(glDepthRangef) \
    X(glDisable) \
    X(glDisableVertexAttribArray) \
    X(glDrawArrays) \
    X(glDrawBuffers) \
    X(glDrawElements) \
    X(glEnable) \
    X(glEnableVertexAttribArray) \
    X(glEndTransformFeedback) \
    X(glFenceSync) \
    X(glFinish) \
    X(glFramebufferRenderbuffer) \
    X(glFramebufferTexture2D) \
    X(glFrontFace) \
    X(glGenBuffers) \
    X(glGenFramebuffers) \
    X(glGenRenderbuffers) \
    X(glGenSamplers) \
    X(glGenTextures) \
    X(glGenVertexArrays) \
    X(glGetAttribLocation) \
    X(glGetError) \
    X(glGetFramebufferAttachmentParameteriv) \
    X(glGetIntegerv) \
    X(glGetProgramInfoLog) \
    X(glGetProgramiv) \
    X(glGetShaderInfoLog) \
    X(glGetShaderiv) \
    X(glGetString) \
    X(glGetUniformBlockIndex) \
    X(glGetUniformLocation) \
    X(glIsEnabled) \
    X(glLinkProgram) \
    X(glMapBufferRange) \
    X(glPixelStorei) \
    X(glPolygonOffset) \
    X(glReadBuffer) \
    X(glReadPixels) \
    X(glRenderbufferStorage) \
    X(glSamplerParameterf) \
    X(glSamplerParameteri) \
    X(glScissor) \
    X(glShaderSource) \
    X(glStencilFunc) \
    X(glStencilMask) \
    X(glStencilOp) \
    X(glTexImage2D) \
    X(glTexParameteri) \
    X(glTexStorage2D) \
    X(glTransformFeedbackVaryings) \
    X(glUniform1i) \
    X(glUniformBlockBinding) \
    X(glUnmapBuffer) \
    X(glUseProgram) \
    X(glVertexAttribPointer) \
    X(glViewport)

#ifdef __cplusplus
extern "C" {
#endif

// The pointer types come from the NDK declarations, preserving API calling conventions.
typedef struct Nhl07GLDispatchTable {
#define NHL07_GL_DISPATCH_FIELD(name) __typeof__(&name) p_##name;
    NHL07_GL_DISPATCH_EGL_FUNCTIONS(NHL07_GL_DISPATCH_FIELD)
    NHL07_GL_DISPATCH_GLES_FUNCTIONS(NHL07_GL_DISPATCH_FIELD)
#undef NHL07_GL_DISPATCH_FIELD
} Nhl07GLDispatchTable;

enum { NHL07_GL_DISPATCH_EGL_COUNT = 15, NHL07_GL_DISPATCH_GLES_COUNT = 92 };

// Borrowed library handles must stay live while calls through their table may run.
// Bind before the first EGL/GLES call. Return 1 on success, 0 on failure.
// Every symbol is resolved first; failures preserve the previous table.
// A successful bind publishes one immutable table with an atomic release-store.
// This does not migrate existing contexts or GL objects between implementations.
int nhl07_gl_dispatch_bind(void *egl_handle, void *gles_handle, char *error, size_t error_capacity);
extern const Nhl07GLDispatchTable *nhl07_gl_dispatch_active;

static inline const Nhl07GLDispatchTable *nhl07_gl_dispatch_current(void) {
    return __atomic_load_n(&nhl07_gl_dispatch_active, __ATOMIC_ACQUIRE);
}

#ifdef __cplusplus
}
#endif

#ifndef NHL07_GL_DISPATCH_IMPLEMENTATION
// Each call observes a complete EGL/GLES table. There is no direct system GL dispatch.
#define nhl07_p_eglChooseConfig (nhl07_gl_dispatch_current()->p_eglChooseConfig)
#define nhl07_p_eglCreateContext (nhl07_gl_dispatch_current()->p_eglCreateContext)
#define nhl07_p_eglCreatePbufferSurface (nhl07_gl_dispatch_current()->p_eglCreatePbufferSurface)
#define nhl07_p_eglCreateWindowSurface (nhl07_gl_dispatch_current()->p_eglCreateWindowSurface)
#define nhl07_p_eglDestroyContext (nhl07_gl_dispatch_current()->p_eglDestroyContext)
#define nhl07_p_eglDestroySurface (nhl07_gl_dispatch_current()->p_eglDestroySurface)
#define nhl07_p_eglGetConfigAttrib (nhl07_gl_dispatch_current()->p_eglGetConfigAttrib)
#define nhl07_p_eglGetDisplay (nhl07_gl_dispatch_current()->p_eglGetDisplay)
#define nhl07_p_eglGetError (nhl07_gl_dispatch_current()->p_eglGetError)
#define nhl07_p_eglInitialize (nhl07_gl_dispatch_current()->p_eglInitialize)
#define nhl07_p_eglMakeCurrent (nhl07_gl_dispatch_current()->p_eglMakeCurrent)
#define nhl07_p_eglQueryContext (nhl07_gl_dispatch_current()->p_eglQueryContext)
#define nhl07_p_eglQuerySurface (nhl07_gl_dispatch_current()->p_eglQuerySurface)
#define nhl07_p_eglSwapBuffers (nhl07_gl_dispatch_current()->p_eglSwapBuffers)
#define nhl07_p_eglTerminate (nhl07_gl_dispatch_current()->p_eglTerminate)
#define nhl07_p_glActiveTexture (nhl07_gl_dispatch_current()->p_glActiveTexture)
#define nhl07_p_glAttachShader (nhl07_gl_dispatch_current()->p_glAttachShader)
#define nhl07_p_glBeginTransformFeedback (nhl07_gl_dispatch_current()->p_glBeginTransformFeedback)
#define nhl07_p_glBindBuffer (nhl07_gl_dispatch_current()->p_glBindBuffer)
#define nhl07_p_glBindBufferBase (nhl07_gl_dispatch_current()->p_glBindBufferBase)
#define nhl07_p_glBindFramebuffer (nhl07_gl_dispatch_current()->p_glBindFramebuffer)
#define nhl07_p_glBindRenderbuffer (nhl07_gl_dispatch_current()->p_glBindRenderbuffer)
#define nhl07_p_glBindSampler (nhl07_gl_dispatch_current()->p_glBindSampler)
#define nhl07_p_glBindTexture (nhl07_gl_dispatch_current()->p_glBindTexture)
#define nhl07_p_glBindVertexArray (nhl07_gl_dispatch_current()->p_glBindVertexArray)
#define nhl07_p_glBlendColor (nhl07_gl_dispatch_current()->p_glBlendColor)
#define nhl07_p_glBlendEquation (nhl07_gl_dispatch_current()->p_glBlendEquation)
#define nhl07_p_glBlendFunc (nhl07_gl_dispatch_current()->p_glBlendFunc)
#define nhl07_p_glBlitFramebuffer (nhl07_gl_dispatch_current()->p_glBlitFramebuffer)
#define nhl07_p_glBufferData (nhl07_gl_dispatch_current()->p_glBufferData)
#define nhl07_p_glCheckFramebufferStatus (nhl07_gl_dispatch_current()->p_glCheckFramebufferStatus)
#define nhl07_p_glClear (nhl07_gl_dispatch_current()->p_glClear)
#define nhl07_p_glClearColor (nhl07_gl_dispatch_current()->p_glClearColor)
#define nhl07_p_glClearDepthf (nhl07_gl_dispatch_current()->p_glClearDepthf)
#define nhl07_p_glClearStencil (nhl07_gl_dispatch_current()->p_glClearStencil)
#define nhl07_p_glClientWaitSync (nhl07_gl_dispatch_current()->p_glClientWaitSync)
#define nhl07_p_glColorMask (nhl07_gl_dispatch_current()->p_glColorMask)
#define nhl07_p_glCompileShader (nhl07_gl_dispatch_current()->p_glCompileShader)
#define nhl07_p_glCreateProgram (nhl07_gl_dispatch_current()->p_glCreateProgram)
#define nhl07_p_glCreateShader (nhl07_gl_dispatch_current()->p_glCreateShader)
#define nhl07_p_glCullFace (nhl07_gl_dispatch_current()->p_glCullFace)
#define nhl07_p_glDeleteBuffers (nhl07_gl_dispatch_current()->p_glDeleteBuffers)
#define nhl07_p_glDeleteFramebuffers (nhl07_gl_dispatch_current()->p_glDeleteFramebuffers)
#define nhl07_p_glDeleteProgram (nhl07_gl_dispatch_current()->p_glDeleteProgram)
#define nhl07_p_glDeleteRenderbuffers (nhl07_gl_dispatch_current()->p_glDeleteRenderbuffers)
#define nhl07_p_glDeleteShader (nhl07_gl_dispatch_current()->p_glDeleteShader)
#define nhl07_p_glDeleteSync (nhl07_gl_dispatch_current()->p_glDeleteSync)
#define nhl07_p_glDeleteTextures (nhl07_gl_dispatch_current()->p_glDeleteTextures)
#define nhl07_p_glDeleteVertexArrays (nhl07_gl_dispatch_current()->p_glDeleteVertexArrays)
#define nhl07_p_glDepthFunc (nhl07_gl_dispatch_current()->p_glDepthFunc)
#define nhl07_p_glDepthMask (nhl07_gl_dispatch_current()->p_glDepthMask)
#define nhl07_p_glDepthRangef (nhl07_gl_dispatch_current()->p_glDepthRangef)
#define nhl07_p_glDisable (nhl07_gl_dispatch_current()->p_glDisable)
#define nhl07_p_glDisableVertexAttribArray (nhl07_gl_dispatch_current()->p_glDisableVertexAttribArray)
#define nhl07_p_glDrawArrays (nhl07_gl_dispatch_current()->p_glDrawArrays)
#define nhl07_p_glDrawBuffers (nhl07_gl_dispatch_current()->p_glDrawBuffers)
#define nhl07_p_glDrawElements (nhl07_gl_dispatch_current()->p_glDrawElements)
#define nhl07_p_glEnable (nhl07_gl_dispatch_current()->p_glEnable)
#define nhl07_p_glEnableVertexAttribArray (nhl07_gl_dispatch_current()->p_glEnableVertexAttribArray)
#define nhl07_p_glEndTransformFeedback (nhl07_gl_dispatch_current()->p_glEndTransformFeedback)
#define nhl07_p_glFenceSync (nhl07_gl_dispatch_current()->p_glFenceSync)
#define nhl07_p_glFinish (nhl07_gl_dispatch_current()->p_glFinish)
#define nhl07_p_glFramebufferRenderbuffer (nhl07_gl_dispatch_current()->p_glFramebufferRenderbuffer)
#define nhl07_p_glFramebufferTexture2D (nhl07_gl_dispatch_current()->p_glFramebufferTexture2D)
#define nhl07_p_glFrontFace (nhl07_gl_dispatch_current()->p_glFrontFace)
#define nhl07_p_glGenBuffers (nhl07_gl_dispatch_current()->p_glGenBuffers)
#define nhl07_p_glGenFramebuffers (nhl07_gl_dispatch_current()->p_glGenFramebuffers)
#define nhl07_p_glGenRenderbuffers (nhl07_gl_dispatch_current()->p_glGenRenderbuffers)
#define nhl07_p_glGenSamplers (nhl07_gl_dispatch_current()->p_glGenSamplers)
#define nhl07_p_glGenTextures (nhl07_gl_dispatch_current()->p_glGenTextures)
#define nhl07_p_glGenVertexArrays (nhl07_gl_dispatch_current()->p_glGenVertexArrays)
#define nhl07_p_glGetAttribLocation (nhl07_gl_dispatch_current()->p_glGetAttribLocation)
#define nhl07_p_glGetError (nhl07_gl_dispatch_current()->p_glGetError)
#define nhl07_p_glGetFramebufferAttachmentParameteriv (nhl07_gl_dispatch_current()->p_glGetFramebufferAttachmentParameteriv)
#define nhl07_p_glGetIntegerv (nhl07_gl_dispatch_current()->p_glGetIntegerv)
#define nhl07_p_glGetProgramInfoLog (nhl07_gl_dispatch_current()->p_glGetProgramInfoLog)
#define nhl07_p_glGetProgramiv (nhl07_gl_dispatch_current()->p_glGetProgramiv)
#define nhl07_p_glGetShaderInfoLog (nhl07_gl_dispatch_current()->p_glGetShaderInfoLog)
#define nhl07_p_glGetShaderiv (nhl07_gl_dispatch_current()->p_glGetShaderiv)
#define nhl07_p_glGetString (nhl07_gl_dispatch_current()->p_glGetString)
#define nhl07_p_glGetUniformBlockIndex (nhl07_gl_dispatch_current()->p_glGetUniformBlockIndex)
#define nhl07_p_glGetUniformLocation (nhl07_gl_dispatch_current()->p_glGetUniformLocation)
#define nhl07_p_glIsEnabled (nhl07_gl_dispatch_current()->p_glIsEnabled)
#define nhl07_p_glLinkProgram (nhl07_gl_dispatch_current()->p_glLinkProgram)
#define nhl07_p_glMapBufferRange (nhl07_gl_dispatch_current()->p_glMapBufferRange)
#define nhl07_p_glPixelStorei (nhl07_gl_dispatch_current()->p_glPixelStorei)
#define nhl07_p_glPolygonOffset (nhl07_gl_dispatch_current()->p_glPolygonOffset)
#define nhl07_p_glReadBuffer (nhl07_gl_dispatch_current()->p_glReadBuffer)
#define nhl07_p_glReadPixels (nhl07_gl_dispatch_current()->p_glReadPixels)
#define nhl07_p_glRenderbufferStorage (nhl07_gl_dispatch_current()->p_glRenderbufferStorage)
#define nhl07_p_glSamplerParameterf (nhl07_gl_dispatch_current()->p_glSamplerParameterf)
#define nhl07_p_glSamplerParameteri (nhl07_gl_dispatch_current()->p_glSamplerParameteri)
#define nhl07_p_glScissor (nhl07_gl_dispatch_current()->p_glScissor)
#define nhl07_p_glShaderSource (nhl07_gl_dispatch_current()->p_glShaderSource)
#define nhl07_p_glStencilFunc (nhl07_gl_dispatch_current()->p_glStencilFunc)
#define nhl07_p_glStencilMask (nhl07_gl_dispatch_current()->p_glStencilMask)
#define nhl07_p_glStencilOp (nhl07_gl_dispatch_current()->p_glStencilOp)
#define nhl07_p_glTexImage2D (nhl07_gl_dispatch_current()->p_glTexImage2D)
#define nhl07_p_glTexParameteri (nhl07_gl_dispatch_current()->p_glTexParameteri)
#define nhl07_p_glTexStorage2D (nhl07_gl_dispatch_current()->p_glTexStorage2D)
#define nhl07_p_glTransformFeedbackVaryings (nhl07_gl_dispatch_current()->p_glTransformFeedbackVaryings)
#define nhl07_p_glUniform1i (nhl07_gl_dispatch_current()->p_glUniform1i)
#define nhl07_p_glUniformBlockBinding (nhl07_gl_dispatch_current()->p_glUniformBlockBinding)
#define nhl07_p_glUnmapBuffer (nhl07_gl_dispatch_current()->p_glUnmapBuffer)
#define nhl07_p_glUseProgram (nhl07_gl_dispatch_current()->p_glUseProgram)
#define nhl07_p_glVertexAttribPointer (nhl07_gl_dispatch_current()->p_glVertexAttribPointer)
#define nhl07_p_glViewport (nhl07_gl_dispatch_current()->p_glViewport)

// eglGetDisplay is intentionally not remapped: the backend selects its platform display.
#define eglChooseConfig nhl07_p_eglChooseConfig
#define eglCreateContext nhl07_p_eglCreateContext
#define eglCreatePbufferSurface nhl07_p_eglCreatePbufferSurface
#define eglCreateWindowSurface nhl07_p_eglCreateWindowSurface
#define eglDestroyContext nhl07_p_eglDestroyContext
#define eglDestroySurface nhl07_p_eglDestroySurface
#define eglGetConfigAttrib nhl07_p_eglGetConfigAttrib
#define eglGetError nhl07_p_eglGetError
#define eglInitialize nhl07_p_eglInitialize
#define eglMakeCurrent nhl07_p_eglMakeCurrent
#define eglQueryContext nhl07_p_eglQueryContext
#define eglQuerySurface nhl07_p_eglQuerySurface
#define eglSwapBuffers nhl07_p_eglSwapBuffers
#define eglTerminate nhl07_p_eglTerminate
#define glActiveTexture nhl07_p_glActiveTexture
#define glAttachShader nhl07_p_glAttachShader
#define glBeginTransformFeedback nhl07_p_glBeginTransformFeedback
#define glBindBuffer nhl07_p_glBindBuffer
#define glBindBufferBase nhl07_p_glBindBufferBase
#define glBindFramebuffer nhl07_p_glBindFramebuffer
#define glBindRenderbuffer nhl07_p_glBindRenderbuffer
#define glBindSampler nhl07_p_glBindSampler
#define glBindTexture nhl07_p_glBindTexture
#define glBindVertexArray nhl07_p_glBindVertexArray
#define glBlendColor nhl07_p_glBlendColor
#define glBlendEquation nhl07_p_glBlendEquation
#define glBlendFunc nhl07_p_glBlendFunc
#define glBlitFramebuffer nhl07_p_glBlitFramebuffer
#define glBufferData nhl07_p_glBufferData
#define glCheckFramebufferStatus nhl07_p_glCheckFramebufferStatus
#define glClear nhl07_p_glClear
#define glClearColor nhl07_p_glClearColor
#define glClearDepthf nhl07_p_glClearDepthf
#define glClearStencil nhl07_p_glClearStencil
#define glClientWaitSync nhl07_p_glClientWaitSync
#define glColorMask nhl07_p_glColorMask
#define glCompileShader nhl07_p_glCompileShader
#define glCreateProgram nhl07_p_glCreateProgram
#define glCreateShader nhl07_p_glCreateShader
#define glCullFace nhl07_p_glCullFace
#define glDeleteBuffers nhl07_p_glDeleteBuffers
#define glDeleteFramebuffers nhl07_p_glDeleteFramebuffers
#define glDeleteProgram nhl07_p_glDeleteProgram
#define glDeleteRenderbuffers nhl07_p_glDeleteRenderbuffers
#define glDeleteShader nhl07_p_glDeleteShader
#define glDeleteSync nhl07_p_glDeleteSync
#define glDeleteTextures nhl07_p_glDeleteTextures
#define glDeleteVertexArrays nhl07_p_glDeleteVertexArrays
#define glDepthFunc nhl07_p_glDepthFunc
#define glDepthMask nhl07_p_glDepthMask
#define glDepthRangef nhl07_p_glDepthRangef
#define glDisable nhl07_p_glDisable
#define glDisableVertexAttribArray nhl07_p_glDisableVertexAttribArray
#define glDrawArrays nhl07_p_glDrawArrays
#define glDrawBuffers nhl07_p_glDrawBuffers
#define glDrawElements nhl07_p_glDrawElements
#define glEnable nhl07_p_glEnable
#define glEnableVertexAttribArray nhl07_p_glEnableVertexAttribArray
#define glEndTransformFeedback nhl07_p_glEndTransformFeedback
#define glFenceSync nhl07_p_glFenceSync
#define glFinish nhl07_p_glFinish
#define glFramebufferRenderbuffer nhl07_p_glFramebufferRenderbuffer
#define glFramebufferTexture2D nhl07_p_glFramebufferTexture2D
#define glFrontFace nhl07_p_glFrontFace
#define glGenBuffers nhl07_p_glGenBuffers
#define glGenFramebuffers nhl07_p_glGenFramebuffers
#define glGenRenderbuffers nhl07_p_glGenRenderbuffers
#define glGenSamplers nhl07_p_glGenSamplers
#define glGenTextures nhl07_p_glGenTextures
#define glGenVertexArrays nhl07_p_glGenVertexArrays
#define glGetAttribLocation nhl07_p_glGetAttribLocation
#define glGetError nhl07_p_glGetError
#define glGetFramebufferAttachmentParameteriv nhl07_p_glGetFramebufferAttachmentParameteriv
#define glGetIntegerv nhl07_p_glGetIntegerv
#define glGetProgramInfoLog nhl07_p_glGetProgramInfoLog
#define glGetProgramiv nhl07_p_glGetProgramiv
#define glGetShaderInfoLog nhl07_p_glGetShaderInfoLog
#define glGetShaderiv nhl07_p_glGetShaderiv
#define glGetString nhl07_p_glGetString
#define glGetUniformBlockIndex nhl07_p_glGetUniformBlockIndex
#define glGetUniformLocation nhl07_p_glGetUniformLocation
#define glIsEnabled nhl07_p_glIsEnabled
#define glLinkProgram nhl07_p_glLinkProgram
#define glMapBufferRange nhl07_p_glMapBufferRange
#define glPixelStorei nhl07_p_glPixelStorei
#define glPolygonOffset nhl07_p_glPolygonOffset
#define glReadBuffer nhl07_p_glReadBuffer
#define glReadPixels nhl07_p_glReadPixels
#define glRenderbufferStorage nhl07_p_glRenderbufferStorage
#define glSamplerParameterf nhl07_p_glSamplerParameterf
#define glSamplerParameteri nhl07_p_glSamplerParameteri
#define glScissor nhl07_p_glScissor
#define glShaderSource nhl07_p_glShaderSource
#define glStencilFunc nhl07_p_glStencilFunc
#define glStencilMask nhl07_p_glStencilMask
#define glStencilOp nhl07_p_glStencilOp
#define glTexImage2D nhl07_p_glTexImage2D
#define glTexParameteri nhl07_p_glTexParameteri
#define glTexStorage2D nhl07_p_glTexStorage2D
#define glTransformFeedbackVaryings nhl07_p_glTransformFeedbackVaryings
#define glUniform1i nhl07_p_glUniform1i
#define glUniformBlockBinding nhl07_p_glUniformBlockBinding
#define glUnmapBuffer nhl07_p_glUnmapBuffer
#define glUseProgram nhl07_p_glUseProgram
#define glVertexAttribPointer nhl07_p_glVertexAttribPointer
#define glViewport nhl07_p_glViewport
#endif // NHL07_GL_DISPATCH_IMPLEMENTATION

#endif // NHL07_NATIVE_GL_DISPATCH_H

