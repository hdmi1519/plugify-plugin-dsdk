module imported.plugify_plugin_deadlock_sdk.tracing;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Perform physics raycast trace between start and end vectors

	Params:
		startX = 
		startY = 
		startZ = 
		endX = 
		endY = 
		endZ = 
		mask = 
		ignoreEntity = 

	Returns:
		Return value
+/
bool LineTrace(float startX, float startY, float startZ, float endX, float endY, float endZ, uint mask, long ignoreEntity) {
	return __plugify_plugin_deadlock_sdk_LineTrace(startX, startY, startZ, endX, endY, endZ, mask, ignoreEntity);
}
alias _LineTrace = extern (C) bool function(float startX, float startY, float startZ, float endX, float endY, float endZ, uint mask, long ignoreEntity);
export __gshared _LineTrace __plugify_plugin_deadlock_sdk_LineTrace = null;

