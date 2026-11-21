module imported.plugify_plugin_deadlock_sdk.chat;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Print message to client chat

	Params:
		playerSlot = 
		message = 
+/
void PrintToChat(int playerSlot, string message) {
	PlgS _var1 = (message);

	__plugify_plugin_deadlock_sdk_PrintToChat(playerSlot, _var1);
}
alias _PrintToChat = extern (C) void function(int playerSlot, const ref PlgS message);
export __gshared _PrintToChat __plugify_plugin_deadlock_sdk_PrintToChat = null;

/++
	Broadcast message to all players

	Params:
		message = 
+/
void PrintToChatAll(string message) {
	PlgS _var0 = (message);

	__plugify_plugin_deadlock_sdk_PrintToChatAll(_var0);
}
alias _PrintToChatAll = extern (C) void function(const ref PlgS message);
export __gshared _PrintToChatAll __plugify_plugin_deadlock_sdk_PrintToChatAll = null;

/++
	Print message to client console

	Params:
		playerSlot = 
		message = 
+/
void PrintToConsole(int playerSlot, string message) {
	PlgS _var1 = (message);

	__plugify_plugin_deadlock_sdk_PrintToConsole(playerSlot, _var1);
}
alias _PrintToConsole = extern (C) void function(int playerSlot, const ref PlgS message);
export __gshared _PrintToConsole __plugify_plugin_deadlock_sdk_PrintToConsole = null;

/++
	Print message to all player consoles

	Params:
		message = 
+/
void PrintToConsoleAll(string message) {
	PlgS _var0 = (message);

	__plugify_plugin_deadlock_sdk_PrintToConsoleAll(_var0);
}
alias _PrintToConsoleAll = extern (C) void function(const ref PlgS message);
export __gshared _PrintToConsoleAll __plugify_plugin_deadlock_sdk_PrintToConsoleAll = null;

/++
	Display a HUD game announcement banner to a player

	Params:
		playerSlot = 
		title = 
		description = 
		duration = 
+/
void HudAnnounce(int playerSlot, string title, string description, float duration) {
	PlgS _var1 = (title);

	PlgS _var2 = (description);

	__plugify_plugin_deadlock_sdk_HudAnnounce(playerSlot, _var1, _var2, duration);
}
alias _HudAnnounce = extern (C) void function(int playerSlot, const ref PlgS title, const ref PlgS description, float duration);
export __gshared _HudAnnounce __plugify_plugin_deadlock_sdk_HudAnnounce = null;

/++
	Display a HUD game announcement banner to all players

	Params:
		title = 
		description = 
		duration = 
+/
void HudAnnounceAll(string title, string description, float duration) {
	PlgS _var0 = (title);

	PlgS _var1 = (description);

	__plugify_plugin_deadlock_sdk_HudAnnounceAll(_var0, _var1, duration);
}
alias _HudAnnounceAll = extern (C) void function(const ref PlgS title, const ref PlgS description, float duration);
export __gshared _HudAnnounceAll __plugify_plugin_deadlock_sdk_HudAnnounceAll = null;

