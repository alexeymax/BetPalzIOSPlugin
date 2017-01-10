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

// BetpalzSDK.Network.DataFetcher
struct DataFetcher_t2999813701;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// BetpalzSDK.Responses.RemoteResponse
struct RemoteResponse_t4136495849;
// BetpalzSDK.Network.OnReceivedResponse
struct OnReceivedResponse_t3573330051;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Responses_RemoteRespo4136495849.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Network_OnReceivedRes3573330051.h"

// System.Void BetpalzSDK.Network.DataFetcher::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void DataFetcher__ctor_m2227455299 (DataFetcher_t2999813701 * __this, String_t* ___url0, Dictionary_2_t309261261 * ___postJsonBodyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Responses.RemoteResponse BetpalzSDK.Network.DataFetcher::get_RemoteResponse()
extern "C"  RemoteResponse_t4136495849 * DataFetcher_get_RemoteResponse_m2937238780 (DataFetcher_t2999813701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.DataFetcher::set_RemoteResponse(BetpalzSDK.Responses.RemoteResponse)
extern "C"  void DataFetcher_set_RemoteResponse_m3892440311 (DataFetcher_t2999813701 * __this, RemoteResponse_t4136495849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Network.DataFetcher::get_IsRunning()
extern "C"  bool DataFetcher_get_IsRunning_m1579505112 (DataFetcher_t2999813701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.DataFetcher::set_IsRunning(System.Boolean)
extern "C"  void DataFetcher_set_IsRunning_m2100972265 (DataFetcher_t2999813701 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Network.OnReceivedResponse BetpalzSDK.Network.DataFetcher::get_OnReceivedResponse()
extern "C"  OnReceivedResponse_t3573330051 * DataFetcher_get_OnReceivedResponse_m1369190414 (DataFetcher_t2999813701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.DataFetcher::set_OnReceivedResponse(BetpalzSDK.Network.OnReceivedResponse)
extern "C"  void DataFetcher_set_OnReceivedResponse_m344723657 (DataFetcher_t2999813701 * __this, OnReceivedResponse_t3573330051 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Network.OnReceivedResponse BetpalzSDK.Network.DataFetcher::get_Callback()
extern "C"  OnReceivedResponse_t3573330051 * DataFetcher_get_Callback_m1931563176 (DataFetcher_t2999813701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.DataFetcher::set_Callback(BetpalzSDK.Network.OnReceivedResponse)
extern "C"  void DataFetcher_set_Callback_m2795358033 (DataFetcher_t2999813701 * __this, OnReceivedResponse_t3573330051 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BetpalzSDK.Network.DataFetcher::Run()
extern "C"  Il2CppObject * DataFetcher_Run_m2030671217 (DataFetcher_t2999813701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.DataFetcher::Kill()
extern "C"  void DataFetcher_Kill_m652070456 (DataFetcher_t2999813701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.DataFetcher::AddHeader(System.String,System.String)
extern "C"  void DataFetcher_AddHeader_m2658283342 (DataFetcher_t2999813701 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.DataFetcher::AddJsonContentType()
extern "C"  void DataFetcher_AddJsonContentType_m1599552286 (DataFetcher_t2999813701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
