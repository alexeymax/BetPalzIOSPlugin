#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_BetpalzSDK_Responses_APIResponse528835461.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Responses.LoginResponse
struct  LoginResponse_t2531113144  : public APIResponse_t528835461
{
public:
	// System.String BetpalzSDK.Responses.LoginResponse::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAccessTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoginResponse_t2531113144, ___U3CAccessTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CAccessTokenU3Ek__BackingField_3() const { return ___U3CAccessTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CAccessTokenU3Ek__BackingField_3() { return &___U3CAccessTokenU3Ek__BackingField_3; }
	inline void set_U3CAccessTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CAccessTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAccessTokenU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
