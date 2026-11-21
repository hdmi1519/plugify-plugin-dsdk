#include "shared.h"

PLUGIFY_EXPORT uint64_t (*__plugify_plugin_deadlock_sdk_FindConVar)(String*) = NULL;


PLUGIFY_EXPORT uint64_t (*__plugify_plugin_deadlock_sdk_CreateConVar)(String*, String*, String*, uint64_t) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetConVarInt)(uint64_t) = NULL;


PLUGIFY_EXPORT float (*__plugify_plugin_deadlock_sdk_GetConVarFloat)(uint64_t) = NULL;


PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GetConVarString)(uint64_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_GetConVarBool)(uint64_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetConVarInt)(uint64_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetConVarFloat)(uint64_t, float) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_SetConVarString)(uint64_t, String*) = NULL;


