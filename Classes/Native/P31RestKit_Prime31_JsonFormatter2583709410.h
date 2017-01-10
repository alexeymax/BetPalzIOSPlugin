#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>
struct Stack_1_t580277707;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.JsonFormatter
struct  JsonFormatter_t2583709410  : public Il2CppObject
{
public:
	// System.Boolean Prime31.JsonFormatter::inDoubleString
	bool ___inDoubleString_0;
	// System.Boolean Prime31.JsonFormatter::inSingleString
	bool ___inSingleString_1;
	// System.Boolean Prime31.JsonFormatter::inVariableAssignment
	bool ___inVariableAssignment_2;
	// System.Char Prime31.JsonFormatter::prevChar
	Il2CppChar ___prevChar_3;
	// System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType> Prime31.JsonFormatter::context
	Stack_1_t580277707 * ___context_4;

public:
	inline static int32_t get_offset_of_inDoubleString_0() { return static_cast<int32_t>(offsetof(JsonFormatter_t2583709410, ___inDoubleString_0)); }
	inline bool get_inDoubleString_0() const { return ___inDoubleString_0; }
	inline bool* get_address_of_inDoubleString_0() { return &___inDoubleString_0; }
	inline void set_inDoubleString_0(bool value)
	{
		___inDoubleString_0 = value;
	}

	inline static int32_t get_offset_of_inSingleString_1() { return static_cast<int32_t>(offsetof(JsonFormatter_t2583709410, ___inSingleString_1)); }
	inline bool get_inSingleString_1() const { return ___inSingleString_1; }
	inline bool* get_address_of_inSingleString_1() { return &___inSingleString_1; }
	inline void set_inSingleString_1(bool value)
	{
		___inSingleString_1 = value;
	}

	inline static int32_t get_offset_of_inVariableAssignment_2() { return static_cast<int32_t>(offsetof(JsonFormatter_t2583709410, ___inVariableAssignment_2)); }
	inline bool get_inVariableAssignment_2() const { return ___inVariableAssignment_2; }
	inline bool* get_address_of_inVariableAssignment_2() { return &___inVariableAssignment_2; }
	inline void set_inVariableAssignment_2(bool value)
	{
		___inVariableAssignment_2 = value;
	}

	inline static int32_t get_offset_of_prevChar_3() { return static_cast<int32_t>(offsetof(JsonFormatter_t2583709410, ___prevChar_3)); }
	inline Il2CppChar get_prevChar_3() const { return ___prevChar_3; }
	inline Il2CppChar* get_address_of_prevChar_3() { return &___prevChar_3; }
	inline void set_prevChar_3(Il2CppChar value)
	{
		___prevChar_3 = value;
	}

	inline static int32_t get_offset_of_context_4() { return static_cast<int32_t>(offsetof(JsonFormatter_t2583709410, ___context_4)); }
	inline Stack_1_t580277707 * get_context_4() const { return ___context_4; }
	inline Stack_1_t580277707 ** get_address_of_context_4() { return &___context_4; }
	inline void set_context_4(Stack_1_t580277707 * value)
	{
		___context_4 = value;
		Il2CppCodeGenWriteBarrier(&___context_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
