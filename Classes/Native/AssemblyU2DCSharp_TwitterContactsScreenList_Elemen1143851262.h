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

// TwitterContactsScreenList/ElementScrollInformation
struct  ElementScrollInformation_t1143851262  : public Il2CppObject
{
public:
	// System.Int32 TwitterContactsScreenList/ElementScrollInformation::currentHeight
	int32_t ___currentHeight_0;
	// System.Boolean TwitterContactsScreenList/ElementScrollInformation::expanded
	bool ___expanded_1;
	// System.Boolean TwitterContactsScreenList/ElementScrollInformation::hasPhoto
	bool ___hasPhoto_2;
	// System.String TwitterContactsScreenList/ElementScrollInformation::Name
	String_t* ___Name_3;
	// System.String TwitterContactsScreenList/ElementScrollInformation::textureURL
	String_t* ___textureURL_4;

public:
	inline static int32_t get_offset_of_currentHeight_0() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t1143851262, ___currentHeight_0)); }
	inline int32_t get_currentHeight_0() const { return ___currentHeight_0; }
	inline int32_t* get_address_of_currentHeight_0() { return &___currentHeight_0; }
	inline void set_currentHeight_0(int32_t value)
	{
		___currentHeight_0 = value;
	}

	inline static int32_t get_offset_of_expanded_1() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t1143851262, ___expanded_1)); }
	inline bool get_expanded_1() const { return ___expanded_1; }
	inline bool* get_address_of_expanded_1() { return &___expanded_1; }
	inline void set_expanded_1(bool value)
	{
		___expanded_1 = value;
	}

	inline static int32_t get_offset_of_hasPhoto_2() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t1143851262, ___hasPhoto_2)); }
	inline bool get_hasPhoto_2() const { return ___hasPhoto_2; }
	inline bool* get_address_of_hasPhoto_2() { return &___hasPhoto_2; }
	inline void set_hasPhoto_2(bool value)
	{
		___hasPhoto_2 = value;
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t1143851262, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier(&___Name_3, value);
	}

	inline static int32_t get_offset_of_textureURL_4() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t1143851262, ___textureURL_4)); }
	inline String_t* get_textureURL_4() const { return ___textureURL_4; }
	inline String_t** get_address_of_textureURL_4() { return &___textureURL_4; }
	inline void set_textureURL_4(String_t* value)
	{
		___textureURL_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureURL_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
