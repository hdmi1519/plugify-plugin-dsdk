// Generated from plugify_plugin_deadlock_sdk.pplugin (group: timers)

export module plugify_plugin_deadlock_sdk.timers;
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

  using _CreateTimer = int64_t (*)(float, TimerCallback, bool);
  PLUGIFY_EXPORT _CreateTimer __plugify_plugin_deadlock_sdk_CreateTimer = nullptr;
  /**
   * @brief Create a one-shot or repeating timer
   * @param interval (float)
   * @param callback (function)
   * @param repeating (bool)
   * @return int64
   */

  int64_t CreateTimer(float interval, TimerCallback callback, bool repeating) {
    return __plugify_plugin_deadlock_sdk_CreateTimer(interval, callback, repeating);
  }

  using _KillTimer = bool (*)(int64_t);
  PLUGIFY_EXPORT _KillTimer __plugify_plugin_deadlock_sdk_KillTimer = nullptr;
  /**
   * @brief Stop and delete an active timer
   * @param timerId (int64)
   * @return bool
   */

  bool KillTimer(int64_t timerId) {
    return __plugify_plugin_deadlock_sdk_KillTimer(timerId);
  }

} // namespace plugify_plugin_deadlock_sdk
