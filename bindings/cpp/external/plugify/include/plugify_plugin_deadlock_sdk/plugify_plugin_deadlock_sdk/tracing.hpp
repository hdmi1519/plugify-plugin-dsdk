#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: tracing)

namespace plugify_plugin_deadlock_sdk {

  using _LineTrace = bool (*)(float, float, float, float, float, float, uint32_t, int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_LineTrace __plugify_plugin_deadlock_sdk_LineTrace;
namespace plugify_plugin_deadlock_sdk {
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
  inline bool LineTrace(float startX, float startY, float startZ, float endX, float endY, float endZ, uint32_t mask, int64_t ignoreEntity) {
    return __plugify_plugin_deadlock_sdk_LineTrace(startX, startY, startZ, endX, endY, endZ, mask, ignoreEntity);
  }

} // namespace plugify_plugin_deadlock_sdk
