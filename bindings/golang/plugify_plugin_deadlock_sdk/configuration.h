#pragma once

#include "shared.h"

extern String (*__plugify_plugin_deadlock_sdk_GetConfigString)(String*, String*);

static String GetConfigString(String* key, String* defaultValue) {
	return __plugify_plugin_deadlock_sdk_GetConfigString(key, defaultValue);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GetConfigInt)(String*, int32_t);

static int32_t GetConfigInt(String* key, int32_t defaultValue) {
	return __plugify_plugin_deadlock_sdk_GetConfigInt(key, defaultValue);
}

extern bool (*__plugify_plugin_deadlock_sdk_GetConfigBool)(String*, bool);

static bool GetConfigBool(String* key, bool defaultValue) {
	return __plugify_plugin_deadlock_sdk_GetConfigBool(key, defaultValue);
}

extern float (*__plugify_plugin_deadlock_sdk_GetConfigFloat)(String*, float);

static float GetConfigFloat(String* key, float defaultValue) {
	return __plugify_plugin_deadlock_sdk_GetConfigFloat(key, defaultValue);
}

