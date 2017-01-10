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

#include "AssemblyU2DCSharp_ScrollElement1344804629.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CommentsElement
struct  CommentsElement_t1480914558  : public ScrollElement_t1344804629
{
public:
	// UnityEngine.UI.Text CommentsElement::userNameTextObject
	Text_t356221433 * ___userNameTextObject_5;
	// UnityEngine.UI.Text CommentsElement::commentTextObject
	Text_t356221433 * ___commentTextObject_6;

public:
	inline static int32_t get_offset_of_userNameTextObject_5() { return static_cast<int32_t>(offsetof(CommentsElement_t1480914558, ___userNameTextObject_5)); }
	inline Text_t356221433 * get_userNameTextObject_5() const { return ___userNameTextObject_5; }
	inline Text_t356221433 ** get_address_of_userNameTextObject_5() { return &___userNameTextObject_5; }
	inline void set_userNameTextObject_5(Text_t356221433 * value)
	{
		___userNameTextObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___userNameTextObject_5, value);
	}

	inline static int32_t get_offset_of_commentTextObject_6() { return static_cast<int32_t>(offsetof(CommentsElement_t1480914558, ___commentTextObject_6)); }
	inline Text_t356221433 * get_commentTextObject_6() const { return ___commentTextObject_6; }
	inline Text_t356221433 ** get_address_of_commentTextObject_6() { return &___commentTextObject_6; }
	inline void set_commentTextObject_6(Text_t356221433 * value)
	{
		___commentTextObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___commentTextObject_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
