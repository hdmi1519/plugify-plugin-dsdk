#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: heroes)

namespace plugify_plugin_deadlock_sdk {

  using _SelectHero = void (*)(int64_t, const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_SelectHero __plugify_plugin_deadlock_sdk_SelectHero;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Select a hero for controller
   * @param controller (int64)
   * @param heroName (string)
   */
  inline void SelectHero(int64_t controller, const plg::string& heroName) {
    return __plugify_plugin_deadlock_sdk_SelectHero(controller, heroName);
  }

  using _ResetHero = void (*)(int64_t, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ResetHero __plugify_plugin_deadlock_sdk_ResetHero;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Reset hero state on pawn
   * @param pawn (int64)
   * @param reset (bool)
   */
  inline void ResetHero(int64_t pawn, bool reset) {
    return __plugify_plugin_deadlock_sdk_ResetHero(pawn, reset);
  }

  using _PrecacheHero = void (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_PrecacheHero __plugify_plugin_deadlock_sdk_PrecacheHero;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Precache hero assets
   * @param heroName (string)
   */
  inline void PrecacheHero(const plg::string& heroName) {
    return __plugify_plugin_deadlock_sdk_PrecacheHero(heroName);
  }

  using _ForceRespawn = void (*)(int64_t, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_ForceRespawn __plugify_plugin_deadlock_sdk_ForceRespawn;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Force immediate hero pawn respawn
   * @param pawn (int64)
   * @param releaseButtons (bool)
   */
  inline void ForceRespawn(int64_t pawn, bool releaseButtons) {
    return __plugify_plugin_deadlock_sdk_ForceRespawn(pawn, releaseButtons);
  }

  using _GetHeroData = int64_t (*)(const plg::string&);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetHeroData __plugify_plugin_deadlock_sdk_GetHeroData;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Lookup hero definition pointer
   * @param heroName (string)
   * @return int64
   */
  inline int64_t GetHeroData(const plg::string& heroName) {
    return __plugify_plugin_deadlock_sdk_GetHeroData(heroName);
  }

  using _GetHeroName = plg::string (*)(int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_GetHeroName __plugify_plugin_deadlock_sdk_GetHeroName;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Get name of hero for pawn
   * @param pawn (int64)
   * @return string
   */
  inline plg::string GetHeroName(int64_t pawn) {
    return __plugify_plugin_deadlock_sdk_GetHeroName(pawn);
  }

} // namespace plugify_plugin_deadlock_sdk
