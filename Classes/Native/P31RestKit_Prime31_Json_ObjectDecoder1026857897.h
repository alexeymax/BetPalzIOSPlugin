#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>>
struct Dictionary_2_t191863819;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json/ObjectDecoder
struct  ObjectDecoder_t1026857897  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>> Prime31.Json/ObjectDecoder::_memberInfo
	Dictionary_2_t191863819 * ____memberInfo_0;

public:
	inline static int32_t get_offset_of__memberInfo_0() { return static_cast<int32_t>(offsetof(ObjectDecoder_t1026857897, ____memberInfo_0)); }
	inline Dictionary_2_t191863819 * get__memberInfo_0() const { return ____memberInfo_0; }
	inline Dictionary_2_t191863819 ** get_address_of__memberInfo_0() { return &____memberInfo_0; }
	inline void set__memberInfo_0(Dictionary_2_t191863819 * value)
	{
		____memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&____memberInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
