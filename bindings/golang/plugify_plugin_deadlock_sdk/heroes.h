#pragma once

#include "shared.h"

extern void (*__plugify_plugin_deadlock_sdk_SelectHero)(int64_t, String*);

static void SelectHero(int64_t controller, String* heroName) {
	__plugify_plugin_deadlock_sdk_SelectHero(controller, heroName);
}

extern void (*__plugify_plugin_deadlock_sdk_ResetHero)(int64_t, bool);

static void ResetHero(int64_t pawn, bool reset) {
	__plugify_plugin_deadlock_sdk_ResetHero(pawn, reset);
}

extern void (*__plugify_plugin_deadlock_sdk_PrecacheHero)(String*);

static void PrecacheHero(String* heroName) {
	__plugify_plugin_deadlock_sdk_PrecacheHero(heroName);
}

extern void (*__plugify_plugin_deadlock_sdk_ForceRespawn)(int64_t, bool);

static void ForceRespawn(int64_t pawn, bool releaseButtons) {
	__plugify_plugin_deadlock_sdk_ForceRespawn(pawn, releaseButtons);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_GetHeroData)(String*);

static int64_t GetHeroData(String* heroName) {
	return __plugify_plugin_deadlock_sdk_GetHeroData(heroName);
}

extern String (*__plugify_plugin_deadlock_sdk_GetHeroName)(int64_t);

static String GetHeroName(int64_t pawn) {
	return __plugify_plugin_deadlock_sdk_GetHeroName(pawn);
}

