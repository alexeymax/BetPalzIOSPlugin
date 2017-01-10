#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScreenPanel[]
struct ScreenPanelU5BU5D_t2268486319;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// ScreenManager
struct ScreenManager_t4294768521;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ScreenManager_ShowDirection2411411662.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenManager
struct  ScreenManager_t4294768521  : public MonoBehaviour_t1158329972
{
public:
	// ScreenPanel[] ScreenManager::screens
	ScreenPanelU5BU5D_t2268486319* ___screens_2;
	// System.Int32 ScreenManager::currentScreen
	int32_t ___currentScreen_3;
	// System.Collections.Hashtable ScreenManager::textureCache
	Hashtable_t909839986 * ___textureCache_4;
	// System.String ScreenManager::lastScreen
	String_t* ___lastScreen_6;
	// ScreenManager/ShowDirection ScreenManager::lastDirection
	int32_t ___lastDirection_7;

public:
	inline static int32_t get_offset_of_screens_2() { return static_cast<int32_t>(offsetof(ScreenManager_t4294768521, ___screens_2)); }
	inline ScreenPanelU5BU5D_t2268486319* get_screens_2() const { return ___screens_2; }
	inline ScreenPanelU5BU5D_t2268486319** get_address_of_screens_2() { return &___screens_2; }
	inline void set_screens_2(ScreenPanelU5BU5D_t2268486319* value)
	{
		___screens_2 = value;
		Il2CppCodeGenWriteBarrier(&___screens_2, value);
	}

	inline static int32_t get_offset_of_currentScreen_3() { return static_cast<int32_t>(offsetof(ScreenManager_t4294768521, ___currentScreen_3)); }
	inline int32_t get_currentScreen_3() const { return ___currentScreen_3; }
	inline int32_t* get_address_of_currentScreen_3() { return &___currentScreen_3; }
	inline void set_currentScreen_3(int32_t value)
	{
		___currentScreen_3 = value;
	}

	inline static int32_t get_offset_of_textureCache_4() { return static_cast<int32_t>(offsetof(ScreenManager_t4294768521, ___textureCache_4)); }
	inline Hashtable_t909839986 * get_textureCache_4() const { return ___textureCache_4; }
	inline Hashtable_t909839986 ** get_address_of_textureCache_4() { return &___textureCache_4; }
	inline void set_textureCache_4(Hashtable_t909839986 * value)
	{
		___textureCache_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureCache_4, value);
	}

	inline static int32_t get_offset_of_lastScreen_6() { return static_cast<int32_t>(offsetof(ScreenManager_t4294768521, ___lastScreen_6)); }
	inline String_t* get_lastScreen_6() const { return ___lastScreen_6; }
	inline String_t** get_address_of_lastScreen_6() { return &___lastScreen_6; }
	inline void set_lastScreen_6(String_t* value)
	{
		___lastScreen_6 = value;
		Il2CppCodeGenWriteBarrier(&___lastScreen_6, value);
	}

	inline static int32_t get_offset_of_lastDirection_7() { return static_cast<int32_t>(offsetof(ScreenManager_t4294768521, ___lastDirection_7)); }
	inline int32_t get_lastDirection_7() const { return ___lastDirection_7; }
	inline int32_t* get_address_of_lastDirection_7() { return &___lastDirection_7; }
	inline void set_lastDirection_7(int32_t value)
	{
		___lastDirection_7 = value;
	}
};

struct ScreenManager_t4294768521_StaticFields
{
public:
	// ScreenManager ScreenManager::_instance
	ScreenManager_t4294768521 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(ScreenManager_t4294768521_StaticFields, ____instance_5)); }
	inline ScreenManager_t4294768521 * get__instance_5() const { return ____instance_5; }
	inline ScreenManager_t4294768521 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(ScreenManager_t4294768521 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
