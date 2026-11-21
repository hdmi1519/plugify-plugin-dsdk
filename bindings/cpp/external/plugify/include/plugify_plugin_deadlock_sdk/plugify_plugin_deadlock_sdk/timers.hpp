#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: timers)

namespace plugify_plugin_deadlock_sdk {

  using _CreateTimer = int64_t (*)(float, TimerCallback, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_CreateTimer __plugify_plugin_deadlock_sdk_CreateTimer;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Create a one-shot or repeating timer
   * @param interval (float)
   * @param callback (function)
   * @param repeating (bool)
   * @return int64
   */
  inline int64_t CreateTimer(float interval, TimerCallback callback, bool repeating) {
    return __plugify_plugin_deadlock_sdk_CreateTimer(interval, callback, repeating);
  }

  using _KillTimer = bool (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_KillTimer __plugify_plugin_deadlock_sdk_KillTimer;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Stop and delete an active timer
   * @param timerId (int64)
   * @return bool
   */
  inline bool KillTimer(int64_t timerId) {
    return __plugify_plugin_deadlock_sdk_KillTimer(timerId);
  }

} // namespace plugify_plugin_deadlock_sdk
