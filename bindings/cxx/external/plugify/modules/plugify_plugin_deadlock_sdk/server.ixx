// Generated from plugify_plugin_deadlock_sdk.pplugin (group: server)

export module plugify_plugin_deadlock_sdk.server;
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

  using _GetMapName = plg::string (*)();
  PLUGIFY_EXPORT _GetMapName __plugify_plugin_deadlock_sdk_GetMapName = nullptr;
  /**
   * @brief Get currently loaded map name
   * @return string
   */

  plg::string GetMapName() {
    return __plugify_plugin_deadlock_sdk_GetMapName();
  }

  using _IsMapValid = bool (*)(const plg::string&);
  PLUGIFY_EXPORT _IsMapValid __plugify_plugin_deadlock_sdk_IsMapValid = nullptr;
  /**
   * @brief Check if map exists and can be loaded
   * @param map (string)
   * @return bool
   */

  bool IsMapValid(const plg::string& map) {
    return __plugify_plugin_deadlock_sdk_IsMapValid(map);
  }

  using _SetServerKeyValue = bool (*)(const plg::string&, const plg::string&);
  PLUGIFY_EXPORT _SetServerKeyValue __plugify_plugin_deadlock_sdk_SetServerKeyValue = nullptr;
  /**
   * @brief Set Steam A2S rule key-value
   * @param key (string)
   * @param value (string)
   * @return bool
   */

  bool SetServerKeyValue(const plg::string& key, const plg::string& value) {
    return __plugify_plugin_deadlock_sdk_SetServerKeyValue(key, value);
  }

  using _ClearServerKeyValues = bool (*)();
  PLUGIFY_EXPORT _ClearServerKeyValues __plugify_plugin_deadlock_sdk_ClearServerKeyValues = nullptr;
  /**
   * @brief Clear Steam A2S rules
   * @return bool
   */

  bool ClearServerKeyValues() {
    return __plugify_plugin_deadlock_sdk_ClearServerKeyValues();
  }

  using _SetServerAddons = void (*)(const plg::string&);
  PLUGIFY_EXPORT _SetServerAddons __plugify_plugin_deadlock_sdk_SetServerAddons = nullptr;
  /**
   * @brief Set active server workshop addons
   * @param addons (string)
   */

  void SetServerAddons(const plg::string& addons) {
    return __plugify_plugin_deadlock_sdk_SetServerAddons(addons);
  }

  using _AddFileSystemSearchPath = bool (*)(const plg::string&, const plg::string&, int32_t);
  PLUGIFY_EXPORT _AddFileSystemSearchPath __plugify_plugin_deadlock_sdk_AddFileSystemSearchPath = nullptr;
  /**
   * @brief Add file search path
   * @param path (string)
   * @param pathId (string)
   * @param addType (int32)
   * @return bool
   */

  bool AddFileSystemSearchPath(const plg::string& path, const plg::string& pathId, int32_t addType) {
    return __plugify_plugin_deadlock_sdk_AddFileSystemSearchPath(path, pathId, addType);
  }

  using _HasCommandLineParm = bool (*)(const plg::string&);
  PLUGIFY_EXPORT _HasCommandLineParm __plugify_plugin_deadlock_sdk_HasCommandLineParm = nullptr;
  /**
   * @brief Check if command line argument exists
   * @param parm (string)
   * @return bool
   */

  bool HasCommandLineParm(const plg::string& parm) {
    return __plugify_plugin_deadlock_sdk_HasCommandLineParm(parm);
  }

  using _SetConnectRejectReason = void (*)(const plg::string&);
  PLUGIFY_EXPORT _SetConnectRejectReason __plugify_plugin_deadlock_sdk_SetConnectRejectReason = nullptr;
  /**
   * @brief Set reject reason for connection rejection
   * @param reason (string)
   */

  void SetConnectRejectReason(const plg::string& reason) {
    return __plugify_plugin_deadlock_sdk_SetConnectRejectReason(reason);
  }

  using _GetGlobalVars = int64_t (*)();
  PLUGIFY_EXPORT _GetGlobalVars __plugify_plugin_deadlock_sdk_GetGlobalVars = nullptr;
  /**
   * @brief Get CGlobalVars pointer
   * @return int64
   */

  int64_t GetGlobalVars() {
    return __plugify_plugin_deadlock_sdk_GetGlobalVars();
  }

  using _GetGameTime = float (*)();
  PLUGIFY_EXPORT _GetGameTime __plugify_plugin_deadlock_sdk_GetGameTime = nullptr;
  /**
   * @brief Get current engine game time in seconds
   * @return float
   */

  float GetGameTime() {
    return __plugify_plugin_deadlock_sdk_GetGameTime();
  }

  using _GetGameTickCount = int32_t (*)();
  PLUGIFY_EXPORT _GetGameTickCount __plugify_plugin_deadlock_sdk_GetGameTickCount = nullptr;
  /**
   * @brief Get current engine tick count
   * @return int32
   */

  int32_t GetGameTickCount() {
    return __plugify_plugin_deadlock_sdk_GetGameTickCount();
  }

} // namespace plugify_plugin_deadlock_sdk
