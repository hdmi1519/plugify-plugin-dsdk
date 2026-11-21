#include "shared.h"

PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_AddAbility)(int64_t, String*, uint16_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_RemoveAbility)(int64_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_RemoveAbilityByEntity)(int64_t, int64_t) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_FindAbilityByName)(int64_t, String*) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GetAbilityBySlot)(int64_t, int16_t) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_ExecuteAbility)(int64_t, int64_t, bool, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ToggleActivate)(int64_t, bool) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ResetAbilityCooldown)(int64_t) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetAbilityMaxCharges)(int64_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetUpgradeBits)(int64_t, int32_t) = NULL;


