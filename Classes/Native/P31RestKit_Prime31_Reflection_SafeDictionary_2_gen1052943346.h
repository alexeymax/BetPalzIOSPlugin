#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2281509423;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>
struct  SafeDictionary_2_t1052943346  : public Il2CppObject
{
public:
	// System.Object Prime31.Reflection.SafeDictionary`2::_padlock
	Il2CppObject * ____padlock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Prime31.Reflection.SafeDictionary`2::_dictionary
	Dictionary_2_t2281509423 * ____dictionary_1;

public:
	inline static int32_t get_offset_of__padlock_0() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t1052943346, ____padlock_0)); }
	inline Il2CppObject * get__padlock_0() const { return ____padlock_0; }
	inline Il2CppObject ** get_address_of__padlock_0() { return &____padlock_0; }
	inline void set__padlock_0(Il2CppObject * value)
	{
		____padlock_0 = value;
		Il2CppCodeGenWriteBarrier(&____padlock_0, value);
	}

	inline static int32_t get_offset_of__dictionary_1() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t1052943346, ____dictionary_1)); }
	inline Dictionary_2_t2281509423 * get__dictionary_1() const { return ____dictionary_1; }
	inline Dictionary_2_t2281509423 ** get_address_of__dictionary_1() { return &____dictionary_1; }
	inline void set__dictionary_1(Dictionary_2_t2281509423 * value)
	{
		____dictionary_1 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
