// Generated from plugify_plugin_deadlock_sdk.pplugin (group: precaching)

export module plugify_plugin_deadlock_sdk.precaching;
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

  using _PrecacheResource = void (*)(const plg::string&);
  PLUGIFY_EXPORT _PrecacheResource __plugify_plugin_deadlock_sdk_PrecacheResource = nullptr;
  /**
   * @brief Precache resource by VPK path
   * @param path (string)
   */

  void PrecacheResource(const plg::string& path) {
    return __plugify_plugin_deadlock_sdk_PrecacheResource(path);
  }

  using _PrecacheModel = void (*)(const plg::string&);
  PLUGIFY_EXPORT _PrecacheModel __plugify_plugin_deadlock_sdk_PrecacheModel = nullptr;
  /**
   * @brief Precache model resource
   * @param modelPath (string)
   */

  void PrecacheModel(const plg::string& modelPath) {
    return __plugify_plugin_deadlock_sdk_PrecacheModel(modelPath);
  }

} // namespace plugify_plugin_deadlock_sdk
