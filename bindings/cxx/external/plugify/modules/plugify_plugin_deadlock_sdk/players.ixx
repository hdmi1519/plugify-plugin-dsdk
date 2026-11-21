// Generated from plugify_plugin_deadlock_sdk.pplugin (group: players)

export module plugify_plugin_deadlock_sdk.players;
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

  using _GetPlayerController = int64_t (*)(int32_t);
  PLUGIFY_EXPORT _GetPlayerController __plugify_plugin_deadlock_sdk_GetPlayerController = nullptr;
  /**
   * @brief Get CBasePlayerController address for player slot
   * @param playerSlot (int32)
   * @return int64
   */

  int64_t GetPlayerController(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerController(playerSlot);
  }

  using _GetPlayerPawn = int64_t (*)(int32_t);
  PLUGIFY_EXPORT _GetPlayerPawn __plugify_plugin_deadlock_sdk_GetPlayerPawn = nullptr;
  /**
   * @brief Get CCitadelPlayerPawn address for player slot
   * @param playerSlot (int32)
   * @return int64
   */

  int64_t GetPlayerPawn(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerPawn(playerSlot);
  }

  using _GetPlayerSlot = int32_t (*)(int64_t);
  PLUGIFY_EXPORT _GetPlayerSlot __plugify_plugin_deadlock_sdk_GetPlayerSlot = nullptr;
  /**
   * @brief Get player slot from controller address
   * @param controller (int64)
   * @return int32
   */

  int32_t GetPlayerSlot(int64_t controller) {
    return __plugify_plugin_deadlock_sdk_GetPlayerSlot(controller);
  }

  using _GetPlayerName = plg::string (*)(int32_t);
  PLUGIFY_EXPORT _GetPlayerName __plugify_plugin_deadlock_sdk_GetPlayerName = nullptr;
  /**
   * @brief Get player display name
   * @param playerSlot (int32)
   * @return string
   */

  plg::string GetPlayerName(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerName(playerSlot);
  }

  using _GetSteamID = uint64_t (*)(int32_t);
  PLUGIFY_EXPORT _GetSteamID __plugify_plugin_deadlock_sdk_GetSteamID = nullptr;
  /**
   * @brief Get player 64-bit SteamID
   * @param playerSlot (int32)
   * @return uint64
   */

  uint64_t GetSteamID(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetSteamID(playerSlot);
  }

  using _IsClientAuthenticated = bool (*)(int32_t);
  PLUGIFY_EXPORT _IsClientAuthenticated __plugify_plugin_deadlock_sdk_IsClientAuthenticated = nullptr;
  /**
   * @brief Check if player Steam ticket is validated
   * @param playerSlot (int32)
   * @return bool
   */

  bool IsClientAuthenticated(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_IsClientAuthenticated(playerSlot);
  }

  using _IsClientConnected = bool (*)(int32_t);
  PLUGIFY_EXPORT _IsClientConnected __plugify_plugin_deadlock_sdk_IsClientConnected = nullptr;
  /**
   * @brief Check if client is connected
   * @param playerSlot (int32)
   * @return bool
   */

  bool IsClientConnected(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_IsClientConnected(playerSlot);
  }

  using _IsFakeClient = bool (*)(int32_t);
  PLUGIFY_EXPORT _IsFakeClient __plugify_plugin_deadlock_sdk_IsFakeClient = nullptr;
  /**
   * @brief Check if player is a bot/fake client
   * @param playerSlot (int32)
   * @return bool
   */

  bool IsFakeClient(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_IsFakeClient(playerSlot);
  }

  using _CreateFakeClient = int32_t (*)(const plg::string&);
  PLUGIFY_EXPORT _CreateFakeClient __plugify_plugin_deadlock_sdk_CreateFakeClient = nullptr;
  /**
   * @brief Create a fake client in the match
   * @param name (string)
   * @return int32
   */

  int32_t CreateFakeClient(const plg::string& name) {
    return __plugify_plugin_deadlock_sdk_CreateFakeClient(name);
  }

  using _DisconnectClient = void (*)(int32_t, int32_t);
  PLUGIFY_EXPORT _DisconnectClient __plugify_plugin_deadlock_sdk_DisconnectClient = nullptr;
  /**
   * @brief Disconnect a client with disconnection reason code
   * @param playerSlot (int32)
   * @param reason (int32)
   */

  void DisconnectClient(int32_t playerSlot, int32_t reason) {
    return __plugify_plugin_deadlock_sdk_DisconnectClient(playerSlot, reason);
  }

  using _KickClient = void (*)(int32_t, const plg::string&, int32_t);
  PLUGIFY_EXPORT _KickClient __plugify_plugin_deadlock_sdk_KickClient = nullptr;
  /**
   * @brief Kick client with message and code
   * @param playerSlot (int32)
   * @param reason (string)
   * @param code (int32)
   */

  void KickClient(int32_t playerSlot, const plg::string& reason, int32_t code) {
    return __plugify_plugin_deadlock_sdk_KickClient(playerSlot, reason, code);
  }

  using _ChangeTeam = void (*)(int64_t, int32_t, bool);
  PLUGIFY_EXPORT _ChangeTeam __plugify_plugin_deadlock_sdk_ChangeTeam = nullptr;
  /**
   * @brief Change team of player controller
   * @param controller (int64)
   * @param teamNum (int32)
   * @param keepHero (bool)
   */

  void ChangeTeam(int64_t controller, int32_t teamNum, bool keepHero) {
    return __plugify_plugin_deadlock_sdk_ChangeTeam(controller, teamNum, keepHero);
  }

  using _GetPlayerPing = int32_t (*)(int32_t);
  PLUGIFY_EXPORT _GetPlayerPing __plugify_plugin_deadlock_sdk_GetPlayerPing = nullptr;
  /**
   * @brief Get ping of player in milliseconds
   * @param playerSlot (int32)
   * @return int32
   */

  int32_t GetPlayerPing(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerPing(playerSlot);
  }

  using _GetPlayerTimeConnected = float (*)(int32_t);
  PLUGIFY_EXPORT _GetPlayerTimeConnected __plugify_plugin_deadlock_sdk_GetPlayerTimeConnected = nullptr;
  /**
   * @brief Get connection time of player in seconds
   * @param playerSlot (int32)
   * @return float
   */

  float GetPlayerTimeConnected(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerTimeConnected(playerSlot);
  }

} // namespace plugify_plugin_deadlock_sdk
