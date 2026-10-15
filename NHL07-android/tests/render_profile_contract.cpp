// Exercise the production implementation through its public API with a
// deterministic monotonic clock. Quantiles and JSON are checked independently
// by the host runner; private profiler state is deliberately not inspected.
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <string>
#include <time.h>

static std::uint64_t test_clock_ns = 1000000000ull, clock_calls;
static unsigned checks;
#ifndef NHL07_EXPECT_DEFAULT_STREAM
#define NHL07_EXPECT_DEFAULT_STREAM 0
#endif
#ifndef NHL07_EXPECT_DEFAULT_MERGE
#define NHL07_EXPECT_DEFAULT_MERGE 0
#endif
#ifndef NHL07_EXPECT_DEFAULT_PACK
#define NHL07_EXPECT_DEFAULT_PACK 0
#endif
#ifndef NHL07_EXPECT_DEFAULT_SHADER
#define NHL07_EXPECT_DEFAULT_SHADER 0
#endif
#ifndef NHL07_EXPECT_DEFAULT_EXACT_BUFFER
#define NHL07_EXPECT_DEFAULT_EXACT_BUFFER 0
#endif
static constexpr bool default_stream=NHL07_EXPECT_DEFAULT_STREAM!=0;
static constexpr bool default_merge=NHL07_EXPECT_DEFAULT_MERGE!=0;
static constexpr bool default_pack=NHL07_EXPECT_DEFAULT_PACK!=0;
static constexpr bool default_shader=NHL07_EXPECT_DEFAULT_SHADER!=0;
static constexpr bool default_exact_buffer=NHL07_EXPECT_DEFAULT_EXACT_BUFFER!=0;
static int test_clock_gettime(int, timespec* value) {
    ++clock_calls;
    value->tv_sec = static_cast<time_t>(test_clock_ns / 1000000000ull);
    value->tv_nsec = static_cast<long>(test_clock_ns % 1000000000ull);
    return 0;
}
static int test_setenv(const char* name, const char* value, int overwrite) {
    if (!overwrite && std::getenv(name)) return 0;
    return _putenv_s(name, value);
}
static int test_unsetenv(const char* name) { return _putenv_s(name, ""); }
#define CLOCK_MONOTONIC 1
#define clock_gettime test_clock_gettime
#define setenv test_setenv
#define unsetenv test_unsetenv
#include "../src/render_profile.cpp"
#undef clock_gettime
#undef setenv
#undef unsetenv

static void check(bool condition, const char* message) {
    if (!condition) { std::fprintf(stderr, "CONTRACT_FAILURE %s\n", message); std::abort(); }
    ++checks;
}
static void section(const char* name) { std::fprintf(stderr, "[CONTRACT-SECTION] %s\n", name); }
static void poll_control() { for (unsigned i = 0; i < 60; ++i) nhl07_profile_control(); }
static std::string config_path;
static void config(const char* text) {
    FILE* file = std::fopen(config_path.c_str(), "wb");
    check(file != nullptr, "open test configuration");
    check(std::fwrite(text, 1, std::strlen(text), file) == std::strlen(text), "write test configuration");
    check(std::fclose(file) == 0, "close test configuration");
}
static void option_flags(bool dirty, bool down, bool up, bool dedup, bool stream=default_stream, bool merge=default_merge, bool pack=default_pack, bool shader_prep=default_shader, bool texture_base=false, bool exact_buffer=default_exact_buffer) {
    const char* keys[] = {"NHL07_TARGET_DIRTY_CACHE", "NHL07_TARGET_GPU_DOWNSAMPLE", "NHL07_TARGET_GPU_UPSAMPLE", "NHL07_DRAW_DEDUP", "NHL07_STREAM_UPLOAD", "NHL07_MERGE_UPLOAD", "NHL07_PACK_UPLOAD", "NHL07_SHADER_PREP_CACHE", "NHL07_TEXTURE_BASE_COMPARE", "NHL07_EXACT_BUFFER_CACHE"};
    const bool expected[] = {dirty, down, up, dedup, stream, merge, pack, shader_prep, texture_base, exact_buffer};
    for (unsigned i = 0; i < 10; ++i) {
        const char* value = std::getenv(keys[i]);
        check(expected[i] ? value && std::strcmp(value, "1") == 0 : value == nullptr, keys[i]);
    }
}
static void span(unsigned stage, std::uint64_t nanoseconds, std::uint64_t bytes = 0) {
    const auto began = nhl07_profile_begin();
    check(began != 0, "enabled scope has a timestamp");
    test_clock_ns += nanoseconds;
    nhl07_profile_end(stage, began);
    nhl07_profile_bytes(stage, bytes);
}
static void disabled_zero_clock() {
    const auto before = clock_calls;
    for (unsigned i = 0; i < 1000; ++i) {
        check(nhl07_profile_begin() == 0, "disabled begin is zero");
        { Nhl07ProfileScope scope(NHL07_PROFILE_DRAW); }
        nhl07_profile_end(NHL07_PROFILE_DRAW, 0);
        nhl07_profile_bytes(NHL07_PROFILE_DRAW, 99999);
        nhl07_profile_frame(16000000ull);
    }
    check(clock_calls == before, "disabled profiler does not read the clock");
}

int main(int argc, char** argv) {
    check(argc == 3, "usage: executable configuration-directory captured-log");
    check(std::freopen(argv[2], "wb", stderr) != nullptr, "capture production stderr");
    config_path = std::string(argv[1]) + "/gpu-profile.conf";
    std::remove(config_path.c_str());
    test_setenv("NHL07_DIAGNOSTIC_DIR", argv[1], 1);
    for (const char* key : {"NHL07_TARGET_DIRTY_CACHE", "NHL07_TARGET_GPU_DOWNSAMPLE", "NHL07_TARGET_GPU_UPSAMPLE", "NHL07_DRAW_DEDUP", "NHL07_STREAM_UPLOAD", "NHL07_MERGE_UPLOAD", "NHL07_PACK_UPLOAD", "NHL07_SHADER_PREP_CACHE", "NHL07_TEXTURE_BASE_COMPARE", "NHL07_EXACT_BUFFER_CACHE"}) test_unsetenv(key);

    section("defaults_and_disabled");
    nhl07_profile_control();
    option_flags(false, true, true, true);
    disabled_zero_clock();

    section("crlf_baseline_and_poll_throttle");
    config("format=2\r\nprofile=1\r\ntarget_dirty_cache=0\r\ntarget_gpu_downsample=0\r\ntarget_gpu_upsample=0\r\ndraw_dedup=0\r\nstream_upload=0\r\nmerge_upload=0\r\npack_upload=0\r\nshader_prep_cache=0\r\nexact_buffer_cache=0\r\n");
    for (unsigned i = 0; i < 59; ++i) nhl07_profile_control();
    check(nhl07_profile_begin() == 0, "configuration is not reread before 60 control calls");
    option_flags(false, true, true, true);
    nhl07_profile_control();
    option_flags(false, false, false, false, false, false, false, false, false, false);
    check(nhl07_profile_begin() != 0, "CRLF schema activates profiling");
    span(NHL07_PROFILE_DRAW, 99000000, 99999);
    nhl07_profile_frame(900000000); // Mixed mode-transition frame must disappear.
    section("quantiles_and_raw_order");
    for (unsigned i = 0; i < 300; ++i) {
        span(NHL07_PROFILE_DRAW, 2000000);
        nhl07_profile_bytes(NHL07_PROFILE_COMPARE, 1234 + i);
        const auto count = clock_calls;
        nhl07_profile_end(NHL07_PROFILE_COUNT, test_clock_ns);
        nhl07_profile_bytes(NHL07_PROFILE_COUNT, 1000000);
        check(clock_calls == count, "invalid stage does not read clock");
        nhl07_profile_frame((std::uint64_t((i * 137) % 300) + 1) * 1000000ull);
    }

    section("baseline_to_optimized_transition");
    for (unsigned i = 0; i < 150; ++i) { span(NHL07_PROFILE_COMPARE, 7000000, 123456); nhl07_profile_frame(5000000); }
    config("format=2\nprofile=1\n"); poll_control();
    option_flags(false, true, true, true);
    span(NHL07_PROFILE_COMPARE, 88000000, 888888); nhl07_profile_frame(999000000);
    for (unsigned i = 0; i < 300; ++i) {
        span(NHL07_PROFILE_UNIFORM, 1000000, 64);
        nhl07_profile_frame(i % 2 ? 17000000 : 16000000);
    }

    section("long_stall_discards_partial");
    for (unsigned i = 0; i < 100; ++i) { span(NHL07_PROFILE_COMPARE, 5000000, 55555); nhl07_profile_frame(1000000); }
    span(NHL07_PROFILE_COMPARE, 9000000, 99999); nhl07_profile_frame(1000000000ull);
    for (unsigned i = 0; i < 300; ++i) { span(NHL07_PROFILE_READ_PIXELS, 3000000, 1024); nhl07_profile_frame(40000000); }

    section("zero_interval_discards_partial");
    for (unsigned i = 0; i < 100; ++i) { span(NHL07_PROFILE_COMPARE, 7000000, 88888); nhl07_profile_frame(2000000); }
    nhl07_profile_frame(0);
    for (unsigned i = 0; i < 300; ++i) { span(NHL07_PROFILE_RASTER, 500000); nhl07_profile_frame(20000000); }

    section("legacy_config_ignored");
    config("profile=1\ntarget_dirty_cache=1\ntarget_gpu_downsample=0\ntarget_gpu_upsample=0\ndraw_dedup=0\nstream_upload=1\nmerge_upload=1\n"); poll_control();
    option_flags(false, true, true, true); disabled_zero_clock();
    section("misplaced_schema_ignored");
    config("profile=1\nformat=2\ntarget_dirty_cache=1\ndraw_dedup=0\nstream_upload=1\nmerge_upload=1\n"); poll_control();
    option_flags(false, true, true, true); disabled_zero_clock();
    section("unsupported_schema_ignored");
    config("format=3\nprofile=1\ntarget_dirty_cache=1\ndraw_dedup=0\nstream_upload=1\nmerge_upload=1\n"); poll_control();
    option_flags(false, true, true, true); disabled_zero_clock();
    section("invalid_values_ignored");
    config("format=2\nprofile=01\nprofile=true\ntarget_dirty_cache=2\ntarget_gpu_downsample=00\ntarget_gpu_upsample=1junk\ndraw_dedup=\nstream_upload=true\nstream_upload=01\nmerge_upload=2\nmerge_upload=1junk\nunknown=1\n"); poll_control();
    option_flags(false, true, true, true); disabled_zero_clock();

    section("explicit_experimental_flag_and_reenable");
    config("format=2\nprofile=1\ntarget_dirty_cache=1\ntarget_gpu_downsample=0\ntarget_gpu_upsample=0\ndraw_dedup=0\n"); poll_control();
    option_flags(true, false, false, false); nhl07_profile_frame(777000000);
    for (unsigned i = 0; i < 300; ++i) { span(NHL07_PROFILE_TARGET_SET, 750000, 32); nhl07_profile_frame(10000000); }
    for (unsigned i = 0; i < 25; ++i) { span(NHL07_PROFILE_COMPARE, 6000000, 66666); nhl07_profile_frame(5000000); }

    section("missing_file_restores_release_defaults");
    check(std::remove(config_path.c_str()) == 0, "remove own temporary configuration"); poll_control();
    option_flags(false, true, true, true); disabled_zero_clock();
    section("fresh_profile_after_disable");
    config("format=2\nprofile=1\n"); poll_control();
    option_flags(false, true, true, true); nhl07_profile_frame(999000000);
    for (unsigned i = 0; i < 300; ++i) { span(NHL07_PROFILE_SUBMIT, 125000); nhl07_profile_frame(25000000); }

    section("upload_modes_setup");
    config("format=2\nprofile=0\nstream_upload=1\nmerge_upload=1\n");poll_control();
    option_flags(false,true,true,true,true,true);disabled_zero_clock();
    // Every transition changes one or both upload flags while profiling
    // remains enabled. Partial old batches and the transition frame must not
    // leak into the following independently checked JSON batch.
    const bool stream_modes[]={false,true,false,true};
    const bool merge_modes[]={false,false,true,true};
    for(unsigned mode=0;mode<4;mode++){
        if(mode)for(unsigned i=0;i<75;i++){span(NHL07_PROFILE_COMPARE,12000000,999999);nhl07_profile_frame(7000000);}
        std::string title="upload_mode_"+std::to_string(unsigned(stream_modes[mode]))+std::to_string(unsigned(merge_modes[mode]));section(title.c_str());
        std::string text="format=2\nprofile=1\nstream_upload="+std::to_string(unsigned(stream_modes[mode]))+"\nmerge_upload="+std::to_string(unsigned(merge_modes[mode]))+"\n";
        config(text.c_str());poll_control();option_flags(false,true,true,true,stream_modes[mode],merge_modes[mode]);
        span(NHL07_PROFILE_BUFFER_UPLOAD,99000000,999999);nhl07_profile_frame(999000000);
        for(unsigned i=0;i<300;i++){
            span(NHL07_PROFILE_BUFFER_UPLOAD,1250000,64+mode*32);
            span(NHL07_PROFILE_ATTRIBUTE_CONFIG,125000);
            nhl07_profile_bytes(NHL07_PROFILE_BUFFER_SOURCE,200+i+mode*100);
            nhl07_profile_frame(24000000ull+mode*1000000ull+(i%7)*12345ull);
        }
    }
    section("upload_disable_keeps_explicit_modes");
    for(unsigned i=0;i<73;i++){span(NHL07_PROFILE_BUFFER_UPLOAD,9000000,888888);nhl07_profile_frame(1000000);}
    config("format=2\nprofile=0\nstream_upload=1\nmerge_upload=1\n");poll_control();
    option_flags(false,true,true,true,true,true);disabled_zero_clock();

    section("upload_invalid_values_keep_prior_valid_fields");
    config("format=2\nprofile=1\nstream_upload=1\nstream_upload=00\nstream_upload=banana\nmerge_upload=0\nmerge_upload=11\nmerge_upload=\n");poll_control();
    option_flags(false,true,true,true,true,false);nhl07_profile_frame(999000000);
    for(unsigned i=0;i<300;i++){span(NHL07_PROFILE_BUFFER_UPLOAD,875000,32);nhl07_profile_bytes(NHL07_PROFILE_BUFFER_SOURCE,128);nhl07_profile_frame(32000000);}

    section("upload_missing_file_restores_defaults");
    check(std::remove(config_path.c_str())==0,"remove upload experiment configuration");poll_control();
    option_flags(false,true,true,true);disabled_zero_clock();
    section("upload_fresh_profile_after_default_restore");
    config("format=2\nprofile=1\n");poll_control();option_flags(false,true,true,true);nhl07_profile_frame(999000000);
    for(unsigned i=0;i<300;i++){span(NHL07_PROFILE_ATTRIBUTE_CONFIG,62500);nhl07_profile_frame(28000000);}
    section("pack_modes_setup");
    config("format=2\nprofile=0\npack_upload=0\n");poll_control();option_flags(false,true,true,true,default_stream,default_merge,false);disabled_zero_clock();
    const bool pack_modes[]={true,false,true,false};
    for(unsigned mode=0;mode<4;mode++){
        if(mode)for(unsigned i=0;i<75;i++){span(NHL07_PROFILE_COMPARE,12000000,999999);nhl07_profile_frame(7000000);}
        std::string title="pack_mode_"+std::to_string(unsigned(pack_modes[mode]))+"_"+std::to_string(mode);section(title.c_str());
        std::string text="format=2\nprofile=1\npack_upload="+std::to_string(unsigned(pack_modes[mode]))+"\n";
        config(text.c_str());
        if(mode==0){
            for(unsigned i=0;i<59;i++)nhl07_profile_control();
            option_flags(false,true,true,true,default_stream,default_merge,false);
            check(nhl07_profile_begin()==0,"pack control waits for the 60th poll");nhl07_profile_control();
        }else poll_control();
        option_flags(false,true,true,true,default_stream,default_merge,pack_modes[mode]);
        span(NHL07_PROFILE_BUFFER_UPLOAD,99000000,999999);nhl07_profile_frame(999000000);
        for(unsigned i=0;i<300;i++){
            span(NHL07_PROFILE_BUFFER_UPLOAD,625000,256+mode*16);
            nhl07_profile_bytes(NHL07_PROFILE_BUFFER_SOURCE,1024+i+mode*50);
            nhl07_profile_frame(21000000ull+mode*1000000ull+(i%11)*4321ull);
        }
    }
    section("pack_invalid_values_keep_prior_valid_fields");
    config("format=2\nprofile=1\npack_upload=1\npack_upload=00\npack_upload=banana\npack_upload=2\npack_upload=\n");poll_control();
    option_flags(false,true,true,true,default_stream,default_merge,true);nhl07_profile_frame(999000000);
    for(unsigned i=0;i<300;i++){span(NHL07_PROFILE_BUFFER_UPLOAD,500000,16);nhl07_profile_frame(30000000);}
    section("pack_missing_file_restores_defaults");
    check(std::remove(config_path.c_str())==0,"remove pack experiment configuration");poll_control();option_flags(false,true,true,true);disabled_zero_clock();
    section("pack_fresh_profile_after_default_restore");
    config("format=2\nprofile=1\n");poll_control();option_flags(false,true,true,true);nhl07_profile_frame(999000000);
    for(unsigned i=0;i<300;i++){span(NHL07_PROFILE_ATTRIBUTE_CONFIG,31250);nhl07_profile_frame(26000000);}

    section("preparation_modes_setup");
    config("format=2\nprofile=0\nstream_upload=1\nmerge_upload=1\npack_upload=1\nshader_prep_cache=0\ntexture_base_compare=0\n");
    poll_control();option_flags(false,true,true,true,true,true,true,false,false);disabled_zero_clock();
    // Walk the two new flags independently in both directions. Existing
    // upload flags stay explicitly on, so coupling either family is visible.
    const bool shader_modes[]={false,true,true,false,false};
    const bool texture_modes[]={false,false,true,true,false};
    for(unsigned mode=0;mode<5;mode++){
        if(mode)for(unsigned i=0;i<73;i++){span(NHL07_PROFILE_COMPARE,12000000,999999);nhl07_profile_frame(7000000);}
        const std::string title="preparation_mode_"+std::to_string(mode);section(title.c_str());
        const std::string text="format=2\nprofile=1\nstream_upload=1\nmerge_upload=1\npack_upload=1\nshader_prep_cache="+std::to_string(unsigned(shader_modes[mode]))+"\ntexture_base_compare="+std::to_string(unsigned(texture_modes[mode]))+"\n";
        config(text.c_str());
        if(mode==0){
            for(unsigned i=0;i<59;i++)nhl07_profile_control();
            option_flags(false,true,true,true,true,true,true,false,false);
            check(nhl07_profile_begin()==0,"preparation controls wait for the 60th poll");nhl07_profile_control();
        }else poll_control();
        option_flags(false,true,true,true,true,true,true,shader_modes[mode],texture_modes[mode]);
        span(NHL07_PROFILE_COMPARE,99000000,999999);nhl07_profile_frame(999000000);
        for(unsigned i=0;i<300;i++){
            span(NHL07_PROFILE_PARSE,250000+mode*125000);
            span(NHL07_PROFILE_COMPARE,500000,128+i+mode*16);
            nhl07_profile_frame(18000000ull+mode*1000000ull+(i%13)*2468ull);
        }
    }
    section("preparation_invalid_values_keep_prior_valid_fields");
    config("format=2\nprofile=1\nshader_prep_cache=1\nshader_prep_cache=00\nshader_prep_cache=banana\nshader_prep_cache=\ntexture_base_compare=1\ntexture_base_compare=11\ntexture_base_compare=true\ntexture_base_compare=2\n");
    poll_control();option_flags(false,true,true,true,default_stream,default_merge,default_pack,true,true);nhl07_profile_frame(999000000);
    for(unsigned i=0;i<300;i++){span(NHL07_PROFILE_PARSE,875000);span(NHL07_PROFILE_COMPARE,375000,96);nhl07_profile_frame(31000000);}
    section("preparation_disable_keeps_explicit_flags");
    for(unsigned i=0;i<73;i++){span(NHL07_PROFILE_COMPARE,9000000,888888);nhl07_profile_frame(1000000);}
    config("format=2\nprofile=0\nshader_prep_cache=1\ntexture_base_compare=1\n");poll_control();
    option_flags(false,true,true,true,default_stream,default_merge,default_pack,true,true);disabled_zero_clock();
    section("preparation_legacy_schema_restores_defaults");
    config("profile=1\nshader_prep_cache=1\ntexture_base_compare=1\n");poll_control();
    option_flags(false,true,true,true);disabled_zero_clock();
    section("preparation_unsupported_schema_ignored");
    config("format=3\nprofile=1\nshader_prep_cache=1\ntexture_base_compare=1\n");poll_control();
    option_flags(false,true,true,true);disabled_zero_clock();
    section("preparation_invalid_values_restore_defaults");
    config("format=2\nprofile=01\nshader_prep_cache=01\nshader_prep_cache=true\ntexture_base_compare=00\ntexture_base_compare=1junk\n");poll_control();
    option_flags(false,true,true,true);disabled_zero_clock();
    section("preparation_missing_file_restores_defaults");
    config("format=2\nprofile=0\nshader_prep_cache=1\ntexture_base_compare=1\n");poll_control();
    option_flags(false,true,true,true,default_stream,default_merge,default_pack,true,true);
    check(std::remove(config_path.c_str())==0,"remove preparation experiment configuration");poll_control();
    option_flags(false,true,true,true);disabled_zero_clock();
    section("preparation_fresh_profile_after_default_restore");
    config("format=2\nprofile=1\n");poll_control();option_flags(false,true,true,true);nhl07_profile_frame(999000000);
    for(unsigned i=0;i<300;i++){span(NHL07_PROFILE_COMPARE,187500,24);nhl07_profile_frame(27000000);}

    section("exact_buffer_modes_setup");
    config("format=2\nprofile=0\nstream_upload=1\nmerge_upload=1\npack_upload=1\nshader_prep_cache=1\ntexture_base_compare=1\nexact_buffer_cache=0\n");
    poll_control();option_flags(false,true,true,true,true,true,true,true,true,false);disabled_zero_clock();
    const bool exact_modes[]={true,false,true,false};
    for(unsigned mode=0;mode<4;mode++){
        if(mode)for(unsigned i=0;i<71;i++){span(NHL07_PROFILE_BUFFER_COMPARE,12000000,999999);nhl07_profile_frame(7000000);}
        const std::string title="exact_buffer_mode_"+std::to_string(mode);section(title.c_str());
        const std::string text="format=2\nprofile=1\nstream_upload=1\nmerge_upload=1\npack_upload=1\nshader_prep_cache=1\ntexture_base_compare=1\nexact_buffer_cache="+std::to_string(unsigned(exact_modes[mode]))+"\n";
        config(text.c_str());
        if(mode==0){
            for(unsigned i=0;i<59;i++)nhl07_profile_control();
            option_flags(false,true,true,true,true,true,true,true,true,false);
            check(nhl07_profile_begin()==0,"exact buffer control waits for the 60th poll");nhl07_profile_control();
        }else poll_control();
        option_flags(false,true,true,true,true,true,true,true,true,exact_modes[mode]);
        span(NHL07_PROFILE_BUFFER_COMPARE,99000000,999999);nhl07_profile_frame(999000000);
        for(unsigned i=0;i<300;i++){
            span(NHL07_PROFILE_BUFFER_COMPARE,62500+mode*31250,4096+i+mode*32);
            span(NHL07_PROFILE_COMPARE,125000,64);
            nhl07_profile_frame(16000000ull+mode*1000000ull+(i%17)*1234ull);
        }
    }
    section("exact_buffer_invalid_values_keep_prior_valid_fields");
    config("format=2\nprofile=1\nexact_buffer_cache=1\nexact_buffer_cache=00\nexact_buffer_cache=banana\nexact_buffer_cache=2\nexact_buffer_cache=\n");
    poll_control();option_flags(false,true,true,true,default_stream,default_merge,default_pack,default_shader,false,true);nhl07_profile_frame(999000000);
    for(unsigned i=0;i<300;i++){span(NHL07_PROFILE_BUFFER_COMPARE,93750,512);nhl07_profile_frame(29000000);}
    section("exact_buffer_disable_keeps_explicit_flag");
    for(unsigned i=0;i<79;i++){span(NHL07_PROFILE_BUFFER_COMPARE,9000000,888888);nhl07_profile_frame(1000000);}
    config("format=2\nprofile=0\nexact_buffer_cache=1\n");poll_control();
    option_flags(false,true,true,true,default_stream,default_merge,default_pack,default_shader,false,true);disabled_zero_clock();
    section("exact_buffer_misplaced_schema_restores_default");
    config("profile=1\nformat=2\nexact_buffer_cache=1\n");poll_control();option_flags(false,true,true,true);disabled_zero_clock();
    section("exact_buffer_unsupported_schema_ignored");
    config("format=3\nprofile=1\nexact_buffer_cache=1\n");poll_control();option_flags(false,true,true,true);disabled_zero_clock();
    section("exact_buffer_invalid_values_restore_default");
    config("format=2\nprofile=01\nexact_buffer_cache=01\nexact_buffer_cache=true\nexact_buffer_cache=1junk\n");poll_control();option_flags(false,true,true,true);disabled_zero_clock();
    section("exact_buffer_missing_file_restores_default");
    config("format=2\nprofile=0\nexact_buffer_cache=1\n");poll_control();
    option_flags(false,true,true,true,default_stream,default_merge,default_pack,default_shader,false,true);
    check(std::remove(config_path.c_str())==0,"remove exact buffer experiment configuration");poll_control();option_flags(false,true,true,true);disabled_zero_clock();
    section("exact_buffer_fresh_profile_after_default_restore");
    config("format=2\nprofile=1\n");poll_control();option_flags(false,true,true,true);nhl07_profile_frame(999000000);
    for(unsigned i=0;i<300;i++){span(NHL07_PROFILE_BUFFER_COMPARE,31250,128);nhl07_profile_frame(23000000);}
    std::remove(config_path.c_str());
    std::fprintf(stdout, "RENDER_PROFILE passed=%u failed=0 clock_calls=%llu\n", checks, static_cast<unsigned long long>(clock_calls));
    return 0;
}
