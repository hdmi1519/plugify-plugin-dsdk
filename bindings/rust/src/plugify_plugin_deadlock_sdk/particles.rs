// Generated from plugify_plugin_deadlock_sdk.pplugin (group: particles)

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

/// Create and dispatch particle effect
///
/// # Arguments
/// * `particleName` - (string)
/// * `attachType` - (int32)
/// * `entity` - (int64)
#[track_caller]
#[allow(dead_code, non_snake_case)]
pub fn CreateParticle(particleName: &Str, attachType: i32, entity: i64) -> i64 {
    unsafe { __plugify_plugin_deadlock_sdk_CreateParticle.expect("CreateParticle function was not found")(particleName, attachType, entity) }
}
pub type _CreateParticle = unsafe extern "C" fn(&Str, i32, i64) -> i64;
#[allow(dead_code, non_upper_case_globals)]
#[unsafe(no_mangle)]
pub static mut __plugify_plugin_deadlock_sdk_CreateParticle: Option<_CreateParticle> = None;

/// Destroy active particle instance
///
/// # Arguments
/// * `particle` - (int64)
/// * `destroyImmediately` - (bool)
#[track_caller]
#[allow(dead_code, non_snake_case)]
pub fn DestroyParticle(particle: i64, destroyImmediately: bool) {
    unsafe { __plugify_plugin_deadlock_sdk_DestroyParticle.expect("DestroyParticle function was not found")(particle, destroyImmediately) }
}
pub type _DestroyParticle = unsafe extern "C" fn(i64, bool);
#[allow(dead_code, non_upper_case_globals)]
#[unsafe(no_mangle)]
pub static mut __plugify_plugin_deadlock_sdk_DestroyParticle: Option<_DestroyParticle> = None;

