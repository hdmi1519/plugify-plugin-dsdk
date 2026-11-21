module imported.plugify_plugin_deadlock_sdk.server;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Get currently loaded map name

	Returns:
		Return value
+/
string GetMapName() {
	return __plugify_plugin_deadlock_sdk_GetMapName();
}
alias _GetMapName = extern (C) PlgS function();
export __gshared _GetMapName __plugify_plugin_deadlock_sdk_GetMapName = null;

/++
	Check if map exists and can be loaded

	Params:
		map = 

	Returns:
		Return value
+/
bool IsMapValid(string map) {
	PlgS _var0 = (map);

	return __plugify_plugin_deadlock_sdk_IsMapValid(_var0);
}
alias _IsMapValid = extern (C) bool function(const ref PlgS map);
export __gshared _IsMapValid __plugify_plugin_deadlock_sdk_IsMapValid = null;

/++
	Set Steam A2S rule key-value

	Params:
		key = 
		value = 

	Returns:
		Return value
+/
bool SetServerKeyValue(string key, string value) {
	PlgS _var0 = (key);

	PlgS _var1 = (value);

	return __plugify_plugin_deadlock_sdk_SetServerKeyValue(_var0, _var1);
}
alias _SetServerKeyValue = extern (C) bool function(const ref PlgS key, const ref PlgS value);
export __gshared _SetServerKeyValue __plugify_plugin_deadlock_sdk_SetServerKeyValue = null;

/++
	Clear Steam A2S rules

	Returns:
		Return value
+/
bool ClearServerKeyValues() {
	return __plugify_plugin_deadlock_sdk_ClearServerKeyValues();
}
alias _ClearServerKeyValues = extern (C) bool function();
export __gshared _ClearServerKeyValues __plugify_plugin_deadlock_sdk_ClearServerKeyValues = null;

/++
	Set active server workshop addons

	Params:
		addons = 
+/
void SetServerAddons(string addons) {
	PlgS _var0 = (addons);

	__plugify_plugin_deadlock_sdk_SetServerAddons(_var0);
}
alias _SetServerAddons = extern (C) void function(const ref PlgS addons);
export __gshared _SetServerAddons __plugify_plugin_deadlock_sdk_SetServerAddons = null;

/++
	Add file search path

	Params:
		path = 
		pathId = 
		addType = 

	Returns:
		Return value
+/
bool AddFileSystemSearchPath(string path, string pathId, int addType) {
	PlgS _var0 = (path);

	PlgS _var1 = (pathId);

	return __plugify_plugin_deadlock_sdk_AddFileSystemSearchPath(_var0, _var1, addType);
}
alias _AddFileSystemSearchPath = extern (C) bool function(const ref PlgS path, const ref PlgS pathId, int addType);
export __gshared _AddFileSystemSearchPath __plugify_plugin_deadlock_sdk_AddFileSystemSearchPath = null;

/++
	Check if command line argument exists

	Params:
		parm = 

	Returns:
		Return value
+/
bool HasCommandLineParm(string parm) {
	PlgS _var0 = (parm);

	return __plugify_plugin_deadlock_sdk_HasCommandLineParm(_var0);
}
alias _HasCommandLineParm = extern (C) bool function(const ref PlgS parm);
export __gshared _HasCommandLineParm __plugify_plugin_deadlock_sdk_HasCommandLineParm = null;

/++
	Set reject reason for connection rejection

	Params:
		reason = 
+/
void SetConnectRejectReason(string reason) {
	PlgS _var0 = (reason);

	__plugify_plugin_deadlock_sdk_SetConnectRejectReason(_var0);
}
alias _SetConnectRejectReason = extern (C) void function(const ref PlgS reason);
export __gshared _SetConnectRejectReason __plugify_plugin_deadlock_sdk_SetConnectRejectReason = null;

/++
	Get CGlobalVars pointer

	Returns:
		Return value
+/
long GetGlobalVars() {
	return __plugify_plugin_deadlock_sdk_GetGlobalVars();
}
alias _GetGlobalVars = extern (C) long function();
export __gshared _GetGlobalVars __plugify_plugin_deadlock_sdk_GetGlobalVars = null;

/++
	Get current engine game time in seconds

	Returns:
		Return value
+/
float GetGameTime() {
	return __plugify_plugin_deadlock_sdk_GetGameTime();
}
alias _GetGameTime = extern (C) float function();
export __gshared _GetGameTime __plugify_plugin_deadlock_sdk_GetGameTime = null;

/++
	Get current engine tick count

	Returns:
		Return value
+/
int GetGameTickCount() {
	return __plugify_plugin_deadlock_sdk_GetGameTickCount();
}
alias _GetGameTickCount = extern (C) int function();
export __gshared _GetGameTickCount __plugify_plugin_deadlock_sdk_GetGameTickCount = null;

