"""Observe original player guards and decoder requests; preserve all guest state."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
edits=[('recomp_0159.c','003141D0','loc_003141D0: ;\n',
        '    { extern void nhl07_trace_movie_request(uint32_t,uint32_t,uint32_t); nhl07_trace_movie_request(0,ecx,0); }\n'),
       ('recomp_0229.c','004EFD76','loc_004EFD8D: ;\n',
        '    { extern void nhl07_trace_movie_request(uint32_t,uint32_t,uint32_t); nhl07_trace_movie_request(1,esi,eax); }\n'),
       ('recomp_0229.c','004EFD76','loc_004EFD96: ;\n',
        '    { extern void nhl07_trace_movie_request(uint32_t,uint32_t,uint32_t); nhl07_trace_movie_request(2,esi,eax); }\n')]
for filename,function,marker,trace in edits:
    path=root/'src/recomp/gen'/filename;source=path.read_text()
    start=source.index('void sub_'+function+'(void)\n{');end=source.index('\n}\n',start)+3
    body=source[start:end];assert body.count(marker)==1
    if marker+trace not in body:source=source[:start]+body.replace(marker,marker+trace)+source[end:]
    if source!=path.read_text():path.write_text(source,encoding='utf-8')
print('Movie request diagnostics enabled; original guards and results retained')
