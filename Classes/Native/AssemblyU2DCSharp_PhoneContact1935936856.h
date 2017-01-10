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

// PhoneContact
struct  PhoneContact_t1935936856  : public Il2CppObject
{
public:
	// System.String PhoneContact::Number
	String_t* ___Number_0;
	// System.String PhoneContact::Type
	String_t* ___Type_1;

public:
	inline static int32_t get_offset_of_Number_0() { return static_cast<int32_t>(offsetof(PhoneContact_t1935936856, ___Number_0)); }
	inline String_t* get_Number_0() const { return ___Number_0; }
	inline String_t** get_address_of_Number_0() { return &___Number_0; }
	inline void set_Number_0(String_t* value)
	{
		___Number_0 = value;
		Il2CppCodeGenWriteBarrier(&___Number_0, value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(PhoneContact_t1935936856, ___Type_1)); }
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
