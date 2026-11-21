module imported.plugify_plugin_deadlock_sdk.navigation;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Find nearest point on navmesh

	Params:
		x = 
		y = 
		z = 
		maxDistance = 
		hull = 

	Returns:
		Return value
+/
bool NavGetNearestPoint(float x, float y, float z, float maxDistance, int hull) {
	return __plugify_plugin_deadlock_sdk_NavGetNearestPoint(x, y, z, maxDistance, hull);
}
alias _NavGetNearestPoint = extern (C) bool function(float x, float y, float z, float maxDistance, int hull);
export __gshared _NavGetNearestPoint __plugify_plugin_deadlock_sdk_NavGetNearestPoint = null;

/++
	Get ground elevation from navmesh

	Params:
		x = 
		y = 
		z = 
		maxDistance = 
		hull = 

	Returns:
		Return value
+/
float NavGetGroundHeight(float x, float y, float z, float maxDistance, int hull) {
	return __plugify_plugin_deadlock_sdk_NavGetGroundHeight(x, y, z, maxDistance, hull);
}
alias _NavGetGroundHeight = extern (C) float function(float x, float y, float z, float maxDistance, int hull);
export __gshared _NavGetGroundHeight __plugify_plugin_deadlock_sdk_NavGetGroundHeight = null;

