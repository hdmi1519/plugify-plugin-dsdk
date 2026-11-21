module imported.plugify_plugin_deadlock_sdk.entityio;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Fire input on target entity

	Params:
		entity = 
		inputName = 
		activator = 
		caller = 
		value = 
+/
void AcceptInput(long entity, string inputName, long activator, long caller, string value) {
	PlgS _var1 = (inputName);

	PlgS _var4 = (value);

	__plugify_plugin_deadlock_sdk_AcceptInput(entity, _var1, activator, caller, _var4);
}
alias _AcceptInput = extern (C) void function(long entity, const ref PlgS inputName, long activator, long caller, const ref PlgS value);
export __gshared _AcceptInput __plugify_plugin_deadlock_sdk_AcceptInput = null;

