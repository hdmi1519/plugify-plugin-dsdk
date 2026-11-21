#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: players)

namespace plugify_plugin_deadlock_sdk {

  using _GetPlayerController = int64_t (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetPlayerController __plugify_plugin_deadlock_sdk_GetPlayerController;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get CBasePlayerController address for player slot
   * @param playerSlot (int32)
   * @return int64
   */
  inline int64_t GetPlayerController(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerController(playerSlot);
  }

  using _GetPlayerPawn = int64_t (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetPlayerPawn __plugify_plugin_deadlock_sdk_GetPlayerPawn;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get CCitadelPlayerPawn address for player slot
   * @param playerSlot (int32)
   * @return int64
   */
  inline int64_t GetPlayerPawn(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerPawn(playerSlot);
  }

  using _GetPlayerSlot = int32_t (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetPlayerSlot __plugify_plugin_deadlock_sdk_GetPlayerSlot;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get player slot from controller address
   * @param controller (int64)
   * @return int32
   */
  inline int32_t GetPlayerSlot(int64_t controller) {
    return __plugify_plugin_deadlock_sdk_GetPlayerSlot(controller);
  }

  using _GetPlayerName = plg::string (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetPlayerName __plugify_plugin_deadlock_sdk_GetPlayerName;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get player display name
   * @param playerSlot (int32)
   * @return string
   */
  inline plg::string GetPlayerName(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerName(playerSlot);
  }

  using _GetSteamID = uint64_t (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetSteamID __plugify_plugin_deadlock_sdk_GetSteamID;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get player 64-bit SteamID
   * @param playerSlot (int32)
   * @return uint64
   */
  inline uint64_t GetSteamID(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetSteamID(playerSlot);
  }

  using _IsClientAuthenticated = bool (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_IsClientAuthenticated __plugify_plugin_deadlock_sdk_IsClientAuthenticated;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Check if player Steam ticket is validated
   * @param playerSlot (int32)
   * @return bool
   */
  inline bool IsClientAuthenticated(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_IsClientAuthenticated(playerSlot);
  }

  using _IsClientConnected = bool (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_IsClientConnected __plugify_plugin_deadlock_sdk_IsClientConnected;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Check if client is connected
   * @param playerSlot (int32)
   * @return bool
   */
  inline bool IsClientConnected(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_IsClientConnected(playerSlot);
  }

  using _IsFakeClient = bool (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_IsFakeClient __plugify_plugin_deadlock_sdk_IsFakeClient;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Check if player is a bot/fake client
   * @param playerSlot (int32)
   * @return bool
   */
  inline bool IsFakeClient(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_IsFakeClient(playerSlot);
  }

  using _CreateFakeClient = int32_t (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_CreateFakeClient __plugify_plugin_deadlock_sdk_CreateFakeClient;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Create a fake client in the match
   * @param name (string)
   * @return int32
   */
  inline int32_t CreateFakeClient(const plg::string& name) {
    return __plugify_plugin_deadlock_sdk_CreateFakeClient(name);
  }

  using _DisconnectClient = void (*)(int32_t, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_DisconnectClient __plugify_plugin_deadlock_sdk_DisconnectClient;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Disconnect a client with disconnection reason code
   * @param playerSlot (int32)
   * @param reason (int32)
   */
  inline void DisconnectClient(int32_t playerSlot, int32_t reason) {
    return __plugify_plugin_deadlock_sdk_DisconnectClient(playerSlot, reason);
  }

  using _KickClient = void (*)(int32_t, const plg::string&, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_KickClient __plugify_plugin_deadlock_sdk_KickClient;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Kick client with message and code
   * @param playerSlot (int32)
   * @param reason (string)
   * @param code (int32)
   */
  inline void KickClient(int32_t playerSlot, const plg::string& reason, int32_t code) {
    return __plugify_plugin_deadlock_sdk_KickClient(playerSlot, reason, code);
  }

  using _ChangeTeam = void (*)(int64_t, int32_t, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ChangeTeam __plugify_plugin_deadlock_sdk_ChangeTeam;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Change team of player controller
   * @param controller (int64)
   * @param teamNum (int32)
   * @param keepHero (bool)
   */
  inline void ChangeTeam(int64_t controller, int32_t teamNum, bool keepHero) {
    return __plugify_plugin_deadlock_sdk_ChangeTeam(controller, teamNum, keepHero);
  }

  using _GetPlayerPing = int32_t (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetPlayerPing __plugify_plugin_deadlock_sdk_GetPlayerPing;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get ping of player in milliseconds
   * @param playerSlot (int32)
   * @return int32
   */
  inline int32_t GetPlayerPing(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerPing(playerSlot);
  }

  using _GetPlayerTimeConnected = float (*)(int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetPlayerTimeConnected __plugify_plugin_deadlock_sdk_GetPlayerTimeConnected;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get connection time of player in seconds
   * @param playerSlot (int32)
   * @return float
   */
  inline float GetPlayerTimeConnected(int32_t playerSlot) {
    return __plugify_plugin_deadlock_sdk_GetPlayerTimeConnected(playerSlot);
  }

} // namespace plugify_plugin_deadlock_sdk
