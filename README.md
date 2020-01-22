# Lost Ark SDK
Lost Ark SDK generated for CIS Region game version - 1.76.76.0

---

### How to use SDK
* Make sure to add in your Project both LA_Basic.hpp/cpp and LA_Core_functions.cpp (or just SDK.hpp)
* Don't forget to set GObjects and GNames address in LA_Basic.cpp
* Hook ProcessEvent and do your magic.

---

### Snippets

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
auto m_pLocalPlayerPawn = static_cast<SDK::APawn*>(SDK::g_pPC->AcknowledgedPawn);
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
	EFGame_EFGFxHUDWrapper_PostRender = 41422,            /// EFGame.EFGFxHUDWrapper.PostRender
	EFGame_EFGameViewportClient_PostRender = 41344,       /// EFGame.EFGameViewportClient.PostRender
	EFGame_EFGameViewportClient_Tick = 41346,             /// EFGame.EFGameViewportClient.Tick
	Engine_GameViewportClient_LayoutPlayers = 19931,      /// Engine.GameViewportClient.LayoutPlayers
	EFGame_EFGFxHUDWrapper_Destroyed = 41420,             /// EFGame.EFGFxHUDWrapper.Destroyed
	Engine_PlayerController_Destroyed = 44330,            /// Engine.PlayerController.Destroyed
	Engine_PlayerController_GetFOVAngle = 4408,           /// Engine.PlayerController.GetFOVAngle
	EFGame_EFPlayerController_PlayerTick = 44335          /// EFGame.EFPlayerController.PlayerTick
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
	Player = 15254,
	Monster = 15248,
	NPC = 15250,
	SummonNPC = 15256,
	Pet = 15252,
	Vehicle = 15262
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
	if (SDK::IsPet(pEntity) || SDK::IsVehicle(pEntity) || SDK::IsSummonNPC(pEntity))
		return;
 
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

### Credits

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
