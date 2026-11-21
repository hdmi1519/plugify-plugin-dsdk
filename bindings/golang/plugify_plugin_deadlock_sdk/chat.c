#include "shared.h"

PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_PrintToChat)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_PrintToChatAll)(String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_PrintToConsole)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_PrintToConsoleAll)(String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_HudAnnounce)(int32_t, String*, String*, float) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_HudAnnounceAll)(String*, String*, float) = NULL;


