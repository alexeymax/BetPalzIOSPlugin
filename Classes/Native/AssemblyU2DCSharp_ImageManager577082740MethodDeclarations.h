#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ImageManager
struct ImageManager_t577082740;
// System.String
struct String_t;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UI_UnityEngine_UI_RawImage2749640213.h"
#include "System_Core_System_Action3226471752.h"

// System.Void ImageManager::.ctor()
extern "C"  void ImageManager__ctor_m2035198231 (ImageManager_t577082740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ImageManager ImageManager::get_Instance()
extern "C"  ImageManager_t577082740 * ImageManager_get_Instance_m3354686594 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageManager::Awake()
extern "C"  void ImageManager_Awake_m3924925620 (ImageManager_t577082740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageManager::Init()
extern "C"  void ImageManager_Init_m171900521 (ImageManager_t577082740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageManager::LoadImageIntoRawImage(System.String,UnityEngine.UI.RawImage,System.Boolean,System.Action)
extern "C"  void ImageManager_LoadImageIntoRawImage_m3686126183 (Il2CppObject * __this /* static, unused */, String_t* ___URL0, RawImage_t2749640213 * ___image1, bool ___leaveInCache2, Action_t3226471752 * ___onLoadComplete3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ImageManager::loadImageIntoRawImageAndLeaveInCache(System.String,UnityEngine.UI.RawImage,System.Boolean,System.Action)
extern "C"  Il2CppObject * ImageManager_loadImageIntoRawImageAndLeaveInCache_m455955302 (ImageManager_t577082740 * __this, String_t* ___URL0, RawImage_t2749640213 * ___image1, bool ___leaveInCache2, Action_t3226471752 * ___onLoadComplete3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
