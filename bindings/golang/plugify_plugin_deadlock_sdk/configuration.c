#include "shared.h"

PLUGIFY_EXPORT String (*__plugify_plugin_deadlock_sdk_GetConfigString)(String*, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__plugify_plugin_deadlock_sdk_GetConfigInt)(String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_GetConfigBool)(String*, bool) = NULL;


PLUGIFY_EXPORT float (*__plugify_plugin_deadlock_sdk_GetConfigFloat)(String*, float) = NULL;


