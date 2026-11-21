#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: abilities)

namespace plugify_plugin_deadlock_sdk {

  using _AddAbility = int64_t (*)(int64_t, const plg::string&, uint16_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_AddAbility __plugify_plugin_deadlock_sdk_AddAbility;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Add an ability to player pawn
   * @param pawn (int64)
   * @param abilityName (string)
   * @param slot (uint16)
   * @return int64
   */
  inline int64_t AddAbility(int64_t pawn, const plg::string& abilityName, uint16_t slot) {
    return __plugify_plugin_deadlock_sdk_AddAbility(pawn, abilityName, slot);
  }

  using _RemoveAbility = bool (*)(int64_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_RemoveAbility __plugify_plugin_deadlock_sdk_RemoveAbility;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Remove ability by name from pawn
   * @param pawn (int64)
   * @param abilityName (string)
   * @return bool
   */
  inline bool RemoveAbility(int64_t pawn, const plg::string& abilityName) {
    return __plugify_plugin_deadlock_sdk_RemoveAbility(pawn, abilityName);
  }

  using _RemoveAbilityByEntity = bool (*)(int64_t, int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_RemoveAbilityByEntity __plugify_plugin_deadlock_sdk_RemoveAbilityByEntity;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Remove ability by entity pointer
   * @param pawn (int64)
   * @param ability (int64)
   * @return bool
   */
  inline bool RemoveAbilityByEntity(int64_t pawn, int64_t ability) {
    return __plugify_plugin_deadlock_sdk_RemoveAbilityByEntity(pawn, ability);
  }

  using _FindAbilityByName = int64_t (*)(int64_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_FindAbilityByName __plugify_plugin_deadlock_sdk_FindAbilityByName;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Find ability in ability component
   * @param abilityComponent (int64)
   * @param abilityName (string)
   * @return int64
   */
  inline int64_t FindAbilityByName(int64_t abilityComponent, const plg::string& abilityName) {
    return __plugify_plugin_deadlock_sdk_FindAbilityByName(abilityComponent, abilityName);
  }

  using _GetAbilityBySlot = int64_t (*)(int64_t, int16_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetAbilityBySlot __plugify_plugin_deadlock_sdk_GetAbilityBySlot;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get ability at slot index
   * @param abilityComponent (int64)
   * @param slot (int16)
   * @return int64
   */
  inline int64_t GetAbilityBySlot(int64_t abilityComponent, int16_t slot) {
    return __plugify_plugin_deadlock_sdk_GetAbilityBySlot(abilityComponent, slot);
  }

  using _ExecuteAbility = int32_t (*)(int64_t, int64_t, bool, uint8_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ExecuteAbility __plugify_plugin_deadlock_sdk_ExecuteAbility;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Cast/execute an ability
   * @param abilityComponent (int64)
   * @param ability (int64)
   * @param altCast (bool)
   * @param flags (uint8)
   * @return int32
   */
  inline int32_t ExecuteAbility(int64_t abilityComponent, int64_t ability, bool altCast, uint8_t flags) {
    return __plugify_plugin_deadlock_sdk_ExecuteAbility(abilityComponent, ability, altCast, flags);
  }

  using _ToggleActivate = void (*)(int64_t, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ToggleActivate __plugify_plugin_deadlock_sdk_ToggleActivate;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Toggle ability active status
   * @param ability (int64)
   * @param activate (bool)
   */
  inline void ToggleActivate(int64_t ability, bool activate) {
    return __plugify_plugin_deadlock_sdk_ToggleActivate(ability, activate);
  }

  using _ResetAbilityCooldown = void (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ResetAbilityCooldown __plugify_plugin_deadlock_sdk_ResetAbilityCooldown;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Reset ability cooldown and refill charges
   * @param ability (int64)
   */
  inline void ResetAbilityCooldown(int64_t ability) {
    return __plugify_plugin_deadlock_sdk_ResetAbilityCooldown(ability);
  }

  using _GetAbilityMaxCharges = int32_t (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetAbilityMaxCharges __plugify_plugin_deadlock_sdk_GetAbilityMaxCharges;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get maximum charges of an ability
   * @param ability (int64)
   * @return int32
   */
  inline int32_t GetAbilityMaxCharges(int64_t ability) {
    return __plugify_plugin_deadlock_sdk_GetAbilityMaxCharges(ability);
  }

  using _SetUpgradeBits = void (*)(int64_t, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetUpgradeBits __plugify_plugin_deadlock_sdk_SetUpgradeBits;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set upgrade bits on ability
   * @param ability (int64)
   * @param newBits (int32)
   */
  inline void SetUpgradeBits(int64_t ability, int32_t newBits) {
    return __plugify_plugin_deadlock_sdk_SetUpgradeBits(ability, newBits);
  }

} // namespace plugify_plugin_deadlock_sdk
