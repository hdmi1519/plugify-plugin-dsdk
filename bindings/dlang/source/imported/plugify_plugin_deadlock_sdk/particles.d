module imported.plugify_plugin_deadlock_sdk.particles;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Create and dispatch particle effect

	Params:
		particleName = 
		attachType = 
		entity = 

	Returns:
		Return value
+/
long CreateParticle(string particleName, int attachType, long entity) {
	PlgS _var0 = (particleName);

	return __plugify_plugin_deadlock_sdk_CreateParticle(_var0, attachType, entity);
}
alias _CreateParticle = extern (C) long function(const ref PlgS particleName, int attachType, long entity);
export __gshared _CreateParticle __plugify_plugin_deadlock_sdk_CreateParticle = null;

/++
	Destroy active particle instance

	Params:
		particle = 
		destroyImmediately = 
+/
void DestroyParticle(long particle, bool destroyImmediately) {
	__plugify_plugin_deadlock_sdk_DestroyParticle(particle, destroyImmediately);
}
alias _DestroyParticle = extern (C) void function(long particle, bool destroyImmediately);
export __gshared _DestroyParticle __plugify_plugin_deadlock_sdk_DestroyParticle = null;

