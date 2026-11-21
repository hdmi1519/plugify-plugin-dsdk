// Generated from plugify_plugin_deadlock_sdk.pplugin (group: heroes)

export module plugify_plugin_deadlock_sdk.heroes;
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

  using _SelectHero = void (*)(int64_t, const plg::string&);
  PLUGIFY_EXPORT _SelectHero __plugify_plugin_deadlock_sdk_SelectHero = nullptr;
  /**
   * @brief Select a hero for controller
   * @param controller (int64)
   * @param heroName (string)
   */

  void SelectHero(int64_t controller, const plg::string& heroName) {
    return __plugify_plugin_deadlock_sdk_SelectHero(controller, heroName);
  }

  using _ResetHero = void (*)(int64_t, bool);
  PLUGIFY_EXPORT _ResetHero __plugify_plugin_deadlock_sdk_ResetHero = nullptr;
  /**
   * @brief Reset hero state on pawn
   * @param pawn (int64)
   * @param reset (bool)
   */

  void ResetHero(int64_t pawn, bool reset) {
    return __plugify_plugin_deadlock_sdk_ResetHero(pawn, reset);
  }

  using _PrecacheHero = void (*)(const plg::string&);
  PLUGIFY_EXPORT _PrecacheHero __plugify_plugin_deadlock_sdk_PrecacheHero = nullptr;
  /**
   * @brief Precache hero assets
   * @param heroName (string)
   */

  void PrecacheHero(const plg::string& heroName) {
    return __plugify_plugin_deadlock_sdk_PrecacheHero(heroName);
  }

  using _ForceRespawn = void (*)(int64_t, bool);
  PLUGIFY_EXPORT _ForceRespawn __plugify_plugin_deadlock_sdk_ForceRespawn = nullptr;
  /**
   * @brief Force immediate hero pawn respawn
   * @param pawn (int64)
   * @param releaseButtons (bool)
   */

  void ForceRespawn(int64_t pawn, bool releaseButtons) {
    return __plugify_plugin_deadlock_sdk_ForceRespawn(pawn, releaseButtons);
  }

  using _GetHeroData = int64_t (*)(const plg::string&);
  PLUGIFY_EXPORT _GetHeroData __plugify_plugin_deadlock_sdk_GetHeroData = nullptr;
  /**
   * @brief Lookup hero definition pointer
   * @param heroName (string)
   * @return int64
   */

  int64_t GetHeroData(const plg::string& heroName) {
    return __plugify_plugin_deadlock_sdk_GetHeroData(heroName);
  }

  using _GetHeroName = plg::string (*)(int64_t);
  PLUGIFY_EXPORT _GetHeroName __plugify_plugin_deadlock_sdk_GetHeroName = nullptr;
  /**
   * @brief Get name of hero for pawn
   * @param pawn (int64)
   * @return string
   */

  plg::string GetHeroName(int64_t pawn) {
    return __plugify_plugin_deadlock_sdk_GetHeroName(pawn);
  }

} // namespace plugify_plugin_deadlock_sdk
