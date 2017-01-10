#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CommentsScrollView/ElementScrollInformation[]
struct ElementScrollInformationU5BU5D_t1656939331;
// FeedChallengeElement
struct FeedChallengeElement_t484022229;

#include "AssemblyU2DCSharp_BaseScrollView1162388975.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CommentsScrollView
struct  CommentsScrollView_t1274630050  : public BaseScrollView_t1162388975
{
public:
	// CommentsScrollView/ElementScrollInformation[] CommentsScrollView::elementsScrollInformation
	ElementScrollInformationU5BU5D_t1656939331* ___elementsScrollInformation_14;
	// FeedChallengeElement CommentsScrollView::feedElement
	FeedChallengeElement_t484022229 * ___feedElement_15;

public:
	inline static int32_t get_offset_of_elementsScrollInformation_14() { return static_cast<int32_t>(offsetof(CommentsScrollView_t1274630050, ___elementsScrollInformation_14)); }
	inline ElementScrollInformationU5BU5D_t1656939331* get_elementsScrollInformation_14() const { return ___elementsScrollInformation_14; }
	inline ElementScrollInformationU5BU5D_t1656939331** get_address_of_elementsScrollInformation_14() { return &___elementsScrollInformation_14; }
	inline void set_elementsScrollInformation_14(ElementScrollInformationU5BU5D_t1656939331* value)
	{
		___elementsScrollInformation_14 = value;
		Il2CppCodeGenWriteBarrier(&___elementsScrollInformation_14, value);
	}

	inline static int32_t get_offset_of_feedElement_15() { return static_cast<int32_t>(offsetof(CommentsScrollView_t1274630050, ___feedElement_15)); }
	inline FeedChallengeElement_t484022229 * get_feedElement_15() const { return ___feedElement_15; }
	inline FeedChallengeElement_t484022229 ** get_address_of_feedElement_15() { return &___feedElement_15; }
	inline void set_feedElement_15(FeedChallengeElement_t484022229 * value)
	{
		___feedElement_15 = value;
		Il2CppCodeGenWriteBarrier(&___feedElement_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
