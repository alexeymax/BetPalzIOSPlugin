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

// Prime31.AbstractManager
struct AbstractManager_t1005944057;
// Prime31.LifecycleHelper
struct LifecycleHelper_t337468626;
// Prime31.ThreadingCallbackHelper
struct ThreadingCallbackHelper_t3782680035;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Prime31.AbstractManager::.ctor()
extern "C"  void AbstractManager__ctor_m3820762815 (AbstractManager_t1005944057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.LifecycleHelper Prime31.AbstractManager::get_coroutineSurrogate()
extern "C"  LifecycleHelper_t337468626 * AbstractManager_get_coroutineSurrogate_m2685231606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.LifecycleHelper Prime31.AbstractManager::get_lifecycleHelper()
extern "C"  LifecycleHelper_t337468626 * AbstractManager_get_lifecycleHelper_m544438520 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.ThreadingCallbackHelper Prime31.AbstractManager::getThreadingCallbackHelper()
extern "C"  ThreadingCallbackHelper_t3782680035 * AbstractManager_getThreadingCallbackHelper_m4097166613 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.AbstractManager::createThreadingCallbackHelper()
extern "C"  void AbstractManager_createThreadingCallbackHelper_m2734187414 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Prime31.AbstractManager::getPrime31ManagerGameObject()
extern "C"  GameObject_t1756533147 * AbstractManager_getPrime31ManagerGameObject_m1951118895 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.AbstractManager::initialize(System.Type)
extern "C"  void AbstractManager_initialize_m3985044900 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.AbstractManager::Awake()
extern "C"  void AbstractManager_Awake_m1934756666 (AbstractManager_t1005944057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
