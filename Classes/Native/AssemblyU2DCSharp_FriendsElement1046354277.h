#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_ScrollElement1344804629.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FriendsElement
struct  FriendsElement_t1046354277  : public ScrollElement_t1344804629
{
public:
	// UnityEngine.UI.Text FriendsElement::userNameTextObject
	Text_t356221433 * ___userNameTextObject_5;
	// UnityEngine.UI.RawImage FriendsElement::image
	RawImage_t2749640213 * ___image_6;
	// System.String FriendsElement::imageURL
	String_t* ___imageURL_7;

public:
	inline static int32_t get_offset_of_userNameTextObject_5() { return static_cast<int32_t>(offsetof(FriendsElement_t1046354277, ___userNameTextObject_5)); }
	inline Text_t356221433 * get_userNameTextObject_5() const { return ___userNameTextObject_5; }
	inline Text_t356221433 ** get_address_of_userNameTextObject_5() { return &___userNameTextObject_5; }
	inline void set_userNameTextObject_5(Text_t356221433 * value)
	{
		___userNameTextObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___userNameTextObject_5, value);
	}

	inline static int32_t get_offset_of_image_6() { return static_cast<int32_t>(offsetof(FriendsElement_t1046354277, ___image_6)); }
	inline RawImage_t2749640213 * get_image_6() const { return ___image_6; }
	inline RawImage_t2749640213 ** get_address_of_image_6() { return &___image_6; }
	inline void set_image_6(RawImage_t2749640213 * value)
	{
		___image_6 = value;
		Il2CppCodeGenWriteBarrier(&___image_6, value);
	}

	inline static int32_t get_offset_of_imageURL_7() { return static_cast<int32_t>(offsetof(FriendsElement_t1046354277, ___imageURL_7)); }
	inline String_t* get_imageURL_7() const { return ___imageURL_7; }
	inline String_t** get_address_of_imageURL_7() { return &___imageURL_7; }
	inline void set_imageURL_7(String_t* value)
	{
		___imageURL_7 = value;
		Il2CppCodeGenWriteBarrier(&___imageURL_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
