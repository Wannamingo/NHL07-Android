#!/usr/bin/env python3
"""Build the unmodified NV2A replay fixture through production ANGLE dispatch.

No ADB, APK or existing renderer source modifications. The independent inline
attribute oracle is reconstructed from the original captured command packets.
"""
import hashlib
import json
import os
from pathlib import Path
import re
import struct
import subprocess

ROOT = Path(__file__).resolve().parents[1]
GAME = ROOT.with_name("NHL07-x64")
BUILD = ROOT / "build/angle-immediate-contract"
FIXTURE = ROOT / "checkpoints/20261015-inline-capture"


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def oracle(path):
    raw = (FIXTURE / "draw-failure-push.bin").read_bytes()
    words = struct.unpack("<%dI" % (len(raw) // 4), raw)
    attributes = [0., 0., 0., 1.] * 16
    batches = []; vertices = []; active = None; position = 0
    def floating(word):
        return struct.unpack("<f", struct.pack("<I", word))[0]
    while position < len(words):
        header = words[position]; position += 1
        count = (header >> 18) & 2047; start = header & 0x1ffc
        assert position + count <= len(words)
        for i in range(count):
            method = start + (0 if header & 0x40000000 else i * 4)
            word = words[position]; position += 1
            if method == 0x17fc:
                if word:
                    assert active is None; active = word; vertices = []
                else:
                    assert active is not None; batches.append((active, vertices)); active = None
            elif active is not None:
                if method in (0x18c8, 0x18cc):
                    attributes[36 + (method - 0x18c8) // 4] = floating(word)
                    attributes[38:40] = [0., 1.]
                elif method == 0x194c:
                    attributes[12:16] = [((word >> (8 * c)) & 255) / 255 for c in range(4)]
                elif 0x1518 <= method <= 0x1524:
                    attributes[(method - 0x1518) // 4] = floating(word)
                    if method == 0x1524: vertices.append(tuple(attributes))
                else:
                    raise RuntimeError("Unobserved captured inline method %x" % method)
    assert len(batches) == 6 and sum(len(v) for _, v in batches) == 352 and active is None
    assert all(vertex[15] == 0 for _, vertices in batches for vertex in vertices)
    output = bytearray(struct.pack("<I", len(batches)))
    for primitive, vertices in batches:
        output += struct.pack("<II", primitive, len(vertices))
        for vertex in vertices: output += struct.pack("<64f", *vertex)
    path.write_bytes(output)


def main():
    config = json.loads((ROOT / "local-toolchains.json").read_text(encoding="utf-8"))
    llvm = Path(config["ndk"]) / "toolchains/llvm/prebuilt/windows-x86_64"
    BUILD.mkdir(parents=True, exist_ok=True)
    (BUILD / "tmp").mkdir(exist_ok=True)
    environment = dict(os.environ, TEMP=str(BUILD / "tmp"), TMP=str(BUILD / "tmp"))
    oracle_path = BUILD / "immediate-expected.bin"
    oracle(oracle_path)
    backend = ROOT / "vendor/xboxrecomp"
    includes = [ROOT / "src", ROOT / "src/shaders", ROOT / "tests", GAME / "src/recomp/gen", backend / "src", backend / "src/kernel", backend / "include", backend / "src/d3d", ROOT / "deps/glslang", ROOT / "deps/spirv-cross"]
    flags = ["--target=aarch64-linux-android30", "--sysroot=" + str(llvm / "sysroot"), "-O2", "-fwrapv", "-ffp-contract=off", "-fno-strict-aliasing", "-DRECOMP_NATIVE_API_ONLY=1"] + ["-I" + str(path) for path in includes]
    commands = []; logs = []; objects = []; source_pins = {}

    def run(command):
        result = subprocess.run(list(map(str, command)), capture_output=True, text=True, encoding="utf-8", errors="replace", timeout=120, env=environment)
        commands.append(list(map(str, command))); logs.append(result.stdout + result.stderr)
        if result.returncode:
            (ROOT / "logs/angle-immediate-contract-build.log").write_text("\n".join(logs), encoding="utf-8")
            print(result.stdout + result.stderr); raise SystemExit(result.returncode)
        return result.stdout

    c_sources = ["src/shaders/shader_vertex.c", "src/shaders/shader_pixel.c", "src/shaders/d3d_texture_model.c"]
    cpp_sources = [
        ("src/native_gl_dispatch.cpp", ["-DNHL07_GL_DISPATCH_IMPLEMENTATION=1"]),
        ("src/angle_backend.cpp", ["-DNHL07_GL_DISPATCH_IMPLEMENTATION=1"]),
        ("tests/angle_immediate_gpu_contract.cpp", ["-DNHL07_GL_DISPATCH_IMPLEMENTATION=1"]),
        ("tests/immediate_replay_contract.cpp", ["-Dmain=nhl07_immediate_contract_main", "-include", str(ROOT / "tests/angle_immediate_contract_prelude.h")]),
        ("src/shaders/shader_compile.cpp", ["-include", str(ROOT / "src/native_gl_dispatch.h")]),
        ("src/shaders/texture_rgba.cpp", ["-include", str(ROOT / "src/native_gl_dispatch.h")]),
        ("src/texture_cache.cpp", ["-include", str(ROOT / "src/native_gl_dispatch.h")]),
        ("src/render_profile.cpp", ["-include", str(ROOT / "src/native_gl_dispatch.h")]),
        ("src/stream_upload.cpp", ["-include", str(ROOT / "src/native_gl_dispatch.h")]),
        ("src/exact_buffer_cache.cpp", ["-include", str(ROOT / "src/native_gl_dispatch.h")]),
    ]
    for relative in c_sources:
        source = ROOT / relative; obj = BUILD / (source.stem + ".o")
        run([llvm / "bin/clang.exe", *flags, "-c", source, "-o", obj]); objects.append(obj)
        source_pins[relative] = sha(source)
    for relative, extra in cpp_sources:
        source = ROOT / relative; obj = BUILD / (source.stem + ".o")
        run([llvm / "bin/clang++.exe", *flags, "-std=c++17", *extra, "-c", source, "-o", obj]); objects.append(obj)
        source_pins[relative] = sha(source)
    libraries = [ROOT / "deps/shader-libs" / ("lib" + name + ".a") for name in ["glslang", "glslang-default-resource-limits", "SPIRV", "spirv-cross-glsl", "spirv-cross-core"]]
    binary = BUILD / "angle_immediate_contract"
    run([llvm / "bin/clang++.exe", *flags, "-std=c++17", "-Wl,-z,max-page-size=16384", *objects, *libraries, "-static-libstdc++", "-ldl", "-llog", "-lm", "-o", binary])
    elf = run([llvm / "bin/llvm-readelf.exe", "-h", "-d", "-l", "--dyn-syms", binary])
    (BUILD / "probe-elf.txt").write_text(elf, encoding="utf-8")
    assert not re.search(r"UND\s+(?:egl|gl)[A-Z]", elf), "Direct GL/EGL import bypasses the selected production backend"
    assert not re.search(r"NEEDED.*lib(?:EGL|GLES|vulkan)", elf), "ELF dependency preselects a graphics driver"
    for relative in ["src/nv2a_draw.cpp", "src/native_gl_dispatch.h", "src/angle_backend.h", "src/immediate_vertices.h", "src/vertex_format.h", "src/draw_upload_plan.h", "src/stream_upload.h", "src/texture_cache.h", "src/exact_buffer_cache.h", "src/shader_preparation_cache.h", "src/shader_preparation_model.h", "tests/angle_immediate_contract_prelude.h", "tests/immediate_topology_contract.h"]:
        source_pins[relative] = sha(ROOT / relative)
    fixture_files = [FIXTURE / name for name in ["draw-failure-push.bin", "draw-failure-state.bin", "draw-failure-ram.bin", "draw-failure-physical.bin", "draw-failure.json"]]
    fixture_pins = {path.name: sha(path) for path in fixture_files}
    fixture_pins[oracle_path.name] = sha(oracle_path)
    log = ROOT / "logs/angle-immediate-contract-build.log"
    log.write_text("\n".join(logs[:-1]), encoding="utf-8")
    report = {"scope": "Build-only unmodified recorded NV2A immediate replay through actual production dispatcher/backend; no ADB/APK execution", "binary": str(binary), "binary_sha256": sha(binary), "source": str(ROOT / "tests/angle_immediate_gpu_contract.cpp"), "source_sha256": sha(ROOT / "tests/angle_immediate_gpu_contract.cpp"), "sources": source_pins, "shader_libraries": {str(path): sha(path) for path in libraries}, "fixture_directory": str(FIXTURE), "fixture_sha256": fixture_pins, "oracle": str(oracle_path), "oracle_sha256": sha(oracle_path), "commands": commands, "log": str(log), "log_sha256": sha(log), "direct_GL_EGL_imports": [], "direct_graphics_DT_NEEDED": [], "test_only_GL_queries": ["glGetBufferParameteriv", "glGetIntegeri_v", "glGetSamplerParameterfv", "glGetSamplerParameteriv"], "executed": False}
    path = ROOT / "analysis/angle-immediate-contract-build.json"
    path.write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(json.dumps({"report": str(path), "binary": str(binary), "sha256": sha(binary)}))


if __name__ == "__main__":
    main()
