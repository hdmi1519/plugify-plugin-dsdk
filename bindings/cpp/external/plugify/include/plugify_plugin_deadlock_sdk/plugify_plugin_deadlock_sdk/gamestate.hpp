#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: gamestate)

namespace plugify_plugin_deadlock_sdk {

  using _GetGameState = EGameState (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetGameState __plugify_plugin_deadlock_sdk_GetGameState;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get current game state enum
   * @return int32
   */
  inline EGameState GetGameState() {
    return __plugify_plugin_deadlock_sdk_GetGameState();
  }

  using _GetMatchTime = float (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetMatchTime __plugify_plugin_deadlock_sdk_GetMatchTime;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get current match clock in seconds
   * @return float
   */
  inline float GetMatchTime() {
    return __plugify_plugin_deadlock_sdk_GetMatchTime();
  }

  using _ChangeGameState = void (*)(EGameState);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ChangeGameState __plugify_plugin_deadlock_sdk_ChangeGameState;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Force Deadlock game state change
   * @param newState (int32)
   */
  inline void ChangeGameState(EGameState newState) {
    return __plugify_plugin_deadlock_sdk_ChangeGameState(newState);
  }

  using _SetWaitingForPlayersRoster = void (*)(uint32_t, uint32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetWaitingForPlayersRoster __plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set waiting for players roster counts
   * @param readyCount (uint32)
   * @param totalCount (uint32)
   */
  inline void SetWaitingForPlayersRoster(uint32_t readyCount, uint32_t totalCount) {
    return __plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster(readyCount, totalCount);
  }

  using _SetMatchStartOnAnyMap = void (*)(bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SetMatchStartOnAnyMap __plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Enable/disable match start sequence on custom maps
   * @param enabled (bool)
   */
  inline void SetMatchStartOnAnyMap(bool enabled) {
    return __plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap(enabled);
  }

  using _GetMatchStartOnAnyMap = bool (*)();
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetMatchStartOnAnyMap __plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Check if match start on custom maps is enabled
   * @return bool
   */
  inline bool GetMatchStartOnAnyMap() {
    return __plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap();
  }

} // namespace plugify_plugin_deadlock_sdk
