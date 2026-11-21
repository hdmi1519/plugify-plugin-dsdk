#pragma once

#include "shared.h"

extern bool (*__plugify_plugin_deadlock_sdk_AddServerCommand)(String*, String*, int64_t, void*);

static bool AddServerCommand(String* name, String* description, int64_t flags, void* callback) {
	return __plugify_plugin_deadlock_sdk_AddServerCommand(name, description, flags, callback);
}

extern bool (*__plugify_plugin_deadlock_sdk_AddClientCommand)(String*, String*, int64_t, void*);

static bool AddClientCommand(String* name, String* description, int64_t flags, void* callback) {
	return __plugify_plugin_deadlock_sdk_AddClientCommand(name, description, flags, callback);
}

extern bool (*__plugify_plugin_deadlock_sdk_AddChatCommand)(String*, String*, int64_t, void*);

static bool AddChatCommand(String* name, String* description, int64_t flags, void* callback) {
	return __plugify_plugin_deadlock_sdk_AddChatCommand(name, description, flags, callback);
}

extern bool (*__plugify_plugin_deadlock_sdk_AddConsoleCommand)(String*, String*, int64_t, void*);

static bool AddConsoleCommand(String* name, String* description, int64_t flags, void* callback) {
	return __plugify_plugin_deadlock_sdk_AddConsoleCommand(name, description, flags, callback);
}

extern bool (*__plugify_plugin_deadlock_sdk_RemoveCommand)(String*);

static bool RemoveCommand(String* name) {
	return __plugify_plugin_deadlock_sdk_RemoveCommand(name);
}

extern void (*__plugify_plugin_deadlock_sdk_ServerCommand)(String*);

static void ServerCommand(String* command) {
	__plugify_plugin_deadlock_sdk_ServerCommand(command);
}

extern bool (*__plugify_plugin_deadlock_sdk_ExecuteCommandAsPlayer)(int32_t, String*);

static bool ExecuteCommandAsPlayer(int32_t playerSlot, String* command) {
	return __plugify_plugin_deadlock_sdk_ExecuteCommandAsPlayer(playerSlot, command);
}

extern void (*__plugify_plugin_deadlock_sdk_ClientCommand)(int32_t, String*);

static void ClientCommand(int32_t playerSlot, String* command) {
	__plugify_plugin_deadlock_sdk_ClientCommand(playerSlot, command);
}

