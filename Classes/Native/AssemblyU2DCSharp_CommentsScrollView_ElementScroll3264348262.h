#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CommentsScrollView/ElementScrollInformation
struct  ElementScrollInformation_t3264348262  : public Il2CppObject
{
public:
	// System.Int32 CommentsScrollView/ElementScrollInformation::currentHeight
	int32_t ___currentHeight_0;
	// System.String CommentsScrollView/ElementScrollInformation::text
	String_t* ___text_1;

public:
	inline static int32_t get_offset_of_currentHeight_0() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t3264348262, ___currentHeight_0)); }
	inline int32_t get_currentHeight_0() const { return ___currentHeight_0; }
	inline int32_t* get_address_of_currentHeight_0() { return &___currentHeight_0; }
	inline void set_currentHeight_0(int32_t value)
	{
		___currentHeight_0 = value;
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(ElementScrollInformation_t3264348262, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
