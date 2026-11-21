using System;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Plugify;

// Generated from plugify_plugin_deadlock_sdk.pplugin (group: precaching)

namespace plugify_plugin_deadlock_sdk {
#pragma warning disable CS0649

	internal static unsafe partial class plugify_plugin_deadlock_sdk {

#region PrecacheResource
		private static delegate*<string, void> _PrecacheResource = &___PrecacheResource;
		private static delegate* unmanaged[Cdecl]<String192*, void> __PrecacheResource;
		private static void ___PrecacheResource(string path)
		{
			var __path = NativeMethods.ConstructString(path);
			try {
				__PrecacheResource(&__path);
			}
			finally {
				// Perform cleanup.
				NativeMethods.DestroyString(&__path);
			}
		}
#endregion PrecacheResource
		/// <summary>
		/// Precache resource by VPK path
		/// </summary>
		/// <param name="path">path</param>
		internal static void PrecacheResource(string path)
		{
			_PrecacheResource(path);
		}

#region PrecacheModel
		private static delegate*<string, void> _PrecacheModel = &___PrecacheModel;
		private static delegate* unmanaged[Cdecl]<String192*, void> __PrecacheModel;
		private static void ___PrecacheModel(string modelPath)
		{
			var __modelPath = NativeMethods.ConstructString(modelPath);
			try {
				__PrecacheModel(&__modelPath);
			}
			finally {
				// Perform cleanup.
				NativeMethods.DestroyString(&__modelPath);
			}
		}
#endregion PrecacheModel
		/// <summary>
		/// Precache model resource
		/// </summary>
		/// <param name="modelPath">modelPath</param>
		internal static void PrecacheModel(string modelPath)
		{
			_PrecacheModel(modelPath);
		}

	}

#pragma warning restore CS0649
}
