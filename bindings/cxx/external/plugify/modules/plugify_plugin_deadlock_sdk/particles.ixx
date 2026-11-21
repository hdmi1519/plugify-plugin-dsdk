// Generated from plugify_plugin_deadlock_sdk.pplugin (group: particles)

export module plugify_plugin_deadlock_sdk.particles;
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

  using _CreateParticle = int64_t (*)(const plg::string&, int32_t, int64_t);
  PLUGIFY_EXPORT _CreateParticle __plugify_plugin_deadlock_sdk_CreateParticle = nullptr;
  /**
   * @brief Create and dispatch particle effect
   * @param particleName (string)
   * @param attachType (int32)
   * @param entity (int64)
   * @return int64
   */

  int64_t CreateParticle(const plg::string& particleName, int32_t attachType, int64_t entity) {
    return __plugify_plugin_deadlock_sdk_CreateParticle(particleName, attachType, entity);
  }

  using _DestroyParticle = void (*)(int64_t, bool);
  PLUGIFY_EXPORT _DestroyParticle __plugify_plugin_deadlock_sdk_DestroyParticle = nullptr;
  /**
   * @brief Destroy active particle instance
   * @param particle (int64)
   * @param destroyImmediately (bool)
   */

  void DestroyParticle(int64_t particle, bool destroyImmediately) {
    return __plugify_plugin_deadlock_sdk_DestroyParticle(particle, destroyImmediately);
  }

} // namespace plugify_plugin_deadlock_sdk
