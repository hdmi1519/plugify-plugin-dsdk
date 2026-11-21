module imported.plugify_plugin_deadlock_sdk.worldtext;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Create 3D point_worldtext entity in the world

	Params:
		message = 
		x = 
		y = 
		z = 
		fontSize = 
		r = 
		g = 
		b = 
		a = 

	Returns:
		Return value
+/
long CreateWorldText(string message, float x, float y, float z, float fontSize, ubyte r, ubyte g, ubyte b, ubyte a) {
	PlgS _var0 = (message);

	return __plugify_plugin_deadlock_sdk_CreateWorldText(_var0, x, y, z, fontSize, r, g, b, a);
}
alias _CreateWorldText = extern (C) long function(const ref PlgS message, float x, float y, float z, float fontSize, ubyte r, ubyte g, ubyte b, ubyte a);
export __gshared _CreateWorldText __plugify_plugin_deadlock_sdk_CreateWorldText = null;

/++
	Update message text of CPointWorldText

	Params:
		worldText = 
		text = 
+/
void SetWorldTextMessage(long worldText, string text) {
	PlgS _var1 = (text);

	__plugify_plugin_deadlock_sdk_SetWorldTextMessage(worldText, _var1);
}
alias _SetWorldTextMessage = extern (C) void function(long worldText, const ref PlgS text);
export __gshared _SetWorldTextMessage __plugify_plugin_deadlock_sdk_SetWorldTextMessage = null;

