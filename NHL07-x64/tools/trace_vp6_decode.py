"""Time the original VP6 decode call, separately from provider queue waits."""
from pathlib import Path
root=Path(__file__).resolve().parents[1];p=root/'src/recomp/gen/recomp_0229.c';s=p.read_text()
start=s.index('void sub_004F5417(void)\n{');end=s.index('\n}\n',start)+3;body=s[start:end]
for label,stage in [('004F5417',0),('004F5429',1)]:
    marker='loc_'+label+': ;\n'
    line='    { extern void nhl07_trace_vp6_decode(uint32_t); nhl07_trace_vp6_decode('+str(stage)+'); }\n'
    assert body.count(marker)==1
    if marker+line not in body:body=body.replace(marker,marker+line)
new=s[:start]+body+s[end:]
if new!=s:p.write_text(new,encoding='utf-8')
print('VP6 decode timing enabled; original decoder retained')
