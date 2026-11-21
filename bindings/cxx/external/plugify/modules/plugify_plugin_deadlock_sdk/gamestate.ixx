// Generated from plugify_plugin_deadlock_sdk.pplugin (group: gamestate)

export module plugify_plugin_deadlock_sdk.gamestate;
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

  using _GetGameState = EGameState (*)();
  PLUGIFY_EXPORT _GetGameState __plugify_plugin_deadlock_sdk_GetGameState = nullptr;
  /**
   * @brief Get current game state enum
   * @return int32
   */

  EGameState GetGameState() {
    return __plugify_plugin_deadlock_sdk_GetGameState();
  }

  using _GetMatchTime = float (*)();
  PLUGIFY_EXPORT _GetMatchTime __plugify_plugin_deadlock_sdk_GetMatchTime = nullptr;
  /**
   * @brief Get current match clock in seconds
   * @return float
   */

  float GetMatchTime() {
    return __plugify_plugin_deadlock_sdk_GetMatchTime();
  }

  using _ChangeGameState = void (*)(EGameState);
  PLUGIFY_EXPORT _ChangeGameState __plugify_plugin_deadlock_sdk_ChangeGameState = nullptr;
  /**
   * @brief Force Deadlock game state change
   * @param newState (int32)
   */

  void ChangeGameState(EGameState newState) {
    return __plugify_plugin_deadlock_sdk_ChangeGameState(newState);
  }

  using _SetWaitingForPlayersRoster = void (*)(uint32_t, uint32_t);
  PLUGIFY_EXPORT _SetWaitingForPlayersRoster __plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster = nullptr;
  /**
   * @brief Set waiting for players roster counts
   * @param readyCount (uint32)
   * @param totalCount (uint32)
   */

  void SetWaitingForPlayersRoster(uint32_t readyCount, uint32_t totalCount) {
    return __plugify_plugin_deadlock_sdk_SetWaitingForPlayersRoster(readyCount, totalCount);
  }

  using _SetMatchStartOnAnyMap = void (*)(bool);
  PLUGIFY_EXPORT _SetMatchStartOnAnyMap __plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap = nullptr;
  /**
   * @brief Enable/disable match start sequence on custom maps
   * @param enabled (bool)
   */

  void SetMatchStartOnAnyMap(bool enabled) {
    return __plugify_plugin_deadlock_sdk_SetMatchStartOnAnyMap(enabled);
  }

  using _GetMatchStartOnAnyMap = bool (*)();
  PLUGIFY_EXPORT _GetMatchStartOnAnyMap __plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap = nullptr;
  /**
   * @brief Check if match start on custom maps is enabled
   * @return bool
   */

  bool GetMatchStartOnAnyMap() {
    return __plugify_plugin_deadlock_sdk_GetMatchStartOnAnyMap();
  }

} // namespace plugify_plugin_deadlock_sdk
