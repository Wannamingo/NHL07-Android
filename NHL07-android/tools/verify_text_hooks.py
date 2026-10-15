"""Validate retained text and exact generated converter ABI on Windows/ARM64.

The 0028C380 producer is a controlled fixture with its audited frame/RET16.
Its actual original text converter dependencies and lookup table are included.
"""
from pathlib import Path
import argparse, hashlib, json, os, re, subprocess

root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
parser=argparse.ArgumentParser();parser.add_argument('--serial');args=parser.parse_args()
cfg=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/text-hooks-validation';build.mkdir(parents=True,exist_ok=True)
env=dict(os.environ,TMP=str(build),TEMP=str(build),MSBUILDDISABLENODEREUSE='1')

def run(command,timeout=180):
    result=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,
                          encoding='utf-8',errors='replace',timeout=timeout)
    if result.returncode:raise RuntimeError(result.stdout[-5000:]+result.stderr[-5000:])
    return result.stdout+result.stderr

functions={};provenance={}
pending=['sub_002F6E70','sub_00368890']
while pending:
    symbol=pending.pop()
    if symbol in functions:continue
    pattern=re.compile(r'void '+symbol+r'(?:_nhl07_text_original)?\(void\)\r?\n\{')
    candidates=run(['rg','-l',r'^void '+symbol+r'(?:_nhl07_text_original)?\(void\)',game/'src/recomp/gen']).splitlines()
    candidates=[Path(path) for path in candidates if not path.endswith('.h')]
    assert len(candidates)==1,(symbol,candidates)
    source=candidates[0].read_text(encoding='utf-8')
    match=pattern.search(source);assert match,symbol
    body=source[match.start():source.index('\n}\n',match.start())+3]
    original_body=body
    if symbol in ['sub_002F6E70','sub_00368890']:
        body=re.sub(r'^void '+symbol+r'(?:_nhl07_text_original)?',
                    'void '+symbol+'_nhl07_text_original',body)
    functions[symbol]=body
    provenance[symbol]={'source':candidates[0].relative_to(root.parent).as_posix(),
                        'generated_function_sha256':hashlib.sha256(original_body.encode()).hexdigest()}
    pending.extend(s for s in re.findall(r'\b(sub_[0-9A-F]{8})\b',body) if s!=symbol)
generated=build/'actual-text-converters.c'
declarations=[]
for symbol in functions:
    name=symbol+'_nhl07_text_original' if symbol in ['sub_002F6E70','sub_00368890'] else symbol
    declarations.append('void '+name+'(void);')
generated.write_text('#define RECOMP_GENERATED_CODE\n#include "recomp_types.h"\n'+
                     '\n'.join(declarations)+'\n'+'\n'.join(functions.values()),encoding='utf-8')

xbe=(game/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()==cfg['xbe_sha256']
sections=json.loads((game/'analysis/xbe.json').read_text())['sections']
address=0x8c3458
section=next(s for s in sections if int(s['virtual_addr'],16)<=address<int(s['virtual_addr'],16)+s['raw_size'])
offset=address-int(section['virtual_addr'],16)+int(section['raw_addr'],16)
table=build/'original-text-lookup.bin';table.write_bytes(xbe[offset:offset+208])

runtime=root/'vendor/xboxrecomp/templates/runtime'
sources=[root/'src/native_text_hooks.c',root/'src/native_text_hooks.h',
         root/'tests/native_text_hooks.c',root/'tests/native_text_hooks_abi.c',Path(__file__)]
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_text_hooks_validation C)
set(CMAKE_C_STANDARD 11)
add_executable(nhl07_text_hooks_contract "'''+sources[2].as_posix()+'''" "'''+sources[0].as_posix()+'''")
add_executable(nhl07_text_hooks_abi "'''+sources[3].as_posix()+'''" "'''+sources[0].as_posix()+'''" "'''+generated.as_posix()+'''")
target_compile_definitions(nhl07_text_hooks_contract PRIVATE NHL07_TEXT_HOOKS_PURE=1)
foreach(target IN ITEMS nhl07_text_hooks_contract nhl07_text_hooks_abi)
 target_include_directories(${target} PRIVATE "'''+(root/'src').as_posix()+'''" "'''+runtime.as_posix()+'''")
 target_compile_definitions(${target} PRIVATE RECOMP_NATIVE_API_ONLY=1 _CRT_SECURE_NO_WARNINGS)
 target_compile_options(${target} PRIVATE /utf-8 /O2)
endforeach()
''',encoding='utf-8')
logs=[]
logs.append(run([cfg['cmake'],'-S',build,'-B',build/'windows','-G','Visual Studio 17 2022','-A','x64']))
logs.append(run([cfg['cmake'],'--build',build/'windows','--config','Release','--parallel','2']))
windows=[build/'windows/Release/nhl07_text_hooks_contract.exe',build/'windows/Release/nhl07_text_hooks_abi.exe']
results={'windows_x64':{'state':run([windows[0]]),'abi':run([windows[1],table])}}
llvm=Path(cfg['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
android=[build/'nhl07_text_hooks_contract',build/'nhl07_text_hooks_abi']
common=[llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),
        '-std=c11','-O2','-fno-strict-aliasing','-fwrapv','-ffp-contract=off',
        '-Wl,-z,max-page-size=16384','-I'+str(root/'src'),'-I'+str(runtime)]
logs.append(run(common+['-DNHL07_TEXT_HOOKS_PURE=1',sources[2],sources[0],'-o',android[0]]))
logs.append(run(common+['-DRECOMP_NATIVE_API_ONLY=1',sources[3],sources[0],generated,'-lm','-o',android[1]]))
if args.serial:
    prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
    remote='/data/local/tmp/nhl07-438eaeada465'
    for path in [*android,table]:run(prefix+['push',path,remote+'/'+path.name])
    for path in android:run(prefix+['shell','chmod','700',remote+'/'+path.name])
    results['android_arm64']={'state':run(prefix+['shell',remote+'/'+android[0].name]),
                            'abi':run(prefix+['shell',remote+'/'+android[1].name,remote+'/'+table.name])}
summary={}
for platform,entries in results.items():
    summary[platform]={}
    for kind,output in entries.items():
        match=re.search(r'checks=(\d+) failed=0',output);assert match,output
        summary[platform][kind]={'passed':int(match[1]),'failed':0}
        (root/'logs'/('text-hooks-'+platform+'-'+kind+'.log')).write_text(output,encoding='utf-8')
        print(platform,kind,match[0])
report={'failed':0,'serial':args.serial,'results':summary,'actual_generated_converters':provenance,
        'original_table_sha256':hashlib.sha256(table.read_bytes()).hexdigest(),
        'scope':['Actual generated UTF8-to-narrow and narrow-to-UTF8 converter dependency chain',
                 'Controlled producer uses audited full-name stack pointer, 31-byte guest field copy and RET16',
                 'Exact English-off original register model and output; RU-on changes only EAX/ECX length and APT text',
                 'Guest team fields unchanged; source/destination identity, changed field and disabled-language fallbacks',
                 'Integer registers, ESP, EBP/SEH, FS base, DF, x87 state/flags/control and all XMM/MMX registers'],
        'limitations':['No full 0028C380 database/gameplay body executed in this standalone fixture',
                       'The translated model stores arithmetic condition flags as local function variables, not global EFLAGS',
                       'Device arena intro still requires exact APK visual verification'],
        'tested_sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in sources},
        'binary_sha256':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in [*windows,*android]}}
(root/'analysis/text-hooks-validation.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
(root/'logs/text-hooks-build.log').write_text('\n'.join(logs),encoding='utf-8')
print('text-hooks-validation.json failed=0')
