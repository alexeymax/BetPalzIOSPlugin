#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.ThreadingCallbackHelper
struct  ThreadingCallbackHelper_t3782680035  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.Action> Prime31.ThreadingCallbackHelper::_actions
	List_1_t2595592884 * ____actions_2;
	// System.Collections.Generic.List`1<System.Action> Prime31.ThreadingCallbackHelper::_currentActions
	List_1_t2595592884 * ____currentActions_3;

public:
	inline static int32_t get_offset_of__actions_2() { return static_cast<int32_t>(offsetof(ThreadingCallbackHelper_t3782680035, ____actions_2)); }
	inline List_1_t2595592884 * get__actions_2() const { return ____actions_2; }
	inline List_1_t2595592884 ** get_address_of__actions_2() { return &____actions_2; }
	inline void set__actions_2(List_1_t2595592884 * value)
	{
		____actions_2 = value;
		Il2CppCodeGenWriteBarrier(&____actions_2, value);
	}

	inline static int32_t get_offset_of__currentActions_3() { return static_cast<int32_t>(offsetof(ThreadingCallbackHelper_t3782680035, ____currentActions_3)); }
	inline List_1_t2595592884 * get__currentActions_3() const { return ____currentActions_3; }
	inline List_1_t2595592884 ** get_address_of__currentActions_3() { return &____currentActions_3; }
	inline void set__currentActions_3(List_1_t2595592884 * value)
	{
		____currentActions_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentActions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
