"""Build a Windows DSP56300 disassembler and inspect every recovered effect."""
from pathlib import Path
import hashlib,json,os,subprocess
root=Path(__file__).resolve().parents[1];workspace=root.parents[1]
reference=workspace/'work/nhl07-dsp-reference';provenance=json.loads((reference/'provenance.json').read_text())
for record in provenance['files']:
    assert hashlib.sha256((reference/Path(record['path']).name).read_bytes()).hexdigest()==record['sha256']
build=root/'build/dsp-reference';build.mkdir(exist_ok=True);compat=build/'compat';(compat/'qemu').mkdir(parents=True,exist_ok=True)
(compat/'qemu/osdep.h').write_text('''#pragma once
#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define ARRAY_SIZE(x) (sizeof(x)/sizeof((x)[0]))
''')
(compat/'qemu/bswap.h').write_text('''#pragma once
static uint32_t ldl_le_p(const void *p){uint32_t v;memcpy(&v,p,4);return v;}
static void stl_le_p(void *p,uint32_t v){memcpy(p,&v,4);}
''')
(compat/'debug.h').write_text('#pragma once\n#define DPRINTF(...) ((void)0)\n')
(compat/'trace.h').write_text('''#pragma once
#define trace_dsp56k_execute_instruction(...) ((void)0)
#define trace_dsp56k_execute_instruction_disasm(...) ((void)0)
#define trace_event_get_state(...) 0
''')
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_dsp_research C)
set(CMAKE_C_STANDARD 11)
add_executable(dsp_reference "'''+(root/'tools/dsp_reference.c').as_posix()+'''")
target_include_directories(dsp_reference PRIVATE "'''+reference.as_posix()+'''" "'''+compat.as_posix()+'''")
target_compile_options(dsp_reference PRIVATE /utf-8 /W0)
''')
cmake=json.loads((root/'local-toolchains.json').read_text())['cmake'];env=dict(os.environ,MSBUILDDISABLENODEREUSE='1')
with (root/'logs/dsp-reference-build.log').open('w') as log:
    for cmd in [[cmake,'-S',build,'-B',build/'native','-A','x64'],[cmake,'--build',build/'native','--config','Release','--parallel','2']]:
        result=subprocess.run(list(map(str,cmd)),env=env,stdout=log,stderr=subprocess.STDOUT)
        if result.returncode:raise SystemExit('DSP disassembler build failed: '+str(root/'logs/dsp-reference-build.log'))
binary=build/'native/Release/dsp_reference.exe';image=json.loads((root/'analysis/dsp-analysis.json').read_text());records=[]
for effect in image['effects']:
    path=root/'analysis/dsp'/f'effect-{effect["index"]:02d}.code.bin';origin=(int(effect['code_offset'],16)-0x818)//4
    result=subprocess.run([str(binary),str(path),str(origin),str(effect['code_bytes']//4)],capture_output=True,text=True)
    assert result.returncode==0,result.stderr
    output=path.with_suffix('.asm.txt');output.write_text(result.stdout)
    records.append({'index':effect['index'],'origin':hex(origin),'instructions':len(result.stdout.splitlines()),'sha256':hashlib.sha256(output.read_bytes()).hexdigest()})
(root/'analysis/dsp-disassembly.json').write_text(json.dumps({'tool':'xemu DSP56300 disassembler, standalone Windows adapter',
    'upstream_commit':provenance['commit'],'executable_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),
    'effects':records,'scope':'Static DSP disassembly; no execution or audio validation'},indent=2))
print('DSP56300 disassembly complete:',len(records),'programs',sum(r['instructions'] for r in records),'instructions')
