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

// BetpalzSDK.Parsers.ResponseParser
struct ResponseParser_t4075509322;
// BetpalzSDK.Responses.APIResponse
struct APIResponse_t528835461;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// BetpalzSDK.Responses.LoginResponse
struct LoginResponse_t2531113144;
// BetpalzSDK.Responses.NewChallengeResponse
struct NewChallengeResponse_t933696078;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Responses_APIResponse528835461.h"

// System.Void BetpalzSDK.Parsers.ResponseParser::.ctor()
extern "C"  void ResponseParser__ctor_m3445308603 (ResponseParser_t4075509322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Responses.APIResponse BetpalzSDK.Parsers.ResponseParser::ParseAPIResponse(System.String,BetpalzSDK.Responses.APIResponse)
extern "C"  APIResponse_t528835461 * ResponseParser_ParseAPIResponse_m1692722108 (ResponseParser_t4075509322 * __this, String_t* ___json0, APIResponse_t528835461 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Responses.APIResponse BetpalzSDK.Parsers.ResponseParser::ParseAPIResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>,BetpalzSDK.Responses.APIResponse)
extern "C"  APIResponse_t528835461 * ResponseParser_ParseAPIResponse_m132029681 (ResponseParser_t4075509322 * __this, Dictionary_2_t309261261 * ___info0, APIResponse_t528835461 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Responses.LoginResponse BetpalzSDK.Parsers.ResponseParser::ParseLoginResponse(System.String)
extern "C"  LoginResponse_t2531113144 * ResponseParser_ParseLoginResponse_m2872251195 (ResponseParser_t4075509322 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Responses.NewChallengeResponse BetpalzSDK.Parsers.ResponseParser::ParseNewChallengeResponse(System.String)
extern "C"  NewChallengeResponse_t933696078 * ResponseParser_ParseNewChallengeResponse_m120325175 (ResponseParser_t4075509322 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
