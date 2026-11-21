#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: items)

namespace plugify_plugin_deadlock_sdk {

  using _AddItem = int64_t (*)(int64_t, const plg::string&, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_AddItem __plugify_plugin_deadlock_sdk_AddItem;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Add an item to player pawn
   * @param pawn (int64)
   * @param itemName (string)
   * @param upgradeTier (int32)
   * @return int64
   */
  inline int64_t AddItem(int64_t pawn, const plg::string& itemName, int32_t upgradeTier) {
    return __plugify_plugin_deadlock_sdk_AddItem(pawn, itemName, upgradeTier);
  }

  using _SellItem = bool (*)(int64_t, const plg::string&, bool, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SellItem __plugify_plugin_deadlock_sdk_SellItem;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Sell an item from pawn
   * @param pawn (int64)
   * @param itemName (string)
   * @param fullRefund (bool)
   * @param forceSellPrice (bool)
   * @return bool
   */
  inline bool SellItem(int64_t pawn, const plg::string& itemName, bool fullRefund, bool forceSellPrice) {
    return __plugify_plugin_deadlock_sdk_SellItem(pawn, itemName, fullRefund, forceSellPrice);
  }

  using _GetItemImbueEffects = int32_t (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetItemImbueEffects __plugify_plugin_deadlock_sdk_GetItemImbueEffects;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get item imbue effect flags
   * @param itemName (string)
   * @return int32
   */
  inline int32_t GetItemImbueEffects(const plg::string& itemName) {
    return __plugify_plugin_deadlock_sdk_GetItemImbueEffects(itemName);
  }

  using _CanImbueAbility = bool (*)(int64_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_CanImbueAbility __plugify_plugin_deadlock_sdk_CanImbueAbility;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Check if ability can receive imbue
   * @param targetAbility (int64)
   * @param itemName (string)
   * @return bool
   */
  inline bool CanImbueAbility(int64_t targetAbility, const plg::string& itemName) {
    return __plugify_plugin_deadlock_sdk_CanImbueAbility(targetAbility, itemName);
  }

  using _ImbueAbility = bool (*)(int64_t, int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ImbueAbility __plugify_plugin_deadlock_sdk_ImbueAbility;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Imbue item onto target ability
   * @param item (int64)
   * @param targetAbility (int64)
   * @return bool
   */
  inline bool ImbueAbility(int64_t item, int64_t targetAbility) {
    return __plugify_plugin_deadlock_sdk_ImbueAbility(item, targetAbility);
  }

} // namespace plugify_plugin_deadlock_sdk
