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

// Prime31.TwitterBinding
struct TwitterBinding_t1497275670;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Prime31.TwitterBinding::.cctor()
extern "C"  void TwitterBinding__cctor_m2863145913 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::.ctor()
extern "C"  void TwitterBinding__ctor_m4127130184 (TwitterBinding_t1497275670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::_twitterInit(System.String,System.String)
extern "C"  void TwitterBinding__twitterInit_m1015185274 (Il2CppObject * __this /* static, unused */, String_t* ___consumerKey0, String_t* ___consumerSecret1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::init(System.String,System.String)
extern "C"  void TwitterBinding_init_m2539278470 (Il2CppObject * __this /* static, unused */, String_t* ___consumerKey0, String_t* ___consumerSecret1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.TwitterBinding::_twitterIsLoggedIn()
extern "C"  bool TwitterBinding__twitterIsLoggedIn_m390839995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.TwitterBinding::isLoggedIn()
extern "C"  bool TwitterBinding_isLoggedIn_m911490913 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.TwitterBinding::_twitterLoggedInUsername()
extern "C"  String_t* TwitterBinding__twitterLoggedInUsername_m3873894510 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.TwitterBinding::loggedInUsername()
extern "C"  String_t* TwitterBinding_loggedInUsername_m273807258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::_twitterShowOauthLoginDialog(System.Boolean)
extern "C"  void TwitterBinding__twitterShowOauthLoginDialog_m1780530842 (Il2CppObject * __this /* static, unused */, bool ___forceWebBasedAuthentication0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::showLoginDialog(System.Boolean)
extern "C"  void TwitterBinding_showLoginDialog_m3335702709 (Il2CppObject * __this /* static, unused */, bool ___forceWebBasedAuthentication0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::_twitterLogout()
extern "C"  void TwitterBinding__twitterLogout_m3241115956 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::logout()
extern "C"  void TwitterBinding_logout_m2123787928 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::postStatusUpdate(System.String)
extern "C"  void TwitterBinding_postStatusUpdate_m2604256145 (Il2CppObject * __this /* static, unused */, String_t* ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::_twitterPostStatusUpdateWithVideo(System.String,System.String)
extern "C"  void TwitterBinding__twitterPostStatusUpdateWithVideo_m2716123030 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___videoPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::postStatusUpdateWithVideoOrGif(System.String,System.String)
extern "C"  void TwitterBinding_postStatusUpdateWithVideoOrGif_m2874363513 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___videoPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::_twitterPostStatusUpdateWithImage(System.String,System.String)
extern "C"  void TwitterBinding__twitterPostStatusUpdateWithImage_m664278268 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___imagePath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::postStatusUpdate(System.String,System.String)
extern "C"  void TwitterBinding_postStatusUpdate_m2545799107 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___pathToImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::_twitterPostStatusUpdateWithRawImage(System.String,System.Byte[],System.Int32)
extern "C"  void TwitterBinding__twitterPostStatusUpdateWithRawImage_m3740789510 (Il2CppObject * __this /* static, unused */, String_t* ___status0, ByteU5BU5D_t3397334013* ___data1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::postStatusUpdate(System.String,System.Byte[])
extern "C"  void TwitterBinding_postStatusUpdate_m3256451918 (Il2CppObject * __this /* static, unused */, String_t* ___status0, ByteU5BU5D_t3397334013* ___imageData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::getHomeTimeline()
extern "C"  void TwitterBinding_getHomeTimeline_m3680301764 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::_twitterPerformRequest(System.String,System.String,System.String)
extern "C"  void TwitterBinding__twitterPerformRequest_m1137466994 (Il2CppObject * __this /* static, unused */, String_t* ___methodType0, String_t* ___path1, String_t* ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::performRequest(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void TwitterBinding_performRequest_m1874004989 (Il2CppObject * __this /* static, unused */, String_t* ___methodType0, String_t* ___path1, Dictionary_2_t3943999495 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.TwitterBinding::_twitterIsTweetSheetSupported()
extern "C"  bool TwitterBinding__twitterIsTweetSheetSupported_m3638577504 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.TwitterBinding::isTweetSheetSupported()
extern "C"  bool TwitterBinding_isTweetSheetSupported_m2416627528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.TwitterBinding::_twitterCanUserTweet()
extern "C"  bool TwitterBinding__twitterCanUserTweet_m1402249606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.TwitterBinding::canUserTweet()
extern "C"  bool TwitterBinding_canUserTweet_m2026617614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::_twitterShowTweetComposer(System.String,System.String,System.String)
extern "C"  void TwitterBinding__twitterShowTweetComposer_m2593940070 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___imagePath1, String_t* ___url2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::showTweetComposer(System.String)
extern "C"  void TwitterBinding_showTweetComposer_m3188461670 (Il2CppObject * __this /* static, unused */, String_t* ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::showTweetComposer(System.String,System.String)
extern "C"  void TwitterBinding_showTweetComposer_m2094249094 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___pathToImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.TwitterBinding::showTweetComposer(System.String,System.String,System.String)
extern "C"  void TwitterBinding_showTweetComposer_m2700872358 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___pathToImage1, String_t* ___link2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
