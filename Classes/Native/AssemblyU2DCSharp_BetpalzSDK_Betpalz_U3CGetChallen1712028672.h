#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>>
struct Action_2_t3439337999;
// BetpalzSDK.Betpalz
struct Betpalz_t3924986120;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Betpalz/<GetChallengeWagers>c__AnonStoreyD
struct  U3CGetChallengeWagersU3Ec__AnonStoreyD_t1712028672  : public Il2CppObject
{
public:
	// System.Int64 BetpalzSDK.Betpalz/<GetChallengeWagers>c__AnonStoreyD::challengeId
	int64_t ___challengeId_0;
	// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>> BetpalzSDK.Betpalz/<GetChallengeWagers>c__AnonStoreyD::callback
	Action_2_t3439337999 * ___callback_1;
	// BetpalzSDK.Betpalz BetpalzSDK.Betpalz/<GetChallengeWagers>c__AnonStoreyD::$this
	Betpalz_t3924986120 * ___U24this_2;

public:
	inline static int32_t get_offset_of_challengeId_0() { return static_cast<int32_t>(offsetof(U3CGetChallengeWagersU3Ec__AnonStoreyD_t1712028672, ___challengeId_0)); }
	inline int64_t get_challengeId_0() const { return ___challengeId_0; }
	inline int64_t* get_address_of_challengeId_0() { return &___challengeId_0; }
	inline void set_challengeId_0(int64_t value)
	{
		___challengeId_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CGetChallengeWagersU3Ec__AnonStoreyD_t1712028672, ___callback_1)); }
	inline Action_2_t3439337999 * get_callback_1() const { return ___callback_1; }
	inline Action_2_t3439337999 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t3439337999 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetChallengeWagersU3Ec__AnonStoreyD_t1712028672, ___U24this_2)); }
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
