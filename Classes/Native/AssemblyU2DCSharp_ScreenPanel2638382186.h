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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenPanel
struct  ScreenPanel_t2638382186  : public MonoBehaviour_t1158329972
{
public:
	// System.String ScreenPanel::screenName
	String_t* ___screenName_2;

public:
	inline static int32_t get_offset_of_screenName_2() { return static_cast<int32_t>(offsetof(ScreenPanel_t2638382186, ___screenName_2)); }
	inline String_t* get_screenName_2() const { return ___screenName_2; }
	inline String_t** get_address_of_screenName_2() { return &___screenName_2; }
	inline void set_screenName_2(String_t* value)
	{
		___screenName_2 = value;
		Il2CppCodeGenWriteBarrier(&___screenName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
