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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Char[]
struct CharU5BU5D_t1328083999;
// Prime31.JsonArray
struct JsonArray_t67100779;
// Prime31.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t1541341984;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// Prime31.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t1405041182;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.String Prime31.SimpleJson::encode(System.Object)
extern "C"  String_t* SimpleJson_encode_m886316079 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.SimpleJson::tryDeserializeObject(System.String,System.Object&)
extern "C"  bool SimpleJson_tryDeserializeObject_m1777709333 (Il2CppObject * __this /* static, unused */, String_t* ___json0, Il2CppObject ** ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.SimpleJson::decode(System.String)
extern "C"  Il2CppObject * SimpleJson_decode_m1857480329 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.SimpleJson::decode(System.String,System.Type,System.String)
extern "C"  Il2CppObject * SimpleJson_decode_m2822751612 (Il2CppObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, String_t* ___rootElement2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Prime31.SimpleJson::parseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject* SimpleJson_parseObject_m295618610 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.JsonArray Prime31.SimpleJson::parseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C"  JsonArray_t67100779 * SimpleJson_parseArray_m2460211106 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.SimpleJson::parseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * SimpleJson_parseValue_m1339408642 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.SimpleJson::parseString(System.Char[],System.Int32&,System.Boolean&)
extern "C"  String_t* SimpleJson_parseString_m3011443574 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.SimpleJson::parseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * SimpleJson_parseNumber_m4026455368 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.SimpleJson::getLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t SimpleJson_getLastIndexOfNumber_m1067654440 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SimpleJson::eatWhitespace(System.Char[],System.Int32&)
extern "C"  void SimpleJson_eatWhitespace_m3563093523 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.SimpleJson::lookAhead(System.Char[],System.Int32)
extern "C"  int32_t SimpleJson_lookAhead_m2077674190 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.SimpleJson::nextToken(System.Char[],System.Int32&)
extern "C"  int32_t SimpleJson_nextToken_m1349736512 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.SimpleJson::serializeValue(Prime31.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C"  bool SimpleJson_serializeValue_m1176217270 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy0, Il2CppObject * ___value1, StringBuilder_t1221177846 * ___builder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.SimpleJson::serializeObject(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C"  bool SimpleJson_serializeObject_m2636806454 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy0, Il2CppObject * ___keys1, Il2CppObject * ___values2, StringBuilder_t1221177846 * ___builder3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.SimpleJson::serializeArray(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C"  bool SimpleJson_serializeArray_m2385297375 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy0, Il2CppObject * ___anArray1, StringBuilder_t1221177846 * ___builder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.SimpleJson::serializeString(System.String,System.Text.StringBuilder)
extern "C"  bool SimpleJson_serializeString_m3382677527 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.SimpleJson::serializeNumber(System.Object,System.Text.StringBuilder)
extern "C"  bool SimpleJson_serializeNumber_m3846070701 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___number0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.SimpleJson::isNumeric(System.Object)
extern "C"  bool SimpleJson_isNumeric_m1256186837 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.IJsonSerializerStrategy Prime31.SimpleJson::get_currentJsonSerializerStrategy()
extern "C"  Il2CppObject * SimpleJson_get_currentJsonSerializerStrategy_m2549509207 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.PocoJsonSerializerStrategy Prime31.SimpleJson::get_pocoJsonSerializerStrategy()
extern "C"  PocoJsonSerializerStrategy_t1405041182 * SimpleJson_get_pocoJsonSerializerStrategy_m173256811 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
