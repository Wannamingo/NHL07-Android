"""Keep the original NHL 07 text bodies and bind audited Unicode wrappers.

Only definition names change. Dispatch and all existing call sites keep the
original entry names, now supplied by native_text_hooks.c. Idempotent.
"""
from pathlib import Path
import hashlib,json,re

root=Path(__file__).resolve().parents[1]
expected='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
assert hashlib.sha256((root/'input/default.xbe').read_bytes()).hexdigest()==expected
entries=[('0028C380','recomp_0147.c',16),('002F6E70','recomp_0155.c',0),('00368890','recomp_0170.c',0)]
records=[]
for address,name,ret in entries:
    path=root/'src/recomp/gen'/name
    original='sub_'+address; retained=original+'_nhl07_text_original'
    source=path.read_text(encoding='utf-8')
    before=hashlib.sha256(source.encode()).hexdigest()
    pattern=r'(?m)^void '+original+r'\(void\)'
    assert len(re.findall(pattern,source))+source.count('void '+retained+'(void)')==1,address
    updated=re.sub(pattern,'void '+retained+'(void)',source)
    if updated!=source:path.write_text(updated,encoding='utf-8')
    records.append(dict(address='0x'+address,generated_file=name,original_symbol=retained,
                        ret_operand_bytes=ret,entry_to_exit_esp_bytes=ret+4,
                        generated_before_sha256=before,generated_after_sha256=hashlib.sha256(updated.encode()).hexdigest()))
record=dict(title='NHL 07 USA, XDK 5849',xbe_sha256=expected,entries=records,
            scope='Preserve UTF-8 only for the scoped full-team-name producer and matching arena APT consumers; all original bodies execute',
            producer_local='entry ESP - 0x542',team_fields=['0x8f5b2c','0x8f62a4'],apt_scratch='0x8fc908',maximum_output_bytes_including_nul=94)
(root/'analysis/native-text-hooks.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
print('Text definition boundaries retained:',len(records))
