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

// Prime31.Json/ObjectDecoder
struct ObjectDecoder_t1026857897;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>>
struct Dictionary_2_t191863819;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Prime31.Json/ObjectDecoder::.ctor()
extern "C"  void ObjectDecoder__ctor_m217751528 (ObjectDecoder_t1026857897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>> Prime31.Json/ObjectDecoder::getMemberInfoForObject(System.Object)
extern "C"  Dictionary_2_t191863819 * ObjectDecoder_getMemberInfoForObject_m1554342563 (ObjectDecoder_t1026857897 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>> Prime31.Json/ObjectDecoder::getMembersWithSetters(System.Object)
extern "C"  Dictionary_2_t191863819 * ObjectDecoder_getMembersWithSetters_m2796065584 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.Json/ObjectDecoder::createAndPopulateObjectFromDictionary(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * ObjectDecoder_createAndPopulateObjectFromDictionary_m91475187 (ObjectDecoder_t1026857897 * __this, Type_t * ___objectType0, Dictionary_2_t309261261 * ___dict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
