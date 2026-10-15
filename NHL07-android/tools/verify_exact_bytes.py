"""Build standalone exact-comparison contracts and benchmark; never change the game."""
from pathlib import Path
import argparse, hashlib, json, re, statistics, subprocess
root = Path(__file__).resolve().parents[1]
ap = argparse.ArgumentParser(); ap.add_argument('--serial', required=True)
ap.add_argument('--mode', choices=['all', 'contracts', 'bench'], default='all')
args = ap.parse_args()
cfg = json.loads((root / 'local-toolchains.json').read_text())
llvm = Path(cfg['ndk']) / 'toolchains/llvm/prebuilt/windows-x86_64'
build = root / 'build/exact-bytes-validation'; build.mkdir(parents=True, exist_ok=True)
binary = build / 'exact_bytes_arm64'
sources = [root / 'src/exact_bytes.h', root / 'tests/exact_bytes_contract.cpp', Path(__file__)]

def run(command, timeout=180):
    r = subprocess.run(list(map(str, command)), capture_output=True, text=True,
                       encoding='utf-8', errors='replace', timeout=timeout)
    assert r.returncode == 0, r.stdout[-5000:] + r.stderr[-5000:]
    return r.stdout + r.stderr

run([llvm / 'bin/clang++.exe', '--target=aarch64-linux-android29',
     '--sysroot=' + str(llvm / 'sysroot'), '-std=c++17', '-O2',
     '-Wl,-z,max-page-size=16384', '-I' + str(root / 'src'), sources[1],
     '-static-libstdc++', '-lm', '-o', binary])
prefix = [cfg['adb'], '-P', str(cfg['adb_port']), '-s', args.serial]
remote = '/data/local/tmp/nhl07-438eaeada465/exact_bytes_arm64'
run(prefix + ['push', binary, remote]); run(prefix + ['shell', 'chmod', '700', remote])
options = [] if args.mode == 'all' else ['--' + ('bench-only' if args.mode == 'bench' else 'contracts-only')]
output = run(prefix + ['shell', remote] + options, timeout=1200)
print(output)
suffix = '' if args.mode == 'all' else '-' + args.mode
(root / 'logs' / ('exact-bytes' + suffix + '.log')).write_text(output, encoding='utf-8')
rows = [dict(mode=mode, algorithm=alg, repeat=int(rep), logical_bytes=int(count),
             wall_ms=float(wall), cpu_ms=float(cpu))
        for mode, alg, rep, count, wall, cpu in re.findall(
            r'BENCH mode=(\w+) algorithm=(\w+) repeat=(\d+) logical_bytes=(\d+) wall_ms=([\d.]+) cpu_ms=([\d.]+)', output)]
summary = {}
for mode in {r['mode'] for r in rows}:
    summary[mode] = {}
    for alg in {r['algorithm'] for r in rows}:
        chosen = [r for r in rows if r['mode'] == mode and r['algorithm'] == alg]
        summary[mode][alg] = {key: statistics.median(r[key] for r in chosen) for key in ['wall_ms', 'cpu_ms']}
        summary[mode][alg]['wall_max_min_ratio'] = max(r['wall_ms'] for r in chosen) / min(r['wall_ms'] for r in chosen)
    baseline = summary[mode]['libc_memcmp']
    stable = all(result['wall_max_min_ratio'] <= 1.25 for result in summary[mode].values())
    for result in summary[mode].values():
        result['comparison_stable'] = stable
        result['wall_speedup_vs_libc'] = baseline['wall_ms'] / result['wall_ms'] if stable else None
match = re.search(r'EXACT_BYTES passed=(\d+) failed=0', output)
if args.mode != 'bench': assert match
report = dict(serial=args.serial, passed=int(match[1]) if match else None, failed=0 if match else None,
    contracts_executed=bool(match),
    scope=(['Every-byte mutations for 64 bytes through 1 MiB, all alignments 0..31, vector tails, zero size',
            'Protected mmap page boundaries catch any overread; all-equal and final-byte mutations',
            'Exact NEON 128/256-byte chunk equality and full-scan256, no freshness assumptions'] if match else
           ['Standalone equality throughput benchmark; correctness contracts not executed in this run']),
    benchmark_rows=rows, median_benchmark=summary,
    limitations=['Standalone microbenchmark; the running game and thermal/frequency changes can add noise',
                 'Warm means a 1 MiB logical working set; streaming means 200 MiB with two buffers',
                 'No integration or FPS improvement claimed by this contract'],
    binary_sha256=hashlib.sha256(binary.read_bytes()).hexdigest(),
    tested_sources={p.relative_to(root).as_posix(): hashlib.sha256(p.read_bytes()).hexdigest() for p in sources})
(root / 'analysis' / ('exact-bytes-validation' + suffix + '.json')).write_text(json.dumps(report, indent=2), encoding='utf-8')
print(json.dumps(summary, indent=2))
