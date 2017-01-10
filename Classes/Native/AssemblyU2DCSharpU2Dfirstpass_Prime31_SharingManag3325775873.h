#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Collections.Generic.List`1<System.String>>
struct Action_1_t1200140747;

#include "P31RestKit_Prime31_AbstractManager1005944057.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.SharingManager
struct  SharingManager_t3325775873  : public AbstractManager_t1005944057
{
public:

public:
};

struct SharingManager_t3325775873_StaticFields
{
public:
	// System.Action`1<System.String> Prime31.SharingManager::sharingFinishedWithActivityTypeEvent
	Action_1_t1831019615 * ___sharingFinishedWithActivityTypeEvent_5;
	// System.Action Prime31.SharingManager::sharingCancelledEvent
	Action_t3226471752 * ___sharingCancelledEvent_6;
	// System.Action`1<System.Collections.Generic.List`1<System.String>> Prime31.SharingManager::accessGrantedForAccountsWithUsernamesEvent
	Action_1_t1200140747 * ___accessGrantedForAccountsWithUsernamesEvent_7;
	// System.Action`1<System.String> Prime31.SharingManager::accessDeniedToAccountsEvent
	Action_1_t1831019615 * ___accessDeniedToAccountsEvent_8;
	// System.Action`1<System.String> Prime31.SharingManager::requestSucceededEvent
	Action_1_t1831019615 * ___requestSucceededEvent_9;
	// System.Action`1<System.String> Prime31.SharingManager::requestFailedEvent
	Action_1_t1831019615 * ___requestFailedEvent_10;

public:
	inline static int32_t get_offset_of_sharingFinishedWithActivityTypeEvent_5() { return static_cast<int32_t>(offsetof(SharingManager_t3325775873_StaticFields, ___sharingFinishedWithActivityTypeEvent_5)); }
	inline Action_1_t1831019615 * get_sharingFinishedWithActivityTypeEvent_5() const { return ___sharingFinishedWithActivityTypeEvent_5; }
	inline Action_1_t1831019615 ** get_address_of_sharingFinishedWithActivityTypeEvent_5() { return &___sharingFinishedWithActivityTypeEvent_5; }
	inline void set_sharingFinishedWithActivityTypeEvent_5(Action_1_t1831019615 * value)
	{
		___sharingFinishedWithActivityTypeEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___sharingFinishedWithActivityTypeEvent_5, value);
	}

	inline static int32_t get_offset_of_sharingCancelledEvent_6() { return static_cast<int32_t>(offsetof(SharingManager_t3325775873_StaticFields, ___sharingCancelledEvent_6)); }
	inline Action_t3226471752 * get_sharingCancelledEvent_6() const { return ___sharingCancelledEvent_6; }
	inline Action_t3226471752 ** get_address_of_sharingCancelledEvent_6() { return &___sharingCancelledEvent_6; }
	inline void set_sharingCancelledEvent_6(Action_t3226471752 * value)
	{
		___sharingCancelledEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___sharingCancelledEvent_6, value);
	}

	inline static int32_t get_offset_of_accessGrantedForAccountsWithUsernamesEvent_7() { return static_cast<int32_t>(offsetof(SharingManager_t3325775873_StaticFields, ___accessGrantedForAccountsWithUsernamesEvent_7)); }
	inline Action_1_t1200140747 * get_accessGrantedForAccountsWithUsernamesEvent_7() const { return ___accessGrantedForAccountsWithUsernamesEvent_7; }
	inline Action_1_t1200140747 ** get_address_of_accessGrantedForAccountsWithUsernamesEvent_7() { return &___accessGrantedForAccountsWithUsernamesEvent_7; }
	inline void set_accessGrantedForAccountsWithUsernamesEvent_7(Action_1_t1200140747 * value)
	{
		___accessGrantedForAccountsWithUsernamesEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___accessGrantedForAccountsWithUsernamesEvent_7, value);
	}

	inline static int32_t get_offset_of_accessDeniedToAccountsEvent_8() { return static_cast<int32_t>(offsetof(SharingManager_t3325775873_StaticFields, ___accessDeniedToAccountsEvent_8)); }
	inline Action_1_t1831019615 * get_accessDeniedToAccountsEvent_8() const { return ___accessDeniedToAccountsEvent_8; }
	inline Action_1_t1831019615 ** get_address_of_accessDeniedToAccountsEvent_8() { return &___accessDeniedToAccountsEvent_8; }
	inline void set_accessDeniedToAccountsEvent_8(Action_1_t1831019615 * value)
	{
		___accessDeniedToAccountsEvent_8 = value;
		Il2CppCodeGenWriteBarrier(&___accessDeniedToAccountsEvent_8, value);
	}

	inline static int32_t get_offset_of_requestSucceededEvent_9() { return static_cast<int32_t>(offsetof(SharingManager_t3325775873_StaticFields, ___requestSucceededEvent_9)); }
	inline Action_1_t1831019615 * get_requestSucceededEvent_9() const { return ___requestSucceededEvent_9; }
	inline Action_1_t1831019615 ** get_address_of_requestSucceededEvent_9() { return &___requestSucceededEvent_9; }
	inline void set_requestSucceededEvent_9(Action_1_t1831019615 * value)
	{
		___requestSucceededEvent_9 = value;
		Il2CppCodeGenWriteBarrier(&___requestSucceededEvent_9, value);
	}

	inline static int32_t get_offset_of_requestFailedEvent_10() { return static_cast<int32_t>(offsetof(SharingManager_t3325775873_StaticFields, ___requestFailedEvent_10)); }
	inline Action_1_t1831019615 * get_requestFailedEvent_10() const { return ___requestFailedEvent_10; }
	inline Action_1_t1831019615 ** get_address_of_requestFailedEvent_10() { return &___requestFailedEvent_10; }
	inline void set_requestFailedEvent_10(Action_1_t1831019615 * value)
	{
		___requestFailedEvent_10 = value;
		Il2CppCodeGenWriteBarrier(&___requestFailedEvent_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
