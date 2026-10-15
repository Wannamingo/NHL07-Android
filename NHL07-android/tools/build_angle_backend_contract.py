#!/usr/bin/env python3
"""Build real graphics dispatcher/backend plus the unmodified GPU stream fixture."""
import hashlib
import json
import os
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / "build/angle-backend-contract"


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    config = json.loads((ROOT / "local-toolchains.json").read_text(encoding="utf-8"))
    llvm = Path(config["ndk"]) / "toolchains/llvm/prebuilt/windows-x86_64/bin"
    BUILD.mkdir(parents=True, exist_ok=True)
    (BUILD / "tmp").mkdir(exist_ok=True)
    environment = dict(os.environ, TEMP=str(BUILD / "tmp"), TMP=str(BUILD / "tmp"))
    common = [str(llvm / "clang++.exe"), "--target=aarch64-linux-android30", "-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-I", str(ROOT / "src")]
    sources = [
        ("src/native_gl_dispatch.cpp", ["-DNHL07_GL_DISPATCH_IMPLEMENTATION=1"]),
        ("src/angle_backend.cpp", ["-DNHL07_GL_DISPATCH_IMPLEMENTATION=1"]),
        ("src/stream_upload.cpp", ["-include", str(ROOT / "src/native_gl_dispatch.h")]),
        ("tests/stream_upload_gpu_contract.cpp", ["-Dmain=nhl07_stream_contract_main", "-include", str(ROOT / "tests/angle_backend_contract_prelude.h")]),
        ("tests/angle_backend_gpu_contract.cpp", ["-DNHL07_GL_DISPATCH_IMPLEMENTATION=1"]),
    ]
    commands = []
    log = []
    objects = []
    for relative, extra in sources:
        source = ROOT / relative
        output = BUILD / (source.stem + ".o")
        command = common + extra + ["-c", str(source), "-o", str(output)]
        result = subprocess.run(command, capture_output=True, text=True, encoding="utf-8", errors="replace", env=environment)
        commands.append(command); log.append(result.stdout + result.stderr)
        if result.returncode:
            (ROOT / "logs/angle-backend-contract-build.log").write_text("\n".join(log), encoding="utf-8")
            print(result.stdout + result.stderr); raise SystemExit(result.returncode)
        objects.append(output)
    output = BUILD / "angle_backend_contract"
    command = common + ["-static-libstdc++", "-Wl,-z,max-page-size=16384", *(str(path) for path in objects), "-ldl", "-llog", "-o", str(output)]
    result = subprocess.run(command, capture_output=True, text=True, encoding="utf-8", errors="replace", env=environment)
    commands.append(command); log.append(result.stdout + result.stderr)
    log_path = ROOT / "logs/angle-backend-contract-build.log"
    log_path.write_text("\n".join(log), encoding="utf-8")
    if result.returncode:
        print(result.stdout + result.stderr); raise SystemExit(result.returncode)
    elf = subprocess.run([str(llvm / "llvm-readelf.exe"), "-h", "-d", "--dyn-syms", "-l", str(output)], capture_output=True, text=True, check=True).stdout
    (BUILD / "probe-elf.txt").write_text(elf, encoding="utf-8")
    # A GL/EGL import would bypass the selected backend and invalidate this test.
    import re
    assert not re.search(r"UND\s+(?:egl|gl)[A-Z]", elf), "Direct EGL/GLES import in production backend GPU contract"
    assert not re.search(r"NEEDED.*lib(?:EGL|GLES|vulkan)", elf), "Graphics library statically selected by ELF dependency"
    source_pins = {relative: sha(ROOT / relative) for relative, _ in sources}
    for relative in ["src/native_gl_dispatch.h", "src/angle_backend.h", "src/stream_upload.h", "tests/angle_backend_contract_prelude.h"]:
        source_pins[relative] = sha(ROOT / relative)
    report = {"scope": "Build-only actual 107-function dispatch/backend and unmodified GPU stream fixture, no device or APK execution", "binary": str(output), "binary_sha256": sha(output), "source": str(ROOT / "tests/angle_backend_gpu_contract.cpp"), "source_sha256": sha(ROOT / "tests/angle_backend_gpu_contract.cpp"), "sources": source_pins, "commands": commands, "log": str(log_path), "log_sha256": sha(log_path), "direct_EGL_GLES_imports": [], "direct_EGL_GLES_Vulkan_DT_NEEDED": [], "executed": False}
    path = ROOT / "analysis/angle-backend-contract-build.json"
    path.write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(json.dumps({"report": str(path), "binary": str(output), "sha256": sha(output)}))


if __name__ == "__main__":
    main()
