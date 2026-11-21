#pragma once

#include "shared.h"

extern int64_t (*__plugify_plugin_deadlock_sdk_CreateEntityByName)(String*);

static int64_t CreateEntityByName(String* className) {
	return __plugify_plugin_deadlock_sdk_CreateEntityByName(className);
}

extern void (*__plugify_plugin_deadlock_sdk_QueueSpawnEntity)(int64_t, int64_t);

static void QueueSpawnEntity(int64_t entity, int64_t ekv) {
	__plugify_plugin_deadlock_sdk_QueueSpawnEntity(entity, ekv);
}

extern void (*__plugify_plugin_deadlock_sdk_ExecuteQueuedCreation)();

static void ExecuteQueuedCreation() {
	__plugify_plugin_deadlock_sdk_ExecuteQueuedCreation();
}

extern void (*__plugify_plugin_deadlock_sdk_RemoveEntity)(int64_t);

static void RemoveEntity(int64_t entity) {
	__plugify_plugin_deadlock_sdk_RemoveEntity(entity);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_GetEntityByIndex)(int32_t);

static int64_t GetEntityByIndex(int32_t index) {
	return __plugify_plugin_deadlock_sdk_GetEntityByIndex(index);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_GetEntityFromHandle)(uint32_t);

static int64_t GetEntityFromHandle(uint32_t handle) {
	return __plugify_plugin_deadlock_sdk_GetEntityFromHandle(handle);
}

extern uint32_t (*__plugify_plugin_deadlock_sdk_GetEntityHandle)(int64_t);

static uint32_t GetEntityHandle(int64_t entity) {
	return __plugify_plugin_deadlock_sdk_GetEntityHandle(entity);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_FindEntityByName)(int64_t, String*);

static int64_t FindEntityByName(int64_t startEntity, String* name) {
	return __plugify_plugin_deadlock_sdk_FindEntityByName(startEntity, name);
}

extern String (*__plugify_plugin_deadlock_sdk_GetEntityDesignerName)(int64_t);

static String GetEntityDesignerName(int64_t entity) {
	return __plugify_plugin_deadlock_sdk_GetEntityDesignerName(entity);
}

extern String (*__plugify_plugin_deadlock_sdk_GetEntityClassname)(int64_t);

static String GetEntityClassname(int64_t entity) {
	return __plugify_plugin_deadlock_sdk_GetEntityClassname(entity);
}

extern void (*__plugify_plugin_deadlock_sdk_Teleport)(int64_t, float, float, float, float, float, float, float, float, float);

static void Teleport(int64_t entity, float posX, float posY, float posZ, float angPitch, float angYaw, float angRoll, float velX, float velY, float velZ) {
	__plugify_plugin_deadlock_sdk_Teleport(entity, posX, posY, posZ, angPitch, angYaw, angRoll, velX, velY, velZ);
}

extern void (*__plugify_plugin_deadlock_sdk_SetModel)(int64_t, String*);

static void SetModel(int64_t entity, String* modelName) {
	__plugify_plugin_deadlock_sdk_SetModel(entity, modelName);
}

extern String (*__plugify_plugin_deadlock_sdk_GetModelName)(int64_t);

static String GetModelName(int64_t entity) {
	return __plugify_plugin_deadlock_sdk_GetModelName(entity);
}

extern void (*__plugify_plugin_deadlock_sdk_SetScale)(int64_t, float);

static void SetScale(int64_t entity, float scale) {
	__plugify_plugin_deadlock_sdk_SetScale(entity, scale);
}

extern void (*__plugify_plugin_deadlock_sdk_SetMoveType)(int64_t, uint8_t);

static void SetMoveType(int64_t entity, uint8_t moveType) {
	__plugify_plugin_deadlock_sdk_SetMoveType(entity, moveType);
}

extern void (*__plugify_plugin_deadlock_sdk_SetGravityScale)(int64_t, float);

static void SetGravityScale(int64_t entity, float scale) {
	__plugify_plugin_deadlock_sdk_SetGravityScale(entity, scale);
}

extern bool (*__plugify_plugin_deadlock_sdk_EntityDerivesFrom)(int64_t, String*);

static bool EntityDerivesFrom(int64_t entity, String* baseClassName) {
	return __plugify_plugin_deadlock_sdk_EntityDerivesFrom(entity, baseClassName);
}

