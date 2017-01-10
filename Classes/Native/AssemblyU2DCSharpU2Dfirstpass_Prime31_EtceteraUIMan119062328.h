#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "P31RestKit_Prime31_MonoBehaviourGUI1135617291.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.EtceteraUIManager
struct  EtceteraUIManager_t119062328  : public MonoBehaviourGUI_t1135617291
{
public:
	// UnityEngine.GameObject Prime31.EtceteraUIManager::testPlane
	GameObject_t1756533147 * ___testPlane_18;

public:
	inline static int32_t get_offset_of_testPlane_18() { return static_cast<int32_t>(offsetof(EtceteraUIManager_t119062328, ___testPlane_18)); }
	inline GameObject_t1756533147 * get_testPlane_18() const { return ___testPlane_18; }
	inline GameObject_t1756533147 ** get_address_of_testPlane_18() { return &___testPlane_18; }
	inline void set_testPlane_18(GameObject_t1756533147 * value)
	{
		___testPlane_18 = value;
		Il2CppCodeGenWriteBarrier(&___testPlane_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
