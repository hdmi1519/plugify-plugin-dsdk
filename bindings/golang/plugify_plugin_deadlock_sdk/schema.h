#pragma once

#include "shared.h"

extern int32_t (*__plugify_plugin_deadlock_sdk_GetSchemaFieldOffset)(String*, String*);

static int32_t GetSchemaFieldOffset(String* className, String* fieldName) {
	return __plugify_plugin_deadlock_sdk_GetSchemaFieldOffset(className, fieldName);
}

extern void (*__plugify_plugin_deadlock_sdk_NotifyStateChanged)(int64_t, int32_t, int16_t, int32_t);

static void NotifyStateChanged(int64_t entity, int32_t fieldOffset, int16_t chainOffset, int32_t networkStateChangedOffset) {
	__plugify_plugin_deadlock_sdk_NotifyStateChanged(entity, fieldOffset, chainOffset, networkStateChangedOffset);
}

extern void (*__plugify_plugin_deadlock_sdk_SetSchemaString)(int64_t, String*, String*, String*);

static void SetSchemaString(int64_t entity, String* className, String* fieldName, String* value) {
	__plugify_plugin_deadlock_sdk_SetSchemaString(entity, className, fieldName, value);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GetSchemaClassSize)(String*);

static int32_t GetSchemaClassSize(String* className) {
	return __plugify_plugin_deadlock_sdk_GetSchemaClassSize(className);
}

