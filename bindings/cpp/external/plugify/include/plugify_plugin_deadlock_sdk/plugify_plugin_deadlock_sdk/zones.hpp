#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: zones)

namespace plugify_plugin_deadlock_sdk {

  using _CreateBeam = int64_t (*)(float, float, float, float, float, float, float, uint8_t, uint8_t, uint8_t, uint8_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_CreateBeam __plugify_plugin_deadlock_sdk_CreateBeam;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Spawn a glowing laser beam entity between two world points
   * @param startX (float)
   * @param startY (float)
   * @param startZ (float)
   * @param endX (float)
   * @param endY (float)
   * @param endZ (float)
   * @param width (float)
   * @param r (uint8)
   * @param g (uint8)
   * @param b (uint8)
   * @param a (uint8)
   * @return int64
   */
  inline int64_t CreateBeam(float startX, float startY, float startZ, float endX, float endY, float endZ, float width, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    return __plugify_plugin_deadlock_sdk_CreateBeam(startX, startY, startZ, endX, endY, endZ, width, r, g, b, a);
  }

  using _CreateZone = int64_t (*)(const plg::string&, float, float, float, float, float, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_CreateZone __plugify_plugin_deadlock_sdk_CreateZone;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Create a spatial trigger volume box
   * @param name (string)
   * @param minX (float)
   * @param minY (float)
   * @param minZ (float)
   * @param maxX (float)
   * @param maxY (float)
   * @param maxZ (float)
   * @return int64
   */
  inline int64_t CreateZone(const plg::string& name, float minX, float minY, float minZ, float maxX, float maxY, float maxZ) {
    return __plugify_plugin_deadlock_sdk_CreateZone(name, minX, minY, minZ, maxX, maxY, maxZ);
  }

  using _DestroyZone = void (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_DestroyZone __plugify_plugin_deadlock_sdk_DestroyZone;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Destroy a spatial zone trigger
   * @param zoneId (int64)
   */
  inline void DestroyZone(int64_t zoneId) {
    return __plugify_plugin_deadlock_sdk_DestroyZone(zoneId);
  }

} // namespace plugify_plugin_deadlock_sdk
