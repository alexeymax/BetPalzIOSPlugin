#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t3733898188;
// BetpalzUnity.Core.Services.FacebookService
struct FacebookService_t3621199521;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzUnity.Core.Services.FacebookService/<GetAccessToken>c__AnonStorey0
struct  U3CGetAccessTokenU3Ec__AnonStorey0_t1721923468  : public Il2CppObject
{
public:
	// System.Action`1<System.String> BetpalzUnity.Core.Services.FacebookService/<GetAccessToken>c__AnonStorey0::callback
	Action_1_t1831019615 * ___callback_0;
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult> BetpalzUnity.Core.Services.FacebookService/<GetAccessToken>c__AnonStorey0::loginComplete
	FacebookDelegate_1_t3733898188 * ___loginComplete_1;
	// BetpalzUnity.Core.Services.FacebookService BetpalzUnity.Core.Services.FacebookService/<GetAccessToken>c__AnonStorey0::$this
	FacebookService_t3621199521 * ___U24this_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetAccessTokenU3Ec__AnonStorey0_t1721923468, ___callback_0)); }
	inline Action_1_t1831019615 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t1831019615 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t1831019615 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_loginComplete_1() { return static_cast<int32_t>(offsetof(U3CGetAccessTokenU3Ec__AnonStorey0_t1721923468, ___loginComplete_1)); }
	inline FacebookDelegate_1_t3733898188 * get_loginComplete_1() const { return ___loginComplete_1; }
	inline FacebookDelegate_1_t3733898188 ** get_address_of_loginComplete_1() { return &___loginComplete_1; }
	inline void set_loginComplete_1(FacebookDelegate_1_t3733898188 * value)
	{
		___loginComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&___loginComplete_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetAccessTokenU3Ec__AnonStorey0_t1721923468, ___U24this_2)); }
	inline FacebookService_t3621199521 * get_U24this_2() const { return ___U24this_2; }
	inline FacebookService_t3621199521 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(FacebookService_t3621199521 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
