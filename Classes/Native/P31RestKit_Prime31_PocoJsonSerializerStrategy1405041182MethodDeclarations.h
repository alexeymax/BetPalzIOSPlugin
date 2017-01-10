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

// Prime31.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t1405041182;
// System.Type
struct Type_t;
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct SafeDictionary_2_t1260879230;
// System.Object
struct Il2CppObject;
// System.Enum
struct Enum_t2459695545;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Enum2459695545.h"

// System.Void Prime31.PocoJsonSerializerStrategy::.ctor()
extern "C"  void PocoJsonSerializerStrategy__ctor_m1546685844 (PocoJsonSerializerStrategy_t1405041182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.PocoJsonSerializerStrategy::buildMap(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>)
extern "C"  void PocoJsonSerializerStrategy_buildMap_m687404639 (PocoJsonSerializerStrategy_t1405041182 * __this, Type_t * ___type0, SafeDictionary_2_t1260879230 * ___memberMaps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.PocoJsonSerializerStrategy::serializeNonPrimitiveObject(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_serializeNonPrimitiveObject_m2225585155 (PocoJsonSerializerStrategy_t1405041182 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.PocoJsonSerializerStrategy::deserializeObject(System.Object,System.Type)
extern "C"  Il2CppObject * PocoJsonSerializerStrategy_deserializeObject_m1858062708 (PocoJsonSerializerStrategy_t1405041182 * __this, Il2CppObject * ___value0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.PocoJsonSerializerStrategy::serializeEnum(System.Enum)
extern "C"  Il2CppObject * PocoJsonSerializerStrategy_serializeEnum_m2924595192 (PocoJsonSerializerStrategy_t1405041182 * __this, Enum_t2459695545 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeKnownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_trySerializeKnownTypes_m468594303 (PocoJsonSerializerStrategy_t1405041182 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeUnknownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_trySerializeUnknownTypes_m3253553424 (PocoJsonSerializerStrategy_t1405041182 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.PocoJsonSerializerStrategy::.cctor()
extern "C"  void PocoJsonSerializerStrategy__cctor_m3014346559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
