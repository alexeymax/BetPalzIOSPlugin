#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BottomPanel
struct  BottomPanel_t1041309227  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite BottomPanel::buttonActive
	Sprite_t309593783 * ___buttonActive_2;
	// UnityEngine.Sprite BottomPanel::buttonInactive
	Sprite_t309593783 * ___buttonInactive_3;
	// UnityEngine.Color BottomPanel::activeColor
	Color_t2020392075  ___activeColor_4;
	// UnityEngine.Color BottomPanel::inactiveColor
	Color_t2020392075  ___inactiveColor_5;
	// UnityEngine.RectTransform BottomPanel::screens
	RectTransform_t3349966182 * ___screens_6;
	// UnityEngine.UI.Button[] BottomPanel::buttons
	ButtonU5BU5D_t3071100561* ___buttons_7;

public:
	inline static int32_t get_offset_of_buttonActive_2() { return static_cast<int32_t>(offsetof(BottomPanel_t1041309227, ___buttonActive_2)); }
	inline Sprite_t309593783 * get_buttonActive_2() const { return ___buttonActive_2; }
	inline Sprite_t309593783 ** get_address_of_buttonActive_2() { return &___buttonActive_2; }
	inline void set_buttonActive_2(Sprite_t309593783 * value)
	{
		___buttonActive_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonActive_2, value);
	}

	inline static int32_t get_offset_of_buttonInactive_3() { return static_cast<int32_t>(offsetof(BottomPanel_t1041309227, ___buttonInactive_3)); }
	inline Sprite_t309593783 * get_buttonInactive_3() const { return ___buttonInactive_3; }
	inline Sprite_t309593783 ** get_address_of_buttonInactive_3() { return &___buttonInactive_3; }
	inline void set_buttonInactive_3(Sprite_t309593783 * value)
	{
		___buttonInactive_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonInactive_3, value);
	}

	inline static int32_t get_offset_of_activeColor_4() { return static_cast<int32_t>(offsetof(BottomPanel_t1041309227, ___activeColor_4)); }
	inline Color_t2020392075  get_activeColor_4() const { return ___activeColor_4; }
	inline Color_t2020392075 * get_address_of_activeColor_4() { return &___activeColor_4; }
	inline void set_activeColor_4(Color_t2020392075  value)
	{
		___activeColor_4 = value;
	}

	inline static int32_t get_offset_of_inactiveColor_5() { return static_cast<int32_t>(offsetof(BottomPanel_t1041309227, ___inactiveColor_5)); }
	inline Color_t2020392075  get_inactiveColor_5() const { return ___inactiveColor_5; }
	inline Color_t2020392075 * get_address_of_inactiveColor_5() { return &___inactiveColor_5; }
	inline void set_inactiveColor_5(Color_t2020392075  value)
	{
		___inactiveColor_5 = value;
	}

	inline static int32_t get_offset_of_screens_6() { return static_cast<int32_t>(offsetof(BottomPanel_t1041309227, ___screens_6)); }
	inline RectTransform_t3349966182 * get_screens_6() const { return ___screens_6; }
	inline RectTransform_t3349966182 ** get_address_of_screens_6() { return &___screens_6; }
	inline void set_screens_6(RectTransform_t3349966182 * value)
	{
		___screens_6 = value;
		Il2CppCodeGenWriteBarrier(&___screens_6, value);
	}

	inline static int32_t get_offset_of_buttons_7() { return static_cast<int32_t>(offsetof(BottomPanel_t1041309227, ___buttons_7)); }
	inline ButtonU5BU5D_t3071100561* get_buttons_7() const { return ___buttons_7; }
	inline ButtonU5BU5D_t3071100561** get_address_of_buttons_7() { return &___buttons_7; }
	inline void set_buttons_7(ButtonU5BU5D_t3071100561* value)
	{
		___buttons_7 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
