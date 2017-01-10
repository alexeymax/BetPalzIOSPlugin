#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ScrollElement>
struct List_1_t713925761;
// ScrollButtonsDisabler
struct ScrollButtonsDisabler_t958025824;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseScrollView
struct  BaseScrollView_t1162388975  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 BaseScrollView::preloadItemsCount
	int32_t ___preloadItemsCount_3;
	// System.Int32 BaseScrollView::ActiveItemsCount
	int32_t ___ActiveItemsCount_4;
	// System.Int32 BaseScrollView::elementsCount
	int32_t ___elementsCount_5;
	// System.Collections.Generic.List`1<ScrollElement> BaseScrollView::freeElements
	List_1_t713925761 * ___freeElements_6;
	// System.Collections.Generic.List`1<ScrollElement> BaseScrollView::visibleElements
	List_1_t713925761 * ___visibleElements_7;
	// ScrollButtonsDisabler BaseScrollView::buttonsDisabler
	ScrollButtonsDisabler_t958025824 * ___buttonsDisabler_8;
	// System.Int32[] BaseScrollView::elementsHeight
	Int32U5BU5D_t3030399641* ___elementsHeight_9;
	// System.Int32[] BaseScrollView::elementPosition
	Int32U5BU5D_t3030399641* ___elementPosition_10;
	// System.Int32 BaseScrollView::lastCalculatedPosition
	int32_t ___lastCalculatedPosition_11;
	// System.Int32 BaseScrollView::lastFromIndex
	int32_t ___lastFromIndex_12;
	// System.Int32 BaseScrollView::lastToIndex
	int32_t ___lastToIndex_13;

public:
	inline static int32_t get_offset_of_preloadItemsCount_3() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___preloadItemsCount_3)); }
	inline int32_t get_preloadItemsCount_3() const { return ___preloadItemsCount_3; }
	inline int32_t* get_address_of_preloadItemsCount_3() { return &___preloadItemsCount_3; }
	inline void set_preloadItemsCount_3(int32_t value)
	{
		___preloadItemsCount_3 = value;
	}

	inline static int32_t get_offset_of_ActiveItemsCount_4() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___ActiveItemsCount_4)); }
	inline int32_t get_ActiveItemsCount_4() const { return ___ActiveItemsCount_4; }
	inline int32_t* get_address_of_ActiveItemsCount_4() { return &___ActiveItemsCount_4; }
	inline void set_ActiveItemsCount_4(int32_t value)
	{
		___ActiveItemsCount_4 = value;
	}

	inline static int32_t get_offset_of_elementsCount_5() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___elementsCount_5)); }
	inline int32_t get_elementsCount_5() const { return ___elementsCount_5; }
	inline int32_t* get_address_of_elementsCount_5() { return &___elementsCount_5; }
	inline void set_elementsCount_5(int32_t value)
	{
		___elementsCount_5 = value;
	}

	inline static int32_t get_offset_of_freeElements_6() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___freeElements_6)); }
	inline List_1_t713925761 * get_freeElements_6() const { return ___freeElements_6; }
	inline List_1_t713925761 ** get_address_of_freeElements_6() { return &___freeElements_6; }
	inline void set_freeElements_6(List_1_t713925761 * value)
	{
		___freeElements_6 = value;
		Il2CppCodeGenWriteBarrier(&___freeElements_6, value);
	}

	inline static int32_t get_offset_of_visibleElements_7() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___visibleElements_7)); }
	inline List_1_t713925761 * get_visibleElements_7() const { return ___visibleElements_7; }
	inline List_1_t713925761 ** get_address_of_visibleElements_7() { return &___visibleElements_7; }
	inline void set_visibleElements_7(List_1_t713925761 * value)
	{
		___visibleElements_7 = value;
		Il2CppCodeGenWriteBarrier(&___visibleElements_7, value);
	}

	inline static int32_t get_offset_of_buttonsDisabler_8() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___buttonsDisabler_8)); }
	inline ScrollButtonsDisabler_t958025824 * get_buttonsDisabler_8() const { return ___buttonsDisabler_8; }
	inline ScrollButtonsDisabler_t958025824 ** get_address_of_buttonsDisabler_8() { return &___buttonsDisabler_8; }
	inline void set_buttonsDisabler_8(ScrollButtonsDisabler_t958025824 * value)
	{
		___buttonsDisabler_8 = value;
		Il2CppCodeGenWriteBarrier(&___buttonsDisabler_8, value);
	}

	inline static int32_t get_offset_of_elementsHeight_9() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___elementsHeight_9)); }
	inline Int32U5BU5D_t3030399641* get_elementsHeight_9() const { return ___elementsHeight_9; }
	inline Int32U5BU5D_t3030399641** get_address_of_elementsHeight_9() { return &___elementsHeight_9; }
	inline void set_elementsHeight_9(Int32U5BU5D_t3030399641* value)
	{
		___elementsHeight_9 = value;
		Il2CppCodeGenWriteBarrier(&___elementsHeight_9, value);
	}

	inline static int32_t get_offset_of_elementPosition_10() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___elementPosition_10)); }
	inline Int32U5BU5D_t3030399641* get_elementPosition_10() const { return ___elementPosition_10; }
	inline Int32U5BU5D_t3030399641** get_address_of_elementPosition_10() { return &___elementPosition_10; }
	inline void set_elementPosition_10(Int32U5BU5D_t3030399641* value)
	{
		___elementPosition_10 = value;
		Il2CppCodeGenWriteBarrier(&___elementPosition_10, value);
	}

	inline static int32_t get_offset_of_lastCalculatedPosition_11() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___lastCalculatedPosition_11)); }
	inline int32_t get_lastCalculatedPosition_11() const { return ___lastCalculatedPosition_11; }
	inline int32_t* get_address_of_lastCalculatedPosition_11() { return &___lastCalculatedPosition_11; }
	inline void set_lastCalculatedPosition_11(int32_t value)
	{
		___lastCalculatedPosition_11 = value;
	}

	inline static int32_t get_offset_of_lastFromIndex_12() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___lastFromIndex_12)); }
	inline int32_t get_lastFromIndex_12() const { return ___lastFromIndex_12; }
	inline int32_t* get_address_of_lastFromIndex_12() { return &___lastFromIndex_12; }
	inline void set_lastFromIndex_12(int32_t value)
	{
		___lastFromIndex_12 = value;
	}

	inline static int32_t get_offset_of_lastToIndex_13() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975, ___lastToIndex_13)); }
	inline int32_t get_lastToIndex_13() const { return ___lastToIndex_13; }
	inline int32_t* get_address_of_lastToIndex_13() { return &___lastToIndex_13; }
	inline void set_lastToIndex_13(int32_t value)
	{
		___lastToIndex_13 = value;
	}
};

struct BaseScrollView_t1162388975_StaticFields
{
public:
	// System.Int32 BaseScrollView::MAX_FEED_COUNT
	int32_t ___MAX_FEED_COUNT_2;

public:
	inline static int32_t get_offset_of_MAX_FEED_COUNT_2() { return static_cast<int32_t>(offsetof(BaseScrollView_t1162388975_StaticFields, ___MAX_FEED_COUNT_2)); }
	inline int32_t get_MAX_FEED_COUNT_2() const { return ___MAX_FEED_COUNT_2; }
	inline int32_t* get_address_of_MAX_FEED_COUNT_2() { return &___MAX_FEED_COUNT_2; }
	inline void set_MAX_FEED_COUNT_2(int32_t value)
	{
		___MAX_FEED_COUNT_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
