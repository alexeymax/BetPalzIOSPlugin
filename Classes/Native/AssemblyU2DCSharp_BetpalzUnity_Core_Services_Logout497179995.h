#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetpalzSDK.Parsers.ResponseParser
struct ResponseParser_t4075509322;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzUnity.Core.Services.LogoutService
struct  LogoutService_t497179995  : public Il2CppObject
{
public:
	// BetpalzSDK.Parsers.ResponseParser BetpalzUnity.Core.Services.LogoutService::_responseParser
	ResponseParser_t4075509322 * ____responseParser_0;

public:
	inline static int32_t get_offset_of__responseParser_0() { return static_cast<int32_t>(offsetof(LogoutService_t497179995, ____responseParser_0)); }
	inline ResponseParser_t4075509322 * get__responseParser_0() const { return ____responseParser_0; }
	inline ResponseParser_t4075509322 ** get_address_of__responseParser_0() { return &____responseParser_0; }
	inline void set__responseParser_0(ResponseParser_t4075509322 * value)
	{
		____responseParser_0 = value;
		Il2CppCodeGenWriteBarrier(&____responseParser_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
