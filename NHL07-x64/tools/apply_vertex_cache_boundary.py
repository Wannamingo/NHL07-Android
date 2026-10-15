"""Adapt the audited CPU publication step preceding Xbox vertex-cache invalidation.

This does not upload a vertex buffer or implement draw calls. Native drawing
must consume current guest bytes; unsupported drawing still stops explicitly.
"""
from pathlib import Path
import hashlib,json
root=Path(__file__).resolve().parents[1]
xbe=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
assert xbe[0x561350-0x10000:0x561352-0x10000]==bytes.fromhex('0f09')
path=root/'src/recomp/gen/recomp_0240.c'
old='RECOMP_UNIMPL("wbinvd", 0x00561350u); /* TODO: wbinvd */'
new='{ extern void nhl07_publish_vertex_data(uint32_t); nhl07_publish_vertex_data(esi); } /* audited vertex data publication; drawing still requires native upload */'
source=path.read_text();assert (old in source) != (new in source)
if old in source: path.write_text(source.replace(old,new),encoding='utf-8')
assert xbe[0x5611bd-0x10000:0x5611bf-0x10000]==bytes.fromhex('0f09')
old_draw='RECOMP_UNIMPL("wbinvd", 0x005611BDu); /* TODO: wbinvd */'
new_draw='{ extern void nhl07_invalidate_vertex_cache(void); nhl07_invalidate_vertex_cache(); } /* audited dirty-vertex publication before DrawIndexedVertices */'
source=path.read_text();assert (old_draw in source) != (new_draw in source)
if old_draw in source: path.write_text(source.replace(old_draw,new_draw),encoding='utf-8')
assert xbe[0x55bc3e-0x10000:0x55bc40-0x10000]==bytes.fromhex('0f09')
update_path=root/'src/recomp/gen/recomp_0239.c'
old_update='RECOMP_UNIMPL("wbinvd", 0x0055BC3Eu); /* TODO: wbinvd */'
new_update='{ extern void nhl07_invalidate_vertex_cache(void); nhl07_invalidate_vertex_cache(); } /* audited CPU vertex-stream update publication */'
source=update_path.read_text();assert (old_update in source) != (new_update in source)
if old_update in source:update_path.write_text(source.replace(old_update,new_update),encoding='utf-8')
additional=[]
for address,start,end,unit,evidence in [
    (0x55baae,0x55ba0a,0x55bace,'recomp_0239.c',
     'Original routine collects selected vertex streams and publishes the result immediately before original FlushVertexCache'),
    (0x55b7cc,0x55b6c3,0x55b7e6,'recomp_0239.c',
     'Original loop copies vertex-stream bytes through memcpy 0059EADC, then publishes immediately before original FlushVertexCache'),
    (0x57503d,0x574eb6,0x57515e,'recomp_0242.c',
     'Original relocation copies bytes through memmove 0059EAA4, publishes CPU writes, then conditionally flushes vertex cache before invoking the relocation callback')]:
    assert xbe[address-0x10000:address-0x10000+2]==bytes.fromhex('0f09')
    target=root/'src/recomp/gen'/unit
    old_site=f'RECOMP_UNIMPL("wbinvd", 0x{address:08X}u); /* TODO: wbinvd */'
    new_site='{ extern void nhl07_invalidate_vertex_cache(void); nhl07_invalidate_vertex_cache(); } /* audited CPU vertex-stream publication at '+f'{address:08X}'+' */'
    body=target.read_text();assert (old_site in body)!=(new_site in body)
    if old_site in body:target.write_text(body.replace(old_site,new_site),encoding='utf-8')
    additional.append({'address':f'0x{address:08X}','function':f'0x{start:08X}',
        'function_sha256':hashlib.sha256(xbe[start-0x10000:end-0x10000]).hexdigest(),
        'ghidra_evidence':f'analysis/ghidra-recovered/{start:08x}.c','evidence':evidence})
report={'address':'0x00561350','original_bytes':'0f09','function':'0x00561334',
    'function_sha256':hashlib.sha256(xbe[0x561334-0x10000:0x56135e-0x10000]).hexdigest(),
    'evidence':['XGSetVertexBufferHeader at 00757D6F writes common=1 and guest data address',
        'D3DResource_Register at 00763270 only relocates the data pointer',
        'ESI holds the vertex resource at this exact WBINVD site',
        'Tail call D3DDevice_FlushVertexCache emits NV097_INVALIDATE_VERTEX_CACHE'],
    'additional_site':{'address':'0x005611BD','function':'0x005611AA',
        'evidence':'CPU vertex-dirty flag 00915749 cleared immediately before DrawIndexedVertices; native draw remains a diagnostic hard stop'},
    'stream_update_site':{'address':'0x0055BC3E','function':'0x0055BACE',
        'function_sha256':hashlib.sha256(xbe[0x55bace-0x10000:0x55bc65-0x10000]).hexdigest(),
        'ghidra_evidence':['analysis/ghidra-recovered/0055bace.c','analysis/ghidra-recovered/0075d370.c'],
        'evidence':['Original loop copies selected indexed vertex streams into the caller destination through memcpy or a format converter',
            'WBINVD follows those CPU writes and immediately precedes original D3DDevice_FlushVertexCache at 0075D370',
            'Original FlushVertexCache emits method 1710 with payload zero; its native API replacement increments the same vertex publication generation',
            'Native vertex uploads read guest data at draw time and use the publication generation to discard converted data']},
    'additional_vertex_stream_sites':additional,
    'host_behavior':'CPU memory fence and native vertex-data generation increment',
    'limitations':['No GPU upload or draw implementation is implied',
        'Future native uploads must consume current guest data or compare generation',
        'This is not general cache/MMIO emulation; other WBINVD sites remain unsupported']}
(root/'analysis/vertex-cache-boundary.json').write_text(json.dumps(report,indent=2))
print('Applied audited vertex-data publication boundary')
