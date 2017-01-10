#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.TwitterManager
struct  TwitterManager_t70590528  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct TwitterManager_t70590528_StaticFields
{
public:
	// System.Action`1<System.String> Prime31.TwitterManager::loginSucceededEvent
	Action_1_t1831019615 * ___loginSucceededEvent_2;
	// System.Action`1<System.String> Prime31.TwitterManager::loginFailedEvent
	Action_1_t1831019615 * ___loginFailedEvent_3;
	// System.Action`1<System.Object> Prime31.TwitterManager::requestDidFinishEvent
	Action_1_t2491248677 * ___requestDidFinishEvent_4;
	// System.Action`1<System.String> Prime31.TwitterManager::requestDidFailEvent
	Action_1_t1831019615 * ___requestDidFailEvent_5;
	// System.Action`1<System.Boolean> Prime31.TwitterManager::tweetSheetCompletedEvent
	Action_1_t3627374100 * ___tweetSheetCompletedEvent_6;
	// System.Action Prime31.TwitterManager::twitterInitializedEvent
	Action_t3226471752 * ___twitterInitializedEvent_7;

public:
	inline static int32_t get_offset_of_loginSucceededEvent_2() { return static_cast<int32_t>(offsetof(TwitterManager_t70590528_StaticFields, ___loginSucceededEvent_2)); }
	inline Action_1_t1831019615 * get_loginSucceededEvent_2() const { return ___loginSucceededEvent_2; }
	inline Action_1_t1831019615 ** get_address_of_loginSucceededEvent_2() { return &___loginSucceededEvent_2; }
	inline void set_loginSucceededEvent_2(Action_1_t1831019615 * value)
	{
		___loginSucceededEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___loginSucceededEvent_2, value);
	}

	inline static int32_t get_offset_of_loginFailedEvent_3() { return static_cast<int32_t>(offsetof(TwitterManager_t70590528_StaticFields, ___loginFailedEvent_3)); }
	inline Action_1_t1831019615 * get_loginFailedEvent_3() const { return ___loginFailedEvent_3; }
	inline Action_1_t1831019615 ** get_address_of_loginFailedEvent_3() { return &___loginFailedEvent_3; }
	inline void set_loginFailedEvent_3(Action_1_t1831019615 * value)
	{
		___loginFailedEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___loginFailedEvent_3, value);
	}

	inline static int32_t get_offset_of_requestDidFinishEvent_4() { return static_cast<int32_t>(offsetof(TwitterManager_t70590528_StaticFields, ___requestDidFinishEvent_4)); }
	inline Action_1_t2491248677 * get_requestDidFinishEvent_4() const { return ___requestDidFinishEvent_4; }
	inline Action_1_t2491248677 ** get_address_of_requestDidFinishEvent_4() { return &___requestDidFinishEvent_4; }
	inline void set_requestDidFinishEvent_4(Action_1_t2491248677 * value)
	{
		___requestDidFinishEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___requestDidFinishEvent_4, value);
	}

	inline static int32_t get_offset_of_requestDidFailEvent_5() { return static_cast<int32_t>(offsetof(TwitterManager_t70590528_StaticFields, ___requestDidFailEvent_5)); }
	inline Action_1_t1831019615 * get_requestDidFailEvent_5() const { return ___requestDidFailEvent_5; }
	inline Action_1_t1831019615 ** get_address_of_requestDidFailEvent_5() { return &___requestDidFailEvent_5; }
	inline void set_requestDidFailEvent_5(Action_1_t1831019615 * value)
	{
		___requestDidFailEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___requestDidFailEvent_5, value);
	}

	inline static int32_t get_offset_of_tweetSheetCompletedEvent_6() { return static_cast<int32_t>(offsetof(TwitterManager_t70590528_StaticFields, ___tweetSheetCompletedEvent_6)); }
	inline Action_1_t3627374100 * get_tweetSheetCompletedEvent_6() const { return ___tweetSheetCompletedEvent_6; }
	inline Action_1_t3627374100 ** get_address_of_tweetSheetCompletedEvent_6() { return &___tweetSheetCompletedEvent_6; }
	inline void set_tweetSheetCompletedEvent_6(Action_1_t3627374100 * value)
	{
		___tweetSheetCompletedEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___tweetSheetCompletedEvent_6, value);
	}

	inline static int32_t get_offset_of_twitterInitializedEvent_7() { return static_cast<int32_t>(offsetof(TwitterManager_t70590528_StaticFields, ___twitterInitializedEvent_7)); }
	inline Action_t3226471752 * get_twitterInitializedEvent_7() const { return ___twitterInitializedEvent_7; }
	inline Action_t3226471752 ** get_address_of_twitterInitializedEvent_7() { return &___twitterInitializedEvent_7; }
	inline void set_twitterInitializedEvent_7(Action_t3226471752 * value)
	{
		___twitterInitializedEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___twitterInitializedEvent_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
