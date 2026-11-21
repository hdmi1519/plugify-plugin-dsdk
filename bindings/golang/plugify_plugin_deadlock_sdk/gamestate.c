#include "shared.h"

PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetGameState)() = NULL;


PLUGIFY_EXPORT float (*__plugify_plugin_deadlock_sdk_GetMatchTime)() = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ChangeGameState)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster)(uint32_t, uint32_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap)(bool) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap)() = NULL;


