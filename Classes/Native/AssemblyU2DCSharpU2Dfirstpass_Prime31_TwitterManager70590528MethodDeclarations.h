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

// Prime31.TwitterManager
struct TwitterManager_t70590528;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Prime31.TwitterManager::.cctor()
extern "C"  void TwitterManager__cctor_m337980239 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::.ctor()
extern "C"  void TwitterManager__ctor_m3539393058 (TwitterManager_t70590528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::add_loginSucceededEvent(System.Action`1<System.String>)
extern "C"  void TwitterManager_add_loginSucceededEvent_m4000886414 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::remove_loginSucceededEvent(System.Action`1<System.String>)
extern "C"  void TwitterManager_remove_loginSucceededEvent_m4005245613 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::add_loginFailedEvent(System.Action`1<System.String>)
extern "C"  void TwitterManager_add_loginFailedEvent_m3170372438 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::remove_loginFailedEvent(System.Action`1<System.String>)
extern "C"  void TwitterManager_remove_loginFailedEvent_m4055440057 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::add_requestDidFinishEvent(System.Action`1<System.Object>)
extern "C"  void TwitterManager_add_requestDidFinishEvent_m1195245225 (Il2CppObject * __this /* static, unused */, Action_1_t2491248677 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::remove_requestDidFinishEvent(System.Action`1<System.Object>)
extern "C"  void TwitterManager_remove_requestDidFinishEvent_m2316489216 (Il2CppObject * __this /* static, unused */, Action_1_t2491248677 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::add_requestDidFailEvent(System.Action`1<System.String>)
extern "C"  void TwitterManager_add_requestDidFailEvent_m1813467962 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::remove_requestDidFailEvent(System.Action`1<System.String>)
extern "C"  void TwitterManager_remove_requestDidFailEvent_m3275194483 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::add_tweetSheetCompletedEvent(System.Action`1<System.Boolean>)
extern "C"  void TwitterManager_add_tweetSheetCompletedEvent_m3910684522 (Il2CppObject * __this /* static, unused */, Action_1_t3627374100 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::remove_tweetSheetCompletedEvent(System.Action`1<System.Boolean>)
extern "C"  void TwitterManager_remove_tweetSheetCompletedEvent_m277673245 (Il2CppObject * __this /* static, unused */, Action_1_t3627374100 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::add_twitterInitializedEvent(System.Action)
extern "C"  void TwitterManager_add_twitterInitializedEvent_m1627115690 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::remove_twitterInitializedEvent(System.Action)
extern "C"  void TwitterManager_remove_twitterInitializedEvent_m3699663957 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::noop()
extern "C"  void TwitterManager_noop_m4266902144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::loginSucceeded(System.String)
extern "C"  void TwitterManager_loginSucceeded_m2252634104 (TwitterManager_t70590528 * __this, String_t* ___screenname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::loginFailed(System.String)
extern "C"  void TwitterManager_loginFailed_m1159954936 (TwitterManager_t70590528 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::requestSucceeded(System.String)
extern "C"  void TwitterManager_requestSucceeded_m3297162312 (TwitterManager_t70590528 * __this, String_t* ___results0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::requestFailed(System.String)
extern "C"  void TwitterManager_requestFailed_m2019636648 (TwitterManager_t70590528 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::tweetSheetCompleted(System.String)
extern "C"  void TwitterManager_tweetSheetCompleted_m949179623 (TwitterManager_t70590528 * __this, String_t* ___oneOrZero0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterManager::twitterInitialized()
extern "C"  void TwitterManager_twitterInitialized_m1600184277 (TwitterManager_t70590528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
