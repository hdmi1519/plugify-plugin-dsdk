#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: networking)

namespace plugify_plugin_deadlock_sdk {

  using _SendNetMessage = void (*)(int32_t, const plg::vector<uint8_t>&, uint64_t, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SendNetMessage __plugify_plugin_deadlock_sdk_SendNetMessage;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Send protobuf network message to clients
   * @param msgId (int32)
   * @param protoBytes (uint8[])
   * @param recipientMask (uint64)
   * @param bufType (int32)
   */
  inline void SendNetMessage(int32_t msgId, const plg::vector<uint8_t>& protoBytes, uint64_t recipientMask, int32_t bufType) {
    return __plugify_plugin_deadlock_sdk_SendNetMessage(msgId, protoBytes, recipientMask, bufType);
  }

  using _GetNetMessageName = plg::string (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetNetMessageName __plugify_plugin_deadlock_sdk_GetNetMessageName;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get registered network message name
   * @param msgId (int32)
   * @return string
   */
  inline plg::string GetNetMessageName(int32_t msgId) {
    return __plugify_plugin_deadlock_sdk_GetNetMessageName(msgId);
  }

} // namespace plugify_plugin_deadlock_sdk
