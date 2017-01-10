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

// BetpalzSDK.Network.NetworkManager
struct NetworkManager_t263083499;
// BetpalzSDK.Network.OnResponseAvailable
struct OnResponseAvailable_t1367027337;
// BetpalzSDK.Network.DataFetcher
struct DataFetcher_t2999813701;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// BetpalzSDK.Network.OnReceivedResponse
struct OnReceivedResponse_t3573330051;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Network_OnResponseAva1367027337.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Network_DataFetcher2999813701.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Network_OnReceivedRes3573330051.h"

// System.Void BetpalzSDK.Network.NetworkManager::.ctor()
extern "C"  void NetworkManager__ctor_m576569644 (NetworkManager_t263083499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Network.NetworkManager BetpalzSDK.Network.NetworkManager::get_Instance()
extern "C"  NetworkManager_t263083499 * NetworkManager_get_Instance_m1079558034 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.NetworkManager::Awake()
extern "C"  void NetworkManager_Awake_m1840900069 (NetworkManager_t263083499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.NetworkManager::AddResponseAvailableListener(BetpalzSDK.Network.OnResponseAvailable)
extern "C"  void NetworkManager_AddResponseAvailableListener_m3770386414 (NetworkManager_t263083499 * __this, OnResponseAvailable_t1367027337 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.NetworkManager::RemoveResponseAvailableListener(BetpalzSDK.Network.OnResponseAvailable)
extern "C"  void NetworkManager_RemoveResponseAvailableListener_m3913152507 (NetworkManager_t263083499 * __this, OnResponseAvailable_t1367027337 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Network.NetworkManager::CallResponseAvailable(BetpalzSDK.Network.DataFetcher)
extern "C"  bool NetworkManager_CallResponseAvailable_m1170741249 (NetworkManager_t263083499 * __this, DataFetcher_t2999813701 * ___dataFetcher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.NetworkManager::StartRequest(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,BetpalzSDK.Network.OnReceivedResponse)
extern "C"  void NetworkManager_StartRequest_m333708307 (NetworkManager_t263083499 * __this, String_t* ___url0, Dictionary_2_t309261261 * ___postJsonBodyData1, OnReceivedResponse_t3573330051 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.NetworkManager::StopAllRequests()
extern "C"  void NetworkManager_StopAllRequests_m1123110719 (NetworkManager_t263083499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.NetworkManager::OnReceivedResponse(BetpalzSDK.Network.DataFetcher)
extern "C"  void NetworkManager_OnReceivedResponse_m1760176534 (NetworkManager_t263083499 * __this, DataFetcher_t2999813701 * ___dataFetcher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.NetworkManager::ClearIfNeeded()
extern "C"  void NetworkManager_ClearIfNeeded_m3599735925 (NetworkManager_t263083499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.NetworkManager::.cctor()
extern "C"  void NetworkManager__cctor_m1454039355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
