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

// BetpalzUnity.Core.Engine
struct Engine_t721374840;
// BetpalzSDK.Betpalz
struct Betpalz_t3924986120;
// BetpalzUnity.Core.Services.LogoutService
struct LogoutService_t497179995;
// BetpalzUnity.Core.Services.FacebookService
struct FacebookService_t3621199521;
// BetpalzUnity.Core.Services.TwitterService
struct TwitterService_t3958793376;

#include "codegen/il2cpp-codegen.h"

// System.Void BetpalzUnity.Core.Engine::.ctor()
extern "C"  void Engine__ctor_m2960074673 (Engine_t721374840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzUnity.Core.Engine BetpalzUnity.Core.Engine::get_Instance()
extern "C"  Engine_t721374840 * Engine_get_Instance_m1479218318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzSDK.Betpalz BetpalzUnity.Core.Engine::get_Betpalz()
extern "C"  Betpalz_t3924986120 * Engine_get_Betpalz_m2021457529 (Engine_t721374840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzUnity.Core.Services.LogoutService BetpalzUnity.Core.Engine::get_LogoutService()
extern "C"  LogoutService_t497179995 * Engine_get_LogoutService_m2905654119 (Engine_t721374840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzUnity.Core.Services.FacebookService BetpalzUnity.Core.Engine::get_FacebookService()
extern "C"  FacebookService_t3621199521 * Engine_get_FacebookService_m2678922791 (Engine_t721374840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetpalzUnity.Core.Services.TwitterService BetpalzUnity.Core.Engine::get_TwitterService()
extern "C"  TwitterService_t3958793376 * Engine_get_TwitterService_m122619187 (Engine_t721374840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Engine::StartupServices()
extern "C"  void Engine_StartupServices_m3282370462 (Engine_t721374840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BetpalzUnity.Core.Engine::SetSupportedOrientations()
extern "C"  void Engine_SetSupportedOrientations_m2566559846 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
