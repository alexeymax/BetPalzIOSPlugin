﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhoneContactsScreenList/ElementScrollInformation
struct  ElementScrollInformation_t181484351  : public Il2CppObject
{
public:
	// System.Int32 PhoneContactsScreenList/ElementScrollInformation::currentHeight
	int32_t ___currentHeight_0;
	// System.Boolean PhoneContactsScreenList/ElementScrollInformation::expanded
	bool ___expanded_1;
	// System.Boolean PhoneContactsScreenList/ElementScrollInformation::hasPhoto
	bool ___hasPhoto_2;
	// System.String PhoneContactsScreenList/ElementScrollInformation::Name
	String_t* ___Name_3;
	// UnityEngine.Texture2D PhoneContactsScreenList/ElementScrollInformation::texture
	Texture2D_t3542995729 * ___texture_4;

public:
	inline static int32_t get_offset_of_currentHeight_0() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t181484351, ___currentHeight_0)); }
	inline int32_t get_currentHeight_0() const { return ___currentHeight_0; }
	inline int32_t* get_address_of_currentHeight_0() { return &___currentHeight_0; }
	inline void set_currentHeight_0(int32_t value)
	{
		___currentHeight_0 = value;
	}

	inline static int32_t get_offset_of_expanded_1() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t181484351, ___expanded_1)); }
	inline bool get_expanded_1() const { return ___expanded_1; }
	inline bool* get_address_of_expanded_1() { return &___expanded_1; }
	inline void set_expanded_1(bool value)
	{
		___expanded_1 = value;
	}

	inline static int32_t get_offset_of_hasPhoto_2() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t181484351, ___hasPhoto_2)); }
	inline bool get_hasPhoto_2() const { return ___hasPhoto_2; }
	inline bool* get_address_of_hasPhoto_2() { return &___hasPhoto_2; }
	inline void set_hasPhoto_2(bool value)
	{
		___hasPhoto_2 = value;
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t181484351, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier(&___Name_3, value);
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t181484351, ___texture_4)); }
	inline Texture2D_t3542995729 * get_texture_4() const { return ___texture_4; }
	inline Texture2D_t3542995729 ** get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(Texture2D_t3542995729 * value)
	{
		___texture_4 = value;
		Il2CppCodeGenWriteBarrier(&___texture_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
