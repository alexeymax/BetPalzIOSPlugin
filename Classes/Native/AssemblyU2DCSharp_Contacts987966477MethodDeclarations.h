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

// Contacts
struct Contacts_t987966477;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Contacts::.ctor()
extern "C"  void Contacts__ctor_m2443647792 (Contacts_t987966477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contacts::loadIOSContacts()
extern "C"  void Contacts_loadIOSContacts_m2191742804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Contacts::getContact(System.Int32)
extern "C"  String_t* Contacts_getContact_m3883974814 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contacts::LoadContactList()
extern "C"  void Contacts_LoadContactList_m1908277424 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contacts::LoadContactList(System.Action,System.Action`1<System.String>)
extern "C"  void Contacts_LoadContactList_m1628046261 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ____onDone0, Action_1_t1831019615 * ____onFailed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contacts::GetContact(System.Int32)
extern "C"  void Contacts_GetContact_m2607069087 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contacts::OnInitializeDone()
extern "C"  void Contacts_OnInitializeDone_m2315696217 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contacts::OnInitializeFail(System.String)
extern "C"  void Contacts_OnInitializeFail_m4171030117 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contacts::debug(System.String)
extern "C"  void Contacts_debug_m2905376559 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contacts::.cctor()
extern "C"  void Contacts__cctor_m2293780319 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
