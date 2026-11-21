#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: convars)

namespace plugify_plugin_deadlock_sdk {

  using _FindConVar = uint64_t (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_FindConVar __plugify_plugin_deadlock_sdk_FindConVar;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Find ConVar by name
   * @param name (string)
   * @return uint64
   */
  inline uint64_t FindConVar(const plg::string& name) {
    return __plugify_plugin_deadlock_sdk_FindConVar(name);
  }

  using _CreateConVar = uint64_t (*)(const plg::string&, const plg::string&, const plg::string&, uint64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_CreateConVar __plugify_plugin_deadlock_sdk_CreateConVar;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Create custom ConVar
   * @param name (string)
   * @param defaultValue (string)
   * @param description (string)
   * @param flags (uint64)
   * @return uint64
   */
  inline uint64_t CreateConVar(const plg::string& name, const plg::string& defaultValue, const plg::string& description, uint64_t flags) {
    return __plugify_plugin_deadlock_sdk_CreateConVar(name, defaultValue, description, flags);
  }

  using _GetConVarInt = int32_t (*)(uint64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetConVarInt __plugify_plugin_deadlock_sdk_GetConVarInt;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get ConVar integer value
   * @param handle (uint64)
   * @return int32
   */
  inline int32_t GetConVarInt(uint64_t handle) {
    return __plugify_plugin_deadlock_sdk_GetConVarInt(handle);
  }

  using _GetConVarFloat = float (*)(uint64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetConVarFloat __plugify_plugin_deadlock_sdk_GetConVarFloat;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get ConVar float value
   * @param handle (uint64)
   * @return float
   */
  inline float GetConVarFloat(uint64_t handle) {
    return __plugify_plugin_deadlock_sdk_GetConVarFloat(handle);
  }

  using _GetConVarString = plg::string (*)(uint64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetConVarString __plugify_plugin_deadlock_sdk_GetConVarString;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get ConVar string value
   * @param handle (uint64)
   * @return string
   */
  inline plg::string GetConVarString(uint64_t handle) {
    return __plugify_plugin_deadlock_sdk_GetConVarString(handle);
  }

  using _GetConVarBool = bool (*)(uint64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetConVarBool __plugify_plugin_deadlock_sdk_GetConVarBool;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get ConVar bool value
   * @param handle (uint64)
   * @return bool
   */
  inline bool GetConVarBool(uint64_t handle) {
    return __plugify_plugin_deadlock_sdk_GetConVarBool(handle);
  }

  using _SetConVarInt = void (*)(uint64_t, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetConVarInt __plugify_plugin_deadlock_sdk_SetConVarInt;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set ConVar int value
   * @param handle (uint64)
   * @param value (int32)
   */
  inline void SetConVarInt(uint64_t handle, int32_t value) {
    return __plugify_plugin_deadlock_sdk_SetConVarInt(handle, value);
  }

  using _SetConVarFloat = void (*)(uint64_t, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetConVarFloat __plugify_plugin_deadlock_sdk_SetConVarFloat;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set ConVar float value
   * @param handle (uint64)
   * @param value (float)
   */
  inline void SetConVarFloat(uint64_t handle, float value) {
    return __plugify_plugin_deadlock_sdk_SetConVarFloat(handle, value);
  }

  using _SetConVarString = bool (*)(uint64_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetConVarString __plugify_plugin_deadlock_sdk_SetConVarString;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set ConVar string value
   * @param handle (uint64)
   * @param value (string)
   * @return bool
   */
  inline bool SetConVarString(uint64_t handle, const plg::string& value) {
    return __plugify_plugin_deadlock_sdk_SetConVarString(handle, value);
  }

} // namespace plugify_plugin_deadlock_sdk
