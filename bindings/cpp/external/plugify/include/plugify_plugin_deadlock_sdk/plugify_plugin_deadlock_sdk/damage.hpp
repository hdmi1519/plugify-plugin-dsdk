#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: damage)

namespace plugify_plugin_deadlock_sdk {

  using _CreateDamageInfo = int64_t (*)(int64_t, int64_t, int64_t, float, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_CreateDamageInfo __plugify_plugin_deadlock_sdk_CreateDamageInfo;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Create CTakeDamageInfo instance
   * @param inflictor (int64)
   * @param attacker (int64)
   * @param ability (int64)
   * @param damage (float)
   * @param damageType (int32)
   * @return int64
   */
  inline int64_t CreateDamageInfo(int64_t inflictor, int64_t attacker, int64_t ability, float damage, int32_t damageType) {
    return __plugify_plugin_deadlock_sdk_CreateDamageInfo(inflictor, attacker, ability, damage, damageType);
  }

  using _DestroyDamageInfo = void (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_DestroyDamageInfo __plugify_plugin_deadlock_sdk_DestroyDamageInfo;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Free CTakeDamageInfo instance
   * @param info (int64)
   */
  inline void DestroyDamageInfo(int64_t info) {
    return __plugify_plugin_deadlock_sdk_DestroyDamageInfo(info);
  }

  using _TakeDamage = void (*)(int64_t, int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_TakeDamage __plugify_plugin_deadlock_sdk_TakeDamage;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Inflict damage on victim entity
   * @param victim (int64)
   * @param info (int64)
   */
  inline void TakeDamage(int64_t victim, int64_t info) {
    return __plugify_plugin_deadlock_sdk_TakeDamage(victim, info);
  }

  using _ApplyDamage = void (*)(int64_t, int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ApplyDamage __plugify_plugin_deadlock_sdk_ApplyDamage;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Apply damage bypassing damage filters
   * @param victim (int64)
   * @param info (int64)
   */
  inline void ApplyDamage(int64_t victim, int64_t info) {
    return __plugify_plugin_deadlock_sdk_ApplyDamage(victim, info);
  }

  using _GetMaxHealth = int32_t (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetMaxHealth __plugify_plugin_deadlock_sdk_GetMaxHealth;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get maximum health of entity
   * @param entity (int64)
   * @return int32
   */
  inline int32_t GetMaxHealth(int64_t entity) {
    return __plugify_plugin_deadlock_sdk_GetMaxHealth(entity);
  }

  using _Heal = int32_t (*)(int64_t, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_Heal __plugify_plugin_deadlock_sdk_Heal;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Heal entity by amount
   * @param entity (int64)
   * @param amount (float)
   * @return int32
   */
  inline int32_t Heal(int64_t entity, float amount) {
    return __plugify_plugin_deadlock_sdk_Heal(entity, amount);
  }

} // namespace plugify_plugin_deadlock_sdk
