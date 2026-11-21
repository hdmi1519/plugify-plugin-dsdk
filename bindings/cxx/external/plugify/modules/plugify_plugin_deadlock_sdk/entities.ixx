// Generated from plugify_plugin_deadlock_sdk.pplugin (group: entities)

export module plugify_plugin_deadlock_sdk.entities;
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

  using _CreateEntityByName = int64_t (*)(const plg::string&);
  PLUGIFY_EXPORT _CreateEntityByName __plugify_plugin_deadlock_sdk_CreateEntityByName = nullptr;
  /**
   * @brief Create entity instance by class name
   * @param className (string)
   * @return int64
   */

  int64_t CreateEntityByName(const plg::string& className) {
    return __plugify_plugin_deadlock_sdk_CreateEntityByName(className);
  }

  using _QueueSpawnEntity = void (*)(int64_t, int64_t);
  PLUGIFY_EXPORT _QueueSpawnEntity __plugify_plugin_deadlock_sdk_QueueSpawnEntity = nullptr;
  /**
   * @brief Queue entity spawn with optional entity keyvalues
   * @param entity (int64)
   * @param ekv (int64)
   */

  void QueueSpawnEntity(int64_t entity, int64_t ekv) {
    return __plugify_plugin_deadlock_sdk_QueueSpawnEntity(entity, ekv);
  }

  using _ExecuteQueuedCreation = void (*)();
  PLUGIFY_EXPORT _ExecuteQueuedCreation __plugify_plugin_deadlock_sdk_ExecuteQueuedCreation = nullptr;
  /**
   * @brief Execute queued entity creation
   */

  void ExecuteQueuedCreation() {
    return __plugify_plugin_deadlock_sdk_ExecuteQueuedCreation();
  }

  using _RemoveEntity = void (*)(int64_t);
  PLUGIFY_EXPORT _RemoveEntity __plugify_plugin_deadlock_sdk_RemoveEntity = nullptr;
  /**
   * @brief Remove/destroy entity
   * @param entity (int64)
   */

  void RemoveEntity(int64_t entity) {
    return __plugify_plugin_deadlock_sdk_RemoveEntity(entity);
  }

  using _GetEntityByIndex = int64_t (*)(int32_t);
  PLUGIFY_EXPORT _GetEntityByIndex __plugify_plugin_deadlock_sdk_GetEntityByIndex = nullptr;
  /**
   * @brief Get entity pointer by index
   * @param index (int32)
   * @return int64
   */

  int64_t GetEntityByIndex(int32_t index) {
    return __plugify_plugin_deadlock_sdk_GetEntityByIndex(index);
  }

  using _GetEntityFromHandle = int64_t (*)(uint32_t);
  PLUGIFY_EXPORT _GetEntityFromHandle __plugify_plugin_deadlock_sdk_GetEntityFromHandle = nullptr;
  /**
   * @brief Resolve entity pointer from uint32 handle
   * @param handle (uint32)
   * @return int64
   */

  int64_t GetEntityFromHandle(uint32_t handle) {
    return __plugify_plugin_deadlock_sdk_GetEntityFromHandle(handle);
  }

  using _GetEntityHandle = uint32_t (*)(int64_t);
  PLUGIFY_EXPORT _GetEntityHandle __plugify_plugin_deadlock_sdk_GetEntityHandle = nullptr;
  /**
   * @brief Get handle of entity
   * @param entity (int64)
   * @return uint32
   */

  uint32_t GetEntityHandle(int64_t entity) {
    return __plugify_plugin_deadlock_sdk_GetEntityHandle(entity);
  }

  using _FindEntityByName = int64_t (*)(int64_t, const plg::string&);
  PLUGIFY_EXPORT _FindEntityByName __plugify_plugin_deadlock_sdk_FindEntityByName = nullptr;
  /**
   * @brief Find entity by name
   * @param startEntity (int64)
   * @param name (string)
   * @return int64
   */

  int64_t FindEntityByName(int64_t startEntity, const plg::string& name) {
    return __plugify_plugin_deadlock_sdk_FindEntityByName(startEntity, name);
  }

  using _GetEntityDesignerName = plg::string (*)(int64_t);
  PLUGIFY_EXPORT _GetEntityDesignerName __plugify_plugin_deadlock_sdk_GetEntityDesignerName = nullptr;
  /**
   * @brief Get designer name of entity
   * @param entity (int64)
   * @return string
   */

  plg::string GetEntityDesignerName(int64_t entity) {
    return __plugify_plugin_deadlock_sdk_GetEntityDesignerName(entity);
  }

  using _GetEntityClassname = plg::string (*)(int64_t);
  PLUGIFY_EXPORT _GetEntityClassname __plugify_plugin_deadlock_sdk_GetEntityClassname = nullptr;
  /**
   * @brief Get class name of entity
   * @param entity (int64)
   * @return string
   */

  plg::string GetEntityClassname(int64_t entity) {
    return __plugify_plugin_deadlock_sdk_GetEntityClassname(entity);
  }

  using _Teleport = void (*)(int64_t, float, float, float, float, float, float, float, float, float);
  PLUGIFY_EXPORT _Teleport __plugify_plugin_deadlock_sdk_Teleport = nullptr;
  /**
   * @brief Teleport entity with position, angles and velocity
   * @param entity (int64)
   * @param posX (float)
   * @param posY (float)
   * @param posZ (float)
   * @param angPitch (float)
   * @param angYaw (float)
   * @param angRoll (float)
   * @param velX (float)
   * @param velY (float)
   * @param velZ (float)
   */

  void Teleport(int64_t entity, float posX, float posY, float posZ, float angPitch, float angYaw, float angRoll, float velX, float velY, float velZ) {
    return __plugify_plugin_deadlock_sdk_Teleport(entity, posX, posY, posZ, angPitch, angYaw, angRoll, velX, velY, velZ);
  }

  using _SetModel = void (*)(int64_t, const plg::string&);
  PLUGIFY_EXPORT _SetModel __plugify_plugin_deadlock_sdk_SetModel = nullptr;
  /**
   * @brief Set visual model of entity
   * @param entity (int64)
   * @param modelName (string)
   */

  void SetModel(int64_t entity, const plg::string& modelName) {
    return __plugify_plugin_deadlock_sdk_SetModel(entity, modelName);
  }

  using _GetModelName = plg::string (*)(int64_t);
  PLUGIFY_EXPORT _GetModelName __plugify_plugin_deadlock_sdk_GetModelName = nullptr;
  /**
   * @brief Get model name of entity
   * @param entity (int64)
   * @return string
   */

  plg::string GetModelName(int64_t entity) {
    return __plugify_plugin_deadlock_sdk_GetModelName(entity);
  }

  using _SetScale = void (*)(int64_t, float);
  PLUGIFY_EXPORT _SetScale __plugify_plugin_deadlock_sdk_SetScale = nullptr;
  /**
   * @brief Set visual scale of entity
   * @param entity (int64)
   * @param scale (float)
   */

  void SetScale(int64_t entity, float scale) {
    return __plugify_plugin_deadlock_sdk_SetScale(entity, scale);
  }

  using _SetMoveType = void (*)(int64_t, uint8_t);
  PLUGIFY_EXPORT _SetMoveType __plugify_plugin_deadlock_sdk_SetMoveType = nullptr;
  /**
   * @brief Set entity move type
   * @param entity (int64)
   * @param moveType (uint8)
   */

  void SetMoveType(int64_t entity, uint8_t moveType) {
    return __plugify_plugin_deadlock_sdk_SetMoveType(entity, moveType);
  }

  using _SetGravityScale = void (*)(int64_t, float);
  PLUGIFY_EXPORT _SetGravityScale __plugify_plugin_deadlock_sdk_SetGravityScale = nullptr;
  /**
   * @brief Set entity gravity multiplier
   * @param entity (int64)
   * @param scale (float)
   */

  void SetGravityScale(int64_t entity, float scale) {
    return __plugify_plugin_deadlock_sdk_SetGravityScale(entity, scale);
  }

  using _EntityDerivesFrom = bool (*)(int64_t, const plg::string&);
  PLUGIFY_EXPORT _EntityDerivesFrom __plugify_plugin_deadlock_sdk_EntityDerivesFrom = nullptr;
  /**
   * @brief Check if entity class derives from base class name
   * @param entity (int64)
   * @param baseClassName (string)
   * @return bool
   */

  bool EntityDerivesFrom(int64_t entity, const plg::string& baseClassName) {
    return __plugify_plugin_deadlock_sdk_EntityDerivesFrom(entity, baseClassName);
  }

} // namespace plugify_plugin_deadlock_sdk
