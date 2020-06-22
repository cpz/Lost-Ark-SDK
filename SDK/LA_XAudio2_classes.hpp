#pragma once

// Lost Ark (1.148.153.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "LA_XAudio2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class XAudio2.XAudio2Device
// 0x00A8 (0x0400 - 0x0358)
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0358(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class XAudio2.XAudio2Device");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
