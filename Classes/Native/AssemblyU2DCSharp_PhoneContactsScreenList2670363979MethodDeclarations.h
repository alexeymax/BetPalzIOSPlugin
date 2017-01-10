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

// PhoneContactsScreenList
struct PhoneContactsScreenList_t2670363979;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// ScrollElement
struct ScrollElement_t1344804629;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ScrollElement1344804629.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PhoneContactsScreenList::.ctor()
extern "C"  void PhoneContactsScreenList__ctor_m2863178156 (PhoneContactsScreenList_t2670363979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhoneContactsScreenList::Start()
extern "C"  void PhoneContactsScreenList_Start_m1486052176 (PhoneContactsScreenList_t2670363979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhoneContactsScreenList::ContactsWatcher()
extern "C"  Il2CppObject * PhoneContactsScreenList_ContactsWatcher_m2056396657 (PhoneContactsScreenList_t2670363979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhoneContactsScreenList::ContactsChanged()
extern "C"  void PhoneContactsScreenList_ContactsChanged_m366407579 (PhoneContactsScreenList_t2670363979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhoneContactsScreenList::ChangeDataInElement(ScrollElement,System.Int32)
extern "C"  void PhoneContactsScreenList_ChangeDataInElement_m2597504083 (PhoneContactsScreenList_t2670363979 * __this, ScrollElement_t1344804629 * ___e0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhoneContactsScreenList::getElementPosition(System.Int32)
extern "C"  int32_t PhoneContactsScreenList_getElementPosition_m792070926 (PhoneContactsScreenList_t2670363979 * __this, int32_t ___elementIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhoneContactsScreenList::LoadData()
extern "C"  void PhoneContactsScreenList_LoadData_m2890921130 (PhoneContactsScreenList_t2670363979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhoneContactsScreenList::onDone()
extern "C"  void PhoneContactsScreenList_onDone_m2174563495 (PhoneContactsScreenList_t2670363979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhoneContactsScreenList::onLoadFailed(System.String)
extern "C"  void PhoneContactsScreenList_onLoadFailed_m3332089956 (PhoneContactsScreenList_t2670363979 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
