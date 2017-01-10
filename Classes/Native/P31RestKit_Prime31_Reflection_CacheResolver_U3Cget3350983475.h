#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.CacheResolver/<getNewInstance>c__AnonStorey0
struct  U3CgetNewInstanceU3Ec__AnonStorey0_t3350983475  : public Il2CppObject
{
public:
	// System.Reflection.ConstructorInfo Prime31.Reflection.CacheResolver/<getNewInstance>c__AnonStorey0::constructorInfo
	ConstructorInfo_t2851816542 * ___constructorInfo_0;

public:
	inline static int32_t get_offset_of_constructorInfo_0() { return static_cast<int32_t>(offsetof(U3CgetNewInstanceU3Ec__AnonStorey0_t3350983475, ___constructorInfo_0)); }
	inline ConstructorInfo_t2851816542 * get_constructorInfo_0() const { return ___constructorInfo_0; }
	inline ConstructorInfo_t2851816542 ** get_address_of_constructorInfo_0() { return &___constructorInfo_0; }
	inline void set_constructorInfo_0(ConstructorInfo_t2851816542 * value)
	{
		___constructorInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___constructorInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
