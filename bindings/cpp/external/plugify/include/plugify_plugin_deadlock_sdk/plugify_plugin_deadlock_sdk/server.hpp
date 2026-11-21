#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: server)

namespace plugify_plugin_deadlock_sdk {

  using _GetMapName = plg::string (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetMapName __plugify_plugin_deadlock_sdk_GetMapName;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get currently loaded map name
   * @return string
   */
  inline plg::string GetMapName() {
    return __plugify_plugin_deadlock_sdk_GetMapName();
  }

  using _IsMapValid = bool (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_IsMapValid __plugify_plugin_deadlock_sdk_IsMapValid;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Check if map exists and can be loaded
   * @param map (string)
   * @return bool
   */
  inline bool IsMapValid(const plg::string& map) {
    return __plugify_plugin_deadlock_sdk_IsMapValid(map);
  }

  using _SetServerKeyValue = bool (*)(const plg::string&, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetServerKeyValue __plugify_plugin_deadlock_sdk_SetServerKeyValue;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set Steam A2S rule key-value
   * @param key (string)
   * @param value (string)
   * @return bool
   */
  inline bool SetServerKeyValue(const plg::string& key, const plg::string& value) {
    return __plugify_plugin_deadlock_sdk_SetServerKeyValue(key, value);
  }

  using _ClearServerKeyValues = bool (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ClearServerKeyValues __plugify_plugin_deadlock_sdk_ClearServerKeyValues;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Clear Steam A2S rules
   * @return bool
   */
  inline bool ClearServerKeyValues() {
    return __plugify_plugin_deadlock_sdk_ClearServerKeyValues();
  }

  using _SetServerAddons = void (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetServerAddons __plugify_plugin_deadlock_sdk_SetServerAddons;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set active server workshop addons
   * @param addons (string)
   */
  inline void SetServerAddons(const plg::string& addons) {
    return __plugify_plugin_deadlock_sdk_SetServerAddons(addons);
  }

  using _AddFileSystemSearchPath = bool (*)(const plg::string&, const plg::string&, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_AddFileSystemSearchPath __plugify_plugin_deadlock_sdk_AddFileSystemSearchPath;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Add file search path
   * @param path (string)
   * @param pathId (string)
   * @param addType (int32)
   * @return bool
   */
  inline bool AddFileSystemSearchPath(const plg::string& path, const plg::string& pathId, int32_t addType) {
    return __plugify_plugin_deadlock_sdk_AddFileSystemSearchPath(path, pathId, addType);
  }

  using _HasCommandLineParm = bool (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_HasCommandLineParm __plugify_plugin_deadlock_sdk_HasCommandLineParm;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Check if command line argument exists
   * @param parm (string)
   * @return bool
   */
  inline bool HasCommandLineParm(const plg::string& parm) {
    return __plugify_plugin_deadlock_sdk_HasCommandLineParm(parm);
  }

  using _SetConnectRejectReason = void (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetConnectRejectReason __plugify_plugin_deadlock_sdk_SetConnectRejectReason;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set reject reason for connection rejection
   * @param reason (string)
   */
  inline void SetConnectRejectReason(const plg::string& reason) {
    return __plugify_plugin_deadlock_sdk_SetConnectRejectReason(reason);
  }

  using _GetGlobalVars = int64_t (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetGlobalVars __plugify_plugin_deadlock_sdk_GetGlobalVars;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get CGlobalVars pointer
   * @return int64
   */
  inline int64_t GetGlobalVars() {
    return __plugify_plugin_deadlock_sdk_GetGlobalVars();
  }

  using _GetGameTime = float (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetGameTime __plugify_plugin_deadlock_sdk_GetGameTime;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get current engine game time in seconds
   * @return float
   */
  inline float GetGameTime() {
    return __plugify_plugin_deadlock_sdk_GetGameTime();
  }

  using _GetGameTickCount = int32_t (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetGameTickCount __plugify_plugin_deadlock_sdk_GetGameTickCount;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get current engine tick count
   * @return int32
   */
  inline int32_t GetGameTickCount() {
    return __plugify_plugin_deadlock_sdk_GetGameTickCount();
  }

} // namespace plugify_plugin_deadlock_sdk
