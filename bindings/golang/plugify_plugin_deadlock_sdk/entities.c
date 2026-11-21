#include "shared.h"

PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_CreateEntityByName)(String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_QueueSpawnEntity)(int64_t, int64_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ExecuteQueuedCreation)() = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_RemoveEntity)(int64_t) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GetEntityByIndex)(int32_t) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GetEntityFromHandle)(uint32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__plugify_plugin_deadlock_sdk_GetEntityHandle)(int64_t) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_FindEntityByName)(int64_t, String*) = NULL;


PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GetEntityDesignerName)(int64_t) = NULL;


PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GetEntityClassname)(int64_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_Teleport)(int64_t, float, float, float, float, float, float, float, float, float) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetModel)(int64_t, String*) = NULL;


PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GetModelName)(int64_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetScale)(int64_t, float) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetMoveType)(int64_t, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetGravityScale)(int64_t, float) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_EntityDerivesFrom)(int64_t, String*) = NULL;


