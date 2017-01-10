#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1
struct  U3CgetMembersWithSettersU3Ec__AnonStorey1_t1963274355  : public Il2CppObject
{
public:
	// System.Reflection.PropertyInfo Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1::theInfo
	PropertyInfo_t * ___theInfo_0;
	// System.Type Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1::thePropertyType
	Type_t * ___thePropertyType_1;

public:
	inline static int32_t get_offset_of_theInfo_0() { return static_cast<int32_t>(offsetof(U3CgetMembersWithSettersU3Ec__AnonStorey1_t1963274355, ___theInfo_0)); }
	inline PropertyInfo_t * get_theInfo_0() const { return ___theInfo_0; }
	inline PropertyInfo_t ** get_address_of_theInfo_0() { return &___theInfo_0; }
	inline void set_theInfo_0(PropertyInfo_t * value)
	{
		___theInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___theInfo_0, value);
	}

	inline static int32_t get_offset_of_thePropertyType_1() { return static_cast<int32_t>(offsetof(U3CgetMembersWithSettersU3Ec__AnonStorey1_t1963274355, ___thePropertyType_1)); }
	inline Type_t * get_thePropertyType_1() const { return ___thePropertyType_1; }
	inline Type_t ** get_address_of_thePropertyType_1() { return &___thePropertyType_1; }
	inline void set_thePropertyType_1(Type_t * value)
	{
		___thePropertyType_1 = value;
		Il2CppCodeGenWriteBarrier(&___thePropertyType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
