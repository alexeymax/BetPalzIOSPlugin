﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Helpers.DateHelper
struct  DateHelper_t353973676  : public Il2CppObject
{
public:

public:
};

struct DateHelper_t353973676_StaticFields
{
public:
	// System.DateTime BetpalzSDK.Helpers.DateHelper::UnixEpoch
	DateTime_t693205669  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(DateHelper_t353973676_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_t693205669  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_t693205669 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_t693205669  value)
	{
		___UnixEpoch_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
