#include "pch.h"

// LostArk (0.0.01) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

#include "../SDK.hpp"

namespace Classes
{
TArray<FNameEntry*>* FName::GNames = nullptr;
TArray<UObject*>* UObject::GObjects = nullptr;
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
