#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: precaching)

namespace plugify_plugin_deadlock_sdk {

  using _PrecacheResource = void (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_PrecacheResource __plugify_plugin_deadlock_sdk_PrecacheResource;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Precache resource by VPK path
   * @param path (string)
   */
  inline void PrecacheResource(const plg::string& path) {
    return __plugify_plugin_deadlock_sdk_PrecacheResource(path);
  }

  using _PrecacheModel = void (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_PrecacheModel __plugify_plugin_deadlock_sdk_PrecacheModel;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Precache model resource
   * @param modelPath (string)
   */
  inline void PrecacheModel(const plg::string& modelPath) {
    return __plugify_plugin_deadlock_sdk_PrecacheModel(modelPath);
  }

} // namespace plugify_plugin_deadlock_sdk
