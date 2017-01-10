#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Boolean,System.Int32>
struct Action_2_t1907880187;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Betpalz/<GetCountCoins>c__AnonStorey14
struct  U3CGetCountCoinsU3Ec__AnonStorey14_t644096438  : public Il2CppObject
{
public:
	// System.Action`2<System.Boolean,System.Int32> BetpalzSDK.Betpalz/<GetCountCoins>c__AnonStorey14::callback
	Action_2_t1907880187 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetCountCoinsU3Ec__AnonStorey14_t644096438, ___callback_0)); }
	inline Action_2_t1907880187 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t1907880187 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t1907880187 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
