// Generated from plugify_plugin_deadlock_sdk.pplugin (group: tracing)

export module plugify_plugin_deadlock_sdk.tracing;
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

  using _LineTrace = bool (*)(float, float, float, float, float, float, uint32_t, int64_t);
  PLUGIFY_EXPORT _LineTrace __plugify_plugin_deadlock_sdk_LineTrace = nullptr;
  /**
   * @brief Perform physics raycast trace between start and end vectors
   * @param startX (float)
   * @param startY (float)
   * @param startZ (float)
   * @param endX (float)
   * @param endY (float)
   * @param endZ (float)
   * @param mask (uint32)
   * @param ignoreEntity (int64)
   * @return bool
   */

  bool LineTrace(float startX, float startY, float startZ, float endX, float endY, float endZ, uint32_t mask, int64_t ignoreEntity) {
    return __plugify_plugin_deadlock_sdk_LineTrace(startX, startY, startZ, endX, endY, endZ, mask, ignoreEntity);
  }

} // namespace plugify_plugin_deadlock_sdk
