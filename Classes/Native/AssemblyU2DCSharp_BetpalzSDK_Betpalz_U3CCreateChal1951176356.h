﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Boolean,System.String>
struct Action_2_t1865222972;
// BetpalzSDK.Betpalz
struct Betpalz_t3924986120;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Betpalz/<CreateChallenge>c__AnonStoreyA
struct  U3CCreateChallengeU3Ec__AnonStoreyA_t1951176356  : public Il2CppObject
{
public:
	// System.Action`2<System.Boolean,System.String> BetpalzSDK.Betpalz/<CreateChallenge>c__AnonStoreyA::callback
	Action_2_t1865222972 * ___callback_0;
	// BetpalzSDK.Betpalz BetpalzSDK.Betpalz/<CreateChallenge>c__AnonStoreyA::$this
	Betpalz_t3924986120 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CCreateChallengeU3Ec__AnonStoreyA_t1951176356, ___callback_0)); }
	inline Action_2_t1865222972 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t1865222972 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t1865222972 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CCreateChallengeU3Ec__AnonStoreyA_t1951176356, ___U24this_1)); }
	inline Betpalz_t3924986120 * get_U24this_1() const { return ___U24this_1; }
	inline Betpalz_t3924986120 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Betpalz_t3924986120 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
