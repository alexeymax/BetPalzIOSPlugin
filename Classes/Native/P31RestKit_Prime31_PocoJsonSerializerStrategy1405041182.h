#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Prime31.Reflection.CacheResolver
struct CacheResolver_t3899543758;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.PocoJsonSerializerStrategy
struct  PocoJsonSerializerStrategy_t1405041182  : public Il2CppObject
{
public:
	// Prime31.Reflection.CacheResolver Prime31.PocoJsonSerializerStrategy::cacheResolver
	CacheResolver_t3899543758 * ___cacheResolver_0;

public:
	inline static int32_t get_offset_of_cacheResolver_0() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t1405041182, ___cacheResolver_0)); }
	inline CacheResolver_t3899543758 * get_cacheResolver_0() const { return ___cacheResolver_0; }
	inline CacheResolver_t3899543758 ** get_address_of_cacheResolver_0() { return &___cacheResolver_0; }
	inline void set_cacheResolver_0(CacheResolver_t3899543758 * value)
	{
		___cacheResolver_0 = value;
		Il2CppCodeGenWriteBarrier(&___cacheResolver_0, value);
	}
};

struct PocoJsonSerializerStrategy_t1405041182_StaticFields
{
public:
	// System.String[] Prime31.PocoJsonSerializerStrategy::Iso8601Format
	StringU5BU5D_t1642385972* ___Iso8601Format_1;

public:
	inline static int32_t get_offset_of_Iso8601Format_1() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t1405041182_StaticFields, ___Iso8601Format_1)); }
	inline StringU5BU5D_t1642385972* get_Iso8601Format_1() const { return ___Iso8601Format_1; }
	inline StringU5BU5D_t1642385972** get_address_of_Iso8601Format_1() { return &___Iso8601Format_1; }
	inline void set_Iso8601Format_1(StringU5BU5D_t1642385972* value)
	{
		___Iso8601Format_1 = value;
		Il2CppCodeGenWriteBarrier(&___Iso8601Format_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
