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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3020292135;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzUnity.Core.Services.FacebookService
struct  FacebookService_t3621199521  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> BetpalzUnity.Core.Services.FacebookService::_readPermissions
	List_1_t1398341365 * ____readPermissions_1;
	// System.Collections.Generic.List`1<System.String> BetpalzUnity.Core.Services.FacebookService::_publishPermissions
	List_1_t1398341365 * ____publishPermissions_2;

public:
	inline static int32_t get_offset_of__readPermissions_1() { return static_cast<int32_t>(offsetof(FacebookService_t3621199521, ____readPermissions_1)); }
	inline List_1_t1398341365 * get__readPermissions_1() const { return ____readPermissions_1; }
	inline List_1_t1398341365 ** get_address_of__readPermissions_1() { return &____readPermissions_1; }
	inline void set__readPermissions_1(List_1_t1398341365 * value)
	{
		____readPermissions_1 = value;
		Il2CppCodeGenWriteBarrier(&____readPermissions_1, value);
	}

	inline static int32_t get_offset_of__publishPermissions_2() { return static_cast<int32_t>(offsetof(FacebookService_t3621199521, ____publishPermissions_2)); }
	inline List_1_t1398341365 * get__publishPermissions_2() const { return ____publishPermissions_2; }
	inline List_1_t1398341365 ** get_address_of__publishPermissions_2() { return &____publishPermissions_2; }
	inline void set__publishPermissions_2(List_1_t1398341365 * value)
	{
		____publishPermissions_2 = value;
		Il2CppCodeGenWriteBarrier(&____publishPermissions_2, value);
	}
};

struct FacebookService_t3621199521_StaticFields
{
public:
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult> BetpalzUnity.Core.Services.FacebookService::<>f__am$cache0
	FacebookDelegate_1_t3020292135 * ___U3CU3Ef__amU24cache0_3;
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult> BetpalzUnity.Core.Services.FacebookService::<>f__am$cache1
	FacebookDelegate_1_t3020292135 * ___U3CU3Ef__amU24cache1_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(FacebookService_t3621199521_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline FacebookDelegate_1_t3020292135 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline FacebookDelegate_1_t3020292135 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(FacebookDelegate_1_t3020292135 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_4() { return static_cast<int32_t>(offsetof(FacebookService_t3621199521_StaticFields, ___U3CU3Ef__amU24cache1_4)); }
	inline FacebookDelegate_1_t3020292135 * get_U3CU3Ef__amU24cache1_4() const { return ___U3CU3Ef__amU24cache1_4; }
	inline FacebookDelegate_1_t3020292135 ** get_address_of_U3CU3Ef__amU24cache1_4() { return &___U3CU3Ef__amU24cache1_4; }
	inline void set_U3CU3Ef__amU24cache1_4(FacebookDelegate_1_t3020292135 * value)
	{
		___U3CU3Ef__amU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
