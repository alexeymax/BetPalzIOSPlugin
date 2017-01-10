#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContactsListGUI
struct  ContactsListGUI_t437224532  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Font ContactsListGUI::font
	Font_t4239498691 * ___font_2;
	// UnityEngine.Texture2D ContactsListGUI::even_contactTexture
	Texture2D_t3542995729 * ___even_contactTexture_3;
	// UnityEngine.Texture2D ContactsListGUI::odd_contactTexture
	Texture2D_t3542995729 * ___odd_contactTexture_4;
	// UnityEngine.Texture2D ContactsListGUI::contact_faceTexture
	Texture2D_t3542995729 * ___contact_faceTexture_5;
	// UnityEngine.GUIStyle ContactsListGUI::style
	GUIStyle_t1799908754 * ___style_6;
	// UnityEngine.GUIStyle ContactsListGUI::evenContactStyle
	GUIStyle_t1799908754 * ___evenContactStyle_7;
	// UnityEngine.GUIStyle ContactsListGUI::oddContactStyle
	GUIStyle_t1799908754 * ___oddContactStyle_8;
	// UnityEngine.GUIStyle ContactsListGUI::contactFaceStyle
	GUIStyle_t1799908754 * ___contactFaceStyle_9;
	// UnityEngine.GUIStyle ContactsListGUI::nonStyle2
	GUIStyle_t1799908754 * ___nonStyle2_10;
	// UnityEngine.Vector2 ContactsListGUI::size
	Vector2_t2243707579  ___size_11;
	// System.Single ContactsListGUI::dragTime
	float ___dragTime_12;
	// System.Single ContactsListGUI::dragSpeed
	float ___dragSpeed_13;
	// System.String ContactsListGUI::failString
	String_t* ___failString_14;
	// UnityEngine.Vector2 ContactsListGUI::downPos
	Vector2_t2243707579  ___downPos_15;
	// UnityEngine.Vector2 ContactsListGUI::mousePosition
	Vector2_t2243707579  ___mousePosition_16;
	// UnityEngine.Vector2 ContactsListGUI::contactsScrollPos
	Vector2_t2243707579  ___contactsScrollPos_17;
	// UnityEngine.Vector2 ContactsListGUI::oldContactsDrag
	Vector2_t2243707579  ___oldContactsDrag_18;

public:
	inline static int32_t get_offset_of_font_2() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___font_2)); }
	inline Font_t4239498691 * get_font_2() const { return ___font_2; }
	inline Font_t4239498691 ** get_address_of_font_2() { return &___font_2; }
	inline void set_font_2(Font_t4239498691 * value)
	{
		___font_2 = value;
		Il2CppCodeGenWriteBarrier(&___font_2, value);
	}

	inline static int32_t get_offset_of_even_contactTexture_3() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___even_contactTexture_3)); }
	inline Texture2D_t3542995729 * get_even_contactTexture_3() const { return ___even_contactTexture_3; }
	inline Texture2D_t3542995729 ** get_address_of_even_contactTexture_3() { return &___even_contactTexture_3; }
	inline void set_even_contactTexture_3(Texture2D_t3542995729 * value)
	{
		___even_contactTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___even_contactTexture_3, value);
	}

	inline static int32_t get_offset_of_odd_contactTexture_4() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___odd_contactTexture_4)); }
	inline Texture2D_t3542995729 * get_odd_contactTexture_4() const { return ___odd_contactTexture_4; }
	inline Texture2D_t3542995729 ** get_address_of_odd_contactTexture_4() { return &___odd_contactTexture_4; }
	inline void set_odd_contactTexture_4(Texture2D_t3542995729 * value)
	{
		___odd_contactTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___odd_contactTexture_4, value);
	}

	inline static int32_t get_offset_of_contact_faceTexture_5() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___contact_faceTexture_5)); }
	inline Texture2D_t3542995729 * get_contact_faceTexture_5() const { return ___contact_faceTexture_5; }
	inline Texture2D_t3542995729 ** get_address_of_contact_faceTexture_5() { return &___contact_faceTexture_5; }
	inline void set_contact_faceTexture_5(Texture2D_t3542995729 * value)
	{
		___contact_faceTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___contact_faceTexture_5, value);
	}

	inline static int32_t get_offset_of_style_6() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___style_6)); }
	inline GUIStyle_t1799908754 * get_style_6() const { return ___style_6; }
	inline GUIStyle_t1799908754 ** get_address_of_style_6() { return &___style_6; }
	inline void set_style_6(GUIStyle_t1799908754 * value)
	{
		___style_6 = value;
		Il2CppCodeGenWriteBarrier(&___style_6, value);
	}

	inline static int32_t get_offset_of_evenContactStyle_7() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___evenContactStyle_7)); }
	inline GUIStyle_t1799908754 * get_evenContactStyle_7() const { return ___evenContactStyle_7; }
	inline GUIStyle_t1799908754 ** get_address_of_evenContactStyle_7() { return &___evenContactStyle_7; }
	inline void set_evenContactStyle_7(GUIStyle_t1799908754 * value)
	{
		___evenContactStyle_7 = value;
		Il2CppCodeGenWriteBarrier(&___evenContactStyle_7, value);
	}

	inline static int32_t get_offset_of_oddContactStyle_8() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___oddContactStyle_8)); }
	inline GUIStyle_t1799908754 * get_oddContactStyle_8() const { return ___oddContactStyle_8; }
	inline GUIStyle_t1799908754 ** get_address_of_oddContactStyle_8() { return &___oddContactStyle_8; }
	inline void set_oddContactStyle_8(GUIStyle_t1799908754 * value)
	{
		___oddContactStyle_8 = value;
		Il2CppCodeGenWriteBarrier(&___oddContactStyle_8, value);
	}

	inline static int32_t get_offset_of_contactFaceStyle_9() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___contactFaceStyle_9)); }
	inline GUIStyle_t1799908754 * get_contactFaceStyle_9() const { return ___contactFaceStyle_9; }
	inline GUIStyle_t1799908754 ** get_address_of_contactFaceStyle_9() { return &___contactFaceStyle_9; }
	inline void set_contactFaceStyle_9(GUIStyle_t1799908754 * value)
	{
		___contactFaceStyle_9 = value;
		Il2CppCodeGenWriteBarrier(&___contactFaceStyle_9, value);
	}

	inline static int32_t get_offset_of_nonStyle2_10() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___nonStyle2_10)); }
	inline GUIStyle_t1799908754 * get_nonStyle2_10() const { return ___nonStyle2_10; }
	inline GUIStyle_t1799908754 ** get_address_of_nonStyle2_10() { return &___nonStyle2_10; }
	inline void set_nonStyle2_10(GUIStyle_t1799908754 * value)
	{
		___nonStyle2_10 = value;
		Il2CppCodeGenWriteBarrier(&___nonStyle2_10, value);
	}

	inline static int32_t get_offset_of_size_11() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___size_11)); }
	inline Vector2_t2243707579  get_size_11() const { return ___size_11; }
	inline Vector2_t2243707579 * get_address_of_size_11() { return &___size_11; }
	inline void set_size_11(Vector2_t2243707579  value)
	{
		___size_11 = value;
	}

	inline static int32_t get_offset_of_dragTime_12() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___dragTime_12)); }
	inline float get_dragTime_12() const { return ___dragTime_12; }
	inline float* get_address_of_dragTime_12() { return &___dragTime_12; }
	inline void set_dragTime_12(float value)
	{
		___dragTime_12 = value;
	}

	inline static int32_t get_offset_of_dragSpeed_13() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___dragSpeed_13)); }
	inline float get_dragSpeed_13() const { return ___dragSpeed_13; }
	inline float* get_address_of_dragSpeed_13() { return &___dragSpeed_13; }
	inline void set_dragSpeed_13(float value)
	{
		___dragSpeed_13 = value;
	}

	inline static int32_t get_offset_of_failString_14() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___failString_14)); }
	inline String_t* get_failString_14() const { return ___failString_14; }
	inline String_t** get_address_of_failString_14() { return &___failString_14; }
	inline void set_failString_14(String_t* value)
	{
		___failString_14 = value;
		Il2CppCodeGenWriteBarrier(&___failString_14, value);
	}

	inline static int32_t get_offset_of_downPos_15() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___downPos_15)); }
	inline Vector2_t2243707579  get_downPos_15() const { return ___downPos_15; }
	inline Vector2_t2243707579 * get_address_of_downPos_15() { return &___downPos_15; }
	inline void set_downPos_15(Vector2_t2243707579  value)
	{
		___downPos_15 = value;
	}

	inline static int32_t get_offset_of_mousePosition_16() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___mousePosition_16)); }
	inline Vector2_t2243707579  get_mousePosition_16() const { return ___mousePosition_16; }
	inline Vector2_t2243707579 * get_address_of_mousePosition_16() { return &___mousePosition_16; }
	inline void set_mousePosition_16(Vector2_t2243707579  value)
	{
		___mousePosition_16 = value;
	}

	inline static int32_t get_offset_of_contactsScrollPos_17() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___contactsScrollPos_17)); }
	inline Vector2_t2243707579  get_contactsScrollPos_17() const { return ___contactsScrollPos_17; }
	inline Vector2_t2243707579 * get_address_of_contactsScrollPos_17() { return &___contactsScrollPos_17; }
	inline void set_contactsScrollPos_17(Vector2_t2243707579  value)
	{
		___contactsScrollPos_17 = value;
	}

	inline static int32_t get_offset_of_oldContactsDrag_18() { return static_cast<int32_t>(offsetof(ContactsListGUI_t437224532, ___oldContactsDrag_18)); }
	inline Vector2_t2243707579  get_oldContactsDrag_18() const { return ___oldContactsDrag_18; }
	inline Vector2_t2243707579 * get_address_of_oldContactsDrag_18() { return &___oldContactsDrag_18; }
	inline void set_oldContactsDrag_18(Vector2_t2243707579  value)
	{
		___oldContactsDrag_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
