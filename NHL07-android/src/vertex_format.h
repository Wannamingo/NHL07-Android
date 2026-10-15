#pragma once
#include <GLES3/gl3.h>
#include <cstdint>
struct Nhl07VertexFormat {
    unsigned components,scalar_bytes,element_bytes,stride;
    GLenum type;GLboolean normalized;bool bgra;
};
inline bool nhl07_vertex_format(uint32_t word,Nhl07VertexFormat &out){
    Nhl07VertexFormat f{};unsigned kind=word&15;
    f.components=(word>>4)&15;f.stride=word>>8;
    if(f.components<1||f.components>4||!f.stride||f.stride>4096)return false;
    switch(kind){
        case 0:case 4:f.type=GL_UNSIGNED_BYTE;f.scalar_bytes=1;f.normalized=GL_TRUE;f.bgra=kind==0;break;
        case 1:f.type=GL_SHORT;f.scalar_bytes=2;f.normalized=GL_TRUE;break;
        case 2:f.type=GL_FLOAT;f.scalar_bytes=4;f.normalized=GL_FALSE;break;
        case 5:f.type=GL_SHORT;f.scalar_bytes=2;f.normalized=GL_FALSE;break;
        default:return false;
    }
    f.element_bytes=f.components*f.scalar_bytes;out=f;return true;
}
