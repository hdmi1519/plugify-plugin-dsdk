// Generated from plugify_plugin_deadlock_sdk.pplugin (group: currency)

export module plugify_plugin_deadlock_sdk.currency;
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

  using _ModifyCurrency = void (*)(int64_t, ECurrencyType, int32_t, ECurrencySource, bool, bool, bool, int64_t, int64_t);
  PLUGIFY_EXPORT _ModifyCurrency __plugify_plugin_deadlock_sdk_ModifyCurrency = nullptr;
  /**
   * @brief Modify currency (souls/gold) for player pawn
   * @param pawn (int64)
   * @param currencyType (uint32)
   * @param amount (int32)
   * @param source (uint32)
   * @param silent (bool)
   * @param forceGain (bool)
   * @param spendOnly (bool)
   * @param sourceAbility (int64)
   * @param sourceEntity (int64)
   */

  void ModifyCurrency(int64_t pawn, ECurrencyType currencyType, int32_t amount, ECurrencySource source, bool silent, bool forceGain, bool spendOnly, int64_t sourceAbility, int64_t sourceEntity) {
    return __plugify_plugin_deadlock_sdk_ModifyCurrency(pawn, currencyType, amount, source, silent, forceGain, spendOnly, sourceAbility, sourceEntity);
  }

  using _GetCurrency = int32_t (*)(int64_t, ECurrencyType);
  PLUGIFY_EXPORT _GetCurrency __plugify_plugin_deadlock_sdk_GetCurrency = nullptr;
  /**
   * @brief Get current currency value of pawn
   * @param pawn (int64)
   * @param currencyType (uint32)
   * @return int32
   */

  int32_t GetCurrency(int64_t pawn, ECurrencyType currencyType) {
    return __plugify_plugin_deadlock_sdk_GetCurrency(pawn, currencyType);
  }

} // namespace plugify_plugin_deadlock_sdk
