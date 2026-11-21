module imported.plugify_plugin_deadlock_sdk.precaching;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Precache resource by VPK path

	Params:
		path = 
+/
void PrecacheResource(string path) {
	PlgS _var0 = (path);

	__plugify_plugin_deadlock_sdk_PrecacheResource(_var0);
}
alias _PrecacheResource = extern (C) void function(const ref PlgS path);
export __gshared _PrecacheResource __plugify_plugin_deadlock_sdk_PrecacheResource = null;

/++
	Precache model resource

	Params:
		modelPath = 
+/
void PrecacheModel(string modelPath) {
	PlgS _var0 = (modelPath);

	__plugify_plugin_deadlock_sdk_PrecacheModel(_var0);
}
alias _PrecacheModel = extern (C) void function(const ref PlgS modelPath);
export __gshared _PrecacheModel __plugify_plugin_deadlock_sdk_PrecacheModel = null;

