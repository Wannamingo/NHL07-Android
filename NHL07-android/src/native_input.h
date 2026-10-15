#pragma once
#include <stdint.h>
typedef enum {
 NHL_INPUT_XInitDevices,
 NHL_INPUT_XGetDevices,
 NHL_INPUT_XGetDeviceChanges,
 NHL_INPUT_XGetDeviceEnumerationStatus,
 NHL_INPUT_XInputOpen,
 NHL_INPUT_XInputClose,
 NHL_INPUT_XInputGetCapabilities,
 NHL_INPUT_XInputGetState,
 NHL_INPUT_XInputPoll,
 NHL_INPUT_XInputSetState,
} NhlInputApi;
uint32_t nhl07_input_call(NhlInputApi api,const uint32_t *args);
