"""Publish the audited CPU-produced movie texture before native GPU upload."""
from pathlib import Path
import hashlib,json
root=Path(__file__).resolve().parents[1];data=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(data).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
assert data[0x4f3368-0x10000:0x4f336a-0x10000]==bytes.fromhex('0f09')
path=root/'src/recomp/gen/recomp_0229.c';source=path.read_text()
old='RECOMP_UNIMPL("wbinvd", 0x004F3368u); /* TODO: wbinvd */'
previous='{ extern void nhl07_publish_decompressed_data(void); nhl07_publish_decompressed_data(); } /* audited CPU movie-texture publication */'
new='{ extern void nhl07_publish_movie_frame(void); nhl07_publish_movie_frame(); } /* audited CPU movie-texture publication */'
source=source.replace(previous,new)
assert (old in source)!=(new in source)
source=source.replace(old,new)
if source!=path.read_text():path.write_text(source,encoding='utf-8')
(root/'analysis/video-cache-boundary.json').write_text(json.dumps({'address':'0x004F3368','original_bytes':'0f09','function':'0x004F3348',
    'original_function_sha256':hashlib.sha256(data[0x4f3348-0x10000:0x4f3386-0x10000]).hexdigest(),
    'evidence':['Original 004F30A8 computes three CPU YUV plane addresses and calls 004F4563 for conversion',
        '004F30A8 then registers the current texture through 00564995 and advances its double-buffer index',
        '004F3348 places WBINVD between CPU conversion/registration and releasing the decoder frame',
        'Native GLES texture upload consumes current guest bytes at every draw'],
    'host_behavior':'Full host CPU memory fence, no guest register changes',
    'limitations':['Not general device cache or DMA emulation','Movie decoding and later texture drawing remain separately verified boundaries']},indent=2))
print('Applied audited movie-texture cache boundary')
