#pragma once

#include "shared.h"

extern String (*__plugify_plugin_deadlock_sdk_GetMapName)();

static String GetMapName() {
	return __plugify_plugin_deadlock_sdk_GetMapName();
}

extern bool (*__plugify_plugin_deadlock_sdk_IsMapValid)(String*);

static bool IsMapValid(String* map_) {
	return __plugify_plugin_deadlock_sdk_IsMapValid(map_);
}

extern bool (*__plugify_plugin_deadlock_sdk_SetServerKeyValue)(String*, String*);

static bool SetServerKeyValue(String* key, String* value) {
	return __plugify_plugin_deadlock_sdk_SetServerKeyValue(key, value);
}

extern bool (*__plugify_plugin_deadlock_sdk_ClearServerKeyValues)();

static bool ClearServerKeyValues() {
	return __plugify_plugin_deadlock_sdk_ClearServerKeyValues();
}

extern void (*__plugify_plugin_deadlock_sdk_SetServerAddons)(String*);

static void SetServerAddons(String* addons) {
	__plugify_plugin_deadlock_sdk_SetServerAddons(addons);
}

extern bool (*__plugify_plugin_deadlock_sdk_AddFileSystemSearchPath)(String*, String*, int32_t);

static bool AddFileSystemSearchPath(String* path, String* pathId, int32_t addType) {
	return __plugify_plugin_deadlock_sdk_AddFileSystemSearchPath(path, pathId, addType);
}

extern bool (*__plugify_plugin_deadlock_sdk_HasCommandLineParm)(String*);

static bool HasCommandLineParm(String* parm) {
	return __plugify_plugin_deadlock_sdk_HasCommandLineParm(parm);
}

extern void (*__plugify_plugin_deadlock_sdk_SetConnectRejectReason)(String*);

static void SetConnectRejectReason(String* reason) {
	__plugify_plugin_deadlock_sdk_SetConnectRejectReason(reason);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_GetGlobalVars)();

static int64_t GetGlobalVars() {
	return __plugify_plugin_deadlock_sdk_GetGlobalVars();
}

extern float (*__plugify_plugin_deadlock_sdk_GetGameTime)();

static float GetGameTime() {
	return __plugify_plugin_deadlock_sdk_GetGameTime();
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GetGameTickCount)();

static int32_t GetGameTickCount() {
	return __plugify_plugin_deadlock_sdk_GetGameTickCount();
}

