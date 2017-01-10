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

// BetpalzUnity.Core.Services.FacebookService
struct FacebookService_t3621199521;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action`1<System.Collections.Generic.List`1<BetpalzUnity.Core.Services.Facebook.Model.FacebookFriend>>
struct Action_1_t2001596014;
// System.Action`1<System.Collections.Generic.List`1<BetpalzUnity.Core.Services.Facebook.Model.FacebookFriendList>>
struct Action_1_t2615402692;
// System.String
struct String_t;
// Facebook.Unity.IGraphResult
struct IGraphResult_t3984946686;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BetpalzUnity.Core.Services.FacebookService::.ctor()
extern "C"  void FacebookService__ctor_m1344528434 (FacebookService_t3621199521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.FacebookService::GetAccessToken(System.Action`1<System.String>)
extern "C"  void FacebookService_GetAccessToken_m1417358723 (FacebookService_t3621199521 * __this, Action_1_t1831019615 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.FacebookService::GetPublishPermissions(System.Action`1<System.Boolean>)
extern "C"  void FacebookService_GetPublishPermissions_m1446500866 (FacebookService_t3621199521 * __this, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.FacebookService::GetAllFriends(System.Action`1<System.Collections.Generic.List`1<BetpalzUnity.Core.Services.Facebook.Model.FacebookFriend>>)
extern "C"  void FacebookService_GetAllFriends_m3853043877 (FacebookService_t3621199521 * __this, Action_1_t2001596014 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.FacebookService::GetFriendLists(System.Action`1<System.Collections.Generic.List`1<BetpalzUnity.Core.Services.Facebook.Model.FacebookFriendList>>)
extern "C"  void FacebookService_GetFriendLists_m2182003318 (FacebookService_t3621199521 * __this, Action_1_t2615402692 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.FacebookService::GetFriends(System.String,System.Action`1<System.Collections.Generic.List`1<BetpalzUnity.Core.Services.Facebook.Model.FacebookFriend>>)
extern "C"  void FacebookService_GetFriends_m401694622 (FacebookService_t3621199521 * __this, String_t* ___facebookFriendListId0, Action_1_t2001596014 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.FacebookService::<GetFriendLists>m__0(Facebook.Unity.IGraphResult)
extern "C"  void FacebookService_U3CGetFriendListsU3Em__0_m3699780039 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Services.FacebookService::<GetFriends>m__1(Facebook.Unity.IGraphResult)
extern "C"  void FacebookService_U3CGetFriendsU3Em__1_m2857015748 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
