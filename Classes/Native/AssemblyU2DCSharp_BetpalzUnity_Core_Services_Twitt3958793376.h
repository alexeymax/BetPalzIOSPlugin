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
// System.Action
struct Action_t3226471752;
// BetpalzUnity.Core.Services.TwitterService
struct TwitterService_t3958793376;
// System.Collections.Generic.List`1<BetpalzUnity.Core.Services.TwitterFriend>
struct List_1_t1037245339;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzUnity.Core.Services.TwitterService
struct  TwitterService_t3958793376  : public Il2CppObject
{
public:
	// System.String BetpalzUnity.Core.Services.TwitterService::TWITTER_CONSUMER_KEY
	String_t* ___TWITTER_CONSUMER_KEY_0;
	// System.String BetpalzUnity.Core.Services.TwitterService::TWITTER_CONSUMER_SECRET
	String_t* ___TWITTER_CONSUMER_SECRET_1;
	// System.Boolean BetpalzUnity.Core.Services.TwitterService::serviceInited
	bool ___serviceInited_2;
	// System.Boolean BetpalzUnity.Core.Services.TwitterService::twitterFriendsLoaded
	bool ___twitterFriendsLoaded_3;
	// System.Action BetpalzUnity.Core.Services.TwitterService::_onTwitterFriendsLoaded
	Action_t3226471752 * ____onTwitterFriendsLoaded_4;
	// System.Collections.Generic.List`1<BetpalzUnity.Core.Services.TwitterFriend> BetpalzUnity.Core.Services.TwitterService::twitterFriends
	List_1_t1037245339 * ___twitterFriends_6;

public:
	inline static int32_t get_offset_of_TWITTER_CONSUMER_KEY_0() { return static_cast<int32_t>(offsetof(TwitterService_t3958793376, ___TWITTER_CONSUMER_KEY_0)); }
	inline String_t* get_TWITTER_CONSUMER_KEY_0() const { return ___TWITTER_CONSUMER_KEY_0; }
	inline String_t** get_address_of_TWITTER_CONSUMER_KEY_0() { return &___TWITTER_CONSUMER_KEY_0; }
	inline void set_TWITTER_CONSUMER_KEY_0(String_t* value)
	{
		___TWITTER_CONSUMER_KEY_0 = value;
		Il2CppCodeGenWriteBarrier(&___TWITTER_CONSUMER_KEY_0, value);
	}

	inline static int32_t get_offset_of_TWITTER_CONSUMER_SECRET_1() { return static_cast<int32_t>(offsetof(TwitterService_t3958793376, ___TWITTER_CONSUMER_SECRET_1)); }
	inline String_t* get_TWITTER_CONSUMER_SECRET_1() const { return ___TWITTER_CONSUMER_SECRET_1; }
	inline String_t** get_address_of_TWITTER_CONSUMER_SECRET_1() { return &___TWITTER_CONSUMER_SECRET_1; }
	inline void set_TWITTER_CONSUMER_SECRET_1(String_t* value)
	{
		___TWITTER_CONSUMER_SECRET_1 = value;
		Il2CppCodeGenWriteBarrier(&___TWITTER_CONSUMER_SECRET_1, value);
	}

	inline static int32_t get_offset_of_serviceInited_2() { return static_cast<int32_t>(offsetof(TwitterService_t3958793376, ___serviceInited_2)); }
	inline bool get_serviceInited_2() const { return ___serviceInited_2; }
	inline bool* get_address_of_serviceInited_2() { return &___serviceInited_2; }
	inline void set_serviceInited_2(bool value)
	{
		___serviceInited_2 = value;
	}

	inline static int32_t get_offset_of_twitterFriendsLoaded_3() { return static_cast<int32_t>(offsetof(TwitterService_t3958793376, ___twitterFriendsLoaded_3)); }
	inline bool get_twitterFriendsLoaded_3() const { return ___twitterFriendsLoaded_3; }
	inline bool* get_address_of_twitterFriendsLoaded_3() { return &___twitterFriendsLoaded_3; }
	inline void set_twitterFriendsLoaded_3(bool value)
	{
		___twitterFriendsLoaded_3 = value;
	}

	inline static int32_t get_offset_of__onTwitterFriendsLoaded_4() { return static_cast<int32_t>(offsetof(TwitterService_t3958793376, ____onTwitterFriendsLoaded_4)); }
	inline Action_t3226471752 * get__onTwitterFriendsLoaded_4() const { return ____onTwitterFriendsLoaded_4; }
	inline Action_t3226471752 ** get_address_of__onTwitterFriendsLoaded_4() { return &____onTwitterFriendsLoaded_4; }
	inline void set__onTwitterFriendsLoaded_4(Action_t3226471752 * value)
	{
		____onTwitterFriendsLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&____onTwitterFriendsLoaded_4, value);
	}

	inline static int32_t get_offset_of_twitterFriends_6() { return static_cast<int32_t>(offsetof(TwitterService_t3958793376, ___twitterFriends_6)); }
	inline List_1_t1037245339 * get_twitterFriends_6() const { return ___twitterFriends_6; }
	inline List_1_t1037245339 ** get_address_of_twitterFriends_6() { return &___twitterFriends_6; }
	inline void set_twitterFriends_6(List_1_t1037245339 * value)
	{
		___twitterFriends_6 = value;
		Il2CppCodeGenWriteBarrier(&___twitterFriends_6, value);
	}
};

struct TwitterService_t3958793376_StaticFields
{
public:
	// BetpalzUnity.Core.Services.TwitterService BetpalzUnity.Core.Services.TwitterService::_instance
	TwitterService_t3958793376 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(TwitterService_t3958793376_StaticFields, ____instance_5)); }
	inline TwitterService_t3958793376 * get__instance_5() const { return ____instance_5; }
	inline TwitterService_t3958793376 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(TwitterService_t3958793376 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
