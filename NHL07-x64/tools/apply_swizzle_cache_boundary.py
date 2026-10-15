"""Publish one audited CPU-swizzled texture before freeing its temporary copy."""
from pathlib import Path
import hashlib,json
root=Path(__file__).resolve().parents[1];data=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(data).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
assert data[0x54326e-0x10000:0x543270-0x10000]==bytes.fromhex('0f09')
path=root/'src/recomp/gen/recomp_0237.c';source=path.read_text()
old='RECOMP_UNIMPL("wbinvd", 0x0054326Eu); /* TODO: wbinvd */'
new='{ extern void nhl07_publish_swizzled_texture(void); nhl07_publish_swizzled_texture(); } /* audited CPU texture-swizzle publication */'
assert (old in source)!=(new in source)
if old in source:path.write_text(source.replace(old,new),encoding='utf-8')
(root/'analysis/swizzle-cache-boundary.json').write_text(json.dumps({
    'address':'0x0054326E','original_bytes':'0f09','function':'0x00542A60',
    'original_call_and_fence_sha256':hashlib.sha256(data[0x543269-0x10000:0x543270-0x10000]).hexdigest(),
    'ghidra_evidence':['analysis/ghidra-recovered/00542a60.c','analysis/ghidra-recovered/00756755.c'],
    'evidence':['00542A60 allocates a swizzle temp CPU copy and copies texture bytes into it',
        '00756755 consumes that temporary source and writes swizzled destination bytes',
        'WBINVD occurs immediately after the transform and before the temporary-copy free callback',
        'Native GLES uploads read current guest bytes at every draw, including palette bytes'],
    'host_behavior':'Full host CPU memory fence, no guest register or texture-data changes',
    'limitations':['Not general device cache or DMA emulation','No console equivalence claim for later UI textures']},indent=2))
print('Applied audited CPU texture-swizzle cache boundary')
