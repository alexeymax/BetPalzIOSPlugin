#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// System.Action[]
struct ActionU5BU5D_t87223449;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;
// UnityEngine.UI.InputField[]
struct InputFieldU5BU5D_t1225584527;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t1971649997;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Popup
struct  Popup_t161311578  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Popup::autoScale
	bool ___autoScale_2;
	// System.Action Popup::OnOkClick
	Action_t3226471752 * ___OnOkClick_3;
	// System.Action Popup::OnCancelClick
	Action_t3226471752 * ___OnCancelClick_4;
	// System.Action[] Popup::OnOtherButtonClick
	ActionU5BU5D_t87223449* ___OnOtherButtonClick_5;
	// UnityEngine.GameObject[] Popup::objects
	GameObjectU5BU5D_t3057952154* ___objects_6;
	// System.String[] Popup::stringList
	StringU5BU5D_t1642385972* ___stringList_7;
	// UnityEngine.UI.Text[] Popup::textParametersList
	TextU5BU5D_t4216439300* ___textParametersList_8;
	// UnityEngine.UI.Text[] Popup::textList
	TextU5BU5D_t4216439300* ___textList_9;
	// UnityEngine.UI.InputField[] Popup::inputFieldsList
	InputFieldU5BU5D_t1225584527* ___inputFieldsList_10;
	// UnityEngine.UI.Toggle[] Popup::toggles
	ToggleU5BU5D_t1971649997* ___toggles_11;
	// System.Int32 Popup::minimumWidth
	int32_t ___minimumWidth_12;
	// System.Int32 Popup::minimumHeight
	int32_t ___minimumHeight_13;
	// UnityEngine.RectTransform Popup::frame
	RectTransform_t3349966182 * ___frame_14;
	// System.Single Popup::autoCloseTime
	float ___autoCloseTime_15;
	// System.Boolean Popup::ovverrideLayer
	bool ___ovverrideLayer_16;
	// System.String Popup::layerName
	String_t* ___layerName_17;
	// System.Boolean Popup::coinsOnOkClick
	bool ___coinsOnOkClick_18;
	// System.String Popup::soundOnButtons
	String_t* ___soundOnButtons_19;

public:
	inline static int32_t get_offset_of_autoScale_2() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___autoScale_2)); }
	inline bool get_autoScale_2() const { return ___autoScale_2; }
	inline bool* get_address_of_autoScale_2() { return &___autoScale_2; }
	inline void set_autoScale_2(bool value)
	{
		___autoScale_2 = value;
	}

	inline static int32_t get_offset_of_OnOkClick_3() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___OnOkClick_3)); }
	inline Action_t3226471752 * get_OnOkClick_3() const { return ___OnOkClick_3; }
	inline Action_t3226471752 ** get_address_of_OnOkClick_3() { return &___OnOkClick_3; }
	inline void set_OnOkClick_3(Action_t3226471752 * value)
	{
		___OnOkClick_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnOkClick_3, value);
	}

	inline static int32_t get_offset_of_OnCancelClick_4() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___OnCancelClick_4)); }
	inline Action_t3226471752 * get_OnCancelClick_4() const { return ___OnCancelClick_4; }
	inline Action_t3226471752 ** get_address_of_OnCancelClick_4() { return &___OnCancelClick_4; }
	inline void set_OnCancelClick_4(Action_t3226471752 * value)
	{
		___OnCancelClick_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnCancelClick_4, value);
	}

	inline static int32_t get_offset_of_OnOtherButtonClick_5() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___OnOtherButtonClick_5)); }
	inline ActionU5BU5D_t87223449* get_OnOtherButtonClick_5() const { return ___OnOtherButtonClick_5; }
	inline ActionU5BU5D_t87223449** get_address_of_OnOtherButtonClick_5() { return &___OnOtherButtonClick_5; }
	inline void set_OnOtherButtonClick_5(ActionU5BU5D_t87223449* value)
	{
		___OnOtherButtonClick_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnOtherButtonClick_5, value);
	}

	inline static int32_t get_offset_of_objects_6() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___objects_6)); }
	inline GameObjectU5BU5D_t3057952154* get_objects_6() const { return ___objects_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objects_6() { return &___objects_6; }
	inline void set_objects_6(GameObjectU5BU5D_t3057952154* value)
	{
		___objects_6 = value;
		Il2CppCodeGenWriteBarrier(&___objects_6, value);
	}

	inline static int32_t get_offset_of_stringList_7() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___stringList_7)); }
	inline StringU5BU5D_t1642385972* get_stringList_7() const { return ___stringList_7; }
	inline StringU5BU5D_t1642385972** get_address_of_stringList_7() { return &___stringList_7; }
	inline void set_stringList_7(StringU5BU5D_t1642385972* value)
	{
		___stringList_7 = value;
		Il2CppCodeGenWriteBarrier(&___stringList_7, value);
	}

	inline static int32_t get_offset_of_textParametersList_8() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___textParametersList_8)); }
	inline TextU5BU5D_t4216439300* get_textParametersList_8() const { return ___textParametersList_8; }
	inline TextU5BU5D_t4216439300** get_address_of_textParametersList_8() { return &___textParametersList_8; }
	inline void set_textParametersList_8(TextU5BU5D_t4216439300* value)
	{
		___textParametersList_8 = value;
		Il2CppCodeGenWriteBarrier(&___textParametersList_8, value);
	}

	inline static int32_t get_offset_of_textList_9() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___textList_9)); }
	inline TextU5BU5D_t4216439300* get_textList_9() const { return ___textList_9; }
	inline TextU5BU5D_t4216439300** get_address_of_textList_9() { return &___textList_9; }
	inline void set_textList_9(TextU5BU5D_t4216439300* value)
	{
		___textList_9 = value;
		Il2CppCodeGenWriteBarrier(&___textList_9, value);
	}

	inline static int32_t get_offset_of_inputFieldsList_10() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___inputFieldsList_10)); }
	inline InputFieldU5BU5D_t1225584527* get_inputFieldsList_10() const { return ___inputFieldsList_10; }
	inline InputFieldU5BU5D_t1225584527** get_address_of_inputFieldsList_10() { return &___inputFieldsList_10; }
	inline void set_inputFieldsList_10(InputFieldU5BU5D_t1225584527* value)
	{
		___inputFieldsList_10 = value;
		Il2CppCodeGenWriteBarrier(&___inputFieldsList_10, value);
	}

	inline static int32_t get_offset_of_toggles_11() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___toggles_11)); }
	inline ToggleU5BU5D_t1971649997* get_toggles_11() const { return ___toggles_11; }
	inline ToggleU5BU5D_t1971649997** get_address_of_toggles_11() { return &___toggles_11; }
	inline void set_toggles_11(ToggleU5BU5D_t1971649997* value)
	{
		___toggles_11 = value;
		Il2CppCodeGenWriteBarrier(&___toggles_11, value);
	}

	inline static int32_t get_offset_of_minimumWidth_12() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___minimumWidth_12)); }
	inline int32_t get_minimumWidth_12() const { return ___minimumWidth_12; }
	inline int32_t* get_address_of_minimumWidth_12() { return &___minimumWidth_12; }
	inline void set_minimumWidth_12(int32_t value)
	{
		___minimumWidth_12 = value;
	}

	inline static int32_t get_offset_of_minimumHeight_13() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___minimumHeight_13)); }
	inline int32_t get_minimumHeight_13() const { return ___minimumHeight_13; }
	inline int32_t* get_address_of_minimumHeight_13() { return &___minimumHeight_13; }
	inline void set_minimumHeight_13(int32_t value)
	{
		___minimumHeight_13 = value;
	}

	inline static int32_t get_offset_of_frame_14() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___frame_14)); }
	inline RectTransform_t3349966182 * get_frame_14() const { return ___frame_14; }
	inline RectTransform_t3349966182 ** get_address_of_frame_14() { return &___frame_14; }
	inline void set_frame_14(RectTransform_t3349966182 * value)
	{
		___frame_14 = value;
		Il2CppCodeGenWriteBarrier(&___frame_14, value);
	}

	inline static int32_t get_offset_of_autoCloseTime_15() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___autoCloseTime_15)); }
	inline float get_autoCloseTime_15() const { return ___autoCloseTime_15; }
	inline float* get_address_of_autoCloseTime_15() { return &___autoCloseTime_15; }
	inline void set_autoCloseTime_15(float value)
	{
		___autoCloseTime_15 = value;
	}

	inline static int32_t get_offset_of_ovverrideLayer_16() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___ovverrideLayer_16)); }
	inline bool get_ovverrideLayer_16() const { return ___ovverrideLayer_16; }
	inline bool* get_address_of_ovverrideLayer_16() { return &___ovverrideLayer_16; }
	inline void set_ovverrideLayer_16(bool value)
	{
		___ovverrideLayer_16 = value;
	}

	inline static int32_t get_offset_of_layerName_17() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___layerName_17)); }
	inline String_t* get_layerName_17() const { return ___layerName_17; }
	inline String_t** get_address_of_layerName_17() { return &___layerName_17; }
	inline void set_layerName_17(String_t* value)
	{
		___layerName_17 = value;
		Il2CppCodeGenWriteBarrier(&___layerName_17, value);
	}

	inline static int32_t get_offset_of_coinsOnOkClick_18() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___coinsOnOkClick_18)); }
	inline bool get_coinsOnOkClick_18() const { return ___coinsOnOkClick_18; }
	inline bool* get_address_of_coinsOnOkClick_18() { return &___coinsOnOkClick_18; }
	inline void set_coinsOnOkClick_18(bool value)
	{
		___coinsOnOkClick_18 = value;
	}

	inline static int32_t get_offset_of_soundOnButtons_19() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___soundOnButtons_19)); }
	inline String_t* get_soundOnButtons_19() const { return ___soundOnButtons_19; }
	inline String_t** get_address_of_soundOnButtons_19() { return &___soundOnButtons_19; }
	inline void set_soundOnButtons_19(String_t* value)
	{
		___soundOnButtons_19 = value;
		Il2CppCodeGenWriteBarrier(&___soundOnButtons_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
