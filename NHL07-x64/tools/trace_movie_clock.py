"""Observe original movie readiness calculation without changing its decision."""
from pathlib import Path
root=Path(__file__).resolve().parents[1];path=root/'src/recomp/gen/recomp_0229.c'
source=path.read_text();start=source.index('void sub_004F0392(void)\n{');end=source.index('\n}\n',start)+3
body=source[start:end]
old='    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */\n'
new=old+'    { extern void nhl07_trace_movie_clock(uint32_t,uint32_t); nhl07_trace_movie_clock(esi,g_fp_cmp==1); }\n'
assert (old in body) and (body.count(old)==1)
if new not in body:source=source[:start]+body.replace(old,new)+source[end:]
if source!=path.read_text():path.write_text(source,encoding='utf-8')
print('Movie clock diagnostics enabled; original readiness decision retained')
