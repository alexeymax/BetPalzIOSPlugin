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
// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>>
struct Action_2_t1194195913;
// BetpalzSDK.Betpalz
struct Betpalz_t3924986120;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Betpalz/<GetChallengesByStatus>c__AnonStoreyC
struct  U3CGetChallengesByStatusU3Ec__AnonStoreyC_t1319146430  : public Il2CppObject
{
public:
	// System.String BetpalzSDK.Betpalz/<GetChallengesByStatus>c__AnonStoreyC::status
	String_t* ___status_0;
	// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>> BetpalzSDK.Betpalz/<GetChallengesByStatus>c__AnonStoreyC::callback
	Action_2_t1194195913 * ___callback_1;
	// BetpalzSDK.Betpalz BetpalzSDK.Betpalz/<GetChallengesByStatus>c__AnonStoreyC::$this
	Betpalz_t3924986120 * ___U24this_2;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(U3CGetChallengesByStatusU3Ec__AnonStoreyC_t1319146430, ___status_0)); }
	inline String_t* get_status_0() const { return ___status_0; }
	inline String_t** get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(String_t* value)
	{
		___status_0 = value;
		Il2CppCodeGenWriteBarrier(&___status_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CGetChallengesByStatusU3Ec__AnonStoreyC_t1319146430, ___callback_1)); }
	inline Action_2_t1194195913 * get_callback_1() const { return ___callback_1; }
	inline Action_2_t1194195913 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t1194195913 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetChallengesByStatusU3Ec__AnonStoreyC_t1319146430, ___U24this_2)); }
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
