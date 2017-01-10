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

// BetpalzSDK.Model.Bet
struct Bet_t3692299317;
// BetpalzSDK.Model.Opponent
struct Opponent_t855927453;
// System.String
struct String_t;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent>
struct List_1_t225048585;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Model_Opponent855927453.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Model_BetStatus2994445495.h"

// System.Void BetpalzSDK.Model.Bet::.ctor()
extern "C"  void Bet__ctor_m1511551783 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Model.Bet::get_Id()
extern "C"  int64_t Bet_get_Id_m2896621652 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::set_Id(System.Int64)
extern "C"  void Bet_set_Id_m2686441277 (Bet_t3692299317 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.Opponent BetpalzSDK.Model.Bet::get_Creator()
extern "C"  Opponent_t855927453 * Bet_get_Creator_m2972453519 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::set_Creator(BetpalzSDK.Model.Opponent)
extern "C"  void Bet_set_Creator_m3168339818 (Bet_t3692299317 * __this, Opponent_t855927453 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BetpalzSDK.Model.Bet::get_Description()
extern "C"  String_t* Bet_get_Description_m1145780245 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::set_Description(System.String)
extern "C"  void Bet_set_Description_m858850096 (Bet_t3692299317 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent> BetpalzSDK.Model.Bet::get_Participants()
extern "C"  List_1_t225048585 * Bet_get_Participants_m2313389077 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::set_Participants(System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent>)
extern "C"  void Bet_set_Participants_m623243036 (Bet_t3692299317 * __this, List_1_t225048585 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Model.Bet::get_IsLiked()
extern "C"  bool Bet_get_IsLiked_m3031617755 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::set_IsLiked(System.Boolean)
extern "C"  void Bet_set_IsLiked_m2277001200 (Bet_t3692299317 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BetpalzSDK.Model.Bet::get_LikesCount()
extern "C"  int32_t Bet_get_LikesCount_m3681580487 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::set_LikesCount(System.Int32)
extern "C"  void Bet_set_LikesCount_m2380488808 (Bet_t3692299317 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BetpalzSDK.Model.Bet::get_CommentsCount()
extern "C"  int32_t Bet_get_CommentsCount_m547763067 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::set_CommentsCount(System.Int32)
extern "C"  void Bet_set_CommentsCount_m53798080 (Bet_t3692299317 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.BetStatus BetpalzSDK.Model.Bet::get_Status()
extern "C"  int32_t Bet_get_Status_m3198691129 (Bet_t3692299317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::set_Status(BetpalzSDK.Model.BetStatus)
extern "C"  void Bet_set_Status_m3886420070 (Bet_t3692299317 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.BetStatus BetpalzSDK.Model.Bet::StringToBetStatus(System.String)
extern "C"  int32_t Bet_StringToBetStatus_m2262782071 (Il2CppObject * __this /* static, unused */, String_t* ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Bet::.cctor()
extern "C"  void Bet__cctor_m1357733210 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
