﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.IPayFacebook
struct IPayFacebook_t3794770305;
// System.String
struct String_t;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t1895462303;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// Facebook.Unity.IPayFacebook Facebook.Unity.FB/Canvas::get_FacebookPayImpl()
extern "C"  Il2CppObject * Canvas_get_FacebookPayImpl_m2686467812 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void Canvas_Pay_m4050601057 (Il2CppObject * __this /* static, unused */, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t334943763  ___quantityMin3, Nullable_1_t334943763  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t1895462303 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
