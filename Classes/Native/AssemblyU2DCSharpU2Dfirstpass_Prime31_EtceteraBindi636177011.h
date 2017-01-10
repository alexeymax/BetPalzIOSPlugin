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
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.EtceteraBinding/<takeScreenShot>c__Iterator0/<takeScreenShot>c__AnonStorey4
struct  U3CtakeScreenShotU3Ec__AnonStorey4_t636177011  : public Il2CppObject
{
public:
	// System.String Prime31.EtceteraBinding/<takeScreenShot>c__Iterator0/<takeScreenShot>c__AnonStorey4::filename
	String_t* ___filename_0;
	// System.Action`1<System.String> Prime31.EtceteraBinding/<takeScreenShot>c__Iterator0/<takeScreenShot>c__AnonStorey4::completionHandler
	Action_1_t1831019615 * ___completionHandler_1;

public:
	inline static int32_t get_offset_of_filename_0() { return static_cast<int32_t>(offsetof(U3CtakeScreenShotU3Ec__AnonStorey4_t636177011, ___filename_0)); }
	inline String_t* get_filename_0() const { return ___filename_0; }
	inline String_t** get_address_of_filename_0() { return &___filename_0; }
	inline void set_filename_0(String_t* value)
	{
		___filename_0 = value;
		Il2CppCodeGenWriteBarrier(&___filename_0, value);
	}

	inline static int32_t get_offset_of_completionHandler_1() { return static_cast<int32_t>(offsetof(U3CtakeScreenShotU3Ec__AnonStorey4_t636177011, ___completionHandler_1)); }
	inline Action_1_t1831019615 * get_completionHandler_1() const { return ___completionHandler_1; }
	inline Action_1_t1831019615 ** get_address_of_completionHandler_1() { return &___completionHandler_1; }
	inline void set_completionHandler_1(Action_1_t1831019615 * value)
	{
		___completionHandler_1 = value;
		Il2CppCodeGenWriteBarrier(&___completionHandler_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
