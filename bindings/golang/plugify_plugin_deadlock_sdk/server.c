#include "shared.h"

PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GetMapName)() = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_IsMapValid)(String*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_SetServerKeyValue)(String*, String*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_ClearServerKeyValues)() = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetServerAddons)(String*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_AddFileSystemSearchPath)(String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_HasCommandLineParm)(String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetConnectRejectReason)(String*) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GetGlobalVars)() = NULL;


PLUGIFY_EXPORT float (*__plugify_plugin_deadlock_sdk_GetGameTime)() = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetGameTickCount)() = NULL;


