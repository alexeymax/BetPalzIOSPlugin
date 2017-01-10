#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.iOS.RemoteNotification
struct RemoteNotification_t2254252895;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_iOS_NotificationType3745088907.h"

// System.Int32 UnityEngine.iOS.NotificationServices::get_remoteNotificationCount()
extern "C"  int32_t NotificationServices_get_remoteNotificationCount_m2799459672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification UnityEngine.iOS.NotificationServices::GetRemoteNotification(System.Int32)
extern "C"  RemoteNotification_t2254252895 * NotificationServices_GetRemoteNotification_m643701861 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.NotificationType UnityEngine.iOS.NotificationServices::get_enabledNotificationTypes()
extern "C"  int32_t NotificationServices_get_enabledNotificationTypes_m3350494525 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
