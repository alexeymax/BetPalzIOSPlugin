#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Type
struct Type_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0
struct  U3CgetMembersWithSettersU3Ec__AnonStorey0_t397190414  : public Il2CppObject
{
public:
	// System.Reflection.FieldInfo Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0::theInfo
	FieldInfo_t * ___theInfo_0;
	// System.Type Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0::theFieldType
	Type_t * ___theFieldType_1;

public:
	inline static int32_t get_offset_of_theInfo_0() { return static_cast<int32_t>(offsetof(U3CgetMembersWithSettersU3Ec__AnonStorey0_t397190414, ___theInfo_0)); }
	inline FieldInfo_t * get_theInfo_0() const { return ___theInfo_0; }
	inline FieldInfo_t ** get_address_of_theInfo_0() { return &___theInfo_0; }
	inline void set_theInfo_0(FieldInfo_t * value)
	{
		___theInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___theInfo_0, value);
	}

	inline static int32_t get_offset_of_theFieldType_1() { return static_cast<int32_t>(offsetof(U3CgetMembersWithSettersU3Ec__AnonStorey0_t397190414, ___theFieldType_1)); }
	inline Type_t * get_theFieldType_1() const { return ___theFieldType_1; }
	inline Type_t ** get_address_of_theFieldType_1() { return &___theFieldType_1; }
	inline void set_theFieldType_1(Type_t * value)
	{
		___theFieldType_1 = value;
		Il2CppCodeGenWriteBarrier(&___theFieldType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
