// Generated from plugify_plugin_deadlock_sdk.pplugin (group: entityio)

export module plugify_plugin_deadlock_sdk.entityio;
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

  using _AcceptInput = void (*)(int64_t, const plg::string&, int64_t, int64_t, const plg::string&);
  PLUGIFY_EXPORT _AcceptInput __plugify_plugin_deadlock_sdk_AcceptInput = nullptr;
  /**
   * @brief Fire input on target entity
   * @param entity (int64)
   * @param inputName (string)
   * @param activator (int64)
   * @param caller (int64)
   * @param value (string)
   */

  void AcceptInput(int64_t entity, const plg::string& inputName, int64_t activator, int64_t caller, const plg::string& value) {
    return __plugify_plugin_deadlock_sdk_AcceptInput(entity, inputName, activator, caller, value);
  }

} // namespace plugify_plugin_deadlock_sdk
