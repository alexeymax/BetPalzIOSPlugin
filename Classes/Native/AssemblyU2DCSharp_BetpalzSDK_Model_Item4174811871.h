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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Model.Item
struct  Item_t4174811871  : public Il2CppObject
{
public:
	// System.Int64 BetpalzSDK.Model.Item::<Id>k__BackingField
	int64_t ___U3CIdU3Ek__BackingField_0;
	// System.String BetpalzSDK.Model.Item::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String BetpalzSDK.Model.Item::<ImageUrl>k__BackingField
	String_t* ___U3CImageUrlU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Item_t4174811871, ___U3CIdU3Ek__BackingField_0)); }
	inline int64_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int64_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Item_t4174811871, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CImageUrlU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Item_t4174811871, ___U3CImageUrlU3Ek__BackingField_2)); }
	inline String_t* get_U3CImageUrlU3Ek__BackingField_2() const { return ___U3CImageUrlU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CImageUrlU3Ek__BackingField_2() { return &___U3CImageUrlU3Ek__BackingField_2; }
	inline void set_U3CImageUrlU3Ek__BackingField_2(String_t* value)
	{
		___U3CImageUrlU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CImageUrlU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
