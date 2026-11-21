#pragma once

#include "shared.h"

extern void (*__plugify_plugin_deadlock_sdk_PrecacheResource)(String*);

static void PrecacheResource(String* path) {
	__plugify_plugin_deadlock_sdk_PrecacheResource(path);
}

extern void (*__plugify_plugin_deadlock_sdk_PrecacheModel)(String*);

static void PrecacheModel(String* modelPath) {
	__plugify_plugin_deadlock_sdk_PrecacheModel(modelPath);
}

