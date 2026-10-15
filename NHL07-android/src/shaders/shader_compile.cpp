/* HLSL -> SPIR-V -> GLSL ES; the resulting shaders run on the Android GPU. */
#include "shader_compile.h"

#include <glslang/Public/ResourceLimits.h>
#include <glslang/Public/ShaderLang.h>
#include <SPIRV/GlslangToSpv.h>
#include <spirv_glsl.hpp>
#include <mutex>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <stdexcept>
namespace {
std::once_flag initialized;
std::string convert(glslang::TIntermediate *input,bool vertex,NativeProgram &out) {
    std::vector<uint32_t> code;glslang::SpvOptions options;options.disableOptimizer=true;
    glslang::GlslangToSpv(*input,code,&options);
    spirv_cross::CompilerGLSL compiler(std::move(code));auto resources=compiler.get_shader_resources();
    // The road is drawn in multiple material passes. Position arithmetic must
    // remain invariant between programs, including after the GLES clip fixup.
    if(vertex)for(auto &builtin:resources.builtin_outputs)if(builtin.builtin==spv::BuiltInPosition){
        auto &type=compiler.get_type(builtin.resource.base_type_id);
        if(type.basetype==spirv_cross::SPIRType::Struct){
            for(unsigned member=0;member<type.member_types.size();++member)
                if(compiler.has_member_decoration(type.self,member,spv::DecorationBuiltIn)&&compiler.get_member_decoration(type.self,member,spv::DecorationBuiltIn)==spv::BuiltInPosition)
                    compiler.set_member_decoration(type.self,member,spv::DecorationInvariant);
        }else compiler.set_decoration(builtin.resource.id,spv::DecorationInvariant);
    }
    for(auto &block:resources.uniform_buffers) {
        unsigned binding=compiler.get_decoration(block.id,spv::DecorationBinding);
        compiler.set_name(block.id,"native_constants_"+std::to_string(binding));
        compiler.set_name(block.base_type_id,"NativeBlock_"+std::to_string(binding));
    }
    for(auto &variable:vertex?resources.stage_outputs:resources.stage_inputs) {
        unsigned location=compiler.get_decoration(variable.id,spv::DecorationLocation);
        compiler.set_name(variable.id,"native_varying_"+std::to_string(location));
        // Link the two stages by their common varying names. Explicit varying
        // locations conflict with transform-feedback-only outputs on Adreno
        // when the fragment program does not consume any of these values.
        // Attribute and fragment-color locations remain explicit; only the
        // inter-stage interface uses ordinary GLES name-based allocation.
        compiler.unset_decoration(variable.id,spv::DecorationLocation);
        compiler.unset_decoration(variable.id,spv::DecorationComponent);
    }
    if(vertex) for(auto &variable:resources.stage_inputs) {
        std::string name=variable.name;auto at=name.find_last_of('v');
        unsigned reg=at==std::string::npos?0u:(unsigned)std::strtoul(name.c_str()+at+1,nullptr,10);
        compiler.set_name(variable.id,"native_attribute_"+std::to_string(reg));
        out.inputs.push_back({reg,-1});
    }
    compiler.build_combined_image_samplers();
    for(auto &sample:compiler.get_combined_image_samplers()) {
        std::string image=compiler.get_name(sample.image_id);
        compiler.set_name(sample.combined_id,"native_sampler_"+image);
    }
    GLint major=0,minor=0;glGetIntegerv(GL_MAJOR_VERSION,&major);glGetIntegerv(GL_MINOR_VERSION,&minor);
    spirv_cross::CompilerGLSL::Options opts;opts.version=major>3||major==3&&minor>=2?320:300;opts.es=true;
    opts.enable_420pack_extension=false;opts.vertex.fixup_clipspace=true;opts.vertex.flip_vert_y=false;
    opts.fragment.default_float_precision=spirv_cross::CompilerGLSL::Options::Highp;
    opts.fragment.default_int_precision=spirv_cross::CompilerGLSL::Options::Highp;
    compiler.set_common_options(opts);auto source=compiler.compile();
    if(vertex&&source.find("invariant gl_Position;")==std::string::npos)
        throw std::runtime_error("Vertex position invariance was not emitted");
    return source;
}
GLuint compile(GLenum type,const std::string &source,std::string &error) {
    GLuint shader=glCreateShader(type);const char *p=source.c_str();glShaderSource(shader,1,&p,nullptr);glCompileShader(shader);
    GLint okay=0;glGetShaderiv(shader,GL_COMPILE_STATUS,&okay);
    if(!okay) {GLint length=0;glGetShaderiv(shader,GL_INFO_LOG_LENGTH,&length);error.resize(std::max(1,length));glGetShaderInfoLog(shader,length,nullptr,error.data());error+="\n"+source;glDeleteShader(shader);return 0;}
    return shader;
}
}
bool nhl07_compile_program(const std::string &vs,const std::string &ps,NativeProgram &out,std::string &error) {
    std::call_once(initialized,[]{glslang::InitializeProcess();});out={};
    glslang::TShader vertex(EShLangVertex),fragment(EShLangFragment);
    const char *texts[]={vs.c_str(),ps.c_str()};unsigned index=0;
    for(auto *shader:{&vertex,&fragment}) {
        shader->setStrings(&texts[index++],1);shader->setEntryPoint("main");shader->setSourceEntryPoint("main");
        auto stage=shader==&vertex?EShLangVertex:EShLangFragment;
        shader->setEnvInput(glslang::EShSourceHlsl,stage,glslang::EShClientVulkan,100);
        shader->setEnvClient(glslang::EShClientVulkan,glslang::EShTargetVulkan_1_0);
        shader->setEnvTarget(glslang::EShTargetSpv,glslang::EShTargetSpv_1_0);
        shader->setAutoMapBindings(true);shader->setAutoMapLocations(true);shader->setShiftSamplerBinding(32);
        if(!shader->parse(GetDefaultResources(),100,false,(EShMessages)(EShMsgReadHlsl|EShMsgSpvRules|EShMsgVulkanRules))) {error=shader->getInfoLog();return false;}
    }
    glslang::TProgram program;program.addShader(&vertex);program.addShader(&fragment);
    if(!program.link((EShMessages)(EShMsgSpvRules|EShMsgVulkanRules)) || !program.mapIO()) {error=program.getInfoLog();return false;}
    try {
        auto v=convert(program.getIntermediate(EShLangVertex),true,out),p=convert(program.getIntermediate(EShLangFragment),false,out);
        static unsigned dump_id=0;unsigned dump=++dump_id;
        for(auto pair:{std::make_pair("vs.hlsl",vs),std::make_pair("ps.hlsl",ps),std::make_pair("vs.glsl",v),std::make_pair("ps.glsl",p)}) {
            std::string path=std::string(std::getenv("NHL07_DIAGNOSTIC_DIR")?std::getenv("NHL07_DIAGNOSTIC_DIR"):".")+"/pipeline-"+std::to_string(dump)+"."+pair.first;
            if(FILE *file=std::fopen(path.c_str(),"wb")){std::fwrite(pair.second.data(),1,pair.second.size(),file);std::fclose(file);}
        }
        GLuint a=compile(GL_VERTEX_SHADER,v,error),b=compile(GL_FRAGMENT_SHADER,p,error);
        if(!a || !b) {if(a)glDeleteShader(a);if(b)glDeleteShader(b);return false;}
        out.program=glCreateProgram();glAttachShader(out.program,a);glAttachShader(out.program,b);
        const char *feedback[]={"gl_Position","native_varying_0","native_varying_2"};glTransformFeedbackVaryings(out.program,3,feedback,GL_INTERLEAVED_ATTRIBS);
        glLinkProgram(out.program);glDeleteShader(a);glDeleteShader(b);
        GLint okay=0;glGetProgramiv(out.program,GL_LINK_STATUS,&okay);
        if(!okay) {GLint length;glGetProgramiv(out.program,GL_INFO_LOG_LENGTH,&length);error.resize(std::max(1,length));glGetProgramInfoLog(out.program,length,nullptr,error.data());return false;}
        for(auto &attribute:out.inputs) {attribute.location=glGetAttribLocation(out.program,("native_attribute_"+std::to_string(attribute.reg)).c_str());std::fprintf(stderr,"[GLES-INPUT] pipeline=%u reg=%u location=%d\n",dump,attribute.reg,attribute.location);}
        for(unsigned i=0;i<4;++i) {auto name="NativeBlock_"+std::to_string(i);GLuint block=glGetUniformBlockIndex(out.program,name.c_str());if(block!=GL_INVALID_INDEX)glUniformBlockBinding(out.program,block,i);}
        glUseProgram(out.program);
        for(unsigned i=0;i<4;++i) {auto name="native_sampler_tex"+std::to_string(i);GLint location=glGetUniformLocation(out.program,name.c_str());if(location>=0)glUniform1i(location,i);}
        return true;
    } catch(const std::exception &exception) {error=exception.what();return false;}
}
