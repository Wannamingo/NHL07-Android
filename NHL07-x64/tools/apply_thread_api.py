"""Use the native host-thread query for the audited XDK GetExitCodeThread ABI."""
from pathlib import Path
import re
root=Path(__file__).resolve().parents[1]
assert 'void sub_0044B23A(void)' in (root/'src/overrides.c').read_text()
removed=0
for path in (root/'src/recomp/gen').glob('recomp_*.c'):
    source=path.read_text();updated,count=re.subn(r'void sub_0044B23A\(void\)\n\{.*?\n\}\n','',source,flags=re.S)
    if count:path.write_text(updated,encoding='utf-8');removed+=count
assert removed<=1
print('Native GetExitCodeThread boundary installed; original body replacements:',removed)
