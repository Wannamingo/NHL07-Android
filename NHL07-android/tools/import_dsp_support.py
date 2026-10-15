"""Import the pinned portable DSP56300 core, preserving upstream licenses."""
from pathlib import Path
import hashlib,json,shutil
root=Path(__file__).resolve().parents[1];source=root.parents[1]/'work/nhl07-dsp-reference'
records=json.loads((source/'provenance.json').read_text());target=root/'deps/dsp56300';target.mkdir(exist_ok=True)
names=['dsp_cpu.c','dsp_cpu.h','dsp_cpu_regs.h','dsp_dis.c.inc','dsp_emu.c.inc','dsp_dma.c','dsp_dma.h','dsp_dma_regs.h','COPYING']
manifest=[]
for name in names:
    entry=next(r for r in records['files'] if Path(r['path']).name==name)
    data=(source/name).read_bytes();assert hashlib.sha256(data).hexdigest()==entry['sha256']
    # Flatten the upstream source tree. This is the only source transformation.
    if name=='dsp_dma.c':data=data.replace(b'"interp/dsp_cpu_regs.h"',b'"dsp_cpu_regs.h"')
    (target/name).write_bytes(data);manifest.append(dict(entry,destination_sha256=hashlib.sha256(data).hexdigest()))
(target/'qemu').mkdir(exist_ok=True)
compat={
'qemu/osdep.h':'''#pragma once
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
#include <stddef.h>
#if defined(_MSC_VER)
typedef ptrdiff_t ssize_t;
#else
#include <sys/types.h>
#endif
#define ARRAY_SIZE(x) (sizeof(x)/sizeof((x)[0]))
#define MIN(a,b) ((a)<(b)?(a):(b))
''',
'qemu/bswap.h':'''#pragma once
static uint32_t ldl_le_p(const void *p){uint32_t v;memcpy(&v,p,4);return v;}
static void stl_le_p(void *p,uint32_t v){memcpy(p,&v,4);}
''',
'qemu/compiler.h':'#pragma once\n',
'debug.h':'#pragma once\n#define DPRINTF(...) ((void)0)\n',
'trace.h':'''#pragma once
#define trace_dsp56k_execute_instruction(...) ((void)0)
#define trace_dsp56k_execute_instruction_disasm(...) ((void)0)
#define trace_event_get_state(...) 0
'''}
for name,text in compat.items():(target/name).write_text(text)
(root/'analysis/dsp-support-provenance.json').write_text(json.dumps({'upstream_commit':records['commit'],'source_files':manifest,
    'adaptation':'Standalone standard-C headers; DMA include flattened; original CPU/DMA behavior retained',
    'compatibility_files':{n:hashlib.sha256((target/n).read_bytes()).hexdigest() for n in compat}},indent=2))
print('Imported pinned DSP56300 core and DMA:',len(names),'files')
