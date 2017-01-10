#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<BetpalzSDK.Network.DataFetcher>
struct List_1_t2368934833;
// System.Collections.Generic.List`1<BetpalzSDK.Network.OnResponseAvailable>
struct List_1_t736148469;
// BetpalzSDK.Network.NetworkManager
struct NetworkManager_t263083499;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Network.NetworkManager
struct  NetworkManager_t263083499  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<BetpalzSDK.Network.DataFetcher> BetpalzSDK.Network.NetworkManager::_fetchers
	List_1_t2368934833 * ____fetchers_3;
	// System.Collections.Generic.List`1<BetpalzSDK.Network.OnResponseAvailable> BetpalzSDK.Network.NetworkManager::_responseAvailableCallbacks
	List_1_t736148469 * ____responseAvailableCallbacks_4;

public:
	inline static int32_t get_offset_of__fetchers_3() { return static_cast<int32_t>(offsetof(NetworkManager_t263083499, ____fetchers_3)); }
	inline List_1_t2368934833 * get__fetchers_3() const { return ____fetchers_3; }
	inline List_1_t2368934833 ** get_address_of__fetchers_3() { return &____fetchers_3; }
	inline void set__fetchers_3(List_1_t2368934833 * value)
	{
		____fetchers_3 = value;
		Il2CppCodeGenWriteBarrier(&____fetchers_3, value);
	}

	inline static int32_t get_offset_of__responseAvailableCallbacks_4() { return static_cast<int32_t>(offsetof(NetworkManager_t263083499, ____responseAvailableCallbacks_4)); }
	inline List_1_t736148469 * get__responseAvailableCallbacks_4() const { return ____responseAvailableCallbacks_4; }
	inline List_1_t736148469 ** get_address_of__responseAvailableCallbacks_4() { return &____responseAvailableCallbacks_4; }
	inline void set__responseAvailableCallbacks_4(List_1_t736148469 * value)
	{
		____responseAvailableCallbacks_4 = value;
		Il2CppCodeGenWriteBarrier(&____responseAvailableCallbacks_4, value);
	}
};

struct NetworkManager_t263083499_StaticFields
{
public:
	// System.Object BetpalzSDK.Network.NetworkManager::_threadLocker
	Il2CppObject * ____threadLocker_2;
	// BetpalzSDK.Network.NetworkManager BetpalzSDK.Network.NetworkManager::_instance
	NetworkManager_t263083499 * ____instance_5;

public:
	inline static int32_t get_offset_of__threadLocker_2() { return static_cast<int32_t>(offsetof(NetworkManager_t263083499_StaticFields, ____threadLocker_2)); }
	inline Il2CppObject * get__threadLocker_2() const { return ____threadLocker_2; }
	inline Il2CppObject ** get_address_of__threadLocker_2() { return &____threadLocker_2; }
	inline void set__threadLocker_2(Il2CppObject * value)
	{
		____threadLocker_2 = value;
		Il2CppCodeGenWriteBarrier(&____threadLocker_2, value);
	}

	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(NetworkManager_t263083499_StaticFields, ____instance_5)); }
	inline NetworkManager_t263083499 * get__instance_5() const { return ____instance_5; }
	inline NetworkManager_t263083499 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(NetworkManager_t263083499 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
