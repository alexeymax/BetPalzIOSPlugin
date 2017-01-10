#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EmailContact
struct  EmailContact_t2062839100  : public Il2CppObject
{
public:
	// System.String EmailContact::Address
	String_t* ___Address_0;
	// System.String EmailContact::Type
	String_t* ___Type_1;

public:
	inline static int32_t get_offset_of_Address_0() { return static_cast<int32_t>(offsetof(EmailContact_t2062839100, ___Address_0)); }
	inline String_t* get_Address_0() const { return ___Address_0; }
	inline String_t** get_address_of_Address_0() { return &___Address_0; }
	inline void set_Address_0(String_t* value)
	{
		___Address_0 = value;
		Il2CppCodeGenWriteBarrier(&___Address_0, value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EmailContact_t2062839100, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier(&___Type_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
