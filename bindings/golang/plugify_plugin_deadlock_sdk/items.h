#pragma once

#include "shared.h"

extern int64_t (*__plugify_plugin_deadlock_sdk_AddItem)(int64_t, String*, int32_t);

static int64_t AddItem(int64_t pawn, String* itemName, int32_t upgradeTier) {
	return __plugify_plugin_deadlock_sdk_AddItem(pawn, itemName, upgradeTier);
}

extern bool (*__plugify_plugin_deadlock_sdk_SellItem)(int64_t, String*, bool, bool);

static bool SellItem(int64_t pawn, String* itemName, bool fullRefund, bool forceSellPrice) {
	return __plugify_plugin_deadlock_sdk_SellItem(pawn, itemName, fullRefund, forceSellPrice);
}

extern int32_t (*__plugify_plugin_deadlock_sdk_GetItemImbueEffects)(String*);

static int32_t GetItemImbueEffects(String* itemName) {
	return __plugify_plugin_deadlock_sdk_GetItemImbueEffects(itemName);
}

extern bool (*__plugify_plugin_deadlock_sdk_CanImbueAbility)(int64_t, String*);

static bool CanImbueAbility(int64_t targetAbility, String* itemName) {
	return __plugify_plugin_deadlock_sdk_CanImbueAbility(targetAbility, itemName);
}

extern bool (*__plugify_plugin_deadlock_sdk_ImbueAbility)(int64_t, int64_t);

static bool ImbueAbility(int64_t item, int64_t targetAbility) {
	return __plugify_plugin_deadlock_sdk_ImbueAbility(item, targetAbility);
}

