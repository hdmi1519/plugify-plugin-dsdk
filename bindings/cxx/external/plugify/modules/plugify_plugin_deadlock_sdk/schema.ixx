// Generated from plugify_plugin_deadlock_sdk.pplugin (group: schema)

export module plugify_plugin_deadlock_sdk.schema;
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

  using _GetSchemaFieldOffset = int32_t (*)(const plg::string&, const plg::string&);
  PLUGIFY_EXPORT _GetSchemaFieldOffset __plugify_plugin_deadlock_sdk_GetSchemaFieldOffset = nullptr;
  /**
   * @brief Get byte offset of class field in schema
   * @param className (string)
   * @param fieldName (string)
   * @return int32
   */

  int32_t GetSchemaFieldOffset(const plg::string& className, const plg::string& fieldName) {
    return __plugify_plugin_deadlock_sdk_GetSchemaFieldOffset(className, fieldName);
  }

  using _NotifyStateChanged = void (*)(int64_t, int32_t, int16_t, int32_t);
  PLUGIFY_EXPORT _NotifyStateChanged __plugify_plugin_deadlock_sdk_NotifyStateChanged = nullptr;
  /**
   * @brief Notify network system of field modification
   * @param entity (int64)
   * @param fieldOffset (int32)
   * @param chainOffset (int16)
   * @param networkStateChangedOffset (int32)
   */

  void NotifyStateChanged(int64_t entity, int32_t fieldOffset, int16_t chainOffset, int32_t networkStateChangedOffset) {
    return __plugify_plugin_deadlock_sdk_NotifyStateChanged(entity, fieldOffset, chainOffset, networkStateChangedOffset);
  }

  using _SetSchemaString = void (*)(int64_t, const plg::string&, const plg::string&, const plg::string&);
  PLUGIFY_EXPORT _SetSchemaString __plugify_plugin_deadlock_sdk_SetSchemaString = nullptr;
  /**
   * @brief Set string field in schema structure
   * @param entity (int64)
   * @param className (string)
   * @param fieldName (string)
   * @param value (string)
   */

  void SetSchemaString(int64_t entity, const plg::string& className, const plg::string& fieldName, const plg::string& value) {
    return __plugify_plugin_deadlock_sdk_SetSchemaString(entity, className, fieldName, value);
  }

  using _GetSchemaClassSize = int32_t (*)(const plg::string&);
  PLUGIFY_EXPORT _GetSchemaClassSize __plugify_plugin_deadlock_sdk_GetSchemaClassSize = nullptr;
  /**
   * @brief Get sizeof schema class
   * @param className (string)
   * @return int32
   */

  int32_t GetSchemaClassSize(const plg::string& className) {
    return __plugify_plugin_deadlock_sdk_GetSchemaClassSize(className);
  }

} // namespace plugify_plugin_deadlock_sdk
