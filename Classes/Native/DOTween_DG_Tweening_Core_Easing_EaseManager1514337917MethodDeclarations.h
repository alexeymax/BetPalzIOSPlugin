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

// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.EaseFunction
struct EaseFunction_t3306356708;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "DOTween_DG_Tweening_EaseFunction3306356708.h"

// System.Single DG.Tweening.Core.Easing.EaseManager::Evaluate(DG.Tweening.Tween,System.Single,System.Single,System.Single,System.Single)
extern "C"  float EaseManager_Evaluate_m1048646038 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, float ___time1, float ___duration2, float ___overshootOrAmplitude3, float ___period4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Core.Easing.EaseManager::Evaluate(DG.Tweening.Ease,DG.Tweening.EaseFunction,System.Single,System.Single,System.Single,System.Single)
extern "C"  float EaseManager_Evaluate_m74870165 (Il2CppObject * __this /* static, unused */, int32_t ___easeType0, EaseFunction_t3306356708 * ___customEase1, float ___time2, float ___duration3, float ___overshootOrAmplitude4, float ___period5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.EaseFunction DG.Tweening.Core.Easing.EaseManager::ToEaseFunction(DG.Tweening.Ease)
extern "C"  EaseFunction_t3306356708 * EaseManager_ToEaseFunction_m1173633506 (Il2CppObject * __this /* static, unused */, int32_t ___ease0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.Easing.EaseManager::IsFlashEase(DG.Tweening.Ease)
extern "C"  bool EaseManager_IsFlashEase_m2818956000 (Il2CppObject * __this /* static, unused */, int32_t ___ease0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
