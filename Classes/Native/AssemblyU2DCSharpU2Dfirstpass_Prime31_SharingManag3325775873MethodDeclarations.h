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

// Prime31.SharingManager
struct SharingManager_t3325775873;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Collections.Generic.List`1<System.String>>
struct Action_1_t1200140747;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Prime31.SharingManager::.cctor()
extern "C"  void SharingManager__cctor_m3020320028 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::.ctor()
extern "C"  void SharingManager__ctor_m953925353 (SharingManager_t3325775873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::add_sharingFinishedWithActivityTypeEvent(System.Action`1<System.String>)
extern "C"  void SharingManager_add_sharingFinishedWithActivityTypeEvent_m2689402590 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::remove_sharingFinishedWithActivityTypeEvent(System.Action`1<System.String>)
extern "C"  void SharingManager_remove_sharingFinishedWithActivityTypeEvent_m10057501 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::add_sharingCancelledEvent(System.Action)
extern "C"  void SharingManager_add_sharingCancelledEvent_m3133893273 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::remove_sharingCancelledEvent(System.Action)
extern "C"  void SharingManager_remove_sharingCancelledEvent_m3851981762 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::add_accessGrantedForAccountsWithUsernamesEvent(System.Action`1<System.Collections.Generic.List`1<System.String>>)
extern "C"  void SharingManager_add_accessGrantedForAccountsWithUsernamesEvent_m4079231450 (Il2CppObject * __this /* static, unused */, Action_1_t1200140747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::remove_accessGrantedForAccountsWithUsernamesEvent(System.Action`1<System.Collections.Generic.List`1<System.String>>)
extern "C"  void SharingManager_remove_accessGrantedForAccountsWithUsernamesEvent_m1069497403 (Il2CppObject * __this /* static, unused */, Action_1_t1200140747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::add_accessDeniedToAccountsEvent(System.Action`1<System.String>)
extern "C"  void SharingManager_add_accessDeniedToAccountsEvent_m1757151325 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::remove_accessDeniedToAccountsEvent(System.Action`1<System.String>)
extern "C"  void SharingManager_remove_accessDeniedToAccountsEvent_m682399884 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::add_requestSucceededEvent(System.Action`1<System.String>)
extern "C"  void SharingManager_add_requestSucceededEvent_m1993296049 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::remove_requestSucceededEvent(System.Action`1<System.String>)
extern "C"  void SharingManager_remove_requestSucceededEvent_m1209529694 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::add_requestFailedEvent(System.Action`1<System.String>)
extern "C"  void SharingManager_add_requestFailedEvent_m3771322565 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::remove_requestFailedEvent(System.Action`1<System.String>)
extern "C"  void SharingManager_remove_requestFailedEvent_m1716116134 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::sharingFinishedWithActivityType(System.String)
extern "C"  void SharingManager_sharingFinishedWithActivityType_m373295736 (SharingManager_t3325775873 * __this, String_t* ___activityType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::sharingCancelled(System.String)
extern "C"  void SharingManager_sharingCancelled_m4212084300 (SharingManager_t3325775873 * __this, String_t* ___empty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::accessGrantedForAccountsWithUsernames(System.String)
extern "C"  void SharingManager_accessGrantedForAccountsWithUsernames_m1157468618 (SharingManager_t3325775873 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::accessDeniedToAccounts(System.String)
extern "C"  void SharingManager_accessDeniedToAccounts_m2139464149 (SharingManager_t3325775873 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::requestSucceeded(System.String)
extern "C"  void SharingManager_requestSucceeded_m4111057897 (SharingManager_t3325775873 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingManager::requestFailedWithError(System.String)
extern "C"  void SharingManager_requestFailedWithError_m30513267 (SharingManager_t3325775873 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
