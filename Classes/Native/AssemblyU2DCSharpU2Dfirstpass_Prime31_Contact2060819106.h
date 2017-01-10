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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.Contact
struct  Contact_t2060819106  : public Il2CppObject
{
public:
	// System.String Prime31.Contact::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<System.String> Prime31.Contact::emails
	List_1_t1398341365 * ___emails_1;
	// System.Collections.Generic.List`1<System.String> Prime31.Contact::phoneNumbers
	List_1_t1398341365 * ___phoneNumbers_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Contact_t2060819106, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_emails_1() { return static_cast<int32_t>(offsetof(Contact_t2060819106, ___emails_1)); }
	inline List_1_t1398341365 * get_emails_1() const { return ___emails_1; }
	inline List_1_t1398341365 ** get_address_of_emails_1() { return &___emails_1; }
	inline void set_emails_1(List_1_t1398341365 * value)
	{
		___emails_1 = value;
		Il2CppCodeGenWriteBarrier(&___emails_1, value);
	}

	inline static int32_t get_offset_of_phoneNumbers_2() { return static_cast<int32_t>(offsetof(Contact_t2060819106, ___phoneNumbers_2)); }
	inline List_1_t1398341365 * get_phoneNumbers_2() const { return ___phoneNumbers_2; }
	inline List_1_t1398341365 ** get_address_of_phoneNumbers_2() { return &___phoneNumbers_2; }
	inline void set_phoneNumbers_2(List_1_t1398341365 * value)
	{
		___phoneNumbers_2 = value;
		Il2CppCodeGenWriteBarrier(&___phoneNumbers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
