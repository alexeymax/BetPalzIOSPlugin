#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent>
struct List_1_t225048585;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Model_ChallengeStatus2848553049.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Model.Challenge
struct  Challenge_t3605873363  : public Il2CppObject
{
public:
	// System.Int64 BetpalzSDK.Model.Challenge::<Id>k__BackingField
	int64_t ___U3CIdU3Ek__BackingField_1;
	// BetpalzSDK.Model.ChallengeStatus BetpalzSDK.Model.Challenge::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent> BetpalzSDK.Model.Challenge::<Opponents>k__BackingField
	List_1_t225048585 * ___U3COpponentsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Challenge_t3605873363, ___U3CIdU3Ek__BackingField_1)); }
	inline int64_t get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(int64_t value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Challenge_t3605873363, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COpponentsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Challenge_t3605873363, ___U3COpponentsU3Ek__BackingField_3)); }
	inline List_1_t225048585 * get_U3COpponentsU3Ek__BackingField_3() const { return ___U3COpponentsU3Ek__BackingField_3; }
	inline List_1_t225048585 ** get_address_of_U3COpponentsU3Ek__BackingField_3() { return &___U3COpponentsU3Ek__BackingField_3; }
	inline void set_U3COpponentsU3Ek__BackingField_3(List_1_t225048585 * value)
	{
		___U3COpponentsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3COpponentsU3Ek__BackingField_3, value);
	}
};

struct Challenge_t3605873363_StaticFields
{
public:
	// System.String[] BetpalzSDK.Model.Challenge::ChallengeStatuses
	StringU5BU5D_t1642385972* ___ChallengeStatuses_0;

public:
	inline static int32_t get_offset_of_ChallengeStatuses_0() { return static_cast<int32_t>(offsetof(Challenge_t3605873363_StaticFields, ___ChallengeStatuses_0)); }
	inline StringU5BU5D_t1642385972* get_ChallengeStatuses_0() const { return ___ChallengeStatuses_0; }
	inline StringU5BU5D_t1642385972** get_address_of_ChallengeStatuses_0() { return &___ChallengeStatuses_0; }
	inline void set_ChallengeStatuses_0(StringU5BU5D_t1642385972* value)
	{
		___ChallengeStatuses_0 = value;
		Il2CppCodeGenWriteBarrier(&___ChallengeStatuses_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
