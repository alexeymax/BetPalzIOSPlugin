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

// BetpalzSDK.Helpers.DateHelper
struct DateHelper_t353973676;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void BetpalzSDK.Helpers.DateHelper::.ctor()
extern "C"  void DateHelper__ctor_m533869812 (DateHelper_t353973676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Helpers.DateHelper::GetEpochTime(System.DateTime)
extern "C"  int64_t DateHelper_GetEpochTime_m821567405 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___date0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Helpers.DateHelper::GetEpochTime()
extern "C"  int64_t DateHelper_GetEpochTime_m2759086331 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double BetpalzSDK.Helpers.DateHelper::GetTimestamp(System.DateTime)
extern "C"  double DateHelper_GetTimestamp_m562846267 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___date0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double BetpalzSDK.Helpers.DateHelper::GetTimestamp()
extern "C"  double DateHelper_GetTimestamp_m2827449653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BetpalzSDK.Helpers.DateHelper::GetDate(System.Double)
extern "C"  DateTime_t693205669  DateHelper_GetDate_m4074004377 (Il2CppObject * __this /* static, unused */, double ___timestamp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzSDK.Helpers.DateHelper::.cctor()
extern "C"  void DateHelper__cctor_m4095609135 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
