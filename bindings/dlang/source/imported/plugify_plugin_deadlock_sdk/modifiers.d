module imported.plugify_plugin_deadlock_sdk.modifiers;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Add modifier to entity

	Params:
		entity = 
		modifierName = 
		kv3 = 
		caster = 
		ability = 
		team = 

	Returns:
		Return value
+/
long AddModifier(long entity, string modifierName, long kv3, long caster, long ability, int team) {
	PlgS _var1 = (modifierName);

	return __plugify_plugin_deadlock_sdk_AddModifier(entity, _var1, kv3, caster, ability, team);
}
alias _AddModifier = extern (C) long function(long entity, const ref PlgS modifierName, long kv3, long caster, long ability, int team);
export __gshared _AddModifier __plugify_plugin_deadlock_sdk_AddModifier = null;

/++
	Remove modifier instance from entity

	Params:
		entity = 
		modifier = 

	Returns:
		Return value
+/
bool RemoveModifier(long entity, long modifier) {
	return __plugify_plugin_deadlock_sdk_RemoveModifier(entity, modifier);
}
alias _RemoveModifier = extern (C) bool function(long entity, long modifier);
export __gshared _RemoveModifier __plugify_plugin_deadlock_sdk_RemoveModifier = null;

