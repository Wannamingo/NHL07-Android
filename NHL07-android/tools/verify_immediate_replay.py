"""Compare recorded inline attributes with an independent oracle and replay on Mali."""
from pathlib import Path
import argparse,hashlib,json,os,re,struct,subprocess,shutil,sys
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
ap=argparse.ArgumentParser();ap.add_argument('--serial');ap.add_argument('--build-only',action='store_true');args=ap.parse_args()
if not args.build_only and not args.serial:ap.error('--serial required unless --build-only')
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/immediate-validation';build.mkdir(parents=True,exist_ok=True)
env=dict(os.environ,TEMP=str(build),TMP=str(build))
fixture=root/'checkpoints/20261015-inline-capture';results=root/'analysis'
words=struct.unpack('<%dI'%((fixture/'draw-failure-push.bin').stat().st_size//4),(fixture/'draw-failure-push.bin').read_bytes())
attributes=[0.,0.,0.,1.]*16;batches=[];vertices=[];active=None;position=0
def floating(word):return struct.unpack('<f',struct.pack('<I',word))[0]
while position<len(words):
    header=words[position];position+=1;count=(header>>18)&2047;start=header&0x1ffc;assert position+count<=len(words)
    for i in range(count):
        method=start+(0 if header&0x40000000 else i*4);word=words[position];position+=1
        if method==0x17fc:
            if word:assert active is None;active=word;vertices=[]
            else:assert active is not None;batches.append((active,vertices));active=None
        elif active is not None:
            if method in (0x18c8,0x18cc):attributes[36+(method-0x18c8)//4]=floating(word);attributes[38:40]=[0.,1.]
            elif method==0x194c:attributes[12:16]=[((word>>(8*c))&255)/255 for c in range(4)]
            elif 0x1518<=method<=0x1524:
                attributes[(method-0x1518)//4]=floating(word)
                if method==0x1524:vertices.append(tuple(attributes))
            else:raise AssertionError(f'Unexpected captured inline method {method:x}')
assert len(batches)==6 and sum(len(v) for _,v in batches)==352 and active is None
assert all(vertex[15]==0 for _,vertices in batches for vertex in vertices),'Captured text alpha must be zero for this fixture'
oracle=build/'immediate-expected.bin';out=bytearray(struct.pack('<I',len(batches)))
for primitive,vertices in batches:
    out+=struct.pack('<II',primitive,len(vertices))
    for vertex in vertices:out+=struct.pack('<64f',*vertex)
oracle.write_bytes(out)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';backend=root/'vendor/xboxrecomp'
includes=[root/'src',root/'src/shaders',game/'src/recomp/gen',backend/'src',backend/'src/kernel',backend/'include',backend/'src/d3d',root/'deps/glslang',root/'deps/spirv-cross']
flags=['--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-fwrapv','-ffp-contract=off','-fno-strict-aliasing','-DRECOMP_NATIVE_API_ONLY=1']+['-I'+str(p) for p in includes]
def run(command):
    r=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120,env=env)
    assert r.returncode==0,r.stdout[-5000:]+r.stderr[-5000:]
    return r.stdout+r.stderr
c_sources=[root/'src/shaders'/n for n in ['shader_vertex.c','shader_pixel.c','d3d_texture_model.c']];objects=[]
for source in c_sources:
    obj=build/(source.stem+'.o');run([llvm/'bin/clang.exe',*flags,'-c',source,'-o',obj]);objects.append(obj)
test=root/'tests/immediate_replay_contract.cpp';sources=[test,root/'src/shaders/shader_compile.cpp',root/'src/shaders/texture_rgba.cpp',root/'src/texture_cache.cpp',root/'src/render_profile.cpp',root/'src/stream_upload.cpp',root/'src/exact_buffer_cache.cpp']
libraries=[root/'deps/shader-libs'/('lib'+name+'.a') for name in ['glslang','glslang-default-resource-limits','SPIRV','spirv-cross-glsl','spirv-cross-core']]
binary=build/'immediate_arm64';run([llvm/'bin/clang++.exe',*flags,'-std=c++17','-Wl,-z,max-page-size=16384',*sources,*objects,*libraries,'-static-libstdc++','-lEGL','-lGLESv3','-llog','-lm','-o',binary])
if args.build_only:
    print('Built ARM64 immediate renderer contract:',binary)
    sys.exit(0)
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/immediate-validation'
run(prefix+['shell','mkdir','-p',remote]);inputs=[fixture/n for n in ['draw-failure-push.bin','draw-failure-state.bin','draw-failure-ram.bin','draw-failure-physical.bin','draw-failure.json']]+[oracle,binary]
for path in inputs:run(prefix+['push',path,remote+'/'+path.name])
run(prefix+['shell','chmod','700',remote+'/'+binary.name]);metadata=json.loads((fixture/'draw-failure.json').read_text())
captures=['immediate-replay','opaque-immediate-replay','dedup-indexed-transition','dedup-immediate-transition','merged-indexed-interleaved']
mode_records={};outputs=[]
modes={'baseline':(0,0,0,0,0,0,0),'dedup':(1,0,0,0,0,0,0),'stream':(1,1,0,0,0,0,0),'merged':(1,1,1,0,0,0,0),
       'packed':(1,0,0,1,0,0,0),'packed_stream':(1,1,0,1,0,0,0),'packed_merged':(1,1,1,1,0,0,0),
       'shader':(1,0,0,0,1,0,0),'shader_mips':(1,0,0,0,1,1,0),
       'exact_buffer':(1,0,0,0,0,0,1),'shader_buffer':(1,0,0,0,1,0,1)}
folders={name:results/('immediate-'+name) for name in modes}
folders.update(baseline=results/'immediate-dedup-0',dedup=results/'immediate-dedup-1')
for name,(dedup,stream,merge,pack,shader,base_compare,exact_buffer) in modes.items():
    command=prefix+['shell','env','NHL07_DRAW_DEDUP='+str(dedup),'NHL07_STREAM_UPLOAD='+str(stream),'NHL07_MERGE_UPLOAD='+str(merge),'NHL07_PACK_UPLOAD='+str(pack),
        'NHL07_SHADER_PREP_CACHE='+str(shader),'NHL07_TEXTURE_BASE_COMPARE='+str(base_compare),'NHL07_EXACT_BUFFER_CACHE='+str(exact_buffer),remote+'/'+binary.name,remote,str(metadata['program_cursor']),str(metadata['constant_cursor'])]
    result=subprocess.run(command,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120);output=result.stdout+result.stderr
    (root/'logs'/('immediate-replay-'+name+'.log')).write_text(output,encoding='utf-8');outputs.append(output)
    print(output[-2500:]);assert result.returncode==0
    match=re.search(r'IMMEDIATE_REPLAY passed=(\d+) failed=0 batches=(\d+) vertices=(\d+) nonblack=(\d+) opaque_nonblack=(\d+)',output);assert match
    topology=re.search(r'IMMEDIATE_TOPOLOGY calls=(\d+) max_indices=196602 observed_capacity=(\d+)',output);assert topology
    stats=re.search(r'DRAW_DEDUP enabled=(\d+) uniform_uploads=(\d+) uniform_reuses=(\d+) immediate_uploads=(\d+) sampler_updates=(\d+)',output);assert stats and int(stats[1])==dedup
    streaming=re.search(r'DRAW_STREAM enabled=(\d+) merge=(\d+) uploads=(\d+) bytes=(\d+) allocations=(\d+) rotations=(\d+)',output)
    assert streaming and (int(streaming[1]),int(streaming[2]))==(stream,merge)
    packed=re.search(r'DRAW_PACK enabled=(\d+) draws=(\d+) slices=(\d+) bytes=(\d+) fallbacks=(\d+) data_uploads=(\d+)',output)
    assert packed and int(packed[1])==pack and int(packed[5])==0
    preparation=re.search(r'DRAW_SHADER_PREP enabled=(\d+) texture_base_compare=(\d+) vertex_hits=(\d+) vertex_misses=(\d+) preparation_hits=(\d+) preparation_misses=(\d+)',output)
    assert preparation and (int(preparation[1]),int(preparation[2]))==(shader,base_compare)
    if shader:assert int(preparation[3])>0 and int(preparation[4])>0 and int(preparation[5])>0 and int(preparation[6])>0
    else:assert all(int(preparation[i])==0 for i in range(3,7))
    exact=re.search(r'DRAW_EXACT_BUFFER enabled=(\d+) hits=(\d+) misses=(\d+) updates=(\d+) uploads=(\d+) uploaded_bytes=(\d+) compared_bytes=(\d+) evictions=(\d+) fallbacks=(\d+) pinned_fallbacks=(\d+) snapshot_bytes=(\d+) gpu_bytes=(\d+) entries=(\d+)',output)
    assert exact and int(exact[1])==exact_buffer
    if exact_buffer:assert all(int(exact[i])>0 for i in [2,3,4,5,6,7,11,12,13])
    else:assert all(int(exact[i])==0 for i in range(2,14))
    assert int(exact[11])<=64*1024*1024 and int(exact[12])<=64*1024*1024 and int(exact[13])<=4096
    mode_records[name]=dict(passed=int(match[1]),batches=int(match[2]),vertices=int(match[3]),nonblack=int(match[4]),opaque_nonblack=int(match[5]),
        draw_dedup=dedup,stream_upload=stream,merge_upload=merge,pack_upload=pack,
        uniform_uploads=int(stats[2]),uniform_reuses=int(stats[3]),immediate_uploads=int(stats[4]),sampler_updates=int(stats[5]),
        stream_uploads=int(streaming[3]),stream_bytes=int(streaming[4]),stream_allocations=int(streaming[5]),stream_rotations=int(streaming[6]),
        packed_draws=int(packed[2]),packed_slices=int(packed[3]),packed_bytes=int(packed[4]),packed_fallbacks=int(packed[5]),data_uploads=int(packed[6]),
        shader_prep_cache=shader,texture_base_compare=base_compare,vertex_cache_hits=int(preparation[3]),vertex_cache_misses=int(preparation[4]),
        preparation_cache_hits=int(preparation[5]),preparation_cache_misses=int(preparation[6]),
        topology_calls=int(topology[1]),topology_max_indices=196602,topology_observed_capacity=int(topology[2]),
        exact_buffer_cache=exact_buffer,buffer_cache_hits=int(exact[2]),buffer_cache_misses=int(exact[3]),buffer_cache_updates=int(exact[4]),
        buffer_cache_uploads=int(exact[5]),buffer_cache_uploaded_bytes=int(exact[6]),buffer_cache_compared_bytes=int(exact[7]),
        buffer_cache_evictions=int(exact[8]),buffer_cache_fallbacks=int(exact[9]),buffer_cache_pinned_fallbacks=int(exact[10]),
        buffer_cache_snapshot_bytes=int(exact[11]),buffer_cache_gpu_bytes=int(exact[12]),buffer_cache_entries=int(exact[13]))
    folder=folders[name];folder.mkdir(parents=True,exist_ok=True)
    for capture in captures:
        for suffix in ['.ppm','.json']:run(prefix+['pull',remote+'/'+capture+suffix,str(folder/(capture+suffix))])
pixel_comparisons={}
for capture in captures:
    baseline=(folders['baseline']/(capture+'.ppm')).read_bytes()
    for name in list(modes)[1:]:
        assert baseline==(folders[name]/(capture+'.ppm')).read_bytes(),name+' changed actual GPU pixels: '+capture
    pixel_comparisons[capture]=dict(byte_exact=True,bytes=len(baseline),sha256=hashlib.sha256(baseline).hexdigest(),modes=list(modes))
    for suffix in ['.ppm','.json']:shutil.copyfile(folders['merged']/(capture+suffix),results/(capture+suffix))
assert mode_records['dedup']['uniform_uploads']<mode_records['baseline']['uniform_uploads']
assert mode_records['dedup']['immediate_uploads']<mode_records['baseline']['immediate_uploads']
assert mode_records['dedup']['sampler_updates']<mode_records['baseline']['sampler_updates']
assert mode_records['baseline']['stream_uploads']==mode_records['dedup']['stream_uploads']==0
assert mode_records['stream']['stream_uploads']>mode_records['merged']['stream_uploads']>0
assert mode_records['stream']['stream_bytes']>mode_records['merged']['stream_bytes']>0
assert mode_records['packed_stream']['stream_uploads']<mode_records['stream']['stream_uploads']
assert mode_records['packed_merged']['stream_uploads']<mode_records['merged']['stream_uploads']
assert mode_records['packed']['data_uploads']<mode_records['dedup']['data_uploads']
assert mode_records['packed_stream']['data_uploads']<mode_records['stream']['data_uploads']
(root/'logs/immediate-replay.log').write_text('\n'.join(outputs),encoding='utf-8')
from render_capture import png
_,dimensions,_,rgb=(results/'immediate-replay.ppm').read_bytes().split(b'\n',3);width,height=map(int,dimensions.split());png(results/'immediate-replay.png',width,height,rgb)
_,dimensions,_,rgb=(results/'opaque-immediate-replay.ppm').read_bytes().split(b'\n',3);width,height=map(int,dimensions.split());png(results/'opaque-immediate-replay.png',width,height,rgb)
tested=[Path(__file__),test,root/'tests/immediate_topology_contract.h',root/'src/immediate_vertices.h',root/'src/vertex_format.h',root/'src/nv2a_draw.cpp',root/'src/texture_cache.h',root/'src/draw_upload_plan.h',root/'src/stream_upload.h',
    root/'src/shader_preparation_cache.h',root/'src/shader_preparation_model.h',root/'src/exact_buffer_cache.h',*sources[1:],*c_sources]
(results/'immediate-replay-validation.json').write_text(json.dumps(dict(serial=args.serial,passed=int(match[1]),failed=0,batches=int(match[2]),vertices=int(match[3]),nonblack_pixels=int(match[4]),controlled_opaque_nonblack_pixels=int(match[5]),fixture_directory=str(fixture),
    draw_dedup_modes={'0':mode_records['baseline'],'1':mode_records['dedup']},upload_modes=mode_records,pixel_comparisons=pixel_comparisons,binary_sha256=hashlib.sha256(binary.read_bytes()).hexdigest(),
    scope=['Recorded six original command batches: 352 full vertex records match an independent attribute oracle byte for byte',
        'Quad/quad-strip index winding and invalid sequence rejection',
        'Persistent topology vector: all10primitive kinds, growth to65536vertices/196602indices, every index/winding, invalid/empty recovery and stable pointer with sufficient capacity',
        'Actual production renderer, original captured shaders/state/textures and Mali GPU; original zero-alpha text stays transparent',
        'Separate synthetic opacity fixture changes only test color alpha to 255 and must produce visible pixels; game rendering is unchanged',
        'Shared texture pixels retain independent actual sampler wrap modes across two stages',
        'Shader code cache: changing only color uniforms reuses one pipeline and updates actual GPU pixels; changing final-combiner input selects distinct compiled code',
        'Same production renderer binary runs in eleven separate baseline/dedup/stream/merged/packed/packed-stream/packed-merged/shader/shader-mips/exact-buffer/shader-buffer processes; five complete GPU PPMs match byte for byte',
        'Exact bounded CPU source cache: actual hits, same-address microcode padding mutation, restored source, current color uniforms, on/off/on transitions and clear preserve all GPU pixels',
        'Exact GPU buffer cache: unchanged data skips uploads, same-pointer changed geometry updates, enabled/original/enabled transitions and clear/recreate preserve all GPU pixels',
        'Packing copies every current vertex/index slice into one bounded staging block; actual data upload/map counters decrease; original/packed/original transition preserves complete GPU pixels',
        'Original opaque text geometry as indexed interleaved position/color/UV: at least two active inputs merge into one shorter upload and reproduce immediate pixels; direct guest mutation between draws changes pixels',
        'Uniform GPU bytes: identical content, first/last-byte mutations, shrink/grow, indexed binding restoration, optimized/baseline/optimized cache transitions',
        'Immediate-to-indexed shifted guest geometry and indexed-to-immediate restoration preserve expected complete GPU images',
        'Sampler wrap/filter/LOD mutations and baseline/optimized transitions preserve actual queried state and stage bindings'],
    limitations=['Replay verifies command interpretation and actual GLES execution, not original-console pixel equivalence',
        'Array packets and other unobserved immediate forms still require independent validation',
        'Unused presentation-alias synchronization is a dependency double in this fixture; dedicated render-target GPU checks cover the actual copy'],
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in tested},
    fixture_sha256={p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in inputs[:-1]}),indent=2))
