#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t3627374100;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.LifecycleHelper
struct  LifecycleHelper_t337468626  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<System.Boolean> Prime31.LifecycleHelper::onApplicationPausedEvent
	Action_1_t3627374100 * ___onApplicationPausedEvent_2;

public:
	inline static int32_t get_offset_of_onApplicationPausedEvent_2() { return static_cast<int32_t>(offsetof(LifecycleHelper_t337468626, ___onApplicationPausedEvent_2)); }
	inline Action_1_t3627374100 * get_onApplicationPausedEvent_2() const { return ___onApplicationPausedEvent_2; }
	inline Action_1_t3627374100 ** get_address_of_onApplicationPausedEvent_2() { return &___onApplicationPausedEvent_2; }
	inline void set_onApplicationPausedEvent_2(Action_1_t3627374100 * value)
	{
		___onApplicationPausedEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___onApplicationPausedEvent_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
