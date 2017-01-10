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

// PopupManager
struct PopupManager_t1434750183;
// Popup
struct Popup_t161311578;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

// System.Void PopupManager::.ctor()
extern "C"  void PopupManager__ctor_m639452612 (PopupManager_t1434750183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PopupManager PopupManager::get_Instance()
extern "C"  PopupManager_t1434750183 * PopupManager_get_Instance_m589095084 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopupManager::Awake()
extern "C"  void PopupManager_Awake_m1273738983 (PopupManager_t1434750183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Popup PopupManager::PresentPopup(System.String,System.Action,System.Action)
extern "C"  Popup_t161311578 * PopupManager_PresentPopup_m3692367236 (PopupManager_t1434750183 * __this, String_t* ___prefabName0, Action_t3226471752 * ___onOkClick1, Action_t3226471752 * ___onCancelClick2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Popup PopupManager::PresentPopup(System.String,System.String[],System.Action,System.Action)
extern "C"  Popup_t161311578 * PopupManager_PresentPopup_m3557661296 (PopupManager_t1434750183 * __this, String_t* ___prefabName0, StringU5BU5D_t1642385972* ___stringList1, Action_t3226471752 * ___onOkClick2, Action_t3226471752 * ___onCancelClick3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Popup PopupManager::PresentPopup(System.String,System.String[],System.String[],System.String[],System.Action,System.Action)
extern "C"  Popup_t161311578 * PopupManager_PresentPopup_m1294860016 (PopupManager_t1434750183 * __this, String_t* ___prefabName0, StringU5BU5D_t1642385972* ___stringList1, StringU5BU5D_t1642385972* ___atlasList2, StringU5BU5D_t1642385972* ___imageList3, Action_t3226471752 * ___onOkClick4, Action_t3226471752 * ___onCancelClick5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Popup PopupManager::PresentPopupInFrame(System.String,UnityEngine.RectTransform,System.String[],System.String[],System.String[],System.Action,System.Action)
extern "C"  Popup_t161311578 * PopupManager_PresentPopupInFrame_m3428156189 (PopupManager_t1434750183 * __this, String_t* ___prefabName0, RectTransform_t3349966182 * ___frame1, StringU5BU5D_t1642385972* ___stringList2, StringU5BU5D_t1642385972* ___atlasList3, StringU5BU5D_t1642385972* ___imageList4, Action_t3226471752 * ___onOkClick5, Action_t3226471752 * ___onCancelClick6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
