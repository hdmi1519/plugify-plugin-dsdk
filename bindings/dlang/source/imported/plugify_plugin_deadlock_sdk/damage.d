module imported.plugify_plugin_deadlock_sdk.damage;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Create CTakeDamageInfo instance

	Params:
		inflictor = 
		attacker = 
		ability = 
		damage = 
		damageType = 

	Returns:
		Return value
+/
long CreateDamageInfo(long inflictor, long attacker, long ability, float damage, int damageType) {
	return __plugify_plugin_deadlock_sdk_CreateDamageInfo(inflictor, attacker, ability, damage, damageType);
}
alias _CreateDamageInfo = extern (C) long function(long inflictor, long attacker, long ability, float damage, int damageType);
export __gshared _CreateDamageInfo __plugify_plugin_deadlock_sdk_CreateDamageInfo = null;

/++
	Free CTakeDamageInfo instance

	Params:
		info = 
+/
void DestroyDamageInfo(long info) {
	__plugify_plugin_deadlock_sdk_DestroyDamageInfo(info);
}
alias _DestroyDamageInfo = extern (C) void function(long info);
export __gshared _DestroyDamageInfo __plugify_plugin_deadlock_sdk_DestroyDamageInfo = null;

/++
	Inflict damage on victim entity

	Params:
		victim = 
		info = 
+/
void TakeDamage(long victim, long info) {
	__plugify_plugin_deadlock_sdk_TakeDamage(victim, info);
}
alias _TakeDamage = extern (C) void function(long victim, long info);
export __gshared _TakeDamage __plugify_plugin_deadlock_sdk_TakeDamage = null;

/++
	Apply damage bypassing damage filters

	Params:
		victim = 
		info = 
+/
void ApplyDamage(long victim, long info) {
	__plugify_plugin_deadlock_sdk_ApplyDamage(victim, info);
}
alias _ApplyDamage = extern (C) void function(long victim, long info);
export __gshared _ApplyDamage __plugify_plugin_deadlock_sdk_ApplyDamage = null;

/++
	Get maximum health of entity

	Params:
		entity = 

	Returns:
		Return value
+/
int GetMaxHealth(long entity) {
	return __plugify_plugin_deadlock_sdk_GetMaxHealth(entity);
}
alias _GetMaxHealth = extern (C) int function(long entity);
export __gshared _GetMaxHealth __plugify_plugin_deadlock_sdk_GetMaxHealth = null;

/++
	Heal entity by amount

	Params:
		entity = 
		amount = 

	Returns:
		Return value
+/
int Heal(long entity, float amount) {
	return __plugify_plugin_deadlock_sdk_Heal(entity, amount);
}
alias _Heal = extern (C) int function(long entity, float amount);
export __gshared _Heal __plugify_plugin_deadlock_sdk_Heal = null;

