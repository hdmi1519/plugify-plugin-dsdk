// Generated from plugify_plugin_deadlock_sdk.pplugin (group: configuration)

export module plugify_plugin_deadlock_sdk.configuration;
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

  using _GetConfigString = plg::string (*)(const plg::string&, const plg::string&);
  PLUGIFY_EXPORT _GetConfigString __plugify_plugin_deadlock_sdk_GetConfigString = nullptr;
  /**
   * @brief Read string from settings.jsonc
   * @param key (string)
   * @param defaultValue (string)
   * @return string
   */

  plg::string GetConfigString(const plg::string& key, const plg::string& defaultValue) {
    return __plugify_plugin_deadlock_sdk_GetConfigString(key, defaultValue);
  }

  using _GetConfigInt = int32_t (*)(const plg::string&, int32_t);
  PLUGIFY_EXPORT _GetConfigInt __plugify_plugin_deadlock_sdk_GetConfigInt = nullptr;
  /**
   * @brief Read int from settings.jsonc
   * @param key (string)
   * @param defaultValue (int32)
   * @return int32
   */

  int32_t GetConfigInt(const plg::string& key, int32_t defaultValue) {
    return __plugify_plugin_deadlock_sdk_GetConfigInt(key, defaultValue);
  }

  using _GetConfigBool = bool (*)(const plg::string&, bool);
  PLUGIFY_EXPORT _GetConfigBool __plugify_plugin_deadlock_sdk_GetConfigBool = nullptr;
  /**
   * @brief Read bool from settings.jsonc
   * @param key (string)
   * @param defaultValue (bool)
   * @return bool
   */

  bool GetConfigBool(const plg::string& key, bool defaultValue) {
    return __plugify_plugin_deadlock_sdk_GetConfigBool(key, defaultValue);
  }

  using _GetConfigFloat = float (*)(const plg::string&, float);
  PLUGIFY_EXPORT _GetConfigFloat __plugify_plugin_deadlock_sdk_GetConfigFloat = nullptr;
  /**
   * @brief Read float from settings.jsonc
   * @param key (string)
   * @param defaultValue (float)
   * @return float
   */

  float GetConfigFloat(const plg::string& key, float defaultValue) {
    return __plugify_plugin_deadlock_sdk_GetConfigFloat(key, defaultValue);
  }

} // namespace plugify_plugin_deadlock_sdk
