﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TwitterContactsScreenList/ElementScrollInformation[]
struct ElementScrollInformationU5BU5D_t1550298443;

#include "AssemblyU2DCSharp_BaseScrollView1162388975.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterContactsScreenList
struct  TwitterContactsScreenList_t762872906  : public BaseScrollView_t1162388975
{
public:
	// TwitterContactsScreenList/ElementScrollInformation[] TwitterContactsScreenList::elementsScrollInformation
	ElementScrollInformationU5BU5D_t1550298443* ___elementsScrollInformation_14;
	// System.Boolean TwitterContactsScreenList::isMailList
	bool ___isMailList_15;

public:
	inline static int32_t get_offset_of_elementsScrollInformation_14() { return static_cast<int32_t>(offsetof(TwitterContactsScreenList_t762872906, ___elementsScrollInformation_14)); }
	inline ElementScrollInformationU5BU5D_t1550298443* get_elementsScrollInformation_14() const { return ___elementsScrollInformation_14; }
	inline ElementScrollInformationU5BU5D_t1550298443** get_address_of_elementsScrollInformation_14() { return &___elementsScrollInformation_14; }
	inline void set_elementsScrollInformation_14(ElementScrollInformationU5BU5D_t1550298443* value)
	{
		___elementsScrollInformation_14 = value;
		Il2CppCodeGenWriteBarrier(&___elementsScrollInformation_14, value);
	}

	inline static int32_t get_offset_of_isMailList_15() { return static_cast<int32_t>(offsetof(TwitterContactsScreenList_t762872906, ___isMailList_15)); }
	inline bool get_isMailList_15() const { return ___isMailList_15; }
	inline bool* get_address_of_isMailList_15() { return &___isMailList_15; }
	inline void set_isMailList_15(bool value)
	{
		___isMailList_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
