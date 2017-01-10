#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Feed
struct  Feed_t3408144164  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button Feed::inputFieldButton
	Button_t2872111280 * ___inputFieldButton_2;
	// UnityEngine.UI.Text Feed::inputFieldText
	Text_t356221433 * ___inputFieldText_3;
	// UnityEngine.UI.Text Feed::inputFieldPlaceholder
	Text_t356221433 * ___inputFieldPlaceholder_4;

public:
	inline static int32_t get_offset_of_inputFieldButton_2() { return static_cast<int32_t>(offsetof(Feed_t3408144164, ___inputFieldButton_2)); }
	inline Button_t2872111280 * get_inputFieldButton_2() const { return ___inputFieldButton_2; }
	inline Button_t2872111280 ** get_address_of_inputFieldButton_2() { return &___inputFieldButton_2; }
	inline void set_inputFieldButton_2(Button_t2872111280 * value)
	{
		___inputFieldButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___inputFieldButton_2, value);
	}

	inline static int32_t get_offset_of_inputFieldText_3() { return static_cast<int32_t>(offsetof(Feed_t3408144164, ___inputFieldText_3)); }
	inline Text_t356221433 * get_inputFieldText_3() const { return ___inputFieldText_3; }
	inline Text_t356221433 ** get_address_of_inputFieldText_3() { return &___inputFieldText_3; }
	inline void set_inputFieldText_3(Text_t356221433 * value)
	{
		___inputFieldText_3 = value;
		Il2CppCodeGenWriteBarrier(&___inputFieldText_3, value);
	}

	inline static int32_t get_offset_of_inputFieldPlaceholder_4() { return static_cast<int32_t>(offsetof(Feed_t3408144164, ___inputFieldPlaceholder_4)); }
	inline Text_t356221433 * get_inputFieldPlaceholder_4() const { return ___inputFieldPlaceholder_4; }
	inline Text_t356221433 ** get_address_of_inputFieldPlaceholder_4() { return &___inputFieldPlaceholder_4; }
	inline void set_inputFieldPlaceholder_4(Text_t356221433 * value)
	{
		___inputFieldPlaceholder_4 = value;
		Il2CppCodeGenWriteBarrier(&___inputFieldPlaceholder_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
