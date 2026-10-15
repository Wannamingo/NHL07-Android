/* Production cache with explicit byte storage adapter. No hardware GPU. */
#include "exact_buffer_cache.h"
#include "render_profile.h"
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

namespace {
std::map<GLuint,std::vector<uint8_t>> objects;
GLuint next_object=1,array_binding=0,element_binding=0;
unsigned checks;
uint64_t compare_bytes,upload_bytes,buffer_bytes;
void verify(bool okay,const char *name){if(!okay){std::fprintf(stderr,"EXACT_BUFFER_HOST FAIL %s\n",name);std::exit(1);}++checks;}
GLuint &binding(GLenum target){verify(target==GL_ARRAY_BUFFER||target==GL_ELEMENT_ARRAY_BUFFER,"only owned vertex/index targets");return target==GL_ARRAY_BUFFER?array_binding:element_binding;}
void contents(GLuint object,const void *source,size_t bytes){
    verify(objects.count(object)==1&&objects[object].size()==bytes,"adapter buffer exact size");
    const auto *expected=static_cast<const uint8_t *>(source);
    for(size_t i=0;i<bytes;++i)verify(objects[object][i]==expected[i],"every submitted buffer byte matches current source");
}
}
extern "C" {
void GL_APIENTRY glGenBuffers(GLsizei count,GLuint *buffers){for(GLsizei i=0;i<count;++i){buffers[i]=next_object++;objects[buffers[i]]={};}}
void GL_APIENTRY glDeleteBuffers(GLsizei count,const GLuint *buffers){for(GLsizei i=0;i<count;++i){objects.erase(buffers[i]);if(array_binding==buffers[i])array_binding=0;if(element_binding==buffers[i])element_binding=0;}}
void GL_APIENTRY glBindBuffer(GLenum target,GLuint buffer){verify(!buffer||objects.count(buffer)==1,"bind existing owned buffer");binding(target)=buffer;}
void GL_APIENTRY glBufferData(GLenum target,GLsizeiptr bytes,const void *source,GLenum usage){
    verify(bytes>0&&source&&usage==GL_STREAM_DRAW,"upload preserves original usage and valid bytes");
    auto name=binding(target);verify(objects.count(name)==1,"upload existing bound object");
    const auto *first=static_cast<const uint8_t *>(source);objects[name].assign(first,first+size_t(bytes));
}
uint64_t nhl07_profile_begin(void){return 0;}
void nhl07_profile_end(unsigned,uint64_t){}
void nhl07_profile_bytes(unsigned stage,uint64_t bytes){
    if(stage==NHL07_PROFILE_BUFFER_COMPARE)compare_bytes+=bytes;
    else if(stage==NHL07_PROFILE_BUFFER_UPLOAD)upload_bytes+=bytes;
    else if(stage==NHL07_PROFILE_BUFFERS)buffer_bytes+=bytes;
    else verify(false,"correct upload/compare profile stages");
}
}
int main(){
    Nhl07ExactBufferCache cache;std::array<uint8_t,257> source{};
    for(size_t i=0;i<source.size();++i)source[i]=uint8_t(i*73+1);
    GLuint object=0;cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object),"initial buffer upload");
    const GLuint original=object;contents(object,source.data(),source.size());
    auto uploads=cache.stats().uploads;cache.begin_draw();verify(cache.bind(GL_ELEMENT_ARRAY_BUFFER,source.data(),source.size(),object),"same exact bytes usable as index storage");
    verify(object==original&&cache.stats().uploads==uploads&&element_binding==original,"target-independent hit skips data upload");
    for(size_t changed=0;changed<source.size();++changed){
        source[changed]^=0x80;cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object),"every same-address byte mutation updates");
        verify(object==original&&cache.stats().uploads==++uploads,"changed content reuploads dedicated unpinned buffer");contents(object,source.data(),source.size());
        source[changed]^=0x80;cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object),"restored current bytes reupload");
        verify(cache.stats().uploads==++uploads,"restoration is never a freshness shortcut");contents(object,source.data(),source.size());
    }
    auto relocated=source;cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,relocated.data(),relocated.size(),object)&&object!=original,"same bytes at another pointer get dedicated key");contents(object,relocated.data(),relocated.size());
    cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),32,object)&&object!=original,"shrink is a separate exact size key");contents(object,source.data(),32);
    cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object)&&object==original,"grow restores full-size exact key");contents(object,source.data(),source.size());
    auto before=source;source[128]^=0x20;
    verify(!cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object)&&object==0,"changed already-pinned object must fall back");
    contents(original,before.data(),before.size());
    cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object)&&object==original,"next draw can update formerly pinned object");contents(object,source.data(),source.size());
    verify(cache.stats().snapshot_bytes==cache.stats().gpu_bytes&&cache.stats().snapshot_bytes<=64u*1024u*1024u,"independent CPU/GPU payload budgets maintained");
    cache.clear();verify(objects.empty()&&cache.stats().snapshot_bytes==0&&cache.stats().gpu_bytes==0&&cache.stats().resident_entries==0,"clear deletes owned objects and frees snapshots");
    Nhl07ExactBufferCache tiny(17*12,17);std::array<std::array<uint32_t,3>,18> values{};std::array<GLuint,17> protected_names{};
    tiny.begin_draw();for(unsigned i=0;i<protected_names.size();++i){values[i].fill(i+1);verify(tiny.bind(i==16?GL_ELEMENT_ARRAY_BUFFER:GL_ARRAY_BUFFER,values[i].data(),12,protected_names[i]),"all16attribute andindex objects fit and are pinned");}
    values.back().fill(999);verify(!tiny.bind(GL_ARRAY_BUFFER,values.back().data(),12,object),"over-budget18thbind cannot evict any protected object");
    for(unsigned i=0;i<protected_names.size();++i)contents(protected_names[i],values[i].data(),12);
    verify(tiny.stats().evictions==0&&tiny.stats().pinned_fallbacks==1,"all-pinned pressure retains current draw objects");
    tiny.begin_draw();verify(tiny.bind(GL_ARRAY_BUFFER,values.back().data(),12,object),"next draw permits LRU eviction");
    verify(tiny.stats().evictions==1&&tiny.stats().resident_entries==17&&!objects.count(protected_names[0]),"oldest unpinned object evicted within fixed bounds");tiny.clear();
    Nhl07ExactBufferCache two(1024,2);two.begin_draw();GLuint a,b,c;
    verify(two.bind(GL_ARRAY_BUFFER,values[0].data(),12,a)&&two.bind(GL_ARRAY_BUFFER,values[1].data(),12,b),"entry limit setup");
    two.begin_draw();verify(two.bind(GL_ARRAY_BUFFER,values[0].data(),12,a)&&two.bind(GL_ARRAY_BUFFER,values[2].data(),12,c),"LRU hit updates use order before eviction");
    verify(objects.count(a)&&!objects.count(b)&&objects.count(c)&&two.stats().resident_entries==2,"entry count and LRU bounds both exact");two.clear();
    Nhl07ExactBufferCache disabled(0,0);verify(!disabled.bind(GL_ARRAY_BUFFER,source.data(),1,object),"disabled budgets fall back without uploads");
    verify(!cache.bind(GL_UNIFORM_BUFFER,source.data(),source.size(),object)&&!cache.bind(GL_ARRAY_BUFFER,nullptr,1,object)&&!cache.bind(GL_ARRAY_BUFFER,source.data(),0,object),"invalid target/source/size fall back before reads");
    verify(!cache.bind(GL_ARRAY_BUFFER,source.data(),64u*1024u*1024u+1u,object),"hard maximum rejected without reading source");
    verify(objects.empty(),"explicit cleanup leaves no adapter GL objects");
    verify(upload_bytes==buffer_bytes&&compare_bytes==cache.stats().compared_bytes+tiny.stats().compared_bytes+two.stats().compared_bytes,
        "profiling separates actual uploads from full current-byte comparisons");
    std::printf("EXACT_BUFFER_HOST passed=%u failed=0 mutated_bytes=257 uploaded_bytes=%llu compared_bytes=%llu\n",checks,(unsigned long long)upload_bytes,(unsigned long long)compare_bytes);
}
