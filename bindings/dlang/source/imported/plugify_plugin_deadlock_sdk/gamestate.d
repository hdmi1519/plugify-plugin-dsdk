module imported.plugify_plugin_deadlock_sdk.gamestate;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Get current game state enum

	Returns:
		Return value
+/
EGameState GetGameState() {
	return __plugify_plugin_deadlock_sdk_GetGameState();
}
alias _GetGameState = extern (C) EGameState function();
export __gshared _GetGameState __plugify_plugin_deadlock_sdk_GetGameState = null;

/++
	Get current match clock in seconds

	Returns:
		Return value
+/
float GetMatchTime() {
	return __plugify_plugin_deadlock_sdk_GetMatchTime();
}
alias _GetMatchTime = extern (C) float function();
export __gshared _GetMatchTime __plugify_plugin_deadlock_sdk_GetMatchTime = null;

/++
	Force Deadlock game state change

	Params:
		newState = 
+/
void ChangeGameState(EGameState newState) {
	__plugify_plugin_deadlock_sdk_ChangeGameState(newState);
}
alias _ChangeGameState = extern (C) void function(EGameState newState);
export __gshared _ChangeGameState __plugify_plugin_deadlock_sdk_ChangeGameState = null;

/++
	Set waiting for players roster counts

	Params:
		readyCount = 
		totalCount = 
+/
void SetWaitingForPlayersRoster(uint readyCount, uint totalCount) {
	__plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster(readyCount, totalCount);
}
alias _SetWaitingForPlayersRoster = extern (C) void function(uint readyCount, uint totalCount);
export __gshared _SetWaitingForPlayersRoster __plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster = null;

/++
	Enable/disable match start sequence on custom maps

	Params:
		enabled = 
+/
void SetMatchStartOnAnyMap(bool enabled) {
	__plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap(enabled);
}
alias _SetMatchStartOnAnyMap = extern (C) void function(bool enabled);
export __gshared _SetMatchStartOnAnyMap __plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap = null;

/++
	Check if match start on custom maps is enabled

	Returns:
		Return value
+/
bool GetMatchStartOnAnyMap() {
	return __plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap();
}
alias _GetMatchStartOnAnyMap = extern (C) bool function();
export __gshared _GetMatchStartOnAnyMap __plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap = null;

