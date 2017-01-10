#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1328083999;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Json/Deserializer
struct  Deserializer_t3930269075  : public Il2CppObject
{
public:
	// System.Char[] Prime31.Json/Deserializer::charArray
	CharU5BU5D_t1328083999* ___charArray_0;

public:
	inline static int32_t get_offset_of_charArray_0() { return static_cast<int32_t>(offsetof(Deserializer_t3930269075, ___charArray_0)); }
	inline CharU5BU5D_t1328083999* get_charArray_0() const { return ___charArray_0; }
	inline CharU5BU5D_t1328083999** get_address_of_charArray_0() { return &___charArray_0; }
	inline void set_charArray_0(CharU5BU5D_t1328083999* value)
	{
		___charArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___charArray_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
