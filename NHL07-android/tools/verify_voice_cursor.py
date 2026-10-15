"""Host regression: exact looping cursor boundaries and unchanged rendered samples.

Build the pre-fix voice code with the same tests to show the boundary failure,
then build current production code. No device or audible test sounds are used.
"""
from pathlib import Path
import hashlib
import json
import os
import re
import subprocess

root = Path(__file__).resolve().parents[1]
game = root.with_name('NHL07-x64')
config = json.loads((root / 'local-toolchains.json').read_text())
build = root / 'build/voice-cursor-validation'
build.mkdir(parents=True, exist_ok=True)
voice = root / 'src/native_voice.c'
fix = '''        /* A control query can run between mixes. Publish the wrapped cursor
           now, including an exact loop end after the final output sample. */
        if(v->looping&&loop>0&&v->frame>=begin+loop)v->frame=begin+fmod(v->frame-begin,loop);
'''
current = voice.read_text()
assert current.count(fix) == 1, 'Expected exact cursor normalization patch once'
baseline = build / 'native_voice_before_fix.c'
baseline.write_text(current.replace(fix, ''), newline='\n')
sources = [root / 'tests/voice_contract.c', voice, root / 'src/xbox_adpcm.c']
includes = [game / 'src/recomp/gen', root / 'src', root / 'deps/adpcm-xq']
cmake = 'cmake_minimum_required(VERSION 3.20)\nproject(nhl07_voice_cursor C)\nset(CMAKE_SUPPRESS_REGENERATION ON)\n'
for name, voice_source in [('voice_cursor_before', baseline), ('voice_cursor_after', voice)]:
    selected = [sources[0], voice_source, sources[2]]
    cmake += 'add_executable(' + name + ' ' + ' '.join('"' + p.as_posix() + '"' for p in selected) + ')\n'
    cmake += 'target_include_directories(' + name + ' PRIVATE ' + ' '.join('"' + p.as_posix() + '"' for p in includes) + ')\n'
    cmake += 'target_compile_options(' + name + ' PRIVATE /utf-8 /fp:strict)\n'
(build / 'CMakeLists.txt').write_text(cmake)
build_log = root / 'logs/voice-cursor-build.log'
with build_log.open('w') as log:
    commands = [[config['cmake'], '-S', build, '-B', build / 'native', '-A', 'x64']]
    commands += [[config['cmake'], '--build', build / 'native', '--config', 'Release', '--parallel', '1', '--target', name]
                 for name in ['voice_cursor_before', 'voice_cursor_after']]
    for cmd in commands:
        result = subprocess.run(list(map(str, cmd)), env=dict(os.environ, MSBUILDDISABLENODEREUSE='1'), stdout=log, stderr=subprocess.STDOUT, timeout=120)
        assert result.returncode == 0, f'Voice build failed; see {build_log}'
before = build / 'native/Release/voice_cursor_before.exe'
after = build / 'native/Release/voice_cursor_after.exe'
before_run = subprocess.run([str(before)], capture_output=True, text=True)
after_run = subprocess.run([str(after)], capture_output=True, text=True)
before_log = root / 'logs/voice-cursor-before-fix.log'
after_log = root / 'logs/voice-cursor-after-fix.log'
before_log.write_text(before_run.stdout + before_run.stderr)
after_log.write_text(after_run.stdout + after_run.stderr)
assert before_run.returncode != 0 and 'MEM32(0x22000)==32 && MEM32(0x22004)==36' in before_run.stderr, before_log.read_text()
match = re.search(r'VOICE_CONTRACT passed=(\d+) failed=0', after_run.stdout)
assert after_run.returncode == 0 and match, after_log.read_text()
pin = lambda p: hashlib.sha256(p.read_bytes()).hexdigest()
receipt = {
    'architecture': 'Windows x64 host',
    'passed': int(match[1]),
    'failed': 0,
    'baseline_regression_reproduced': True,
    'baseline_failure': 'Exact nonzero PCM loop end reports end instead of loop begin',
    'baseline_source_sha256': pin(baseline),
    'baseline_binary_sha256': pin(before),
    'binary_sha256': pin(after),
    'source_sha256': {p.relative_to(root).as_posix(): pin(p) for p in sources + [root / 'src/native_voice.h', root / 'src/native_audio.h', root / 'deps/adpcm-xq/adpcm.h', Path(__file__).resolve()]},
    'logs': [p.relative_to(root).as_posix() for p in [build_log, before_log, after_log]],
    'scope': [
        'Existing PCM samples/pause/stop/mute and nonlooping cursor semantics',
        'Exact PCM whole-buffer and nonzero loop-region boundaries',
        '2x and fractional 1.5x playback cursor and interpolated sample identity',
        'Xbox ADPCM mono/stereo framing and whole/nonzero loop-region block cursors',
        'Game-sized 28800-byte six-channel PCM ring over 151 mixes and two full wraps',
        'Playback and synthetic test signals rendered only to memory'
    ],
    'game_audio_verified': False,
    'device_execution': False,
    'limitations': ['Does not measure AAudio output underruns, DSP cost, game streaming refill races or subjective listening quality.']
}
destination = root / 'analysis/voice-cursor-validation.json'
destination.write_text(json.dumps(receipt, indent=2))
print(f'VOICE_CURSOR_REGRESSION passed={match[1]} failed=0 baseline_failure_reproduced=true')
print(destination)
