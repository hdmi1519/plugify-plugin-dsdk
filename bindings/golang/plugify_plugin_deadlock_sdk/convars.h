#pragma once

#include "shared.h"

extern uint64_t (*__plugify_plugin_deadlock_sdk_FindConVar)(String*);

static uint64_t FindConVar(String* name) {
	return __plugify_plugin_deadlock_sdk_FindConVar(name);
}

extern uint64_t (*__plugify_plugin_deadlock_sdk_CreateConVar)(String*, String*, String*, uint64_t);

static uint64_t CreateConVar(String* name, String* defaultValue, String* description, uint64_t flags) {
	return __plugify_plugin_deadlock_sdk_CreateConVar(name, defaultValue, description, flags);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GetConVarInt)(uint64_t);

static int32_t GetConVarInt(uint64_t handle) {
	return __plugify_plugin_deadlock_sdk_GetConVarInt(handle);
}

extern float (*__plugify_plugin_deadlock_sdk_GetConVarFloat)(uint64_t);

static float GetConVarFloat(uint64_t handle) {
	return __plugify_plugin_deadlock_sdk_GetConVarFloat(handle);
}

extern String (*__plugify_plugin_deadlock_sdk_GetConVarString)(uint64_t);

static String GetConVarString(uint64_t handle) {
	return __plugify_plugin_deadlock_sdk_GetConVarString(handle);
}

extern bool (*__plugify_plugin_deadlock_sdk_GetConVarBool)(uint64_t);

static bool GetConVarBool(uint64_t handle) {
	return __plugify_plugin_deadlock_sdk_GetConVarBool(handle);
}

extern void (*__plugify_plugin_deadlock_sdk_SetConVarInt)(uint64_t, int32_t);

static void SetConVarInt(uint64_t handle, int32_t value) {
	__plugify_plugin_deadlock_sdk_SetConVarInt(handle, value);
}

extern void (*__plugify_plugin_deadlock_sdk_SetConVarFloat)(uint64_t, float);

static void SetConVarFloat(uint64_t handle, float value) {
	__plugify_plugin_deadlock_sdk_SetConVarFloat(handle, value);
}

extern bool (*__plugify_plugin_deadlock_sdk_SetConVarString)(uint64_t, String*);

static bool SetConVarString(uint64_t handle, String* value) {
	return __plugify_plugin_deadlock_sdk_SetConVarString(handle, value);
}

