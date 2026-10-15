#!/usr/bin/env python3
"""Replay the recorded NV2A fixture through production ANGLE in separate processes.

This runner never installs or changes an APK or Android settings. Each backend
runs seven optimization modes; all five complete PPMs must equal that backend's
baseline. Cross-backend pixel differences are reported without failing the run.
"""
from __future__ import annotations

import argparse
import datetime as dt
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
REMOTE = "/data/local/tmp/nhl07-angle-immediate"
FIXTURE_NAMES = ("draw-failure-push.bin", "draw-failure-state.bin", "draw-failure-ram.bin",
                 "draw-failure-physical.bin", "draw-failure.json", "immediate-expected.bin")
CAPTURES = ("immediate-replay", "opaque-immediate-replay", "dedup-indexed-transition",
            "dedup-immediate-transition", "merged-indexed-interleaved")
MODES = {
    "baseline": (0, 0, 0, 0), "dedup": (1, 0, 0, 0), "stream": (1, 1, 0, 0),
    "merged": (1, 1, 1, 0), "packed": (1, 0, 0, 1),
    "packed_stream": (1, 1, 0, 1), "packed_merged": (1, 1, 1, 1),
}
BACKENDS = {"system": 1, "custom": 2}


def require(condition, message):
    if not condition:
        raise RuntimeError(message)


def sha(path):
    result = hashlib.sha256()
    with Path(path).open("rb") as source:
        for chunk in iter(lambda: source.read(1024 * 1024), b""):
            result.update(chunk)
    return result.hexdigest()


def workspace_file(path):
    result = Path(path).resolve()
    require(result.is_relative_to(ROOT.resolve()) and result.is_file(), f"Expected workspace file: {path}")
    return result


def verify_file(path, wanted):
    local = workspace_file(path)
    require(re.fullmatch(r"[0-9a-f]{64}", wanted) is not None, "Invalid expected SHA256")
    require(sha(local) == wanted, f"Pinned file changed: {local}")
    return local


def read_report(name):
    path = workspace_file(ROOT / "analysis" / name)
    raw = path.read_bytes()
    return (json.loads(raw.decode("utf-8-sig")),
            {"path": str(path), "sha256": hashlib.sha256(raw).hexdigest()}, raw)


def prepare_plan(selected_backends):
    config = json.loads((ROOT / "local-toolchains.json").read_text(encoding="utf-8-sig"))
    build, build_pin, build_raw = read_report("angle-immediate-contract-build.json")
    bridge, bridge_pin, bridge_raw = read_report("angle-bridge-build.json")
    adreno, adreno_pin, adreno_raw = read_report("adrenotools-probe-build.json")
    driver, driver_pin, driver_raw = read_report("turnip-probe-build.json")
    verify_file(build["source"], build["source_sha256"])
    require(build.get("sources"), "Production source pins are missing")
    for relative, wanted in build["sources"].items():
        verify_file(ROOT / relative, wanted)
    for path, wanted in build.get("shader_libraries", {}).items():
        verify_file(path, wanted)
    verify_file(bridge["bridge"]["source"], bridge["bridge"]["source_sha256"])
    verify_file(bridge["bridge"]["version_map"], bridge["bridge"]["version_map_sha256"])
    payloads = []

    def add(path, wanted, relative):
        local = verify_file(path, wanted)
        require(re.fullmatch(r"[A-Za-z0-9_./-]+", relative) is not None and ".." not in relative.split("/"),
                "Unsafe remote payload path")
        payloads.append({"local": str(local), "relative": relative,
                         "sha256": wanted, "bytes": local.stat().st_size})

    add(build["binary"], build["binary_sha256"], "angle_immediate_contract")
    for row in bridge["libraries"]:
        add(row["derived"], row["derived_sha256"], "angle/" + Path(row["derived"]).name)
    add(bridge["bridge"]["path"], bridge["bridge"]["sha256"], "angle/libab.so")
    if "custom" in selected_backends:
        for name in ("libadrenotools.so", "libhook_impl.so", "libmain_hook.so"):
            matches = [row for row in adreno["artifacts"] if Path(row["path"]).name == name]
            require(len(matches) == 1, f"Expected one loader library: {name}")
            add(matches[0]["path"], matches[0]["sha256"], "hooks/" + name)
        add(driver["library"], driver["library_sha256"], "driver/libvulkan_freedreno.so")
    fixture = Path(build["fixture_directory"]).resolve()
    require(fixture == (ROOT / "checkpoints/20261015-inline-capture").resolve(), "Unexpected fixture checkpoint")
    require(set(build["fixture_sha256"]) == set(FIXTURE_NAMES), "Unexpected fixture pin set")
    for name in FIXTURE_NAMES:
        local = build["oracle"] if name == "immediate-expected.bin" else fixture / name
        add(local, build["fixture_sha256"][name], "common/" + name)
    require(build["oracle_sha256"] == build["fixture_sha256"]["immediate-expected.bin"], "Oracle pins disagree")
    require(len({row["relative"] for row in payloads}) == len(payloads), "Duplicate remote payload names")
    metadata = json.loads((fixture / "draw-failure.json").read_text(encoding="utf-8-sig"))
    cursors = [metadata["program_cursor"], metadata["constant_cursor"]]
    require(all(type(value) is int and 0 <= value < 65536 for value in cursors), "Invalid recorded cursors")
    oracle = Path(build["oracle"]).read_bytes()
    require(len(oracle) >= 4, "Oracle is empty")
    batches = struct.unpack_from("<I", oracle)[0]
    position, vertices = 4, 0
    require(batches == 6, "Expected six recorded batches")
    for _ in range(batches):
        require(position + 8 <= len(oracle), "Oracle batch truncated")
        _, count = struct.unpack_from("<II", oracle, position)
        position += 8 + count * 64 * 4
        vertices += count
        require(position <= len(oracle), "Oracle vertices truncated")
    require(position == len(oracle) and vertices == 352, "Expected exactly 352 full oracle vertex records")
    return {"config": config, "build_report_pins": [build_pin, bridge_pin, adreno_pin, driver_pin],
            "report_snapshots": [build_raw, bridge_raw, adreno_raw, driver_raw],
            "payloads": payloads, "program_cursor": cursors[0], "constant_cursor": cursors[1],
            "binary_sha256": build["binary_sha256"], "oracle_batches": batches, "oracle_vertices": vertices}


def parse_output(output, backend, mode, return_code):
    require(return_code == 0, f"Probe exited with status {return_code}")
    require(re.search(rf"^ANGLE_IMMEDIATE PASS mode={backend}(?:\s|$)", output, re.M), "Wrapper PASS marker missing")
    verified = re.findall(r"^ANGLE_IMMEDIATE verified_mode=(\d+) description=(.*)$", output, re.M)
    require(len(verified) == 1 and int(verified[0][0]) == backend, "Actual backend validation missing or wrong")
    description = verified[0][1]
    require("ANGLE" in description and "Vulkan" in description, "Actual renderer is not ANGLE Vulkan")
    if backend == 2:
        require("turnip" in description.lower() and "9c7e022677" in description,
                "Actual backend description does not identify supplied Turnip V32")
    require("IMMEDIATE_REPLAY FAIL" not in output and "ANGLE_IMMEDIATE FAIL" not in output, "Probe reported failed checks")

    def fields(pattern, names):
        rows = re.findall(pattern, output, re.M)
        require(len(rows) == 1, "Expected one statistics row: " + names[0])
        return dict(zip(names, map(int, rows[0])))

    record = fields(r"^IMMEDIATE_REPLAY passed=(\d+) failed=0 batches=(\d+) vertices=(\d+) nonblack=(\d+) opaque_nonblack=(\d+)\s*$",
                    ("passed", "batches", "vertices", "nonblack", "opaque_nonblack"))
    require(record["passed"] > 0 and record["batches"] == 6 and record["vertices"] == 352,
            "Recorded batch/vertex validation incomplete")
    require(record["nonblack"] == 0 and record["opaque_nonblack"] > 0, "Transparent/controlled opaque fixture invalid")
    record.update(fields(r"^DRAW_DEDUP enabled=(\d+) uniform_uploads=(\d+) uniform_reuses=(\d+) immediate_uploads=(\d+) sampler_updates=(\d+)\s*$",
                         ("draw_dedup", "uniform_uploads", "uniform_reuses", "immediate_uploads", "sampler_updates")))
    record.update(fields(r"^DRAW_STREAM enabled=(\d+) merge=(\d+) uploads=(\d+) bytes=(\d+) allocations=(\d+) rotations=(\d+)\s*$",
                         ("stream_upload", "merge_upload", "stream_uploads", "stream_bytes", "stream_allocations", "stream_rotations")))
    record.update(fields(r"^DRAW_PACK enabled=(\d+) draws=(\d+) slices=(\d+) bytes=(\d+) fallbacks=(\d+) data_uploads=(\d+)\s*$",
                         ("pack_upload", "packed_draws", "packed_slices", "packed_bytes", "packed_fallbacks", "data_uploads")))
    require(tuple(record[key] for key in ("draw_dedup", "stream_upload", "merge_upload", "pack_upload")) == MODES[mode],
            "Optimization flags do not match requested mode")
    require(record["packed_fallbacks"] == 0, "Packed upload unexpectedly used a fallback")
    record["actual_backend_description"] = description
    return record


def validate_counters(records):
    require(set(records) == set(MODES), "Some optimization modes did not complete")
    checks = {
        "dedup_reduces_uniform_uploads": records["dedup"]["uniform_uploads"] < records["baseline"]["uniform_uploads"],
        "dedup_reduces_immediate_uploads": records["dedup"]["immediate_uploads"] < records["baseline"]["immediate_uploads"],
        "dedup_reduces_sampler_updates": records["dedup"]["sampler_updates"] < records["baseline"]["sampler_updates"],
        "baseline_and_dedup_do_not_stream": records["baseline"]["stream_uploads"] == records["dedup"]["stream_uploads"] == 0,
        "merge_reduces_stream_uploads": records["stream"]["stream_uploads"] > records["merged"]["stream_uploads"] > 0,
        "merge_reduces_stream_bytes": records["stream"]["stream_bytes"] > records["merged"]["stream_bytes"] > 0,
        "packing_reduces_stream_uploads": records["packed_stream"]["stream_uploads"] < records["stream"]["stream_uploads"],
        "packing_reduces_merged_uploads": records["packed_merged"]["stream_uploads"] < records["merged"]["stream_uploads"],
        "packing_reduces_dedup_data_uploads": records["packed"]["data_uploads"] < records["dedup"]["data_uploads"],
        "packing_reduces_stream_data_uploads": records["packed_stream"]["data_uploads"] < records["stream"]["data_uploads"],
    }
    require(all(checks.values()), "Counter comparisons failed: " + ", ".join(key for key, value in checks.items() if not value))
    return checks


def read_ppm(path):
    contents = Path(path).read_bytes()
    parts = contents.split(b"\n", 3)
    require(len(parts) == 4 and parts[0] == b"P6" and parts[2] == b"255", f"Invalid PPM header: {path}")
    dimensions = parts[1].split()
    require(len(dimensions) == 2, f"Invalid PPM dimensions: {path}")
    width, height = map(int, dimensions)
    require((width, height) == (640, 480) and len(parts[3]) == width * height * 3, f"Incomplete PPM: {path}")
    return contents, parts[3], width, height


def validate_capture(folder, name):
    ppm = folder / (name + ".ppm")
    sidecar = folder / (name + ".json")
    contents, rgb, width, height = read_ppm(ppm)
    metadata = json.loads(sidecar.read_text(encoding="utf-8-sig"))
    require(metadata.get("width") == width and metadata.get("height") == height, "Capture metadata dimensions disagree")
    require(metadata.get("gameplay_verified") is False, "Replay sidecar must not claim complete gameplay")
    nonblack = sum(any(rgb[offset:offset + 3]) for offset in range(0, len(rgb), 3))
    require(metadata.get("nonblack_pixels") == nonblack, "Capture metadata does not match complete pixels")
    return {"ppm": str(ppm), "sha256": hashlib.sha256(contents).hexdigest(), "bytes": len(contents),
            "sidecar": str(sidecar), "sidecar_sha256": sha(sidecar), "width": width, "height": height,
            "nonblack_pixels": nonblack, "metadata": metadata}


def compare_backend(folder):
    records = {}
    for capture in CAPTURES:
        baseline = (folder / "baseline" / (capture + ".ppm")).read_bytes()
        modes = {}
        for mode in MODES:
            path = folder / mode / (capture + ".ppm")
            actual = path.read_bytes()
            modes[mode] = {"sha256": hashlib.sha256(actual).hexdigest(), "bytes": len(actual),
                           "byte_exact": actual == baseline}
        records[capture] = {"baseline_sha256": hashlib.sha256(baseline).hexdigest(),
                            "baseline_bytes": len(baseline), "modes": modes,
                            "all_modes_byte_exact": all(value["byte_exact"] for value in modes.values())}
    return records


def cross_backend_comparison(folder):
    result = {}
    for capture in CAPTURES:
        first = folder / "system/baseline" / (capture + ".ppm")
        second = folder / "custom/baseline" / (capture + ".ppm")
        if not first.is_file() or not second.is_file():
            result[capture] = {"available": False}
            continue
        a, rgb_a, _, _ = read_ppm(first)
        b, rgb_b, _, _ = read_ppm(second)
        different_bytes = sum(x != y for x, y in zip(rgb_a, rgb_b))
        different_pixels = sum(rgb_a[n:n + 3] != rgb_b[n:n + 3] for n in range(0, len(rgb_a), 3))
        result[capture] = {"available": True, "informational_only": True,
                           "system_sha256": hashlib.sha256(a).hexdigest(), "custom_sha256": hashlib.sha256(b).hexdigest(),
                           "system_bytes": len(a), "custom_bytes": len(b), "whole_ppm_byte_exact": a == b,
                           "different_rgb_bytes": different_bytes, "different_pixels": different_pixels}
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--serial", required=True)
    parser.add_argument("--backend", choices=("both", "system", "custom"), default="both")
    parser.add_argument("--verify-only", action="store_true", help="Verify all local source/payload pins without invoking ADB")
    args = parser.parse_args()
    require(re.fullmatch(r"[A-Za-z0-9_.:-]{1,128}", args.serial), "Invalid serial")
    selected = list(BACKENDS) if args.backend == "both" else [args.backend]
    plan = prepare_plan(selected)
    if args.verify_only:
        print(json.dumps({"scope": "Local source/payload verification only; ADB was not invoked",
                          "binary_sha256": plan["binary_sha256"], "payload_count": len(plan["payloads"]),
                          "payload_bytes": sum(row["bytes"] for row in plan["payloads"]),
                          "planned_separate_processes": len(selected) * len(MODES),
                          "fixture_copy_count": 1, "oracle_batches": plan["oracle_batches"],
                          "oracle_vertices": plan["oracle_vertices"]}, indent=2))
        return 0
    stamp = dt.datetime.now(dt.timezone.utc).strftime("%Y%m%d-%H%M%S-%fZ")
    serial_label = re.sub(r"[^A-Za-z0-9_.-]", "_", args.serial)
    label = f"angle-immediate-{serial_label}-{stamp}"
    analysis = ROOT / "analysis" / label
    logs = ROOT / "logs" / label
    analysis.mkdir(exist_ok=False)
    logs.mkdir(exist_ok=False)
    snapshot_folder = analysis / "build-report-snapshots"
    snapshot_folder.mkdir(exist_ok=False)
    for pin, raw in zip(plan["build_report_pins"], plan["report_snapshots"]):
        snapshot = snapshot_folder / Path(pin["path"]).name
        with snapshot.open("xb") as destination:
            destination.write(raw)
        pin["snapshot"] = str(snapshot)
        require(sha(snapshot) == pin["sha256"], "Build-report snapshot mismatch")
    remote = REMOTE + "/" + stamp
    prefix = [plan["config"]["adb"], "-P", str(plan["config"]["adb_port"]), "-s", args.serial]
    transcript_path = logs / "adb-transcript.jsonl"
    report = {"serial": args.serial, "timestamp_utc": stamp, "selected_backends": selected,
              "remote_directory": remote, "binary_sha256": plan["binary_sha256"],
              "build_report_pins": plan["build_report_pins"], "runner": str(Path(__file__).resolve()),
              "runner_sha256": sha(Path(__file__)), "payloads": plan["payloads"],
              "oracle_batches": plan["oracle_batches"], "oracle_vertices": plan["oracle_vertices"],
              "backend_results": {}, "failures": [], "passed": False,
              "separate_process_attempts": 0,
              "APK_or_system_settings_modified": False, "fixture_copies_per_run": 1,
              "scope": "Recorded NV2A replay through production ANGLE backend/dispatch: seven separate optimization processes per backend, five whole GPU PPM comparisons",
              "pixel_comparison_channels": "Across processes: complete RGB payload and PPM header. Alpha assertions remain inside the unchanged fixture's RGBA vector checks; PPM comparisons do not compare alpha.",
              "not_validated": ["Original Xbox console pixel equivalence", "Android application namespace",
                                "NativeWindow/swapchain presentation", "Complete NHL07 gameplay/lifecycle", "Game FPS"]}
    with transcript_path.open("x", encoding="utf-8") as transcript:
        def adb(command, timeout=40, allow_failure=False):
            command = list(map(str, command))
            try:
                result = subprocess.run(prefix + command, capture_output=True, text=True,
                                        encoding="utf-8", errors="replace", timeout=timeout)
                row = {"args": command, "exit_code": result.returncode,
                       "stdout": result.stdout, "stderr": result.stderr}
            except subprocess.TimeoutExpired as error:
                def decode(value):
                    return value.decode("utf-8", "replace") if isinstance(value, bytes) else (value or "")
                row = {"args": command, "exit_code": None, "timeout_seconds": timeout,
                       "stdout": decode(error.stdout), "stderr": decode(error.stderr)}
                transcript.write(json.dumps(row) + "\n"); transcript.flush()
                raise
            transcript.write(json.dumps(row) + "\n"); transcript.flush()
            if result.returncode and not allow_failure:
                raise RuntimeError(f"ADB command failed ({result.returncode}): " + result.stdout[-2000:] + result.stderr[-2000:])
            return result

        try:
            require(adb(["get-state"]).stdout.strip() == "device", "Device unavailable")
            report["properties"] = {key: adb(["shell", "getprop", key]).stdout.strip() for key in
                                    ("ro.product.model", "ro.product.device", "ro.board.platform",
                                     "ro.build.version.sdk", "ro.build.fingerprint")}
            require(int(report["properties"]["ro.build.version.sdk"]) >= 30, "Probe and supplied driver require API30")
            report["main_app_pid_before"] = adb(["shell", "pidof", "org.nhl07.port"], allow_failure=True).stdout.strip()
            directories = [remote, remote + "/angle", remote + "/hooks", remote + "/driver", remote + "/common"]
            directories += [remote + "/runs/" + backend + "/" + mode for backend in selected for mode in MODES]
            adb(["shell", "mkdir", "-p", *directories])
            adb(["shell", "chmod", "700", *directories])
            for row in plan["payloads"]:
                row["remote"] = remote + "/" + row["relative"]
                adb(["push", row["local"], row["remote"]], timeout=180)
                adb(["shell", "chmod", "700" if row["relative"] == "angle_immediate_contract" else "600", row["remote"]])
            hashes = adb(["shell", "sha256sum", *(row["remote"] for row in plan["payloads"])], timeout=90).stdout
            parsed = {parts[-1]: parts[0] for line in hashes.splitlines() if len(parts := line.split()) >= 2}
            report["remote_sha256"] = parsed
            for row in plan["payloads"]:
                require(parsed.get(row["remote"]) == row["sha256"], "Remote payload mismatch: " + row["relative"])
            for backend in selected:
                backend_result = {"backend_id": BACKENDS[backend], "modes": {}, "passed": False}
                report["backend_results"][backend] = backend_result
                records = {}
                for mode, flags in MODES.items():
                    print(f"ANGLE {backend}: recorded replay / {mode}", flush=True)
                    host_folder = analysis / backend / mode
                    host_folder.mkdir(parents=True, exist_ok=False)
                    remote_folder = remote + "/runs/" + backend + "/" + mode
                    outcome = {"flags": dict(zip(("draw_dedup", "stream_upload", "merge_upload", "pack_upload"), flags)),
                               "remote_directory": remote_folder, "passed": False}
                    backend_result["modes"][mode] = outcome
                    try:
                        # POSIX ln accepts multiple source names and a directory target.
                        # These are new directories, so no existing links or captures are replaced.
                        adb(["shell", "ln", "-s", *(remote + "/common/" + name for name in FIXTURE_NAMES), remote_folder + "/"])
                        env = ["NHL07_DRAW_DEDUP=" + str(flags[0]), "NHL07_STREAM_UPLOAD=" + str(flags[1]),
                               "NHL07_MERGE_UPLOAD=" + str(flags[2]), "NHL07_PACK_UPLOAD=" + str(flags[3]),
                               "LD_LIBRARY_PATH=" + remote + "/angle:" + remote + "/hooks", "TU_DEBUG=sysmem"]
                        command = ["shell", "env", *env, remote + "/angle_immediate_contract", str(BACKENDS[backend]),
                                   remote + "/angle", remote + "/hooks/", remote + "/driver/", remote_folder,
                                   str(plan["program_cursor"]), str(plan["constant_cursor"])]
                        outcome["command"] = command
                        report["separate_process_attempts"] += 1
                        result = adb(command, timeout=180, allow_failure=True)
                        output = result.stdout + result.stderr
                        mode_log = logs / f"{backend}-{mode}.log"
                        with mode_log.open("x", encoding="utf-8") as target:
                            target.write("COMMAND " + json.dumps(command) + "\nEXIT " + str(result.returncode) + "\n" + output)
                        outcome.update(exit_code=result.returncode, log=str(mode_log), log_sha256=sha(mode_log))
                        record = parse_output(output, BACKENDS[backend], mode, result.returncode)
                        outcome["statistics"] = record
                        outcome["captures"] = {}
                        for capture in CAPTURES:
                            for suffix in (".ppm", ".json"):
                                adb(["pull", remote_folder + "/" + capture + suffix, host_folder / (capture + suffix)])
                            outcome["captures"][capture] = validate_capture(host_folder, capture)
                        outcome["passed"] = True
                        records[mode] = record
                    except Exception as failure:
                        outcome["failure"] = str(failure)
                        if isinstance(failure, subprocess.TimeoutExpired):
                            def decode(value):
                                return value.decode("utf-8", "replace") if isinstance(value, bytes) else (value or "")
                            mode_log = logs / f"{backend}-{mode}.log"
                            with mode_log.open("x", encoding="utf-8") as target:
                                target.write("HOST_TIMEOUT 180 seconds; wrapper has its own process watchdog\n"
                                             + decode(failure.stdout) + decode(failure.stderr))
                            outcome.update(host_timeout=True, log=str(mode_log), log_sha256=sha(mode_log))
                        report["failures"].append(f"{backend}/{mode}: {failure}")
                try:
                    backend_result["counter_comparisons"] = validate_counters(records)
                    comparisons = compare_backend(analysis / backend)
                    backend_result["whole_ppm_comparisons"] = comparisons
                    require(all(row["all_modes_byte_exact"] for row in comparisons.values()), "Optimization changed whole GPU PPM pixels")
                    backend_result["passed"] = all(row["passed"] for row in backend_result["modes"].values())
                except Exception as failure:
                    backend_result["comparison_failure"] = str(failure)
                    report["failures"].append(f"{backend}: {failure}")
            if len(selected) == 2:
                report["cross_backend_comparisons"] = cross_backend_comparison(analysis)
            report["main_app_pid_after"] = adb(["shell", "pidof", "org.nhl07.port"], allow_failure=True).stdout.strip()
            report["passed"] = not report["failures"] and all(row["passed"] for row in report["backend_results"].values())
        except Exception as failure:
            report["failures"].append(str(failure))
    report["adb_transcript"] = str(transcript_path)
    report["adb_transcript_sha256"] = sha(transcript_path)
    path = analysis / "report.json"
    with path.open("x", encoding="utf-8") as destination:
        json.dump(report, destination, indent=2); destination.write("\n")
    print(json.dumps({"report": str(path), "logs": str(logs), "passed": report["passed"],
                      "failures": report["failures"]}, indent=2))
    return 0 if report["passed"] else 1


if __name__ == "__main__":
    sys.exit(main())
