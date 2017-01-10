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

// Prime31.EtceteraBinding
struct EtceteraBinding_t191992758;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t2721744421;
// System.Collections.Generic.List`1<Prime31.Contact>
struct List_1_t1429940238;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Prime31_PhotoPromptT1908076790.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Prime31_P31RemoteNot3059237157.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Prime31_UIInterfaceO1435202059.h"

// System.Void Prime31.EtceteraBinding::.ctor()
extern "C"  void EtceteraBinding__ctor_m3052919162 (EtceteraBinding_t191992758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Prime31.EtceteraBinding::takeScreenShot(System.String)
extern "C"  Il2CppObject * EtceteraBinding_takeScreenShot_m3400378733 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Prime31.EtceteraBinding::takeScreenShot(System.String,System.Action`1<System.String>)
extern "C"  Il2CppObject * EtceteraBinding_takeScreenShot_m341583677 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, Action_1_t1831019615 * ___completionHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Prime31.EtceteraBinding::getScreenShotTexture(System.Action`1<UnityEngine.Texture2D>)
extern "C"  Il2CppObject * EtceteraBinding_getScreenShotTexture_m999187329 (Il2CppObject * __this /* static, unused */, Action_1_t3344795111 * ___completionHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.EtceteraBinding::_etceteraApplicationCanOpenUrl(System.String)
extern "C"  bool EtceteraBinding__etceteraApplicationCanOpenUrl_m3040713683 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.EtceteraBinding::applicationCanOpenUrl(System.String)
extern "C"  bool EtceteraBinding_applicationCanOpenUrl_m2571526873 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::_etceteraGetPasteboardString()
extern "C"  String_t* EtceteraBinding__etceteraGetPasteboardString_m2917166439 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::getPasteboardString()
extern "C"  String_t* EtceteraBinding_getPasteboardString_m4187337365 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraSetPasteboardString(System.String)
extern "C"  void EtceteraBinding__etceteraSetPasteboardString_m3376651252 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::setPasteboardString(System.String)
extern "C"  void EtceteraBinding_setPasteboardString_m1596008316 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraSetPasteboardImage(System.Byte[],System.Int32)
extern "C"  void EtceteraBinding__etceteraSetPasteboardImage_m1352461512 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::setPasteboardImage(System.Byte[])
extern "C"  void EtceteraBinding_setPasteboardImage_m677295505 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___imageBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::_etceteraGetCurrentLanguage()
extern "C"  String_t* EtceteraBinding__etceteraGetCurrentLanguage_m1754284950 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::getCurrentLanguage()
extern "C"  String_t* EtceteraBinding_getCurrentLanguage_m4116453520 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::_etceteraLocaleObjectForKey(System.Boolean,System.String)
extern "C"  String_t* EtceteraBinding__etceteraLocaleObjectForKey_m2902283829 (Il2CppObject * __this /* static, unused */, bool ___useAutoupdatingLocale0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::localeObjectForKey(System.Boolean,System.String)
extern "C"  String_t* EtceteraBinding_localeObjectForKey_m3494582011 (Il2CppObject * __this /* static, unused */, bool ___useAutoUpdatingLocale0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::_etceteraGetLocalizedString(System.String,System.String)
extern "C"  String_t* EtceteraBinding__etceteraGetLocalizedString_m2708704457 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::getLocalizedString(System.String,System.String)
extern "C"  String_t* EtceteraBinding_getLocalizedString_m716732407 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showAlertWithTitleMessageAndButton(System.String,System.String,System.String)
extern "C"  void EtceteraBinding_showAlertWithTitleMessageAndButton_m1846731877 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___buttonTitle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowAlertWithTitleMessageAndButtons(System.String,System.String,System.String)
extern "C"  void EtceteraBinding__etceteraShowAlertWithTitleMessageAndButtons_m2662501830 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___buttons2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showAlertWithTitleMessageAndButtons(System.String,System.String,System.String[])
extern "C"  void EtceteraBinding_showAlertWithTitleMessageAndButtons_m2588974302 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, StringU5BU5D_t1642385972* ___buttons2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowPromptWithOneField(System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding__etceteraShowPromptWithOneField_m2336006506 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___placeHolder2, bool ___autocomplete3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showPromptWithOneField(System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding_showPromptWithOneField_m99135906 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___placeHolder2, bool ___autocomplete3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowPromptWithTwoFields(System.String,System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding__etceteraShowPromptWithTwoFields_m3488344691 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___placeHolder12, String_t* ___placeHolder23, bool ___autocomplete4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showPromptWithTwoFields(System.String,System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding_showPromptWithTwoFields_m58591969 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___placeHolder12, String_t* ___placeHolder23, bool ___autocomplete4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowWebPage(System.String,System.Boolean)
extern "C"  void EtceteraBinding__etceteraShowWebPage_m1000763193 (Il2CppObject * __this /* static, unused */, String_t* ___url0, bool ___showControls1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showWebPage(System.String,System.Boolean)
extern "C"  void EtceteraBinding_showWebPage_m1366756415 (Il2CppObject * __this /* static, unused */, String_t* ___url0, bool ___showControls1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowWebPageInSafariViewController(System.String)
extern "C"  void EtceteraBinding__etceteraShowWebPageInSafariViewController_m60841456 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showWebPageInSafariViewController(System.String)
extern "C"  void EtceteraBinding_showWebPageInSafariViewController_m1419609468 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.EtceteraBinding::_etceteraIsEmailAvailable()
extern "C"  bool EtceteraBinding__etceteraIsEmailAvailable_m2463192107 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.EtceteraBinding::isEmailAvailable()
extern "C"  bool EtceteraBinding_isEmailAvailable_m1805997653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.EtceteraBinding::_etceteraIsSMSAvailable()
extern "C"  bool EtceteraBinding__etceteraIsSMSAvailable_m2363557898 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.EtceteraBinding::isSMSAvailable()
extern "C"  bool EtceteraBinding_isSMSAvailable_m3958728266 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowMailComposer(System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding__etceteraShowMailComposer_m3974678333 (Il2CppObject * __this /* static, unused */, String_t* ___toAddress0, String_t* ___subject1, String_t* ___body2, bool ___isHTML3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showMailComposer(System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding_showMailComposer_m306752867 (Il2CppObject * __this /* static, unused */, String_t* ___toAddress0, String_t* ___subject1, String_t* ___body2, bool ___isHTML3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Prime31.EtceteraBinding::showMailComposerWithScreenshot(System.String,System.String,System.String,System.Boolean)
extern "C"  Il2CppObject * EtceteraBinding_showMailComposerWithScreenshot_m3744545339 (Il2CppObject * __this /* static, unused */, String_t* ___toAddress0, String_t* ___subject1, String_t* ___body2, bool ___isHTML3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showMailComposerWithAttachment(System.String,System.String,System.String,System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding_showMailComposerWithAttachment_m2894987256 (Il2CppObject * __this /* static, unused */, String_t* ___filePathToAttachment0, String_t* ___attachmentMimeType1, String_t* ___attachmentFilename2, String_t* ___toAddress3, String_t* ___subject4, String_t* ___body5, bool ___isHTML6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowMailComposerWithRawAttachment(System.Byte[],System.Int32,System.String,System.String,System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding__etceteraShowMailComposerWithRawAttachment_m303875958 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___length1, String_t* ___attachmentMimeType2, String_t* ___attachmentFilename3, String_t* ___toAddress4, String_t* ___subject5, String_t* ___body6, bool ___isHTML7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showMailComposerWithAttachment(System.Byte[],System.String,System.String,System.String,System.String,System.String,System.Boolean)
extern "C"  void EtceteraBinding_showMailComposerWithAttachment_m739357655 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___attachmentData0, String_t* ___attachmentMimeType1, String_t* ___attachmentFilename2, String_t* ___toAddress3, String_t* ___subject4, String_t* ___body5, bool ___isHTML6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowSMSComposer(System.String,System.String)
extern "C"  void EtceteraBinding__etceteraShowSMSComposer_m4243883948 (Il2CppObject * __this /* static, unused */, String_t* ___recipients0, String_t* ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showSMSComposer(System.String)
extern "C"  void EtceteraBinding_showSMSComposer_m1818198448 (Il2CppObject * __this /* static, unused */, String_t* ___body0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showSMSComposer(System.String[],System.String)
extern "C"  void EtceteraBinding_showSMSComposer_m980958564 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___recipients0, String_t* ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowActivityView()
extern "C"  void EtceteraBinding__etceteraShowActivityView_m1115722011 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showActivityView()
extern "C"  void EtceteraBinding_showActivityView_m3699138113 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraHideActivityView()
extern "C"  void EtceteraBinding__etceteraHideActivityView_m3871577760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::hideActivityView()
extern "C"  void EtceteraBinding_hideActivityView_m1725046948 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowBezelActivityViewWithLabel(System.String)
extern "C"  void EtceteraBinding__etceteraShowBezelActivityViewWithLabel_m1397413113 (Il2CppObject * __this /* static, unused */, String_t* ___label0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showBezelActivityViewWithLabel(System.String)
extern "C"  void EtceteraBinding_showBezelActivityViewWithLabel_m4218476675 (Il2CppObject * __this /* static, unused */, String_t* ___label0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraShowBezelActivityViewWithImage(System.String,System.String)
extern "C"  void EtceteraBinding__etceteraShowBezelActivityViewWithImage_m3172750986 (Il2CppObject * __this /* static, unused */, String_t* ___label0, String_t* ___imagePath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::showBezelActivityViewWithImage(System.String,System.String)
extern "C"  void EtceteraBinding_showBezelActivityViewWithImage_m2698153810 (Il2CppObject * __this /* static, unused */, String_t* ___label0, String_t* ___imagePath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraAskForReview(System.Int32,System.Single,System.String,System.String,System.String)
extern "C"  void EtceteraBinding__etceteraAskForReview_m4264607386 (Il2CppObject * __this /* static, unused */, int32_t ___launchCount0, float ___hoursBetweenPrompts1, String_t* ___title2, String_t* ___message3, String_t* ___iTunesAppId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::askForReview(System.Int32,System.Single,System.String,System.String,System.String)
extern "C"  void EtceteraBinding_askForReview_m3110288306 (Il2CppObject * __this /* static, unused */, int32_t ___launchCount0, float ___hoursBetweenPrompts1, String_t* ___title2, String_t* ___message3, String_t* ___iTunesAppId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraAskForReviewImmediately(System.String,System.String,System.String)
extern "C"  void EtceteraBinding__etceteraAskForReviewImmediately_m3701058790 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___iTunesAppId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::askForReview(System.String,System.String,System.String)
extern "C"  void EtceteraBinding_askForReview_m1192991690 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___iTunesAppId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraOpenAppStoreReviewPage(System.String)
extern "C"  void EtceteraBinding__etceteraOpenAppStoreReviewPage_m3233928373 (Il2CppObject * __this /* static, unused */, String_t* ___iTunesAppId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::openAppStoreReviewPage(System.String)
extern "C"  void EtceteraBinding_openAppStoreReviewPage_m2144854283 (Il2CppObject * __this /* static, unused */, String_t* ___iTunesAppId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraSetPopoverPoint(System.Single,System.Single)
extern "C"  void EtceteraBinding__etceteraSetPopoverPoint_m2173549983 (Il2CppObject * __this /* static, unused */, float ___xPos0, float ___yPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::setPopoverPoint(System.Single,System.Single)
extern "C"  void EtceteraBinding_setPopoverPoint_m1690310585 (Il2CppObject * __this /* static, unused */, float ___xPos0, float ___yPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraPromptForPhoto(System.Single,System.Int32,System.Single,System.Boolean)
extern "C"  void EtceteraBinding__etceteraPromptForPhoto_m2767718937 (Il2CppObject * __this /* static, unused */, float ___scaledToSize0, int32_t ___promptType1, float ___jpegCompression2, bool ___allowsEditing3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::promptForPhoto(System.Single)
extern "C"  void EtceteraBinding_promptForPhoto_m1342538296 (Il2CppObject * __this /* static, unused */, float ___scaledToSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::promptForPhoto(System.Single,Prime31.PhotoPromptType)
extern "C"  void EtceteraBinding_promptForPhoto_m429509643 (Il2CppObject * __this /* static, unused */, float ___scaledToSize0, int32_t ___promptType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::promptForPhoto(System.Single,Prime31.PhotoPromptType,System.Single,System.Boolean)
extern "C"  void EtceteraBinding_promptForPhoto_m4047390821 (Il2CppObject * __this /* static, unused */, float ___scaledToSize0, int32_t ___promptType1, float ___jpegCompression2, bool ___allowsEditing3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraPromptForMultiplePhotos(System.Int32,System.Single,System.Single)
extern "C"  void EtceteraBinding__etceteraPromptForMultiplePhotos_m416135245 (Il2CppObject * __this /* static, unused */, int32_t ___maxNumberOfPhotos0, float ___scaledToSize1, float ___jpegCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::promptForMultiplePhotos(System.Int32,System.Single,System.Single)
extern "C"  void EtceteraBinding_promptForMultiplePhotos_m337795183 (Il2CppObject * __this /* static, unused */, int32_t ___maxNumberOfPhotos0, float ___scaledToSize1, float ___jpegCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraResizeImageAtPath(System.String,System.Single,System.Single)
extern "C"  void EtceteraBinding__etceteraResizeImageAtPath_m82281027 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, float ___width1, float ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::resizeImageAtPath(System.String,System.Single,System.Single)
extern "C"  void EtceteraBinding_resizeImageAtPath_m1469547709 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, float ___width1, float ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::_etceteraGetImageSize(System.String)
extern "C"  String_t* EtceteraBinding__etceteraGetImageSize_m2171333943 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Prime31.EtceteraBinding::getImageSize(System.String)
extern "C"  Vector2_t2243707579  EtceteraBinding_getImageSize_m744325995 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraSaveImageToPhotoAlbum(System.String)
extern "C"  void EtceteraBinding__etceteraSaveImageToPhotoAlbum_m2611694344 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::saveImageToPhotoAlbum(System.String)
extern "C"  void EtceteraBinding_saveImageToPhotoAlbum_m3207989452 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraSetUrbanAirshipCredentials(System.String,System.String,System.String)
extern "C"  void EtceteraBinding__etceteraSetUrbanAirshipCredentials_m808950802 (Il2CppObject * __this /* static, unused */, String_t* ___appKey0, String_t* ___appSecret1, String_t* ___alias2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::setUrbanAirshipCredentials(System.String,System.String)
extern "C"  void EtceteraBinding_setUrbanAirshipCredentials_m2759155226 (Il2CppObject * __this /* static, unused */, String_t* ___appKey0, String_t* ___appSecret1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::setUrbanAirshipCredentials(System.String,System.String,System.String)
extern "C"  void EtceteraBinding_setUrbanAirshipCredentials_m827205542 (Il2CppObject * __this /* static, unused */, String_t* ___appKey0, String_t* ___appSecret1, String_t* ___alias2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::setPushIOCredentials(System.String)
extern "C"  void EtceteraBinding_setPushIOCredentials_m1907713048 (Il2CppObject * __this /* static, unused */, String_t* ___apiKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::setPushIOCredentials(System.String,System.String[])
extern "C"  void EtceteraBinding_setPushIOCredentials_m96278132 (Il2CppObject * __this /* static, unused */, String_t* ___apiKey0, StringU5BU5D_t1642385972* ___categories1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraRegisterForRemoteNotifications(System.Int32)
extern "C"  void EtceteraBinding__etceteraRegisterForRemoteNotifications_m2845587897 (Il2CppObject * __this /* static, unused */, int32_t ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::registerForRemoteNotifications(Prime31.P31RemoteNotificationType)
extern "C"  void EtceteraBinding_registerForRemoteNotifications_m386954280 (Il2CppObject * __this /* static, unused */, int32_t ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Prime31.EtceteraBinding::registerDeviceWithGameThrive(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<UnityEngine.WWW>)
extern "C"  Il2CppObject * EtceteraBinding_registerDeviceWithGameThrive_m873095114 (Il2CppObject * __this /* static, unused */, String_t* ___gameThriveAppId0, String_t* ___deviceToken1, Dictionary_2_t3943999495 * ___additionalParameters2, Action_1_t2721744421 * ___completionHandler3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.EtceteraBinding::_etceteraGetEnabledRemoteNotificationTypes()
extern "C"  int32_t EtceteraBinding__etceteraGetEnabledRemoteNotificationTypes_m1701644311 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.P31RemoteNotificationType Prime31.EtceteraBinding::getEnabledRemoteNotificationTypes()
extern "C"  int32_t EtceteraBinding_getEnabledRemoteNotificationTypes_m2442851422 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.EtceteraBinding::_etceteraGetBadgeCount()
extern "C"  int32_t EtceteraBinding__etceteraGetBadgeCount_m504018922 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.EtceteraBinding::getBadgeCount()
extern "C"  int32_t EtceteraBinding_getBadgeCount_m781114310 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraSetBadgeCount(System.Int32)
extern "C"  void EtceteraBinding__etceteraSetBadgeCount_m2676929017 (Il2CppObject * __this /* static, unused */, int32_t ___badgeCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::setBadgeCount(System.Int32)
extern "C"  void EtceteraBinding_setBadgeCount_m2146370687 (Il2CppObject * __this /* static, unused */, int32_t ___badgeCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Prime31.EtceteraBinding::_etceteraGetStatusBarOrientation()
extern "C"  int32_t EtceteraBinding__etceteraGetStatusBarOrientation_m1469801511 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Prime31.UIInterfaceOrientation Prime31.EtceteraBinding::getStatusBarOrientation()
extern "C"  int32_t EtceteraBinding_getStatusBarOrientation_m1986526004 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraInlineWebViewShow(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void EtceteraBinding__etceteraInlineWebViewShow_m2219636391 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::inlineWebViewShow(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void EtceteraBinding_inlineWebViewShow_m3893239041 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraInlineWebViewClose()
extern "C"  void EtceteraBinding__etceteraInlineWebViewClose_m1107499956 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::inlineWebViewClose()
extern "C"  void EtceteraBinding_inlineWebViewClose_m1115385656 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraInlineWebViewSetUrl(System.String)
extern "C"  void EtceteraBinding__etceteraInlineWebViewSetUrl_m712508567 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::inlineWebViewSetUrl(System.String)
extern "C"  void EtceteraBinding_inlineWebViewSetUrl_m4083071277 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::_etceteraInlineWebViewSetFrame(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void EtceteraBinding__etceteraInlineWebViewSetFrame_m444539323 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.EtceteraBinding::inlineWebViewSetFrame(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void EtceteraBinding_inlineWebViewSetFrame_m3415913533 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.EtceteraBinding::_etceteraGetContacts(System.Int32,System.Int64)
extern "C"  String_t* EtceteraBinding__etceteraGetContacts_m4057294443 (Il2CppObject * __this /* static, unused */, int32_t ___startIndex0, int64_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Prime31.Contact> Prime31.EtceteraBinding::getContacts(System.Int32,System.Int64)
extern "C"  List_1_t1429940238 * EtceteraBinding_getContacts_m2856363338 (Il2CppObject * __this /* static, unused */, int32_t ___startIndex0, int64_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
