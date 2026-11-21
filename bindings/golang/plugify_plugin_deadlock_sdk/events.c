#include "shared.h"

PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_RegisterGameEvent)(String*) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_CreateGameEvent)(String*, bool) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_FireGameEvent)(int64_t, bool) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_FreeGameEvent)(int64_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_GameEventGetBool)(int64_t, String*, bool) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GameEventGetInt)(int64_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT float (*__plugify_plugin_deadlock_sdk_GameEventGetFloat)(int64_t, String*, float) = NULL;


PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GameEventGetString)(int64_t, String*, String*) = NULL;


PLUGIFY_EXPORT uint64_t (*__plugify_plugin_deadlock_sdk_GameEventGetUint64)(int64_t, String*, uint64_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_GameEventSetBool)(int64_t, String*, bool) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_GameEventSetInt)(int64_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_GameEventSetFloat)(int64_t, String*, float) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_GameEventSetString)(int64_t, String*, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GameEventGetPlayerSlot)(int64_t, String*) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GameEventGetPlayerPawn)(int64_t, String*) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GameEventGetPlayerController)(int64_t, String*) = NULL;


