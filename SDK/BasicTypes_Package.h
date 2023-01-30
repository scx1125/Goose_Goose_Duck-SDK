#pragma once

/**
 * Name: Goose Goose Duck
 * Version: 1.0.0.0
 */

#define IL2CPP_VER 29

typedef void(*Il2CppMethodPointer)();
typedef uintptr_t Il2CppArraySize;
typedef int32_t Il2CppArrayLowerBound;
typedef void (*InvokerMethod_t)(Il2CppMethodPointer, const class MethodInfo*, void*, void**, void*);

namespace CG
{
	// --------------------------------------------------
	// # Forwards
	// --------------------------------------------------
	union Il2CppRgCtxData;
	class Il2CppType;
	class MethodInfo;
	class Il2CppClass;

	// --------------------------------------------------
	// # Global fields
	// --------------------------------------------------
	extern uintptr_t                                            ModuleBaseAddress;                                       // 0x0000(0x0000)

	// --------------------------------------------------
	// # Global functions
	// --------------------------------------------------
	void InitFields();
	bool InitSdk(const std::wstring& moduleName);
	bool InitSdk();
	template<typename Fn>
	Fn GetVFunction(const void* instance, size_t index)
	{
		auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
		return reinterpret_cast<Fn>(const_cast<void (*)>(vtable[index]));
	}

}



#include "BasicTypes_Structs.h"
#include "BasicTypes_Classes.h"

