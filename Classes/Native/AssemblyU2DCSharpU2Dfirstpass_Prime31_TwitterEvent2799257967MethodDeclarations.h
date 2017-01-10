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

// Prime31.TwitterEventListener
struct TwitterEventListener_t2799257967;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Prime31.TwitterEventListener::.ctor()
extern "C"  void TwitterEventListener__ctor_m384197969 (TwitterEventListener_t2799257967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterEventListener::OnEnable()
extern "C"  void TwitterEventListener_OnEnable_m1751867121 (TwitterEventListener_t2799257967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterEventListener::OnDisable()
extern "C"  void TwitterEventListener_OnDisable_m495350948 (TwitterEventListener_t2799257967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterEventListener::twitterInitializedEvent()
extern "C"  void TwitterEventListener_twitterInitializedEvent_m733695358 (TwitterEventListener_t2799257967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterEventListener::loginSucceeded(System.String)
extern "C"  void TwitterEventListener_loginSucceeded_m1135989403 (TwitterEventListener_t2799257967 * __this, String_t* ___username0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterEventListener::loginFailed(System.String)
extern "C"  void TwitterEventListener_loginFailed_m1309404091 (TwitterEventListener_t2799257967 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterEventListener::requestDidFailEvent(System.String)
extern "C"  void TwitterEventListener_requestDidFailEvent_m3330900189 (TwitterEventListener_t2799257967 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterEventListener::requestDidFinishEvent(System.Object)
extern "C"  void TwitterEventListener_requestDidFinishEvent_m1783019068 (TwitterEventListener_t2799257967 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterEventListener::tweetSheetCompletedEvent(System.Boolean)
extern "C"  void TwitterEventListener_tweetSheetCompletedEvent_m19427255 (TwitterEventListener_t2799257967 * __this, bool ___didSucceed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
