#pragma once

#include "shared.h"

extern int32_t (*__plugify_plugin_deadlock_sdk_GetGameState)();

static int32_t GetGameState() {
	return __plugify_plugin_deadlock_sdk_GetGameState();
}

extern float (*__plugify_plugin_deadlock_sdk_GetMatchTime)();

static float GetMatchTime() {
	return __plugify_plugin_deadlock_sdk_GetMatchTime();
}

extern void (*__plugify_plugin_deadlock_sdk_ChangeGameState)(int32_t);

static void ChangeGameState(int32_t newState) {
	__plugify_plugin_deadlock_sdk_ChangeGameState(newState);
}

extern void (*__plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster)(uint32_t, uint32_t);

static void SetWaitingForPlayersRoster(uint32_t readyCount, uint32_t totalCount) {
	__plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster(readyCount, totalCount);
}

extern void (*__plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap)(bool);

static void SetMatchStartOnAnyMap(bool enabled) {
	__plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap(enabled);
}

extern bool (*__plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap)();

static bool GetMatchStartOnAnyMap() {
	return __plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap();
}

