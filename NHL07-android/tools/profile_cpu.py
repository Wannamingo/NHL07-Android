"""Profile an already running profileable release; never start or stop the game."""
from pathlib import Path
import argparse
import datetime
import hashlib
import json
import re
import subprocess

ROOT = Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--serial', required=True)
parser.add_argument('--label', required=True)
parser.add_argument('--scene', required=True)
parser.add_argument('--seconds', type=int, default=20)
parser.add_argument('--render-tid', type=int)
parser.add_argument('--report-only', action='store_true')
parser.add_argument('--pid', type=int, help='Original PID, required for report-only')
args = parser.parse_args()
assert re.fullmatch(r'[a-zA-Z0-9_-]+', args.label), 'Unsafe label'
assert 1 <= args.seconds <= 60
cfg = json.loads((ROOT / 'local-toolchains.json').read_text())
ndk = Path(cfg['ndk'])
adb_prefix = [cfg['adb'], '-P', str(cfg['adb_port']), '-s', args.serial]
stem = 'cpu-profile-' + args.label
record_path = ROOT / 'analysis' / (stem + '.data')
record_log = ROOT / 'logs' / (stem + '-record.txt')
apk = json.loads((ROOT / 'analysis/apk.json').read_text())
core = ROOT / 'build/libnhl07_core.so'


def sha(path):
    with path.open('rb') as handle:
        return hashlib.file_digest(handle, 'sha256').hexdigest()


assert sha(core) == apk['native_debug_sha256'], 'Core symbols do not match APK metadata'


def run(command, timeout=60):
    result = subprocess.run(command, capture_output=True, text=True,
                            encoding='utf-8', errors='replace', timeout=timeout)
    if result.returncode:
        raise RuntimeError(' '.join(command) + '\n' + result.stdout + result.stderr)
    return result.stdout, result.stderr


started = datetime.datetime.now().astimezone().isoformat()
if args.report_only:
    assert args.pid, 'Report-only needs the recorded PID'
    pid = args.pid
else:
    pid = int(run(adb_prefix + ['shell', 'pidof', 'org.nhl07.port'])[0].strip())
    startup = run(adb_prefix + ['shell', 'cat',
                  '/sdcard/Android/data/org.nhl07.port/files/startup.log'])[0]
    assert 'timeout=0;' in startup, 'Requires a normal run without GPU capture diagnostics'
    helper = '/data/local/tmp/nhl07-simpleperf-' + args.label
    remote_data = '/data/local/tmp/' + stem + '.data'
    run(adb_prefix + ['push', str(ndk / 'simpleperf/bin/android/arm64/simpleperf'), helper])
    run(adb_prefix + ['shell', 'chmod', '755', helper])
    command = adb_prefix + ['shell', helper, 'record', '--app', 'org.nhl07.port',
                            '-p', str(pid), '-e', 'cpu-clock:u', '-f', '500',
                            '--duration', str(args.seconds), '-g', '-o', remote_data]
    result = subprocess.run(command, capture_output=True, text=True,
                            encoding='utf-8', errors='replace', timeout=args.seconds + 60)
    record_log.write_text(result.stdout + result.stderr, encoding='utf-8')
    assert result.returncode == 0, result.stdout + result.stderr
    assert int(run(adb_prefix + ['shell', 'pidof', 'org.nhl07.port'])[0].strip()) == pid
    run(adb_prefix + ['pull', remote_data, str(record_path)])

assert record_path.exists()
reporter = str(ndk / 'simpleperf/bin/windows/x86_64/simpleperf.exe')
base = [reporter, 'report', '-i', str(record_path), '--symdir', str(core.parent)]
reports = {
    'self': ['--sort', 'dso,symbol', '-n', '--percent-limit', '0.1'],
    'threads': ['--sort', 'comm,tid', '-n', '--percent-limit', '0'],
    'children': ['--sort', 'comm,tid,dso,symbol', '-n', '--children', '-g',
                 'caller', '--max-stack', '8', '--percent-limit', '0.8'],
    'memcmp-callers': ['--symbols', '__memcmp_aarch64', '-n', '-g', 'callee',
                       '--max-stack', '30', '--percent-limit', '0.1'],
}
if args.render_tid:
    reports['render-self'] = ['--tids', str(args.render_tid), '--sort', 'dso,symbol',
                              '-n', '--percent-limit', '0.1']
artifacts = {'record': {'path': str(record_path), 'sha256': sha(record_path)}}
for name, options in reports.items():
    path = ROOT / 'logs' / (stem + '-' + name + '.txt')
    run(base + options + ['-o', str(path)], timeout=180)
    artifacts[name] = {'path': str(path), 'sha256': sha(path)}

raw_log = record_log.read_bytes()
record_text = raw_log.decode('utf-16') if raw_log.startswith(b'\xff\xfe') else raw_log.decode('utf-8-sig')
timing = re.search(r'Recorded for ([\d.]+) seconds', record_text)
count = re.search(r'Samples recorded: ([\d,]+)\. Samples lost: ([\d,]+)', record_text)
assert timing and count, 'Record did not report successful completion'
self_text = (ROOT / 'logs' / (stem + '-self.txt')).read_text()
threads_text = (ROOT / 'logs' / (stem + '-threads.txt')).read_text()
threads = [{'sample_percent': float(p), 'samples': int(n), 'name': name, 'tid': int(tid)}
           for p, n, name, tid in re.findall(r'^([\d.]+)%\s+(\d+)\s+(\S+)\s+(\d+)\s*$',
                                            threads_text, flags=re.M)]
summary = {
    'apk_sha256': apk['sha256'], 'native_debug_sha256': apk['native_debug_sha256'],
    'native_apk_sha256': apk['native_apk_sha256'], 'serial': args.serial, 'pid': pid,
    'label': args.label, 'scene': args.scene, 'report_generated_at': started,
    'seconds_recorded': float(timing[1]), 'samples': int(count[1].replace(',', '')),
    'samples_lost': int(count[2].replace(',', '')), 'event': 'cpu-clock:u',
    'sample_frequency_hz': 500, 'callgraph': 'DWARF', 'app_type': 'profileable',
    'debuggable': False, 'device_security_changed': False, 'game_restarted_by_profiler': False,
    'threads': threads, 'artifacts': artifacts,
    'limitations': [
        'Percentages describe sampled running CPU time across the selected threads, not wall time or GPU time.',
        'Blocked GPU or kernel waits are absent from the user-mode CPU-clock sample.',
        'Profiling adds overhead; measure FPS separately with profiling stopped.',
        'The supplied scene description must match direct visual observation.',
    ],
}
if args.render_tid:
    summary['render_tid'] = args.render_tid
    text = (ROOT / 'logs' / (stem + '-render-self.txt')).read_text()
    match = re.search(r'^([\d.]+)%\s+(\d+)\s+\S+\s+__memcmp_aarch64\s*$', text, flags=re.M)
    if match:
        summary['render_memcmp_self_percent'] = float(match[1])
        summary['render_memcmp_samples'] = int(match[2])
output = ROOT / 'analysis' / (stem + '.json')
output.write_text(json.dumps(summary, indent=2), encoding='utf-8')
print(json.dumps({'report': str(output), 'samples': summary['samples'],
                  'samples_lost': summary['samples_lost']}))
