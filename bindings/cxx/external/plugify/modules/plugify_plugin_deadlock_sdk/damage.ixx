// Generated from plugify_plugin_deadlock_sdk.pplugin (group: damage)

export module plugify_plugin_deadlock_sdk.damage;
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

  using _CreateDamageInfo = int64_t (*)(int64_t, int64_t, int64_t, float, int32_t);
  PLUGIFY_EXPORT _CreateDamageInfo __plugify_plugin_deadlock_sdk_CreateDamageInfo = nullptr;
  /**
   * @brief Create CTakeDamageInfo instance
   * @param inflictor (int64)
   * @param attacker (int64)
   * @param ability (int64)
   * @param damage (float)
   * @param damageType (int32)
   * @return int64
   */

  int64_t CreateDamageInfo(int64_t inflictor, int64_t attacker, int64_t ability, float damage, int32_t damageType) {
    return __plugify_plugin_deadlock_sdk_CreateDamageInfo(inflictor, attacker, ability, damage, damageType);
  }

  using _DestroyDamageInfo = void (*)(int64_t);
  PLUGIFY_EXPORT _DestroyDamageInfo __plugify_plugin_deadlock_sdk_DestroyDamageInfo = nullptr;
  /**
   * @brief Free CTakeDamageInfo instance
   * @param info (int64)
   */

  void DestroyDamageInfo(int64_t info) {
    return __plugify_plugin_deadlock_sdk_DestroyDamageInfo(info);
  }

  using _TakeDamage = void (*)(int64_t, int64_t);
  PLUGIFY_EXPORT _TakeDamage __plugify_plugin_deadlock_sdk_TakeDamage = nullptr;
  /**
   * @brief Inflict damage on victim entity
   * @param victim (int64)
   * @param info (int64)
   */

  void TakeDamage(int64_t victim, int64_t info) {
    return __plugify_plugin_deadlock_sdk_TakeDamage(victim, info);
  }

  using _ApplyDamage = void (*)(int64_t, int64_t);
  PLUGIFY_EXPORT _ApplyDamage __plugify_plugin_deadlock_sdk_ApplyDamage = nullptr;
  /**
   * @brief Apply damage bypassing damage filters
   * @param victim (int64)
   * @param info (int64)
   */

  void ApplyDamage(int64_t victim, int64_t info) {
    return __plugify_plugin_deadlock_sdk_ApplyDamage(victim, info);
  }

  using _GetMaxHealth = int32_t (*)(int64_t);
  PLUGIFY_EXPORT _GetMaxHealth __plugify_plugin_deadlock_sdk_GetMaxHealth = nullptr;
  /**
   * @brief Get maximum health of entity
   * @param entity (int64)
   * @return int32
   */

  int32_t GetMaxHealth(int64_t entity) {
    return __plugify_plugin_deadlock_sdk_GetMaxHealth(entity);
  }

  using _Heal = int32_t (*)(int64_t, float);
  PLUGIFY_EXPORT _Heal __plugify_plugin_deadlock_sdk_Heal = nullptr;
  /**
   * @brief Heal entity by amount
   * @param entity (int64)
   * @param amount (float)
   * @return int32
   */

  int32_t Heal(int64_t entity, float amount) {
    return __plugify_plugin_deadlock_sdk_Heal(entity, amount);
  }

} // namespace plugify_plugin_deadlock_sdk
