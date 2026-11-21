#include "shared.h"

PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_AddServerCommand)(String*, String*, int64_t, void*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_AddClientCommand)(String*, String*, int64_t, void*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_AddChatCommand)(String*, String*, int64_t, void*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_AddConsoleCommand)(String*, String*, int64_t, void*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_RemoveCommand)(String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ServerCommand)(String*) = NULL;


PLUGIFY_EXPORT bool (*__plugify_plugin_deadlock_sdk_ExecuteCommandAsPlayer)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__plugify_plugin_deadlock_sdk_ClientCommand)(int32_t, String*) = NULL;


