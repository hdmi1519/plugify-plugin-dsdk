#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: chat)

namespace plugify_plugin_deadlock_sdk {

  using _PrintToChat = void (*)(int32_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_PrintToChat __plugify_plugin_deadlock_sdk_PrintToChat;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Print message to client chat
   * @param playerSlot (int32)
   * @param message (string)
   */
  inline void PrintToChat(int32_t playerSlot, const plg::string& message) {
    return __plugify_plugin_deadlock_sdk_PrintToChat(playerSlot, message);
  }

  using _PrintToChatAll = void (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_PrintToChatAll __plugify_plugin_deadlock_sdk_PrintToChatAll;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Broadcast message to all players
   * @param message (string)
   */
  inline void PrintToChatAll(const plg::string& message) {
    return __plugify_plugin_deadlock_sdk_PrintToChatAll(message);
  }

  using _PrintToConsole = void (*)(int32_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_PrintToConsole __plugify_plugin_deadlock_sdk_PrintToConsole;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Print message to client console
   * @param playerSlot (int32)
   * @param message (string)
   */
  inline void PrintToConsole(int32_t playerSlot, const plg::string& message) {
    return __plugify_plugin_deadlock_sdk_PrintToConsole(playerSlot, message);
  }

  using _PrintToConsoleAll = void (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_PrintToConsoleAll __plugify_plugin_deadlock_sdk_PrintToConsoleAll;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Print message to all player consoles
   * @param message (string)
   */
  inline void PrintToConsoleAll(const plg::string& message) {
    return __plugify_plugin_deadlock_sdk_PrintToConsoleAll(message);
  }

  using _HudAnnounce = void (*)(int32_t, const plg::string&, const plg::string&, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_HudAnnounce __plugify_plugin_deadlock_sdk_HudAnnounce;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Display a HUD game announcement banner to a player
   * @param playerSlot (int32)
   * @param title (string)
   * @param description (string)
   * @param duration (float)
   */
  inline void HudAnnounce(int32_t playerSlot, const plg::string& title, const plg::string& description, float duration) {
    return __plugify_plugin_deadlock_sdk_HudAnnounce(playerSlot, title, description, duration);
  }

  using _HudAnnounceAll = void (*)(const plg::string&, const plg::string&, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_HudAnnounceAll __plugify_plugin_deadlock_sdk_HudAnnounceAll;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Display a HUD game announcement banner to all players
   * @param title (string)
   * @param description (string)
   * @param duration (float)
   */
  inline void HudAnnounceAll(const plg::string& title, const plg::string& description, float duration) {
    return __plugify_plugin_deadlock_sdk_HudAnnounceAll(title, description, duration);
  }

} // namespace plugify_plugin_deadlock_sdk
