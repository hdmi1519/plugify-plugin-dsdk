module imported.plugify_plugin_deadlock_sdk.configuration;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Read string from settings.jsonc

	Params:
		key = 
		defaultValue = 

	Returns:
		Return value
+/
string GetConfigString(string key, string defaultValue) {
	PlgS _var0 = (key);

	PlgS _var1 = (defaultValue);

	return __plugify_plugin_deadlock_sdk_GetConfigString(_var0, _var1);
}
alias _GetConfigString = extern (C) PlgS function(const ref PlgS key, const ref PlgS defaultValue);
export __gshared _GetConfigString __plugify_plugin_deadlock_sdk_GetConfigString = null;

/++
	Read int from settings.jsonc

	Params:
		key = 
		defaultValue = 

	Returns:
		Return value
+/
int GetConfigInt(string key, int defaultValue) {
	PlgS _var0 = (key);

	return __plugify_plugin_deadlock_sdk_GetConfigInt(_var0, defaultValue);
}
alias _GetConfigInt = extern (C) int function(const ref PlgS key, int defaultValue);
export __gshared _GetConfigInt __plugify_plugin_deadlock_sdk_GetConfigInt = null;

/++
	Read bool from settings.jsonc

	Params:
		key = 
		defaultValue = 

	Returns:
		Return value
+/
bool GetConfigBool(string key, bool defaultValue) {
	PlgS _var0 = (key);

	return __plugify_plugin_deadlock_sdk_GetConfigBool(_var0, defaultValue);
}
alias _GetConfigBool = extern (C) bool function(const ref PlgS key, bool defaultValue);
export __gshared _GetConfigBool __plugify_plugin_deadlock_sdk_GetConfigBool = null;

/++
	Read float from settings.jsonc

	Params:
		key = 
		defaultValue = 

	Returns:
		Return value
+/
float GetConfigFloat(string key, float defaultValue) {
	PlgS _var0 = (key);

	return __plugify_plugin_deadlock_sdk_GetConfigFloat(_var0, defaultValue);
}
alias _GetConfigFloat = extern (C) float function(const ref PlgS key, float defaultValue);
export __gshared _GetConfigFloat __plugify_plugin_deadlock_sdk_GetConfigFloat = null;

