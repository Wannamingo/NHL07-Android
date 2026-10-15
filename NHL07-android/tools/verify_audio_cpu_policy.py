"""Host contract for the production audio CPU-capacity selection policy."""
from pathlib import Path
import hashlib
import json
import os
import re
import subprocess

root = Path(__file__).resolve().parents[1]
config = json.loads((root / 'local-toolchains.json').read_text())
build = root / 'build/audio-cpu-policy-validation'
build.mkdir(parents=True, exist_ok=True)
source = root / 'tests/audio_cpu_policy.c'
(build / 'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\n'
    'project(nhl07_audio_cpu_policy C)\nset(CMAKE_SUPPRESS_REGENERATION ON)\n'
    'add_executable(audio_cpu_policy "'+source.as_posix()+'")\n'
    'target_include_directories(audio_cpu_policy PRIVATE "'+(root/'src').as_posix()+'")\n'
    'target_compile_options(audio_cpu_policy PRIVATE /utf-8 /W4)\n')
temporary = build/'tmp'
temporary.mkdir(exist_ok=True)
env = dict(os.environ, TMP=str(temporary), TEMP=str(temporary), MSBUILDDISABLENODEREUSE='1')
log = root / 'logs/audio-cpu-policy-validation.log'
with log.open('w') as output:
    for command in [[config['cmake'], '-S', build, '-B', build/'native', '-A', 'x64'],
                    [config['cmake'], '--build', build/'native', '--config', 'Release', '--parallel', '1']]:
        result = subprocess.run(list(map(str, command)), env=env, stdout=output, stderr=subprocess.STDOUT, timeout=120)
        assert result.returncode==0, f'Build failed; see {log}'
binary = build/'native/Release/audio_cpu_policy.exe'
result = subprocess.run([str(binary)], capture_output=True, text=True, timeout=30)
with log.open('a') as output: output.write(result.stdout+result.stderr)
match = re.search(r'AUDIO_CPU_POLICY passed=(\d+) failed=0', result.stdout)
assert result.returncode==0 and match, result.stdout+result.stderr
pin = lambda path: hashlib.sha256(path.read_bytes()).hexdigest()
receipt = {
    'architecture': 'Windows x64 host', 'passed': int(match[1]), 'failed': 0,
    'source_sha256': {p.relative_to(root).as_posix(): pin(p) for p in [source, root/'src/audio_cpu_policy.h', Path(__file__).resolve()]},
    'binary_sha256': pin(binary), 'log': log.relative_to(root).as_posix(),
    'scope': ['CPU counts 1 through 64 and bit 63',
              'RG477M 221/996/1024 topology selects mask f0',
              'All 256 RG477M preexisting allowed masks and subset preservation',
              'Homogeneous and missing topology leave affinity unchanged',
              'Inclusive 75 percent capacity threshold and maximum accepted capacity',
              'Invalid/unknown allowed capacities and out-of-count mask bits fall back safely'],
    'affinity_changed': False, 'game_audio_verified': False,
    'limitations': ['Pure CPU-selection contract; no scheduler, sysfs, device performance or audible quality claim.']
}
destination = root/'analysis/audio-cpu-policy-validation.json'
destination.write_text(json.dumps(receipt, indent=2))
print(result.stdout.strip())
print(destination)
