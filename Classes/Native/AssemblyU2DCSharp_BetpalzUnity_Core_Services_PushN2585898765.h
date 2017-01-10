#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// BetpalzUnity.Core.Services.PushNotificationsService
struct PushNotificationsService_t2585898765;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzUnity.Core.Services.PushNotificationsService
struct  PushNotificationsService_t2585898765  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.ArrayList BetpalzUnity.Core.Services.PushNotificationsService::notificationItems
	ArrayList_t4252133567 * ___notificationItems_2;

public:
	inline static int32_t get_offset_of_notificationItems_2() { return static_cast<int32_t>(offsetof(PushNotificationsService_t2585898765, ___notificationItems_2)); }
	inline ArrayList_t4252133567 * get_notificationItems_2() const { return ___notificationItems_2; }
	inline ArrayList_t4252133567 ** get_address_of_notificationItems_2() { return &___notificationItems_2; }
	inline void set_notificationItems_2(ArrayList_t4252133567 * value)
	{
		___notificationItems_2 = value;
		Il2CppCodeGenWriteBarrier(&___notificationItems_2, value);
	}
};

struct PushNotificationsService_t2585898765_StaticFields
{
public:
	// BetpalzUnity.Core.Services.PushNotificationsService BetpalzUnity.Core.Services.PushNotificationsService::_instance
	PushNotificationsService_t2585898765 * ____instance_3;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(PushNotificationsService_t2585898765_StaticFields, ____instance_3)); }
	inline PushNotificationsService_t2585898765 * get__instance_3() const { return ____instance_3; }
	inline PushNotificationsService_t2585898765 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(PushNotificationsService_t2585898765 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
