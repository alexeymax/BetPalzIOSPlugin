﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.Mobile.IOS.IIOSWrapper
struct IIOSWrapper_t3540111257;

#include "Facebook_Unity_Facebook_Unity_Mobile_MobileFaceboo2099931062.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Mobile.IOS.IOSFacebook
struct  IOSFacebook_t847746195  : public MobileFacebook_t2099931062
{
public:
	// System.Boolean Facebook.Unity.Mobile.IOS.IOSFacebook::limitEventUsage
	bool ___limitEventUsage_5;
	// Facebook.Unity.Mobile.IOS.IIOSWrapper Facebook.Unity.Mobile.IOS.IOSFacebook::iosWrapper
	Il2CppObject * ___iosWrapper_6;

public:
	inline static int32_t get_offset_of_limitEventUsage_5() { return static_cast<int32_t>(offsetof(IOSFacebook_t847746195, ___limitEventUsage_5)); }
	inline bool get_limitEventUsage_5() const { return ___limitEventUsage_5; }
	inline bool* get_address_of_limitEventUsage_5() { return &___limitEventUsage_5; }
	inline void set_limitEventUsage_5(bool value)
	{
		___limitEventUsage_5 = value;
	}

	inline static int32_t get_offset_of_iosWrapper_6() { return static_cast<int32_t>(offsetof(IOSFacebook_t847746195, ___iosWrapper_6)); }
	inline Il2CppObject * get_iosWrapper_6() const { return ___iosWrapper_6; }
	inline Il2CppObject ** get_address_of_iosWrapper_6() { return &___iosWrapper_6; }
	inline void set_iosWrapper_6(Il2CppObject * value)
	{
		___iosWrapper_6 = value;
		Il2CppCodeGenWriteBarrier(&___iosWrapper_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
