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

// Prime31.Reflection.CacheResolver/MemberMap
struct MemberMap_t574666045;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"

// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.PropertyInfo)
extern "C"  void MemberMap__ctor_m116878843 (MemberMap_t574666045 * __this, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.FieldInfo)
extern "C"  void MemberMap__ctor_m291547424 (MemberMap_t574666045 * __this, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
