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

// BetpalzSDK.Parsers.ModelParser
struct ModelParser_t2520258128;
// System.Collections.Generic.List`1<BetpalzSDK.Model.User>
struct List_1_t1299145959;
// System.String
struct String_t;
// BetpalzSDK.Model.User
struct User_t1930024827;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.List`1<BetpalzSDK.Model.UserItem>
struct List_1_t1261209210;
// BetpalzSDK.Model.UserItem
struct UserItem_t1892088078;
// BetpalzSDK.Model.UserScore
struct UserScore_t3562511325;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Bet>
struct List_1_t3061420449;
// BetpalzSDK.Model.Bet
struct Bet_t3692299317;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge>
struct List_1_t2974994495;
// BetpalzSDK.Model.Challenge
struct Challenge_t3605873363;
// System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>
struct List_1_t1358193174;
// BetpalzSDK.Model.ChallengeModel
struct ChallengeModel_t1989072042;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Item>
struct List_1_t3543933003;
// BetpalzSDK.Model.Item
struct Item_t4174811871;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent>
struct List_1_t225048585;
// BetpalzSDK.Model.Opponent
struct Opponent_t855927453;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>
struct List_1_t3603335260;
// BetpalzSDK.Model.Wager
struct Wager_t4234214128;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BetpalzSDK.Parsers.ModelParser::.ctor()
extern "C"  void ModelParser__ctor_m3938204479 (ModelParser_t2520258128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.User> BetpalzSDK.Parsers.ModelParser::ParseUserList(System.String)
extern "C"  List_1_t1299145959 * ModelParser_ParseUserList_m3327656442 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.User BetpalzSDK.Parsers.ModelParser::ParseUser(System.String)
extern "C"  User_t1930024827 * ModelParser_ParseUser_m3746566352 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.User BetpalzSDK.Parsers.ModelParser::ParseUser(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  User_t1930024827 * ModelParser_ParseUser_m2183570409 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.UserItem> BetpalzSDK.Parsers.ModelParser::ParseUserItemList(System.String)
extern "C"  List_1_t1261209210 * ModelParser_ParseUserItemList_m1479344140 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.UserItem BetpalzSDK.Parsers.ModelParser::ParseUserItem(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  UserItem_t1892088078 * ModelParser_ParseUserItem_m2477357129 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.UserScore BetpalzSDK.Parsers.ModelParser::ParseUserScore(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  UserScore_t3562511325 * ModelParser_ParseUserScore_m3277762297 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Bet> BetpalzSDK.Parsers.ModelParser::ParseBetList(System.String)
extern "C"  List_1_t3061420449 * ModelParser_ParseBetList_m3429800838 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.Bet BetpalzSDK.Parsers.ModelParser::ParseBet(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Bet_t3692299317 * ModelParser_ParseBet_m412191133 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge> BetpalzSDK.Parsers.ModelParser::ParseChallengeList(System.String)
extern "C"  List_1_t2974994495 * ModelParser_ParseChallengeList_m1094889542 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.Challenge BetpalzSDK.Parsers.ModelParser::ParseChallenge(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Challenge_t3605873363 * ModelParser_ParseChallenge_m3611694941 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel> BetpalzSDK.Parsers.ModelParser::ParseChallengeModelList(System.String)
extern "C"  List_1_t1358193174 * ModelParser_ParseChallengeModelList_m1222061420 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.ChallengeModel BetpalzSDK.Parsers.ModelParser::ParseChallengeModel(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  ChallengeModel_t1989072042 * ModelParser_ParseChallengeModel_m1920657129 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Item> BetpalzSDK.Parsers.ModelParser::ParseItemList(System.String)
extern "C"  List_1_t3543933003 * ModelParser_ParseItemList_m15893010 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.Item BetpalzSDK.Parsers.ModelParser::ParseItem(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Item_t4174811871 * ModelParser_ParseItem_m2506358633 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent> BetpalzSDK.Parsers.ModelParser::ParseOpponentList(System.String)
extern "C"  List_1_t225048585 * ModelParser_ParseOpponentList_m3729079066 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.Opponent BetpalzSDK.Parsers.ModelParser::ParseOpponent(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Opponent_t855927453 * ModelParser_ParseOpponent_m2291298025 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Wager> BetpalzSDK.Parsers.ModelParser::ParseWagerList(System.String)
extern "C"  List_1_t3603335260 * ModelParser_ParseWagerList_m859257606 (ModelParser_t2520258128 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.Wager BetpalzSDK.Parsers.ModelParser::ParseWager(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Wager_t4234214128 * ModelParser_ParseWager_m1237379905 (ModelParser_t2520258128 * __this, Dictionary_2_t309261261 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
