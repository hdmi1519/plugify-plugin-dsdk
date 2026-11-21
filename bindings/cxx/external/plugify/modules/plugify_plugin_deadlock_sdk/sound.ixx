// Generated from plugify_plugin_deadlock_sdk.pplugin (group: sound)

export module plugify_plugin_deadlock_sdk.sound;
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

  using _EmitSound = void (*)(int64_t, const plg::string&, int32_t, float, float);
  PLUGIFY_EXPORT _EmitSound __plugify_plugin_deadlock_sdk_EmitSound = nullptr;
  /**
   * @brief Emit sound event from entity
   * @param entity (int64)
   * @param soundName (string)
   * @param pitch (int32)
   * @param volume (float)
   * @param delay (float)
   */

  void EmitSound(int64_t entity, const plg::string& soundName, int32_t pitch, float volume, float delay) {
    return __plugify_plugin_deadlock_sdk_EmitSound(entity, soundName, pitch, volume, delay);
  }

  using _TakeSoundEventGuid = uint32_t (*)();
  PLUGIFY_EXPORT _TakeSoundEventGuid __plugify_plugin_deadlock_sdk_TakeSoundEventGuid = nullptr;
  /**
   * @brief Generate unique sound event GUID
   * @return uint32
   */

  uint32_t TakeSoundEventGuid() {
    return __plugify_plugin_deadlock_sdk_TakeSoundEventGuid();
  }

} // namespace plugify_plugin_deadlock_sdk
