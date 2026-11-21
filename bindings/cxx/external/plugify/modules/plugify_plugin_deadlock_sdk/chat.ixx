// Generated from plugify_plugin_deadlock_sdk.pplugin (group: chat)

export module plugify_plugin_deadlock_sdk.chat;
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

  using _PrintToChat = void (*)(int32_t, const plg::string&);
  PLUGIFY_EXPORT _PrintToChat __plugify_plugin_deadlock_sdk_PrintToChat = nullptr;
  /**
   * @brief Print message to client chat
   * @param playerSlot (int32)
   * @param message (string)
   */

  void PrintToChat(int32_t playerSlot, const plg::string& message) {
    return __plugify_plugin_deadlock_sdk_PrintToChat(playerSlot, message);
  }

  using _PrintToChatAll = void (*)(const plg::string&);
  PLUGIFY_EXPORT _PrintToChatAll __plugify_plugin_deadlock_sdk_PrintToChatAll = nullptr;
  /**
   * @brief Broadcast message to all players
   * @param message (string)
   */

  void PrintToChatAll(const plg::string& message) {
    return __plugify_plugin_deadlock_sdk_PrintToChatAll(message);
  }

  using _PrintToConsole = void (*)(int32_t, const plg::string&);
  PLUGIFY_EXPORT _PrintToConsole __plugify_plugin_deadlock_sdk_PrintToConsole = nullptr;
  /**
   * @brief Print message to client console
   * @param playerSlot (int32)
   * @param message (string)
   */

  void PrintToConsole(int32_t playerSlot, const plg::string& message) {
    return __plugify_plugin_deadlock_sdk_PrintToConsole(playerSlot, message);
  }

  using _PrintToConsoleAll = void (*)(const plg::string&);
  PLUGIFY_EXPORT _PrintToConsoleAll __plugify_plugin_deadlock_sdk_PrintToConsoleAll = nullptr;
  /**
   * @brief Print message to all player consoles
   * @param message (string)
   */

  void PrintToConsoleAll(const plg::string& message) {
    return __plugify_plugin_deadlock_sdk_PrintToConsoleAll(message);
  }

  using _HudAnnounce = void (*)(int32_t, const plg::string&, const plg::string&, float);
  PLUGIFY_EXPORT _HudAnnounce __plugify_plugin_deadlock_sdk_HudAnnounce = nullptr;
  /**
   * @brief Display a HUD game announcement banner to a player
   * @param playerSlot (int32)
   * @param title (string)
   * @param description (string)
   * @param duration (float)
   */

  void HudAnnounce(int32_t playerSlot, const plg::string& title, const plg::string& description, float duration) {
    return __plugify_plugin_deadlock_sdk_HudAnnounce(playerSlot, title, description, duration);
  }

  using _HudAnnounceAll = void (*)(const plg::string&, const plg::string&, float);
  PLUGIFY_EXPORT _HudAnnounceAll __plugify_plugin_deadlock_sdk_HudAnnounceAll = nullptr;
  /**
   * @brief Display a HUD game announcement banner to all players
   * @param title (string)
   * @param description (string)
   * @param duration (float)
   */

  void HudAnnounceAll(const plg::string& title, const plg::string& description, float duration) {
    return __plugify_plugin_deadlock_sdk_HudAnnounceAll(title, description, duration);
  }

} // namespace plugify_plugin_deadlock_sdk
