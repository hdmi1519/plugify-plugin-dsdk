using System;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Plugify;

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: entityio)

namespace plugify_plugin_deadlock_sdk {
#pragma warning disable CS0649

	internal static unsafe partial class plugify_plugin_deadlock_sdk {

#region AcceptInput
		private static delegate*<long, string, long, long, string, void> _AcceptInput = &___AcceptInput;
		private static delegate* unmanaged[Cdecl]<long, String192*, long, long, String192*, void> __AcceptInput;
		private static void ___AcceptInput(long entity, string inputName, long activator, long caller, string value)
		{
			var __inputName = NativeMethods.ConstructString(inputName);
			var __value = NativeMethods.ConstructString(value);
			try {
				__AcceptInput(entity, &__inputName, activator, caller, &__value);
			}
			finally {
				// Perform cleanup.
				NativeMethods.DestroyString(&__inputName);
				NativeMethods.DestroyString(&__value);
			}
		}
#endregion AcceptInput
		/// <summary>
		/// Fire input on target entity
		/// </summary>
		/// <param name="entity">entity</param>
		/// <param name="inputName">inputName</param>
		/// <param name="activator">activator</param>
		/// <param name="caller">caller</param>
		/// <param name="value">value</param>
		internal static void AcceptInput(long entity, string inputName, long activator, long caller, string value)
		{
			_AcceptInput(entity, inputName, activator, caller, value);
		}

	}

#pragma warning restore CS0649
}
