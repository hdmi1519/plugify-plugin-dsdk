#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: keyvalues3)

namespace plugify_plugin_deadlock_sdk {

  using _KV3Create = int64_t (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_KV3Create __plugify_plugin_deadlock_sdk_KV3Create;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Allocate new KeyValues3 document
   * @return int64
   */
  inline int64_t KV3Create() {
    return __plugify_plugin_deadlock_sdk_KV3Create();
  }

  using _KV3Destroy = void (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_KV3Destroy __plugify_plugin_deadlock_sdk_KV3Destroy;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Free KeyValues3 document
   * @param kv3 (int64)
   */
  inline void KV3Destroy(int64_t kv3) {
    return __plugify_plugin_deadlock_sdk_KV3Destroy(kv3);
  }

  using _KV3SetString = void (*)(int64_t, const plg::string&, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_KV3SetString __plugify_plugin_deadlock_sdk_KV3SetString;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set string value in KeyValues3 document
   * @param kv3 (int64)
   * @param key (string)
   * @param value (string)
   */
  inline void KV3SetString(int64_t kv3, const plg::string& key, const plg::string& value) {
    return __plugify_plugin_deadlock_sdk_KV3SetString(kv3, key, value);
  }

  using _KV3SetBool = void (*)(int64_t, const plg::string&, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_KV3SetBool __plugify_plugin_deadlock_sdk_KV3SetBool;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set bool value in KeyValues3 document
   * @param kv3 (int64)
   * @param key (string)
   * @param value (bool)
   */
  inline void KV3SetBool(int64_t kv3, const plg::string& key, bool value) {
    return __plugify_plugin_deadlock_sdk_KV3SetBool(kv3, key, value);
  }

  using _KV3SetInt = void (*)(int64_t, const plg::string&, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_KV3SetInt __plugify_plugin_deadlock_sdk_KV3SetInt;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set int32 value in KeyValues3 document
   * @param kv3 (int64)
   * @param key (string)
   * @param value (int32)
   */
  inline void KV3SetInt(int64_t kv3, const plg::string& key, int32_t value) {
    return __plugify_plugin_deadlock_sdk_KV3SetInt(kv3, key, value);
  }

  using _KV3SetFloat = void (*)(int64_t, const plg::string&, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_KV3SetFloat __plugify_plugin_deadlock_sdk_KV3SetFloat;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set float value in KeyValues3 document
   * @param kv3 (int64)
   * @param key (string)
   * @param value (float)
   */
  inline void KV3SetFloat(int64_t kv3, const plg::string& key, float value) {
    return __plugify_plugin_deadlock_sdk_KV3SetFloat(kv3, key, value);
  }

} // namespace plugify_plugin_deadlock_sdk
