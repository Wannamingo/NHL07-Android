"""Copy generic, previously audited shader/texture utilities; source project stays read-only."""
from pathlib import Path
import hashlib,json,shutil,subprocess,sys
root=Path(__file__).resolve().parents[1]
source=root.with_name('NFSU-android')
names=['native_shader_types.h','d3d8_vsh.h','d3d8_combiners.h','shader_vertex.c','shader_pixel.c',
       'shader_compile.h','shader_compile.cpp','texture_rgba.cpp','texture_rgba.h','d3d_texture_model.c','d3d_texture_model.h']
records=[]
target=root/'src/shaders';target.mkdir(exist_ok=True)
for name in names:
    path=source/'src'/name;data=path.read_bytes()
    text=data.decode().replace('\r\n','\n')
    if name in ['shader_compile.h','shader_compile.cpp']:
        text=text.replace('nfs_compile_program','nhl07_compile_program').replace('#include <SDL3/SDL.h>','')
        text=text.replace('std::string(SDL_GetAndroidInternalStoragePath())+"/logs/pipeline-"',
                          'std::string(std::getenv("NHL07_DIAGNOSTIC_DIR")?std::getenv("NHL07_DIAGNOSTIC_DIR"):".")+"/pipeline-"')
        text=text.replace('opts.vertex.flip_vert_y=true','opts.vertex.flip_vert_y=false')
        if name=='shader_compile.cpp':
            text=text.replace('glLinkProgram(out.program);',
                'const char *feedback[]={"gl_Position","native_varying_0","native_varying_2"};glTransformFeedbackVaryings(out.program,3,feedback,GL_INTERLEAVED_ATTRIBS);\n        glLinkProgram(out.program);')
    if name=='shader_pixel.c':
        begin=text.index('    /* Opt-in material diagnostics;')
        end=text.index('    /* Temporary registers:',begin)
        text=text[:begin]+text[end:]
    (target/name).write_text(text,encoding='utf-8')
    records.append({'source':str(path),'sha256':hashlib.sha256(data).hexdigest(),'destination':str(target/name)})
# Headers only: libraries are separately built ARM64 archives, no SDL or game assets.
for name in ['glslang','spirv-cross','shader-libs']:
    destination=root/'deps'/name
    shutil.copytree(source/'deps'/name,destination,dirs_exist_ok=True)
    for path in destination.rglob('*'):
        if path.is_file(): records.append({'dependency':str(path.relative_to(root)),'sha256':hashlib.sha256(path.read_bytes()).hexdigest()})
(root/'analysis/shader-support-provenance.json').write_text(json.dumps(records,indent=2))
print('Imported generic shader/texture support:',len(records),'files')
subprocess.run([sys.executable,str(root/'tools/apply_rgb565_texture.py')],check=True)
subprocess.run([sys.executable,str(root/'tools/apply_yuv_texture.py')],check=True)
