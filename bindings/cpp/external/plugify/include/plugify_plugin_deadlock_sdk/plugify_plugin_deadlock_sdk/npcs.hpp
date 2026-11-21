#pragma once

#include "enums.hpp"
#include "aliases.hpp"
#include "delegates.hpp"
#include <plugin_export.h>

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: npcs)

namespace plugify_plugin_deadlock_sdk {

  using _NpcMoveTo = void (*)(int64_t, float, float, float, bool, float);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_NpcMoveTo __plugify_plugin_deadlock_sdk_NpcMoveTo;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Direct AI NPC to move to goal location
   * @param npc (int64)
   * @param x (float)
   * @param y (float)
   * @param z (float)
   * @param run (bool)
   * @param tolerance (float)
   */
  inline void NpcMoveTo(int64_t npc, float x, float y, float z, bool run, float tolerance) {
    return __plugify_plugin_deadlock_sdk_NpcMoveTo(npc, x, y, z, run, tolerance);
  }

  using _NpcStopMoving = void (*)(int64_t, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_NpcStopMoving __plugify_plugin_deadlock_sdk_NpcStopMoving;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Stop movement of AI NPC
   * @param npc (int64)
   * @param instant (bool)
   */
  inline void NpcStopMoving(int64_t npc, bool instant) {
    return __plugify_plugin_deadlock_sdk_NpcStopMoving(npc, instant);
  }

  using _NpcSetEnemy = void (*)(int64_t, int64_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_NpcSetEnemy __plugify_plugin_deadlock_sdk_NpcSetEnemy;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set target enemy entity of AI NPC
   * @param npc (int64)
   * @param enemy (int64)
   */
  inline void NpcSetEnemy(int64_t npc, int64_t enemy) {
    return __plugify_plugin_deadlock_sdk_NpcSetEnemy(npc, enemy);
  }

  using _NpcSetState = void (*)(int64_t, int32_t);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_NpcSetState __plugify_plugin_deadlock_sdk_NpcSetState;
namespace plugify_plugin_deadlock_sdk {
  /**
   * @brief Set NPC AI state
   * @param npc (int64)
   * @param state (int32)
   */
  inline void NpcSetState(int64_t npc, int32_t state) {
    return __plugify_plugin_deadlock_sdk_NpcSetState(npc, state);
  }

  using _NpcCreateTrooper = int64_t (*)(float, float, float, float, float, float, int32_t, int32_t, int32_t, bool);
}
extern "C" PLUGIN_API plugify_plugin_deadlock_sdk::_NpcCreateTrooper __plugify_plugin_deadlock_sdk_NpcCreateTrooper;
namespace plugify_plugin_deadlock_sdk {
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
  inline int64_t NpcCreateTrooper(float posX, float posY, float posZ, float pitch, float yaw, float roll, int32_t team, int32_t type, int32_t variant, bool snapToGround) {
    return __plugify_plugin_deadlock_sdk_NpcCreateTrooper(posX, posY, posZ, pitch, yaw, roll, team, type, variant, snapToGround);
  }

} // namespace plugify_plugin_deadlock_sdk
