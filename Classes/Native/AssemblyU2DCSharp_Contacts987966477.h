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
// System.Collections.Generic.List`1<Contact>
struct List_1_t3383317540;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action
struct Action_t3226471752;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Contacts
struct  Contacts_t987966477  : public Il2CppObject
{
public:

public:
};

struct Contacts_t987966477_StaticFields
{
public:
	// System.String Contacts::MyPhoneNumber
	String_t* ___MyPhoneNumber_0;
	// System.String Contacts::SimSerialNumber
	String_t* ___SimSerialNumber_1;
	// System.String Contacts::NetworkOperator
	String_t* ___NetworkOperator_2;
	// System.String Contacts::NetworkCountryIso
	String_t* ___NetworkCountryIso_3;
	// System.Collections.Generic.List`1<Contact> Contacts::ContactsList
	List_1_t3383317540 * ___ContactsList_4;
	// System.Action`1<System.String> Contacts::onFailed
	Action_1_t1831019615 * ___onFailed_5;
	// System.Action Contacts::onDone
	Action_t3226471752 * ___onDone_6;
	// System.Boolean Contacts::initCalled
	bool ___initCalled_7;

public:
	inline static int32_t get_offset_of_MyPhoneNumber_0() { return static_cast<int32_t>(offsetof(Contacts_t987966477_StaticFields, ___MyPhoneNumber_0)); }
	inline String_t* get_MyPhoneNumber_0() const { return ___MyPhoneNumber_0; }
	inline String_t** get_address_of_MyPhoneNumber_0() { return &___MyPhoneNumber_0; }
	inline void set_MyPhoneNumber_0(String_t* value)
	{
		___MyPhoneNumber_0 = value;
		Il2CppCodeGenWriteBarrier(&___MyPhoneNumber_0, value);
	}

	inline static int32_t get_offset_of_SimSerialNumber_1() { return static_cast<int32_t>(offsetof(Contacts_t987966477_StaticFields, ___SimSerialNumber_1)); }
	inline String_t* get_SimSerialNumber_1() const { return ___SimSerialNumber_1; }
	inline String_t** get_address_of_SimSerialNumber_1() { return &___SimSerialNumber_1; }
	inline void set_SimSerialNumber_1(String_t* value)
	{
		___SimSerialNumber_1 = value;
		Il2CppCodeGenWriteBarrier(&___SimSerialNumber_1, value);
	}

	inline static int32_t get_offset_of_NetworkOperator_2() { return static_cast<int32_t>(offsetof(Contacts_t987966477_StaticFields, ___NetworkOperator_2)); }
	inline String_t* get_NetworkOperator_2() const { return ___NetworkOperator_2; }
	inline String_t** get_address_of_NetworkOperator_2() { return &___NetworkOperator_2; }
	inline void set_NetworkOperator_2(String_t* value)
	{
		___NetworkOperator_2 = value;
		Il2CppCodeGenWriteBarrier(&___NetworkOperator_2, value);
	}

	inline static int32_t get_offset_of_NetworkCountryIso_3() { return static_cast<int32_t>(offsetof(Contacts_t987966477_StaticFields, ___NetworkCountryIso_3)); }
	inline String_t* get_NetworkCountryIso_3() const { return ___NetworkCountryIso_3; }
	inline String_t** get_address_of_NetworkCountryIso_3() { return &___NetworkCountryIso_3; }
	inline void set_NetworkCountryIso_3(String_t* value)
	{
		___NetworkCountryIso_3 = value;
		Il2CppCodeGenWriteBarrier(&___NetworkCountryIso_3, value);
	}

	inline static int32_t get_offset_of_ContactsList_4() { return static_cast<int32_t>(offsetof(Contacts_t987966477_StaticFields, ___ContactsList_4)); }
	inline List_1_t3383317540 * get_ContactsList_4() const { return ___ContactsList_4; }
	inline List_1_t3383317540 ** get_address_of_ContactsList_4() { return &___ContactsList_4; }
	inline void set_ContactsList_4(List_1_t3383317540 * value)
	{
		___ContactsList_4 = value;
		Il2CppCodeGenWriteBarrier(&___ContactsList_4, value);
	}

	inline static int32_t get_offset_of_onFailed_5() { return static_cast<int32_t>(offsetof(Contacts_t987966477_StaticFields, ___onFailed_5)); }
	inline Action_1_t1831019615 * get_onFailed_5() const { return ___onFailed_5; }
	inline Action_1_t1831019615 ** get_address_of_onFailed_5() { return &___onFailed_5; }
	inline void set_onFailed_5(Action_1_t1831019615 * value)
	{
		___onFailed_5 = value;
		Il2CppCodeGenWriteBarrier(&___onFailed_5, value);
	}

	inline static int32_t get_offset_of_onDone_6() { return static_cast<int32_t>(offsetof(Contacts_t987966477_StaticFields, ___onDone_6)); }
	inline Action_t3226471752 * get_onDone_6() const { return ___onDone_6; }
	inline Action_t3226471752 ** get_address_of_onDone_6() { return &___onDone_6; }
	inline void set_onDone_6(Action_t3226471752 * value)
	{
		___onDone_6 = value;
		Il2CppCodeGenWriteBarrier(&___onDone_6, value);
	}

	inline static int32_t get_offset_of_initCalled_7() { return static_cast<int32_t>(offsetof(Contacts_t987966477_StaticFields, ___initCalled_7)); }
	inline bool get_initCalled_7() const { return ___initCalled_7; }
	inline bool* get_address_of_initCalled_7() { return &___initCalled_7; }
	inline void set_initCalled_7(bool value)
	{
		___initCalled_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
