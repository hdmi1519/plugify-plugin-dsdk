module imported.plugify_plugin_deadlock_sdk.keyvalues3;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Allocate new KeyValues3 document

	Returns:
		Return value
+/
long KV3Create() {
	return __plugify_plugin_deadlock_sdk_KV3Create();
}
alias _KV3Create = extern (C) long function();
export __gshared _KV3Create __plugify_plugin_deadlock_sdk_KV3Create = null;

/++
	Free KeyValues3 document

	Params:
		kv3 = 
+/
void KV3Destroy(long kv3) {
	__plugify_plugin_deadlock_sdk_KV3Destroy(kv3);
}
alias _KV3Destroy = extern (C) void function(long kv3);
export __gshared _KV3Destroy __plugify_plugin_deadlock_sdk_KV3Destroy = null;

/++
	Set string value in KeyValues3 document

	Params:
		kv3 = 
		key = 
		value = 
+/
void KV3SetString(long kv3, string key, string value) {
	PlgS _var1 = (key);

	PlgS _var2 = (value);

	__plugify_plugin_deadlock_sdk_KV3SetString(kv3, _var1, _var2);
}
alias _KV3SetString = extern (C) void function(long kv3, const ref PlgS key, const ref PlgS value);
export __gshared _KV3SetString __plugify_plugin_deadlock_sdk_KV3SetString = null;

/++
	Set bool value in KeyValues3 document

	Params:
		kv3 = 
		key = 
		value = 
+/
void KV3SetBool(long kv3, string key, bool value) {
	PlgS _var1 = (key);

	__plugify_plugin_deadlock_sdk_KV3SetBool(kv3, _var1, value);
}
alias _KV3SetBool = extern (C) void function(long kv3, const ref PlgS key, bool value);
export __gshared _KV3SetBool __plugify_plugin_deadlock_sdk_KV3SetBool = null;

/++
	Set int32 value in KeyValues3 document

	Params:
		kv3 = 
		key = 
		value = 
+/
void KV3SetInt(long kv3, string key, int value) {
	PlgS _var1 = (key);

	__plugify_plugin_deadlock_sdk_KV3SetInt(kv3, _var1, value);
}
alias _KV3SetInt = extern (C) void function(long kv3, const ref PlgS key, int value);
export __gshared _KV3SetInt __plugify_plugin_deadlock_sdk_KV3SetInt = null;

/++
	Set float value in KeyValues3 document

	Params:
		kv3 = 
		key = 
		value = 
+/
void KV3SetFloat(long kv3, string key, float value) {
	PlgS _var1 = (key);

	__plugify_plugin_deadlock_sdk_KV3SetFloat(kv3, _var1, value);
}
alias _KV3SetFloat = extern (C) void function(long kv3, const ref PlgS key, float value);
export __gshared _KV3SetFloat __plugify_plugin_deadlock_sdk_KV3SetFloat = null;

