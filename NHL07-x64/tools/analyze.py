"""Reproducible static analysis and translation; does not launch the game."""
from pathlib import Path
import argparse
import datetime
import hashlib
import json
import os
import subprocess
import sys

root = Path(__file__).resolve().parents[1]
backend = root / 'vendor/xboxrecomp'
analysis = root / 'analysis'
xbe = root / 'input/default.xbe'
expected = '438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
assert hashlib.sha256(xbe.read_bytes()).hexdigest() == expected, 'Wrong NHL 07 XBE revision'
parser = argparse.ArgumentParser()
parser.add_argument('--start', choices=['parse', 'disasm', 'identify', 'abi', 'translate'], default='parse')
args = parser.parse_args()
env = dict(os.environ, PYTHONUTF8='1', PYTHONDONTWRITEBYTECODE='1', PYTHONUNBUFFERED='1')
(analysis / 'no_icall_sites.json').write_text('{}\n', encoding='utf-8')
stages = [
    ('parse', 'tools.xbe_parser', [xbe, '--json', analysis/'xbe.json', '--quiet']),
    ('disasm', 'tools.disasm', [xbe, '-o', analysis/'disasm', '--analysis-json', analysis/'xbe.json', '--force', '-v']),
    ('identify', 'tools.func_id', [xbe, '--functions', analysis/'disasm/functions.json', '--strings', analysis/'disasm/strings.json', '--xrefs', analysis/'disasm/xrefs.json', '-o', analysis/'func_id']),
    ('abi', 'tools.abi_analysis', [xbe, '--disasm-dir', analysis/'disasm', '--func-id-dir', analysis/'func_id', '--output-dir', analysis/'abi']),
    ('translate', 'tools.recomp', [xbe, '--all', '--split', '250', '--game-name', 'nhl_07_recomp', '--disasm-dir', analysis/'disasm', '--func-id-dir', analysis/'func_id', '--abi-dir', analysis/'abi', '--icall-sites', analysis/'no_icall_sites.json', '--exclude-manual', root/'src/overrides.c', '--manual-functions', analysis/'native-graphics-entries.json', '--gen-dir', root/'src/recomp/gen', '--output-dir', analysis/'recomp'])
]
running = False
for name, module, arguments in stages:
    running |= name == args.start
    if not running:
        continue
    print('START', name, datetime.datetime.now().isoformat(), flush=True)
    command = [sys.executable, '-m', module, *map(str, arguments)]
    log = root / 'logs' / (name + '.log')
    with log.open('w', encoding='utf-8') as stream:
        result = subprocess.run(command, cwd=backend, env=env, stdout=stream, stderr=subprocess.STDOUT)
    print('END', name, result.returncode, flush=True)
    if result.returncode:
        print(log.read_text(encoding='utf-8')[-5000:])
        raise SystemExit(result.returncode)
if (analysis/'ghidra-functions.json').exists():
    subprocess.run([sys.executable, str(root/'tools/recover_jump_thunks.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/apply_data_cache_boundary.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/apply_vertex_cache_boundary.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/apply_video_cache_boundary.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/apply_swizzle_cache_boundary.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/apply_scene_abi_guard.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/trace_clock_setup.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/trace_movie_clock.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/trace_movie_requests.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/trace_vp6_decode.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/apply_graphics_hooks.py')], env=env, check=True)
subprocess.run([sys.executable, str(root.with_name('NHL07-android')/'tools/apply_input_hooks.py')], env=env, check=True)
subprocess.run([sys.executable, str(root.with_name('NHL07-android')/'tools/apply_audio_hooks.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/audit_runtime_thunk.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/translate_runtime_callbacks.py')], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/translate_static_recovered.py'),'--apply'], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/recover_linker_thunks.py'),'--apply'], env=env, check=True)
subprocess.run([sys.executable, str(root/'tools/apply_thread_api.py')], env=env, check=True)
