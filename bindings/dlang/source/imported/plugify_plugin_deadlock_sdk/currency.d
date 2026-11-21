module imported.plugify_plugin_deadlock_sdk.currency;

import plugify.internals;
public import plugify;
public import imported.plugify_plugin_deadlock_sdk.enums;
public import imported.plugify_plugin_deadlock_sdk.aliases;
public import imported.plugify_plugin_deadlock_sdk.delegates;
import std.exception : enforce;
import std.algorithm.mutation : swap;

/++
	Modify currency (souls/gold) for player pawn

	Params:
		pawn = 
		currencyType = 
		amount = 
		source = 
		silent = 
		forceGain = 
		spendOnly = 
		sourceAbility = 
		sourceEntity = 
+/
void ModifyCurrency(long pawn, ECurrencyType currencyType, int amount, ECurrencySource source, bool silent, bool forceGain, bool spendOnly, long sourceAbility, long sourceEntity) {
	__plugify_plugin_deadlock_sdk_ModifyCurrency(pawn, currencyType, amount, source, silent, forceGain, spendOnly, sourceAbility, sourceEntity);
}
alias _ModifyCurrency = extern (C) void function(long pawn, ECurrencyType currencyType, int amount, ECurrencySource source, bool silent, bool forceGain, bool spendOnly, long sourceAbility, long sourceEntity);
export __gshared _ModifyCurrency __plugify_plugin_deadlock_sdk_ModifyCurrency = null;

/++
	Get current currency value of pawn

	Params:
		pawn = 
		currencyType = 

	Returns:
		Return value
+/
int GetCurrency(long pawn, ECurrencyType currencyType) {
	return __plugify_plugin_deadlock_sdk_GetCurrency(pawn, currencyType);
}
alias _GetCurrency = extern (C) int function(long pawn, ECurrencyType currencyType);
export __gshared _GetCurrency __plugify_plugin_deadlock_sdk_GetCurrency = null;

