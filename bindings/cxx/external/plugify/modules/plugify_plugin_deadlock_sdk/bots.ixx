// Generated from plugify_plugin_deadlock_sdk.pplugin (group: bots)

export module plugify_plugin_deadlock_sdk.bots;
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

  using _BotCreate = int64_t (*)(const plg::string&, int32_t, float, float, float, bool);
  PLUGIFY_EXPORT _BotCreate __plugify_plugin_deadlock_sdk_BotCreate = nullptr;
  /**
   * @brief Spawn a bot hero into the match
   * @param heroName (string)
   * @param team (int32)
   * @param posX (float)
   * @param posY (float)
   * @param posZ (float)
   * @param assignLane (bool)
   * @return int64
   */

  int64_t BotCreate(const plg::string& heroName, int32_t team, float posX, float posY, float posZ, bool assignLane) {
    return __plugify_plugin_deadlock_sdk_BotCreate(heroName, team, posX, posY, posZ, assignLane);
  }

  using _BotGetBrain = int64_t (*)(int64_t);
  PLUGIFY_EXPORT _BotGetBrain __plugify_plugin_deadlock_sdk_BotGetBrain = nullptr;
  /**
   * @brief Get brain entity pointer for player bot pawn
   * @param pawn (int64)
   * @return int64
   */

  int64_t BotGetBrain(int64_t pawn) {
    return __plugify_plugin_deadlock_sdk_BotGetBrain(pawn);
  }

  using _BotGetPawn = int64_t (*)(int64_t);
  PLUGIFY_EXPORT _BotGetPawn __plugify_plugin_deadlock_sdk_BotGetPawn = nullptr;
  /**
   * @brief Get pawn entity controlled by bot brain
   * @param brain (int64)
   * @return int64
   */

  int64_t BotGetPawn(int64_t brain) {
    return __plugify_plugin_deadlock_sdk_BotGetPawn(brain);
  }

  using _BotSetLane = bool (*)(int64_t, int32_t);
  PLUGIFY_EXPORT _BotSetLane __plugify_plugin_deadlock_sdk_BotSetLane = nullptr;
  /**
   * @brief Assign lane index to bot
   * @param pawn (int64)
   * @param lane (int32)
   * @return bool
   */

  bool BotSetLane(int64_t pawn, int32_t lane) {
    return __plugify_plugin_deadlock_sdk_BotSetLane(pawn, lane);
  }

  using _BotGetLane = int32_t (*)(int64_t);
  PLUGIFY_EXPORT _BotGetLane __plugify_plugin_deadlock_sdk_BotGetLane = nullptr;
  /**
   * @brief Get assigned lane index of bot
   * @param pawn (int64)
   * @return int32
   */

  int32_t BotGetLane(int64_t pawn) {
    return __plugify_plugin_deadlock_sdk_BotGetLane(pawn);
  }

} // namespace plugify_plugin_deadlock_sdk
