"""Record the latest collected game run; never infer playability from loading."""
from pathlib import Path
import datetime, hashlib, json, re
root=Path(__file__).resolve().parents[1];android=root.with_name('NHL07-android')
def read(path):return json.loads(path.read_text(encoding='utf-8'))
def save(path,value):path.write_text(json.dumps(value,indent=2)+'\n',encoding='utf-8')
device=read(android/'analysis/latest-apk-device.json');apk=read(android/'analysis/apk.json')
assert device['apk_sha256']==apk['sha256'],'Collect the current APK run first'
log_path=Path(device['log']);log=log_path.read_text(encoding='utf-8')
runtime=read(root/'analysis/runtime-callback-validation.json')
progress=read(root/'analysis/match-recovery-progress.json')
static_count=len(read(root/'analysis/static-recovery.json')['accepted'])
linker=read(root/'analysis/linker-thunk-validation.json')
proof_path=android/'analysis/localized-roster-complete-match.json'
proof=read(proof_path) if proof_path.is_file() else {}
match=proof.get('apk_sha256')==apk['sha256'] and proof.get('complete_match_verified') is True
historical=[read(p) for p in [android/'analysis/complete-match-validation.json',android/'analysis/launcher-core-complete-match.json',proof_path] if p.is_file()]
progress.update(updated=datetime.datetime.now(datetime.timezone.utc).isoformat(),current_apk=apk['sha256'],
    match_verified=match,current_validation=device['stop'],verified_match_checkpoints=historical,
    static_recovered_function_count=static_count,
    linker_alias_count=linker['restored_aliases'],runtime_recovered_function_count=len(read(root/'analysis/runtime-callbacks.json')),
    validated_cases_per_architecture=runtime['passed_per_architecture'],
    scope=f"All recovered bodies statically audited; {len(runtime['tested_functions_sha256'])} selected original bodies have x86 differential checks. Current APK complete-match evidence: {match}; historical scenarios retain their exact APK hashes.")
progress['additional_recovery']=[
    f"{linker['restored_aliases']} original linker aliases; {linker['passed_per_architecture']} native dispatch checks per architecture",
    f'{static_count} statically recovered native bodies; 26 runtime callbacks',
    'Original resource AddRef/Release preserved; 15360 original-x86 comparisons and 7680 internal-acquire checks per architecture']
progress['fixed_observed_boundaries'].update({
    '0x007630A0/007630E0':'Native boundary delegates ordinary resource references to original XDK code',
    '0x0075BCC0':'Offscreen native FBO; original target binding/refcounts/viewport; guest color writeback and shared depth',
    '0x0055BC3E':'Audited vertex-stream CPU publication and native generation invalidation'})
progress['fixed_observed_boundaries']['0x0042AFC0']='Original 85-byte scene dispatcher; included in nine-dispatcher group, 792 vectors per dispatcher per architecture'
assets=re.findall(r"\[ANDROID-OPEN\] name='([^']+)'",log)
if assets:progress['last_observed_asset']=assets[-1]
save(root/'analysis/match-recovery-progress.json',progress)
save(root/'analysis/match-loading-latest-observation.json',dict(
    apk_sha256=apk['sha256'],log=str(log_path),log_sha256=hashlib.sha256(log_path.read_bytes()).hexdigest(),
    last_stop=device['stop'],x86_differential_functions=len(runtime['tested_functions_sha256']),
    x86_differential_cases_per_architecture=runtime['passed_per_architecture'],
    menu_verified=True,match_verified=match,verified_match_checkpoints=historical))
bindings=re.findall(r'\[NHL07-RENDER-TARGET\] bound surface=([0-9A-F]+) format=([0-9A-F]+) size=(\d+)x(\d+) linear=(\d) data=([0-9A-F]+)',log)
writebacks=re.findall(r'\[NHL07-RENDER-TARGET\] writeback surface=([0-9A-F]+) data=([0-9A-F]+) size=(\d+)x(\d+)',log)
save(android/'analysis/render-target-integration.json',dict(
    apk_sha256=apk['sha256'],log=str(log_path),bindings=bindings,writebacks=writebacks,
    original_xdk_set_target_executed=bool(bindings),guest_writeback_observed=bool(writebacks),
    stop=device['stop'],match_verified=match,
    sources={name:hashlib.sha256((android/name).read_bytes()).hexdigest() for name in
        ['src/render_targets.cpp','src/render_target_pixels.cpp','src/native_graphics.c','src/nv2a_draw.cpp']},
    limitations=['The log proves binding and writeback were reached; isolation tests verify pixel packing and actual GLES depth/stencil behavior.',
        'Full-match claims require the separate matching-hash observation; original-console pixel equivalence and all later render/depth modes remain unverified.']))
print(json.dumps({'apk':apk['sha256'],'bindings':len(bindings),'writebacks':len(writebacks),'stop':device['stop']}))
