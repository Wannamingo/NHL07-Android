"""Run the actual native FBO/writeback/depth implementation on RG477M."""
from pathlib import Path
import argparse,hashlib,json,struct,re,subprocess
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/target-gpu-validation';build.mkdir(parents=True,exist_ok=True)
xbe=(game/'input/default.xbe').read_bytes();assert hashlib.sha256(xbe).hexdigest()==config['xbe_sha256']
section=next(s for s in json.loads((game/'analysis/xbe.json').read_text())['sections'] if int(s['virtual_addr'],16)<=0x776820<int(s['virtual_addr'],16)+s['raw_size'])
offset=int(section['raw_addr'],16)+0x776820-int(section['virtual_addr'],16)
fixture=build/'format-descriptors.bin';fixture.write_bytes(xbe[offset:offset+256])
sources=[root/'tests/render_targets_gpu_contract.cpp',root/'src/render_targets.cpp',root/'src/render_profile.cpp',root/'src/render_target_pixels.cpp',root/'src/shaders/texture_rgba.cpp',root/'src/shaders/d3d_texture_model.c',root/'src/scaled_upload.cpp']
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'target_gpu_arm64'
def run(command):
    r=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
    assert r.returncode==0,r.stdout[-5000:]+r.stderr[-5000:]
    return r.stdout+r.stderr
run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),'-I'+str(game/'src/recomp/gen'),*sources,'-static-libstdc++','-lEGL','-lGLESv3','-lm','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465'
for p in [binary,fixture]:run(prefix+['push',p,remote+'/'+p.name])
run(prefix+['shell','chmod','700',remote+'/'+binary.name])
execution=subprocess.run(prefix+['shell',remote+'/'+binary.name,remote+'/'+fixture.name],capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
output=execution.stdout+execution.stderr
(root/'logs/target-gpu-validation.log').write_text(output,encoding='utf-8');m=re.search(r'TARGET_GPU passed=(\d+) failed=0',output)
assert execution.returncode==0 and m,output[-6000:]
renderer=next(line for line in output.splitlines() if line.startswith('TARGET_GPU renderer='));print(renderer);print(m[0])
(root/'analysis/render-target-validation.json').write_text(json.dumps({'serial':args.serial,'passed':int(m[1]),'failed':0,'renderer':renderer,
    'scope':['Actual native FBO color attachments: six A8/X8/RGB565 swizzled/linear formats, real original-XBE descriptor bytes','Logical row orientation, asymmetric scissored clears, guest writeback and rebinding the saved texture','Untouched padding/guards and presentation color attachment','Shared presentation D24S8 top-left region retained, depth-tested and stencil-tested; small scissor must not clip attachment blits','On-demand presentation-surface texture readback, asymmetric rows and BGRA packing, both framebuffer bindings restored while offscreen target remains active','Unchanged presentation avoids redundant readback; offscreen draws do not dirty presentation; changed presentation publishes fresh pixels','Baseline and optional dirty-color cache: repeated flush restores GPU-owned guest pixels after CPU edits, preserves current CPU row padding, retains invalidation and depth-only changes; later color writes publish fresh pixels','Default CPU downsample versus optional GPU downsample: exact bytes for distinct native pixel patterns including alpha, RGB565/RGB8/RGBA8, scales 1/2/3, five growing/shrinking dimensions, scissor on/off','GPU downsample preserves distinct read/draw framebuffer bindings, renderbuffer and texture bindings, viewport, color masks, buffer selections and source/destination pixels; existing scaled presentation/depth-alias paths run with both toggle values','Actual create_offscreen integration: all six guest formats at 2x/3x, depth aliases on/off and both downsample modes compare every native GPU pixel and guest writeback between CPU replication and optional GPU upsample; guest source/padding/guards, presentation color, active unit, viewport, scissor and color masks retained'],
    'limitations':['Original XDK SetRenderTarget is an ABI/state dependency double in the GPU isolation test; real game integration is required','Ordinary separate depth surfaces and multisampling remain unsupported','Presentation CPU LockRect access is not covered by the texture-alias synchronization','Exact GPU downsample sampling/conversion is established on this recorded GPU/driver; other devices need the same contract'],
    'tested_sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in sources+[root/'src/render_targets.h',root/'src/render_target_pixels.h',root/'src/render_profile.h',root/'src/scaled_upload.h',Path(__file__)]},
    'format_descriptor_sha256':hashlib.sha256(fixture.read_bytes()).hexdigest()},indent=2))
