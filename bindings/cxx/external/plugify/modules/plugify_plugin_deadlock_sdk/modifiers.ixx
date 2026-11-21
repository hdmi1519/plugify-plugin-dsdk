// Generated from plugify_plugin_deadlock_sdk.pplugin (group: modifiers)

export module plugify_plugin_deadlock_sdk.modifiers;
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

  using _AddModifier = int64_t (*)(int64_t, const plg::string&, int64_t, int64_t, int64_t, int32_t);
  PLUGIFY_EXPORT _AddModifier __plugify_plugin_deadlock_sdk_AddModifier = nullptr;
  /**
   * @brief Add modifier to entity
   * @param entity (int64)
   * @param modifierName (string)
   * @param kv3 (int64)
   * @param caster (int64)
   * @param ability (int64)
   * @param team (int32)
   * @return int64
   */

  int64_t AddModifier(int64_t entity, const plg::string& modifierName, int64_t kv3, int64_t caster, int64_t ability, int32_t team) {
    return __plugify_plugin_deadlock_sdk_AddModifier(entity, modifierName, kv3, caster, ability, team);
  }

  using _RemoveModifier = bool (*)(int64_t, int64_t);
  PLUGIFY_EXPORT _RemoveModifier __plugify_plugin_deadlock_sdk_RemoveModifier = nullptr;
  /**
   * @brief Remove modifier instance from entity
   * @param entity (int64)
   * @param modifier (int64)
   * @return bool
   */

  bool RemoveModifier(int64_t entity, int64_t modifier) {
    return __plugify_plugin_deadlock_sdk_RemoveModifier(entity, modifier);
  }

} // namespace plugify_plugin_deadlock_sdk
