#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Prime31.Reflection.MemberMapLoader
struct MemberMapLoader_t2009616003;
// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct SafeDictionary_2_t1969671050;
// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>
struct SafeDictionary_2_t28382948;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver
struct  CacheResolver_t3899543758  : public Il2CppObject
{
public:
	// Prime31.Reflection.MemberMapLoader Prime31.Reflection.CacheResolver::_memberMapLoader
	MemberMapLoader_t2009616003 * ____memberMapLoader_0;
	// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>> Prime31.Reflection.CacheResolver::_memberMapsCache
	SafeDictionary_2_t1969671050 * ____memberMapsCache_1;

public:
	inline static int32_t get_offset_of__memberMapLoader_0() { return static_cast<int32_t>(offsetof(CacheResolver_t3899543758, ____memberMapLoader_0)); }
	inline MemberMapLoader_t2009616003 * get__memberMapLoader_0() const { return ____memberMapLoader_0; }
	inline MemberMapLoader_t2009616003 ** get_address_of__memberMapLoader_0() { return &____memberMapLoader_0; }
	inline void set__memberMapLoader_0(MemberMapLoader_t2009616003 * value)
	{
		____memberMapLoader_0 = value;
		Il2CppCodeGenWriteBarrier(&____memberMapLoader_0, value);
	}

	inline static int32_t get_offset_of__memberMapsCache_1() { return static_cast<int32_t>(offsetof(CacheResolver_t3899543758, ____memberMapsCache_1)); }
	inline SafeDictionary_2_t1969671050 * get__memberMapsCache_1() const { return ____memberMapsCache_1; }
	inline SafeDictionary_2_t1969671050 ** get_address_of__memberMapsCache_1() { return &____memberMapsCache_1; }
	inline void set__memberMapsCache_1(SafeDictionary_2_t1969671050 * value)
	{
		____memberMapsCache_1 = value;
		Il2CppCodeGenWriteBarrier(&____memberMapsCache_1, value);
	}
};

struct CacheResolver_t3899543758_StaticFields
{
public:
	// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate> Prime31.Reflection.CacheResolver::constructorCache
	SafeDictionary_2_t28382948 * ___constructorCache_2;

public:
	inline static int32_t get_offset_of_constructorCache_2() { return static_cast<int32_t>(offsetof(CacheResolver_t3899543758_StaticFields, ___constructorCache_2)); }
	inline SafeDictionary_2_t28382948 * get_constructorCache_2() const { return ___constructorCache_2; }
	inline SafeDictionary_2_t28382948 ** get_address_of_constructorCache_2() { return &___constructorCache_2; }
	inline void set_constructorCache_2(SafeDictionary_2_t28382948 * value)
	{
		___constructorCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___constructorCache_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
