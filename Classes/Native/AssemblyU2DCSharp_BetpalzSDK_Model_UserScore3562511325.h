#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetpalzSDK.Model.User
struct User_t1930024827;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Model.UserScore
struct  UserScore_t3562511325  : public Il2CppObject
{
public:
	// BetpalzSDK.Model.User BetpalzSDK.Model.UserScore::<User>k__BackingField
	User_t1930024827 * ___U3CUserU3Ek__BackingField_0;
	// System.Int64 BetpalzSDK.Model.UserScore::<Score>k__BackingField
	int64_t ___U3CScoreU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUserU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UserScore_t3562511325, ___U3CUserU3Ek__BackingField_0)); }
	inline User_t1930024827 * get_U3CUserU3Ek__BackingField_0() const { return ___U3CUserU3Ek__BackingField_0; }
	inline User_t1930024827 ** get_address_of_U3CUserU3Ek__BackingField_0() { return &___U3CUserU3Ek__BackingField_0; }
	inline void set_U3CUserU3Ek__BackingField_0(User_t1930024827 * value)
	{
		___U3CUserU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CScoreU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UserScore_t3562511325, ___U3CScoreU3Ek__BackingField_1)); }
	inline int64_t get_U3CScoreU3Ek__BackingField_1() const { return ___U3CScoreU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CScoreU3Ek__BackingField_1() { return &___U3CScoreU3Ek__BackingField_1; }
	inline void set_U3CScoreU3Ek__BackingField_1(int64_t value)
	{
		___U3CScoreU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
