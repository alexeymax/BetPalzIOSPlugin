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

// BetpalzSDK.Model.Challenge
struct Challenge_t3605873363;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent>
struct List_1_t225048585;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Model_ChallengeStatus2848553049.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BetpalzSDK.Model.Challenge::.ctor()
extern "C"  void Challenge__ctor_m2770614059 (Challenge_t3605873363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Model.Challenge::get_Id()
extern "C"  int64_t Challenge_get_Id_m761228310 (Challenge_t3605873363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Challenge::set_Id(System.Int64)
extern "C"  void Challenge_set_Id_m3549780189 (Challenge_t3605873363 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.ChallengeStatus BetpalzSDK.Model.Challenge::get_Status()
extern "C"  int32_t Challenge_get_Status_m1421583065 (Challenge_t3605873363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Challenge::set_Status(BetpalzSDK.Model.ChallengeStatus)
extern "C"  void Challenge_set_Status_m839624102 (Challenge_t3605873363 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent> BetpalzSDK.Model.Challenge::get_Opponents()
extern "C"  List_1_t225048585 * Challenge_get_Opponents_m3421738927 (Challenge_t3605873363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Challenge::set_Opponents(System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent>)
extern "C"  void Challenge_set_Opponents_m1650685744 (Challenge_t3605873363 * __this, List_1_t225048585 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Model.ChallengeStatus BetpalzSDK.Model.Challenge::StringToChallengeStatus(System.String)
extern "C"  int32_t Challenge_StringToChallengeStatus_m511174787 (Il2CppObject * __this /* static, unused */, String_t* ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Model.Challenge::.cctor()
extern "C"  void Challenge__cctor_m1727066808 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
