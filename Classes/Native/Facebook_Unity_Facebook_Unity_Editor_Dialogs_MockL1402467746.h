﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Facebook.Unity.Editor.Dialogs.MockLoginDialog
struct MockLoginDialog_t531765055;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<SendSuccessResult>c__AnonStorey0
struct  U3CSendSuccessResultU3Ec__AnonStorey0_t1402467746  : public Il2CppObject
{
public:
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog/<SendSuccessResult>c__AnonStorey0::facebookID
	String_t* ___facebookID_0;
	// Facebook.Unity.Editor.Dialogs.MockLoginDialog Facebook.Unity.Editor.Dialogs.MockLoginDialog/<SendSuccessResult>c__AnonStorey0::$this
	MockLoginDialog_t531765055 * ___U24this_1;

public:
	inline static int32_t get_offset_of_facebookID_0() { return static_cast<int32_t>(offsetof(U3CSendSuccessResultU3Ec__AnonStorey0_t1402467746, ___facebookID_0)); }
	inline String_t* get_facebookID_0() const { return ___facebookID_0; }
	inline String_t** get_address_of_facebookID_0() { return &___facebookID_0; }
	inline void set_facebookID_0(String_t* value)
	{
		___facebookID_0 = value;
		Il2CppCodeGenWriteBarrier(&___facebookID_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSendSuccessResultU3Ec__AnonStorey0_t1402467746, ___U24this_1)); }
	inline MockLoginDialog_t531765055 * get_U24this_1() const { return ___U24this_1; }
	inline MockLoginDialog_t531765055 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MockLoginDialog_t531765055 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
