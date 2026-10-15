"""Read-only diagnostics around the original clock setup; do not alter its result."""
from pathlib import Path
root=Path(__file__).resolve().parents[1];path=root/'src/recomp/gen/recomp_0248.c';s=path.read_text()
old='loc_0059E77A: ;\n'
new=old+'    { extern void nhl07_trace_clock_setup(uint32_t,uint32_t); nhl07_trace_clock_setup(0,MEM32(esp+4)); }\n'
if new not in s:s=s.replace(old,new)
old='    MEM32(0x91A9C0) = edi;\n'
new=old+'    { extern void nhl07_trace_clock_setup(uint32_t,uint32_t); nhl07_trace_clock_setup(1,edi); }\n'
if new not in s:s=s.replace(old,new)
if s!=path.read_text():path.write_text(s,encoding='utf-8')
print('Clock setup diagnostics enabled')
