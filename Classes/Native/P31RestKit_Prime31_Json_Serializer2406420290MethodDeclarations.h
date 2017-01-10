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

// Prime31.Json/Serializer
struct Serializer_t2406420290;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Prime31.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m1090859371 (Serializer_t2406420290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.Json/Serializer::serialize(System.Object)
extern "C"  String_t* Serializer_serialize_m1984925840 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Json/Serializer::serializeObject(System.Object)
extern "C"  void Serializer_serializeObject_m90496758 (Serializer_t2406420290 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Json/Serializer::serializeIList(System.Collections.IList)
extern "C"  void Serializer_serializeIList_m1531560293 (Serializer_t2406420290 * __this, Il2CppObject * ___anArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Json/Serializer::serializeIDictionary(System.Collections.IDictionary)
extern "C"  void Serializer_serializeIDictionary_m1214480169 (Serializer_t2406420290 * __this, Il2CppObject * ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Json/Serializer::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Serializer_serializeDictionary_m2632769294 (Serializer_t2406420290 * __this, Dictionary_2_t309261261 * ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Json/Serializer::serializeString(System.String)
extern "C"  void Serializer_serializeString_m3396076598 (Serializer_t2406420290 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Json/Serializer::serializeClass(System.Object)
extern "C"  void Serializer_serializeClass_m1727544257 (Serializer_t2406420290 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
