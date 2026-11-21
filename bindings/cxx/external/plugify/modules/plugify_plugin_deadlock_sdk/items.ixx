// Generated from plugify_plugin_deadlock_sdk.pplugin (group: items)

export module plugify_plugin_deadlock_sdk.items;
export import plugify_plugin_deadlock_sdk.enums;
export import plugify_plugin_deadlock_sdk.aliases;
export import plugify_plugin_deadlock_sdk.delegates;

import <cstdint>;
import <plg>;

#if defined(_WIN32)
#define PLUGIFY_EXPORT __declspec(dllexport)
#else
#define PLUGIFY_EXPORT __attribute__((visibility("default")))
#endif

export namespace plugify_plugin_deadlock_sdk {

  using _AddItem = int64_t (*)(int64_t, const plg::string&, int32_t);
  PLUGIFY_EXPORT _AddItem __plugify_plugin_deadlock_sdk_AddItem = nullptr;
  /**
   * @brief Add an item to player pawn
   * @param pawn (int64)
   * @param itemName (string)
   * @param upgradeTier (int32)
   * @return int64
   */

  int64_t AddItem(int64_t pawn, const plg::string& itemName, int32_t upgradeTier) {
    return __plugify_plugin_deadlock_sdk_AddItem(pawn, itemName, upgradeTier);
  }

  using _SellItem = bool (*)(int64_t, const plg::string&, bool, bool);
  PLUGIFY_EXPORT _SellItem __plugify_plugin_deadlock_sdk_SellItem = nullptr;
  /**
   * @brief Sell an item from pawn
   * @param pawn (int64)
   * @param itemName (string)
   * @param fullRefund (bool)
   * @param forceSellPrice (bool)
   * @return bool
   */

  bool SellItem(int64_t pawn, const plg::string& itemName, bool fullRefund, bool forceSellPrice) {
    return __plugify_plugin_deadlock_sdk_SellItem(pawn, itemName, fullRefund, forceSellPrice);
  }

  using _GetItemImbueEffects = int32_t (*)(const plg::string&);
  PLUGIFY_EXPORT _GetItemImbueEffects __plugify_plugin_deadlock_sdk_GetItemImbueEffects = nullptr;
  /**
   * @brief Get item imbue effect flags
   * @param itemName (string)
   * @return int32
   */

  int32_t GetItemImbueEffects(const plg::string& itemName) {
    return __plugify_plugin_deadlock_sdk_GetItemImbueEffects(itemName);
  }

  using _CanImbueAbility = bool (*)(int64_t, const plg::string&);
  PLUGIFY_EXPORT _CanImbueAbility __plugify_plugin_deadlock_sdk_CanImbueAbility = nullptr;
  /**
   * @brief Check if ability can receive imbue
   * @param targetAbility (int64)
   * @param itemName (string)
   * @return bool
   */

  bool CanImbueAbility(int64_t targetAbility, const plg::string& itemName) {
    return __plugify_plugin_deadlock_sdk_CanImbueAbility(targetAbility, itemName);
  }

  using _ImbueAbility = bool (*)(int64_t, int64_t);
  PLUGIFY_EXPORT _ImbueAbility __plugify_plugin_deadlock_sdk_ImbueAbility = nullptr;
  /**
   * @brief Imbue item onto target ability
   * @param item (int64)
   * @param targetAbility (int64)
   * @return bool
   */

  bool ImbueAbility(int64_t item, int64_t targetAbility) {
    return __plugify_plugin_deadlock_sdk_ImbueAbility(item, targetAbility);
  }

} // namespace plugify_plugin_deadlock_sdk
