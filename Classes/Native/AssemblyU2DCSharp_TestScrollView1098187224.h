#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CommentsScrollView
struct CommentsScrollView_t1274630050;
// TestScrollView/ElementScrollInformation[]
struct ElementScrollInformationU5BU5D_t1945142705;

#include "AssemblyU2DCSharp_BaseScrollView1162388975.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestScrollView
struct  TestScrollView_t1098187224  : public BaseScrollView_t1162388975
{
public:
	// CommentsScrollView TestScrollView::commentsScrollView
	CommentsScrollView_t1274630050 * ___commentsScrollView_14;
	// TestScrollView/ElementScrollInformation[] TestScrollView::elementsScrollInformation
	ElementScrollInformationU5BU5D_t1945142705* ___elementsScrollInformation_15;

public:
	inline static int32_t get_offset_of_commentsScrollView_14() { return static_cast<int32_t>(offsetof(TestScrollView_t1098187224, ___commentsScrollView_14)); }
	inline CommentsScrollView_t1274630050 * get_commentsScrollView_14() const { return ___commentsScrollView_14; }
	inline CommentsScrollView_t1274630050 ** get_address_of_commentsScrollView_14() { return &___commentsScrollView_14; }
	inline void set_commentsScrollView_14(CommentsScrollView_t1274630050 * value)
	{
		___commentsScrollView_14 = value;
		Il2CppCodeGenWriteBarrier(&___commentsScrollView_14, value);
	}

	inline static int32_t get_offset_of_elementsScrollInformation_15() { return static_cast<int32_t>(offsetof(TestScrollView_t1098187224, ___elementsScrollInformation_15)); }
	inline ElementScrollInformationU5BU5D_t1945142705* get_elementsScrollInformation_15() const { return ___elementsScrollInformation_15; }
	inline ElementScrollInformationU5BU5D_t1945142705** get_address_of_elementsScrollInformation_15() { return &___elementsScrollInformation_15; }
	inline void set_elementsScrollInformation_15(ElementScrollInformationU5BU5D_t1945142705* value)
	{
		___elementsScrollInformation_15 = value;
		Il2CppCodeGenWriteBarrier(&___elementsScrollInformation_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
