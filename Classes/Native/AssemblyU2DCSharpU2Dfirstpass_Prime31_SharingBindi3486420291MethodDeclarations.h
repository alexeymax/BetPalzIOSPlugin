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

// Prime31.SharingBinding
struct SharingBinding_t3486420291;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Prime31_AccountType2470916979.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Prime31_SharingReque3567661088.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Prime31_FBAudienceKe1112938665.h"

// System.Void Prime31.SharingBinding::.ctor()
extern "C"  void SharingBinding__ctor_m1101800491 (SharingBinding_t3486420291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::_sharingShareItems(System.String,System.String)
extern "C"  void SharingBinding__sharingShareItems_m982313587 (Il2CppObject * __this /* static, unused */, String_t* ___items0, String_t* ___excludedActivityTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::shareItems(System.String[])
extern "C"  void SharingBinding_shareItems_m2558534608 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___items0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::shareItems(System.String[],System.String[])
extern "C"  void SharingBinding_shareItems_m3794442052 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___items0, StringU5BU5D_t1642385972* ___excludedActivityTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::_sharingSetPopoverPosition(System.Single,System.Single)
extern "C"  void SharingBinding__sharingSetPopoverPosition_m2119073504 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::setPopoverPosition(System.Single,System.Single)
extern "C"  void SharingBinding_setPopoverPosition_m1051176585 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::_sharingFetchAccountsWithAccountType(System.String,System.String)
extern "C"  void SharingBinding__sharingFetchAccountsWithAccountType_m3556083421 (Il2CppObject * __this /* static, unused */, String_t* ___accountType0, String_t* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::fetchAccountsWithAccountType(Prime31.AccountType,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void SharingBinding_fetchAccountsWithAccountType_m3761936835 (Il2CppObject * __this /* static, unused */, int32_t ___accountType0, Dictionary_2_t309261261 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::_sharingPerformRequest(System.String,System.String,System.String,System.String,System.String)
extern "C"  void SharingBinding__sharingPerformRequest_m2427681392 (Il2CppObject * __this /* static, unused */, String_t* ___accountType0, String_t* ___username1, String_t* ___url2, String_t* ___requestMethod3, String_t* ___parameters4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.SharingBinding::performRequest(Prime31.AccountType,System.String,System.String,Prime31.SharingRequestMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void SharingBinding_performRequest_m2578012351 (Il2CppObject * __this /* static, unused */, int32_t ___accountType0, String_t* ___username1, String_t* ___url2, int32_t ___requestMethod3, Dictionary_2_t3943999495 * ___parameters4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Prime31.SharingBinding::createFacebookOptions(System.String,Prime31.FBAudienceKey,System.String[])
extern "C"  Dictionary_2_t309261261 * SharingBinding_createFacebookOptions_m32064009 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, int32_t ___key1, StringU5BU5D_t1642385972* ___permissions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
