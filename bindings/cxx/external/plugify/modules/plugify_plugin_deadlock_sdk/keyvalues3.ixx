// Generated from plugify_plugin_deadlock_sdk.pplugin (group: keyvalues3)

export module plugify_plugin_deadlock_sdk.keyvalues3;
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

  using _KV3Create = int64_t (*)();
  PLUGIFY_EXPORT _KV3Create __plugify_plugin_deadlock_sdk_KV3Create = nullptr;
  /**
   * @brief Allocate new KeyValues3 document
   * @return int64
   */

  int64_t KV3Create() {
    return __plugify_plugin_deadlock_sdk_KV3Create();
  }

  using _KV3Destroy = void (*)(int64_t);
  PLUGIFY_EXPORT _KV3Destroy __plugify_plugin_deadlock_sdk_KV3Destroy = nullptr;
  /**
   * @brief Free KeyValues3 document
   * @param kv3 (int64)
   */

  void KV3Destroy(int64_t kv3) {
    return __plugify_plugin_deadlock_sdk_KV3Destroy(kv3);
  }

  using _KV3SetString = void (*)(int64_t, const plg::string&, const plg::string&);
  PLUGIFY_EXPORT _KV3SetString __plugify_plugin_deadlock_sdk_KV3SetString = nullptr;
  /**
   * @brief Set string value in KeyValues3 document
   * @param kv3 (int64)
   * @param key (string)
   * @param value (string)
   */

  void KV3SetString(int64_t kv3, const plg::string& key, const plg::string& value) {
    return __plugify_plugin_deadlock_sdk_KV3SetString(kv3, key, value);
  }

  using _KV3SetBool = void (*)(int64_t, const plg::string&, bool);
  PLUGIFY_EXPORT _KV3SetBool __plugify_plugin_deadlock_sdk_KV3SetBool = nullptr;
  /**
   * @brief Set bool value in KeyValues3 document
   * @param kv3 (int64)
   * @param key (string)
   * @param value (bool)
   */

  void KV3SetBool(int64_t kv3, const plg::string& key, bool value) {
    return __plugify_plugin_deadlock_sdk_KV3SetBool(kv3, key, value);
  }

  using _KV3SetInt = void (*)(int64_t, const plg::string&, int32_t);
  PLUGIFY_EXPORT _KV3SetInt __plugify_plugin_deadlock_sdk_KV3SetInt = nullptr;
  /**
   * @brief Set int32 value in KeyValues3 document
   * @param kv3 (int64)
   * @param key (string)
   * @param value (int32)
   */

  void KV3SetInt(int64_t kv3, const plg::string& key, int32_t value) {
    return __plugify_plugin_deadlock_sdk_KV3SetInt(kv3, key, value);
  }

  using _KV3SetFloat = void (*)(int64_t, const plg::string&, float);
  PLUGIFY_EXPORT _KV3SetFloat __plugify_plugin_deadlock_sdk_KV3SetFloat = nullptr;
  /**
   * @brief Set float value in KeyValues3 document
   * @param kv3 (int64)
   * @param key (string)
   * @param value (float)
   */

  void KV3SetFloat(int64_t kv3, const plg::string& key, float value) {
    return __plugify_plugin_deadlock_sdk_KV3SetFloat(kv3, key, value);
  }

} // namespace plugify_plugin_deadlock_sdk
