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
// BetpalzSDK.Parsers.ResponseParser
struct ResponseParser_t4075509322;
// BetpalzSDK.Parsers.ModelParser
struct ModelParser_t2520258128;
// BetpalzSDK.Model.User
struct User_t1930024827;
// System.Collections.Generic.List`1<BetpalzSDK.Model.User>
struct List_1_t1299145959;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Item>
struct List_1_t3543933003;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge>
struct List_1_t2974994495;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>>
struct Dictionary_2_t3272972436;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>>
struct Dictionary_2_t297886366;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Betpalz
struct  Betpalz_t3924986120  : public Il2CppObject
{
public:
	// System.String BetpalzSDK.Betpalz::_serverUrl
	String_t* ____serverUrl_3;
	// System.String BetpalzSDK.Betpalz::_apiKey
	String_t* ____apiKey_4;
	// System.String BetpalzSDK.Betpalz::_version
	String_t* ____version_5;
	// BetpalzSDK.Parsers.ResponseParser BetpalzSDK.Betpalz::_responseParser
	ResponseParser_t4075509322 * ____responseParser_6;
	// BetpalzSDK.Parsers.ModelParser BetpalzSDK.Betpalz::_modelParser
	ModelParser_t2520258128 * ____modelParser_7;
	// BetpalzSDK.Model.User BetpalzSDK.Betpalz::<CurrentUser>k__BackingField
	User_t1930024827 * ___U3CCurrentUserU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<BetpalzSDK.Model.User> BetpalzSDK.Betpalz::<Friends>k__BackingField
	List_1_t1299145959 * ___U3CFriendsU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<BetpalzSDK.Model.Item> BetpalzSDK.Betpalz::<AllItems>k__BackingField
	List_1_t3543933003 * ___U3CAllItemsU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<BetpalzSDK.Model.Challenge> BetpalzSDK.Betpalz::<Challenges>k__BackingField
	List_1_t2974994495 * ___U3CChallengesU3Ek__BackingField_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<BetpalzSDK.Model.ChallengeModel>> BetpalzSDK.Betpalz::<ChallengesByStatus>k__BackingField
	Dictionary_2_t3272972436 * ___U3CChallengesByStatusU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<System.Int64,System.Collections.Generic.List`1<BetpalzSDK.Model.Wager>> BetpalzSDK.Betpalz::<WagersByChallengeId>k__BackingField
	Dictionary_2_t297886366 * ___U3CWagersByChallengeIdU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__serverUrl_3() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ____serverUrl_3)); }
	inline String_t* get__serverUrl_3() const { return ____serverUrl_3; }
	inline String_t** get_address_of__serverUrl_3() { return &____serverUrl_3; }
	inline void set__serverUrl_3(String_t* value)
	{
		____serverUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&____serverUrl_3, value);
	}

	inline static int32_t get_offset_of__apiKey_4() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ____apiKey_4)); }
	inline String_t* get__apiKey_4() const { return ____apiKey_4; }
	inline String_t** get_address_of__apiKey_4() { return &____apiKey_4; }
	inline void set__apiKey_4(String_t* value)
	{
		____apiKey_4 = value;
		Il2CppCodeGenWriteBarrier(&____apiKey_4, value);
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ____version_5)); }
	inline String_t* get__version_5() const { return ____version_5; }
	inline String_t** get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(String_t* value)
	{
		____version_5 = value;
		Il2CppCodeGenWriteBarrier(&____version_5, value);
	}

	inline static int32_t get_offset_of__responseParser_6() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ____responseParser_6)); }
	inline ResponseParser_t4075509322 * get__responseParser_6() const { return ____responseParser_6; }
	inline ResponseParser_t4075509322 ** get_address_of__responseParser_6() { return &____responseParser_6; }
	inline void set__responseParser_6(ResponseParser_t4075509322 * value)
	{
		____responseParser_6 = value;
		Il2CppCodeGenWriteBarrier(&____responseParser_6, value);
	}

	inline static int32_t get_offset_of__modelParser_7() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ____modelParser_7)); }
	inline ModelParser_t2520258128 * get__modelParser_7() const { return ____modelParser_7; }
	inline ModelParser_t2520258128 ** get_address_of__modelParser_7() { return &____modelParser_7; }
	inline void set__modelParser_7(ModelParser_t2520258128 * value)
	{
		____modelParser_7 = value;
		Il2CppCodeGenWriteBarrier(&____modelParser_7, value);
	}

	inline static int32_t get_offset_of_U3CCurrentUserU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ___U3CCurrentUserU3Ek__BackingField_8)); }
	inline User_t1930024827 * get_U3CCurrentUserU3Ek__BackingField_8() const { return ___U3CCurrentUserU3Ek__BackingField_8; }
	inline User_t1930024827 ** get_address_of_U3CCurrentUserU3Ek__BackingField_8() { return &___U3CCurrentUserU3Ek__BackingField_8; }
	inline void set_U3CCurrentUserU3Ek__BackingField_8(User_t1930024827 * value)
	{
		___U3CCurrentUserU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentUserU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CFriendsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ___U3CFriendsU3Ek__BackingField_9)); }
	inline List_1_t1299145959 * get_U3CFriendsU3Ek__BackingField_9() const { return ___U3CFriendsU3Ek__BackingField_9; }
	inline List_1_t1299145959 ** get_address_of_U3CFriendsU3Ek__BackingField_9() { return &___U3CFriendsU3Ek__BackingField_9; }
	inline void set_U3CFriendsU3Ek__BackingField_9(List_1_t1299145959 * value)
	{
		___U3CFriendsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFriendsU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CAllItemsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ___U3CAllItemsU3Ek__BackingField_10)); }
	inline List_1_t3543933003 * get_U3CAllItemsU3Ek__BackingField_10() const { return ___U3CAllItemsU3Ek__BackingField_10; }
	inline List_1_t3543933003 ** get_address_of_U3CAllItemsU3Ek__BackingField_10() { return &___U3CAllItemsU3Ek__BackingField_10; }
	inline void set_U3CAllItemsU3Ek__BackingField_10(List_1_t3543933003 * value)
	{
		___U3CAllItemsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAllItemsU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CChallengesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ___U3CChallengesU3Ek__BackingField_11)); }
	inline List_1_t2974994495 * get_U3CChallengesU3Ek__BackingField_11() const { return ___U3CChallengesU3Ek__BackingField_11; }
	inline List_1_t2974994495 ** get_address_of_U3CChallengesU3Ek__BackingField_11() { return &___U3CChallengesU3Ek__BackingField_11; }
	inline void set_U3CChallengesU3Ek__BackingField_11(List_1_t2974994495 * value)
	{
		___U3CChallengesU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CChallengesU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CChallengesByStatusU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ___U3CChallengesByStatusU3Ek__BackingField_12)); }
	inline Dictionary_2_t3272972436 * get_U3CChallengesByStatusU3Ek__BackingField_12() const { return ___U3CChallengesByStatusU3Ek__BackingField_12; }
	inline Dictionary_2_t3272972436 ** get_address_of_U3CChallengesByStatusU3Ek__BackingField_12() { return &___U3CChallengesByStatusU3Ek__BackingField_12; }
	inline void set_U3CChallengesByStatusU3Ek__BackingField_12(Dictionary_2_t3272972436 * value)
	{
		___U3CChallengesByStatusU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CChallengesByStatusU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CWagersByChallengeIdU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Betpalz_t3924986120, ___U3CWagersByChallengeIdU3Ek__BackingField_13)); }
	inline Dictionary_2_t297886366 * get_U3CWagersByChallengeIdU3Ek__BackingField_13() const { return ___U3CWagersByChallengeIdU3Ek__BackingField_13; }
	inline Dictionary_2_t297886366 ** get_address_of_U3CWagersByChallengeIdU3Ek__BackingField_13() { return &___U3CWagersByChallengeIdU3Ek__BackingField_13; }
	inline void set_U3CWagersByChallengeIdU3Ek__BackingField_13(Dictionary_2_t297886366 * value)
	{
		___U3CWagersByChallengeIdU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWagersByChallengeIdU3Ek__BackingField_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
