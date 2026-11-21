#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: sound)

namespace plugify_plugin_deadlock_sdk {

  using _EmitSound = void (*)(int64_t, const plg::string&, int32_t, float, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_EmitSound __plugify_plugin_deadlock_sdk_EmitSound;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Emit sound event from entity
   * @param entity (int64)
   * @param soundName (string)
   * @param pitch (int32)
   * @param volume (float)
   * @param delay (float)
   */
  inline void EmitSound(int64_t entity, const plg::string& soundName, int32_t pitch, float volume, float delay) {
    return __plugify_plugin_deadlock_sdk_EmitSound(entity, soundName, pitch, volume, delay);
  }

  using _TakeSoundEventGuid = uint32_t (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_TakeSoundEventGuid __plugify_plugin_deadlock_sdk_TakeSoundEventGuid;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Generate unique sound event GUID
   * @return uint32
   */
  inline uint32_t TakeSoundEventGuid() {
    return __plugify_plugin_deadlock_sdk_TakeSoundEventGuid();
  }

} // namespace plugify_plugin_deadlock_sdk
