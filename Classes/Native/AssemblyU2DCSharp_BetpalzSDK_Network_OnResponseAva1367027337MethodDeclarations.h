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

// BetpalzSDK.Network.OnResponseAvailable
struct OnResponseAvailable_t1367027337;
// System.Object
struct Il2CppObject;
// BetpalzSDK.Responses.RemoteResponse
struct RemoteResponse_t4136495849;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Responses_RemoteRespo4136495849.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BetpalzSDK.Network.OnResponseAvailable::.ctor(System.Object,System.IntPtr)
extern "C"  void OnResponseAvailable__ctor_m2309051868 (OnResponseAvailable_t1367027337 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Network.OnResponseAvailable::Invoke(BetpalzSDK.Responses.RemoteResponse)
extern "C"  bool OnResponseAvailable_Invoke_m998956505 (OnResponseAvailable_t1367027337 * __this, RemoteResponse_t4136495849 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BetpalzSDK.Network.OnResponseAvailable::BeginInvoke(BetpalzSDK.Responses.RemoteResponse,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnResponseAvailable_BeginInvoke_m2758719342 (OnResponseAvailable_t1367027337 * __this, RemoteResponse_t4136495849 * ___response0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Network.OnResponseAvailable::EndInvoke(System.IAsyncResult)
extern "C"  bool OnResponseAvailable_EndInvoke_m1739113656 (OnResponseAvailable_t1367027337 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
