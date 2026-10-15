"""Offline, pinned RC4 AudioTrack/renderer CPU placement; no ADB or new profile."""
from pathlib import Path
from collections import Counter
from datetime import datetime, timezone
import hashlib
import json
import sys

ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    hasher = hashlib.sha256()
    with path.open('rb') as source:
        while block := source.read(1024 * 1024):
            hasher.update(block)
    return hasher.hexdigest()


def pin(path):
    return {'path': str(path.resolve()), 'sha256': digest(path), 'bytes': path.stat().st_size}


def main():
    metadata_path = ROOT / 'analysis/cpu-profile-rg477m_043rc4_active.json'
    record_path = metadata_path.with_suffix('.data')
    topology_path = ROOT / 'analysis/cpu-environment-rg477m-043rc1-paused.json'
    core_path = ROOT / 'checkpoints/20261015-rg-0.4.3-rc4/libnhl07_core.so'
    apk_path = ROOT / 'checkpoints/20261015-rg-0.4.3-rc4/NHL07-RG477M-0.4.3-rc4.apk'
    metadata = json.loads(metadata_path.read_text())
    topology = json.loads(topology_path.read_text())
    assert digest(record_path) == metadata['artifacts']['record']['sha256'], 'Raw profile differs from pinned metadata'
    assert digest(core_path) == metadata['native_debug_sha256'], 'Frozen RC4 core differs from profile identity'
    assert digest(apk_path) == metadata['apk_sha256'], 'Frozen RC4 APK differs from profile identity'
    assert metadata['serial'] == topology['serial'], 'Topology belongs to another device'
    config = json.loads((ROOT / 'local-toolchains.json').read_text())
    reader_dir = Path(config['ndk']) / 'simpleperf'
    sys.path.insert(0, str(reader_dir))
    from simpleperf_report_lib import ReportLib
    reader = ReportLib()
    reader.SetRecordFile(str(record_path))
    counts, periods, names = Counter(), Counter(), {}
    total = 0
    while (sample := reader.GetNextSample()) is not None:
        total += 1
        counts[(sample.tid, sample.cpu)] += 1
        periods[(sample.tid, sample.cpu)] += sample.period
        names[sample.tid] = sample.thread_comm
    raw_meta = reader.MetaInfo()
    reader.Close()
    assert total == metadata['samples']
    cpu_context = [{key: cpu[key] for key in ('cpu', 'capacity', 'hardware_max_khz')}
                   for cpu in topology['metadata']['cpus']]
    all_cpus = sorted(cpu['cpu'] for cpu in cpu_context)
    low_cpus = [cpu['cpu'] for cpu in cpu_context if cpu['capacity'] < 900]
    high_cpus = [cpu['cpu'] for cpu in cpu_context if cpu['capacity'] >= 900]
    duration = metadata['seconds_recorded']

    def thread(tid):
        per_cpu = {str(cpu): counts[(tid, cpu)] for cpu in all_cpus}
        samples = sum(per_cpu.values())
        expected = next(row for row in metadata['threads'] if row['tid'] == tid)
        assert samples == expected['samples']
        total_period = sum(periods[(tid, cpu)] for cpu in all_cpus)
        low = sum(counts[(tid, cpu)] for cpu in low_cpus)
        high = sum(counts[(tid, cpu)] for cpu in high_cpus)
        return {'tid': tid, 'name': names[tid], 'samples': samples,
                'samples_by_cpu': per_cpu,
                'sample_period_ns_by_cpu': {str(cpu): periods[(tid, cpu)] for cpu in all_cpus},
                'sample_weighted_cpu_seconds': total_period / 1e9,
                'approx_one_core_utilization_percent': total_period / 1e9 / duration * 100,
                'low_capacity_cpu_samples': low, 'low_capacity_cpu_percent': low / samples * 100,
                'high_capacity_cpu_samples': high, 'high_capacity_cpu_percent': high / samples * 100}

    report = {
        'schema': 1, 'created_utc': datetime.now(timezone.utc).isoformat(),
        'offline_analysis': True, 'new_profile_recorded': False, 'adb_used': False,
        'device_or_production_changed': False,
        'build_identity': {'version': '0.4.3-rc4', 'version_code': 22,
                           **{key: metadata[key] for key in ('apk_sha256', 'native_debug_sha256', 'native_apk_sha256', 'serial', 'pid')}},
        'recording': {'scene': metadata['scene'], 'seconds_recorded': duration,
                      'samples': total, 'samples_lost': metadata['samples_lost'],
                      'event': metadata['event'], 'frequency_hz': metadata['sample_frequency_hz'],
                      'raw_meta': raw_meta},
        'audio': thread(3591), 'renderer': thread(3571),
        'topology_context': {'recorded_at_utc': topology['recorded_at_utc'],
                             'source_version': '0.4.3-rc1', 'source_pid': topology['pid'],
                             'cpus': cpu_context, 'low_capacity_indices': low_cpus,
                             'high_capacity_indices': high_cpus,
                             'classification_threshold_capacity': 900,
                             'assumption': 'CPU index-to-hardware topology is stable across these runs on this same device; this is prior context, not an RC4 frequency or scheduler measurement.'},
        'inputs': [pin(metadata_path), pin(record_path), pin(topology_path), pin(core_path), pin(apk_path),
                   pin(reader_dir / 'simpleperf_report_lib.py'), pin(Path(__file__))],
        'interpretation': 'AudioTrack spent 99.195% of its sampled running CPU activity on the low-capacity cluster, while the renderer spent 99.978% on the high-capacity cluster. This supports testing audio-thread placement when a CPU7-only DSP benchmark has spare throughput.',
        'limitations': [
            'This is the existing exact RC4 active-match profile; it is not a new RC5/RC6 recording or an audio-fix A/B result.',
            'CPU sample placement does not prove an affinity restriction; scheduler policy, priority, affinity masks and current frequencies were not captured for this RC4 AudioTrack thread.',
            'Prior RC1 hardware capacities and hardware maximum frequency values identify clusters; they are not operating-frequency, governor or thermal measurements for this capture.',
            'Sum(sample.period) is sample-weighted user CPU time, not independently measured wall time or exact task-clock utilization.',
            'No video-FPS improvement, audio waveform correctness, subjective sound quality or real-time deadline success is established by this analysis.',
        ],
    }
    output = ROOT / 'analysis/audio-cpu-placement-rc4.json'
    output.write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'output': str(output), 'raw_profile_sha256': digest(record_path),
                      'audio': report['audio'], 'renderer': report['renderer']}, indent=2))


if __name__ == '__main__':
    main()
