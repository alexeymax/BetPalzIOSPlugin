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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Responses.RemoteResponse
struct  RemoteResponse_t4136495849  : public Il2CppObject
{
public:
	// System.String BetpalzSDK.Responses.RemoteResponse::_dataString
	String_t* ____dataString_0;
	// System.Byte[] BetpalzSDK.Responses.RemoteResponse::<Data>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CDataU3Ek__BackingField_1;
	// System.Int64 BetpalzSDK.Responses.RemoteResponse::<RequestSentTimestamp>k__BackingField
	int64_t ___U3CRequestSentTimestampU3Ek__BackingField_2;
	// System.Int64 BetpalzSDK.Responses.RemoteResponse::<CallbackReceivedTimestamp>k__BackingField
	int64_t ___U3CCallbackReceivedTimestampU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__dataString_0() { return static_cast<int32_t>(offsetof(RemoteResponse_t4136495849, ____dataString_0)); }
	inline String_t* get__dataString_0() const { return ____dataString_0; }
	inline String_t** get_address_of__dataString_0() { return &____dataString_0; }
	inline void set__dataString_0(String_t* value)
	{
		____dataString_0 = value;
		Il2CppCodeGenWriteBarrier(&____dataString_0, value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteResponse_t4136495849, ___U3CDataU3Ek__BackingField_1)); }
	inline ByteU5BU5D_t3397334013* get_U3CDataU3Ek__BackingField_1() const { return ___U3CDataU3Ek__BackingField_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CDataU3Ek__BackingField_1() { return &___U3CDataU3Ek__BackingField_1; }
	inline void set_U3CDataU3Ek__BackingField_1(ByteU5BU5D_t3397334013* value)
	{
		___U3CDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDataU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CRequestSentTimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteResponse_t4136495849, ___U3CRequestSentTimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CRequestSentTimestampU3Ek__BackingField_2() const { return ___U3CRequestSentTimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CRequestSentTimestampU3Ek__BackingField_2() { return &___U3CRequestSentTimestampU3Ek__BackingField_2; }
	inline void set_U3CRequestSentTimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CRequestSentTimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCallbackReceivedTimestampU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteResponse_t4136495849, ___U3CCallbackReceivedTimestampU3Ek__BackingField_3)); }
	inline int64_t get_U3CCallbackReceivedTimestampU3Ek__BackingField_3() const { return ___U3CCallbackReceivedTimestampU3Ek__BackingField_3; }
	inline int64_t* get_address_of_U3CCallbackReceivedTimestampU3Ek__BackingField_3() { return &___U3CCallbackReceivedTimestampU3Ek__BackingField_3; }
	inline void set_U3CCallbackReceivedTimestampU3Ek__BackingField_3(int64_t value)
	{
		___U3CCallbackReceivedTimestampU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
