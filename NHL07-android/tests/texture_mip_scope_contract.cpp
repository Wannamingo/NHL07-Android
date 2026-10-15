/* Production texture cache with an explicit GL storage adapter, not a GPU test.
   All guest bytes are mutable between binds, including within one draw tag. */
#include "texture_cache.h"
#include "render_profile.h"
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>

namespace {
struct Image {unsigned width=0,height=0;std::vector<uint8_t> bytes;};
struct Object {std::map<unsigned,Image> levels;};
std::map<GLuint,Object> objects;
std::array<GLuint,4> bindings{};
GLuint next_object=1;
unsigned active_stage=0,checks=0;
uint64_t profile_compare_bytes=0;
void verify(bool okay,const char *name){
    if(!okay){std::fprintf(stderr,"TEXTURE_MIP_SCOPE FAIL %s\n",name);std::exit(1);}++checks;
}
std::vector<Image> reference(const RecompD3dTextureDesc &description,const std::vector<uint8_t> &raw,
        const void *palette,size_t palette_bytes,std::vector<size_t> *spans=nullptr){
    auto desc=description;size_t offset=0;std::vector<Image> result;
    for(unsigned level=0;level<description.mip_levels;level++){
        size_t consumed=0;Image image;image.width=desc.width;image.height=desc.height;
        verify(recomp_texture_rgba(desc,raw.data()+offset,raw.size()-offset,palette,palette_bytes,image.bytes,consumed),"independent decode succeeds");
        result.push_back(std::move(image));if(spans)spans->push_back(consumed);
        offset+=consumed;desc.width=std::max(1u,desc.width/2);desc.height=std::max(1u,desc.height/2);
    }
    return result;
}
void image_equals(GLuint object,unsigned level,const Image &expected){
    verify(objects.count(object)==1,"GPU adapter object exists");
    auto &levels=objects.at(object).levels;verify(levels.count(level)==1,"GPU adapter level exists");
    const auto &actual=levels.at(level);
    verify(actual.width==expected.width&&actual.height==expected.height&&actual.bytes==expected.bytes,"uploaded level equals current independent decode");
}
void whole_equals(GLuint object,const std::vector<Image> &expected){
    for(unsigned level=0;level<expected.size();level++)image_equals(object,level,expected[level]);
}
}

extern "C" {
void GL_APIENTRY glDeleteTextures(GLsizei count,const GLuint *textures){for(GLsizei i=0;i<count;i++)objects.erase(textures[i]);}
void GL_APIENTRY glGenTextures(GLsizei count,GLuint *textures){for(GLsizei i=0;i<count;i++){textures[i]=next_object++;objects[textures[i]]={};}}
void GL_APIENTRY glActiveTexture(GLenum texture){active_stage=texture-GL_TEXTURE0;verify(active_stage<4,"stage bounds");}
void GL_APIENTRY glBindTexture(GLenum target,GLuint texture){verify(target==GL_TEXTURE_2D,"2D target");bindings[active_stage]=texture;}
void GL_APIENTRY glTexImage2D(GLenum target,GLint level,GLint internal,GLsizei width,GLsizei height,
        GLint border,GLenum format,GLenum type,const void *data){
    verify(target==GL_TEXTURE_2D&&internal==GL_RGBA8&&format==GL_RGBA&&type==GL_UNSIGNED_BYTE&&!border,"RGBA upload contract");
    verify(width>0&&height>0&&data&&objects.count(bindings[active_stage]),"valid upload storage");
    auto &image=objects[bindings[active_stage]].levels[level];image.width=width;image.height=height;
    image.bytes.assign(static_cast<const uint8_t *>(data),static_cast<const uint8_t *>(data)+size_t(width)*height*4);
}
void GL_APIENTRY glTexParameteri(GLenum target,GLenum name,GLint value){verify(target==GL_TEXTURE_2D&&name==GL_TEXTURE_MAX_LEVEL&&value>=0,"only max level is modified; base remains zero");}
GLenum GL_APIENTRY glGetError(void){return GL_NO_ERROR;}
uint64_t nhl07_profile_begin(void){return 0;}
void nhl07_profile_end(unsigned,uint64_t){}
void nhl07_profile_bytes(unsigned stage,uint64_t bytes){verify(stage==NHL07_PROFILE_COMPARE,"texture comparison profile stage");profile_compare_bytes+=bytes;}
}

int main(){
    uint64_t skipped_total=0;
    const unsigned formats[]={0x05,0x06,0x0b,0x0c,0x0e,0x0f,0x11,0x12,0x24,0x25};
    for(unsigned format:formats){
        Nhl07TextureCache cache;
        RecompD3dTextureDesc desc{};desc.data=0x10000+format*0x1000;desc.format_byte=format;
        desc.width=desc.height=8;desc.mip_levels=(format==0x24||format==0x25)?1:4;
        desc.linear=format==0x11||format==0x12||format==0x24||format==0x25;
        desc.pitch=desc.linear?8*((format==0x12)?4:2)+8:0; // Includes ignored row padding.
        std::array<uint32_t,256> palette{};
        for(unsigned i=0;i<palette.size();i++)palette[i]=0xff000000u|i*0x010101u;
        const void *palette_pointer=format==0x0b?palette.data():nullptr;
        const size_t palette_bytes=format==0x0b?sizeof(palette):0;
        std::vector<uint8_t> raw(65536);
        for(size_t i=0;i<raw.size();i++)raw[i]=uint8_t(i*73+format*13);
        std::vector<size_t> spans;auto expected=reference(desc,raw,palette_pointer,palette_bytes,&spans);
        size_t total=0;for(size_t span:spans)total+=span;raw.resize(total);
        GLuint object=0;
        verify(cache.bind(0,desc,raw.data(),raw.size(),palette_pointer,palette_bytes,1,object),"initial full upload");
        whole_equals(object,expected);
        const GLuint initial=object;
        const auto uploads=cache.stats().uploads;
        const auto compared=cache.stats().compared_bytes;
        verify(cache.bind(1,desc,raw.data(),raw.size(),palette_pointer,palette_bytes,1,object,nullptr,true),"base-only initial hit");
        verify(object==initial&&cache.stats().uploads==uploads,"same object reused across stages");
        verify(cache.stats().compared_bytes-compared==spans[0]+palette_bytes,"exactly base span plus full palette requested");
        verify(cache.stats().skipped_mip_bytes==total-spans[0],"exact lower mip span accounted");
        // Every source byte is mutated, including the final byte of the final
        // mip. One shared draw tag deliberately never grants source freshness.
        for(size_t offset=0;offset<raw.size();offset++){
            const auto before=cache.stats().uploads;
            const auto previous=expected;
            raw[offset]^=0xa5;
            expected=reference(desc,raw,palette_pointer,palette_bytes);
            verify(cache.bind(2,desc,raw.data(),raw.size(),palette_pointer,palette_bytes,1,object,nullptr,true),"base-only mutable bind");
            image_equals(object,0,expected[0]);
            if(offset>=spans[0]){
                verify(cache.stats().uploads==before,"lower-only mutation causes no base-mode upload");
                // Snapshot and GPU lower levels retain the previous upload,
                // rather than pretending skipped bytes have been validated.
                for(unsigned level=1;level<desc.mip_levels;level++)image_equals(object,level,previous[level]);
            }
            verify(cache.bind(3,desc,raw.data(),raw.size(),palette_pointer,palette_bytes,1,object),"mipmap mode revalidates entire mutable chain");
            whole_equals(object,expected);
            if(offset>=spans[0])verify(cache.stats().uploads==before+desc.mip_levels,"mipmap mode detects lower-only change after base hit");
            raw[offset]^=0xa5;
            expected=reference(desc,raw,palette_pointer,palette_bytes);
            verify(cache.bind(0,desc,raw.data(),raw.size(),palette_pointer,palette_bytes,1,object),"restoring bytes detected on same draw tag");
            whole_equals(object,expected);
        }
        // A shorter span is rejected even when all potentially sampled base
        // bytes fit; validation may never hide an invalid full guest resource.
        verify(!cache.bind(0,desc,raw.data(),spans[0]-1,palette_pointer,palette_bytes,2,object,nullptr,true),"truncated base rejected");
        if(desc.mip_levels>1)verify(!cache.bind(0,desc,raw.data(),raw.size()-1,palette_pointer,palette_bytes,2,object,nullptr,true),"truncated lower mip rejected in base-only mode");
        whole_equals(object,expected);
        if(palette_pointer){
            for(size_t byte=0;byte<sizeof(palette);byte++){
                auto *p=reinterpret_cast<uint8_t *>(palette.data());p[byte]^=0x5a;
                expected=reference(desc,raw,palette_pointer,palette_bytes);
                const auto before=cache.stats().uploads;
                verify(cache.bind(0,desc,raw.data(),raw.size(),palette_pointer,palette_bytes,3,object,nullptr,true),"palette mutation checked in base-only mode");
                verify(cache.stats().uploads==before+desc.mip_levels,"all palette bytes remain checked");whole_equals(object,expected);
            }
            verify(!cache.bind(0,desc,raw.data(),raw.size(),palette_pointer,12,4,object,nullptr,true),"truncated palette rejected");
            whole_equals(object,expected);
        }
        if(desc.mip_levels>1){
            auto shorter=desc;shorter.mip_levels=1;GLuint separate=0;
            verify(cache.bind(1,shorter,raw.data(),raw.size(),palette_pointer,palette_bytes,4,separate,nullptr,true),"different mip count accepted as separate key");
            verify(separate!=object,"same address and base with different mip count cannot share validation snapshot");
            image_equals(separate,0,expected[0]);
            verify(cache.bind(0,desc,raw.data(),raw.size(),palette_pointer,palette_bytes,4,object),"full chain remains valid after one-level alias binding");
            whole_equals(object,expected);
        }
        skipped_total+=cache.stats().skipped_mip_bytes;
        cache.clear();verify(!cache.stats().resident_bytes,"cache clear accounts all retained snapshots");
        // Clear and recreation must not inherit a stale base-span proof.
        verify(cache.bind(0,desc,raw.data(),raw.size(),palette_pointer,palette_bytes,1,object,nullptr,true),"base-only first binding after clear uploads full chain");
        whole_equals(object,expected);cache.clear();
    }
    verify(objects.empty(),"all adapter GL objects deleted");
    std::printf("TEXTURE_MIP_SCOPE passed=%u failed=0 skipped_mip_bytes=%llu profile_compare_bytes=%llu\n",checks,
        static_cast<unsigned long long>(skipped_total),static_cast<unsigned long long>(profile_compare_bytes));
    return 0;
}
