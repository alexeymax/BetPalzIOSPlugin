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

// ScreenManager
struct ScreenManager_t4294768521;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ScreenManager_ShowDirection2411411662.h"

// System.Void ScreenManager::.ctor()
extern "C"  void ScreenManager__ctor_m3524775574 (ScreenManager_t4294768521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ScreenManager ScreenManager::get_Instance()
extern "C"  ScreenManager_t4294768521 * ScreenManager_get_Instance_m4240159378 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::Awake()
extern "C"  void ScreenManager_Awake_m935235093 (ScreenManager_t4294768521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::Init()
extern "C"  void ScreenManager_Init_m1510749766 (ScreenManager_t4294768521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::Start()
extern "C"  void ScreenManager_Start_m656255310 (ScreenManager_t4294768521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::Update()
extern "C"  void ScreenManager_Update_m3212657169 (ScreenManager_t4294768521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::HideScreen(System.String,ScreenManager/ShowDirection,System.Boolean)
extern "C"  void ScreenManager_HideScreen_m122519379 (ScreenManager_t4294768521 * __this, String_t* ___screenName0, int32_t ___direction1, bool ___setInactive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::ShowScreen(System.String,ScreenManager/ShowDirection)
extern "C"  void ScreenManager_ShowScreen_m3229683847 (ScreenManager_t4294768521 * __this, String_t* ___screenName0, int32_t ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
