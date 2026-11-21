#include "shared.h"

PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_CreateDamageInfo)(int64_t, int64_t, int64_t, float, int32_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_DestroyDamageInfo)(int64_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_TakeDamage)(int64_t, int64_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ApplyDamage)(int64_t, int64_t) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetMaxHealth)(int64_t) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_Heal)(int64_t, float) = NULL;


