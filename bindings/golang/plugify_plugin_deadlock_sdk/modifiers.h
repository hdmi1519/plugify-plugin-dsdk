#pragma once

#include "shared.h"

extern int64_t (*__plugify_plugin_deadlock_sdk_AddModifier)(int64_t, String*, int64_t, int64_t, int64_t, int32_t);

static int64_t AddModifier(int64_t entity, String* modifierName, int64_t kv3, int64_t caster, int64_t ability, int32_t team) {
	return __plugify_plugin_deadlock_sdk_AddModifier(entity, modifierName, kv3, caster, ability, team);
}

extern bool (*__plugify_plugin_deadlock_sdk_RemoveModifier)(int64_t, int64_t);

static bool RemoveModifier(int64_t entity, int64_t modifier) {
	return __plugify_plugin_deadlock_sdk_RemoveModifier(entity, modifier);
}

