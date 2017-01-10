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

// Prime31.Reflection.MemberMapLoader
struct MemberMapLoader_t2009616003;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct SafeDictionary_2_t1260879230;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Prime31.Reflection.MemberMapLoader::.ctor(System.Object,System.IntPtr)
extern "C"  void MemberMapLoader__ctor_m347542588 (MemberMapLoader_t2009616003 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Reflection.MemberMapLoader::Invoke(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>)
extern "C"  void MemberMapLoader_Invoke_m1701658189 (MemberMapLoader_t2009616003 * __this, Type_t * ___type0, SafeDictionary_2_t1260879230 * ___memberMaps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Prime31.Reflection.MemberMapLoader::BeginInvoke(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MemberMapLoader_BeginInvoke_m1210679852 (MemberMapLoader_t2009616003 * __this, Type_t * ___type0, SafeDictionary_2_t1260879230 * ___memberMaps1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.Reflection.MemberMapLoader::EndInvoke(System.IAsyncResult)
extern "C"  void MemberMapLoader_EndInvoke_m1384177086 (MemberMapLoader_t2009616003 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
