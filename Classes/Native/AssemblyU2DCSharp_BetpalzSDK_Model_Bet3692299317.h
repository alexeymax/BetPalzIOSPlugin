#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// BetpalzSDK.Model.Opponent
struct Opponent_t855927453;
// System.String
struct String_t;
// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent>
struct List_1_t225048585;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BetpalzSDK_Model_BetStatus2994445495.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetpalzSDK.Model.Bet
struct  Bet_t3692299317  : public Il2CppObject
{
public:
	// System.Int64 BetpalzSDK.Model.Bet::<Id>k__BackingField
	int64_t ___U3CIdU3Ek__BackingField_1;
	// BetpalzSDK.Model.Opponent BetpalzSDK.Model.Bet::<Creator>k__BackingField
	Opponent_t855927453 * ___U3CCreatorU3Ek__BackingField_2;
	// System.String BetpalzSDK.Model.Bet::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<BetpalzSDK.Model.Opponent> BetpalzSDK.Model.Bet::<Participants>k__BackingField
	List_1_t225048585 * ___U3CParticipantsU3Ek__BackingField_4;
	// System.Boolean BetpalzSDK.Model.Bet::<IsLiked>k__BackingField
	bool ___U3CIsLikedU3Ek__BackingField_5;
	// System.Int32 BetpalzSDK.Model.Bet::<LikesCount>k__BackingField
	int32_t ___U3CLikesCountU3Ek__BackingField_6;
	// System.Int32 BetpalzSDK.Model.Bet::<CommentsCount>k__BackingField
	int32_t ___U3CCommentsCountU3Ek__BackingField_7;
	// BetpalzSDK.Model.BetStatus BetpalzSDK.Model.Bet::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Bet_t3692299317, ___U3CIdU3Ek__BackingField_1)); }
	inline int64_t get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(int64_t value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCreatorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Bet_t3692299317, ___U3CCreatorU3Ek__BackingField_2)); }
	inline Opponent_t855927453 * get_U3CCreatorU3Ek__BackingField_2() const { return ___U3CCreatorU3Ek__BackingField_2; }
	inline Opponent_t855927453 ** get_address_of_U3CCreatorU3Ek__BackingField_2() { return &___U3CCreatorU3Ek__BackingField_2; }
	inline void set_U3CCreatorU3Ek__BackingField_2(Opponent_t855927453 * value)
	{
		___U3CCreatorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCreatorU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Bet_t3692299317, ___U3CDescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_3() const { return ___U3CDescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_3() { return &___U3CDescriptionU3Ek__BackingField_3; }
	inline void set_U3CDescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDescriptionU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CParticipantsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Bet_t3692299317, ___U3CParticipantsU3Ek__BackingField_4)); }
	inline List_1_t225048585 * get_U3CParticipantsU3Ek__BackingField_4() const { return ___U3CParticipantsU3Ek__BackingField_4; }
	inline List_1_t225048585 ** get_address_of_U3CParticipantsU3Ek__BackingField_4() { return &___U3CParticipantsU3Ek__BackingField_4; }
	inline void set_U3CParticipantsU3Ek__BackingField_4(List_1_t225048585 * value)
	{
		___U3CParticipantsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CParticipantsU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CIsLikedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Bet_t3692299317, ___U3CIsLikedU3Ek__BackingField_5)); }
	inline bool get_U3CIsLikedU3Ek__BackingField_5() const { return ___U3CIsLikedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsLikedU3Ek__BackingField_5() { return &___U3CIsLikedU3Ek__BackingField_5; }
	inline void set_U3CIsLikedU3Ek__BackingField_5(bool value)
	{
		___U3CIsLikedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLikesCountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Bet_t3692299317, ___U3CLikesCountU3Ek__BackingField_6)); }
	inline int32_t get_U3CLikesCountU3Ek__BackingField_6() const { return ___U3CLikesCountU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CLikesCountU3Ek__BackingField_6() { return &___U3CLikesCountU3Ek__BackingField_6; }
	inline void set_U3CLikesCountU3Ek__BackingField_6(int32_t value)
	{
		___U3CLikesCountU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCommentsCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Bet_t3692299317, ___U3CCommentsCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCommentsCountU3Ek__BackingField_7() const { return ___U3CCommentsCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCommentsCountU3Ek__BackingField_7() { return &___U3CCommentsCountU3Ek__BackingField_7; }
	inline void set_U3CCommentsCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCommentsCountU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Bet_t3692299317, ___U3CStatusU3Ek__BackingField_8)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_8() const { return ___U3CStatusU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_8() { return &___U3CStatusU3Ek__BackingField_8; }
	inline void set_U3CStatusU3Ek__BackingField_8(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_8 = value;
	}
};

struct Bet_t3692299317_StaticFields
{
public:
	// System.String[] BetpalzSDK.Model.Bet::BetStatuses
	StringU5BU5D_t1642385972* ___BetStatuses_0;

public:
	inline static int32_t get_offset_of_BetStatuses_0() { return static_cast<int32_t>(offsetof(Bet_t3692299317_StaticFields, ___BetStatuses_0)); }
	inline StringU5BU5D_t1642385972* get_BetStatuses_0() const { return ___BetStatuses_0; }
	inline StringU5BU5D_t1642385972** get_address_of_BetStatuses_0() { return &___BetStatuses_0; }
	inline void set_BetStatuses_0(StringU5BU5D_t1642385972* value)
	{
		___BetStatuses_0 = value;
		Il2CppCodeGenWriteBarrier(&___BetStatuses_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
