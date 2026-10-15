"""Windows host contract for production GPU profiling controls and frame statistics."""
from pathlib import Path
import argparse, ast, hashlib, json, math, os, re, subprocess

root = Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--default-stream',type=int,choices=[0,1],default=0)
parser.add_argument('--default-merge',type=int,choices=[0,1],default=0)
parser.add_argument('--default-pack',type=int,choices=[0,1],default=0)
parser.add_argument('--default-shader',type=int,choices=[0,1],default=0)
parser.add_argument('--default-exact-buffer',type=int,choices=[0,1],default=0)
args=parser.parse_args()
cfg = json.loads((root / 'local-toolchains.json').read_text())
build = root / 'build/render-profile-validation'
build.mkdir(parents=True, exist_ok=True)
source = root / 'tests/render_profile_contract.cpp'
(build / 'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_render_profile_validation CXX)
add_executable(nhl07_render_profile_contract "''' + source.as_posix() + '''")
target_compile_features(nhl07_render_profile_contract PRIVATE cxx_std_17)
target_compile_definitions(nhl07_render_profile_contract PRIVATE _CRT_SECURE_NO_WARNINGS NHL07_EXPECT_DEFAULT_STREAM='''+str(args.default_stream)+''' NHL07_EXPECT_DEFAULT_MERGE='''+str(args.default_merge)+''' NHL07_EXPECT_DEFAULT_PACK='''+str(args.default_pack)+''' NHL07_EXPECT_DEFAULT_SHADER='''+str(args.default_shader)+''' NHL07_EXPECT_DEFAULT_EXACT_BUFFER='''+str(args.default_exact_buffer)+''' NHL07_DEFAULT_SHADER_PREP_CACHE='''+str(args.default_shader)+''' NHL07_DEFAULT_EXACT_BUFFER_CACHE='''+str(args.default_exact_buffer)+''')
target_compile_options(nhl07_render_profile_contract PRIVATE /utf-8 /O2)
''', encoding='utf-8')
env = dict(os.environ, TMP=str(build), TEMP=str(build), MSBUILDDISABLENODEREUSE='1')

def run(command):
    result = subprocess.run(list(map(str, command)), env=env, capture_output=True,
                            text=True, encoding='utf-8', errors='replace', timeout=180)
    if result.returncode:
        raise RuntimeError(result.stdout[-6000:] + result.stderr[-6000:])
    return result.stdout + result.stderr

cmake = cfg['cmake']
configure = run([cmake, '-S', build, '-B', build / 'windows', '-G', 'Visual Studio 17 2022', '-A', 'x64'])
compile_output = run([cmake, '--build', build / 'windows', '--config', 'Release', '--parallel', '2'])
exe = build / 'windows/Release/nhl07_render_profile_contract.exe'
log_path = root / 'logs/render-profile-contract.log'
output = run([exe, build, log_path])
match = re.search(r'RENDER_PROFILE passed=(\d+) failed=0 clock_calls=(\d+)', output)
assert match, output
sections = {}
controls = {}
name = None
for line in log_path.read_text(encoding='utf-8').splitlines():
    if line.startswith('[CONTRACT-SECTION] '):
        name = line.split(' ', 1)[1]; sections[name] = [];controls[name]=[]
    elif line.startswith('[NHL07-GPU-PROFILE] '):
        assert name is not None
        sections[name].append(json.loads(line.split(' ', 1)[1]))
    elif line.startswith('[NHL07-GPU-PROFILE-CONTROL] '):
        assert name is not None
        controls[name].append({key:int(value) for key,value in re.findall(r'(\w+)=(\d+)',line)})

defaults=(args.default_stream,args.default_merge,args.default_pack)
expected = {
    'quantiles_and_raw_order': ([(i * 137 % 300 + 1) * 1000000 for i in range(300)],
                              {'draw': (2.0, 300, 0), 'compare': (0, 0, 415050)}, (0, 0, 0, 0, 0, 0, 0)),
    'baseline_to_optimized_transition': ([17000000 if i % 2 else 16000000 for i in range(300)],
                                        {'uniform': (1.0, 300, 19200)}, (0, 1, 1, 1)+defaults),
    'long_stall_discards_partial': ([40000000] * 300, {'read_pixels': (3.0, 300, 307200)}, (0, 1, 1, 1)+defaults),
    'zero_interval_discards_partial': ([20000000] * 300, {'raster': (0.5, 300, 0)}, (0, 1, 1, 1)+defaults),
    'explicit_experimental_flag_and_reenable': ([10000000] * 300, {'target_set': (0.75, 300, 9600)}, (1, 0, 0, 0)+defaults),
    'fresh_profile_after_disable': ([25000000] * 300, {'submit': (0.125, 300, 0)}, (0, 1, 1, 1)+defaults),
    'upload_invalid_values_keep_prior_valid_fields': ([32000000]*300,{'buffer_upload':(.875,300,9600),'buffer_source':(0,0,38400)},(0,1,1,1,1,0,args.default_pack)),
    'upload_fresh_profile_after_default_restore':([28000000]*300,{'attribute_config':(.0625,300,0)},(0,1,1,1)+defaults),
    'pack_invalid_values_keep_prior_valid_fields':([30000000]*300,{'buffer_upload':(.5,300,4800)},(0,1,1,1,args.default_stream,args.default_merge,1)),
    'pack_fresh_profile_after_default_restore':([26000000]*300,{'attribute_config':(.03125,300,0)},(0,1,1,1)+defaults),
}
for mode,(stream,merge) in enumerate([(0,0),(1,0),(0,1),(1,1)]):
    expected['upload_mode_'+str(stream)+str(merge)]=(
        [24000000+mode*1000000+(i%7)*12345 for i in range(300)],
        {'buffer_upload':(1.25,300,300*(64+mode*32)),
         'attribute_config':(.125,300,0),'buffer_source':(0,0,104850+mode*30000)},
        (0,1,1,1,stream,merge,args.default_pack))
for mode,pack in enumerate([1,0,1,0]):
    expected['pack_mode_'+str(pack)+'_'+str(mode)]=(
        [21000000+mode*1000000+(i%11)*4321 for i in range(300)],
        {'buffer_upload':(.625,300,300*(256+mode*16)),'buffer_source':(0,0,352050+mode*15000)},
        (0,1,1,1,args.default_stream,args.default_merge,pack))
# Omitted options restore the selected production defaults. The explicit
# baseline below still disables every experiment for either compile choice.
expected={name:(intervals,costs,flags+(args.default_shader,0)) for name,(intervals,costs,flags) in expected.items()}
for mode,(shader_prep,texture_base) in enumerate([(0,0),(1,0),(1,1),(0,1),(0,0)]):
    expected['preparation_mode_'+str(mode)]=(
        [18000000+mode*1000000+(i%13)*2468 for i in range(300)],
        {'parse':(.25+mode*.125,300,0),'compare':(.5,300,83250+mode*4800)},
        (0,1,1,1,1,1,1,shader_prep,texture_base))
expected['preparation_invalid_values_keep_prior_valid_fields']=(
    [31000000]*300,{'parse':(.875,300,0),'compare':(.375,300,28800)},
    (0,1,1,1)+defaults+(1,1))
expected['preparation_fresh_profile_after_default_restore']=(
    [27000000]*300,{'compare':(.1875,300,7200)},(0,1,1,1)+defaults+(args.default_shader,0))
expected={name:(intervals,costs,flags+(args.default_exact_buffer,)) for name,(intervals,costs,flags) in expected.items()}
intervals,costs,_=expected['quantiles_and_raw_order']
expected['quantiles_and_raw_order']=(intervals,costs,(0,)*10)
for mode,exact_buffer in enumerate([1,0,1,0]):
    expected['exact_buffer_mode_'+str(mode)]=(
        [16000000+mode*1000000+(i%17)*1234 for i in range(300)],
        {'buffer_compare':(.0625+mode*.03125,300,1273650+mode*9600),'compare':(.125,300,19200)},
        (0,1,1,1,1,1,1,1,1,exact_buffer))
expected['exact_buffer_invalid_values_keep_prior_valid_fields']=(
    [29000000]*300,{'buffer_compare':(.09375,300,153600)},(0,1,1,1)+defaults+(args.default_shader,0,1))
expected['exact_buffer_fresh_profile_after_default_restore']=(
    [23000000]*300,{'buffer_compare':(.03125,300,38400)},(0,1,1,1)+defaults+(args.default_shader,0,args.default_exact_buffer))
stage_names={'draw','parse','texture','compare','uniform','buffers','raster','submit','sync','consume','target_set','target_flush','target_create','read_pixels','target_encode','depth_copy','buffer_upload','attribute_config','buffer_source','buffer_compare'}
flag_names=['target_dirty_cache','target_gpu_downsample','target_gpu_upsample','draw_dedup','stream_upload','merge_upload','pack_upload','shader_prep_cache','texture_base_compare','exact_buffer_cache']
observations = {}
json_checks = 0
for section, rows in sections.items():
    if section not in expected:
        assert not rows, ('Unexpected timing output in disabled/control-only scenario', section)
        json_checks += 1
        continue
    assert len(rows) == 1, (section, len(rows))
    row = rows[0]; intervals, costs, flags = expected[section]
    assert row['frames'] == 300
    assert row['frame_ns'] == intervals, ('Raw frame ordering or reset failure', section)
    total = sum(intervals); sorted_intervals = sorted(intervals)
    wanted = {'fps': 300 * 1e9 / total, 'frame_ms': total / 300 / 1e6,
              'p95_ms': sorted_intervals[math.ceil(0.95 * len(intervals)) - 1] / 1e6,
              'p99_ms': sorted_intervals[math.ceil(0.99 * len(intervals)) - 1] / 1e6,
              'max_ms': max(intervals) / 1e6}
    for field, value in wanted.items():
        assert abs(row[field] - value) < (0.00051 if field == 'fps' else 0.000051), (section, field, row[field], value)
        json_checks += 1
    for field, value in zip(flag_names, flags):
        assert row[field] == value, (section, field)
        json_checks += 1
    assert set(row['inclusive_stages'])==stage_names,('Missing or unexpected inclusive stages',section)
    json_checks+=1
    for stage, value in row['inclusive_stages'].items():
        ms, calls, byte_count = costs.get(stage, (0, 0, 0))
        assert abs(value['ms_per_frame'] - ms) < 0.000051, (section, stage, value)
        assert value['calls'] == calls and value['bytes'] == byte_count, (section, stage, value)
        json_checks += 3
    observations[section] = {field: row[field] for field in ['frames', 'fps', 'frame_ms', 'p95_ms', 'p99_ms', 'max_ms']}
    observations[section]['flags']={field:row[field] for field in flag_names}
    if section.startswith(('upload_mode_','pack_mode_','preparation_mode_','exact_buffer_mode_')):
        assert len(controls[section])==1,('Mode transition emitted no unique control record',section)
        wanted_control={'enabled':1,**dict(zip(flag_names,flags))}
        assert controls[section][0]==wanted_control,(section,controls[section],wanted_control)
        json_checks+=1
assert set(expected) <= set(sections)
# Read only literal mode definitions; no device commands execute during this
# host contract. This checks that benchmark labels select independent flags.
benchmark_path=root/'tools/benchmark_render_modes.py'
benchmark_tree=ast.parse(benchmark_path.read_text(encoding='utf-8'))
benchmark_literals={}
for node in benchmark_tree.body:
    if isinstance(node,ast.Assign) and len(node.targets)==1 and isinstance(node.targets[0],ast.Name) and node.targets[0].id in {'modes','keys'}:
        benchmark_literals[node.targets[0].id]=ast.literal_eval(node.value)
assert benchmark_literals['keys']==flag_names
wanted_modes={'current':(0,1,1,1,0,0,0,0,0,0),'shader':(0,1,1,1,0,0,0,1,0,0),
              'mips':(0,1,1,1,0,0,0,0,1,0),'shader_mips':(0,1,1,1,0,0,0,1,1,0),
              'merge':(0,1,1,1,0,1,0,0,0,0),'stream':(0,1,1,1,1,0,0,0,0,0),
              'upload':(0,1,1,1,1,1,0,0,0,0),'packed':(0,1,1,1,0,0,1,0,0,0),
              'packed_stream':(0,1,1,1,1,0,1,0,0,0),'packed_merged':(0,1,1,1,0,1,1,0,0,0),
              'exact_buffer':(0,1,1,1,0,0,0,0,0,1),'shader_buffer':(0,1,1,1,0,0,0,1,0,1)}
for name,flags in wanted_modes.items():
    assert benchmark_literals['modes'][name]==flags,(name,benchmark_literals['modes'][name],flags)
    json_checks+=1
assert all(len(flags)==len(flag_names) and set(flags)<={0,1} for flags in benchmark_literals['modes'].values())
json_checks+=2
selector_node=next(node for node in benchmark_tree.body if isinstance(node,ast.FunctionDef) and node.name=='select_matching_batch')
selector_namespace={}
exec(compile(ast.Module(body=[selector_node],type_ignores=[]),str(benchmark_path),'exec'),selector_namespace)
selector=selector_namespace['select_matching_batch']
# Completed batches may arrive together or across polls. Invalid/mixed rows
# must not consume a warmup slot; exactly the Nth matching row is selected.
warmup_checks=0
for requested_warmups in range(7):
    flags={'shader_prep_cache':1,'texture_base_compare':0,'exact_buffer_cache':1}
    candidates=[]
    for sample_id in range(requested_warmups+4):
        candidates.extend([
            {'frames':299,**flags,'sample_id':-1},
            {'frames':300,**flags,'exact_buffer_cache':0,'sample_id':-2},
            {'frames':300,'shader_prep_cache':1,'sample_id':-3},
            {'frames':300,**flags,'sample_id':sample_id}])
    for chunk_size in range(1,len(candidates)+1):
        warmup=[];found=None
        for start in range(0,len(candidates),chunk_size):
            found=selector(candidates[start:start+chunk_size],flags,requested_warmups,warmup)
            if found is not None:break
        assert found is not None and found['sample_id']==requested_warmups,(requested_warmups,chunk_size,found)
        assert [row['sample_id'] for row in warmup]==list(range(requested_warmups)),(requested_warmups,chunk_size,warmup)
        warmup_checks+=2
json_checks+=warmup_checks
tested = [source, root / 'src/render_profile.cpp', root / 'src/render_profile.h', Path(__file__),benchmark_path]
build_log_path = root / 'logs/render-profile-host-build.log'
build_log_path.write_text(configure + compile_output + output, encoding='utf-8')
report = {
    'platform': 'Windows x64 MSVC Release', 'device_connected_or_used': False,
    'production_cpp_included': True, 'clock': 'Deterministic test adapter for clock_gettime',
    'expected_release_defaults':{'stream_upload':args.default_stream,'merge_upload':args.default_merge,'pack_upload':args.default_pack,'shader_prep_cache':args.default_shader,'texture_base_compare':0,'exact_buffer_cache':args.default_exact_buffer},
    'public_api_checks_passed': int(match[1]), 'json_checks_passed': json_checks, 'failed': 0,
    'benchmark_warmup_checks_passed':warmup_checks,
    'passed': int(match[1]) + json_checks,
    'runtime_stdout': output.strip(),
    'runtime_log': {'path': str(log_path), 'sha256': hashlib.sha256(log_path.read_bytes()).hexdigest()},
    'build_log': {'path': str(build_log_path), 'sha256': hashlib.sha256(build_log_path.read_bytes()).hexdigest()},
    'observations': observations,
    'scope': ['Disabled profiler reads no timestamps and emits no frame batches',
              'Release defaults, explicit baseline/optimized transitions, 60-control-call polling',
              'CRLF schema2 accepted; legacy, misplaced or unsupported schema ignored; invalid values ignored',
              'Exact raw frame order, independent nearest-rank p95/p99, mean/FPS/max and inclusive stage bytes/calls',
              'Mode transition, one-second stall, zero interval and disable/re-enable discard partial data',
              'All four independent stream/merge upload modes, actual environment flags and exact control/JSON output',
              'Independent pack upload on/off/on/off, 60-call polling, exact environment/control/JSON flags, partial-batch reset and default restoration',
              'Independent shader preparation and texture base comparison switches, selected compile defaults and explicit overrides, each toggled both ways with upload flags held fixed',
              'Both preparation flags respect schema2, 60-control-call polling, invalid values, missing-file restoration, disable/re-enable and exact control/JSON output',
              'Preparation-only transitions discard old partial batches and the mixed transition frame',
              'Independent exact buffer cache on/off/on/off with all other experimental flags fixed; selected compile default, schema2, throttle, invalid-value and missing-file behavior',
              'Exact buffer flag transitions discard partial batches and mixed frames; buffer_compare stage records its own exact time/calls/compared span bytes',
              'Benchmark exact_buffer and shader_buffer select only the requested exact buffer and shader flags, with texture base comparison off',
              'Benchmark current/shader/mips/shader_mips select only their independent preparation flags; seven upload selections retain their prior flags',
              'Benchmark warmup selection skips exactly N complete matching batches across arbitrary polling partitions; mixed/incomplete batches do not consume warmup slots',
              'Upload flag transitions discard partial batches and mixed frames; source-byte, upload-time and attribute-time counters remain independent',
              'Invalid upload values preserve prior valid fields in one file; absent/legacy files and disable/reenable restore expected defaults'],
    'limitations': ['Host implementation contract only; no Android performance or GPU behavior validated'],
    'binary_sha256': hashlib.sha256(exe.read_bytes()).hexdigest(),
    'tested_sources': {p.relative_to(root).as_posix(): hashlib.sha256(p.read_bytes()).hexdigest() for p in tested},
}
(root / 'analysis/render-profile-validation.json').write_text(json.dumps(report, indent=2), encoding='utf-8')
print(json.dumps({'report': str(root / 'analysis/render-profile-validation.json'),
                  'public_api_checks_passed': report['public_api_checks_passed'], 'json_checks_passed': json_checks, 'failed': 0}))
