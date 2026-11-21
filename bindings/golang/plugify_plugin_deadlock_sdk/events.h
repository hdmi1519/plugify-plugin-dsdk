#pragma once

#include "shared.h"

extern void (*__plugify_plugin_deadlock_sdk_RegisterGameEvent)(String*);

static void RegisterGameEvent(String* name) {
	__plugify_plugin_deadlock_sdk_RegisterGameEvent(name);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_CreateGameEvent)(String*, bool);

static int64_t CreateGameEvent(String* name, bool force) {
	return __plugify_plugin_deadlock_sdk_CreateGameEvent(name, force);
}

extern bool (*__plugify_plugin_deadlock_sdk_FireGameEvent)(int64_t, bool);

static bool FireGameEvent(int64_t event, bool dontBroadcast) {
	return __plugify_plugin_deadlock_sdk_FireGameEvent(event, dontBroadcast);
}

extern void (*__plugify_plugin_deadlock_sdk_FreeGameEvent)(int64_t);

static void FreeGameEvent(int64_t event) {
	__plugify_plugin_deadlock_sdk_FreeGameEvent(event);
}

extern bool (*__plugify_plugin_deadlock_sdk_GameEventGetBool)(int64_t, String*, bool);

static bool GameEventGetBool(int64_t event, String* key, bool def) {
	return __plugify_plugin_deadlock_sdk_GameEventGetBool(event, key, def);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GameEventGetInt)(int64_t, String*, int32_t);

static int32_t GameEventGetInt(int64_t event, String* key, int32_t def) {
	return __plugify_plugin_deadlock_sdk_GameEventGetInt(event, key, def);
}

extern float (*__plugify_plugin_deadlock_sdk_GameEventGetFloat)(int64_t, String*, float);

static float GameEventGetFloat(int64_t event, String* key, float def) {
	return __plugify_plugin_deadlock_sdk_GameEventGetFloat(event, key, def);
}

extern String (*__plugify_plugin_deadlock_sdk_GameEventGetString)(int64_t, String*, String*);

static String GameEventGetString(int64_t event, String* key, String* def) {
	return __plugify_plugin_deadlock_sdk_GameEventGetString(event, key, def);
}

extern uint64_t (*__plugify_plugin_deadlock_sdk_GameEventGetUint64)(int64_t, String*, uint64_t);

static uint64_t GameEventGetUint64(int64_t event, String* key, uint64_t def) {
	return __plugify_plugin_deadlock_sdk_GameEventGetUint64(event, key, def);
}

extern void (*__plugify_plugin_deadlock_sdk_GameEventSetBool)(int64_t, String*, bool);

static void GameEventSetBool(int64_t event, String* key, bool val) {
	__plugify_plugin_deadlock_sdk_GameEventSetBool(event, key, val);
}

extern void (*__plugify_plugin_deadlock_sdk_GameEventSetInt)(int64_t, String*, int32_t);

static void GameEventSetInt(int64_t event, String* key, int32_t val) {
	__plugify_plugin_deadlock_sdk_GameEventSetInt(event, key, val);
}

extern void (*__plugify_plugin_deadlock_sdk_GameEventSetFloat)(int64_t, String*, float);

static void GameEventSetFloat(int64_t event, String* key, float val) {
	__plugify_plugin_deadlock_sdk_GameEventSetFloat(event, key, val);
}

extern void (*__plugify_plugin_deadlock_sdk_GameEventSetString)(int64_t, String*, String*);

static void GameEventSetString(int64_t event, String* key, String* val) {
	__plugify_plugin_deadlock_sdk_GameEventSetString(event, key, val);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GameEventGetPlayerSlot)(int64_t, String*);

static int32_t GameEventGetPlayerSlot(int64_t event, String* key) {
	return __plugify_plugin_deadlock_sdk_GameEventGetPlayerSlot(event, key);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_GameEventGetPlayerPawn)(int64_t, String*);

static int64_t GameEventGetPlayerPawn(int64_t event, String* key) {
	return __plugify_plugin_deadlock_sdk_GameEventGetPlayerPawn(event, key);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_GameEventGetPlayerController)(int64_t, String*);

static int64_t GameEventGetPlayerController(int64_t event, String* key) {
	return __plugify_plugin_deadlock_sdk_GameEventGetPlayerController(event, key);
}

