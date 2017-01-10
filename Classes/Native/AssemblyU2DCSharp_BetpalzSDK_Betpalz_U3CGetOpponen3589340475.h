#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Boolean,BetpalzSDK.Model.Challenge>
struct Action_2_t3441876102;
// BetpalzSDK.Betpalz
struct Betpalz_t3924986120;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Betpalz/<GetOpponentsForChallenge>c__AnonStoreyE
struct  U3CGetOpponentsForChallengeU3Ec__AnonStoreyE_t3589340475  : public Il2CppObject
{
public:
	// System.Action`2<System.Boolean,BetpalzSDK.Model.Challenge> BetpalzSDK.Betpalz/<GetOpponentsForChallenge>c__AnonStoreyE::callback
	Action_2_t3441876102 * ___callback_0;
	// System.Int64 BetpalzSDK.Betpalz/<GetOpponentsForChallenge>c__AnonStoreyE::challengeId
	int64_t ___challengeId_1;
	// BetpalzSDK.Betpalz BetpalzSDK.Betpalz/<GetOpponentsForChallenge>c__AnonStoreyE::$this
	Betpalz_t3924986120 * ___U24this_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetOpponentsForChallengeU3Ec__AnonStoreyE_t3589340475, ___callback_0)); }
	inline Action_2_t3441876102 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t3441876102 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t3441876102 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_challengeId_1() { return static_cast<int32_t>(offsetof(U3CGetOpponentsForChallengeU3Ec__AnonStoreyE_t3589340475, ___challengeId_1)); }
	inline int64_t get_challengeId_1() const { return ___challengeId_1; }
	inline int64_t* get_address_of_challengeId_1() { return &___challengeId_1; }
	inline void set_challengeId_1(int64_t value)
	{
		___challengeId_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetOpponentsForChallengeU3Ec__AnonStoreyE_t3589340475, ___U24this_2)); }
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
