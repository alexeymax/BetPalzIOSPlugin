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

// BetpalzSDK.Responses.RemoteResponse
struct RemoteResponse_t4136495849;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void BetpalzSDK.Responses.RemoteResponse::.ctor(System.Byte[])
extern "C"  void RemoteResponse__ctor_m700620679 (RemoteResponse_t4136495849 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BetpalzSDK.Responses.RemoteResponse::get_Data()
extern "C"  ByteU5BU5D_t3397334013* RemoteResponse_get_Data_m2362069089 (RemoteResponse_t4136495849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Responses.RemoteResponse::set_Data(System.Byte[])
extern "C"  void RemoteResponse_set_Data_m2020936596 (RemoteResponse_t4136495849 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Responses.RemoteResponse::get_RequestSentTimestamp()
extern "C"  int64_t RemoteResponse_get_RequestSentTimestamp_m4125912727 (RemoteResponse_t4136495849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Responses.RemoteResponse::set_RequestSentTimestamp(System.Int64)
extern "C"  void RemoteResponse_set_RequestSentTimestamp_m451379720 (RemoteResponse_t4136495849 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Responses.RemoteResponse::get_CallbackReceivedTimestamp()
extern "C"  int64_t RemoteResponse_get_CallbackReceivedTimestamp_m3184387850 (RemoteResponse_t4136495849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Responses.RemoteResponse::set_CallbackReceivedTimestamp(System.Int64)
extern "C"  void RemoteResponse_set_CallbackReceivedTimestamp_m3265178159 (RemoteResponse_t4136495849 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Responses.RemoteResponse::IsDataAvailable()
extern "C"  bool RemoteResponse_IsDataAvailable_m1104502459 (RemoteResponse_t4136495849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BetpalzSDK.Responses.RemoteResponse::GetResponseString()
extern "C"  String_t* RemoteResponse_GetResponseString_m3212630009 (RemoteResponse_t4136495849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Responses.RemoteResponse::GetTime()
extern "C"  int64_t RemoteResponse_GetTime_m2701967000 (RemoteResponse_t4136495849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
