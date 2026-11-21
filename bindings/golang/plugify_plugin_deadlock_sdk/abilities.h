#pragma once

#include "shared.h"

extern int64_t (*__plugify_plugin_deadlock_sdk_AddAbility)(int64_t, String*, uint16_t);

static int64_t AddAbility(int64_t pawn, String* abilityName, uint16_t slot) {
	return __plugify_plugin_deadlock_sdk_AddAbility(pawn, abilityName, slot);
}

extern bool (*__plugify_plugin_deadlock_sdk_RemoveAbility)(int64_t, String*);

static bool RemoveAbility(int64_t pawn, String* abilityName) {
	return __plugify_plugin_deadlock_sdk_RemoveAbility(pawn, abilityName);
}

extern bool (*__plugify_plugin_deadlock_sdk_RemoveAbilityByEntity)(int64_t, int64_t);

static bool RemoveAbilityByEntity(int64_t pawn, int64_t ability) {
	return __plugify_plugin_deadlock_sdk_RemoveAbilityByEntity(pawn, ability);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_FindAbilityByName)(int64_t, String*);

static int64_t FindAbilityByName(int64_t abilityComponent, String* abilityName) {
	return __plugify_plugin_deadlock_sdk_FindAbilityByName(abilityComponent, abilityName);
}

extern int64_t (*__plugify_plugin_deadlock_sdk_GetAbilityBySlot)(int64_t, int16_t);

static int64_t GetAbilityBySlot(int64_t abilityComponent, int16_t slot) {
	return __plugify_plugin_deadlock_sdk_GetAbilityBySlot(abilityComponent, slot);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_ExecuteAbility)(int64_t, int64_t, bool, uint8_t);

static int32_t ExecuteAbility(int64_t abilityComponent, int64_t ability, bool altCast, uint8_t flags) {
	return __plugify_plugin_deadlock_sdk_ExecuteAbility(abilityComponent, ability, altCast, flags);
}

extern void (*__plugify_plugin_deadlock_sdk_ToggleActivate)(int64_t, bool);

static void ToggleActivate(int64_t ability, bool activate) {
	__plugify_plugin_deadlock_sdk_ToggleActivate(ability, activate);
}

extern void (*__plugify_plugin_deadlock_sdk_ResetAbilityCooldown)(int64_t);

static void ResetAbilityCooldown(int64_t ability) {
	__plugify_plugin_deadlock_sdk_ResetAbilityCooldown(ability);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GetAbilityMaxCharges)(int64_t);

static int32_t GetAbilityMaxCharges(int64_t ability) {
	return __plugify_plugin_deadlock_sdk_GetAbilityMaxCharges(ability);
}

extern void (*__plugify_plugin_deadlock_sdk_SetUpgradeBits)(int64_t, int32_t);

static void SetUpgradeBits(int64_t ability, int32_t newBits) {
	__plugify_plugin_deadlock_sdk_SetUpgradeBits(ability, newBits);
}

