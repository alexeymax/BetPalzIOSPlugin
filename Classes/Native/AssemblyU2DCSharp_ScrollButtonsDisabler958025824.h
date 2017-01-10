#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BaseScrollView
struct BaseScrollView_t1162388975;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t2241232412;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollButtonsDisabler
struct  ScrollButtonsDisabler_t958025824  : public MonoBehaviour_t1158329972
{
public:
	// BaseScrollView ScrollButtonsDisabler::scrollView
	BaseScrollView_t1162388975 * ___scrollView_2;
	// UnityEngine.UI.ScrollRect ScrollButtonsDisabler::sr
	ScrollRect_t1199013257 * ___sr_3;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> ScrollButtonsDisabler::buttonsToLock
	List_1_t2241232412 * ___buttonsToLock_4;
	// System.Single ScrollButtonsDisabler::blockVelocity
	float ___blockVelocity_5;
	// System.Single ScrollButtonsDisabler::waitTime
	float ___waitTime_6;
	// System.Boolean ScrollButtonsDisabler::areButtonsLocked
	bool ___areButtonsLocked_7;
	// System.Boolean ScrollButtonsDisabler::dragEnded
	bool ___dragEnded_8;
	// System.Single ScrollButtonsDisabler::counter
	float ___counter_9;
	// System.Int32 ScrollButtonsDisabler::preloadInScroll
	int32_t ___preloadInScroll_10;
	// System.Int32 ScrollButtonsDisabler::preloadInIdle
	int32_t ___preloadInIdle_11;

public:
	inline static int32_t get_offset_of_scrollView_2() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___scrollView_2)); }
	inline BaseScrollView_t1162388975 * get_scrollView_2() const { return ___scrollView_2; }
	inline BaseScrollView_t1162388975 ** get_address_of_scrollView_2() { return &___scrollView_2; }
	inline void set_scrollView_2(BaseScrollView_t1162388975 * value)
	{
		___scrollView_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrollView_2, value);
	}

	inline static int32_t get_offset_of_sr_3() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___sr_3)); }
	inline ScrollRect_t1199013257 * get_sr_3() const { return ___sr_3; }
	inline ScrollRect_t1199013257 ** get_address_of_sr_3() { return &___sr_3; }
	inline void set_sr_3(ScrollRect_t1199013257 * value)
	{
		___sr_3 = value;
		Il2CppCodeGenWriteBarrier(&___sr_3, value);
	}

	inline static int32_t get_offset_of_buttonsToLock_4() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___buttonsToLock_4)); }
	inline List_1_t2241232412 * get_buttonsToLock_4() const { return ___buttonsToLock_4; }
	inline List_1_t2241232412 ** get_address_of_buttonsToLock_4() { return &___buttonsToLock_4; }
	inline void set_buttonsToLock_4(List_1_t2241232412 * value)
	{
		___buttonsToLock_4 = value;
		Il2CppCodeGenWriteBarrier(&___buttonsToLock_4, value);
	}

	inline static int32_t get_offset_of_blockVelocity_5() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___blockVelocity_5)); }
	inline float get_blockVelocity_5() const { return ___blockVelocity_5; }
	inline float* get_address_of_blockVelocity_5() { return &___blockVelocity_5; }
	inline void set_blockVelocity_5(float value)
	{
		___blockVelocity_5 = value;
	}

	inline static int32_t get_offset_of_waitTime_6() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___waitTime_6)); }
	inline float get_waitTime_6() const { return ___waitTime_6; }
	inline float* get_address_of_waitTime_6() { return &___waitTime_6; }
	inline void set_waitTime_6(float value)
	{
		___waitTime_6 = value;
	}

	inline static int32_t get_offset_of_areButtonsLocked_7() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___areButtonsLocked_7)); }
	inline bool get_areButtonsLocked_7() const { return ___areButtonsLocked_7; }
	inline bool* get_address_of_areButtonsLocked_7() { return &___areButtonsLocked_7; }
	inline void set_areButtonsLocked_7(bool value)
	{
		___areButtonsLocked_7 = value;
	}

	inline static int32_t get_offset_of_dragEnded_8() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___dragEnded_8)); }
	inline bool get_dragEnded_8() const { return ___dragEnded_8; }
	inline bool* get_address_of_dragEnded_8() { return &___dragEnded_8; }
	inline void set_dragEnded_8(bool value)
	{
		___dragEnded_8 = value;
	}

	inline static int32_t get_offset_of_counter_9() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___counter_9)); }
	inline float get_counter_9() const { return ___counter_9; }
	inline float* get_address_of_counter_9() { return &___counter_9; }
	inline void set_counter_9(float value)
	{
		___counter_9 = value;
	}

	inline static int32_t get_offset_of_preloadInScroll_10() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___preloadInScroll_10)); }
	inline int32_t get_preloadInScroll_10() const { return ___preloadInScroll_10; }
	inline int32_t* get_address_of_preloadInScroll_10() { return &___preloadInScroll_10; }
	inline void set_preloadInScroll_10(int32_t value)
	{
		___preloadInScroll_10 = value;
	}

	inline static int32_t get_offset_of_preloadInIdle_11() { return static_cast<int32_t>(offsetof(ScrollButtonsDisabler_t958025824, ___preloadInIdle_11)); }
	inline int32_t get_preloadInIdle_11() const { return ___preloadInIdle_11; }
	inline int32_t* get_address_of_preloadInIdle_11() { return &___preloadInIdle_11; }
	inline void set_preloadInIdle_11(int32_t value)
	{
		___preloadInIdle_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
