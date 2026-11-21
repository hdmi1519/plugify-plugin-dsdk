module imported.plugify_plugin_deadlock_sdk.npcs;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Direct AI NPC to move to goal location

	Params:
		npc = 
		x = 
		y = 
		z = 
		run = 
		tolerance = 
+/
void NpcMoveTo(long npc, float x, float y, float z, bool run, float tolerance) {
	__plugify_plugin_deadlock_sdk_NpcMoveTo(npc, x, y, z, run, tolerance);
}
alias _NpcMoveTo = extern (C) void function(long npc, float x, float y, float z, bool run, float tolerance);
export __gshared _NpcMoveTo __plugify_plugin_deadlock_sdk_NpcMoveTo = null;

/++
	Stop movement of AI NPC

	Params:
		npc = 
		instant = 
+/
void NpcStopMoving(long npc, bool instant) {
	__plugify_plugin_deadlock_sdk_NpcStopMoving(npc, instant);
}
alias _NpcStopMoving = extern (C) void function(long npc, bool instant);
export __gshared _NpcStopMoving __plugify_plugin_deadlock_sdk_NpcStopMoving = null;

/++
	Set target enemy entity of AI NPC

	Params:
		npc = 
		enemy = 
+/
void NpcSetEnemy(long npc, long enemy) {
	__plugify_plugin_deadlock_sdk_NpcSetEnemy(npc, enemy);
}
alias _NpcSetEnemy = extern (C) void function(long npc, long enemy);
export __gshared _NpcSetEnemy __plugify_plugin_deadlock_sdk_NpcSetEnemy = null;

/++
	Set NPC AI state

	Params:
		npc = 
		state = 
+/
void NpcSetState(long npc, int state) {
	__plugify_plugin_deadlock_sdk_NpcSetState(npc, state);
}
alias _NpcSetState = extern (C) void function(long npc, int state);
export __gshared _NpcSetState __plugify_plugin_deadlock_sdk_NpcSetState = null;

/++
	Spawn lane or neutral trooper NPC

	Params:
		posX = 
		posY = 
		posZ = 
		pitch = 
		yaw = 
		roll = 
		team = 
		type = 
		variant = 
		snapToGround = 

	Returns:
		Return value
+/
long NpcCreateTrooper(float posX, float posY, float posZ, float pitch, float yaw, float roll, int team, int type, int variant, bool snapToGround) {
	return __plugify_plugin_deadlock_sdk_NpcCreateTrooper(posX, posY, posZ, pitch, yaw, roll, team, type, variant, snapToGround);
}
alias _NpcCreateTrooper = extern (C) long function(float posX, float posY, float posZ, float pitch, float yaw, float roll, int team, int type, int variant, bool snapToGround);
export __gshared _NpcCreateTrooper __plugify_plugin_deadlock_sdk_NpcCreateTrooper = null;

