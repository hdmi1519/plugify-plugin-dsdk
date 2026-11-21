#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: listeners)

namespace plugify_plugin_deadlock_sdk {

  using _OnModifyCurrency_Register = void (*)(ModifyCurrencyCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnModifyCurrency_Register __plugify_plugin_deadlock_sdk_OnModifyCurrency_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Currency modification listener hook
   * @param callback (function)
   */
  inline void OnModifyCurrency_Register(ModifyCurrencyCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnModifyCurrency_Register(callback);
  }

  using _OnModifyCurrency_Unregister = void (*)(ModifyCurrencyCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnModifyCurrency_Unregister __plugify_plugin_deadlock_sdk_OnModifyCurrency_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Currency modification listener hook
   * @param callback (function)
   */
  inline void OnModifyCurrency_Unregister(ModifyCurrencyCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnModifyCurrency_Unregister(callback);
  }

  using _OnTakeDamage_Register = void (*)(TakeDamageCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnTakeDamage_Register __plugify_plugin_deadlock_sdk_OnTakeDamage_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Entity take damage listener hook
   * @param callback (function)
   */
  inline void OnTakeDamage_Register(TakeDamageCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnTakeDamage_Register(callback);
  }

  using _OnTakeDamage_Unregister = void (*)(TakeDamageCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnTakeDamage_Unregister __plugify_plugin_deadlock_sdk_OnTakeDamage_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Entity take damage listener hook
   * @param callback (function)
   */
  inline void OnTakeDamage_Unregister(TakeDamageCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnTakeDamage_Unregister(callback);
  }

  using _OnClientConnect_Register = void (*)(ClientConnectCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnClientConnect_Register __plugify_plugin_deadlock_sdk_OnClientConnect_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Client connection listener hook
   * @param callback (function)
   */
  inline void OnClientConnect_Register(ClientConnectCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnClientConnect_Register(callback);
  }

  using _OnClientConnect_Unregister = void (*)(ClientConnectCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnClientConnect_Unregister __plugify_plugin_deadlock_sdk_OnClientConnect_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Client connection listener hook
   * @param callback (function)
   */
  inline void OnClientConnect_Unregister(ClientConnectCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnClientConnect_Unregister(callback);
  }

  using _OnClientPutInServer_Register = void (*)(ClientPutInServerCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnClientPutInServer_Register __plugify_plugin_deadlock_sdk_OnClientPutInServer_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Client put in server listener hook
   * @param callback (function)
   */
  inline void OnClientPutInServer_Register(ClientPutInServerCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnClientPutInServer_Register(callback);
  }

  using _OnClientPutInServer_Unregister = void (*)(ClientPutInServerCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnClientPutInServer_Unregister __plugify_plugin_deadlock_sdk_OnClientPutInServer_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Client put in server listener hook
   * @param callback (function)
   */
  inline void OnClientPutInServer_Unregister(ClientPutInServerCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnClientPutInServer_Unregister(callback);
  }

  using _OnClientDisconnect_Register = void (*)(ClientDisconnectCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnClientDisconnect_Register __plugify_plugin_deadlock_sdk_OnClientDisconnect_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Client disconnect listener hook
   * @param callback (function)
   */
  inline void OnClientDisconnect_Register(ClientDisconnectCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnClientDisconnect_Register(callback);
  }

  using _OnClientDisconnect_Unregister = void (*)(ClientDisconnectCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnClientDisconnect_Unregister __plugify_plugin_deadlock_sdk_OnClientDisconnect_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Client disconnect listener hook
   * @param callback (function)
   */
  inline void OnClientDisconnect_Unregister(ClientDisconnectCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnClientDisconnect_Unregister(callback);
  }

  using _OnGameFrame_Register = void (*)(GameFrameCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnGameFrame_Register __plugify_plugin_deadlock_sdk_OnGameFrame_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Server game tick frame listener hook
   * @param callback (function)
   */
  inline void OnGameFrame_Register(GameFrameCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnGameFrame_Register(callback);
  }

  using _OnGameFrame_Unregister = void (*)(GameFrameCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnGameFrame_Unregister __plugify_plugin_deadlock_sdk_OnGameFrame_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Server game tick frame listener hook
   * @param callback (function)
   */
  inline void OnGameFrame_Unregister(GameFrameCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnGameFrame_Unregister(callback);
  }

  using _OnEntityCreated_Register = void (*)(EntityCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntityCreated_Register __plugify_plugin_deadlock_sdk_OnEntityCreated_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Entity created listener hook
   * @param callback (function)
   */
  inline void OnEntityCreated_Register(EntityCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntityCreated_Register(callback);
  }

  using _OnEntityCreated_Unregister = void (*)(EntityCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntityCreated_Unregister __plugify_plugin_deadlock_sdk_OnEntityCreated_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Entity created listener hook
   * @param callback (function)
   */
  inline void OnEntityCreated_Unregister(EntityCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntityCreated_Unregister(callback);
  }

  using _OnEntitySpawned_Register = void (*)(EntityCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntitySpawned_Register __plugify_plugin_deadlock_sdk_OnEntitySpawned_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Entity spawned listener hook
   * @param callback (function)
   */
  inline void OnEntitySpawned_Register(EntityCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntitySpawned_Register(callback);
  }

  using _OnEntitySpawned_Unregister = void (*)(EntityCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntitySpawned_Unregister __plugify_plugin_deadlock_sdk_OnEntitySpawned_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Entity spawned listener hook
   * @param callback (function)
   */
  inline void OnEntitySpawned_Unregister(EntityCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntitySpawned_Unregister(callback);
  }

  using _OnEntityDeleted_Register = void (*)(EntityCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntityDeleted_Register __plugify_plugin_deadlock_sdk_OnEntityDeleted_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Entity deleted listener hook
   * @param callback (function)
   */
  inline void OnEntityDeleted_Register(EntityCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntityDeleted_Register(callback);
  }

  using _OnEntityDeleted_Unregister = void (*)(EntityCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntityDeleted_Unregister __plugify_plugin_deadlock_sdk_OnEntityDeleted_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Entity deleted listener hook
   * @param callback (function)
   */
  inline void OnEntityDeleted_Unregister(EntityCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntityDeleted_Unregister(callback);
  }

  using _OnGameStateChanged_Register = void (*)(GameStateChangedCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnGameStateChanged_Register __plugify_plugin_deadlock_sdk_OnGameStateChanged_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Game state change listener hook
   * @param callback (function)
   */
  inline void OnGameStateChanged_Register(GameStateChangedCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnGameStateChanged_Register(callback);
  }

  using _OnGameStateChanged_Unregister = void (*)(GameStateChangedCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnGameStateChanged_Unregister __plugify_plugin_deadlock_sdk_OnGameStateChanged_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Game state change listener hook
   * @param callback (function)
   */
  inline void OnGameStateChanged_Unregister(GameStateChangedCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnGameStateChanged_Unregister(callback);
  }

  using _OnEntityAcceptInput_Register = void (*)(EntityIOCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntityAcceptInput_Register __plugify_plugin_deadlock_sdk_OnEntityAcceptInput_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Entity AcceptInput listener hook
   * @param callback (function)
   */
  inline void OnEntityAcceptInput_Register(EntityIOCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntityAcceptInput_Register(callback);
  }

  using _OnEntityAcceptInput_Unregister = void (*)(EntityIOCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntityAcceptInput_Unregister __plugify_plugin_deadlock_sdk_OnEntityAcceptInput_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Entity AcceptInput listener hook
   * @param callback (function)
   */
  inline void OnEntityAcceptInput_Unregister(EntityIOCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntityAcceptInput_Unregister(callback);
  }

  using _OnNpcSelectSchedule_Register = void (*)(NpcSelectScheduleCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnNpcSelectSchedule_Register __plugify_plugin_deadlock_sdk_OnNpcSelectSchedule_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register NPC schedule selection listener hook
   * @param callback (function)
   */
  inline void OnNpcSelectSchedule_Register(NpcSelectScheduleCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnNpcSelectSchedule_Register(callback);
  }

  using _OnNpcSelectSchedule_Unregister = void (*)(NpcSelectScheduleCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnNpcSelectSchedule_Unregister __plugify_plugin_deadlock_sdk_OnNpcSelectSchedule_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister NPC schedule selection listener hook
   * @param callback (function)
   */
  inline void OnNpcSelectSchedule_Unregister(NpcSelectScheduleCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnNpcSelectSchedule_Unregister(callback);
  }

  using _OnEntityFireOutput_Register = void (*)(EntityOutputCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntityFireOutput_Register __plugify_plugin_deadlock_sdk_OnEntityFireOutput_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register Entity FireOutput listener hook
   * @param callback (function)
   */
  inline void OnEntityFireOutput_Register(EntityOutputCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntityFireOutput_Register(callback);
  }

  using _OnEntityFireOutput_Unregister = void (*)(EntityOutputCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnEntityFireOutput_Unregister __plugify_plugin_deadlock_sdk_OnEntityFireOutput_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister Entity FireOutput listener hook
   * @param callback (function)
   */
  inline void OnEntityFireOutput_Unregister(EntityOutputCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnEntityFireOutput_Unregister(callback);
  }

  using _OnProcessUsercmds_Register = void (*)(ProcessUsercmdsCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnProcessUsercmds_Register __plugify_plugin_deadlock_sdk_OnProcessUsercmds_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register CBasePlayerController::ProcessUsercmds listener hook
   * @param callback (function)
   */
  inline void OnProcessUsercmds_Register(ProcessUsercmdsCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnProcessUsercmds_Register(callback);
  }

  using _OnProcessUsercmds_Unregister = void (*)(ProcessUsercmdsCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnProcessUsercmds_Unregister __plugify_plugin_deadlock_sdk_OnProcessUsercmds_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister CBasePlayerController::ProcessUsercmds listener hook
   * @param callback (function)
   */
  inline void OnProcessUsercmds_Unregister(ProcessUsercmdsCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnProcessUsercmds_Unregister(callback);
  }

  using _OnAbilityThink_Register = void (*)(AbilityThinkCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnAbilityThink_Register __plugify_plugin_deadlock_sdk_OnAbilityThink_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register CCitadelPlayerPawn::AbilityThink listener hook
   * @param callback (function)
   */
  inline void OnAbilityThink_Register(AbilityThinkCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnAbilityThink_Register(callback);
  }

  using _OnAbilityThink_Unregister = void (*)(AbilityThinkCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnAbilityThink_Unregister __plugify_plugin_deadlock_sdk_OnAbilityThink_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister CCitadelPlayerPawn::AbilityThink listener hook
   * @param callback (function)
   */
  inline void OnAbilityThink_Unregister(AbilityThinkCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnAbilityThink_Unregister(callback);
  }

  using _OnAddModifier_Register = void (*)(AddModifierCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnAddModifier_Register __plugify_plugin_deadlock_sdk_OnAddModifier_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register CModifierProperty::AddModifier listener hook
   * @param callback (function)
   */
  inline void OnAddModifier_Register(AddModifierCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnAddModifier_Register(callback);
  }

  using _OnAddModifier_Unregister = void (*)(AddModifierCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnAddModifier_Unregister __plugify_plugin_deadlock_sdk_OnAddModifier_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister CModifierProperty::AddModifier listener hook
   * @param callback (function)
   */
  inline void OnAddModifier_Unregister(AddModifierCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnAddModifier_Unregister(callback);
  }

  using _OnHeroInitialized_Register = void (*)(HeroInitializedCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnHeroInitialized_Register __plugify_plugin_deadlock_sdk_OnHeroInitialized_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register CCitadelPlayerPawn::InitializeHeroOnPawn listener hook
   * @param callback (function)
   */
  inline void OnHeroInitialized_Register(HeroInitializedCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnHeroInitialized_Register(callback);
  }

  using _OnHeroInitialized_Unregister = void (*)(HeroInitializedCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnHeroInitialized_Unregister __plugify_plugin_deadlock_sdk_OnHeroInitialized_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister CCitadelPlayerPawn::InitializeHeroOnPawn listener hook
   * @param callback (function)
   */
  inline void OnHeroInitialized_Unregister(HeroInitializedCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnHeroInitialized_Unregister(callback);
  }

  using _OnGameEvent_Register = void (*)(GameEventCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnGameEvent_Register __plugify_plugin_deadlock_sdk_OnGameEvent_Register;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Register game event listener hook (e.g. player_death, player_respawned)
   * @param callback (function)
   */
  inline void OnGameEvent_Register(GameEventCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnGameEvent_Register(callback);
  }

  using _OnGameEvent_Unregister = void (*)(GameEventCallback);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_OnGameEvent_Unregister __plugify_plugin_deadlock_sdk_OnGameEvent_Unregister;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Unregister game event listener hook
   * @param callback (function)
   */
  inline void OnGameEvent_Unregister(GameEventCallback callback) {
    return __plugify_plugin_deadlock_sdk_OnGameEvent_Unregister(callback);
  }

} // namespace plugify_plugin_deadlock_sdk
