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

// BetpalzSDK.Network.OnReceivedResponse
struct OnReceivedResponse_t3573330051;
// System.Object
struct Il2CppObject;
// BetpalzSDK.Network.DataFetcher
struct DataFetcher_t2999813701;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Network_DataFetcher2999813701.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BetpalzSDK.Network.OnReceivedResponse::.ctor(System.Object,System.IntPtr)
extern "C"  void OnReceivedResponse__ctor_m2301430292 (OnReceivedResponse_t3573330051 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.OnReceivedResponse::Invoke(BetpalzSDK.Network.DataFetcher)
extern "C"  void OnReceivedResponse_Invoke_m3596366289 (OnReceivedResponse_t3573330051 * __this, DataFetcher_t2999813701 * ___dataFetcher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BetpalzSDK.Network.OnReceivedResponse::BeginInvoke(BetpalzSDK.Network.DataFetcher,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnReceivedResponse_BeginInvoke_m4294554578 (OnReceivedResponse_t3573330051 * __this, DataFetcher_t2999813701 * ___dataFetcher0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Network.OnReceivedResponse::EndInvoke(System.IAsyncResult)
extern "C"  void OnReceivedResponse_EndInvoke_m1136352330 (OnReceivedResponse_t3573330051 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
