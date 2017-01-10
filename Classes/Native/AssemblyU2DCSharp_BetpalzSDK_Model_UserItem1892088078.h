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

// BetpalzSDK.Model.UserItem
struct  UserItem_t1892088078  : public Il2CppObject
{
public:
	// System.Int64 BetpalzSDK.Model.UserItem::<Сount>k__BackingField
	int64_t ___U3CU421ountU3Ek__BackingField_0;
	// System.String BetpalzSDK.Model.UserItem::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_1;
	// System.Int64 BetpalzSDK.Model.UserItem::<ItemId>k__BackingField
	int64_t ___U3CItemIdU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CU421ountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UserItem_t1892088078, ___U3CU421ountU3Ek__BackingField_0)); }
	inline int64_t get_U3CU421ountU3Ek__BackingField_0() const { return ___U3CU421ountU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CU421ountU3Ek__BackingField_0() { return &___U3CU421ountU3Ek__BackingField_0; }
	inline void set_U3CU421ountU3Ek__BackingField_0(int64_t value)
	{
		___U3CU421ountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UserItem_t1892088078, ___U3CUserIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_1() const { return ___U3CUserIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_1() { return &___U3CUserIdU3Ek__BackingField_1; }
	inline void set_U3CUserIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserIdU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CItemIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UserItem_t1892088078, ___U3CItemIdU3Ek__BackingField_2)); }
	inline int64_t get_U3CItemIdU3Ek__BackingField_2() const { return ___U3CItemIdU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CItemIdU3Ek__BackingField_2() { return &___U3CItemIdU3Ek__BackingField_2; }
	inline void set_U3CItemIdU3Ek__BackingField_2(int64_t value)
	{
		___U3CItemIdU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
