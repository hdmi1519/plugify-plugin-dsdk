#include "shared.h"

PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GetPlayerController)(int32_t) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GetPlayerPawn)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetPlayerSlot)(int64_t) = NULL;


PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GetPlayerName)(int32_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__plugify_plugin_deadlock_sdk_GetSteamID)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_IsClientAuthenticated)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_IsClientConnected)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_IsFakeClient)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_CreateFakeClient)(String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_DisconnectClient)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_KickClient)(int32_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ChangeTeam)(int64_t, int32_t, bool) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetPlayerPing)(int32_t) = NULL;


PLUGIFY_EXPORT float (*__plugify_plugin_deadlock_sdk_GetPlayerTimeConnected)(int32_t) = NULL;


