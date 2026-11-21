module imported.plugify_plugin_deadlock_sdk.timers;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Create a one-shot or repeating timer

	Params:
		interval = 
		callback = 
		repeating = 

	Returns:
		Return value
+/
long CreateTimer(float interval, TimerCallback callback, bool repeating) {
	return __plugify_plugin_deadlock_sdk_CreateTimer(interval, callback, repeating);
}
alias _CreateTimer = extern (C) long function(float interval, TimerCallback callback, bool repeating);
export __gshared _CreateTimer __plugify_plugin_deadlock_sdk_CreateTimer = null;

/++
	Stop and delete an active timer

	Params:
		timerId = 

	Returns:
		Return value
+/
bool KillTimer(long timerId) {
	return __plugify_plugin_deadlock_sdk_KillTimer(timerId);
}
alias _KillTimer = extern (C) bool function(long timerId);
export __gshared _KillTimer __plugify_plugin_deadlock_sdk_KillTimer = null;

