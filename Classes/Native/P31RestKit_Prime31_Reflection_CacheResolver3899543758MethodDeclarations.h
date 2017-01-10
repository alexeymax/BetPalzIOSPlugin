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

// Prime31.Reflection.CacheResolver
struct CacheResolver_t3899543758;
// Prime31.Reflection.MemberMapLoader
struct MemberMapLoader_t2009616003;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct SafeDictionary_2_t1260879230;
// Prime31.Reflection.GetHandler
struct GetHandler_t2553917450;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Prime31.Reflection.SetHandler
struct SetHandler_t3932263246;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "P31RestKit_Prime31_Reflection_MemberMapLoader2009616003.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"

// System.Void Prime31.Reflection.CacheResolver::.ctor(Prime31.Reflection.MemberMapLoader)
extern "C"  void CacheResolver__ctor_m3241304360 (CacheResolver_t3899543758 * __this, MemberMapLoader_t2009616003 * ___memberMapLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Prime31.Reflection.CacheResolver::getNewInstance(System.Type)
extern "C"  Il2CppObject * CacheResolver_getNewInstance_m3656586120 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap> Prime31.Reflection.CacheResolver::loadMaps(System.Type)
extern "C"  SafeDictionary_2_t1260879230 * CacheResolver_loadMaps_m2866877888 (CacheResolver_t3899543758 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.FieldInfo)
extern "C"  GetHandler_t2553917450 * CacheResolver_createGetHandler_m3810207856 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.FieldInfo)
extern "C"  SetHandler_t3932263246 * CacheResolver_createSetHandler_m3699651304 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.PropertyInfo)
extern "C"  GetHandler_t2553917450 * CacheResolver_createGetHandler_m1713300085 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.PropertyInfo)
extern "C"  SetHandler_t3932263246 * CacheResolver_createSetHandler_m1173495397 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Reflection.CacheResolver::.cctor()
extern "C"  void CacheResolver__cctor_m1564021508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
