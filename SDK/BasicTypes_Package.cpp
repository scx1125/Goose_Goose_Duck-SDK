/**
 * Name: Goose Goose Duck
 * Version: 1.0.0.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Global fields
	// --------------------------------------------------
	uintptr_t                                                   ModuleBaseAddress = 0x00;                                // 0x0000(0x0000)

	// --------------------------------------------------
	// # Global functions
	// --------------------------------------------------
	/**
	 * Initialize SDK
	 */
	void InitFields()
	{
		//INIT_STATIC_FIELDS_STR
	}

	/**
	 * Initialize SDK
	 */
	bool InitSdk(const std::wstring& moduleName)
	{
		ModuleBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleW(moduleName.c_str()));
		if (!ModuleBaseAddress)
			return false;
		
		InitFields();
		
		return true;
	}

	/**
	 * Initialize SDK
	 */
	bool InitSdk()
	{
		return InitSdk(L"GameAssembly.dll");
	}

}


