#pragma once

#include "shared.h"

extern int64_t (*__plugify_plugin_deadlock_sdk_GetPlayerController)(int32_t);

static int64_t GetPlayerController(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerController(playerSlot);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_GetPlayerPawn)(int32_t);

static int64_t GetPlayerPawn(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerPawn(playerSlot);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GetPlayerSlot)(int64_t);

static int32_t GetPlayerSlot(int64_t controller) {
	return __plugify_plugin_deadlock_sdk_GetPlayerSlot(controller);
}

extern String (*__plugify_plugin_deadlock_sdk_GetPlayerName)(int32_t);

static String GetPlayerName(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerName(playerSlot);
}

extern uint64_t (*__plugify_plugin_deadlock_sdk_GetSteamID)(int32_t);

static uint64_t GetSteamID(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetSteamID(playerSlot);
}

extern bool (*__plugify_plugin_deadlock_sdk_IsClientAuthenticated)(int32_t);

static bool IsClientAuthenticated(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_IsClientAuthenticated(playerSlot);
}

extern bool (*__plugify_plugin_deadlock_sdk_IsClientConnected)(int32_t);

static bool IsClientConnected(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_IsClientConnected(playerSlot);
}

extern bool (*__plugify_plugin_deadlock_sdk_IsFakeClient)(int32_t);

static bool IsFakeClient(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_IsFakeClient(playerSlot);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_CreateFakeClient)(String*);

static int32_t CreateFakeClient(String* name) {
	return __plugify_plugin_deadlock_sdk_CreateFakeClient(name);
}

extern void (*__plugify_plugin_deadlock_sdk_DisconnectClient)(int32_t, int32_t);

static void DisconnectClient(int32_t playerSlot, int32_t reason) {
	__plugify_plugin_deadlock_sdk_DisconnectClient(playerSlot, reason);
}

extern void (*__plugify_plugin_deadlock_sdk_KickClient)(int32_t, String*, int32_t);

static void KickClient(int32_t playerSlot, String* reason, int32_t code) {
	__plugify_plugin_deadlock_sdk_KickClient(playerSlot, reason, code);
}

extern void (*__plugify_plugin_deadlock_sdk_ChangeTeam)(int64_t, int32_t, bool);

static void ChangeTeam(int64_t controller, int32_t teamNum, bool keepHero) {
	__plugify_plugin_deadlock_sdk_ChangeTeam(controller, teamNum, keepHero);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GetPlayerPing)(int32_t);

static int32_t GetPlayerPing(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerPing(playerSlot);
}

extern float (*__plugify_plugin_deadlock_sdk_GetPlayerTimeConnected)(int32_t);

static float GetPlayerTimeConnected(int32_t playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerTimeConnected(playerSlot);
}

