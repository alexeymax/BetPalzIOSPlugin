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

// BetpalzUnity.Core.Services.TwitterService
struct TwitterService_t3958793376;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BetpalzUnity.Core.Services.TwitterService::.ctor()
extern "C"  void TwitterService__ctor_m3596211395 (TwitterService_t3958793376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action BetpalzUnity.Core.Services.TwitterService::get_onTwitterFriednsLoaded()
extern "C"  Action_t3226471752 * TwitterService_get_onTwitterFriednsLoaded_m2190453008 (TwitterService_t3958793376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.TwitterService::set_onTwitterFriednsLoaded(System.Action)
extern "C"  void TwitterService_set_onTwitterFriednsLoaded_m1748558337 (TwitterService_t3958793376 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzUnity.Core.Services.TwitterService BetpalzUnity.Core.Services.TwitterService::Instance()
extern "C"  TwitterService_t3958793376 * TwitterService_Instance_m3387565009 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.TwitterService::twitterInitialized()
extern "C"  void TwitterService_twitterInitialized_m3382365282 (TwitterService_t3958793376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.TwitterService::twitterSucessLogin(System.String)
extern "C"  void TwitterService_twitterSucessLogin_m3715168283 (TwitterService_t3958793376 * __this, String_t* ___screenName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.TwitterService::requestSucceeded(System.Object)
extern "C"  void TwitterService_requestSucceeded_m2684037891 (TwitterService_t3958793376 * __this, Il2CppObject * ___results0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.TwitterService::getFollowersList()
extern "C"  void TwitterService_getFollowersList_m2952464754 (TwitterService_t3958793376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.TwitterService::requestFailed(System.String)
extern "C"  void TwitterService_requestFailed_m3796259039 (TwitterService_t3958793376 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.TwitterService::twitterFailedLogin(System.String)
extern "C"  void TwitterService_twitterFailedLogin_m1279997984 (TwitterService_t3958793376 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.TwitterService::.cctor()
extern "C"  void TwitterService__cctor_m3782212036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
