#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_WinDrv_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WinDrv.WindowsClient
// 0x01C8 (0x0238 - 0x0070)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0070(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
