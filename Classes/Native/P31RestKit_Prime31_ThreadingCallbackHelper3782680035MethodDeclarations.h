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

// Prime31.ThreadingCallbackHelper
struct ThreadingCallbackHelper_t3782680035;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void Prime31.ThreadingCallbackHelper::.ctor()
extern "C"  void ThreadingCallbackHelper__ctor_m4147491825 (ThreadingCallbackHelper_t3782680035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.ThreadingCallbackHelper::addActionToQueue(System.Action)
extern "C"  void ThreadingCallbackHelper_addActionToQueue_m2296247821 (ThreadingCallbackHelper_t3782680035 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.ThreadingCallbackHelper::Update()
extern "C"  void ThreadingCallbackHelper_Update_m2982194930 (ThreadingCallbackHelper_t3782680035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.ThreadingCallbackHelper::disableIfEmpty()
extern "C"  void ThreadingCallbackHelper_disableIfEmpty_m3475445687 (ThreadingCallbackHelper_t3782680035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
