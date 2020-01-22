#pragma once

// Lost Ark (1.76.76.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
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
	unsigned char                                      UnknownData00[0x16C];                                     // 0x0070(0x016C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                         // 0x01DC(0x0008) (Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01E4(0x0008) MISSED OFFSET
	class UClass*                                      AKAudioDeviceClass;                                       // 0x01EC(0x0008) (Config)
	unsigned char                                      UnknownData02[0x30];                                      // 0x01F4(0x0030) MISSED OFFSET
	int                                                AllowJoystickInput;                                       // 0x0224(0x0004) (Config)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0228(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
