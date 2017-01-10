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

// Prime31.EtceteraManager
struct EtceteraManager_t524027624;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`2<System.String,System.String>
struct Action_2_t4234541925;
// System.Action`1<System.Collections.IDictionary>
struct Action_1_t397957987;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Prime31.EtceteraManager::.cctor()
extern "C"  void EtceteraManager__cctor_m3578301575 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::.ctor()
extern "C"  void EtceteraManager__ctor_m668109964 (EtceteraManager_t524027624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_dismissingViewControllerEvent(System.Action)
extern "C"  void EtceteraManager_add_dismissingViewControllerEvent_m1478117226 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_dismissingViewControllerEvent(System.Action)
extern "C"  void EtceteraManager_remove_dismissingViewControllerEvent_m1353072771 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_imagePickerCancelledEvent(System.Action)
extern "C"  void EtceteraManager_add_imagePickerCancelledEvent_m3786367433 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_imagePickerCancelledEvent(System.Action)
extern "C"  void EtceteraManager_remove_imagePickerCancelledEvent_m1195023742 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_imagePickerChoseImageEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_imagePickerChoseImageEvent_m473092146 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_imagePickerChoseImageEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_imagePickerChoseImageEvent_m751681637 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_saveImageToPhotoAlbumSucceededEvent(System.Action)
extern "C"  void EtceteraManager_add_saveImageToPhotoAlbumSucceededEvent_m2356185494 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_saveImageToPhotoAlbumSucceededEvent(System.Action)
extern "C"  void EtceteraManager_remove_saveImageToPhotoAlbumSucceededEvent_m4247775489 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_saveImageToPhotoAlbumFailedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_saveImageToPhotoAlbumFailedEvent_m2752189543 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_saveImageToPhotoAlbumFailedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_saveImageToPhotoAlbumFailedEvent_m3407146992 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_alertButtonClickedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_alertButtonClickedEvent_m735430685 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_alertButtonClickedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_alertButtonClickedEvent_m397454870 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_promptCancelledEvent(System.Action)
extern "C"  void EtceteraManager_add_promptCancelledEvent_m2600954880 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_promptCancelledEvent(System.Action)
extern "C"  void EtceteraManager_remove_promptCancelledEvent_m3344252235 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_singleFieldPromptTextEnteredEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_singleFieldPromptTextEnteredEvent_m3474552758 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_singleFieldPromptTextEnteredEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_singleFieldPromptTextEnteredEvent_m1432955041 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_twoFieldPromptTextEnteredEvent(System.Action`2<System.String,System.String>)
extern "C"  void EtceteraManager_add_twoFieldPromptTextEnteredEvent_m1052603137 (Il2CppObject * __this /* static, unused */, Action_2_t4234541925 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_twoFieldPromptTextEnteredEvent(System.Action`2<System.String,System.String>)
extern "C"  void EtceteraManager_remove_twoFieldPromptTextEnteredEvent_m2272113444 (Il2CppObject * __this /* static, unused */, Action_2_t4234541925 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_remoteRegistrationSucceededEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_remoteRegistrationSucceededEvent_m3115374808 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_remoteRegistrationSucceededEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_remoteRegistrationSucceededEvent_m2909764407 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_remoteRegistrationFailedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_remoteRegistrationFailedEvent_m258184084 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_remoteRegistrationFailedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_remoteRegistrationFailedEvent_m3372099151 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_urbanAirshipRegistrationSucceededEvent(System.Action)
extern "C"  void EtceteraManager_add_urbanAirshipRegistrationSucceededEvent_m405754415 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_urbanAirshipRegistrationSucceededEvent(System.Action)
extern "C"  void EtceteraManager_remove_urbanAirshipRegistrationSucceededEvent_m101220088 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_urbanAirshipRegistrationFailedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_urbanAirshipRegistrationFailedEvent_m1122202372 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_urbanAirshipRegistrationFailedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_urbanAirshipRegistrationFailedEvent_m2836040005 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_pushIORegistrationCompletedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_pushIORegistrationCompletedEvent_m3175938650 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_pushIORegistrationCompletedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_pushIORegistrationCompletedEvent_m1309828597 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_remoteNotificationReceivedEvent(System.Action`1<System.Collections.IDictionary>)
extern "C"  void EtceteraManager_add_remoteNotificationReceivedEvent_m1758733951 (Il2CppObject * __this /* static, unused */, Action_1_t397957987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_remoteNotificationReceivedEvent(System.Action`1<System.Collections.IDictionary>)
extern "C"  void EtceteraManager_remove_remoteNotificationReceivedEvent_m4238606362 (Il2CppObject * __this /* static, unused */, Action_1_t397957987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_remoteNotificationReceivedAtLaunchEvent(System.Action`1<System.Collections.IDictionary>)
extern "C"  void EtceteraManager_add_remoteNotificationReceivedAtLaunchEvent_m105995747 (Il2CppObject * __this /* static, unused */, Action_1_t397957987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_remoteNotificationReceivedAtLaunchEvent(System.Action`1<System.Collections.IDictionary>)
extern "C"  void EtceteraManager_remove_remoteNotificationReceivedAtLaunchEvent_m1033025600 (Il2CppObject * __this /* static, unused */, Action_1_t397957987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_localNotificationWasReceivedEvent(System.Action`1<System.Collections.IDictionary>)
extern "C"  void EtceteraManager_add_localNotificationWasReceivedEvent_m627093267 (Il2CppObject * __this /* static, unused */, Action_1_t397957987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_localNotificationWasReceivedEvent(System.Action`1<System.Collections.IDictionary>)
extern "C"  void EtceteraManager_remove_localNotificationWasReceivedEvent_m1475366790 (Il2CppObject * __this /* static, unused */, Action_1_t397957987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_localNotificationWasReceivedAtLaunchEvent(System.Action`1<System.Collections.IDictionary>)
extern "C"  void EtceteraManager_add_localNotificationWasReceivedAtLaunchEvent_m1632257527 (Il2CppObject * __this /* static, unused */, Action_1_t397957987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_localNotificationWasReceivedAtLaunchEvent(System.Action`1<System.Collections.IDictionary>)
extern "C"  void EtceteraManager_remove_localNotificationWasReceivedAtLaunchEvent_m1763827372 (Il2CppObject * __this /* static, unused */, Action_1_t397957987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_mailComposerFinishedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_mailComposerFinishedEvent_m101629407 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_mailComposerFinishedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_mailComposerFinishedEvent_m14573862 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_smsComposerFinishedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_smsComposerFinishedEvent_m2133093623 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_smsComposerFinishedEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_smsComposerFinishedEvent_m3995517348 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::add_webViewDidLoadURLEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_add_webViewDidLoadURLEvent_m4056916363 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remove_webViewDidLoadURLEvent(System.Action`1<System.String>)
extern "C"  void EtceteraManager_remove_webViewDidLoadURLEvent_m4130039504 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraManager::get_deviceToken()
extern "C"  String_t* EtceteraManager_get_deviceToken_m300118171 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::set_deviceToken(System.String)
extern "C"  void EtceteraManager_set_deviceToken_m2512151314 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::dismissingViewController()
extern "C"  void EtceteraManager_dismissingViewController_m571701099 (EtceteraManager_t524027624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::imagePickerDidCancel(System.String)
extern "C"  void EtceteraManager_imagePickerDidCancel_m900842610 (EtceteraManager_t524027624 * __this, String_t* ___empty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::imageSavedToDocuments(System.String)
extern "C"  void EtceteraManager_imageSavedToDocuments_m2951943239 (EtceteraManager_t524027624 * __this, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::saveImageToPhotoAlbumFailed(System.String)
extern "C"  void EtceteraManager_saveImageToPhotoAlbumFailed_m3105107583 (EtceteraManager_t524027624 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::saveImageToPhotoAlbumSucceeded(System.String)
extern "C"  void EtceteraManager_saveImageToPhotoAlbumSucceeded_m3293307583 (EtceteraManager_t524027624 * __this, String_t* ___empty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Prime31.EtceteraManager::textureFromFileAtPath(System.String,System.Action`1<UnityEngine.Texture2D>,System.Action`1<System.String>)
extern "C"  Il2CppObject * EtceteraManager_textureFromFileAtPath_m2794035895 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, Action_1_t3344795111 * ___del1, Action_1_t1831019615 * ___errorDel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::alertViewClickedButton(System.String)
extern "C"  void EtceteraManager_alertViewClickedButton_m824801184 (EtceteraManager_t524027624 * __this, String_t* ___buttonTitle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::alertPromptCancelled(System.String)
extern "C"  void EtceteraManager_alertPromptCancelled_m2559075511 (EtceteraManager_t524027624 * __this, String_t* ___empty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::alertPromptEnteredText(System.String)
extern "C"  void EtceteraManager_alertPromptEnteredText_m3334595212 (EtceteraManager_t524027624 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remoteRegistrationDidSucceed(System.String)
extern "C"  void EtceteraManager_remoteRegistrationDidSucceed_m978520232 (EtceteraManager_t524027624 * __this, String_t* ___deviceToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Prime31.EtceteraManager::registerDeviceWithPushIO()
extern "C"  Il2CppObject * EtceteraManager_registerDeviceWithPushIO_m3377728621 (EtceteraManager_t524027624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remoteRegistrationDidFail(System.String)
extern "C"  void EtceteraManager_remoteRegistrationDidFail_m417525614 (EtceteraManager_t524027624 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::urbanAirshipRegistrationDidSucceed(System.String)
extern "C"  void EtceteraManager_urbanAirshipRegistrationDidSucceed_m1344624256 (EtceteraManager_t524027624 * __this, String_t* ___empty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::urbanAirshipRegistrationDidFail(System.String)
extern "C"  void EtceteraManager_urbanAirshipRegistrationDidFail_m3009312346 (EtceteraManager_t524027624 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remoteNotificationWasReceived(System.String)
extern "C"  void EtceteraManager_remoteNotificationWasReceived_m340532025 (EtceteraManager_t524027624 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::remoteNotificationWasReceivedAtLaunch(System.String)
extern "C"  void EtceteraManager_remoteNotificationWasReceivedAtLaunch_m2421375793 (EtceteraManager_t524027624 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::localNotificationWasReceived(System.String)
extern "C"  void EtceteraManager_localNotificationWasReceived_m147238402 (EtceteraManager_t524027624 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::localNotificationWasReceivedAtLaunch(System.String)
extern "C"  void EtceteraManager_localNotificationWasReceivedAtLaunch_m332236376 (EtceteraManager_t524027624 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::mailComposerFinishedWithResult(System.String)
extern "C"  void EtceteraManager_mailComposerFinishedWithResult_m2687739966 (EtceteraManager_t524027624 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::smsComposerFinishedWithResult(System.String)
extern "C"  void EtceteraManager_smsComposerFinishedWithResult_m3778329826 (EtceteraManager_t524027624 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraManager::webViewDidLoadURL(System.String)
extern "C"  void EtceteraManager_webViewDidLoadURL_m3312165131 (EtceteraManager_t524027624 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
