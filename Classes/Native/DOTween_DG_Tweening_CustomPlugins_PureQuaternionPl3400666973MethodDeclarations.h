#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DG.Tweening.CustomPlugins.PureQuaternionPlugin
struct PureQuaternionPlugin_t3400666973;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t102288586;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t1517212764;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t1393335608;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions2508431845.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// DG.Tweening.CustomPlugins.PureQuaternionPlugin DG.Tweening.CustomPlugins.PureQuaternionPlugin::Plug()
extern "C"  PureQuaternionPlugin_t3400666973 * PureQuaternionPlugin_Plug_m3044542140 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void PureQuaternionPlugin_Reset_m1622149370 (PureQuaternionPlugin_t3400666973 * __this, TweenerCore_3_t102288586 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>,System.Boolean)
extern "C"  void PureQuaternionPlugin_SetFrom_m4265139358 (PureQuaternionPlugin_t3400666973 * __this, TweenerCore_3_t102288586 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion DG.Tweening.CustomPlugins.PureQuaternionPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>,UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  PureQuaternionPlugin_ConvertToStartValue_m707750533 (PureQuaternionPlugin_t3400666973 * __this, TweenerCore_3_t102288586 * ___t0, Quaternion_t4030073918  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void PureQuaternionPlugin_SetRelativeEndValue_m487649591 (PureQuaternionPlugin_t3400666973 * __this, TweenerCore_3_t102288586 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void PureQuaternionPlugin_SetChangeValue_m1416200996 (PureQuaternionPlugin_t3400666973 * __this, TweenerCore_3_t102288586 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.CustomPlugins.PureQuaternionPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,UnityEngine.Quaternion)
extern "C"  float PureQuaternionPlugin_GetSpeedBasedDuration_m2190623658 (PureQuaternionPlugin_t3400666973 * __this, NoOptions_t2508431845  ___options0, float ___unitsXSecond1, Quaternion_t4030073918  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>,DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>,System.Single,UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void PureQuaternionPlugin_EvaluateAndApply_m1454595347 (PureQuaternionPlugin_t3400666973 * __this, NoOptions_t2508431845  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t1517212764 * ___getter3, DOSetter_1_t1393335608 * ___setter4, float ___elapsed5, Quaternion_t4030073918  ___startValue6, Quaternion_t4030073918  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::.ctor()
extern "C"  void PureQuaternionPlugin__ctor_m2869270851 (PureQuaternionPlugin_t3400666973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
