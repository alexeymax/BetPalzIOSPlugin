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

// Prime31.JsonFormatter
struct JsonFormatter_t2583709410;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Prime31.JsonFormatter::.ctor()
extern "C"  void JsonFormatter__ctor_m2009473890 (JsonFormatter_t2583709410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.JsonFormatter::prettyPrint(System.String)
extern "C"  String_t* JsonFormatter_prettyPrint_m1001008022 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prime31.JsonFormatter::buildIndents(System.Int32,System.Text.StringBuilder)
extern "C"  void JsonFormatter_buildIndents_m4270461106 (Il2CppObject * __this /* static, unused */, int32_t ___indents0, StringBuilder_t1221177846 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Prime31.JsonFormatter::inString()
extern "C"  bool JsonFormatter_inString_m320425232 (JsonFormatter_t2583709410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Prime31.JsonFormatter::print(System.String)
extern "C"  String_t* JsonFormatter_print_m1893975150 (JsonFormatter_t2583709410 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
