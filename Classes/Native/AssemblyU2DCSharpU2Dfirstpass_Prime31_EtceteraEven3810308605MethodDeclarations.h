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

// Prime31.EtceteraEventListener
struct EtceteraEventListener_t3810308605;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Prime31.EtceteraEventListener::.ctor()
extern "C"  void EtceteraEventListener__ctor_m833103969 (EtceteraEventListener_t3810308605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::OnEnable()
extern "C"  void EtceteraEventListener_OnEnable_m1807842521 (EtceteraEventListener_t3810308605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::OnDisable()
extern "C"  void EtceteraEventListener_OnDisable_m2391786154 (EtceteraEventListener_t3810308605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::dismissingViewControllerEvent()
extern "C"  void EtceteraEventListener_dismissingViewControllerEvent_m3450655338 (EtceteraEventListener_t3810308605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::imagePickerCancelled()
extern "C"  void EtceteraEventListener_imagePickerCancelled_m2349683027 (EtceteraEventListener_t3810308605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::imagePickerChoseImage(System.String)
extern "C"  void EtceteraEventListener_imagePickerChoseImage_m2762745923 (EtceteraEventListener_t3810308605 * __this, String_t* ___imagePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::saveImageToPhotoAlbumSucceededEvent()
extern "C"  void EtceteraEventListener_saveImageToPhotoAlbumSucceededEvent_m228103190 (EtceteraEventListener_t3810308605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::saveImageToPhotoAlbumFailedEvent(System.String)
extern "C"  void EtceteraEventListener_saveImageToPhotoAlbumFailedEvent_m3324177376 (EtceteraEventListener_t3810308605 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::alertButtonClicked(System.String)
extern "C"  void EtceteraEventListener_alertButtonClicked_m225804544 (EtceteraEventListener_t3810308605 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::promptCancelled()
extern "C"  void EtceteraEventListener_promptCancelled_m416281824 (EtceteraEventListener_t3810308605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::singleFieldPromptTextEntered(System.String)
extern "C"  void EtceteraEventListener_singleFieldPromptTextEntered_m3749062399 (EtceteraEventListener_t3810308605 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::twoFieldPromptTextEntered(System.String,System.String)
extern "C"  void EtceteraEventListener_twoFieldPromptTextEntered_m1800770715 (EtceteraEventListener_t3810308605 * __this, String_t* ___textOne0, String_t* ___textTwo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::remoteRegistrationSucceeded(System.String)
extern "C"  void EtceteraEventListener_remoteRegistrationSucceeded_m3759145321 (EtceteraEventListener_t3810308605 * __this, String_t* ___deviceToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::remoteRegistrationFailed(System.String)
extern "C"  void EtceteraEventListener_remoteRegistrationFailed_m1696379817 (EtceteraEventListener_t3810308605 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::pushIORegistrationCompletedEvent(System.String)
extern "C"  void EtceteraEventListener_pushIORegistrationCompletedEvent_m906802675 (EtceteraEventListener_t3810308605 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::urbanAirshipRegistrationSucceeded()
extern "C"  void EtceteraEventListener_urbanAirshipRegistrationSucceeded_m1925154333 (EtceteraEventListener_t3810308605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::urbanAirshipRegistrationFailed(System.String)
extern "C"  void EtceteraEventListener_urbanAirshipRegistrationFailed_m4366779 (EtceteraEventListener_t3810308605 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::remoteNotificationReceived(System.Collections.IDictionary)
extern "C"  void EtceteraEventListener_remoteNotificationReceived_m3337777050 (EtceteraEventListener_t3810308605 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::remoteNotificationReceivedAtLaunch(System.Collections.IDictionary)
extern "C"  void EtceteraEventListener_remoteNotificationReceivedAtLaunch_m25508832 (EtceteraEventListener_t3810308605 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::localNotificationWasReceivedEvent(System.Collections.IDictionary)
extern "C"  void EtceteraEventListener_localNotificationWasReceivedEvent_m2592512346 (EtceteraEventListener_t3810308605 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::localNotificationWasReceivedAtLaunchEvent(System.Collections.IDictionary)
extern "C"  void EtceteraEventListener_localNotificationWasReceivedAtLaunchEvent_m124791168 (EtceteraEventListener_t3810308605 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::mailComposerFinished(System.String)
extern "C"  void EtceteraEventListener_mailComposerFinished_m4279184384 (EtceteraEventListener_t3810308605 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::smsComposerFinished(System.String)
extern "C"  void EtceteraEventListener_smsComposerFinished_m3366035358 (EtceteraEventListener_t3810308605 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraEventListener::webViewDidLoadURLEvent(System.String)
extern "C"  void EtceteraEventListener_webViewDidLoadURLEvent_m2786352780 (EtceteraEventListener_t3810308605 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
