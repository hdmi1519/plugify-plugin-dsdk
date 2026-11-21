module imported.plugify_plugin_deadlock_sdk.zones;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Spawn a glowing laser beam entity between two world points

	Params:
		startX = 
		startY = 
		startZ = 
		endX = 
		endY = 
		endZ = 
		width = 
		r = 
		g = 
		b = 
		a = 

	Returns:
		Return value
+/
long CreateBeam(float startX, float startY, float startZ, float endX, float endY, float endZ, float width, ubyte r, ubyte g, ubyte b, ubyte a) {
	return __plugify_plugin_deadlock_sdk_CreateBeam(startX, startY, startZ, endX, endY, endZ, width, r, g, b, a);
}
alias _CreateBeam = extern (C) long function(float startX, float startY, float startZ, float endX, float endY, float endZ, float width, ubyte r, ubyte g, ubyte b, ubyte a);
export __gshared _CreateBeam __plugify_plugin_deadlock_sdk_CreateBeam = null;

/++
	Create a spatial trigger volume box

	Params:
		name = 
		minX = 
		minY = 
		minZ = 
		maxX = 
		maxY = 
		maxZ = 

	Returns:
		Return value
+/
long CreateZone(string name, float minX, float minY, float minZ, float maxX, float maxY, float maxZ) {
	PlgS _var0 = (name);

	return __plugify_plugin_deadlock_sdk_CreateZone(_var0, minX, minY, minZ, maxX, maxY, maxZ);
}
alias _CreateZone = extern (C) long function(const ref PlgS name, float minX, float minY, float minZ, float maxX, float maxY, float maxZ);
export __gshared _CreateZone __plugify_plugin_deadlock_sdk_CreateZone = null;

/++
	Destroy a spatial zone trigger

	Params:
		zoneId = 
+/
void DestroyZone(long zoneId) {
	__plugify_plugin_deadlock_sdk_DestroyZone(zoneId);
}
alias _DestroyZone = extern (C) void function(long zoneId);
export __gshared _DestroyZone __plugify_plugin_deadlock_sdk_DestroyZone = null;

