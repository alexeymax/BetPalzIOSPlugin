﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json/Serializer
struct  Serializer_t2406420290  : public Il2CppObject
{
public:
	// System.Text.StringBuilder Prime31.Json/Serializer::_builder
	StringBuilder_t1221177846 * ____builder_0;

public:
	inline static int32_t get_offset_of__builder_0() { return static_cast<int32_t>(offsetof(Serializer_t2406420290, ____builder_0)); }
	inline StringBuilder_t1221177846 * get__builder_0() const { return ____builder_0; }
	inline StringBuilder_t1221177846 ** get_address_of__builder_0() { return &____builder_0; }
	inline void set__builder_0(StringBuilder_t1221177846 * value)
	{
		____builder_0 = value;
		Il2CppCodeGenWriteBarrier(&____builder_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
