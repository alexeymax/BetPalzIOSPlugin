#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Prime31.LifecycleHelper
struct LifecycleHelper_t337468626;
// Prime31.ThreadingCallbackHelper
struct ThreadingCallbackHelper_t3782680035;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.AbstractManager
struct  AbstractManager_t1005944057  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct AbstractManager_t1005944057_StaticFields
{
public:
	// Prime31.LifecycleHelper Prime31.AbstractManager::_prime31LifecycleHelperRef
	LifecycleHelper_t337468626 * ____prime31LifecycleHelperRef_2;
	// Prime31.ThreadingCallbackHelper Prime31.AbstractManager::_threadingCallbackHelper
	ThreadingCallbackHelper_t3782680035 * ____threadingCallbackHelper_3;
	// UnityEngine.GameObject Prime31.AbstractManager::_prime31GameObject
	GameObject_t1756533147 * ____prime31GameObject_4;

public:
	inline static int32_t get_offset_of__prime31LifecycleHelperRef_2() { return static_cast<int32_t>(offsetof(AbstractManager_t1005944057_StaticFields, ____prime31LifecycleHelperRef_2)); }
	inline LifecycleHelper_t337468626 * get__prime31LifecycleHelperRef_2() const { return ____prime31LifecycleHelperRef_2; }
	inline LifecycleHelper_t337468626 ** get_address_of__prime31LifecycleHelperRef_2() { return &____prime31LifecycleHelperRef_2; }
	inline void set__prime31LifecycleHelperRef_2(LifecycleHelper_t337468626 * value)
	{
		____prime31LifecycleHelperRef_2 = value;
		Il2CppCodeGenWriteBarrier(&____prime31LifecycleHelperRef_2, value);
	}

	inline static int32_t get_offset_of__threadingCallbackHelper_3() { return static_cast<int32_t>(offsetof(AbstractManager_t1005944057_StaticFields, ____threadingCallbackHelper_3)); }
	inline ThreadingCallbackHelper_t3782680035 * get__threadingCallbackHelper_3() const { return ____threadingCallbackHelper_3; }
	inline ThreadingCallbackHelper_t3782680035 ** get_address_of__threadingCallbackHelper_3() { return &____threadingCallbackHelper_3; }
	inline void set__threadingCallbackHelper_3(ThreadingCallbackHelper_t3782680035 * value)
	{
		____threadingCallbackHelper_3 = value;
		Il2CppCodeGenWriteBarrier(&____threadingCallbackHelper_3, value);
	}

	inline static int32_t get_offset_of__prime31GameObject_4() { return static_cast<int32_t>(offsetof(AbstractManager_t1005944057_StaticFields, ____prime31GameObject_4)); }
	inline GameObject_t1756533147 * get__prime31GameObject_4() const { return ____prime31GameObject_4; }
	inline GameObject_t1756533147 ** get_address_of__prime31GameObject_4() { return &____prime31GameObject_4; }
	inline void set__prime31GameObject_4(GameObject_t1756533147 * value)
	{
		____prime31GameObject_4 = value;
		Il2CppCodeGenWriteBarrier(&____prime31GameObject_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
