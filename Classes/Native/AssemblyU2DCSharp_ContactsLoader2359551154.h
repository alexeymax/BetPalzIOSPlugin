#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Contact>
struct List_1_t3383317540;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContactsLoader
struct  ContactsLoader_t2359551154  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Contact> ContactsLoader::ToLoad
	List_1_t3383317540 * ___ToLoad_0;

public:
	inline static int32_t get_offset_of_ToLoad_0() { return static_cast<int32_t>(offsetof(ContactsLoader_t2359551154, ___ToLoad_0)); }
	inline List_1_t3383317540 * get_ToLoad_0() const { return ___ToLoad_0; }
	inline List_1_t3383317540 ** get_address_of_ToLoad_0() { return &___ToLoad_0; }
	inline void set_ToLoad_0(List_1_t3383317540 * value)
	{
		___ToLoad_0 = value;
		Il2CppCodeGenWriteBarrier(&___ToLoad_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
