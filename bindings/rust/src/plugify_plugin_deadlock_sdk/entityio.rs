// Generated from plugify_plugin_deadlock_sdk.pplugin (group: entityio)

#[allow(unused_imports)]
use std::sync::RwLock;
#[allow(unused_imports)]
use super::enums::*;
#[allow(unused_imports)]
use super::aliases::*;
#[allow(unused_imports)]
use super::delegates::*;
#[allow(unused_imports)]
use plugify::{scope, Str, Arr, Var, Vec2, Vec3, Vec4, Mat4x4};

/// Fire input on target entity
///
/// # Arguments
/// * `entity` - (int64)
/// * `inputName` - (string)
/// * `activator` - (int64)
/// * `caller` - (int64)
/// * `value` - (string)
#[track_caller]
#[allow(dead_code, non_snake_case)]
pub fn AcceptInput(entity: i64, inputName: &Str, activator: i64, caller: i64, value: &Str) {
    unsafe { __plugify_plugin_deadlock_sdk_AcceptInput.expect("AcceptInput function was not found")(entity, inputName, activator, caller, value) }
}
pub type _AcceptInput = unsafe extern "C" fn(i64, &Str, i64, i64, &Str);
#[allow(dead_code, non_upper_case_globals)]
#[unsafe(no_mangle)]
pub static mut __plugify_plugin_deadlock_sdk_AcceptInput: Option<_AcceptInput> = None;

