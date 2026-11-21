#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: navigation)

namespace plugify_plugin_deadlock_sdk {

  using _NavGetNearestPoint = bool (*)(float, float, float, float, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_NavGetNearestPoint __plugify_plugin_deadlock_sdk_NavGetNearestPoint;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Find nearest point on navmesh
   * @param x (float)
   * @param y (float)
   * @param z (float)
   * @param maxDistance (float)
   * @param hull (int32)
   * @return bool
   */
  inline bool NavGetNearestPoint(float x, float y, float z, float maxDistance, int32_t hull) {
    return __plugify_plugin_deadlock_sdk_NavGetNearestPoint(x, y, z, maxDistance, hull);
  }

  using _NavGetGroundHeight = float (*)(float, float, float, float, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_NavGetGroundHeight __plugify_plugin_deadlock_sdk_NavGetGroundHeight;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get ground elevation from navmesh
   * @param x (float)
   * @param y (float)
   * @param z (float)
   * @param maxDistance (float)
   * @param hull (int32)
   * @return float
   */
  inline float NavGetGroundHeight(float x, float y, float z, float maxDistance, int32_t hull) {
    return __plugify_plugin_deadlock_sdk_NavGetGroundHeight(x, y, z, maxDistance, hull);
  }

} // namespace plugify_plugin_deadlock_sdk
