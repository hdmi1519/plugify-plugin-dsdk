#pragma once

#include "shared.h"

extern void (*__plugify_plugin_deadlock_sdk_PrintToChat)(int32_t, String*);

static void PrintToChat(int32_t playerSlot, String* message) {
	__plugify_plugin_deadlock_sdk_PrintToChat(playerSlot, message);
}

extern void (*__plugify_plugin_deadlock_sdk_PrintToChatAll)(String*);

static void PrintToChatAll(String* message) {
	__plugify_plugin_deadlock_sdk_PrintToChatAll(message);
}

extern void (*__plugify_plugin_deadlock_sdk_PrintToConsole)(int32_t, String*);

static void PrintToConsole(int32_t playerSlot, String* message) {
	__plugify_plugin_deadlock_sdk_PrintToConsole(playerSlot, message);
}

extern void (*__plugify_plugin_deadlock_sdk_PrintToConsoleAll)(String*);

static void PrintToConsoleAll(String* message) {
	__plugify_plugin_deadlock_sdk_PrintToConsoleAll(message);
}

extern void (*__plugify_plugin_deadlock_sdk_HudAnnounce)(int32_t, String*, String*, float);

static void HudAnnounce(int32_t playerSlot, String* title, String* description, float duration) {
	__plugify_plugin_deadlock_sdk_HudAnnounce(playerSlot, title, description, duration);
}

extern void (*__plugify_plugin_deadlock_sdk_HudAnnounceAll)(String*, String*, float);

static void HudAnnounceAll(String* title, String* description, float duration) {
	__plugify_plugin_deadlock_sdk_HudAnnounceAll(title, description, duration);
}

