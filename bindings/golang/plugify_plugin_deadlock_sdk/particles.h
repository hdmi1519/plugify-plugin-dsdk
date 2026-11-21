#pragma once

#include "shared.h"

extern int64_t (*__plugify_plugin_deadlock_sdk_CreateParticle)(String*, int32_t, int64_t);

static int64_t CreateParticle(String* particleName, int32_t attachType, int64_t entity) {
	return __plugify_plugin_deadlock_sdk_CreateParticle(particleName, attachType, entity);
}

extern void (*__plugify_plugin_deadlock_sdk_DestroyParticle)(int64_t, bool);

static void DestroyParticle(int64_t particle, bool destroyImmediately) {
	__plugify_plugin_deadlock_sdk_DestroyParticle(particle, destroyImmediately);
}

