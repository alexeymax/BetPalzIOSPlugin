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

// Contact
struct Contact_t4014196408;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Contact::.ctor()
extern "C"  void Contact__ctor_m950584935 (Contact_t4014196408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contact::FromBytes(System.Byte[])
extern "C"  void Contact_FromBytes_m1907948975 (Contact_t4014196408 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Contact::readString(System.IO.BinaryReader)
extern "C"  String_t* Contact_readString_m2425016812 (Contact_t4014196408 * __this, BinaryReader_t2491843768 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Contact::log(System.String)
extern "C"  void Contact_log_m164295625 (Contact_t4014196408 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
