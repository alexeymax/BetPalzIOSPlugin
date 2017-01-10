#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// BetpalzSDK.Betpalz
struct Betpalz_t3924986120;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Betpalz/<UpdateCurrentUser>c__AnonStorey5
struct  U3CUpdateCurrentUserU3Ec__AnonStorey5_t482261796  : public Il2CppObject
{
public:
	// System.Action`1<System.Boolean> BetpalzSDK.Betpalz/<UpdateCurrentUser>c__AnonStorey5::callback
	Action_1_t3627374100 * ___callback_0;
	// System.Boolean BetpalzSDK.Betpalz/<UpdateCurrentUser>c__AnonStorey5::isPasswordChanged
	bool ___isPasswordChanged_1;
	// BetpalzSDK.Betpalz BetpalzSDK.Betpalz/<UpdateCurrentUser>c__AnonStorey5::$this
	Betpalz_t3924986120 * ___U24this_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CUpdateCurrentUserU3Ec__AnonStorey5_t482261796, ___callback_0)); }
	inline Action_1_t3627374100 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3627374100 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3627374100 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_isPasswordChanged_1() { return static_cast<int32_t>(offsetof(U3CUpdateCurrentUserU3Ec__AnonStorey5_t482261796, ___isPasswordChanged_1)); }
	inline bool get_isPasswordChanged_1() const { return ___isPasswordChanged_1; }
	inline bool* get_address_of_isPasswordChanged_1() { return &___isPasswordChanged_1; }
	inline void set_isPasswordChanged_1(bool value)
	{
		___isPasswordChanged_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CUpdateCurrentUserU3Ec__AnonStorey5_t482261796, ___U24this_2)); }
	inline Betpalz_t3924986120 * get_U24this_2() const { return ___U24this_2; }
	inline Betpalz_t3924986120 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Betpalz_t3924986120 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
