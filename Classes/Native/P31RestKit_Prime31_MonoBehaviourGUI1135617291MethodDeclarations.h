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

// Prime31.MonoBehaviourGUI
struct MonoBehaviourGUI_t1135617291;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"

// System.Void Prime31.MonoBehaviourGUI::.ctor()
extern "C"  void MonoBehaviourGUI__ctor_m2850979065 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_normalBackground()
extern "C"  Texture2D_t3542995729 * MonoBehaviourGUI_get_normalBackground_m2817030088 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_bottomButtonBackground()
extern "C"  Texture2D_t3542995729 * MonoBehaviourGUI_get_bottomButtonBackground_m1275538804 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_activeBackground()
extern "C"  Texture2D_t3542995729 * MonoBehaviourGUI_get_activeBackground_m541854323 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_toggleButtonBackground()
extern "C"  Texture2D_t3542995729 * MonoBehaviourGUI_get_toggleButtonBackground_m1896463479 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.MonoBehaviourGUI::isRetinaOrLargeScreen()
extern "C"  bool MonoBehaviourGUI_isRetinaOrLargeScreen_m2491366488 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.MonoBehaviourGUI::isRetinaIpad()
extern "C"  bool MonoBehaviourGUI_isRetinaIpad_m4069411290 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.MonoBehaviourGUI::buttonHeight()
extern "C"  int32_t MonoBehaviourGUI_buttonHeight_m2610567582 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.MonoBehaviourGUI::buttonFontSize()
extern "C"  int32_t MonoBehaviourGUI_buttonFontSize_m2814370987 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::paintWindow(System.Int32)
extern "C"  void MonoBehaviourGUI_paintWindow_m4281101366 (MonoBehaviourGUI_t1135617291 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::handleLog(System.String,System.String,UnityEngine.LogType)
extern "C"  void MonoBehaviourGUI_handleLog_m4274743746 (MonoBehaviourGUI_t1135617291 * __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::OnDestroy()
extern "C"  void MonoBehaviourGUI_OnDestroy_m4156696074 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::Update()
extern "C"  void MonoBehaviourGUI_Update_m1239389006 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::beginColumn()
extern "C"  void MonoBehaviourGUI_beginColumn_m4030706660 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::endColumn()
extern "C"  void MonoBehaviourGUI_endColumn_m3842748064 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::endColumn(System.Boolean)
extern "C"  void MonoBehaviourGUI_endColumn_m145553691 (MonoBehaviourGUI_t1135617291 * __this, bool ___hasSecondColumn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::beginRightColumn()
extern "C"  void MonoBehaviourGUI_beginRightColumn_m2202405280 (MonoBehaviourGUI_t1135617291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.MonoBehaviourGUI::button(System.String)
extern "C"  bool MonoBehaviourGUI_button_m1869924109 (MonoBehaviourGUI_t1135617291 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.MonoBehaviourGUI::bottomRightButton(System.String,System.Single)
extern "C"  bool MonoBehaviourGUI_bottomRightButton_m2983375331 (MonoBehaviourGUI_t1135617291 * __this, String_t* ___text0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.MonoBehaviourGUI::bottomLeftButton(System.String,System.Single)
extern "C"  bool MonoBehaviourGUI_bottomLeftButton_m3284298484 (MonoBehaviourGUI_t1135617291 * __this, String_t* ___text0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.MonoBehaviourGUI::bottomCenterButton(System.String,System.Single)
extern "C"  bool MonoBehaviourGUI_bottomCenterButton_m1199150232 (MonoBehaviourGUI_t1135617291 * __this, String_t* ___text0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.MonoBehaviourGUI::toggleButton(System.String,System.String)
extern "C"  bool MonoBehaviourGUI_toggleButton_m1183562821 (MonoBehaviourGUI_t1135617291 * __this, String_t* ___defaultText0, String_t* ___selectedText1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.MonoBehaviourGUI::toggleButtonState(System.String)
extern "C"  bool MonoBehaviourGUI_toggleButtonState_m3989284254 (MonoBehaviourGUI_t1135617291 * __this, String_t* ___defaultText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::loadLevel(System.Int32)
extern "C"  void MonoBehaviourGUI_loadLevel_m4026179856 (Il2CppObject * __this /* static, unused */, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.MonoBehaviourGUI::loadLevel(System.String)
extern "C"  void MonoBehaviourGUI_loadLevel_m4266686727 (Il2CppObject * __this /* static, unused */, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
