#!/usr/bin/env python3
"""Run isolated ANGLE system/custom controls; no game APK or system settings.

Both modes run as separate shell processes. A passing pbuffer is not proof of
Android-window presentation, application namespace compatibility or game FPS.
"""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import re
import subprocess

ROOT = Path(__file__).resolve().parents[1]
REMOTE = "/data/local/tmp/nhl07-angle-probe"


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def read_report(name):
    path = ROOT / "analysis" / name
    return json.loads(path.read_text(encoding="utf-8")), {"path": str(path), "sha256": sha(path)}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--serial", required=True)
    parser.add_argument("--mode", choices=["system", "custom", "both"], default="both")
    parser.add_argument("--production", action="store_true", help="Test the actual production dispatch/backend with the existing GPU stream fixture")
    args = parser.parse_args()
    assert re.fullmatch(r"[A-Za-z0-9_.:-]{1,128}", args.serial), "Invalid serial"
    config = json.loads((ROOT / "local-toolchains.json").read_text(encoding="utf-8"))
    build, build_pin = read_report("angle-backend-contract-build.json" if args.production else "angle-egl-probe-build.json")
    bridge, bridge_pin = read_report("angle-bridge-build.json")
    adreno, adreno_pin = read_report("adrenotools-probe-build.json")
    driver, driver_pin = read_report("turnip-probe-build.json")
    assert sha(Path(build["source"])) == build["source_sha256"], "Probe source changed"
    for relative, wanted in build.get("sources", {}).items():
        assert sha(ROOT / relative) == wanted, ("Production source changed", relative)
    assert sha(Path(bridge["bridge"]["source"])) == bridge["bridge"]["source_sha256"], "Bridge source changed"
    assert sha(Path(bridge["bridge"]["version_map"])) == bridge["bridge"]["version_map_sha256"]
    payloads = []

    def payload(path, wanted, remote):
        local = Path(path).resolve()
        assert local.is_relative_to(ROOT.resolve()), "Payload outside workspace"
        assert sha(local) == wanted, ("Payload hash mismatch", str(local))
        payloads.append({"local": str(local), "remote": remote, "sha256": wanted, "size": local.stat().st_size})

    remote_binary = REMOTE + ("/angle_backend_contract" if args.production else "/angle_egl_probe")
    payload(build["binary"], build["binary_sha256"], remote_binary)
    if not args.production and args.mode in ["system", "both"]:
        for row in build["system_control_libraries"]:
            payload(row["path"], row["sha256"], REMOTE + "/system/" + Path(row["path"]).name)
    if args.production or args.mode in ["custom", "both"]:
        for row in bridge["libraries"]:
            payload(row["derived"], row["derived_sha256"], REMOTE + "/custom/" + Path(row["derived"]).name)
        payload(bridge["bridge"]["path"], bridge["bridge"]["sha256"], REMOTE + "/custom/libab.so")
        if args.mode in ["custom", "both"]:
            for name in ["libadrenotools.so", "libhook_impl.so", "libmain_hook.so"]:
                row = next(item for item in adreno["artifacts"] if Path(item["path"]).name == name)
                payload(row["path"], row["sha256"], REMOTE + "/hooks/" + name)
            payload(driver["library"], driver["library_sha256"], REMOTE + "/driver/libvulkan_freedreno.so")

    prefix = [config["adb"], "-P", str(config["adb_port"]), "-s", args.serial]
    transcript = []

    def adb(command, timeout=30, allow_failure=False):
        command = list(map(str, command))
        result = subprocess.run(prefix + command, capture_output=True, text=True, encoding="utf-8", errors="replace", timeout=timeout)
        transcript.append({"args": command, "exit_code": result.returncode, "stdout": result.stdout, "stderr": result.stderr})
        if result.returncode and not allow_failure:
            raise RuntimeError(result.stdout[-4000:] + result.stderr[-4000:])
        return result

    assert adb(["get-state"]).stdout.strip() == "device"
    properties = {key: adb(["shell", "getprop", key]).stdout.strip() for key in ["ro.product.model", "ro.product.device", "ro.board.platform", "ro.build.version.sdk", "ro.build.fingerprint"]}
    assert int(properties["ro.build.version.sdk"]) >= 30, "Supplied Turnip binary requires API30"
    pid_before = adb(["shell", "pidof", "org.nhl07.port"], allow_failure=True).stdout.strip()
    directories = [REMOTE, REMOTE + "/system", REMOTE + "/custom", REMOTE + "/hooks", REMOTE + "/driver"]
    adb(["shell", "mkdir", "-p", *directories])
    adb(["shell", "chmod", "700", *directories])
    for row in payloads:
        adb(["push", row["local"], row["remote"]])
        adb(["shell", "chmod", "700" if row["remote"] == remote_binary else "600", row["remote"]])
    remote_hashes = adb(["shell", "sha256sum", *(row["remote"] for row in payloads)]).stdout
    parsed = {line.split()[-1]: line.split()[0] for line in remote_hashes.splitlines() if len(line.split()) >= 2}
    for row in payloads:
        assert parsed.get(row["remote"]) == row["sha256"], "Remote payload hash mismatch"

    outcomes = []
    modes = ["system", "custom"] if args.mode == "both" else [args.mode]
    for mode in modes:
        if args.production:
            command = ["shell", remote_binary, "2" if mode == "custom" else "1", REMOTE + "/custom", REMOTE + "/hooks/", REMOTE + "/driver/"]
        else:
            command = ["shell", remote_binary, mode, REMOTE + "/" + mode]
            if mode == "custom":
                command += [REMOTE + "/hooks/", REMOTE + "/driver/"]
        print("Running isolated ANGLE " + mode + " probe...", flush=True)
        wait_seconds = 135 if args.production else 55
        try:
            result = adb(command, timeout=wait_seconds, allow_failure=True)
            output = result.stdout + result.stderr
            if args.production:
                passed = result.returncode == 0 and "ANGLE_BACKEND_GPU PASS mode=" in output and output.count("STREAM_UPLOAD passed=") == 2 and "failed=0" in output
            else:
                passed = result.returncode == 0 and "ANGLE_EGL PASS mode=" + mode in output and "rgba_mismatches=0" in output
            outcomes.append({"mode": mode, "passed": passed, "exit_code": result.returncode, "output": output})
        except subprocess.TimeoutExpired as error:
            output = (error.stdout or b"").decode("utf-8", "replace") if isinstance(error.stdout, bytes) else (error.stdout or "")
            transcript.append({"args": command, "timeout": wait_seconds, "stdout": output, "stderr": "Host timeout; probe has its own process watchdog"})
            outcomes.append({"mode": mode, "passed": False, "exit_code": None, "host_timeout": True, "output": output})
    pid_after = adb(["shell", "pidof", "org.nhl07.port"], allow_failure=True).stdout.strip()
    stamp = datetime.datetime.now(datetime.timezone.utc).strftime("%Y%m%d-%H%M%SZ")
    serial = re.sub(r"[^A-Za-z0-9_.-]", "_", args.serial)
    log = ROOT / "logs" / f"angle-egl-probe-{serial}-{stamp}.log"
    log.write_text("\n".join("COMMAND " + json.dumps(item["args"]) + "\nEXIT " + str(item.get("exit_code", "timeout")) + "\n" + item["stdout"] + item["stderr"] for item in transcript), encoding="utf-8")
    for outcome in outcomes:
        output = outcome.pop("output")
        outcome["GL_RENDERER"] = re.findall(r"ANGLE_EGL GL_RENDERER=(.*?) GL_VERSION=", output)
        outcome["production_verified_backends"] = re.findall(r"ANGLE_BACKEND_GPU verified_mode=(.*)", output)
        outcome["actual_Vulkan_driver"] = re.findall(r"ANGLE_EGL actual_vk_device=(.*)", output)
        outcome["bridge_borrow_stats"] = re.findall(r"ANGLE_EGL bridge_opens=(.*)", output)
        outcome["failed_checks"] = re.findall(r"ANGLE_EGL FAIL reason=(.*)", output) + re.findall(r"ANGLE_EGL check=(.*?) result=FAIL", output)
        outcome["failed_checks"] += re.findall(r"ANGLE_BACKEND_GPU FAIL (.*)", output)
    report = {"serial": args.serial, "timestamp_utc": stamp, "properties": properties, "outcomes": outcomes, "payloads": payloads, "remote_sha256": parsed, "build_report_pins": [build_pin, bridge_pin, adreno_pin, driver_pin], "runner_sha256": sha(Path(__file__)), "log": str(log), "log_sha256": sha(log), "main_app_pid_before": pid_before, "main_app_pid_after": pid_after, "APK_or_system_settings_modified": False, "production_dispatch_contract": args.production, "scope": "Isolated production dispatch/backend and GPU stream fixture including system fallback" if args.production else "Isolated separate shell-process ANGLE EGL pbuffer shader/buffer readback", "not_validated": ["Android application classloader namespace", "NativeWindow/swapchain presentation", "NHL07 rendering, lifecycle or FPS"]}
    path = ROOT / "analysis" / f"angle-egl-probe-{serial}-{stamp}.json"
    path.write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(json.dumps({"report": str(path), "raw_log": str(log), "outcomes": outcomes}, indent=2))
    if not all(row["passed"] for row in outcomes):
        raise SystemExit(1)


if __name__ == "__main__":
    main()
