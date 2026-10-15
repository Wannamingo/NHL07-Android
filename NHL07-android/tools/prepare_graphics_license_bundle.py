#!/usr/bin/env python3
"""Assemble pinned, already-downloaded graphics license notices. No network/ADB/APK actions."""
from pathlib import Path
import hashlib,json,datetime
ROOT=Path(__file__).resolve().parents[1]
PINS=json.loads(r'''{
  "items": [
    {
      "component": "ANGLE",
      "path": "analysis/driver/angle-candidates/kubuszok-chromium-7151-arm64/provenance/ANGLE-LICENSE.txt",
      "url": "https://raw.githubusercontent.com/google/angle/df9c59dcacff7d186d00e3263a1aa68f8059137c/LICENSE",
      "revision": "df9c59dcacff7d186d00e3263a1aa68f8059137c",
      "sha256": "bf4da21bd20bcfb5b60b7ecc67fa864a79be049e21d6178076887f178dd6c71a",
      "bytes": 1643,
      "mode": "whole",
      "basis": "Pinned source notice"
    },
    {
      "component": "Mesa / Turnip MIT terms",
      "path": "analysis/driver/licenses/mesa-MIT.txt",
      "url": "https://raw.githubusercontent.com/whitebelyash/mesa-unified/9c7e022677dfa3abb356c2b6732cbd2e25783d01/licenses/MIT",
      "revision": "9c7e022677dfa3abb356c2b6732cbd2e25783d01",
      "sha256": "323c587d0ccf10e376f8bf9a7f31fb4ca6078105194b42e0b1e0ee2bc9bde71f",
      "bytes": 1372,
      "mode": "whole",
      "basis": "Pinned source notice"
    },
    {
      "component": "Mesa / Turnip / Freedreno copyright notice",
      "path": "analysis/driver/licenses/mesa-tu_util.h",
      "url": "https://raw.githubusercontent.com/whitebelyash/mesa-unified/9c7e022677dfa3abb356c2b6732cbd2e25783d01/src/freedreno/vulkan/tu_util.h",
      "revision": "9c7e022677dfa3abb356c2b6732cbd2e25783d01",
      "sha256": "fdf77e4247a5869b4bdd73e63d1b9270230088da7b0891ba7a3f0314a9b23fdb",
      "bytes": 16941,
      "mode": "first_c_comment",
      "basis": "Representative exact source copyright header; complete binary source inventory was not provided by the driver packager"
    },
    {
      "component": "Mesa / Turnip / Freedreno copyright notice",
      "path": "analysis/driver/licenses/mesa-freedreno_dev_info.h",
      "url": "https://raw.githubusercontent.com/whitebelyash/mesa-unified/9c7e022677dfa3abb356c2b6732cbd2e25783d01/src/freedreno/common/freedreno_dev_info.h",
      "revision": "9c7e022677dfa3abb356c2b6732cbd2e25783d01",
      "sha256": "5e599b21d1c54679a14e5205802cfb798ce48477c4b3442b471476c402e7d5c7",
      "bytes": 19689,
      "mode": "first_c_comment",
      "basis": "Representative exact source copyright header; complete binary source inventory was not provided by the driver packager"
    },
    {
      "component": "Mesa / Turnip / Freedreno copyright notice",
      "path": "analysis/driver/licenses/mesa-tu_autotune.h",
      "url": "https://raw.githubusercontent.com/whitebelyash/mesa-unified/9c7e022677dfa3abb356c2b6732cbd2e25783d01/src/freedreno/vulkan/tu_autotune.h",
      "revision": "9c7e022677dfa3abb356c2b6732cbd2e25783d01",
      "sha256": "5062a43eea0d42d6246f4e7bbda19d942b3395dc5e1c436ae96987b1948e41e3",
      "bytes": 14175,
      "mode": "first_c_comment",
      "basis": "Representative exact source copyright header; complete binary source inventory was not provided by the driver packager"
    },
    {
      "component": "AdrenoTools",
      "path": "deps/libadrenotools-probe/source/LICENSE",
      "url": "https://raw.githubusercontent.com/bylaws/libadrenotools/8fae8ce254dfc1344527e05301e43f37dea2df80/LICENSE",
      "revision": "8fae8ce254dfc1344527e05301e43f37dea2df80",
      "sha256": "7ea796e199e46093c2f5c391697bce5abeacd02b7216aa0a84e5839afb5584f3",
      "bytes": 1299,
      "mode": "whole",
      "basis": "Pinned source notice"
    },
    {
      "component": "liblinkernsbypass",
      "path": "deps/libadrenotools-probe/source/lib/linkernsbypass/LICENSE",
      "url": "https://raw.githubusercontent.com/bylaws/liblinkernsbypass/aa3975893d83ef1bc84c321ec60c65fbf1287887/LICENSE",
      "revision": "aa3975893d83ef1bc84c321ec60c65fbf1287887",
      "sha256": "7ea796e199e46093c2f5c391697bce5abeacd02b7216aa0a84e5839afb5584f3",
      "bytes": 1299,
      "mode": "whole",
      "basis": "Pinned source notice"
    },
    {
      "component": "SPIRV-Tools",
      "path": "analysis/driver/licenses/angle-SPIRV-Tools-LICENSE.txt",
      "url": "https://raw.githubusercontent.com/KhronosGroup/SPIRV-Tools/b6a83226d75d15b1733d35ee9e26b8f895ecffcb/LICENSE",
      "revision": "b6a83226d75d15b1733d35ee9e26b8f895ecffcb",
      "sha256": "cfc7749b96f63bd31c3c42b5c471bf756814053e847c10f3eb003417bc523d30",
      "bytes": 11358,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "SPIRV-Headers",
      "path": "analysis/driver/licenses/angle-SPIRV-Headers-LICENSE.txt",
      "url": "https://raw.githubusercontent.com/KhronosGroup/SPIRV-Headers/bab63ff679c41eb75fc67dac76e1dc44426101e1/LICENSE",
      "revision": "bab63ff679c41eb75fc67dac76e1dc44426101e1",
      "sha256": "ff04ae7e6a468587fe59434fee2e67c0e2a749b592c794b764ff80f30b94a084",
      "bytes": 4812,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "glslang",
      "path": "analysis/driver/licenses/angle-glslang-LICENSE.txt",
      "url": "https://raw.githubusercontent.com/KhronosGroup/glslang/fc9889c889561c5882e83819dcaffef5ed45529b/LICENSE.txt",
      "revision": "fc9889c889561c5882e83819dcaffef5ed45529b",
      "sha256": "adb783e734e906d1f46db5df29991dbde84bdb0ceab502ac2febb44fe3c2b5f4",
      "bytes": 54705,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "SPIRV-Cross",
      "path": "analysis/driver/licenses/angle-SPIRV-Cross-LICENSE.txt",
      "url": "https://raw.githubusercontent.com/KhronosGroup/SPIRV-Cross/b8fcf307f1f347089e3c46eb4451d27f32ebc8d3/LICENSE",
      "revision": "b8fcf307f1f347089e3c46eb4451d27f32ebc8d3",
      "sha256": "cfc7749b96f63bd31c3c42b5c471bf756814053e847c10f3eb003417bc523d30",
      "bytes": 11358,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "Vulkan-Headers license overview",
      "path": "analysis/driver/licenses/angle-Vulkan-Headers-LICENSE.md",
      "url": "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Headers/409c16be502e39fe70dd6fe2d9ad4842ef2c9a53/LICENSE.md",
      "revision": "409c16be502e39fe70dd6fe2d9ad4842ef2c9a53",
      "sha256": "ac24e5ea920e4318e4d02c4086ae51f53cfb03feed06c18df1019e7ada1ec7bc",
      "bytes": 458,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "Vulkan-Headers Apache-2.0 terms",
      "path": "analysis/driver/licenses/angle-Vulkan-Headers-Apache-2.0.txt",
      "url": "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Headers/409c16be502e39fe70dd6fe2d9ad4842ef2c9a53/LICENSES/Apache-2.0.txt",
      "revision": "409c16be502e39fe70dd6fe2d9ad4842ef2c9a53",
      "sha256": "cfc7749b96f63bd31c3c42b5c471bf756814053e847c10f3eb003417bc523d30",
      "bytes": 11358,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "Vulkan-Headers MIT terms",
      "path": "analysis/driver/licenses/angle-Vulkan-Headers-MIT.txt",
      "url": "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Headers/409c16be502e39fe70dd6fe2d9ad4842ef2c9a53/LICENSES/MIT.txt",
      "revision": "409c16be502e39fe70dd6fe2d9ad4842ef2c9a53",
      "sha256": "1ca3502222d967f3be5751c55f6b7ee735b5383909c3b501495f54b216dbf227",
      "bytes": 1084,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "Arm ASTC Encoder",
      "path": "analysis/driver/licenses/angle-astc-LICENSE.txt",
      "url": "https://raw.githubusercontent.com/ARM-software/astc-encoder/2319d9c4d4af53a7fc7c52985e264ce6e8a02a9b/LICENSE.txt",
      "revision": "2319d9c4d4af53a7fc7c52985e264ce6e8a02a9b",
      "sha256": "494accc32e50eb523a0e384d0ae6d4b702db867a89d6971216760e92b240ee12",
      "bytes": 10139,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "RapidJSON",
      "path": "analysis/driver/licenses/angle-rapidjson-LICENSE.txt",
      "url": "https://raw.githubusercontent.com/Tencent/rapidjson/781a4e667d84aeedbeb8184b7b62425ea66ec59f/license.txt",
      "revision": "781a4e667d84aeedbeb8184b7b62425ea66ec59f",
      "sha256": "a140e5d46fe734a1c78f1a3c3ef207871dd75648be71fdda8e309b23ab8b1f32",
      "bytes": 5152,
      "mode": "whole",
      "basis": "Conservatively retained from exact ANGLE DEPS; binary membership not individually proven for every dependency"
    },
    {
      "component": "Vulkan Memory Allocator",
      "path": "analysis/driver/licenses/angle-VulkanMemoryAllocator-LICENSE.txt",
      "url": "https://chromium.googlesource.com/external/github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator/+/56300b29fbfcc693ee6609ddad3fdd5b7a449a21/LICENSE.txt?format=TEXT",
      "revision": "56300b29fbfcc693ee6609ddad3fdd5b7a449a21",
      "sha256": "cdb520614db3ec62e667ece01e64e6afa21948fa51e85e748b1494597a7be907",
      "bytes": 1099,
      "mode": "whole",
      "basis": "Exact Chromium mirror revision from ANGLE DEPS; GitHub does not expose this revision"
    },
    {
      "component": "Abseil",
      "path": "analysis/driver/licenses/angle-abseil-LICENSE.txt",
      "url": "https://chromium.googlesource.com/chromium/src/third_party/abseil-cpp/+/91f1a3775e4c509c3eadd4870fc9929c0021e6e3/LICENSE?format=TEXT",
      "revision": "91f1a3775e4c509c3eadd4870fc9929c0021e6e3",
      "sha256": "c79a7fea0e3cac04cd43f20e7b648e5a0ff8fa5344e644b0ee09ca1162b62747",
      "bytes": 11361,
      "mode": "whole",
      "basis": "Pinned source notice"
    },
    {
      "component": "Abseil copyright notice",
      "path": "analysis/driver/licenses/angle-abseil-options.h",
      "url": "https://chromium.googlesource.com/chromium/src/third_party/abseil-cpp/+/91f1a3775e4c509c3eadd4870fc9929c0021e6e3/absl/base/options.h?format=TEXT",
      "revision": "91f1a3775e4c509c3eadd4870fc9929c0021e6e3",
      "sha256": "7ef2ab8656faa269d9d6407a68ea9ef9d98d57bac00cf86554276db17786cc99",
      "bytes": 9133,
      "mode": "first_17_lines",
      "basis": "Pinned source notice"
    },
    {
      "component": "Chromium zlib",
      "path": "analysis/driver/licenses/angle-zlib-LICENSE.txt",
      "url": "https://chromium.googlesource.com/chromium/src/third_party/zlib/+/1e85c01b15363d11fab81c46fe2b5c2179113f70/LICENSE?format=TEXT",
      "revision": "1e85c01b15363d11fab81c46fe2b5c2179113f70",
      "sha256": "e1cfcc55c325b3f78cf55df9664abaa066e2271dffe8213347d9fccdfbac8f2c",
      "bytes": 910,
      "mode": "whole",
      "basis": "Pinned source notice"
    },
    {
      "component": "Volk",
      "path": "analysis/driver/licenses/angle-volk-LICENSE.md",
      "url": "https://raw.githubusercontent.com/google/angle/df9c59dcacff7d186d00e3263a1aa68f8059137c/src/third_party/volk/LICENSE.md",
      "revision": "df9c59dcacff7d186d00e3263a1aa68f8059137c",
      "sha256": "336f505f8d5aa73ea40b4d798dde86953e9c1f6525757f1d7f18120fea09bb1d",
      "bytes": 1066,
      "mode": "whole",
      "basis": "Pinned source notice"
    },
    {
      "component": "xxHash",
      "path": "analysis/driver/licenses/angle-xxhash-LICENSE.txt",
      "url": "https://raw.githubusercontent.com/google/angle/df9c59dcacff7d186d00e3263a1aa68f8059137c/src/common/third_party/xxhash/LICENSE",
      "revision": "df9c59dcacff7d186d00e3263a1aa68f8059137c",
      "sha256": "86ec6953794503942b70fcd4f35b565d44f63f703b7037ce44dad965c4aaae91",
      "bytes": 1314,
      "mode": "whole",
      "basis": "Pinned source notice"
    },
    {
      "component": "xxHash header copyright and terms",
      "path": "analysis/driver/licenses/angle-xxhash-xxhash.h",
      "url": "https://raw.githubusercontent.com/google/angle/df9c59dcacff7d186d00e3263a1aa68f8059137c/src/common/third_party/xxhash/xxhash.h",
      "revision": "df9c59dcacff7d186d00e3263a1aa68f8059137c",
      "sha256": "b9dd4b48cd827d95e0ba1ce6d65b8cb986e2a1ae0fed51dcba59ced12a77c378",
      "bytes": 13983,
      "mode": "first_c_comment",
      "basis": "Pinned source notice"
    },
    {
      "component": "Arm ASTC Encoder copyright notice",
      "path": "analysis/driver/licenses/angle-astc-astcenc.h",
      "url": "https://raw.githubusercontent.com/ARM-software/astc-encoder/2319d9c4d4af53a7fc7c52985e264ce6e8a02a9b/Source/astcenc.h",
      "revision": "2319d9c4d4af53a7fc7c52985e264ce6e8a02a9b",
      "sha256": "e695f7d841fd523903af50075d5a55253071c4faaaccafa40c71212109ccb7a9",
      "bytes": 32516,
      "mode": "first_17_lines",
      "basis": "Pinned source notice"
    }
  ],
  "source_metadata": [
    {
      "path": "analysis/driver/licenses/angle-DEPS.txt",
      "url": "https://raw.githubusercontent.com/google/angle/df9c59dcacff7d186d00e3263a1aa68f8059137c/DEPS",
      "sha256": "3034a579b741b20654e1f5c45fad43bf37867e960e1bb1698b3cff34a727a1e9",
      "bytes": 199298
    },
    {
      "path": "analysis/driver/licenses/angle-vulkan.BUILD.gn",
      "url": "https://raw.githubusercontent.com/google/angle/df9c59dcacff7d186d00e3263a1aa68f8059137c/src/libANGLE/renderer/vulkan/BUILD.gn",
      "sha256": "0c7d76d7d1ba7ff7df644c0ec5460a3d41e18c6e09b161e2d8c6db1e768b144d",
      "bytes": 6660
    },
    {
      "path": "analysis/driver/licenses/angle-common-vulkan.BUILD.gn",
      "url": "https://raw.githubusercontent.com/google/angle/df9c59dcacff7d186d00e3263a1aa68f8059137c/src/common/vulkan/BUILD.gn",
      "sha256": "81ae667a4517dfbad5121030f93c49fcfbd1d106eadd30f5ab8eb2292cc3babb",
      "bytes": 4827
    },
    {
      "path": "analysis/driver/licenses/angle-third_party.BUILD.gn",
      "url": "https://raw.githubusercontent.com/google/angle/df9c59dcacff7d186d00e3263a1aa68f8059137c/BUILD.gn",
      "sha256": "49d0eded724ed126ec21873b82ed9e49fb06a80d3dc1fded2b3b34d2f6facd1a",
      "bytes": 48846
    },
    {
      "path": "analysis/driver/licenses/mesa-license.rst",
      "url": "https://raw.githubusercontent.com/whitebelyash/mesa-unified/9c7e022677dfa3abb356c2b6732cbd2e25783d01/docs/license.rst",
      "sha256": "0d1a0472ecc81830e75c20d59b0ea02841e3db21255e0ebad97ab682c54d6615",
      "bytes": 1816
    },
    {
      "path": "analysis/driver/licenses/mesa-commit.json",
      "url": "https://api.github.com/repos/whitebelyash/mesa-unified/commits/9c7e022677",
      "sha256": "36a54cded8ba83057949af4c57bb4f781d2d370e84d0364a29853088d4342e83",
      "bytes": 5512
    },
    {
      "path": "analysis/driver/licenses/angle-abseil-README.chromium",
      "url": "https://chromium.googlesource.com/chromium/src/third_party/abseil-cpp/+/91f1a3775e4c509c3eadd4870fc9929c0021e6e3/README.chromium?format=TEXT",
      "sha256": "7508eb1ac064b3362d7f47231405ad3c3cbee0d648b9fb96e51973eeff38d6b8",
      "bytes": 2198
    }
  ],
  "angle_commit": "df9c59dcacff7d186d00e3263a1aa68f8059137c",
  "mesa_commit": "9c7e022677dfa3abb356c2b6732cbd2e25783d01"
}''')
def sha(data): return hashlib.sha256(data).hexdigest()
def main():
    sections=["THIRD-PARTY LICENSE NOTICES - NHL07 Android graphics test build\n"]
    entries=[]
    for entry in PINS['items']:
        data=(ROOT/entry['path']).read_bytes()
        if sha(data)!=entry['sha256']:raise RuntimeError('Pinned license input changed: '+entry['path'])
        text=data.decode('utf-8-sig').replace('\r\n','\n')
        if entry['mode']=='first_c_comment':
            if not text.startswith('/*'):raise RuntimeError('Expected copyright header: '+entry['path'])
            text=text[:text.index('*/')+2]+'\n'
        elif entry['mode']=='first_17_lines':text='\n'.join(text.splitlines()[:17])+'\n'
        elif entry['mode']!='whole':raise RuntimeError('Unknown extraction mode')
        sections.append('\n'+'='*78+'\n'+entry['component']+'\nRevision: '+entry['revision']+'\nSource: '+entry['url']+'\n'+'='*78+'\n\n'+text.rstrip()+'\n')
        entries.append({**entry,'included_notice_sha256':sha(text.encode()),'included_notice_bytes':len(text.encode())})
    for entry in PINS['source_metadata']:
        if sha((ROOT/entry['path']).read_bytes())!=entry['sha256']:raise RuntimeError('Source metadata changed: '+entry['path'])
    output=ROOT/'analysis/driver/THIRD-PARTY-LICENSES.txt';output.write_text(''.join(sections),encoding='utf-8',newline='\n')
    report={'created_utc':datetime.datetime.now(datetime.timezone.utc).isoformat(),'scope':'Private graphics test-build notices; not a complete binary SBOM or public-distribution clearance','angle_commit':PINS['angle_commit'],'mesa_commit':PINS['mesa_commit'],'license_inputs':entries,'source_metadata':PINS['source_metadata'],'output':str(output),'output_sha256':sha(output.read_bytes()),'output_bytes':output.stat().st_size,'source_changes':'ANGLE derived ELF loader import/dependency strings changed; original ANGLE binaries preserved. Mesa supplied driver unchanged. AdrenoTools/liblinkernsbypass sources unchanged.','inventory_limitations':['Driver ZIP contains only binary and metadata; complete build flags, dependency bill of materials and per-file copyright aggregation were not supplied','Mesa core MIT template plus exact representative Turnip/Freedreno notices included; not a full compiled-source copyright inventory','ANGLE dependency notices conservatively include pinned DEPS components; individual membership of every component in stripped prebuilt was not established','Android NDK/platform/runtime notices and existing NHL07 project dependencies are outside this graphics-specific collection'],'script':str(Path(__file__).resolve()),'script_sha256':sha(Path(__file__).read_bytes())}
    manifest=ROOT/'analysis/driver/THIRD-PARTY-LICENSES.provenance.json';manifest.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8');print(json.dumps({'bundle':str(output),'bytes':output.stat().st_size,'sha256':report['output_sha256'],'provenance':str(manifest),'notice_sections':len(entries)},indent=2))
if __name__=='__main__':main()
