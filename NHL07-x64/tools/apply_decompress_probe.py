"""Observe original RefPack inputs only during explicit Android probes."""
from pathlib import Path
p=Path(__file__).resolve().parents[1]/'src/recomp/gen/recomp_0248.c'
s=p.read_text();marker='/* NHL07_DECOMPRESS_INPUT_PROBE */'
if marker not in s:
    needle='void sub_0059DF4F(void)\n{'
    assert s.count(needle)==1
    s=s.replace(needle,needle+'\n#if defined(__ANDROID__)\n    '+marker+'\n    { extern void nhl07_trace_decompress_input(uint32_t,uint32_t); nhl07_trace_decompress_input(MEM32(g_esp+4),MEM32(g_esp+8)); }\n#endif',1)
    p.write_text(s)
print('Applied explicit-probe RefPack input observation')
