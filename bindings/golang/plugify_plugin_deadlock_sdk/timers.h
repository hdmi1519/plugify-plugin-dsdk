#pragma once

#include "shared.h"

extern int64_t (*__plugify_plugin_deadlock_sdk_CreateTimer)(float, void*, bool);

static int64_t CreateTimer(float interval, void* callback, bool repeating) {
	return __plugify_plugin_deadlock_sdk_CreateTimer(interval, callback, repeating);
}

extern bool (*__plugify_plugin_deadlock_sdk_KillTimer)(int64_t);

static bool KillTimer(int64_t timerId) {
	return __plugify_plugin_deadlock_sdk_KillTimer(timerId);
}

