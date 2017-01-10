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

// BetpalzSDK.Parsers.AbstractJsonParser
struct AbstractJsonParser_t1898353581;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_t278199169;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BetpalzSDK.Parsers.AbstractJsonParser::.ctor()
extern "C"  void AbstractJsonParser__ctor_m1007158980 (AbstractJsonParser_t1898353581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Parsers.AbstractJsonParser::GetBool(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Boolean)
extern "C"  bool AbstractJsonParser_GetBool_m3791527544 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, bool ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BetpalzSDK.Parsers.AbstractJsonParser::GetBool(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[],System.Boolean)
extern "C"  bool AbstractJsonParser_GetBool_m766646932 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, bool ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BetpalzSDK.Parsers.AbstractJsonParser::GetInt(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Int32)
extern "C"  int32_t AbstractJsonParser_GetInt_m1377431687 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, int32_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BetpalzSDK.Parsers.AbstractJsonParser::GetInt(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[],System.Int32)
extern "C"  int32_t AbstractJsonParser_GetInt_m295836189 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, int32_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Parsers.AbstractJsonParser::GetLong(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Int64)
extern "C"  int64_t AbstractJsonParser_GetLong_m3369408372 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, int64_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BetpalzSDK.Parsers.AbstractJsonParser::GetLong(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[],System.Int64)
extern "C"  int64_t AbstractJsonParser_GetLong_m4159787732 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, int64_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double BetpalzSDK.Parsers.AbstractJsonParser::GetDouble(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Double)
extern "C"  double AbstractJsonParser_GetDouble_m348893705 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, double ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double BetpalzSDK.Parsers.AbstractJsonParser::GetDouble(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[],System.Double)
extern "C"  double AbstractJsonParser_GetDouble_m319290399 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, double ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BetpalzSDK.Parsers.AbstractJsonParser::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
extern "C"  String_t* AbstractJsonParser_GetString_m102041405 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, String_t* ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BetpalzSDK.Parsers.AbstractJsonParser::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[],System.String)
extern "C"  String_t* AbstractJsonParser_GetString_m3188891239 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, String_t* ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> BetpalzSDK.Parsers.AbstractJsonParser::GetArray(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  List_1_t2058570427 * AbstractJsonParser_GetArray_m3380013037 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> BetpalzSDK.Parsers.AbstractJsonParser::GetArrayOfString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[])
extern "C"  List_1_t1398341365 * AbstractJsonParser_GetArrayOfString_m3555979943 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> BetpalzSDK.Parsers.AbstractJsonParser::GetArrayOfString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  List_1_t1398341365 * AbstractJsonParser_GetArrayOfString_m3181092005 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> BetpalzSDK.Parsers.AbstractJsonParser::GetArray(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[])
extern "C"  List_1_t2058570427 * AbstractJsonParser_GetArray_m1025881655 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> BetpalzSDK.Parsers.AbstractJsonParser::GetArrayInt(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  List_1_t1440998580 * AbstractJsonParser_GetArrayInt_m3667297053 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> BetpalzSDK.Parsers.AbstractJsonParser::GetArrayInt(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[])
extern "C"  List_1_t1440998580 * AbstractJsonParser_GetArrayInt_m3241259635 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int64> BetpalzSDK.Parsers.AbstractJsonParser::GetArrayLong(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  List_1_t278199169 * AbstractJsonParser_GetArrayLong_m2665144223 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int64> BetpalzSDK.Parsers.AbstractJsonParser::GetArrayLong(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[])
extern "C"  List_1_t278199169 * AbstractJsonParser_GetArrayLong_m2023566049 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> BetpalzSDK.Parsers.AbstractJsonParser::GetDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Dictionary_2_t309261261 * AbstractJsonParser_GetDictionary_m1084194871 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> BetpalzSDK.Parsers.AbstractJsonParser::GetDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String[])
extern "C"  Dictionary_2_t309261261 * AbstractJsonParser_GetDictionary_m376851985 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, StringU5BU5D_t1642385972* ___pathKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> BetpalzSDK.Parsers.AbstractJsonParser::JsonDecodeAsDictionary(System.String)
extern "C"  Dictionary_2_t309261261 * AbstractJsonParser_JsonDecodeAsDictionary_m2723734164 (AbstractJsonParser_t1898353581 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> BetpalzSDK.Parsers.AbstractJsonParser::JsonDecodeAsList(System.String)
extern "C"  List_1_t2058570427 * AbstractJsonParser_JsonDecodeAsList_m2418691769 (AbstractJsonParser_t1898353581 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> BetpalzSDK.Parsers.AbstractJsonParser::ConvertToDictionary(System.Collections.Hashtable)
extern "C"  Dictionary_2_t309261261 * AbstractJsonParser_ConvertToDictionary_m1380223842 (AbstractJsonParser_t1898353581 * __this, Hashtable_t909839986 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> BetpalzSDK.Parsers.AbstractJsonParser::ConvertToList(System.Collections.ArrayList)
extern "C"  List_1_t2058570427 * AbstractJsonParser_ConvertToList_m80693752 (AbstractJsonParser_t1898353581 * __this, ArrayList_t4252133567 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BetpalzSDK.Parsers.AbstractJsonParser::GetValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object,System.String[])
extern "C"  Il2CppObject * AbstractJsonParser_GetValue_m3615565409 (AbstractJsonParser_t1898353581 * __this, Dictionary_2_t309261261 * ___info0, Il2CppObject * ___defaultValue1, StringU5BU5D_t1642385972* ___pathKeys2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> BetpalzSDK.Parsers.AbstractJsonParser::ConvertToListOfInt(System.Collections.Generic.List`1<System.Object>)
extern "C"  List_1_t1440998580 * AbstractJsonParser_ConvertToListOfInt_m3866390270 (AbstractJsonParser_t1898353581 * __this, List_1_t2058570427 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int64> BetpalzSDK.Parsers.AbstractJsonParser::ConvertToListOfLong(System.Collections.Generic.List`1<System.Object>)
extern "C"  List_1_t278199169 * AbstractJsonParser_ConvertToListOfLong_m2610406318 (AbstractJsonParser_t1898353581 * __this, List_1_t2058570427 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
