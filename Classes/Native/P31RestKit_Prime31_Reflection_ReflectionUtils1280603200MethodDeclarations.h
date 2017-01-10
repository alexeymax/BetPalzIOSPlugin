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

// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Boolean Prime31.Reflection.ReflectionUtils::isTypeGenericeCollectionInterface(System.Type)
extern "C"  bool ReflectionUtils_isTypeGenericeCollectionInterface_m4070447207 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.Reflection.ReflectionUtils::isTypeDictionary(System.Type)
extern "C"  bool ReflectionUtils_isTypeDictionary_m3870819154 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.Reflection.ReflectionUtils::isNullableType(System.Type)
extern "C"  bool ReflectionUtils_isNullableType_m1319412673 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.Reflection.ReflectionUtils::toNullableType(System.Object,System.Type)
extern "C"  Il2CppObject * ReflectionUtils_toNullableType_m2894998491 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___nullableType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
