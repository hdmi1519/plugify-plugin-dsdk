package plugify_plugin_deadlock_sdk

import "runtime/debug"

var buildInfo, _ = debug.ReadBuildInfo()
var ModuleName = buildInfo.Main.Path
