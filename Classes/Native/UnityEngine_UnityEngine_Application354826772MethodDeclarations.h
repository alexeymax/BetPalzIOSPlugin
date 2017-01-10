﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.Application/LogCallback
struct LogCallback_t1867914413;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1869584967.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Application_LogCallback1867914413.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"

// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m4091950718 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m2474583393 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m3989224144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C"  String_t* Application_get_persistentDataPath_m3129298355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::ObjectToJSString(System.Object)
extern "C"  String_t* Application_ObjectToJSString_m602192936 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ExternalCall(System.String,System.Object[])
extern "C"  void Application_ExternalCall_m3669435144 (Il2CppObject * __this /* static, unused */, String_t* ___functionName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::BuildInvocationForArguments(System.String,System.Object[])
extern "C"  String_t* Application_BuildInvocationForArguments_m2664585189 (Il2CppObject * __this /* static, unused */, String_t* ___functionName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ExternalEval(System.String)
extern "C"  void Application_ExternalEval_m2388671608 (Il2CppObject * __this /* static, unused */, String_t* ___script0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Internal_ExternalCall(System.String)
extern "C"  void Application_Internal_ExternalCall_m3784191708 (Il2CppObject * __this /* static, unused */, String_t* ___script0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C"  void Application_OpenURL_m3882634228 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m2941880625 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C"  void Application_add_logMessageReceived_m2712372862 (Il2CppObject * __this /* static, unused */, LogCallback_t1867914413 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C"  void Application_remove_logMessageReceived_m3667144081 (Il2CppObject * __this /* static, unused */, LogCallback_t1867914413 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern "C"  void Application_add_logMessageReceivedThreaded_m248661121 (Il2CppObject * __this /* static, unused */, LogCallback_t1867914413 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern "C"  void Application_remove_logMessageReceivedThreaded_m270214502 (Il2CppObject * __this /* static, unused */, LogCallback_t1867914413 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C"  void Application_CallLogCallback_m3408386792 (Il2CppObject * __this /* static, unused */, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, bool ___invokedOnMainThread3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean)
extern "C"  void Application_SetLogCallbackDefined_m3885724164 (Il2CppObject * __this /* static, unused */, bool ___defined0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
extern "C"  void Application_RegisterLogCallback_m3043682098 (Il2CppObject * __this /* static, unused */, LogCallback_t1867914413 * ___handler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback,System.Boolean)
extern "C"  void Application_RegisterLogCallback_m1373744051 (Il2CppObject * __this /* static, unused */, LogCallback_t1867914413 * ___handler0, bool ___threaded1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
