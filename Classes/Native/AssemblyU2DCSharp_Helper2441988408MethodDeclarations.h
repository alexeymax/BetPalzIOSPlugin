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

// Helper
struct Helper_t2441988408;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Action`1<System.Int64>
struct Action_1_t710877419;
// System.Action
struct Action_t3226471752;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Helper::.ctor()
extern "C"  void Helper__ctor_m1471244829 (Helper_t2441988408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Helper Helper::get_Instance()
extern "C"  Helper_t2441988408 * Helper_get_Instance_m3580103406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper::Awake()
extern "C"  void Helper_Awake_m2103062664 (Helper_t2441988408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper::Start()
extern "C"  void Helper_Start_m1514766213 (Helper_t2441988408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper::Update()
extern "C"  void Helper_Update_m2645316166 (Helper_t2441988408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Helper::FormatStringWithKM(System.String,System.Int32)
extern "C"  String_t* Helper_FormatStringWithKM_m2793768605 (Il2CppObject * __this /* static, unused */, String_t* ___inputString0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Helper::animateNumber(System.Int64,System.Int64,System.Single,System.Action`1<System.Int64>,System.Action)
extern "C"  Il2CppObject * Helper_animateNumber_m439474495 (Helper_t2441988408 * __this, int64_t ___fromN0, int64_t ___toN1, float ___time2, Action_1_t710877419 * ___onCurrentNumberChanged3, Action_t3226471752 * ___onComplete4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Helper::AnimateNumber(System.Int64,System.Int64,System.Single,System.Action`1<System.Int64>,System.Action)
extern "C"  Il2CppObject * Helper_AnimateNumber_m4120761439 (Il2CppObject * __this /* static, unused */, int64_t ___from0, int64_t ___to1, float ___time2, Action_1_t710877419 * ___currentNumber3, Action_t3226471752 * ___onComplete4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas Helper::TopCanvasInParent(UnityEngine.GameObject)
extern "C"  Canvas_t209405766 * Helper_TopCanvasInParent_m4130956473 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Helper::AngleTo180(System.Single)
extern "C"  float Helper_AngleTo180_m3889834817 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Helper::AngleTo360(System.Single)
extern "C"  float Helper_AngleTo360_m2179714793 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
