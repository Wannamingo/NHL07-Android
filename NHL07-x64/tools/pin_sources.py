from pathlib import Path
import hashlib
import json

root=Path(__file__).resolve().parents[1]
workspace=root.parents[1]
projects=[root,root.with_name('NHL07-android')]
files=[]
for project in projects:
    for folder in ['src','tools','tests','vendor','android','java','deps/dsp56300','deps/adpcm-xq','mods/localization','mods/rosters']:
        for path in sorted((project/folder).rglob('*')):
            if path.is_file() and '__pycache__' not in path.parts:
                files.append(path)
    files.append(project/'CMakeLists.txt')
    for folder in ['analysis/localization']:
        for path in sorted((project/folder).glob('*.json')):files.append(path)
    for name in ['localization-assets.json','roster-converter-validation.json','launcher-host-validation.json','launcher-core-complete-match.json','russian-device-validation.json','localized-roster-complete-match.json','localization-overlay-validation.json','fps-pause-validation.json','prerelease-device-validation.json','prerelease-performance.json','optimization-candidate.json','render-profile-validation.json','scaled-upload-validation.json','cpu-profile-perf1.json']:
        if (project/'analysis'/name).is_file():files.append(project/'analysis'/name)
    for name in ['linker-thunk-recovery.json','linker-thunk-validation.json']:
        if (project/'analysis'/name).is_file():files.append(project/'analysis'/name)
    for name in ['match-recovery-progress.json','match-loading-latest-observation.json']:
        if (project/'analysis'/name).is_file():files.append(project/'analysis'/name)
    for name in ['observed-first-player.json','observed-first-player.png','observed-home-jersey.png']:
        if (project/'analysis'/name).is_file():files.append(project/'analysis'/name)
    if (project/'analysis/scene-dispatch-bounds.json').is_file():files.append(project/'analysis/scene-dispatch-bounds.json')
    for name in ['resource-lifetime-fix.json','resource-lifetime-validation.json']:
        if (project/'analysis'/name).is_file():files.append(project/'analysis'/name)
    for name in ['target-pixels-validation.json','render-target-validation.json','render-target-integration.json','vertex-cache-boundary.json','memory-budget-validation.json','memory-budget-fix.json','vertex-format-validation.json','scene-abi-guard.json','immediate-replay-validation.json','texture-cache-validation.json','texture-cache-baseline.json']:
        if (project/'analysis'/name).is_file():files.append(project/'analysis'/name)
    for name in ['thread-contract.json','thread-wait-fix.json','observed-menu.json','observed-team-selection.json','observed-match-loading.json','runtime-thunk-audit.json']:
        if (project/'analysis'/name).is_file():files.append(project/'analysis'/name)
    for name in ['shader-support-provenance.json','dsp-support-provenance.json','adpcm-support-provenance.json','native-input-abi.json','native-audio-abi.json','runtime-callbacks.json','runtime-callback-validation.json','voice-validation.json','texture-validation.json','timer-contract.json','handle-contract.json','handle-contract-baseline.json','nfsu-reference-study.json','movie-clock-trace.json','observed-legal-screen.json','observed-demo-video.json','observed-title-screen.json','input-enumeration-validation.json','static-recovery.json','audio-lock-validation.json','platform-contract.json','video-cache-boundary.json','swizzle-cache-boundary.json']:
        if (project/'analysis'/name).is_file():files.append(project/'analysis'/name)
records=[{'path':p.relative_to(workspace).as_posix(),'sha256':hashlib.sha256(p.read_bytes()).hexdigest()}
         for p in files]
artifacts=[]
for p in [root/'build/Release/nhl_07_recomp.exe', root/'build/Release/nhl_07_recomp.pdb',
          projects[1]/'build/libnhl07_core.so',projects[1]/'build/nhl07_probe',
          root.parent/'NHL07-RG477M-dev.apk', root.parent/'NHL07-RG477M-splash-verified.apk',
          root.parent/'NHL07-RG477M-0.4.0-rc2.apk',
          root.parent/'NHL07-RG477M-0.4.1-rc1.apk',
          root/'analysis/NHL07-ghidra-project.zip']:
    if p.is_file():
        artifacts.append({'path':p.relative_to(workspace).as_posix(),'sha256':hashlib.sha256(p.read_bytes()).hexdigest()})
(root/'analysis/source-and-artifact-pin.json').write_text(json.dumps({'files':records,'artifacts':artifacts},indent=2))
print('Source files pinned:',len(records),'artifacts:',len(artifacts))
