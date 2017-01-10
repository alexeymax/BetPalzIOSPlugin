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
// System.Collections.Generic.List`1<PhoneContact>
struct List_1_t1305057988;
// System.Collections.Generic.List`1<EmailContact>
struct List_1_t1431960232;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Contact
struct  Contact_t4014196408  : public Il2CppObject
{
public:
	// System.String Contact::Id
	String_t* ___Id_0;
	// System.String Contact::Name
	String_t* ___Name_1;
	// System.Collections.Generic.List`1<PhoneContact> Contact::Phones
	List_1_t1305057988 * ___Phones_2;
	// System.Collections.Generic.List`1<EmailContact> Contact::Emails
	List_1_t1431960232 * ___Emails_3;
	// System.Collections.Generic.List`1<System.String> Contact::Connections
	List_1_t1398341365 * ___Connections_4;
	// UnityEngine.Texture2D Contact::PhotoTexture
	Texture2D_t3542995729 * ___PhotoTexture_5;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(Contact_t4014196408, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(Contact_t4014196408, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Phones_2() { return static_cast<int32_t>(offsetof(Contact_t4014196408, ___Phones_2)); }
	inline List_1_t1305057988 * get_Phones_2() const { return ___Phones_2; }
	inline List_1_t1305057988 ** get_address_of_Phones_2() { return &___Phones_2; }
	inline void set_Phones_2(List_1_t1305057988 * value)
	{
		___Phones_2 = value;
		Il2CppCodeGenWriteBarrier(&___Phones_2, value);
	}

	inline static int32_t get_offset_of_Emails_3() { return static_cast<int32_t>(offsetof(Contact_t4014196408, ___Emails_3)); }
	inline List_1_t1431960232 * get_Emails_3() const { return ___Emails_3; }
	inline List_1_t1431960232 ** get_address_of_Emails_3() { return &___Emails_3; }
	inline void set_Emails_3(List_1_t1431960232 * value)
	{
		___Emails_3 = value;
		Il2CppCodeGenWriteBarrier(&___Emails_3, value);
	}

	inline static int32_t get_offset_of_Connections_4() { return static_cast<int32_t>(offsetof(Contact_t4014196408, ___Connections_4)); }
	inline List_1_t1398341365 * get_Connections_4() const { return ___Connections_4; }
	inline List_1_t1398341365 ** get_address_of_Connections_4() { return &___Connections_4; }
	inline void set_Connections_4(List_1_t1398341365 * value)
	{
		___Connections_4 = value;
		Il2CppCodeGenWriteBarrier(&___Connections_4, value);
	}

	inline static int32_t get_offset_of_PhotoTexture_5() { return static_cast<int32_t>(offsetof(Contact_t4014196408, ___PhotoTexture_5)); }
	inline Texture2D_t3542995729 * get_PhotoTexture_5() const { return ___PhotoTexture_5; }
	inline Texture2D_t3542995729 ** get_address_of_PhotoTexture_5() { return &___PhotoTexture_5; }
	inline void set_PhotoTexture_5(Texture2D_t3542995729 * value)
	{
		___PhotoTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___PhotoTexture_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
