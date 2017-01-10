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

// System.Delegate
struct Delegate_t3022476291;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Delegate3022476291.h"
#include "System_Core_System_Action3226471752.h"

// System.Void Prime31.ActionExtensions::invoke(System.Delegate,System.Object[])
extern "C"  void ActionExtensions_invoke_m1052204240 (Il2CppObject * __this /* static, unused */, Delegate_t3022476291 * ___listener0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.ActionExtensions::fire(System.Action)
extern "C"  void ActionExtensions_fire_m497642229 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___handler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
