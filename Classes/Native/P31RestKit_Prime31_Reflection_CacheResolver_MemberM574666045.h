#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// Prime31.Reflection.GetHandler
struct GetHandler_t2553917450;
// Prime31.Reflection.SetHandler
struct SetHandler_t3932263246;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver/MemberMap
struct  MemberMap_t574666045  : public Il2CppObject
{
public:
	// System.Reflection.MemberInfo Prime31.Reflection.CacheResolver/MemberMap::MemberInfo
	MemberInfo_t * ___MemberInfo_0;
	// System.Type Prime31.Reflection.CacheResolver/MemberMap::Type
	Type_t * ___Type_1;
	// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver/MemberMap::Getter
	GetHandler_t2553917450 * ___Getter_2;
	// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver/MemberMap::Setter
	SetHandler_t3932263246 * ___Setter_3;

public:
	inline static int32_t get_offset_of_MemberInfo_0() { return static_cast<int32_t>(offsetof(MemberMap_t574666045, ___MemberInfo_0)); }
	inline MemberInfo_t * get_MemberInfo_0() const { return ___MemberInfo_0; }
	inline MemberInfo_t ** get_address_of_MemberInfo_0() { return &___MemberInfo_0; }
	inline void set_MemberInfo_0(MemberInfo_t * value)
	{
		___MemberInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___MemberInfo_0, value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(MemberMap_t574666045, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier(&___Type_1, value);
	}

	inline static int32_t get_offset_of_Getter_2() { return static_cast<int32_t>(offsetof(MemberMap_t574666045, ___Getter_2)); }
	inline GetHandler_t2553917450 * get_Getter_2() const { return ___Getter_2; }
	inline GetHandler_t2553917450 ** get_address_of_Getter_2() { return &___Getter_2; }
	inline void set_Getter_2(GetHandler_t2553917450 * value)
	{
		___Getter_2 = value;
		Il2CppCodeGenWriteBarrier(&___Getter_2, value);
	}

	inline static int32_t get_offset_of_Setter_3() { return static_cast<int32_t>(offsetof(MemberMap_t574666045, ___Setter_3)); }
	inline SetHandler_t3932263246 * get_Setter_3() const { return ___Setter_3; }
	inline SetHandler_t3932263246 ** get_address_of_Setter_3() { return &___Setter_3; }
	inline void set_Setter_3(SetHandler_t3932263246 * value)
	{
		___Setter_3 = value;
		Il2CppCodeGenWriteBarrier(&___Setter_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
