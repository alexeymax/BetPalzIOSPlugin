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

// BetpalzSDK.Betpalz
struct Betpalz_t3924986120;
// System.String
struct String_t;
// BetpalzSDK.Model.User
struct User_t1930024827;
// System.Collections.Generic.List`1<BetpalzSDK.Model.User>
struct List_1_t1299145959;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Item>
struct List_1_t3543933003;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge>
struct List_1_t2974994495;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>>
struct Dictionary_2_t3272972436;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>>
struct Dictionary_2_t297886366;
// BetpalzSDK.Parsers.ResponseParser
struct ResponseParser_t4075509322;
// BetpalzSDK.Parsers.ModelParser
struct ModelParser_t2520258128;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t1865222972;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action`2<System.Boolean,BetpalzSDK.Model.User>
struct Action_2_t1766027566;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Bet>>
struct Action_2_t2897423188;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t2525452034;
// System.Object
struct Il2CppObject;
// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge>>
struct Action_2_t2810997234;
// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>>
struct Action_2_t1194195913;
// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>>
struct Action_2_t3439337999;
// System.Action`2<System.Boolean,BetpalzSDK.Model.Challenge>
struct Action_2_t3441876102;
// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Item>>
struct Action_2_t3379935742;
// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.UserItem>>
struct Action_2_t1097211949;
// System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.User>>
struct Action_2_t1135148698;
// System.Action`2<System.Boolean,System.Int32>
struct Action_2_t1907880187;
// BetpalzSDK.Network.DataFetcher
struct DataFetcher_t2999813701;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Model_User1930024827.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Model_BetStatus2994445495.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Network_DataFetcher2999813701.h"

// System.Void BetpalzSDK.Betpalz::.ctor(System.String,System.String)
extern "C"  void Betpalz__ctor_m1408401585 (Betpalz_t3924986120 * __this, String_t* ___apiKey0, String_t* ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::.ctor(System.String,System.String,System.String)
extern "C"  void Betpalz__ctor_m3803744047 (Betpalz_t3924986120 * __this, String_t* ___serverUrl0, String_t* ___apiKey1, String_t* ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BetpalzSDK.Betpalz::get_AuthToken()
extern "C"  String_t* Betpalz_get_AuthToken_m2719664746 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::set_AuthToken(System.String)
extern "C"  void Betpalz_set_AuthToken_m3051087525 (Betpalz_t3924986120 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BetpalzSDK.Betpalz::get_CurrentUserId()
extern "C"  String_t* Betpalz_get_CurrentUserId_m2457594990 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::set_CurrentUserId(System.String)
extern "C"  void Betpalz_set_CurrentUserId_m2976345483 (Betpalz_t3924986120 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Betpalz::get_IsAuthorized()
extern "C"  bool Betpalz_get_IsAuthorized_m4260791921 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.User BetpalzSDK.Betpalz::get_CurrentUser()
extern "C"  User_t1930024827 * Betpalz_get_CurrentUser_m214113701 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::set_CurrentUser(BetpalzSDK.Model.User)
extern "C"  void Betpalz_set_CurrentUser_m543258032 (Betpalz_t3924986120 * __this, User_t1930024827 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.User> BetpalzSDK.Betpalz::get_Friends()
extern "C"  List_1_t1299145959 * Betpalz_get_Friends_m991414124 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::set_Friends(System.Collections.Generic.List`1<BetpalzSDK.Model.User>)
extern "C"  void Betpalz_set_Friends_m190803445 (Betpalz_t3924986120 * __this, List_1_t1299145959 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Item> BetpalzSDK.Betpalz::get_AllItems()
extern "C"  List_1_t3543933003 * Betpalz_get_AllItems_m141424796 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::set_AllItems(System.Collections.Generic.List`1<BetpalzSDK.Model.Item>)
extern "C"  void Betpalz_set_AllItems_m528082223 (Betpalz_t3924986120 * __this, List_1_t3543933003 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge> BetpalzSDK.Betpalz::get_Challenges()
extern "C"  List_1_t2974994495 * Betpalz_get_Challenges_m15073069 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::set_Challenges(System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge>)
extern "C"  void Betpalz_set_Challenges_m2224949414 (Betpalz_t3924986120 * __this, List_1_t2974994495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>> BetpalzSDK.Betpalz::get_ChallengesByStatus()
extern "C"  Dictionary_2_t3272972436 * Betpalz_get_ChallengesByStatus_m24407094 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::set_ChallengesByStatus(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>>)
extern "C"  void Betpalz_set_ChallengesByStatus_m3859607343 (Betpalz_t3924986120 * __this, Dictionary_2_t3272972436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>> BetpalzSDK.Betpalz::get_WagersByChallengeId()
extern "C"  Dictionary_2_t297886366 * Betpalz_get_WagersByChallengeId_m3084431169 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::set_WagersByChallengeId(System.Collections.Generic.Dictionary`2<System.Int64,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>>)
extern "C"  void Betpalz_set_WagersByChallengeId_m3534018346 (Betpalz_t3924986120 * __this, Dictionary_2_t297886366 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Parsers.ResponseParser BetpalzSDK.Betpalz::get_ResponseParser()
extern "C"  ResponseParser_t4075509322 * Betpalz_get_ResponseParser_m613195099 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Parsers.ModelParser BetpalzSDK.Betpalz::get_ModelParser()
extern "C"  ModelParser_t2520258128 * Betpalz_get_ModelParser_m1732786879 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::RegisterUser(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Action`2<System.Boolean,System.String>)
extern "C"  void Betpalz_RegisterUser_m1578185187 (Betpalz_t3924986120 * __this, String_t* ___username0, String_t* ___password1, String_t* ___firstName2, String_t* ___lastName3, String_t* ___email4, String_t* ___phoneNumber5, String_t* ___facebookId6, Action_2_t1865222972 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::AuthorizeUser(System.String,System.String,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_AuthorizeUser_m595913584 (Betpalz_t3924986120 * __this, String_t* ___username0, String_t* ___password1, Action_1_t3627374100 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::AuthorizeUser(System.String,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_AuthorizeUser_m1510335364 (Betpalz_t3924986120 * __this, String_t* ___facebookAccessToken0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::ValidateAccessToken(System.Action`1<System.Boolean>)
extern "C"  void Betpalz_ValidateAccessToken_m4103384745 (Betpalz_t3924986120 * __this, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::Logout()
extern "C"  void Betpalz_Logout_m3671096571 (Betpalz_t3924986120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetCurrentUser(System.Action`2<System.Boolean,BetpalzSDK.Model.User>)
extern "C"  void Betpalz_GetCurrentUser_m632193595 (Betpalz_t3924986120 * __this, Action_2_t1766027566 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::UpdateCurrentUser(System.String,System.String,System.String,System.String,System.String,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_UpdateCurrentUser_m359166907 (Betpalz_t3924986120 * __this, String_t* ___firstName0, String_t* ___lastName1, String_t* ___email2, String_t* ___phoneNumber3, String_t* ___password4, Action_1_t3627374100 * ___callback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::UploadImage(UnityEngine.Texture2D,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_UploadImage_m2153986822 (Betpalz_t3924986120 * __this, Texture2D_t3542995729 * ___texture0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::SetFacebookId(System.String,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_SetFacebookId_m695046749 (Betpalz_t3924986120 * __this, String_t* ___facebookUserId0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetUser(System.Int64,System.Action`2<System.Boolean,BetpalzSDK.Model.User>)
extern "C"  void Betpalz_GetUser_m4228998978 (Betpalz_t3924986120 * __this, int64_t ___userId0, Action_2_t1766027566 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetBetsForFeed(BetpalzSDK.Model.BetStatus,System.Int32,System.Int32,System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Bet>>)
extern "C"  void Betpalz_GetBetsForFeed_m2515095740 (Betpalz_t3924986120 * __this, int32_t ___status0, int32_t ___count1, int32_t ___page2, Action_2_t2897423188 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::CreateBet(System.String,System.String,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Action`2<System.Boolean,System.Object>)
extern "C"  void Betpalz_CreateBet_m2555933660 (Betpalz_t3924986120 * __this, String_t* ___challengeString0, String_t* ___type1, String_t* ___username2, int32_t ___coins3, int32_t ___itemId4, int32_t ___itemCount5, int32_t ___applicationId6, Action_2_t2525452034 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::ToggleLikeBet(System.Int64,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_ToggleLikeBet_m3149258170 (Betpalz_t3924986120 * __this, int64_t ___betId0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::UpdateBetImage(System.Int64,System.Object,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_UpdateBetImage_m372447221 (Betpalz_t3924986120 * __this, int64_t ___betId0, Il2CppObject * ___image1, Action_1_t3627374100 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetBetImage(System.Int64,System.Int32,System.Action`2<System.Boolean,System.Object>)
extern "C"  void Betpalz_GetBetImage_m1837269260 (Betpalz_t3924986120 * __this, int64_t ___betId0, int32_t ___size1, Action_2_t2525452034 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::AddCommentForChallenge(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_AddCommentForChallenge_m387608092 (Betpalz_t3924986120 * __this, int64_t ___challengeId0, String_t* ___comment1, Action_1_t3627374100 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::PokeUser(System.Int64,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_PokeUser_m4258369902 (Betpalz_t3924986120 * __this, int64_t ___challengeId0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::CreateChallenge(System.String,System.Int64,System.Int64,System.Int64,System.Int64,System.Int64,System.Int64,System.Action`2<System.Boolean,System.String>)
extern "C"  void Betpalz_CreateChallenge_m2932521052 (Betpalz_t3924986120 * __this, String_t* ___opponentUserId0, int64_t ___creatorCoinsCount1, int64_t ___creatorItemId2, int64_t ___creatorItemCount3, int64_t ___opponentCoinsCount4, int64_t ___opponentItemId5, int64_t ___opponentItemCount6, Action_2_t1865222972 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetChallenges(System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge>>)
extern "C"  void Betpalz_GetChallenges_m226324795 (Betpalz_t3924986120 * __this, Action_2_t2810997234 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetChallengesByStatus(System.String,System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>>,System.Int32)
extern "C"  void Betpalz_GetChallengesByStatus_m4210976110 (Betpalz_t3924986120 * __this, String_t* ___status0, Action_2_t1194195913 * ___callback1, int32_t ___limit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetChallengeWagers(System.Int64,System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>>)
extern "C"  void Betpalz_GetChallengeWagers_m985953950 (Betpalz_t3924986120 * __this, int64_t ___challengeId0, Action_2_t3439337999 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetOpponentsForChallenge(System.Int64,System.Action`2<System.Boolean,BetpalzSDK.Model.Challenge>)
extern "C"  void Betpalz_GetOpponentsForChallenge_m127045493 (Betpalz_t3924986120 * __this, int64_t ___challengeId0, Action_2_t3441876102 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::AcceptChallenge(System.Int64,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_AcceptChallenge_m1523293137 (Betpalz_t3924986120 * __this, int64_t ___challengeId0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::DeclineChallenge(System.Int64,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_DeclineChallenge_m3379343525 (Betpalz_t3924986120 * __this, int64_t ___challengeId0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetAllItems(System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.Item>>)
extern "C"  void Betpalz_GetAllItems_m387925920 (Betpalz_t3924986120 * __this, Action_2_t3379935742 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetUserItems(System.String,System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.UserItem>>)
extern "C"  void Betpalz_GetUserItems_m3088795433 (Betpalz_t3924986120 * __this, String_t* ___userId0, Action_2_t1097211949 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetFriends(System.Action`2<System.Boolean,System.Collections.Generic.List`1<BetpalzSDK.Model.User>>)
extern "C"  void Betpalz_GetFriends_m397341432 (Betpalz_t3924986120 * __this, Action_2_t1135148698 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::GetCountCoins(System.String,System.Action`2<System.Boolean,System.Int32>)
extern "C"  void Betpalz_GetCountCoins_m2538230385 (Betpalz_t3924986120 * __this, String_t* ___userId0, Action_2_t1907880187 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Betpalz::APIResponseProcessDefault(BetpalzSDK.Network.DataFetcher,System.Action`1<System.Boolean>)
extern "C"  void Betpalz_APIResponseProcessDefault_m353220600 (Betpalz_t3924986120 * __this, DataFetcher_t2999813701 * ___dataFetcher0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BetpalzSDK.Betpalz::GetUrl(System.String)
extern "C"  String_t* Betpalz_GetUrl_m1406332547 (Betpalz_t3924986120 * __this, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
