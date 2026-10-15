#!/usr/bin/env python3
"""Build only the standalone dynamic ANGLE probe, without linking any GL API."""
import hashlib
import json
import os
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / "build/angle-egl-probe"


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    config = json.loads((ROOT / "local-toolchains.json").read_text(encoding="utf-8"))
    llvm = Path(config["ndk"]) / "toolchains/llvm/prebuilt/windows-x86_64/bin"
    BUILD.mkdir(parents=True, exist_ok=True)
    (BUILD / "tmp").mkdir(exist_ok=True)
    environment = dict(os.environ, TEMP=str(BUILD / "tmp"), TMP=str(BUILD / "tmp"))
    source = ROOT / "tests/angle_egl_probe.cpp"
    output = BUILD / "angle_egl_probe"
    command = [str(llvm / "clang++.exe"), "--target=aarch64-linux-android30", "-std=c++17", "-O2", "-Wall", "-Wextra", "-static-libstdc++", "-Wl,-z,max-page-size=16384", str(source), "-ldl", "-o", str(output)]
    result = subprocess.run(command, capture_output=True, text=True, encoding="utf-8", errors="replace", env=environment)
    log = ROOT / "logs/angle-egl-probe-build.log"
    log.write_text(result.stdout + result.stderr, encoding="utf-8")
    if result.returncode:
        print(result.stdout + result.stderr)
        raise SystemExit(result.returncode)
    candidate = ROOT / "analysis/driver/angle-candidates/kubuszok-chromium-7151-arm64"
    candidate_report = json.loads((candidate / "candidate.json").read_text(encoding="utf-8"))
    system = BUILD / "system"
    system.mkdir(exist_ok=True)
    libraries = []
    for name in ["libEGL", "libGLESv2"]:
        original = candidate / "lib" / (name + ".so")
        expected = next(item["sha256"] for item in candidate_report["selected"] if Path(item["path"]).name == original.name)
        if sha(original) != expected:
            raise RuntimeError("Original ANGLE candidate hash mismatch")
        target = system / (name + "_angle.so")
        if target.exists() and target.read_bytes() != original.read_bytes():
            raise RuntimeError("System-control ANGLE staging file differs")
        target.write_bytes(original.read_bytes())
        libraries.append({"path": str(target), "sha256": sha(target), "source_sha256": expected, "content_modified": False})
    elf = subprocess.run([str(llvm / "llvm-readelf.exe"), "-h", "-d", "-l", str(output)], capture_output=True, text=True, check=True).stdout
    (BUILD / "probe-elf.txt").write_text(elf, encoding="utf-8")
    report = {"scope": "Build-only standalone ANGLE EGL pbuffer probe; no device execution, APK, WSI presentation or FPS verification", "binary": str(output), "binary_sha256": sha(output), "source": str(source), "source_sha256": sha(source), "command": command, "system_control_libraries": libraries, "log": str(log), "log_sha256": sha(log), "executed": False, "no_adb": True}
    path = ROOT / "analysis/angle-egl-probe-build.json"
    path.write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(json.dumps({"report": str(path), "binary": str(output), "sha256": sha(output)}))


if __name__ == "__main__":
    main()
