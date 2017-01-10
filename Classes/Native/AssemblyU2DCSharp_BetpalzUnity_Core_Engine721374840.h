#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetpalzSDK.Betpalz
struct Betpalz_t3924986120;
// BetpalzUnity.Core.Services.LogoutService
struct LogoutService_t497179995;
// BetpalzUnity.Core.Services.FacebookService
struct FacebookService_t3621199521;
// BetpalzUnity.Core.Services.TwitterService
struct TwitterService_t3958793376;
// BetpalzUnity.Core.Engine
struct Engine_t721374840;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzUnity.Core.Engine
struct  Engine_t721374840  : public Il2CppObject
{
public:
	// BetpalzSDK.Betpalz BetpalzUnity.Core.Engine::_betpalz
	Betpalz_t3924986120 * ____betpalz_0;
	// BetpalzUnity.Core.Services.LogoutService BetpalzUnity.Core.Engine::_logoutService
	LogoutService_t497179995 * ____logoutService_1;
	// BetpalzUnity.Core.Services.FacebookService BetpalzUnity.Core.Engine::_facebookService
	FacebookService_t3621199521 * ____facebookService_2;
	// BetpalzUnity.Core.Services.TwitterService BetpalzUnity.Core.Engine::_twitterService
	TwitterService_t3958793376 * ____twitterService_3;

public:
	inline static int32_t get_offset_of__betpalz_0() { return static_cast<int32_t>(offsetof(Engine_t721374840, ____betpalz_0)); }
	inline Betpalz_t3924986120 * get__betpalz_0() const { return ____betpalz_0; }
	inline Betpalz_t3924986120 ** get_address_of__betpalz_0() { return &____betpalz_0; }
	inline void set__betpalz_0(Betpalz_t3924986120 * value)
	{
		____betpalz_0 = value;
		Il2CppCodeGenWriteBarrier(&____betpalz_0, value);
	}

	inline static int32_t get_offset_of__logoutService_1() { return static_cast<int32_t>(offsetof(Engine_t721374840, ____logoutService_1)); }
	inline LogoutService_t497179995 * get__logoutService_1() const { return ____logoutService_1; }
	inline LogoutService_t497179995 ** get_address_of__logoutService_1() { return &____logoutService_1; }
	inline void set__logoutService_1(LogoutService_t497179995 * value)
	{
		____logoutService_1 = value;
		Il2CppCodeGenWriteBarrier(&____logoutService_1, value);
	}

	inline static int32_t get_offset_of__facebookService_2() { return static_cast<int32_t>(offsetof(Engine_t721374840, ____facebookService_2)); }
	inline FacebookService_t3621199521 * get__facebookService_2() const { return ____facebookService_2; }
	inline FacebookService_t3621199521 ** get_address_of__facebookService_2() { return &____facebookService_2; }
	inline void set__facebookService_2(FacebookService_t3621199521 * value)
	{
		____facebookService_2 = value;
		Il2CppCodeGenWriteBarrier(&____facebookService_2, value);
	}

	inline static int32_t get_offset_of__twitterService_3() { return static_cast<int32_t>(offsetof(Engine_t721374840, ____twitterService_3)); }
	inline TwitterService_t3958793376 * get__twitterService_3() const { return ____twitterService_3; }
	inline TwitterService_t3958793376 ** get_address_of__twitterService_3() { return &____twitterService_3; }
	inline void set__twitterService_3(TwitterService_t3958793376 * value)
	{
		____twitterService_3 = value;
		Il2CppCodeGenWriteBarrier(&____twitterService_3, value);
	}
};

struct Engine_t721374840_StaticFields
{
public:
	// BetpalzUnity.Core.Engine BetpalzUnity.Core.Engine::_instance
	Engine_t721374840 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(Engine_t721374840_StaticFields, ____instance_4)); }
	inline Engine_t721374840 * get__instance_4() const { return ____instance_4; }
	inline Engine_t721374840 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(Engine_t721374840 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier(&____instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
