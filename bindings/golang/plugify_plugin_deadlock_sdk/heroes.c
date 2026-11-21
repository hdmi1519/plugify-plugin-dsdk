#include "shared.h"

PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_SelectHero)(int64_t, String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ResetHero)(int64_t, bool) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_PrecacheHero)(String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ForceRespawn)(int64_t, bool) = NULL;


PLUGIFY_EXPORT int64_t (*__plugify_plugin_deadlock_sdk_GetHeroData)(String*) = NULL;


PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GetHeroName)(int64_t) = NULL;


