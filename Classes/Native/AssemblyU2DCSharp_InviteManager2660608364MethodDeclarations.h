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

// InviteManager
struct InviteManager_t2660608364;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void InviteManager::.ctor()
extern "C"  void InviteManager__ctor_m239845565 (InviteManager_t2660608364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InviteManager InviteManager::get_Instance()
extern "C"  InviteManager_t2660608364 * InviteManager_get_Instance_m2197137330 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InviteManager::Awake()
extern "C"  void InviteManager_Awake_m3588323052 (InviteManager_t2660608364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InviteManager::Init()
extern "C"  void InviteManager_Init_m2353656227 (InviteManager_t2660608364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InviteManager::SendSMS(System.String)
extern "C"  void InviteManager_SendSMS_m2382603230 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InviteManager::SendMail(System.String,System.String)
extern "C"  void InviteManager_SendMail_m1362073628 (Il2CppObject * __this /* static, unused */, String_t* ___subject0, String_t* ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
