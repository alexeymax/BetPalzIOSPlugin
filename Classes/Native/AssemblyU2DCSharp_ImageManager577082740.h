#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t909839986;
// ImageManager
struct ImageManager_t577082740;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImageManager
struct  ImageManager_t577082740  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Hashtable ImageManager::textureCache
	Hashtable_t909839986 * ___textureCache_2;
	// System.Boolean ImageManager::isLoadingWorking
	bool ___isLoadingWorking_4;

public:
	inline static int32_t get_offset_of_textureCache_2() { return static_cast<int32_t>(offsetof(ImageManager_t577082740, ___textureCache_2)); }
	inline Hashtable_t909839986 * get_textureCache_2() const { return ___textureCache_2; }
	inline Hashtable_t909839986 ** get_address_of_textureCache_2() { return &___textureCache_2; }
	inline void set_textureCache_2(Hashtable_t909839986 * value)
	{
		___textureCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___textureCache_2, value);
	}

	inline static int32_t get_offset_of_isLoadingWorking_4() { return static_cast<int32_t>(offsetof(ImageManager_t577082740, ___isLoadingWorking_4)); }
	inline bool get_isLoadingWorking_4() const { return ___isLoadingWorking_4; }
	inline bool* get_address_of_isLoadingWorking_4() { return &___isLoadingWorking_4; }
	inline void set_isLoadingWorking_4(bool value)
	{
		___isLoadingWorking_4 = value;
	}
};

struct ImageManager_t577082740_StaticFields
{
public:
	// ImageManager ImageManager::_instance
	ImageManager_t577082740 * ____instance_3;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(ImageManager_t577082740_StaticFields, ____instance_3)); }
	inline ImageManager_t577082740 * get__instance_3() const { return ____instance_3; }
	inline ImageManager_t577082740 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(ImageManager_t577082740 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
