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

// Prime31.Json/Deserializer
struct Deserializer_t3930269075;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.IList
struct IList_t3321498491;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "P31RestKit_Prime31_Json_Deserializer_JsonToken3872411607.h"

// System.Void Prime31.Json/Deserializer::.ctor(System.String)
extern "C"  void Deserializer__ctor_m2514749412 (Deserializer_t3930269075 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.Json/Deserializer::deserialize(System.String)
extern "C"  Il2CppObject * Deserializer_deserialize_m3285273168 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.Json/Deserializer::deserialize()
extern "C"  Il2CppObject * Deserializer_deserialize_m2915529734 (Deserializer_t3930269075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.Json/Deserializer::parseValue(System.Char[],System.Int32&)
extern "C"  Il2CppObject * Deserializer_parseValue_m2768648991 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Prime31.Json/Deserializer::parseObject(System.Char[],System.Int32&)
extern "C"  Il2CppObject * Deserializer_parseObject_m4100308424 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Prime31.Json/Deserializer::parseArray(System.Char[],System.Int32&)
extern "C"  Il2CppObject * Deserializer_parseArray_m107947774 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.Json/Deserializer::parseString(System.Char[],System.Int32&)
extern "C"  String_t* Deserializer_parseString_m999314821 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.Json/Deserializer::parseNumber(System.Char[],System.Int32&)
extern "C"  Il2CppObject * Deserializer_parseNumber_m3019974775 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.Json/Deserializer::getLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t Deserializer_getLastIndexOfNumber_m1857408610 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Json/Deserializer::eatWhitespace(System.Char[],System.Int32&)
extern "C"  void Deserializer_eatWhitespace_m3881295039 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::lookAhead(System.Char[],System.Int32)
extern "C"  int32_t Deserializer_lookAhead_m2734329352 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::nextToken(System.Char[],System.Int32&)
extern "C"  int32_t Deserializer_nextToken_m614016094 (Deserializer_t3930269075 * __this, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
