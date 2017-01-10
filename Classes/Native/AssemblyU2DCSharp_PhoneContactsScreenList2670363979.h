#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhoneContactsScreenList/ElementScrollInformation[]
struct ElementScrollInformationU5BU5D_t1744932070;

#include "AssemblyU2DCSharp_BaseScrollView1162388975.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhoneContactsScreenList
struct  PhoneContactsScreenList_t2670363979  : public BaseScrollView_t1162388975
{
public:
	// PhoneContactsScreenList/ElementScrollInformation[] PhoneContactsScreenList::elementsScrollInformation
	ElementScrollInformationU5BU5D_t1744932070* ___elementsScrollInformation_14;
	// System.Boolean PhoneContactsScreenList::isMailList
	bool ___isMailList_15;
	// System.Int32 PhoneContactsScreenList::oldContactsCount
	int32_t ___oldContactsCount_16;

public:
	inline static int32_t get_offset_of_elementsScrollInformation_14() { return static_cast<int32_t>(offsetof(PhoneContactsScreenList_t2670363979, ___elementsScrollInformation_14)); }
	inline ElementScrollInformationU5BU5D_t1744932070* get_elementsScrollInformation_14() const { return ___elementsScrollInformation_14; }
	inline ElementScrollInformationU5BU5D_t1744932070** get_address_of_elementsScrollInformation_14() { return &___elementsScrollInformation_14; }
	inline void set_elementsScrollInformation_14(ElementScrollInformationU5BU5D_t1744932070* value)
	{
		___elementsScrollInformation_14 = value;
		Il2CppCodeGenWriteBarrier(&___elementsScrollInformation_14, value);
	}

	inline static int32_t get_offset_of_isMailList_15() { return static_cast<int32_t>(offsetof(PhoneContactsScreenList_t2670363979, ___isMailList_15)); }
	inline bool get_isMailList_15() const { return ___isMailList_15; }
	inline bool* get_address_of_isMailList_15() { return &___isMailList_15; }
	inline void set_isMailList_15(bool value)
	{
		___isMailList_15 = value;
	}

	inline static int32_t get_offset_of_oldContactsCount_16() { return static_cast<int32_t>(offsetof(PhoneContactsScreenList_t2670363979, ___oldContactsCount_16)); }
	inline int32_t get_oldContactsCount_16() const { return ___oldContactsCount_16; }
	inline int32_t* get_address_of_oldContactsCount_16() { return &___oldContactsCount_16; }
	inline void set_oldContactsCount_16(int32_t value)
	{
		___oldContactsCount_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
