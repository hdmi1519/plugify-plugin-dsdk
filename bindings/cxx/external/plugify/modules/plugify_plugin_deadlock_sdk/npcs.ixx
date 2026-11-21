// Generated from plugify_plugin_deadlock_sdk.pplugin (group: npcs)

export module plugify_plugin_deadlock_sdk.npcs;
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

  using _NpcMoveTo = void (*)(int64_t, float, float, float, bool, float);
  PLUGIFY_EXPORT _NpcMoveTo __plugify_plugin_deadlock_sdk_NpcMoveTo = nullptr;
  /**
   * @brief Direct AI NPC to move to goal location
   * @param npc (int64)
   * @param x (float)
   * @param y (float)
   * @param z (float)
   * @param run (bool)
   * @param tolerance (float)
   */

  void NpcMoveTo(int64_t npc, float x, float y, float z, bool run, float tolerance) {
    return __plugify_plugin_deadlock_sdk_NpcMoveTo(npc, x, y, z, run, tolerance);
  }

  using _NpcStopMoving = void (*)(int64_t, bool);
  PLUGIFY_EXPORT _NpcStopMoving __plugify_plugin_deadlock_sdk_NpcStopMoving = nullptr;
  /**
   * @brief Stop movement of AI NPC
   * @param npc (int64)
   * @param instant (bool)
   */

  void NpcStopMoving(int64_t npc, bool instant) {
    return __plugify_plugin_deadlock_sdk_NpcStopMoving(npc, instant);
  }

  using _NpcSetEnemy = void (*)(int64_t, int64_t);
  PLUGIFY_EXPORT _NpcSetEnemy __plugify_plugin_deadlock_sdk_NpcSetEnemy = nullptr;
  /**
   * @brief Set target enemy entity of AI NPC
   * @param npc (int64)
   * @param enemy (int64)
   */

  void NpcSetEnemy(int64_t npc, int64_t enemy) {
    return __plugify_plugin_deadlock_sdk_NpcSetEnemy(npc, enemy);
  }

  using _NpcSetState = void (*)(int64_t, int32_t);
  PLUGIFY_EXPORT _NpcSetState __plugify_plugin_deadlock_sdk_NpcSetState = nullptr;
  /**
   * @brief Set NPC AI state
   * @param npc (int64)
   * @param state (int32)
   */

  void NpcSetState(int64_t npc, int32_t state) {
    return __plugify_plugin_deadlock_sdk_NpcSetState(npc, state);
  }

  using _NpcCreateTrooper = int64_t (*)(float, float, float, float, float, float, int32_t, int32_t, int32_t, bool);
  PLUGIFY_EXPORT _NpcCreateTrooper __plugify_plugin_deadlock_sdk_NpcCreateTrooper = nullptr;
  /**
   * @brief Spawn lane or neutral trooper NPC
   * @param posX (float)
   * @param posY (float)
   * @param posZ (float)
   * @param pitch (float)
   * @param yaw (float)
   * @param roll (float)
   * @param team (int32)
   * @param type (int32)
   * @param variant (int32)
   * @param snapToGround (bool)
   * @return int64
   */

  int64_t NpcCreateTrooper(float posX, float posY, float posZ, float pitch, float yaw, float roll, int32_t team, int32_t type, int32_t variant, bool snapToGround) {
    return __plugify_plugin_deadlock_sdk_NpcCreateTrooper(posX, posY, posZ, pitch, yaw, roll, team, type, variant, snapToGround);
  }

} // namespace plugify_plugin_deadlock_sdk
