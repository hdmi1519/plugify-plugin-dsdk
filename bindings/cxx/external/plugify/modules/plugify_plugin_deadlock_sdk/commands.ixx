// Generated from plugify_plugin_deadlock_sdk.pplugin (group: commands)

export module plugify_plugin_deadlock_sdk.commands;
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

  using _AddServerCommand = bool (*)(const plg::string&, const plg::string&, int64_t, CommandCallback);
  PLUGIFY_EXPORT _AddServerCommand __plugify_plugin_deadlock_sdk_AddServerCommand = nullptr;
  /**
   * @brief Register a server-console-only command
   * @param name (string)
   * @param description (string)
   * @param flags (int64)
   * @param callback (function)
   * @return bool
   */

  bool AddServerCommand(const plg::string& name, const plg::string& description, int64_t flags, CommandCallback callback) {
    return __plugify_plugin_deadlock_sdk_AddServerCommand(name, description, flags, callback);
  }

  using _AddClientCommand = bool (*)(const plg::string&, const plg::string&, int64_t, CommandCallback);
  PLUGIFY_EXPORT _AddClientCommand __plugify_plugin_deadlock_sdk_AddClientCommand = nullptr;
  /**
   * @brief Register a client-console-only command
   * @param name (string)
   * @param description (string)
   * @param flags (int64)
   * @param callback (function)
   * @return bool
   */

  bool AddClientCommand(const plg::string& name, const plg::string& description, int64_t flags, CommandCallback callback) {
    return __plugify_plugin_deadlock_sdk_AddClientCommand(name, description, flags, callback);
  }

  using _AddChatCommand = bool (*)(const plg::string&, const plg::string&, int64_t, CommandCallback);
  PLUGIFY_EXPORT _AddChatCommand __plugify_plugin_deadlock_sdk_AddChatCommand = nullptr;
  /**
   * @brief Register a client-chat-only command
   * @param name (string)
   * @param description (string)
   * @param flags (int64)
   * @param callback (function)
   * @return bool
   */

  bool AddChatCommand(const plg::string& name, const plg::string& description, int64_t flags, CommandCallback callback) {
    return __plugify_plugin_deadlock_sdk_AddChatCommand(name, description, flags, callback);
  }

  using _AddConsoleCommand = bool (*)(const plg::string&, const plg::string&, int64_t, CommandCallback);
  PLUGIFY_EXPORT _AddConsoleCommand __plugify_plugin_deadlock_sdk_AddConsoleCommand = nullptr;
  /**
   * @brief Register a server/chat console command
   * @param name (string)
   * @param description (string)
   * @param flags (int64)
   * @param callback (function)
   * @return bool
   */

  bool AddConsoleCommand(const plg::string& name, const plg::string& description, int64_t flags, CommandCallback callback) {
    return __plugify_plugin_deadlock_sdk_AddConsoleCommand(name, description, flags, callback);
  }

  using _RemoveCommand = bool (*)(const plg::string&);
  PLUGIFY_EXPORT _RemoveCommand __plugify_plugin_deadlock_sdk_RemoveCommand = nullptr;
  /**
   * @brief Unregister a console command
   * @param name (string)
   * @return bool
   */

  bool RemoveCommand(const plg::string& name) {
    return __plugify_plugin_deadlock_sdk_RemoveCommand(name);
  }

  using _ServerCommand = void (*)(const plg::string&);
  PLUGIFY_EXPORT _ServerCommand __plugify_plugin_deadlock_sdk_ServerCommand = nullptr;
  /**
   * @brief Execute a command on the server console
   * @param command (string)
   */

  void ServerCommand(const plg::string& command) {
    return __plugify_plugin_deadlock_sdk_ServerCommand(command);
  }

  using _ExecuteCommandAsPlayer = bool (*)(int32_t, const plg::string&);
  PLUGIFY_EXPORT _ExecuteCommandAsPlayer __plugify_plugin_deadlock_sdk_ExecuteCommandAsPlayer = nullptr;
  /**
   * @brief Execute a command on behalf of a player
   * @param playerSlot (int32)
   * @param command (string)
   * @return bool
   */

  bool ExecuteCommandAsPlayer(int32_t playerSlot, const plg::string& command) {
    return __plugify_plugin_deadlock_sdk_ExecuteCommandAsPlayer(playerSlot, command);
  }

  using _ClientCommand = void (*)(int32_t, const plg::string&);
  PLUGIFY_EXPORT _ClientCommand __plugify_plugin_deadlock_sdk_ClientCommand = nullptr;
  /**
   * @brief Execute command on client
   * @param playerSlot (int32)
   * @param command (string)
   */

  void ClientCommand(int32_t playerSlot, const plg::string& command) {
    return __plugify_plugin_deadlock_sdk_ClientCommand(playerSlot, command);
  }

} // namespace plugify_plugin_deadlock_sdk
