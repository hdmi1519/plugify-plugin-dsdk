#pragma once

#include "shared.h"

extern bool (*__plugify_plugin_deadlock_sdk_NavGetNearestPoint)(float, float, float, float, int32_t);

static bool NavGetNearestPoint(float x, float y, float z, float maxDistance, int32_t hull) {
	return __plugify_plugin_deadlock_sdk_NavGetNearestPoint(x, y, z, maxDistance, hull);
}

extern float (*__plugify_plugin_deadlock_sdk_NavGetGroundHeight)(float, float, float, float, int32_t);

static float NavGetGroundHeight(float x, float y, float z, float maxDistance, int32_t hull) {
	return __plugify_plugin_deadlock_sdk_NavGetGroundHeight(x, y, z, maxDistance, hull);
}

