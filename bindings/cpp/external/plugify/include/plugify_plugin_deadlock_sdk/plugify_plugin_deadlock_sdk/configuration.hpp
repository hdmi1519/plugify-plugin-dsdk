#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: configuration)

namespace plugify_plugin_deadlock_sdk {

  using _GetConfigString = plg::string (*)(const plg::string&, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetConfigString __plugify_plugin_deadlock_sdk_GetConfigString;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Read string from settings.jsonc
   * @param key (string)
   * @param defaultValue (string)
   * @return string
   */
  inline plg::string GetConfigString(const plg::string& key, const plg::string& defaultValue) {
    return __plugify_plugin_deadlock_sdk_GetConfigString(key, defaultValue);
  }

  using _GetConfigInt = int32_t (*)(const plg::string&, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetConfigInt __plugify_plugin_deadlock_sdk_GetConfigInt;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Read int from settings.jsonc
   * @param key (string)
   * @param defaultValue (int32)
   * @return int32
   */
  inline int32_t GetConfigInt(const plg::string& key, int32_t defaultValue) {
    return __plugify_plugin_deadlock_sdk_GetConfigInt(key, defaultValue);
  }

  using _GetConfigBool = bool (*)(const plg::string&, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetConfigBool __plugify_plugin_deadlock_sdk_GetConfigBool;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Read bool from settings.jsonc
   * @param key (string)
   * @param defaultValue (bool)
   * @return bool
   */
  inline bool GetConfigBool(const plg::string& key, bool defaultValue) {
    return __plugify_plugin_deadlock_sdk_GetConfigBool(key, defaultValue);
  }

  using _GetConfigFloat = float (*)(const plg::string&, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetConfigFloat __plugify_plugin_deadlock_sdk_GetConfigFloat;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Read float from settings.jsonc
   * @param key (string)
   * @param defaultValue (float)
   * @return float
   */
  inline float GetConfigFloat(const plg::string& key, float defaultValue) {
    return __plugify_plugin_deadlock_sdk_GetConfigFloat(key, defaultValue);
  }

} // namespace plugify_plugin_deadlock_sdk
