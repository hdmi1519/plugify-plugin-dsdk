#include "shared.h"

PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_AddItem)(int64_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_SellItem)(int64_t, String*, bool, bool) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetItemImbueEffects)(String*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_CanImbueAbility)(int64_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_ImbueAbility)(int64_t, int64_t) = NULL;


