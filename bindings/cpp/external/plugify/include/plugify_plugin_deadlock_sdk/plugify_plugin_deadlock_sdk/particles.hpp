#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: particles)

namespace plugify_plugin_deadlock_sdk {

  using _CreateParticle = int64_t (*)(const plg::string&, int32_t, int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_CreateParticle __plugify_plugin_deadlock_sdk_CreateParticle;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Create and dispatch particle effect
   * @param particleName (string)
   * @param attachType (int32)
   * @param entity (int64)
   * @return int64
   */
  inline int64_t CreateParticle(const plg::string& particleName, int32_t attachType, int64_t entity) {
    return __plugify_plugin_deadlock_sdk_CreateParticle(particleName, attachType, entity);
  }

  using _DestroyParticle = void (*)(int64_t, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_DestroyParticle __plugify_plugin_deadlock_sdk_DestroyParticle;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Destroy active particle instance
   * @param particle (int64)
   * @param destroyImmediately (bool)
   */
  inline void DestroyParticle(int64_t particle, bool destroyImmediately) {
    return __plugify_plugin_deadlock_sdk_DestroyParticle(particle, destroyImmediately);
  }

} // namespace plugify_plugin_deadlock_sdk
