"""Replace one audited decompressor cache operation with host memory ordering."""
from pathlib import Path
import hashlib
import json

root=Path(__file__).resolve().parents[1]
binary=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(binary).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
assert binary[0x59e0f4-0x10000:0x59e0f4-0x10000+2]==bytes.fromhex('0f09')
old='RECOMP_UNIMPL("wbinvd", 0x0059E0F4u); /* TODO: wbinvd */'
new='{ extern void nhl07_publish_decompressed_data(void); nhl07_publish_decompressed_data(); } /* audited data-decompressor WBINVD */'
files=[p for p in (root/'src/recomp/gen').glob('recomp_*.c') if old in p.read_text() or new in p.read_text()]
assert len(files)==1, 'Exactly one known instruction site expected'
path=files[0]
text=path.read_text()
if old in text: path.write_text(text.replace(old,new),encoding='utf-8')
report={'address':'0x0059E0F4','original_bytes':'0f09','function':'0x0059DF4F',
    'evidence':'analysis/ghidra-c/ghidra_0117.c, EA byte-stream decompression into CPU RAM',
    'host_behavior':'Full host CPU memory fence, no guest register changes',
    'scope':'Only this audited data decompressor; not a general WBINVD or device cache implementation',
    'reference':'https://cdrdv2-public.intel.com/774499/334569-sdm-vol-2d.pdf'}
(root/'analysis/data-cache-boundary.json').write_text(json.dumps(report,indent=2))
print('Applied audited decompressor cache boundary')
