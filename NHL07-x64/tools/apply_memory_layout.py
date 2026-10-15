"""Keep host support areas and the main stack outside this exact NHL 07 image."""
from pathlib import Path
import json
import re
import argparse

root=Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser()
parser.add_argument('--project',choices=['both','windows','android'],default='both')
args=parser.parse_args()
xbe=json.loads((root/'analysis/xbe.json').read_text())
image_end=max(int(s['virtual_addr'],16)+s['virtual_size'] for s in xbe['sections'])
ranges=[('RW compatibility data',0x940000,0x980000),('kernel data',0x980000,0x990000),
        ('compatibility TLS structure',0x9a0000,0x9b0000),('XBE TLS template',0x9b0000,0x9c0000),
        ('main thread runtime data',0x9c0000,0x9d0000),('main stack',0xa00000,0x1200000)]
assert image_end<=ranges[0][1]
for (name,start,end),(next_name,next_start,next_end) in zip(ranges,ranges[1:]):
    assert end<=next_start
projects={'windows':root,'android':root.with_name('NHL07-android')}
for name,project in projects.items():
    if args.project not in ('both',name): continue
    folder=project/'vendor/xboxrecomp/src/kernel'
    path=folder/'xbox_memory_layout.h';text=path.read_text()
    for symbol,old,new in [('XBOX_KERNEL_DATA_BASE','0x00740000','0x00980000'),
                           ('XBOX_STACK_BASE','0x00780000','0x00A00000')]:
        pattern=rf'(#define {symbol}\s+)({old}|{new})'
        text,count=re.subn(pattern,lambda m:m[1]+new,text)
        assert count==1,(symbol,path)
    if text!=path.read_text(): path.write_text(text,encoding='utf-8')
    path=folder/'xbox_memory_layout.c';text=path.read_text()
    for symbol,old,new in [('FAKE_TLS_VA','0x00760000','0x009A0000'),
                          ('FAKE_RWDATA_VA','0x00700000','0x00940000'),
                          ('FAKE_TLS_BLOCK_VA','0x00770000','0x009B0000'),
                          ('FAKE_TLS_THREAD_VA','0x00770200','0x009C0000')]:
        pattern=rf'(#define {symbol}\s+)({old}|{new})'
        text,count=re.subn(pattern,lambda m:m[1]+new,text)
        assert count==1,(symbol,path)
    if text!=path.read_text(): path.write_text(text,encoding='utf-8')
(root/'analysis/host-memory-layout.json').write_text(json.dumps({
    'reason':'Default toolkit support regions overlapped this 9.2 MB XBE; the TLS state also overlapped the 692-byte TLS template.',
    'xbe_image_end':hex(image_end),
    'reserved_ranges':[{'name':n,'start':hex(a),'end_exclusive':hex(b)} for n,a,b in ranges],
    'heap_start':'0x01200000','heap_end':'0x04000000',
    'all_reserved_ranges_outside_image':True,'all_reserved_ranges_disjoint':True},indent=2))
print('NHL 07 support-memory ranges validated; image ends at',hex(image_end))
