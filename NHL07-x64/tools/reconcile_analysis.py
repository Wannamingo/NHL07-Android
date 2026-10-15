from pathlib import Path
import collections
import json
import re

root=Path(__file__).resolve().parents[1]
ghidra={int(f['start'],16):f for f in json.loads((root/'analysis/ghidra-functions.json').read_text())}
disasm={int(f['start'],16):f for f in json.loads((root/'analysis/disasm/functions.json').read_text())}
stubs=(root/'src/recomp/gen/recomp_stubs_unresolved.c').read_text()
unresolved=sorted(set(int(x,16) for x in re.findall(r'void sub_([0-9A-Fa-f]{8})\(void\) \{ RECOMP_UNIMPL',stubs)))
matches=[{**ghidra[a], 'disassembler_has_start':a in disasm} for a in unresolved if a in ghidra]
summary=json.loads((root/'analysis/recomp/summary.json').read_text())
unsupported=summary.get('unimplemented',{})
report={
    'ghidra_functions':len(ghidra),'disassembler_entries':len(disasm),
    'common_starts':len(set(ghidra)&set(disasm)),
    'unresolved_target_count':len(unresolved),
    'unresolved_targets_at_ghidra_functions':matches,
    'unsupported_unique_addresses_by_mnemonic':{k:len(set(v)) for k,v in unsupported.items()},
    'note':'Agreement on an entry point is additional evidence; it does not prove correct full CFG or calling convention.'}
(root/'analysis/independent-analysis-comparison.json').write_text(json.dumps(report,indent=2))
print(json.dumps({k:report[k] for k in ['ghidra_functions','disassembler_entries','common_starts','unresolved_target_count']},indent=2))
print('Unresolved addresses independently recognized by Ghidra:',len(matches))
print(json.dumps(matches[:10],indent=2))
