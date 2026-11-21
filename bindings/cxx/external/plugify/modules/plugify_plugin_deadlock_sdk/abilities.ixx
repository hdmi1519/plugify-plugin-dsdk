// Generated from plugify_plugin_deadlock_sdk.pplugin (group: abilities)

export module plugify_plugin_deadlock_sdk.abilities;
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

  using _AddAbility = int64_t (*)(int64_t, const plg::string&, uint16_t);
  PLUGIFY_EXPORT _AddAbility __plugify_plugin_deadlock_sdk_AddAbility = nullptr;
  /**
   * @brief Add an ability to player pawn
   * @param pawn (int64)
   * @param abilityName (string)
   * @param slot (uint16)
   * @return int64
   */

  int64_t AddAbility(int64_t pawn, const plg::string& abilityName, uint16_t slot) {
    return __plugify_plugin_deadlock_sdk_AddAbility(pawn, abilityName, slot);
  }

  using _RemoveAbility = bool (*)(int64_t, const plg::string&);
  PLUGIFY_EXPORT _RemoveAbility __plugify_plugin_deadlock_sdk_RemoveAbility = nullptr;
  /**
   * @brief Remove ability by name from pawn
   * @param pawn (int64)
   * @param abilityName (string)
   * @return bool
   */

  bool RemoveAbility(int64_t pawn, const plg::string& abilityName) {
    return __plugify_plugin_deadlock_sdk_RemoveAbility(pawn, abilityName);
  }

  using _RemoveAbilityByEntity = bool (*)(int64_t, int64_t);
  PLUGIFY_EXPORT _RemoveAbilityByEntity __plugify_plugin_deadlock_sdk_RemoveAbilityByEntity = nullptr;
  /**
   * @brief Remove ability by entity pointer
   * @param pawn (int64)
   * @param ability (int64)
   * @return bool
   */

  bool RemoveAbilityByEntity(int64_t pawn, int64_t ability) {
    return __plugify_plugin_deadlock_sdk_RemoveAbilityByEntity(pawn, ability);
  }

  using _FindAbilityByName = int64_t (*)(int64_t, const plg::string&);
  PLUGIFY_EXPORT _FindAbilityByName __plugify_plugin_deadlock_sdk_FindAbilityByName = nullptr;
  /**
   * @brief Find ability in ability component
   * @param abilityComponent (int64)
   * @param abilityName (string)
   * @return int64
   */

  int64_t FindAbilityByName(int64_t abilityComponent, const plg::string& abilityName) {
    return __plugify_plugin_deadlock_sdk_FindAbilityByName(abilityComponent, abilityName);
  }

  using _GetAbilityBySlot = int64_t (*)(int64_t, int16_t);
  PLUGIFY_EXPORT _GetAbilityBySlot __plugify_plugin_deadlock_sdk_GetAbilityBySlot = nullptr;
  /**
   * @brief Get ability at slot index
   * @param abilityComponent (int64)
   * @param slot (int16)
   * @return int64
   */

  int64_t GetAbilityBySlot(int64_t abilityComponent, int16_t slot) {
    return __plugify_plugin_deadlock_sdk_GetAbilityBySlot(abilityComponent, slot);
  }

  using _ExecuteAbility = int32_t (*)(int64_t, int64_t, bool, uint8_t);
  PLUGIFY_EXPORT _ExecuteAbility __plugify_plugin_deadlock_sdk_ExecuteAbility = nullptr;
  /**
   * @brief Cast/execute an ability
   * @param abilityComponent (int64)
   * @param ability (int64)
   * @param altCast (bool)
   * @param flags (uint8)
   * @return int32
   */

  int32_t ExecuteAbility(int64_t abilityComponent, int64_t ability, bool altCast, uint8_t flags) {
    return __plugify_plugin_deadlock_sdk_ExecuteAbility(abilityComponent, ability, altCast, flags);
  }

  using _ToggleActivate = void (*)(int64_t, bool);
  PLUGIFY_EXPORT _ToggleActivate __plugify_plugin_deadlock_sdk_ToggleActivate = nullptr;
  /**
   * @brief Toggle ability active status
   * @param ability (int64)
   * @param activate (bool)
   */

  void ToggleActivate(int64_t ability, bool activate) {
    return __plugify_plugin_deadlock_sdk_ToggleActivate(ability, activate);
  }

  using _ResetAbilityCooldown = void (*)(int64_t);
  PLUGIFY_EXPORT _ResetAbilityCooldown __plugify_plugin_deadlock_sdk_ResetAbilityCooldown = nullptr;
  /**
   * @brief Reset ability cooldown and refill charges
   * @param ability (int64)
   */

  void ResetAbilityCooldown(int64_t ability) {
    return __plugify_plugin_deadlock_sdk_ResetAbilityCooldown(ability);
  }

  using _GetAbilityMaxCharges = int32_t (*)(int64_t);
  PLUGIFY_EXPORT _GetAbilityMaxCharges __plugify_plugin_deadlock_sdk_GetAbilityMaxCharges = nullptr;
  /**
   * @brief Get maximum charges of an ability
   * @param ability (int64)
   * @return int32
   */

  int32_t GetAbilityMaxCharges(int64_t ability) {
    return __plugify_plugin_deadlock_sdk_GetAbilityMaxCharges(ability);
  }

  using _SetUpgradeBits = void (*)(int64_t, int32_t);
  PLUGIFY_EXPORT _SetUpgradeBits __plugify_plugin_deadlock_sdk_SetUpgradeBits = nullptr;
  /**
   * @brief Set upgrade bits on ability
   * @param ability (int64)
   * @param newBits (int32)
   */

  void SetUpgradeBits(int64_t ability, int32_t newBits) {
    return __plugify_plugin_deadlock_sdk_SetUpgradeBits(ability, newBits);
  }

} // namespace plugify_plugin_deadlock_sdk
