// Generated from plugify_plugin_deadlock_sdk.pplugin (group: networking)

export module plugify_plugin_deadlock_sdk.networking;
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

  using _SendNetMessage = void (*)(int32_t, const plg::vector<uint8_t>&, uint64_t, int32_t);
  PLUGIFY_EXPORT _SendNetMessage __plugify_plugin_deadlock_sdk_SendNetMessage = nullptr;
  /**
   * @brief Send protobuf network message to clients
   * @param msgId (int32)
   * @param protoBytes (uint8[])
   * @param recipientMask (uint64)
   * @param bufType (int32)
   */

  void SendNetMessage(int32_t msgId, const plg::vector<uint8_t>& protoBytes, uint64_t recipientMask, int32_t bufType) {
    return __plugify_plugin_deadlock_sdk_SendNetMessage(msgId, protoBytes, recipientMask, bufType);
  }

  using _GetNetMessageName = plg::string (*)(int32_t);
  PLUGIFY_EXPORT _GetNetMessageName __plugify_plugin_deadlock_sdk_GetNetMessageName = nullptr;
  /**
   * @brief Get registered network message name
   * @param msgId (int32)
   * @return string
   */

  plg::string GetNetMessageName(int32_t msgId) {
    return __plugify_plugin_deadlock_sdk_GetNetMessageName(msgId);
  }

} // namespace plugify_plugin_deadlock_sdk
