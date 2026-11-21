// Generated from plugify_plugin_deadlock_sdk.pplugin (group: navigation)

export module plugify_plugin_deadlock_sdk.navigation;
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

  using _NavGetNearestPoint = bool (*)(float, float, float, float, int32_t);
  PLUGIFY_EXPORT _NavGetNearestPoint __plugify_plugin_deadlock_sdk_NavGetNearestPoint = nullptr;
  /**
   * @brief Find nearest point on navmesh
   * @param x (float)
   * @param y (float)
   * @param z (float)
   * @param maxDistance (float)
   * @param hull (int32)
   * @return bool
   */

  bool NavGetNearestPoint(float x, float y, float z, float maxDistance, int32_t hull) {
    return __plugify_plugin_deadlock_sdk_NavGetNearestPoint(x, y, z, maxDistance, hull);
  }

  using _NavGetGroundHeight = float (*)(float, float, float, float, int32_t);
  PLUGIFY_EXPORT _NavGetGroundHeight __plugify_plugin_deadlock_sdk_NavGetGroundHeight = nullptr;
  /**
   * @brief Get ground elevation from navmesh
   * @param x (float)
   * @param y (float)
   * @param z (float)
   * @param maxDistance (float)
   * @param hull (int32)
   * @return float
   */

  float NavGetGroundHeight(float x, float y, float z, float maxDistance, int32_t hull) {
    return __plugify_plugin_deadlock_sdk_NavGetGroundHeight(x, y, z, maxDistance, hull);
  }

} // namespace plugify_plugin_deadlock_sdk
