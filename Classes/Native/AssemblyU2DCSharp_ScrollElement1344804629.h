#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollElement
struct  ScrollElement_t1344804629  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ScrollElement::isFree
	bool ___isFree_2;
	// System.Int32 ScrollElement::elementIndex
	int32_t ___elementIndex_3;
	// System.Boolean ScrollElement::expanded
	bool ___expanded_4;

public:
	inline static int32_t get_offset_of_isFree_2() { return static_cast<int32_t>(offsetof(ScrollElement_t1344804629, ___isFree_2)); }
	inline bool get_isFree_2() const { return ___isFree_2; }
	inline bool* get_address_of_isFree_2() { return &___isFree_2; }
	inline void set_isFree_2(bool value)
	{
		___isFree_2 = value;
	}

	inline static int32_t get_offset_of_elementIndex_3() { return static_cast<int32_t>(offsetof(ScrollElement_t1344804629, ___elementIndex_3)); }
	inline int32_t get_elementIndex_3() const { return ___elementIndex_3; }
	inline int32_t* get_address_of_elementIndex_3() { return &___elementIndex_3; }
	inline void set_elementIndex_3(int32_t value)
	{
		___elementIndex_3 = value;
	}

	inline static int32_t get_offset_of_expanded_4() { return static_cast<int32_t>(offsetof(ScrollElement_t1344804629, ___expanded_4)); }
	inline bool get_expanded_4() const { return ___expanded_4; }
	inline bool* get_address_of_expanded_4() { return &___expanded_4; }
	inline void set_expanded_4(bool value)
	{
		___expanded_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
