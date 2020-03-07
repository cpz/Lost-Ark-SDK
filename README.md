# Lost Ark SDK Documentation

[Lost Ark SDK](https://github.com/cpz/Lost-Ark-SDK) 
[![Build Status](https://travis-ci.com/cpz/Lost-Ark-SDK.svg?branch=gh-sdk)](https://travis-ci.com/cpz/Lost-Ark-SDK)


<p align="center">
    <img src="https://i.gyazo.com/e24422ce70b228133c8cfa7ae4f7a405.png">
</p>


---

## FindPattern Signatures

####  v1.76.76.0 (Codename: Silmael)
```C++
BYTE* __GObjects = (BYTE*)PatternScan("EFEngine.dll", "48 8B 05 E3 21 A5 01 48 8B 14 C8 48 8B 4A 50 48 85 C9");
if (__GObjects == nullptr)
{
   return;
}

_GObjects = (BYTE*)*(DWORD*)(__GObjects + 0x03);
_GObjects += (unsigned __int64)__GObjects + 0x03 + sizeof(DWORD);

UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(_GObjects);

BYTE* __GNames = (BYTE*)PatternScan("EFEngine.dll", "48 8B 05 F6 22 B6 01 4C 8B 04 D0 48 8B 81 9C 00 00 00");
if (__GNames == nullptr)
{
   return;
}

_GNames = (BYTE*)*(DWORD*)(__GNames + 0x03);
_GNames += (unsigned __int64)__GNames + 0x03 + sizeof(DWORD);

FName::GNames = reinterpret_cast<decltype(FName::GNames)>(_GNames);
```

## ULocalPlayer, APlayerController and APawn from LocalPlayer

##### ULocalPlayer
```C++
ULocalPlayer* GetLocalPlayer()
{
	return UObject::FindObject<ULocalPlayer>("LocalPlayer Transient.EFGameEngine_1.LocalPlayer_1");
}
```

##### APlayerController
```C++
auto m_pPC = static_cast<SDK::APlayerController*>(GetLocalPlayer()->Actor);
      if (m_pPC == nullptr)
	return;
```

##### APawn
```C++
auto m_pLocalPlayerPawn = static_cast<SDK::APawn*>(m_pPC->AcknowledgedPawn);
	if (m_pLocalPlayerPawn == nullptr)
		return false;
```

## Actor Array location

#### ULevelBase Class with Actor Array
```C++
class ULevelBase : public UObject
{
	public:
		TArray<AActor*>                                    Actors;
		unsigned char                                      UnknownData00[0x64];

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class Engine.LevelBase");
		return ptr;
	}

};

```

##### UWorld class with PersistentLevel:
```C++
class UWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                       // 0x0058
	class ULevel*                                      PersistentLevel;                                          // 0x0060(0x0008) 
	unsigned char                                      UnknownData01[0x384];                                     // 0x0058(0x0354) MISSED OFFSET
 
	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}
 
};
```

## Snippets
##### Functions names and ID's for ProcessEvent Hook:
```C++
enum eFuncId
{
	EFGame_EFGFxHUDWrapper_PostRender = 41432,            /// EFGame.EFGFxHUDWrapper.PostRender
	EFGame_EFGameViewportClient_PostRender = 41353,       /// EFGame.EFGameViewportClient.PostRender
	EFGame_EFGameViewportClient_Tick = 41355,             /// EFGame.EFGameViewportClient.Tick
	Engine_GameViewportClient_LayoutPlayers = 19931,      /// Engine.GameViewportClient.LayoutPlayers
	EFGame_EFGFxHUDWrapper_Destroyed = 41430,             /// EFGame.EFGFxHUDWrapper.Destroyed
	Engine_PlayerController_Destroyed = 44344,            /// Engine.PlayerController.Destroyed
	Engine_PlayerController_GetFOVAngle = 4408,           /// Engine.PlayerController.GetFOVAngle
	EFGame_EFPlayerController_PlayerTick = 44349          /// EFGame.EFPlayerController.PlayerTick
};
```

##### Example usage of eFuncId:
```C++
auto iIndex = pUFunc->ObjectInternalInteger;
 
if (iIndex == SDK::eFuncId::EFGame_EFGFxHUDWrapper_PostRender)	
{		
    PostRender();		
}
```

##### Actor Tag ID's:
```C++
enum eTagId
{
	Player = 15266,
	Monster = 15260,
	NPC = 15262,
	SummonNPC = 15268,
	Pet = 15264,
	Vehicle = 15274
};
```

##### Example usage of eTagId:
```C++
bool IsPlayer(AEFPawn* pEntity)
{
	return (pEntity->Tag.Index == eTagId::Player);
}
```

##### Visible check:
```C++
bool IsVisible(AEFPawn* pEntity)
{
	if (g_pLocalPlayer == nullptr)
		return false;
 
	if (g_pPC == nullptr)
		return false;
 
	if (g_pLocalPlayerPawn == nullptr)
			return false;
 
	if (g_pLocalPlayerPawn->LineOfSightTo(pEntity))
			return true;
 
	return false;
}
```

##### Modify FOV of Camera:
```C++
/// CustomFOV
if (SDK::g_pPC->GetFOVAngle() != 100.0f)
{
#ifdef __DebugPrint__
	std::printf("Set Custom FOV\n");
#endif
	SDK::g_pPC->FOV(100.0f);
}
```

##### Skeleton ESP:
```C++
void DrawPlayerSkeleton(SDK::UCanvas* pCanvas, SDK::AEFPawn* pEntity, SDK::FColor Color)
{
	std::vector<std::vector<std::string>> BonesVector =
	{
	{ "Bip001-Head", "Bip001-Neck", "Bip001-Pelvis" },
	{ "Bip001-L-UpperArm", "Bip001-L-Clavicle", "Bip001-L-Forearm", "Bip001-L-Hand" },
	{ "bip001-l-thigh", "bip001-l-calf", "bip001-l-foot", "Bip001-R-UpperArm" },
	{ "Bip001-R-Clavicle", "Bip001-R-Forearm", "Bip001-R-Hand", "bip001-r-thigh" },
	{ "bip001-r-calf", "bip001-r-foot" }
	};
 
	for (auto pBoneVector : BonesVector)
	{
		SDK::FVector FVPrev, FVCur;
		FVPrev = pCanvas->Project(pEntity->Mesh->GetBoneLocation(pBoneVector.at(0).c_str(), 0));
 
		for (size_t bone = 1; bone < pBoneVector.size(); bone++)
		{
			FVCur = pCanvas->Project(pEntity->Mesh->GetBoneLocation(pBoneVector.at(bone).c_str(), 0));
			if (!FVCur.X || !FVCur.Y || !FVCur.Z)
				break;
 
			pCanvas->Draw2DLine(FVPrev.X, FVPrev.Y, FVCur.X, FVCur.Y, Color);
 
			FVPrev = FVCur;
		}
	}
}
```

---

## Credits

Name | Reason
------------ | -------------
realrespecter | Korea SDK Dump
iCollin\qmp | Original Skeleton ESP Function
Revenge282 | Inspired by sot.exiled.dev

### Special thanks to the OSH Community
Name | Reason
------------ | -------------
KN4CK3R	| SDK Generator and ReClass.NET
Dr.Pepper | Help with SDK Generator, Unreal Engine, C++ and ASM
SilverDeath | C++, ASM, Math and some UE SDK stuff
Jeon | C++ and ASM
