module imported.plugify_plugin_deadlock_sdk.players;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Get CBasePlayerController address for player slot

	Params:
		playerSlot = 

	Returns:
		Return value
+/
long GetPlayerController(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerController(playerSlot);
}
alias _GetPlayerController = extern (C) long function(int playerSlot);
export __gshared _GetPlayerController __plugify_plugin_deadlock_sdk_GetPlayerController = null;

/++
	Get CCitadelPlayerPawn address for player slot

	Params:
		playerSlot = 

	Returns:
		Return value
+/
long GetPlayerPawn(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerPawn(playerSlot);
}
alias _GetPlayerPawn = extern (C) long function(int playerSlot);
export __gshared _GetPlayerPawn __plugify_plugin_deadlock_sdk_GetPlayerPawn = null;

/++
	Get player slot from controller address

	Params:
		controller = 

	Returns:
		Return value
+/
int GetPlayerSlot(long controller) {
	return __plugify_plugin_deadlock_sdk_GetPlayerSlot(controller);
}
alias _GetPlayerSlot = extern (C) int function(long controller);
export __gshared _GetPlayerSlot __plugify_plugin_deadlock_sdk_GetPlayerSlot = null;

/++
	Get player display name

	Params:
		playerSlot = 

	Returns:
		Return value
+/
string GetPlayerName(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerName(playerSlot);
}
alias _GetPlayerName = extern (C) PlgS function(int playerSlot);
export __gshared _GetPlayerName __plugify_plugin_deadlock_sdk_GetPlayerName = null;

/++
	Get player 64-bit SteamID

	Params:
		playerSlot = 

	Returns:
		Return value
+/
ulong GetSteamID(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetSteamID(playerSlot);
}
alias _GetSteamID = extern (C) ulong function(int playerSlot);
export __gshared _GetSteamID __plugify_plugin_deadlock_sdk_GetSteamID = null;

/++
	Check if player Steam ticket is validated

	Params:
		playerSlot = 

	Returns:
		Return value
+/
bool IsClientAuthenticated(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_IsClientAuthenticated(playerSlot);
}
alias _IsClientAuthenticated = extern (C) bool function(int playerSlot);
export __gshared _IsClientAuthenticated __plugify_plugin_deadlock_sdk_IsClientAuthenticated = null;

/++
	Check if client is connected

	Params:
		playerSlot = 

	Returns:
		Return value
+/
bool IsClientConnected(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_IsClientConnected(playerSlot);
}
alias _IsClientConnected = extern (C) bool function(int playerSlot);
export __gshared _IsClientConnected __plugify_plugin_deadlock_sdk_IsClientConnected = null;

/++
	Check if player is a bot/fake client

	Params:
		playerSlot = 

	Returns:
		Return value
+/
bool IsFakeClient(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_IsFakeClient(playerSlot);
}
alias _IsFakeClient = extern (C) bool function(int playerSlot);
export __gshared _IsFakeClient __plugify_plugin_deadlock_sdk_IsFakeClient = null;

/++
	Create a fake client in the match

	Params:
		name = 

	Returns:
		Return value
+/
int CreateFakeClient(string name) {
	PlgS _var0 = (name);

	return __plugify_plugin_deadlock_sdk_CreateFakeClient(_var0);
}
alias _CreateFakeClient = extern (C) int function(const ref PlgS name);
export __gshared _CreateFakeClient __plugify_plugin_deadlock_sdk_CreateFakeClient = null;

/++
	Disconnect a client with disconnection reason code

	Params:
		playerSlot = 
		reason = 
+/
void DisconnectClient(int playerSlot, int reason) {
	__plugify_plugin_deadlock_sdk_DisconnectClient(playerSlot, reason);
}
alias _DisconnectClient = extern (C) void function(int playerSlot, int reason);
export __gshared _DisconnectClient __plugify_plugin_deadlock_sdk_DisconnectClient = null;

/++
	Kick client with message and code

	Params:
		playerSlot = 
		reason = 
		code = 
+/
void KickClient(int playerSlot, string reason, int code) {
	PlgS _var1 = (reason);

	__plugify_plugin_deadlock_sdk_KickClient(playerSlot, _var1, code);
}
alias _KickClient = extern (C) void function(int playerSlot, const ref PlgS reason, int code);
export __gshared _KickClient __plugify_plugin_deadlock_sdk_KickClient = null;

/++
	Change team of player controller

	Params:
		controller = 
		teamNum = 
		keepHero = 
+/
void ChangeTeam(long controller, int teamNum, bool keepHero) {
	__plugify_plugin_deadlock_sdk_ChangeTeam(controller, teamNum, keepHero);
}
alias _ChangeTeam = extern (C) void function(long controller, int teamNum, bool keepHero);
export __gshared _ChangeTeam __plugify_plugin_deadlock_sdk_ChangeTeam = null;

/++
	Get ping of player in milliseconds

	Params:
		playerSlot = 

	Returns:
		Return value
+/
int GetPlayerPing(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerPing(playerSlot);
}
alias _GetPlayerPing = extern (C) int function(int playerSlot);
export __gshared _GetPlayerPing __plugify_plugin_deadlock_sdk_GetPlayerPing = null;

/++
	Get connection time of player in seconds

	Params:
		playerSlot = 

	Returns:
		Return value
+/
float GetPlayerTimeConnected(int playerSlot) {
	return __plugify_plugin_deadlock_sdk_GetPlayerTimeConnected(playerSlot);
}
alias _GetPlayerTimeConnected = extern (C) float function(int playerSlot);
export __gshared _GetPlayerTimeConnected __plugify_plugin_deadlock_sdk_GetPlayerTimeConnected = null;

