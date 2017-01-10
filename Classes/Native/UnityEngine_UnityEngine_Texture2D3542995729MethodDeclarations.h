﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m3598323350 (Texture2D_t3542995729 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m1873923924 (Texture2D_t3542995729 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___mipmap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  void Texture2D_Internal_Create_m3012183307 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___mono0, int32_t ___width1, int32_t ___height2, int32_t ___format3, bool ___mipmap4, bool ___linear5, IntPtr_t ___nativeTex6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C"  Texture2D_t3542995729 * Texture2D_get_whiteTexture_m1979591766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m609991514 (Texture2D_t3542995729 * __this, int32_t ___x0, int32_t ___y1, Color_t2020392075  ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_SetPixel_m3139530413 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___self0, int32_t ___x1, int32_t ___y2, Color_t2020392075 * ___color3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C"  Color_t2020392075  Texture2D_GetPixelBilinear_m3063031185 (Texture2D_t3542995729 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_GetPixelBilinear(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_GetPixelBilinear_m570286059 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___self0, float ___u1, float ___v2, Color_t2020392075 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::LoadImage(System.Byte[],System.Boolean)
extern "C"  bool Texture2D_LoadImage_m3883409353 (Texture2D_t3542995729 * __this, ByteU5BU5D_t3397334013* ___data0, bool ___markNonReadable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::LoadImage(System.Byte[])
extern "C"  bool Texture2D_LoadImage_m867542842 (Texture2D_t3542995729 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C"  void Texture2D_Apply_m3753817130 (Texture2D_t3542995729 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m3543341930 (Texture2D_t3542995729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  void Texture2D_ReadPixels_m1120832672 (Texture2D_t3542995729 * __this, Rect_t3681755626  ___source0, int32_t ___destX1, int32_t ___destY2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_ReadPixels(UnityEngine.Texture2D,UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
extern "C"  void Texture2D_INTERNAL_CALL_ReadPixels_m1476963500 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___self0, Rect_t3681755626 * ___source1, int32_t ___destX2, int32_t ___destY3, bool ___recalculateMipMaps4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::EncodeToPNG()
extern "C"  ByteU5BU5D_t3397334013* Texture2D_EncodeToPNG_m2680110528 (Texture2D_t3542995729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::EncodeToJPG(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Texture2D_EncodeToJPG_m1875456125 (Texture2D_t3542995729 * __this, int32_t ___quality0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::EncodeToJPG()
extern "C"  ByteU5BU5D_t3397334013* Texture2D_EncodeToJPG_m1212200800 (Texture2D_t3542995729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
