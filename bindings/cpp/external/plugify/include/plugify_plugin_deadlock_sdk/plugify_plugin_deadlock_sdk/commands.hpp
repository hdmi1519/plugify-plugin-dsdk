#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: commands)

namespace plugify_plugin_deadlock_sdk {

  using _AddServerCommand = bool (*)(const plg::string&, const plg::string&, int64_t, CommandCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_AddServerCommand __plugify_plugin_deadlock_sdk_AddServerCommand;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register a server-console-only command
   * @param name (string)
   * @param description (string)
   * @param flags (int64)
   * @param callback (function)
   * @return bool
   */
  inline bool AddServerCommand(const plg::string& name, const plg::string& description, int64_t flags, CommandCallback callback) {
    return __plugify_plugin_deadlock_sdk_AddServerCommand(name, description, flags, callback);
  }

  using _AddClientCommand = bool (*)(const plg::string&, const plg::string&, int64_t, CommandCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_AddClientCommand __plugify_plugin_deadlock_sdk_AddClientCommand;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register a client-console-only command
   * @param name (string)
   * @param description (string)
   * @param flags (int64)
   * @param callback (function)
   * @return bool
   */
  inline bool AddClientCommand(const plg::string& name, const plg::string& description, int64_t flags, CommandCallback callback) {
    return __plugify_plugin_deadlock_sdk_AddClientCommand(name, description, flags, callback);
  }

  using _AddChatCommand = bool (*)(const plg::string&, const plg::string&, int64_t, CommandCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_AddChatCommand __plugify_plugin_deadlock_sdk_AddChatCommand;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register a client-chat-only command
   * @param name (string)
   * @param description (string)
   * @param flags (int64)
   * @param callback (function)
   * @return bool
   */
  inline bool AddChatCommand(const plg::string& name, const plg::string& description, int64_t flags, CommandCallback callback) {
    return __plugify_plugin_deadlock_sdk_AddChatCommand(name, description, flags, callback);
  }

  using _AddConsoleCommand = bool (*)(const plg::string&, const plg::string&, int64_t, CommandCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_AddConsoleCommand __plugify_plugin_deadlock_sdk_AddConsoleCommand;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register a server/chat console command
   * @param name (string)
   * @param description (string)
   * @param flags (int64)
   * @param callback (function)
   * @return bool
   */
  inline bool AddConsoleCommand(const plg::string& name, const plg::string& description, int64_t flags, CommandCallback callback) {
    return __plugify_plugin_deadlock_sdk_AddConsoleCommand(name, description, flags, callback);
  }

  using _RemoveCommand = bool (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_RemoveCommand __plugify_plugin_deadlock_sdk_RemoveCommand;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister a console command
   * @param name (string)
   * @return bool
   */
  inline bool RemoveCommand(const plg::string& name) {
    return __plugify_plugin_deadlock_sdk_RemoveCommand(name);
  }

  using _ServerCommand = void (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ServerCommand __plugify_plugin_deadlock_sdk_ServerCommand;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Execute a command on the server console
   * @param command (string)
   */
  inline void ServerCommand(const plg::string& command) {
    return __plugify_plugin_deadlock_sdk_ServerCommand(command);
  }

  using _ExecuteCommandAsPlayer = bool (*)(int32_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ExecuteCommandAsPlayer __plugify_plugin_deadlock_sdk_ExecuteCommandAsPlayer;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Execute a command on behalf of a player
   * @param playerSlot (int32)
   * @param command (string)
   * @return bool
   */
  inline bool ExecuteCommandAsPlayer(int32_t playerSlot, const plg::string& command) {
    return __plugify_plugin_deadlock_sdk_ExecuteCommandAsPlayer(playerSlot, command);
  }

  using _ClientCommand = void (*)(int32_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ClientCommand __plugify_plugin_deadlock_sdk_ClientCommand;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Execute command on client
   * @param playerSlot (int32)
   * @param command (string)
   */
  inline void ClientCommand(int32_t playerSlot, const plg::string& command) {
    return __plugify_plugin_deadlock_sdk_ClientCommand(playerSlot, command);
  }

} // namespace plugify_plugin_deadlock_sdk
