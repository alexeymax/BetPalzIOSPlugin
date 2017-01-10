#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FriendsScrollView/ElementScrollInformation[]
struct ElementScrollInformationU5BU5D_t3573136598;

#include "AssemblyU2DCSharp_BaseScrollView1162388975.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FriendsScrollView
struct  FriendsScrollView_t1367516507  : public BaseScrollView_t1162388975
{
public:
	// FriendsScrollView/ElementScrollInformation[] FriendsScrollView::elementsScrollInformation
	ElementScrollInformationU5BU5D_t3573136598* ___elementsScrollInformation_14;

public:
	inline static int32_t get_offset_of_elementsScrollInformation_14() { return static_cast<int32_t>(offsetof(FriendsScrollView_t1367516507, ___elementsScrollInformation_14)); }
	inline ElementScrollInformationU5BU5D_t3573136598* get_elementsScrollInformation_14() const { return ___elementsScrollInformation_14; }
	inline ElementScrollInformationU5BU5D_t3573136598** get_address_of_elementsScrollInformation_14() { return &___elementsScrollInformation_14; }
	inline void set_elementsScrollInformation_14(ElementScrollInformationU5BU5D_t3573136598* value)
	{
		___elementsScrollInformation_14 = value;
		Il2CppCodeGenWriteBarrier(&___elementsScrollInformation_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
