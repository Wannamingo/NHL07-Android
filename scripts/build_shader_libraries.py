"""Build the five system-GLES shader libraries from the included local source."""
from pathlib import Path
import argparse
import os
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ndk', type=Path, required=True)
    parser.add_argument('--cmake', default='cmake')
    parser.add_argument('--ninja', default='ninja')
    parser.add_argument('--parallel', type=int, default=2)
    args = parser.parse_args()
    toolchain = args.ndk.resolve() / 'build/cmake/android.toolchain.cmake'
    if not toolchain.is_file():
        parser.error('NDK toolchain not found')
    project = ROOT / 'NHL07-android'
    build = project / 'build/shader-deps'
    temp = build / 'tmp'
    temp.mkdir(parents=True, exist_ok=True)
    env = dict(os.environ, TEMP=str(temp), TMP=str(temp))
    ninja = shutil.which(args.ninja) or str(Path(args.ninja).resolve())
    common = ['-G', 'Ninja', '-DCMAKE_MAKE_PROGRAM=' + ninja,
              '-DCMAKE_TOOLCHAIN_FILE=' + str(toolchain), '-DANDROID_ABI=arm64-v8a',
              '-DANDROID_PLATFORM=android-29', '-DCMAKE_BUILD_TYPE=RelWithDebInfo',
              '-DCMAKE_POSITION_INDEPENDENT_CODE=ON']
    recipes = [
        ('glslang', ['-DENABLE_GLSLANG_BINARIES=OFF', '-DGLSLANG_TESTS=OFF',
                     '-DBUILD_EXTERNAL=OFF', '-DENABLE_OPT=OFF', '-DENABLE_HLSL=ON',
                     '-DENABLE_SPIRV=ON', '-DGLSLANG_ENABLE_INSTALL=OFF'],
         ['glslang', 'glslang-default-resource-limits', 'SPIRV']),
        ('spirv-cross', ['-DSPIRV_CROSS_CLI=OFF', '-DSPIRV_CROSS_ENABLE_TESTS=OFF',
                         '-DSPIRV_CROSS_FORCE_PIC=ON', '-DSPIRV_CROSS_ENABLE_GLSL=ON',
                         '-DSPIRV_CROSS_ENABLE_HLSL=OFF', '-DSPIRV_CROSS_ENABLE_MSL=OFF',
                         '-DSPIRV_CROSS_ENABLE_CPP=OFF', '-DSPIRV_CROSS_ENABLE_REFLECT=OFF',
                         '-DSPIRV_CROSS_ENABLE_C_API=OFF', '-DSPIRV_CROSS_SKIP_INSTALL=ON'],
         ['spirv-cross-core', 'spirv-cross-glsl']),
    ]
    destination = project / 'deps/shader-libs'
    destination.mkdir(parents=True, exist_ok=True)
    for name, flags, targets in recipes:
        folder = build / name
        subprocess.run([args.cmake, '-S', str(project / 'deps' / name), '-B', str(folder), *common, *flags], check=True, env=env)
        subprocess.run([args.cmake, '--build', str(folder), '--target', *targets,
                        '--parallel', str(max(1, args.parallel))], check=True, env=env)
        for target in targets:
            archives = list(folder.rglob('lib' + target + '.a'))
            if len(archives) != 1:
                raise RuntimeError('Missing or ambiguous archive: ' + target)
            shutil.copy2(archives[0], destination / archives[0].name)
            print('Prepared', archives[0].name, flush=True)


if __name__ == '__main__':
    main()
