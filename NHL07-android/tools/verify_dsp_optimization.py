"""Build and verify bit-exact DSP optimization; prepare standalone ARM tests.

No device operations. ARM execution / timing belongs to a separately pinned
device receipt. The full baseline CPU is reconstructed from the immutable
multiply oracle and must match the original upstream SHA-256 before use.
"""
from pathlib import Path
import hashlib
import json
import os
import re
import shutil
import subprocess

root = Path(__file__).resolve().parents[1]
build = root / 'build/dsp-optimization'
build.mkdir(parents=True, exist_ok=True)
config = json.loads((root / 'local-toolchains.json').read_text())
llvm = Path(config['ndk']) / 'toolchains/llvm/prebuilt/windows-x86_64'
clang = llvm / 'bin/clang.exe'
env = dict(os.environ, TMP=str(build), TEMP=str(build))
upstream_sha = 'b2879f6895ac5b4702a3a77dbd94fc5e4517928f5ef449030d44557860833e5b'

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def run(command):
    result = subprocess.run(list(map(str, command)), env=env, capture_output=True,
                            text=True, encoding='utf-8', errors='replace', timeout=120)
    if result.returncode:
        raise RuntimeError(result.stdout + result.stderr)
    return result.stdout

cpu = (root / 'deps/dsp56300/dsp_cpu.c').read_text()
oracle = (root / 'tests/dsp_reference_multiply.h').read_text()
original_multiply = oracle[oracle.index('static void reference_dsp_mul56('):]
original_multiply = original_multiply.replace('static void reference_dsp_mul56(', 'static void dsp_mul56(', 1)
start = cpu.index('static void dsp_mul56(', cpu.index('static void dsp_mul56(') + 1)
end = cpu.index('static void dsp_rnd56', start)
baseline = cpu[:start] + original_multiply + cpu[end:]
assert hashlib.sha256(baseline.encode()).hexdigest() == upstream_sha, 'Baseline differs outside the tested multiply change'
baseline_dir = build / 'baseline-deps'
shutil.copytree(root / 'deps/dsp56300', baseline_dir, dirs_exist_ok=True)
(baseline_dir / 'dsp_cpu.c').write_bytes(baseline.encode())
for name in ['native_dsp.c', 'native_dsp.h']:
    shutil.copy2(root / 'src' / name, baseline_dir / name)

runner = root / 'tests/dsp_optimization_runner.c'
arm_common = [clang, '--target=aarch64-linux-android29', '--sysroot=' + str(llvm / 'sysroot'),
              '-fwrapv', '-fno-strict-aliasing', '-ffp-contract=off',
              '-Wl,-z,max-page-size=16384', '-I' + str(root / 'tests')]
modes = {
    'baseline': (['-O2'], [baseline_dir]),
    'flags': (['-O3', '-fvisibility=hidden'], [baseline_dir]),
    'multiply': (['-O3', '-fvisibility=hidden'], [root / 'src', root / 'deps/dsp56300']),
}
arm_records = {}
for mode, (flags, includes) in modes.items():
    target = build / ('dsp_opt_' + mode + '_arm64')
    run(arm_common + flags + ['-I' + str(path) for path in includes] + [runner, '-lm', '-o', target])
    arm_records[mode] = {'sha256': sha(target), 'bytes': target.stat().st_size,
                         'flags': flags, 'path': str(target)}

# Compile with the same Clang code generator on the host, using the installed
# Windows SDK / CRT explicitly. This avoids persistent MSBuild worker state.
vs_root = Path('C:/Program Files (x86)/Microsoft Visual Studio')
vc = sorted(vs_root.glob('*/BuildTools/VC/Tools/MSVC/*'))[-1]
sdk = Path('C:/Program Files (x86)/Windows Kits/10')
sdk_version = sorted((sdk / 'Include').iterdir())[-1].name
host_common = [clang, '--target=x86_64-pc-windows-msvc', '-O2', '-fwrapv',
               '-fno-strict-aliasing', '-ffp-contract=off', '-D_CRT_SECURE_NO_WARNINGS',
               '-isystem', vc / 'include', '-isystem', sdk / 'Include' / sdk_version / 'ucrt',
               '-isystem', sdk / 'Include' / sdk_version / 'shared',
               '-isystem', sdk / 'Include' / sdk_version / 'um', '-I' + str(root / 'tests')]
link_common = [vc / 'bin/Hostx64/x64/link.exe', '/nologo', '/LIBPATH:' + str(vc / 'lib/x64'),
               '/LIBPATH:' + str(sdk / 'Lib' / sdk_version / 'um/x64'),
               '/LIBPATH:' + str(sdk / 'Lib' / sdk_version / 'ucrt/x64'),
               'libcmt.lib', 'libucrt.lib', 'libvcruntime.lib', 'kernel32.lib', 'oldnames.lib']
host_records = {}
for mode in ['baseline', 'multiply']:
    includes = modes[mode][1]
    obj = build / ('dsp_opt_' + mode + '_host.obj')
    exe = obj.with_suffix('.exe')
    run(host_common + ['-I' + str(path) for path in includes] + [runner, '-c', '-o', obj])
    run(link_common + [obj, '/OUT:' + str(exe)])
    snapshot = build / (mode + '-host.snapshot')
    output = run([exe, root / 'analysis/first-dsp-image.bin', snapshot, '1000'])
    (root / 'logs' / ('dsp-optimization-' + mode + '-host.log')).write_text(output)
    print(output.strip(), flush=True)
    match = re.fullmatch(r'DSP_OPT passed=(\d+) snapshot_frames=(\d+) benchmark_frames=(\d+) '
                         r'seconds=([\d.]+) ns_per_dsp_frame=([\d.]+) digest=([0-9a-f]+) '
                         r'instructions=(\d+) dma_bytes=(\d+)\s*', output)
    assert match and int(match[1]) == 2082944 and int(match[2]) == 64
    host_records[mode] = {'binary_sha256': sha(exe), 'checks_passed': int(match[1]),
                          'snapshot_frames': int(match[2]), 'snapshot_sha256': sha(snapshot),
                          'digest': match[6], 'instructions': int(match[7]), 'dma_bytes': int(match[8])}
assert (build / 'baseline-host.snapshot').read_bytes() == (build / 'multiply-host.snapshot').read_bytes()
sources = [root / 'src/native_dsp.c', root / 'src/native_dsp.h',
           root / 'tests/dsp_reference_multiply.h', runner, Path(__file__).resolve()]
sources += sorted((root / 'deps/dsp56300').rglob('*'))
report = {'status': 'passed', 'upstream_cpu_sha256': upstream_sha,
          'baseline_reconstructed_exact_upstream': True,
          'host': host_records, 'arm64_binaries_prepared': arm_records,
          'source_sha256': {p.relative_to(root).as_posix(): sha(p) for p in sources if p.is_file()},
          'scope': ['2082944 arithmetic comparisons including every uint8 sign and unmasked input upper bits',
                    '64 complete DSP-chain frames with output, registers, stacks, X/Y/P RAM and DMA scratch byte exact',
                    '1000 further DSP frames have identical output digest, instruction count and DMA bytes'],
          'not_validated_by_this_tool': ['ARM64 execution; see separate device receipt',
                                       'Actual music playback, audible quality or gameplay scheduling']}
(root / 'analysis/dsp-optimization-validation.json').write_text(json.dumps(report, indent=2) + '\n')
print('DSP optimization host validation passed; ARM64 binaries prepared', flush=True)
