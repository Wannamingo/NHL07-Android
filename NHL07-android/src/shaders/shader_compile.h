#pragma once
#include <GLES3/gl3.h>
#include <string>
#include <vector>
struct ShaderInput {unsigned reg;GLint location;};
struct NativeProgram {GLuint program=0;std::vector<ShaderInput> inputs;};
bool nhl07_compile_program(const std::string &vertex,const std::string &pixel,NativeProgram &,std::string &error);
