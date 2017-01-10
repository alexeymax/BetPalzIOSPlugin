#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Prime31.CubeRotator
struct  CubeRotator_t2931441358  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Prime31.CubeRotator::speed
	float ___speed_2;
	// UnityEngine.Transform Prime31.CubeRotator::cube
	Transform_t3275118058 * ___cube_3;
	// System.Boolean Prime31.CubeRotator::shouldRotate
	bool ___shouldRotate_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CubeRotator_t2931441358, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_cube_3() { return static_cast<int32_t>(offsetof(CubeRotator_t2931441358, ___cube_3)); }
	inline Transform_t3275118058 * get_cube_3() const { return ___cube_3; }
	inline Transform_t3275118058 ** get_address_of_cube_3() { return &___cube_3; }
	inline void set_cube_3(Transform_t3275118058 * value)
	{
		___cube_3 = value;
		Il2CppCodeGenWriteBarrier(&___cube_3, value);
	}

	inline static int32_t get_offset_of_shouldRotate_4() { return static_cast<int32_t>(offsetof(CubeRotator_t2931441358, ___shouldRotate_4)); }
	inline bool get_shouldRotate_4() const { return ___shouldRotate_4; }
	inline bool* get_address_of_shouldRotate_4() { return &___shouldRotate_4; }
	inline void set_shouldRotate_4(bool value)
	{
		___shouldRotate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
