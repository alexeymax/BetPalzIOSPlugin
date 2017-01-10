#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UnityEngine.WWW
struct WWW_t2919945039;
// BetpalzSDK.Responses.RemoteResponse
struct RemoteResponse_t4136495849;
// BetpalzSDK.Network.OnReceivedResponse
struct OnReceivedResponse_t3573330051;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Network.DataFetcher
struct  DataFetcher_t2999813701  : public Il2CppObject
{
public:
	// System.String BetpalzSDK.Network.DataFetcher::_url
	String_t* ____url_2;
	// System.Byte[] BetpalzSDK.Network.DataFetcher::_postData
	ByteU5BU5D_t3397334013* ____postData_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> BetpalzSDK.Network.DataFetcher::_headers
	Dictionary_2_t3943999495 * ____headers_4;
	// System.Int64 BetpalzSDK.Network.DataFetcher::_requestSentTimestamp
	int64_t ____requestSentTimestamp_5;
	// UnityEngine.WWW BetpalzSDK.Network.DataFetcher::_www
	WWW_t2919945039 * ____www_6;
	// BetpalzSDK.Responses.RemoteResponse BetpalzSDK.Network.DataFetcher::<RemoteResponse>k__BackingField
	RemoteResponse_t4136495849 * ___U3CRemoteResponseU3Ek__BackingField_7;
	// System.Boolean BetpalzSDK.Network.DataFetcher::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_8;
	// BetpalzSDK.Network.OnReceivedResponse BetpalzSDK.Network.DataFetcher::<OnReceivedResponse>k__BackingField
	OnReceivedResponse_t3573330051 * ___U3COnReceivedResponseU3Ek__BackingField_9;
	// BetpalzSDK.Network.OnReceivedResponse BetpalzSDK.Network.DataFetcher::<Callback>k__BackingField
	OnReceivedResponse_t3573330051 * ___U3CCallbackU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__url_2() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ____url_2)); }
	inline String_t* get__url_2() const { return ____url_2; }
	inline String_t** get_address_of__url_2() { return &____url_2; }
	inline void set__url_2(String_t* value)
	{
		____url_2 = value;
		Il2CppCodeGenWriteBarrier(&____url_2, value);
	}

	inline static int32_t get_offset_of__postData_3() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ____postData_3)); }
	inline ByteU5BU5D_t3397334013* get__postData_3() const { return ____postData_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__postData_3() { return &____postData_3; }
	inline void set__postData_3(ByteU5BU5D_t3397334013* value)
	{
		____postData_3 = value;
		Il2CppCodeGenWriteBarrier(&____postData_3, value);
	}

	inline static int32_t get_offset_of__headers_4() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ____headers_4)); }
	inline Dictionary_2_t3943999495 * get__headers_4() const { return ____headers_4; }
	inline Dictionary_2_t3943999495 ** get_address_of__headers_4() { return &____headers_4; }
	inline void set__headers_4(Dictionary_2_t3943999495 * value)
	{
		____headers_4 = value;
		Il2CppCodeGenWriteBarrier(&____headers_4, value);
	}

	inline static int32_t get_offset_of__requestSentTimestamp_5() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ____requestSentTimestamp_5)); }
	inline int64_t get__requestSentTimestamp_5() const { return ____requestSentTimestamp_5; }
	inline int64_t* get_address_of__requestSentTimestamp_5() { return &____requestSentTimestamp_5; }
	inline void set__requestSentTimestamp_5(int64_t value)
	{
		____requestSentTimestamp_5 = value;
	}

	inline static int32_t get_offset_of__www_6() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ____www_6)); }
	inline WWW_t2919945039 * get__www_6() const { return ____www_6; }
	inline WWW_t2919945039 ** get_address_of__www_6() { return &____www_6; }
	inline void set__www_6(WWW_t2919945039 * value)
	{
		____www_6 = value;
		Il2CppCodeGenWriteBarrier(&____www_6, value);
	}

	inline static int32_t get_offset_of_U3CRemoteResponseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ___U3CRemoteResponseU3Ek__BackingField_7)); }
	inline RemoteResponse_t4136495849 * get_U3CRemoteResponseU3Ek__BackingField_7() const { return ___U3CRemoteResponseU3Ek__BackingField_7; }
	inline RemoteResponse_t4136495849 ** get_address_of_U3CRemoteResponseU3Ek__BackingField_7() { return &___U3CRemoteResponseU3Ek__BackingField_7; }
	inline void set_U3CRemoteResponseU3Ek__BackingField_7(RemoteResponse_t4136495849 * value)
	{
		___U3CRemoteResponseU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRemoteResponseU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ___U3CIsRunningU3Ek__BackingField_8)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_8() const { return ___U3CIsRunningU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_8() { return &___U3CIsRunningU3Ek__BackingField_8; }
	inline void set_U3CIsRunningU3Ek__BackingField_8(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COnReceivedResponseU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ___U3COnReceivedResponseU3Ek__BackingField_9)); }
	inline OnReceivedResponse_t3573330051 * get_U3COnReceivedResponseU3Ek__BackingField_9() const { return ___U3COnReceivedResponseU3Ek__BackingField_9; }
	inline OnReceivedResponse_t3573330051 ** get_address_of_U3COnReceivedResponseU3Ek__BackingField_9() { return &___U3COnReceivedResponseU3Ek__BackingField_9; }
	inline void set_U3COnReceivedResponseU3Ek__BackingField_9(OnReceivedResponse_t3573330051 * value)
	{
		___U3COnReceivedResponseU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnReceivedResponseU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CCallbackU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DataFetcher_t2999813701, ___U3CCallbackU3Ek__BackingField_10)); }
	inline OnReceivedResponse_t3573330051 * get_U3CCallbackU3Ek__BackingField_10() const { return ___U3CCallbackU3Ek__BackingField_10; }
	inline OnReceivedResponse_t3573330051 ** get_address_of_U3CCallbackU3Ek__BackingField_10() { return &___U3CCallbackU3Ek__BackingField_10; }
	inline void set_U3CCallbackU3Ek__BackingField_10(OnReceivedResponse_t3573330051 * value)
	{
		___U3CCallbackU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCallbackU3Ek__BackingField_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
