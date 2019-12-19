#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_EFGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EFGame.EFActionNotify_AnimEvent
// 0x001C (0x0074 - 0x0058)
class UEFActionNotify_AnimEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0058(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimEvent");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AnimEvent_CancelParticles
// 0x0000 (0x0074 - 0x0074)
class UEFActionNotify_AnimEvent_CancelParticles : public UEFActionNotify_AnimEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimEvent_CancelParticles");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AnimEvent_MaterialParamterLinearColor
// 0x0030 (0x00A4 - 0x0074)
class UEFActionNotify_AnimEvent_MaterialParamterLinearColor : public UEFActionNotify_AnimEvent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0074(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimEvent_MaterialParamterLinearColor");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AnimEvent_MaterialParamterScalar
// 0x0018 (0x008C - 0x0074)
class UEFActionNotify_AnimEvent_MaterialParamterScalar : public UEFActionNotify_AnimEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0074(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimEvent_MaterialParamterScalar");
		return ptr;
	}

};


// Class EFGame.EFActorMotionBase
// 0x0000 (0x0058 - 0x0058)
class UEFActorMotionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActorMotionBase");
		return ptr;
	}

};


// Class EFGame.EFActorMotionLocationCycle
// 0x0019 (0x0071 - 0x0058)
class UEFActorMotionLocationCycle : public UEFActorMotionBase
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x0058(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActorMotionLocationCycle");
		return ptr;
	}

};


// Class EFGame.EFActorMotionRotationAcyclic
// 0x0005 (0x005D - 0x0058)
class UEFActorMotionRotationAcyclic : public UEFActorMotionBase
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0058(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActorMotionRotationAcyclic");
		return ptr;
	}

};


// Class EFGame.EFActorMotionRotationCyclic
// 0x0019 (0x0071 - 0x0058)
class UEFActorMotionRotationCyclic : public UEFActorMotionBase
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x0058(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActorMotionRotationCyclic");
		return ptr;
	}

};


// Class EFGame.EFAfterImageSkeletalMeshComponent
// 0x0000 (0x08E8 - 0x08E8)
class UEFAfterImageSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAfterImageSkeletalMeshComponent");
		return ptr;
	}

};


// Class EFGame.EFAkAudioDevice
// 0x0240 (0x0300 - 0x00C0)
class UEFAkAudioDevice : public UAkAudioDevice
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x00C0(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAkAudioDevice");
		return ptr;
	}

};


// Class EFGame.EFAN_Params
// 0x001C (0x0074 - 0x0058)
class UEFAN_Params : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0058(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAN_Params");
		return ptr;
	}

};


// Class EFGame.EFAN_Particle
// 0x017C (0x01F0 - 0x0074)
class UEFAN_Particle : public UEFAN_Params
{
public:
	unsigned char                                      UnknownData00[0x17C];                                     // 0x0074(0x017C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAN_Particle");
		return ptr;
	}

};


// Class EFGame.EFAN_Trail
// 0x001C (0x0090 - 0x0074)
class UEFAN_Trail : public UEFAN_Params
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0074(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAN_Trail");
		return ptr;
	}

};


// Class EFGame.EFBarrier
// 0x0008 (0x027C - 0x0274)
class AEFBarrier : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBarrier");
		return ptr;
	}

};


// Class EFGame.EFCharacterParts
// 0x002C (0x05B4 - 0x0588)
class AEFCharacterParts : public APawn
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0588(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCharacterParts");
		return ptr;
	}


	void OnParticleSystemFinished();
	void STATIC_ClearAttachedPSIIndex();
	void NotifyChangedBase();
	void BaseChange();
	void EncroachingOn();
	void EncroachedBy();
	void Destroyed();
};


// Class EFGame.EFCheatManager
// 0x0000 (0x0098 - 0x0098)
class UEFCheatManager : public UGameCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCheatManager");
		return ptr;
	}


	void InternalDebugLookAt();
	void InternalVisualizePhysicsCompartmentUsage();
	void InternalSetPhysicsCompartmentCount();
	void InternalTogglePhysicsCompartmentForEFPawns();
	void InternalSetCamTargetBlendTime();
	void InternalClearCamTarget();
	void InternalSetCamTarget();
	void InternalCamPrevTarget();
	void InternalCamNextTarget();
	void InternalGetPlayerCamera();
	void InternalToggleCullDistanceVolume();
	void InternalToggleCPUSkinning();
	void InternalToggleOneFrameThreadLag();
	void InternalToggleUpdateDLEOptimize();
	void InternalToggleMeshObjectUpdateOptimize();
	void InternalToggleUpdateBoundsOptimize();
	void InternalToggleDynamicFoliageOptimize();
	void InternalToggleCameraODAOptimize();
	void InternalToggleParticleOptimizeILG();
};


// Class EFGame.EFClient
// 0x0030 (0x0268 - 0x0238)
class UEFClient : public UWindowsClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFClient");
		return ptr;
	}

};


// Class EFGame.EFConsole
// 0x0014 (0x027C - 0x0268)
class UEFConsole : public UConsole
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0268(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFConsole");
		return ptr;
	}


	void IsValidEFCommand();
	void InputAxis();
	void InputKey();
};


// Class EFGame.EFDecalCollisionComponent
// 0x000C (0x0290 - 0x0284)
class UEFDecalCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0284(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalCollisionComponent");
		return ptr;
	}

};


// Class EFGame.EFDecalComponent
// 0x0010 (0x0420 - 0x0410)
class UEFDecalComponent : public UDecalComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalComponent");
		return ptr;
	}

};


// Class EFGame.EFDecalFloorActor
// 0x000C (0x0290 - 0x0284)
class AEFDecalFloorActor : public ADecalActor
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0284(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalFloorActor");
		return ptr;
	}


	void STATIC_GetBoundingCylinder();
};


// Class EFGame.EFDecalManager
// 0x0000 (0x02B8 - 0x02B8)
class AEFDecalManager : public ADecalManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalManager");
		return ptr;
	}


	void SpawnDecalMinimal();
};


// Class EFGame.EFFracturedStaticMeshActor
// 0x0004 (0x0314 - 0x0310)
class AEFFracturedStaticMeshActor : public AFracturedStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0310(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFFracturedStaticMeshActor");
		return ptr;
	}

};


// Class EFGame.EFGameInfo
// 0x0248 (0x0708 - 0x04C0)
class AEFGameInfo : public AGameInfo
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x04C0(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameInfo");
		return ptr;
	}


	void AllowCheats();
	void PostSeamlessTravel();
	void GameEnding();
	void NotifyMapLoaded();
	void NotfiyLoadingStep();
	void Tick();
	void PostLogin();
	void Login();
	void LoadLevel();
	void STATIC_RestartPlayer();
	void InitGame();
	void STATIC_GenericPlayerInitialization();
};


// Class EFGame.EFMotionSkeletalMeshActor
// 0x002C (0x033C - 0x0310)
class AEFMotionSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0310(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMotionSkeletalMeshActor");
		return ptr;
	}

};


// Class EFGame.EFMotionStaticMeshActor
// 0x002C (0x033C - 0x0310)
class AEFMotionStaticMeshActor : public AInterpActor
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0310(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMotionStaticMeshActor");
		return ptr;
	}

};


// Class EFGame.EFParticleSkeletalMeshActor
// 0x0094 (0x0308 - 0x0274)
class AEFParticleSkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x94];                                      // 0x0274(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSkeletalMeshActor");
		return ptr;
	}

};


// Class EFGame.EFPawn
// 0x031C (0x08A4 - 0x0588)
class AEFPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x31C];                                     // 0x0588(0x031C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPawn");
		return ptr;
	}


	void StopAfterImageEffect();
	void StartAfterImageEffect();
	void STATIC_GetAnimTrailParticleSystem();
	void ApplyFluidSurfaceContinuousForce();
	void ApplyFluidSurfaceImpact();
	void NotifyChangedBase();
	void BaseChange();
	void STATIC_MAT_FinishAnimControl();
	void STATIC_MAT_BeginAnimControl();
	void InterpolationFinished();
	void InterpolationStarted();
	void RigidBodyCollision();
	void DoKismetAttachment();
	void STATIC_AttachmentCameraActor();
	void STATIC_GetGravityZ();
	void OnForceFieldDestroy();
	void CreateForceField();
	void STATIC_ExplodeActor();
	void STATIC_FinishDyingDelay();
	void SetDefaultStateColor();
	void SetStateColor();
	void STATIC_AttackFreezeAnim();
	void STATIC_AttackContinueAnim();
	void STATIC_SetPPOutlineWidth();
	void STATIC_SetPPOutlineColor();
	void STATIC_SetPPOutline();
	void SetCloakMode();
	void STATIC_SetOccludedOutlineColor();
	void STATIC_SetOccludedOutline();
	void OutsideWorldBounds();
	void FellOutOfWorld();
	void Landed();
	void Falling();
	void STATIC_SetDesiredRotation();
	void OnParticleSystemFinished();
	void PostInitAll();
	void STATIC_ClearAttachedPSIIndex();
	void Destroyed();
	void STATIC_GetDefaultCameraMode();
	void GetObjectCameraStyle();
	void EncroachingOn();
	void EncroachedBy();
};


// Class EFGame.EFMonster
// 0x0000 (0x08A4 - 0x08A4)
class AEFMonster : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMonster");
		return ptr;
	}

};


// Class EFGame.EFNonPlayer
// 0x0000 (0x08A4 - 0x08A4)
class AEFNonPlayer : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFNonPlayer");
		return ptr;
	}

};


// Class EFGame.EFPet
// 0x0000 (0x08A4 - 0x08A4)
class AEFPet : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPet");
		return ptr;
	}

};


// Class EFGame.EFPlayer
// 0x0014 (0x08B8 - 0x08A4)
class AEFPlayer : public AEFPawn
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x08A4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayer");
		return ptr;
	}


	void OnUpdatePropertyDrawScale();
	void OnUpdatePropertyDrawScale3D();
};


// Class EFGame.EFSummonNpc
// 0x0000 (0x08A4 - 0x08A4)
class AEFSummonNpc : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSummonNpc");
		return ptr;
	}

};


// Class EFGame.EFTransit
// 0x0010 (0x08B4 - 0x08A4)
class AEFTransit : public AEFPawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x08A4(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTransit");
		return ptr;
	}


	void EncroachingOn();
};


// Class EFGame.EFTrap
// 0x0000 (0x08A4 - 0x08A4)
class AEFTrap : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTrap");
		return ptr;
	}

};


// Class EFGame.EFVehicle
// 0x0000 (0x08A4 - 0x08A4)
class AEFVehicle : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFVehicle");
		return ptr;
	}

};


// Class EFGame.EFPhysicalMaterialProperty
// 0x0001 (0x0059 - 0x0058)
class UEFPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0058(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPhysicalMaterialProperty");
		return ptr;
	}

};


// Class EFGame.EFPlayerController
// 0x0298 (0x0A28 - 0x0790)
class AEFPlayerController : public AGamePlayerController
{
public:
	unsigned char                                      UnknownData00[0x298];                                     // 0x0790(0x0298) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerController");
		return ptr;
	}


	void ConsoleCommand();
	void STATIC_ProcessCinematic();
	void GetPlayerInitPosition();
	void GetPlayerViewPointQuat();
	void GetPlayerViewPoint();
	void DisplayDebug();
	void DrawHUD();
	void STATIC_SpawnDefaultHUD();
	void IsStopMovieLoading();
	void PlayerTick();
	void UpdateRotation();
	void StopMovieLoading();
	void Destroyed();
	void PostBeginPlay();
	void InitInputSystem();
};


// Class EFGame.EFPlayerInput
// 0x0030 (0x02E8 - 0x02B8)
class UEFPlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerInput");
		return ptr;
	}


	void STATIC_DefaultPositionControlPanel();
	void STATIC_FocusControlPanel();
	void STATIC_ToggleControlPanel();
	void OnMouseScrollDown();
	void OnMouseScrollUp();
	void PlayerInput();
	void InputAxis();
};


// Class EFGame.EFProjectile
// 0x0208 (0x04D8 - 0x02D0)
class AEFProjectile : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x208];                                     // 0x02D0(0x0208) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectile");
		return ptr;
	}


	void STATIC_ClearAttachedPSIIndex();
	void Destroyed();
	void BaseChange();
	void NotifyBaseChange();
	void STATIC_ProcessTouch();
};


// Class EFGame.EFProjectileFixArea
// 0x0048 (0x0520 - 0x04D8)
class AEFProjectileFixArea : public AEFProjectile
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x04D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileFixArea");
		return ptr;
	}

};


// Class EFGame.EFProjectileGrenade
// 0x0008 (0x04E0 - 0x04D8)
class AEFProjectileGrenade : public AEFProjectile
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileGrenade");
		return ptr;
	}

};


// Class EFGame.EFProjectileMissile
// 0x0000 (0x04D8 - 0x04D8)
class AEFProjectileMissile : public AEFProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileMissile");
		return ptr;
	}

};


// Class EFGame.EFProjectileTrace
// 0x0024 (0x04FC - 0x04D8)
class AEFProjectileTrace : public AEFProjectile
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x04D8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileTrace");
		return ptr;
	}

};


// Class EFGame.EFSkeletalMeshActor
// 0x0008 (0x0318 - 0x0310)
class AEFSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshActor");
		return ptr;
	}


	void STATIC_ClearAttachedPSIIndex();
	void NotifyChangedBase();
	void BaseChange();
	void Destroyed();
};


// Class EFGame.EFSkeletalMeshActorLookInfoMAT
// 0x00A0 (0x03C0 - 0x0320)
class AEFSkeletalMeshActorLookInfoMAT : public ASkeletalMeshActorMAT
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0320(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshActorLookInfoMAT");
		return ptr;
	}

};


// Class EFGame.EFSkeletalMeshActorPCLookInfoMAT
// 0x0015 (0x03D5 - 0x03C0)
class AEFSkeletalMeshActorPCLookInfoMAT : public AEFSkeletalMeshActorLookInfoMAT
{
public:
	unsigned char                                      UnknownData00[0x15];                                      // 0x03C0(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshActorPCLookInfoMAT");
		return ptr;
	}

};


// Class EFGame.EFSkeletalMeshComponent
// 0x008C (0x0974 - 0x08E8)
class UEFSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x08E8(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshComponent");
		return ptr;
	}

};


// Class EFGame.EFMainSkelComponent
// 0x0048 (0x09BC - 0x0974)
class UEFMainSkelComponent : public UEFSkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0974(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMainSkelComponent");
		return ptr;
	}

};


// Class EFGame.EFPartsSkelComponent
// 0x00E4 (0x0A58 - 0x0974)
class UEFPartsSkelComponent : public UEFSkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0974(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPartsSkelComponent");
		return ptr;
	}

};


// Class EFGame.EFTexture2DComposite
// 0x0003 (0x0143 - 0x0140)
class UEFTexture2DComposite : public UTexture2DComposite
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0140(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTexture2DComposite");
		return ptr;
	}

};


// Class EFGame.EFVolume
// 0x0008 (0x02B8 - 0x02B0)
class AEFVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFVolume");
		return ptr;
	}


	void UnTouch();
	void Touch();
};


// Class EFGame.EFVolumeProp
// 0x002D (0x02E5 - 0x02B8)
class AEFVolumeProp : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x2D];                                      // 0x02B8(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFVolumeProp");
		return ptr;
	}

};


// Class EFGame.EFGameEngine
// 0x00D4 (0x0BA8 - 0x0AD4)
class UEFGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0xD4];                                      // 0x0AD4(0x00D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameEngine");
		return ptr;
	}


	void TranslateGFxUIMessage();
	void ShowLineChecks();
};


// Class EFGame.EFMapInfo
// 0x0080 (0x00D8 - 0x0058)
class UEFMapInfo : public UMapInfo
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0058(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMapInfo");
		return ptr;
	}


	void SaveCameraValue();
	void LoadCameraValue();
};


// Class EFGame.EFAnimNodeAim
// 0x0008 (0x01B5 - 0x01AD)
class UEFAnimNodeAim : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01AD(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNodeAim");
		return ptr;
	}

};


// Class EFGame.EFAnimNodeBlendDirectional
// 0x000C (0x01D8 - 0x01CC)
class UEFAnimNodeBlendDirectional : public UAnimNodeBlendDirectional
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01CC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNodeBlendDirectional");
		return ptr;
	}

};


// Class EFGame.EFAnimNodeBlendPerBone
// 0x000C (0x0200 - 0x01F4)
class UEFAnimNodeBlendPerBone : public UAnimNodeBlendPerBone
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNodeBlendPerBone");
		return ptr;
	}

};


// Class EFGame.EFAnimNodeLookAt
// 0x0010 (0x0218 - 0x0208)
class UEFAnimNodeLookAt : public UAnimNodeAimOffset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNodeLookAt");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_AkEvent
// 0x0014 (0x0074 - 0x0060)
class UEFAnimNotify_AkEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0060(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_AkEvent");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_AkEventSwitchFloorMaterial
// 0x0018 (0x0078 - 0x0060)
class UEFAnimNotify_AkEventSwitchFloorMaterial : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_AkEventSwitchFloorMaterial");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_DropItemEvent
// 0x0009 (0x0069 - 0x0060)
class UEFAnimNotify_DropItemEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0060(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_DropItemEvent");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_Trails
// 0x0000 (0x00D8 - 0x00D8)
class UEFAnimNotify_Trails : public UAnimNotify_Trails
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_Trails");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_ViewShake
// 0x0000 (0x00B4 - 0x00B4)
class UEFAnimNotify_ViewShake : public UAnimNotify_ViewShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_ViewShake");
		return ptr;
	}

};


// Class EFGame.EFSkelControl_Spring
// 0x0030 (0x011C - 0x00EC)
class UEFSkelControl_Spring : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00EC(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkelControl_Spring");
		return ptr;
	}

};


// Class EFGame.EFSkelControlSingleBoneOnlyScale
// 0x0004 (0x00F0 - 0x00EC)
class UEFSkelControlSingleBoneOnlyScale : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkelControlSingleBoneOnlyScale");
		return ptr;
	}

};


// Class EFGame.EFTable
// 0x004C (0x00A4 - 0x0058)
class UEFTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0058(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTable");
		return ptr;
	}

};


// Class EFGame.EFCameraBase
// 0x0050 (0x00A8 - 0x0058)
class UEFCameraBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraBase");
		return ptr;
	}


	void GetCurrentFOV();
	void GetDefaultFOV();
	void SetDefaultFOV();
	void DisplayDebug();
	void UpdateRotation();
	void SetCurrentCameraCut();
	void SetContentsSettingTable();
	void SetSettingTable();
	void InActivateSkeletalMeshForceLOD();
	void STATIC_ActivateSkeletalMeshForceLOD();
	void STATIC_ChangeZoomStep();
	void STATIC_CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void BecomeViewTarget();
	void UpdateCamera();
	void STATIC_ResetInterpolation();
	void OnBecomeInActive();
	void OnBecomeActive();
	void Init();
};


// Class EFGame.EFBackViewCamera
// 0x0010 (0x00B8 - 0x00A8)
class UEFBackViewCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBackViewCamera");
		return ptr;
	}


	void UpdateCamera();
};


// Class EFGame.EFCustomizingCamera
// 0x001C (0x00C4 - 0x00A8)
class UEFCustomizingCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00A8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCustomizingCamera");
		return ptr;
	}


	void UpdateCamera();
	void ZoomOut();
	void ZoomIn();
	void Init();
};


// Class EFGame.EFEditorViewCamera
// 0x0044 (0x00EC - 0x00A8)
class UEFEditorViewCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x00A8(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEditorViewCamera");
		return ptr;
	}


	void OnBecomeInActive();
	void OnBecomeActive();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera();
};


// Class EFGame.EFFreeCamera
// 0x004C (0x00F4 - 0x00A8)
class UEFFreeCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00A8(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFFreeCamera");
		return ptr;
	}


	void OnBecomeInActive();
	void OnBecomeActive();
	void HideOwnerPlayer();
	void ShowOwnerPlayer();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera();
};


// Class EFGame.EFInteractionCamera
// 0x0000 (0x00A8 - 0x00A8)
class UEFInteractionCamera : public UEFCameraBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInteractionCamera");
		return ptr;
	}


	void UpdateCamera();
	void GetCurrentFOV();
};


// Class EFGame.EFIsometricCamera
// 0x00A4 (0x014C - 0x00A8)
class UEFIsometricCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00A8(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFIsometricCamera");
		return ptr;
	}


	void SetOverrideIsometricZoomStep();
	void SetFixedCameraInterpSpeed();
	void IsFixedCameraMode();
	void ResetFixedCamera();
	void SetFixedLookAtPos();
	void SetCurIsometricZoomStep();
	void UpdateCamera();
	void OnBecomeActive();
	void SetContentsSettingTable();
	void SetSettingTable();
	void RefineFOV();
	void InActivateSkeletalMeshForceLOD();
	void STATIC_ActivateSkeletalMeshForceLOD();
	void STATIC_ChangeZoomStep();
	void STATIC_CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void STATIC_ResetInterpolation();
};


// Class EFGame.EFMacroCamera
// 0x0080 (0x0128 - 0x00A8)
class UEFMacroCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCamera");
		return ptr;
	}


	void UpdateRotation();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera();
};


// Class EFGame.EFPanningCamera
// 0x005C (0x0104 - 0x00A8)
class UEFPanningCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x00A8(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPanningCamera");
		return ptr;
	}


	void OnBecomeInActive();
	void OnBecomeActive();
	void STATIC_EndPanningCamera();
	void StartPanningCamera();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera();
};


// Class EFGame.EFThirdPersonCamera
// 0x0008 (0x00B0 - 0x00A8)
class UEFThirdPersonCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFThirdPersonCamera");
		return ptr;
	}


	void UpdateRotation();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera();
	void GetCurrentFOV();
};


// Class EFGame.EFTopViewCamera
// 0x0024 (0x00CC - 0x00A8)
class UEFTopViewCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00A8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTopViewCamera");
		return ptr;
	}


	void UpdateCamera();
	void OnBecomeInActive();
	void OnBecomeActive();
	void ProcessInActivateCameraType();
	void ProcessActivateCameraType();
	void SetContentsSettingTable();
	void SetSettingTable();
	void InActivateSkeletalMeshForceLOD();
	void STATIC_ActivateSkeletalMeshForceLOD();
	void STATIC_ChangeZoomStep();
	void STATIC_CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void STATIC_ResetInterpolation();
};


// Class EFGame.EFTPSCamera
// 0x0080 (0x0128 - 0x00A8)
class UEFTPSCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTPSCamera");
		return ptr;
	}


	void SetFixedCameraInterpSpeed();
	void IsFixedCameraMode();
	void ResetFixedCamera();
	void SetFixedLookAtPos();
	void UpdateCamera();
	void OnBecomeActive();
	void SetContentsSettingTable();
	void SetSettingTable();
	void InActivateSkeletalMeshForceLOD();
	void STATIC_ActivateSkeletalMeshForceLOD();
	void STATIC_ChangeZoomStep();
	void STATIC_CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void STATIC_ResetInterpolation();
};


// Class EFGame.EFWatchCamera
// 0x0030 (0x00D8 - 0x00A8)
class UEFWatchCamera : public UEFCameraBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFWatchCamera");
		return ptr;
	}


	void SetFixedLookAtPos();
	void SetWatchCameraType();
	void UpdateCamera();
	void OnBecomeActive();
	void ZoomOut();
	void ZoomIn();
};


// Class EFGame.EFCameraModifier_CameraShake
// 0x000C (0x0098 - 0x008C)
class UEFCameraModifier_CameraShake : public UCameraModifier_CameraShake
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x008C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraModifier_CameraShake");
		return ptr;
	}


	void STATIC_AddCameraShakeGame();
	void RemoveGameCameraShake();
	void OnRemoveGameCameraShake();
	void OnAddGameCameraShake();
	void STATIC_ModifyCamera();
	void RemoveAllEFViewShakes();
	void RemoveEFViewShake();
	void STATIC_AddEFCameraViewShake();
	void STATIC_RemoveAllCameraShakes();
};


// Class EFGame.EFCameraShakePlayGroup
// 0x0018 (0x0070 - 0x0058)
class UEFCameraShakePlayGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraShakePlayGroup");
		return ptr;
	}


	void STATIC_UpdateViewShake();
	void PreUpdateViewShake();
	void RemoveAllViewShake();
	void RemoveViewShake();
	void STATIC_AddViewShakeInstance();
	void STATIC_AddViewShake();
};


// Class EFGame.EFCameraViewShake
// 0x006C (0x00C4 - 0x0058)
class UEFCameraViewShake : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0058(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraViewShake");
		return ptr;
	}


	void GetAmplitudeSize();
};


// Class EFGame.EFCameraViewShakeAnim
// 0x0020 (0x0078 - 0x0058)
class UEFCameraViewShakeAnim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraViewShakeAnim");
		return ptr;
	}

};


// Class EFGame.EFInputRotCameraActor
// 0x003C (0x048C - 0x0450)
class AEFInputRotCameraActor : public ACameraActor
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0450(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInputRotCameraActor");
		return ptr;
	}


	void STATIC_GetCameraView();
	void EndViewTarget();
	void BecomeViewTarget();
	void STATIC_ActivateInputRotMode();
};


// Class EFGame.EFInterpGroupMacroCamera
// 0x0000 (0x00A0 - 0x00A0)
class UEFInterpGroupMacroCamera : public UInterpGroupDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpGroupMacroCamera");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackMacroCamera
// 0x0018 (0x00D0 - 0x00B8)
class UEFInterpTrackMacroCamera : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackMacroCamera");
		return ptr;
	}

};


// Class EFGame.EFMacroCameraActor
// 0x001C (0x046C - 0x0450)
class AEFMacroCameraActor : public ACameraActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0450(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCameraActor");
		return ptr;
	}

};


// Class EFGame.EFMacroCameraSplineActor
// 0x008C (0x04F8 - 0x046C)
class AEFMacroCameraSplineActor : public AEFMacroCameraActor
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x046C(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCameraSplineActor");
		return ptr;
	}


	void BreakAllConnections();
	void BreakConnectionTo();
	void STATIC_IsConnectedTo();
	void AddConnectionTo();
	void UpdateConnectedSplineComponents();
	void UpdateSplineComponents();
};


// Class EFGame.EFMacroCameraComponent
// 0x0000 (0x0284 - 0x0284)
class UEFMacroCameraComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCameraComponent");
		return ptr;
	}

};


// Class EFGame.EFPlayerCamera
// 0x0170 (0x0744 - 0x05D4)
class AEFPlayerCamera : public ACamera
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x05D4(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerCamera");
		return ptr;
	}


	void LoadOutlineData();
	void STATIC_UpdateTranslucentActorBlend();
	void STATIC_UpdateOccludedActorBlend();
	void DisplayDebug();
	void FOV();
	void AdjustViewportFOV();
	void SaveCameraValue();
	void SetCameraType();
	void UpdateRotation();
	void ZoomOut();
	void ZoomIn();
	void UpdateViewTarget();
	void DoUpdateCamera();
	void ProcessTestInputCameraActor();
	void RestoreCameraMode();
	void STATIC_ChangeCameraMode();
	void STATIC_ChangeCameraContentsSetting();
	void STATIC_ChangeCameraZoomStep();
	void STATIC_ChangeCameraSetting();
	void STATIC_ApplyVehicleFOVAngle();
	void SetVehicleFOVAngle();
	void STATIC_ApplyCamOverrideFogSetting();
	void ProcessTargetCameraActorBlend();
	void ResetAttachCameraActor();
	void STATIC_FindBestCameraType();
	void GetCurrentCameraMode();
	void STATIC_CreateCamera();
	void PostBeginPlay();
	void GetFOV();
	void GetCameraDistance();
	void Destroyed();
	void STATIC_CalcVerticalFOV();
};


// Class EFGame.EFSimpleCameraShake
// 0x0000 (0x00D8 - 0x00D8)
class UEFSimpleCameraShake : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSimpleCameraShake");
		return ptr;
	}

};


// Class EFGame.EFActionParticleData
// 0x0024 (0x007C - 0x0058)
class UEFActionParticleData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0058(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionParticleData");
		return ptr;
	}

};


// Class EFGame.EFBeamActionBase
// 0x0000 (0x0058 - 0x0058)
class UEFBeamActionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBeamActionBase");
		return ptr;
	}

};


// Class EFGame.EFBeamActionDirection
// 0x02CC (0x0324 - 0x0058)
class UEFBeamActionDirection : public UEFBeamActionBase
{
public:
	unsigned char                                      UnknownData00[0x2CC];                                     // 0x0058(0x02CC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBeamActionDirection");
		return ptr;
	}

};


// Class EFGame.EFBeamActionSelf
// 0x003C (0x0094 - 0x0058)
class UEFBeamActionSelf : public UEFBeamActionBase
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0058(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBeamActionSelf");
		return ptr;
	}

};


// Class EFGame.EFBeamActionTargetPos
// 0x02C4 (0x031C - 0x0058)
class UEFBeamActionTargetPos : public UEFBeamActionBase
{
public:
	unsigned char                                      UnknownData00[0x2C4];                                     // 0x0058(0x02C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBeamActionTargetPos");
		return ptr;
	}

};


// Class EFGame.EFDistributionFloatMultiplyParticleParameter
// 0x0003 (0x0094 - 0x0091)
class UEFDistributionFloatMultiplyParticleParameter : public UDistributionFloatParameterBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDistributionFloatMultiplyParticleParameter");
		return ptr;
	}

};


// Class EFGame.EFDistributionVectorMultiplyParticleParameter
// 0x0001 (0x00C4 - 0x00C3)
class UEFDistributionVectorMultiplyParticleParameter : public UDistributionVectorParameterBase
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C3(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDistributionVectorMultiplyParticleParameter");
		return ptr;
	}

};


// Class EFGame.EFEffectSpawn
// 0x0010 (0x0068 - 0x0058)
class UEFEffectSpawn : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEffectSpawn");
		return ptr;
	}

};


// Class EFGame.EFEmitter
// 0x0010 (0x02B8 - 0x02A8)
class AEFEmitter : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEmitter");
		return ptr;
	}


	void STATIC_HideSelf();
	void PostBeginPlay();
};


// Class EFGame.EFEnvironmentActionEmitter
// 0x0010 (0x02C8 - 0x02B8)
class AEFEnvironmentActionEmitter : public AEFEmitter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentActionEmitter");
		return ptr;
	}


	void STATIC_ClearExtendPool();
	void OnParticleSystemFinished();
};


// Class EFGame.EFSpawnedEmitter
// 0x0000 (0x02B8 - 0x02B8)
class AEFSpawnedEmitter : public AEFEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSpawnedEmitter");
		return ptr;
	}


	void HideBecauseFinished();
	void STATIC_ClearExtendPool();
	void OnParticleSystemFinished();
};


// Class EFGame.EFEmitterPool
// 0x00B8 (0x039C - 0x02E4)
class AEFEmitterPool : public AEmitterPool
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x02E4(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEmitterPool");
		return ptr;
	}


	void STATIC_ClearPoolPSInfoComponents();
	void OnPSInfoFinished();
	void STATIC_ClearExtendPool();
};


// Class EFGame.EFEnvironmentEmitter
// 0x000C (0x02B4 - 0x02A8)
class AEFEnvironmentEmitter : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x02A8(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentEmitter");
		return ptr;
	}

};


// Class EFGame.EFGroundEffect
// 0x0030 (0x0088 - 0x0058)
class UEFGroundEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGroundEffect");
		return ptr;
	}

};


// Class EFGame.EFGroundEffectContainer
// 0x0058 (0x00B0 - 0x0058)
class UEFGroundEffectContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGroundEffectContainer");
		return ptr;
	}

};


// Class EFGame.EFLoopingEmitter
// 0x0004 (0x02AC - 0x02A8)
class AEFLoopingEmitter : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLoopingEmitter");
		return ptr;
	}

};


// Class EFGame.EFMarkEffect
// 0x0010 (0x0284 - 0x0274)
class AEFMarkEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0274(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMarkEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleDataBase
// 0x0020 (0x0078 - 0x0058)
class UEFParticleDataBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataBase");
		return ptr;
	}

};


// Class EFGame.EFParticleData
// 0x00A0 (0x0118 - 0x0078)
class UEFParticleData : public UEFParticleDataBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0078(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleData");
		return ptr;
	}

};


// Class EFGame.EFParticleDataIdentity
// 0x0058 (0x00D0 - 0x0078)
class UEFParticleDataIdentity : public UEFParticleDataBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0078(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataIdentity");
		return ptr;
	}

};


// Class EFGame.EFParticleDataSimple
// 0x0018 (0x0090 - 0x0078)
class UEFParticleDataSimple : public UEFParticleDataBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataSimple");
		return ptr;
	}

};


// Class EFGame.EFParticleDataModifier
// 0x002C (0x0084 - 0x0058)
class UEFParticleDataModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0058(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataModifier");
		return ptr;
	}

};


// Class EFGame.EFParticleDataModulePawnMaterialParam
// 0x004C (0x00A4 - 0x0058)
class UEFParticleDataModulePawnMaterialParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0058(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataModulePawnMaterialParam");
		return ptr;
	}

};


// Class EFGame.EFParticleDataModuleSoundBase
// 0x001C (0x0074 - 0x0058)
class UEFParticleDataModuleSoundBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0058(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataModuleSoundBase");
		return ptr;
	}

};


// Class EFGame.EFParticleDataModuleSingleAKEvent
// 0x000C (0x0080 - 0x0074)
class UEFParticleDataModuleSingleAKEvent : public UEFParticleDataModuleSoundBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0074(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataModuleSingleAKEvent");
		return ptr;
	}

};


// Class EFGame.EFParticleGroundData
// 0x0058 (0x00B0 - 0x0058)
class UEFParticleGroundData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleGroundData");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleAkEventBase
// 0x0000 (0x0064 - 0x0064)
class UEFParticleModuleAkEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleAkEventBase");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleAkEvent
// 0x0010 (0x0074 - 0x0064)
class UEFParticleModuleAkEvent : public UEFParticleModuleAkEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleAkEvent");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleKillLength
// 0x0028 (0x008C - 0x0064)
class UEFParticleModuleKillLength : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleKillLength");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationCircleSurface
// 0x0078 (0x00DC - 0x0064)
class UEFParticleModuleLocationCircleSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0064(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationCircleSurface");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationEmitter
// 0x0000 (0x007C - 0x007C)
class UEFParticleModuleLocationEmitter : public UParticleModuleLocationEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationEmitterDirect
// 0x000C (0x0078 - 0x006C)
class UEFParticleModuleLocationEmitterDirect : public UParticleModuleLocationEmitterDirect
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x006C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationOnGround
// 0x0058 (0x00BC - 0x0064)
class UEFParticleModuleLocationOnGround : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0064(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationOnGround");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPath
// 0x0020 (0x0084 - 0x0064)
class UEFParticleModuleLocationPath : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0064(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPath");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPrimitiveCylinderSpin
// 0x0098 (0x0148 - 0x00B0)
class UEFParticleModuleLocationPrimitiveCylinderSpin : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPrimitiveCylinderSpin");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPrimitiveCylinderSpin_Seeded
// 0x001C (0x0164 - 0x0148)
class UEFParticleModuleLocationPrimitiveCylinderSpin_Seeded : public UEFParticleModuleLocationPrimitiveCylinderSpin
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0148(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPrimitiveCylinderSpin_Seeded");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPrimitiveMesh
// 0x0008 (0x00B8 - 0x00B0)
class UEFParticleModuleLocationPrimitiveMesh : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPrimitiveMesh");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPrimitiveSphere
// 0x0024 (0x00D4 - 0x00B0)
class UEFParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00B0(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationSkelVertSurface
// 0x0028 (0x00E4 - 0x00BC)
class UEFParticleModuleLocationSkelVertSurface : public UParticleModuleLocationSkelVertSurface
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00BC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationStaticVertSurface
// 0x0028 (0x00D4 - 0x00AC)
class UEFParticleModuleLocationStaticVertSurface : public UParticleModuleLocationStaticVertSurface
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00AC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationStaticVertSurface");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleTypeDataDecal
// 0x0028 (0x008C - 0x0064)
class UEFParticleModuleTypeDataDecal : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleTypeDataDecal");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleTypeDataLight
// 0x0008 (0x006C - 0x0064)
class UEFParticleModuleTypeDataLight : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0064(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleTypeDataLight");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleVelocityOverLifetime
// 0x0028 (0x0090 - 0x0068)
class UEFParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleVortex
// 0x0040 (0x00A8 - 0x0068)
class UEFParticleModuleVortex : public UParticleModuleOrbitBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleVortex");
		return ptr;
	}

};


// Class EFGame.EFParticlePathCurve
// 0x0000 (0x0088 - 0x0088)
class UEFParticlePathCurve : public UDistributionFloatConstantCurve
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticlePathCurve");
		return ptr;
	}

};


// Class EFGame.EFParticleSystemData
// 0x00C8 (0x0120 - 0x0058)
class UEFParticleSystemData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0058(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSystemData");
		return ptr;
	}

};


// Class EFGame.EFParticleSystemType
// 0x0000 (0x0058 - 0x0058)
class UEFParticleSystemType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSystemType");
		return ptr;
	}

};


// Class EFGame.EFPickingEmitter
// 0x0004 (0x02AC - 0x02A8)
class AEFPickingEmitter : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPickingEmitter");
		return ptr;
	}


	void IsActivateEffect();
	void STATIC_DeactivateEffect();
	void STATIC_ActivateEffect();
	void OnParticleSystemFinished();
};


// Class EFGame.EFPostProcessMaterialContainer
// 0x0030 (0x0088 - 0x0058)
class UEFPostProcessMaterialContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialContainer");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffect
// 0x0039 (0x0091 - 0x0058)
class UEFPostProcessMaterialEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x39];                                      // 0x0058(0x0039) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffect");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialChaosGateEffect
// 0x0017 (0x00A8 - 0x0091)
class UEFPostProcessMaterialChaosGateEffect : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x17];                                      // 0x0091(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialChaosGateEffect");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialDeadEffect
// 0x000F (0x00A0 - 0x0091)
class UEFPostProcessMaterialDeadEffect : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0xF];                                       // 0x0091(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialDeadEffect");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffectCamera
// 0x001F (0x00B0 - 0x0091)
class UEFPostProcessMaterialEffectCamera : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0091(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffectCamera");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffectHit
// 0x0013 (0x00A4 - 0x0091)
class UEFPostProcessMaterialEffectHit : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x13];                                      // 0x0091(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffectHit");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffectSkill
// 0x003B (0x00CC - 0x0091)
class UEFPostProcessMaterialEffectSkill : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x3B];                                      // 0x0091(0x003B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffectSkill");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffectStatus
// 0x001F (0x00B0 - 0x0091)
class UEFPostProcessMaterialEffectStatus : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0091(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffectStatus");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialHPEffect
// 0x0027 (0x00B8 - 0x0091)
class UEFPostProcessMaterialHPEffect : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x27];                                      // 0x0091(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialHPEffect");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialShipWreckEffect
// 0x000F (0x00A0 - 0x0091)
class UEFPostProcessMaterialShipWreckEffect : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0xF];                                       // 0x0091(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialShipWreckEffect");
		return ptr;
	}

};


// Class EFGame.EFProjectileParticleData
// 0x0030 (0x0088 - 0x0058)
class UEFProjectileParticleData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileParticleData");
		return ptr;
	}

};


// Class EFGame.EFSimpleEffect
// 0x0020 (0x0294 - 0x0274)
class AEFSimpleEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0274(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSimpleEffect");
		return ptr;
	}

};


// Class EFGame.EFSpawnEffect
// 0x0020 (0x0294 - 0x0274)
class AEFSpawnEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0274(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSpawnEffect");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_ApplyReverbVolume
// 0x0000 (0x0158 - 0x0158)
class UEFSeqAct_ApplyReverbVolume : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_ApplyReverbVolume");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_Bridge
// 0x0000 (0x0158 - 0x0158)
class UEFSeqAct_Bridge : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_Bridge");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_ChangeCullDistance
// 0x0014 (0x016C - 0x0158)
class UEFSeqAct_ChangeCullDistance : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_ChangeCullDistance");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_EndRemoteEvent
// 0x0008 (0x0160 - 0x0158)
class UEFSeqAct_EndRemoteEvent : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_EndRemoteEvent");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_GlobalCharLight
// 0x0000 (0x0158 - 0x0158)
class UEFSeqAct_GlobalCharLight : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_GlobalCharLight");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_Matinee
// 0x0031 (0x029D - 0x026C)
class UEFSeqAct_Matinee : public USeqAct_Interp
{
public:
	unsigned char                                      UnknownData00[0x31];                                      // 0x026C(0x0031) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_Matinee");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_MovePlayer
// 0x0018 (0x0170 - 0x0158)
class UEFSeqAct_MovePlayer : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_MovePlayer");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_NPCController
// 0x00E8 (0x0258 - 0x0170)
class UEFSeqAct_NPCController : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0170(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_NPCController");
		return ptr;
	}


	void Update();
	void Activated();
	void STATIC_BackupMainMovingState();
	void SetEventMoveCompleteProcess();
	void SetMoving();
	void SettingReady();
	void setPlayWaitAnimation();
	void setPlayAnimation();
	void GetAnimationName();
	void initial();
};


// Class EFGame.EFSeqAct_PlayCameraAnim
// 0x0000 (0x0180 - 0x0180)
class UEFSeqAct_PlayCameraAnim : public USeqAct_PlayCameraAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_PlayCameraAnim");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_PlaySwf
// 0x0018 (0x0170 - 0x0158)
class UEFSeqAct_PlaySwf : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_PlaySwf");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_SetRagdoll
// 0x0034 (0x018C - 0x0158)
class UEFSeqAct_SetRagdoll : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0158(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetRagdoll");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_SetWorldGravityZ
// 0x0004 (0x015C - 0x0158)
class UEFSeqAct_SetWorldGravityZ : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetWorldGravityZ");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_StopParticle
// 0x0004 (0x015C - 0x0158)
class UEFSeqAct_StopParticle : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_StopParticle");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_UIWindowClientEvent
// 0x0014 (0x016C - 0x0158)
class UEFSeqAct_UIWindowClientEvent : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_UIWindowClientEvent");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_WeaponOnOff
// 0x0004 (0x015C - 0x0158)
class UEFSeqAct_WeaponOnOff : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_WeaponOnOff");
		return ptr;
	}

};


// Class EFGame.EFSequence
// 0x0008 (0x01BC - 0x01B4)
class UEFSequence : public USequence
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B4(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequence");
		return ptr;
	}

};


// Class EFGame.EFSeqVar_SpawnedObject
// 0x0005 (0x00F9 - 0x00F4)
class UEFSeqVar_SpawnedObject : public USeqVar_Object
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x00F4(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqVar_SpawnedObject");
		return ptr;
	}

};


// Class EFGame.EFLevelStreamingAlwaysLoaded
// 0x0000 (0x0114 - 0x0114)
class UEFLevelStreamingAlwaysLoaded : public ULevelStreamingAlwaysLoaded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class EFGame.EFLevelStreamingEditorOnly
// 0x0000 (0x0110 - 0x0110)
class UEFLevelStreamingEditorOnly : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLevelStreamingEditorOnly");
		return ptr;
	}

};


// Class EFGame.EFParticleSceneCapture2DActor
// 0x0000 (0x0284 - 0x0284)
class AEFParticleSceneCapture2DActor : public ASceneCapture2DActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSceneCapture2DActor");
		return ptr;
	}

};


// Class EFGame.EFPCSelectStart
// 0x0009 (0x027D - 0x0274)
class AEFPCSelectStart : public AActor
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0274(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPCSelectStart");
		return ptr;
	}

};


// Class EFGame.EFPlayerStart
// 0x0000 (0x039C - 0x039C)
class AEFPlayerStart : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerStart");
		return ptr;
	}

};


// Class EFGame.EFSceneCapture2DActor
// 0x0018 (0x029C - 0x0284)
class AEFSceneCapture2DActor : public ASceneCapture2DActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0284(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSceneCapture2DActor");
		return ptr;
	}

};


// Class EFGame.EFSceneCapture2DComponent
// 0x0030 (0x01A0 - 0x0170)
class UEFSceneCapture2DComponent : public USceneCapture2DComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0170(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSceneCapture2DComponent");
		return ptr;
	}

};


// Class EFGame.EFSceneCaptureObjectLocation
// 0x0014 (0x0288 - 0x0274)
class AEFSceneCaptureObjectLocation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSceneCaptureObjectLocation");
		return ptr;
	}

};


// Class EFGame.EFEnvironmentInfoData
// 0x00C4 (0x011C - 0x0058)
class UEFEnvironmentInfoData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0058(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentInfoData");
		return ptr;
	}

};


// Class EFGame.EFEnvironmentInfoVolume
// 0x0124 (0x0558 - 0x0434)
class AEFEnvironmentInfoVolume : public APostProcessVolume
{
public:
	unsigned char                                      UnknownData00[0x124];                                     // 0x0434(0x0124) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentInfoVolume");
		return ptr;
	}


	void UnTouch();
	void Touch();
	void STATIC_UpdateEnvironment();
	void STATIC_OnToggle();
};


// Class EFGame.EFLevelStreamingVolume
// 0x0010 (0x02DC - 0x02CC)
class AEFLevelStreamingVolume : public ALevelStreamingVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02CC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLevelStreamingVolume");
		return ptr;
	}

};


// Class EFGame.EFAreaNameVolume
// 0x0024 (0x02DC - 0x02B8)
class AEFAreaNameVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x02B8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAreaNameVolume");
		return ptr;
	}

};


// Class EFGame.EFCharPerfOptionOverrideVolume
// 0x0004 (0x02BC - 0x02B8)
class AEFCharPerfOptionOverrideVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCharPerfOptionOverrideVolume");
		return ptr;
	}

};


// Class EFGame.EFCoastVolume
// 0x0000 (0x02B8 - 0x02B8)
class AEFCoastVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCoastVolume");
		return ptr;
	}

};


// Class EFGame.EFDynamicBlockingVolume
// 0x0000 (0x02B8 - 0x02B8)
class AEFDynamicBlockingVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDynamicBlockingVolume");
		return ptr;
	}

};


// Class EFGame.EFDynamicVolumeBrush
// 0x0000 (0x02B8 - 0x02B8)
class AEFDynamicVolumeBrush : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDynamicVolumeBrush");
		return ptr;
	}

};


// Class EFGame.EFMatineePathNodeVolume
// 0x0060 (0x0318 - 0x02B8)
class AEFMatineePathNodeVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02B8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMatineePathNodeVolume");
		return ptr;
	}

};


// Class EFGame.EFMovingNavigationVolume
// 0x0000 (0x02B8 - 0x02B8)
class AEFMovingNavigationVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMovingNavigationVolume");
		return ptr;
	}

};


// Class EFGame.EFNamingVolume
// 0x0010 (0x02C8 - 0x02B8)
class AEFNamingVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFNamingVolume");
		return ptr;
	}

};


// Class EFGame.EFOcclusionOutlineVolume
// 0x0000 (0x02B8 - 0x02B8)
class AEFOcclusionOutlineVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFOcclusionOutlineVolume");
		return ptr;
	}

};


// Class EFGame.EFPathBlockingVolume
// 0x0000 (0x02B8 - 0x02B8)
class AEFPathBlockingVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPathBlockingVolume");
		return ptr;
	}


	void StopsProjectile();
};


// Class EFGame.EFSearchPathObjectVolume
// 0x0000 (0x02B8 - 0x02B8)
class AEFSearchPathObjectVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSearchPathObjectVolume");
		return ptr;
	}

};


// Class EFGame.EFSightVolume
// 0x0000 (0x02B8 - 0x02B8)
class AEFSightVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSightVolume");
		return ptr;
	}

};


// Class EFGame.EFSoundMusicVolume
// 0x0024 (0x02DC - 0x02B8)
class AEFSoundMusicVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x02B8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSoundMusicVolume");
		return ptr;
	}

};


// Class EFGame.EFSoundAmbientVolume
// 0x0000 (0x02DC - 0x02DC)
class AEFSoundAmbientVolume : public AEFSoundMusicVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSoundAmbientVolume");
		return ptr;
	}

};


// Class EFGame.EFSoundReverbVolume
// 0x0028 (0x02E0 - 0x02B8)
class AEFSoundReverbVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSoundReverbVolume");
		return ptr;
	}

};


// Class EFGame.EFTranslucentVolume
// 0x0004 (0x02BC - 0x02B8)
class AEFTranslucentVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTranslucentVolume");
		return ptr;
	}

};


// Class EFGame.EFCursorData
// 0x03B4 (0x040C - 0x0058)
class UEFCursorData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3B4];                                     // 0x0058(0x03B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCursorData");
		return ptr;
	}

};


// Class EFGame.EFGFxDataProvider
// 0x0000 (0x00AC - 0x00AC)
class UEFGFxDataProvider : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxDataProvider");
		return ptr;
	}

};


// Class EFGame.EFGFxMoviePlayer
// 0x001C (0x0208 - 0x01EC)
class UEFGFxMoviePlayer : public UGFxMoviePlayer
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01EC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxMoviePlayer");
		return ptr;
	}


	void GetStringINI();
	void SetStringINI();
	void STATIC_CreateArrayEx();
	void STATIC_CreateObjectEx();
	void STATIC_PostAdvance();
	void WidgetUnloaded();
	void WidgetInitialized();
};


// Class EFGame.EFGFxEditorMoviePlayer
// 0x0000 (0x0208 - 0x0208)
class UEFGFxEditorMoviePlayer : public UEFGFxMoviePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxEditorMoviePlayer");
		return ptr;
	}


	void Start();
};


// Class EFGame.EFGFxMovieWidget
// 0x0010 (0x0218 - 0x0208)
class UEFGFxMovieWidget : public UEFGFxMoviePlayer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxMovieWidget");
		return ptr;
	}


	void GetExternalTexture();
	void HasGFxObjectBinding();
	void STATIC_DelGFxObjectBinding();
	void STATIC_AddGFxObjectBinding();
	void STATIC_SetVisible();
	void GFxFristFrameCallback();
	void PostWidgetInit();
	void Start();
};


// Class EFGame.EFGFxMovieWidgetMain
// 0x0000 (0x0218 - 0x0218)
class UEFGFxMovieWidgetMain : public UEFGFxMovieWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxMovieWidgetMain");
		return ptr;
	}


	void ActivateFrame();
	void STATIC_ARKSlotMouseDoubleClick();
	void STATIC_ARKSlotMouseRightClick();
	void STATIC_ARKSlotMouseLeftClick();
	void STATIC_ClearBindWidgetByName();
	void STATIC_ClearBindWidgetByWidget();
	void STATIC_UnBindWidget();
	void STATIC_BindWidget();
	void WidgetUnloaded();
	void WidgetInitialized();
};


// Class EFGame.EFSwfMovie
// 0x0014 (0x00F8 - 0x00E4)
class UEFSwfMovie : public USwfMovie
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSwfMovie");
		return ptr;
	}

};


// Class EFGame.EFUIComponent
// 0x0000 (0x00BC - 0x00BC)
class UEFUIComponent : public UGFxClikWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIComponent");
		return ptr;
	}


	void InvalidateSize();
	void InvalidateData();
	void Invalidate();
	void STATIC_ValidateNow();
	void HasFocus();
	void GetY();
	void SetY();
	void GetX();
	void SetX();
	void GetHeight();
	void SetHeight();
	void GetWidth();
	void SetWidth();
	void GetEnabled();
	void SetEnabled();
	void GetVisible();
	void STATIC_SetVisible();
	void GetName();
	void STATIC_SetName();
	void WidgetInitialized();
};


// Class EFGame.EFUIControl
// 0x0000 (0x00BC - 0x00BC)
class UEFUIControl : public UEFUIComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIControl");
		return ptr;
	}

};


// Class EFGame.EFUIBuffManager
// 0x0000 (0x00BC - 0x00BC)
class UEFUIBuffManager : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIBuffManager");
		return ptr;
	}

};


// Class EFGame.EFUIButton
// 0x0000 (0x00BC - 0x00BC)
class UEFUIButton : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIButton");
		return ptr;
	}

};


// Class EFGame.EFUICheckBox
// 0x0000 (0x00BC - 0x00BC)
class UEFUICheckBox : public UEFUIButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUICheckBox");
		return ptr;
	}

};


// Class EFGame.EFUIComboBox
// 0x0000 (0x00BC - 0x00BC)
class UEFUIComboBox : public UEFUIButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIComboBox");
		return ptr;
	}

};


// Class EFGame.EFUISlot
// 0x0008 (0x00C4 - 0x00BC)
class UEFUISlot : public UEFUIButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00BC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlot");
		return ptr;
	}


	void SetItemData();
	void SetDisableType();
	void SetUniqueData();
	void GetUniqueData();
	void SetLocked();
	void IsLocked();
	void SetItemGrade();
	void GetItemGrade();
	void SetSoundTheme();
	void GetSoundTheme();
	void SetDisabled();
	void STATIC_IsDisabled();
	void SetCooltime();
	void GetTotalCoolTime();
	void GetRemainCoolTime();
	void SetIconHeight();
	void GetIconHeight();
	void SetIconWidth();
	void GetIconWidth();
	void SetIconY();
	void GetIconY();
	void SetIconX();
	void GetIconX();
	void SetIconCount();
	void GetIconCount();
	void SetIconPath();
	void GetIconPath();
	void SetWindowType();
	void GetWindowType();
	void SetSlotIndex();
	void GetSlotIndex();
	void SetBindID();
	void GetBindID();
	void SetSlotType();
	void GetSlotType();
	void SetIconData();
	void GetSlotItemData();
};


// Class EFGame.EFUIChatTabControl
// 0x0004 (0x00C0 - 0x00BC)
class UEFUIChatTabControl : public UEFUIControl
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIChatTabControl");
		return ptr;
	}


	void STATIC_ChatLogInputSelectType();
	void STATIC_ChatLogMainWidgetTabInsertGroup();
	void STATIC_ChatLogInTabGroupElementStartDrag();
	void STATIC_ChatLogLinkClick();
	void STATIC_ChatLogTabContextMenuShow();
	void STATIC_ChatLogMainWidgetSizeUpdated();
};


// Class EFGame.EFUIComponentContainer
// 0x0000 (0x00BC - 0x00BC)
class UEFUIComponentContainer : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIComponentContainer");
		return ptr;
	}

};


// Class EFGame.EFUIDynamicList
// 0x0000 (0x00BC - 0x00BC)
class UEFUIDynamicList : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIDynamicList");
		return ptr;
	}

};


// Class EFGame.EFUIFactory
// 0x0000 (0x00BC - 0x00BC)
class UEFUIFactory : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIFactory");
		return ptr;
	}

};


// Class EFGame.EFUIGradientLabel
// 0x0000 (0x00BC - 0x00BC)
class UEFUIGradientLabel : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIGradientLabel");
		return ptr;
	}

};


// Class EFGame.EFUIIcon
// 0x0000 (0x00BC - 0x00BC)
class UEFUIIcon : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIIcon");
		return ptr;
	}

};


// Class EFGame.EFUISlot2
// 0x0000 (0x00BC - 0x00BC)
class UEFUISlot2 : public UEFUIIcon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlot2");
		return ptr;
	}

};


// Class EFGame.EFUILabel
// 0x0000 (0x00BC - 0x00BC)
class UEFUILabel : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUILabel");
		return ptr;
	}

};


// Class EFGame.EFUIList
// 0x0008 (0x00C4 - 0x00BC)
class UEFUIList : public UEFUIControl
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00BC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIList");
		return ptr;
	}


	void SetSelectedIndex();
	void GetSelectedIndex();
	void GetData();
};


// Class EFGame.EFUISlotManager
// 0x0000 (0x00C4 - 0x00C4)
class UEFUISlotManager : public UEFUIList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlotManager");
		return ptr;
	}

};


// Class EFGame.EFUISlotManager2
// 0x0000 (0x00C4 - 0x00C4)
class UEFUISlotManager2 : public UEFUIList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlotManager2");
		return ptr;
	}

};


// Class EFGame.EFUITree
// 0x0000 (0x00C4 - 0x00C4)
class UEFUITree : public UEFUIList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITree");
		return ptr;
	}

};


// Class EFGame.EFUIListItem
// 0x0010 (0x00CC - 0x00BC)
class UEFUIListItem : public UEFUIControl
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00BC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIListItem");
		return ptr;
	}


	void HasAttribute();
};


// Class EFGame.EFUIListItemSlot
// 0x0000 (0x00CC - 0x00CC)
class UEFUIListItemSlot : public UEFUIListItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIListItemSlot");
		return ptr;
	}


	void SetTownShow();
	void SetFriendshipShow();
	void SetAdvBookShow();
	void SetTemporary();
	void SetTrash();
	void SetDisableType();
	void SetTableID();
	void GetTableID();
	void SetUniqueData();
	void GetUniqueData();
	void SetLocked();
	void IsLocked();
	void SetItemGrade();
	void GetItemGrade();
	void SetSoundTheme();
	void GetSoundTheme();
	void SetDisabled();
	void STATIC_IsDisabled();
	void SetItemName();
	void STATIC_GetItemName();
	void SetLabel();
	void GetLabel();
	void SetCooltime();
	void GetTotalCoolTime();
	void GetRemainCoolTime();
	void SetIconHeight();
	void GetIconHeight();
	void SetIconWidth();
	void GetIconWidth();
	void SetIconY();
	void GetIconY();
	void SetIconX();
	void GetIconX();
	void SetIconCount();
	void GetIconCount();
	void SetIconPath();
	void GetIconPath();
	void SetWindowType();
	void GetWindowType();
	void SetSlotIndex();
	void GetSlotIndex();
	void SetBindID();
	void GetBindID();
	void SetSlotType();
	void GetSlotType();
	void SetIconData();
};


// Class EFGame.EFUINumericStepper
// 0x0000 (0x00BC - 0x00BC)
class UEFUINumericStepper : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUINumericStepper");
		return ptr;
	}

};


// Class EFGame.EFUIProgress
// 0x0000 (0x00BC - 0x00BC)
class UEFUIProgress : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIProgress");
		return ptr;
	}

};


// Class EFGame.EFUITimingBar
// 0x0000 (0x00BC - 0x00BC)
class UEFUITimingBar : public UEFUIProgress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITimingBar");
		return ptr;
	}

};


// Class EFGame.EFUIScrollBar
// 0x0000 (0x00BC - 0x00BC)
class UEFUIScrollBar : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIScrollBar");
		return ptr;
	}

};


// Class EFGame.EFUIScrollView
// 0x0000 (0x00BC - 0x00BC)
class UEFUIScrollView : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIScrollView");
		return ptr;
	}

};


// Class EFGame.EFUIMinimapView
// 0x0000 (0x00BC - 0x00BC)
class UEFUIMinimapView : public UEFUIScrollView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIMinimapView");
		return ptr;
	}

};


// Class EFGame.EFUISlider
// 0x0000 (0x00BC - 0x00BC)
class UEFUISlider : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlider");
		return ptr;
	}

};


// Class EFGame.EFUITextField
// 0x0000 (0x00BC - 0x00BC)
class UEFUITextField : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITextField");
		return ptr;
	}

};


// Class EFGame.EFUITextInput
// 0x0000 (0x00BC - 0x00BC)
class UEFUITextInput : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITextInput");
		return ptr;
	}

};


// Class EFGame.EFUITextArea
// 0x0000 (0x00BC - 0x00BC)
class UEFUITextArea : public UEFUITextInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITextArea");
		return ptr;
	}

};


// Class EFGame.EFUIWindowContent
// 0x0000 (0x00BC - 0x00BC)
class UEFUIWindowContent : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIWindowContent");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetAchievement
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetAchievement : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetAchievement");
		return ptr;
	}


	void STATIC_AchievementRewardTakeBtnClick();
};


// Class EFGame.EFGFxWidgetAnchorModeCrew
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetAnchorModeCrew : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetAnchorModeCrew");
		return ptr;
	}


	void STATIC_AnchorCrewSkillSlotClick();
	void STATIC_AnchorCrewPageIndexChanged();
};


// Class EFGame.EFGFxWidgetBuddy
// 0x0010 (0x00CC - 0x00BC)
class UEFGFxWidgetBuddy : public UEFUIWindowContent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00BC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetBuddy");
		return ptr;
	}


	void showNew();
	void setSelectedTab();
	void setAFK();
	void STATIC_FriendsGroupRendererMouseOver();
	void STATIC_FriendsGroupRendererRightClick();
	void STATIC_FriendsGroupRendererExtended();
	void STATIC_FriendsRendererRightClick();
	void STATIC_FriendsInvite();
	void STATIC_FriendsBlock();
	void STATIC_FriendsUnBlock();
	void STATIC_FriendsBuddyCancel();
	void STATIC_FriendsBuddyReject();
	void STATIC_FriendsBuddyAgree();
};


// Class EFGame.EFGFxWidgetCandidate
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetCandidate : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCandidate");
		return ptr;
	}


	void SetCandidateFocus();
};


// Class EFGame.EFGFxWidgetChattingOption
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetChattingOption : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetChattingOption");
		return ptr;
	}


	void SetChannelColor();
	void STATIC_ChatLogFilterOptionAddTab();
	void STATIC_ChatLogFilterOptionOKWnd();
	void STATIC_ChatLogFilterOptionResetData();
	void STATIC_ChatLogFilterOptionAppliedChannelList();
};


// Class EFGame.EFGFxWidgetCinematicDungeonEntrance
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetCinematicDungeonEntrance : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCinematicDungeonEntrance");
		return ptr;
	}


	void STATIC_DungeonEntranceDifficultyIndex();
};


// Class EFGame.EFGFxWidgetColorPicker
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetColorPicker : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetColorPicker");
		return ptr;
	}


	void SetTargetPosition();
	void SetTargetCode();
	void STATIC_SetColor();
	void SetDefaultColor();
	void RequestEventColorPickerCursorDragEnd();
	void RequestEventColorPickerProgressValueChange();
	void STATIC_ChatMessageInputTextHasFocus();
	void RequestARKColorPickerDefaultSetting();
	void RequestARKColorPickerSaveSetting();
	void RequestARKColorPickerClose();
};


// Class EFGame.EFGFxWidgetCurrencyInfo
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetCurrencyInfo : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCurrencyInfo");
		return ptr;
	}


	void STATIC_CurrencyInfoTreeItemClick();
};


// Class EFGame.EFGFxWidgetCustomColorPicker
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetCustomColorPicker : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCustomColorPicker");
		return ptr;
	}


	void SetTargetPosition();
	void SetTargetCode();
	void STATIC_SetColor();
	void SetInit();
	void STATIC_ColorPickerColorChanged();
	void STATIC_ColorPickerLightnessChanged();
	void RequestARKColorPickerDefaultSetting();
	void RequestARKColorPickerSaveSetting();
	void RequestARKColorPickerClose();
};


// Class EFGame.EFGFxWidgetFriendship
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetFriendship : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetFriendship");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetGuild
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetGuild : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetGuild");
		return ptr;
	}


	void GuildApplicantRightClick();
	void GuildMemberRightClick();
	void GuildReject();
	void GuildAccept();
	void GuildNoticeCopyButtonClick();
	void GuildChangeGuildIntroduction();
	void GuildChangeGuildNotice();
	void GuildChangeBtnClick();
	void GuildChangeGuildMark();
	void GuildCreate();
	void GuildCancel();
	void GuildApply();
};


// Class EFGame.EFGFxWidgetHotKey
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetHotKey : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHotKey");
		return ptr;
	}


	void killOptionKey();
	void selectOptionHotKeyMainMenu();
	void OptionHotKeyCloseBtnClick();
	void OptionHotKeyKillFocus();
	void OptionHotKeyCancelClick();
	void OptionHotKeyAcceptClick();
	void OptionHotKeyConfirmClick();
	void OptionHotKeyResetClick();
	void OptionHotKeyButtonChange();
	void OptionHotKeyMainListIndexChange();
};


// Class EFGame.EFGFxWidgetInstanceDungeonEntrance
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInstanceDungeonEntrance : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInstanceDungeonEntrance");
		return ptr;
	}


	void STATIC_DungeonEntranceDifficultyIndex();
};


// Class EFGame.EFGFxWidgetInteractionAbility_Refine
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionAbility_Refine : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionAbility_Refine");
		return ptr;
	}


	void InteractionMarbleStoneRollOut();
	void InteractionMarbleStoneRollOver();
	void STATIC_ChangeCursor();
	void InteractionMarbleStoneClick();
	void InteractionMarbleChangeTabClick();
	void InteractionMarbleStoneSelected();
};


// Class EFGame.EFGFxWidgetInteractionBarter
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionBarter : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionBarter");
		return ptr;
	}


	void STATIC_BarterShopPurchaseItem();
};


// Class EFGame.EFGFxWidgetInteractionColosseum
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionColosseum : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionColosseum");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetInteractionMail
// 0x0068 (0x0124 - 0x00BC)
class UEFGFxWidgetInteractionMail : public UEFUIWindowContent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00BC(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionMail");
		return ptr;
	}


	void SetNextSlotDisable();
	void STATIC_ASSetNextSlotDisable();
	void SetNextSlotEnable();
	void STATIC_ASSetNextSlotEnable();
	void SetMailOpenType();
	void SetOpenType();
	void StopLoading();
	void StructReceiverCacheData();
	void STATIC_AddReceiverData();
};


// Class EFGame.EFGFxWidgetInteractionShop
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionShop : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionShop");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetInteractionWarehouse
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionWarehouse : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionWarehouse");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetInventory
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInventory : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInventory");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetItemAssembly
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetItemAssembly : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetItemAssembly");
		return ptr;
	}


	void ItemCraftAlarmEffectLuckyPlayEnd();
};


// Class EFGame.EFGFxWidgetItemDisassembly
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetItemDisassembly : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetItemDisassembly");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetLifeSkill
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetLifeSkill : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetLifeSkill");
		return ptr;
	}


	void LifeLevelNoramlSkillClick();
	void LifeLevelMasterSkillPlusClick();
	void LifeLevelMasterSkillMinusClick();
	void LifeLevelPointPlusClick();
	void LifeLevelPointMinusClick();
	void LifeLevelGuideBtnClick();
	void LifeLevelGuideClosed();
	void OnLifeNoramlSkillClick();
	void OnLifeMasterSkillPlusClick();
	void OnLifeMasterSkillMinusClick();
	void OnLifePointPlusClick();
	void OnLifePointMinusClick();
	void LifeLevelGuide();
	void OnLifeLevelGuideClosed();
	void OpenLifeLevelGuideUI();
	void OpenLifeLevelGuide();
	void SetNoSkillUI();
	void SetNoSkill();
};


// Class EFGame.EFGFxWidgetMap
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMap : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMap");
		return ptr;
	}


	void RequestResetMapRotation();
	void RequestWorldMapUpperDepth();
	void STATIC_WorldMapZoneIndex();
	void STATIC_WorldMapContinentType();
};


// Class EFGame.EFGFxWidgetMarket
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMarket : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMarket");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetMOD_BossRush
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMOD_BossRush : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMOD_BossRush");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetMOD_Tower
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMOD_Tower : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMOD_Tower");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetMODWatingInfo
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMODWatingInfo : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMODWatingInfo");
		return ptr;
	}


	void MinimapAlarmListRightBtnClick();
};


// Class EFGame.EFGFxWidgetMoviePlayer
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMoviePlayer : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMoviePlayer");
		return ptr;
	}


	void STATIC_TestLabSendInputMessage();
};


// Class EFGame.EFGFxWidgetNormalBox
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetNormalBox : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetNormalBox");
		return ptr;
	}


	void NormalBoxItemSelected();
};


// Class EFGame.EFGFxWidgetNoticeMOD
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetNoticeMOD : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetNoticeMOD");
		return ptr;
	}


	void NoticeModWaitListItemClick();
};


// Class EFGame.EFGFxWidgetQuestJournal
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetQuestJournal : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetQuestJournal");
		return ptr;
	}


	void SetMaxTreeItemCheckNumber();
	void SetMaxQuestCheckNumber();
	void STATIC_ARKQuestTraceButtonClicked();
	void OnClicked_TraceQuestButton();
	void QuestJournalTreeItemListOverPool();
	void OnCheckedTreeItemOverPool();
	void STATIC_ARKQuestGiveUpButtonClicked();
	void OnClicked_GiveUpButton();
	void QuestJournalTreeItemMultiCheck();
	void OnChecked_QuestTreeItem();
};


// Class EFGame.EFGFxWidgetQuestSummary
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetQuestSummary : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetQuestSummary");
		return ptr;
	}


	void OnHide();
	void OnHideQuestSummary();
	void STATIC_ARKQuestSelectedRewardItem();
	void OnClicked_SelectChoiceItem();
	void STATIC_ARKQuestCompleteButtonClicked();
	void OnClicked_CompleteButton();
	void STATIC_ARKQuestAcceptButtonClicked();
	void OnClicked_AcceptButton();
	void SelectChoiceRewardItem();
	void SetSelectedIndex_ChoiceRewardItem();
};


// Class EFGame.EFGFxWidgetRandomBox
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetRandomBox : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRandomBox");
		return ptr;
	}


	void Init();
	void startAni();
	void RandomBoxComplete();
	void RandomBoxClosed();
};


// Class EFGame.EFGFxWidgetSelectBox
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetSelectBox : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetSelectBox");
		return ptr;
	}


	void SelectBoxItemReceiveAll();
	void SelectBoxItemSelected();
};


// Class EFGame.EFGFxWidgetSkillBook
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetSkillBook : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetSkillBook");
		return ptr;
	}


	void closePreset();
	void openPreset();
	void cancelSelection();
	void SkillBookPresetUnlock();
	void SkillBookPresetApply();
	void SkillBookPresetSelected();
	void SkillBookInitCancel();
	void SkillBookInitConfirm();
	void SkillBookPresetEdit();
	void SkillBookListSelected();
	void SkillBookTierBtnClick();
	void SkillBookDownBtnClick();
	void SkillBookUpBtnClick();
};


// Class EFGame.EFGFxWidgetSocialSkill
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetSocialSkill : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetSocialSkill");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetSystemOption
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetSystemOption : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetSystemOption");
		return ptr;
	}


	void STATIC_SystemOptionButtonClickHandler();
	void STATIC_SystemOptionListIndexChange();
	void OpenChattingOptionColorPicker();
	void OptionHotKeyKillFocus();
	void OptionHotKeyButtonChange();
	void STATIC_SystemOptionWndCloseButtonClicked();
	void STATIC_SystemOptionChangedSlider();
	void STATIC_SystemOptionSelectedComboBox();
	void STATIC_SystemOptionSelectedCheckBox();
};


// Class EFGame.EFGFxWidgetTrophyAuction
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetTrophyAuction : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetTrophyAuction");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetUnLockBox
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetUnLockBox : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetUnLockBox");
		return ptr;
	}


	void STATIC_UnlockBoxItemComplete();
	void STATIC_UnlockBoxItemClosed();
};


// Class EFGame.EFGFxWidgetUserTrade
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetUserTrade : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetUserTrade");
		return ptr;
	}


	void SetOtherTradeReady();
	void STATIC_ASSetOtherTradeReady();
	void SetMyTradeReady();
	void STATIC_ASSetMyTradeReady();
	void SetOtherTradeConfirm();
	void STATIC_ASSetOtherTradeConfirm();
	void SetMyTradeConfirm();
	void STATIC_ASSetMyTradeConfirm();
};


// Class EFGame.EFGFxWidgetVictoryCrest
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetVictoryCrest : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetVictoryCrest");
		return ptr;
	}


	void STATIC_VictoryCrestWindowConfirmBtnClick();
	void STATIC_VictoryCrestWindowExchangeBtnClick();
	void STATIC_VictoryCrestWindowUnlockBtnClick();
};


// Class EFGame.EFUIFrame
// 0x0004 (0x00C0 - 0x00BC)
class UEFUIFrame : public UEFUIComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIFrame");
		return ptr;
	}


	void WidgetInitialized();
	void Deactivate();
	void Activate();
};


// Class EFGame.EFGFxWidgetAcquireItem
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetAcquireItem : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetAcquireItem");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetAnnounce
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetAnnounce : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetAnnounce");
		return ptr;
	}


	void STATIC_AnnounceFrameMotionComplete();
	void cleanUpLayer();
	void setAnnouncePosition();
	void getAnnounceListPosition();
	void setAnnounceItemTime();
	void getAnnounceItemTime();
	void getAnnounceListItem();
	void setAnnounceTotalItem();
	void getAnnounceMaxItem();
	void getAnnounceCurrentItem();
	void addAnnounceMessage();
};


// Class EFGame.EFGFxWidgetClassPreview
// 0x0010 (0x00D0 - 0x00C0)
class UEFGFxWidgetClassPreview : public UEFUIFrame
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetClassPreview");
		return ptr;
	}


	void SetEnableResetButton();
	void SetShowType();
	void SetClassUpgradeChoiceInfo();
	void SetPlayingClassData();
	void STATIC_ClassUpgradeCancelRelease();
	void STATIC_ClassUpgradeSelectClassID();
	void STATIC_ClassUpgradeConfirmClass();
	void STATIC_ClassUpgradeReturnRelease();
	void STATIC_ClassUpgradeAddBossMonster();
	void STATIC_ClassUpgradeAddNormalMonster();
	void STATIC_ClassUpgradePlayReset();
	void RequestStopMovie();
	void RequestPlayMovieClassUpgradePreview();
	void STATIC_ClassUpgradePreviewRequestCloseWnd();
	void STATIC_ClassUpgradePreviewPlaySelectClass();
};


// Class EFGame.EFGFxWidgetColosseum_New
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetColosseum_New : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetColosseum_New");
		return ptr;
	}


	void setObserverMod();
	void setTimerPause();
	void AddItem();
	void setModType();
	void roundAnnounceShowType();
	void announceShowType();
	void setStartData();
	void setWaitData();
};


// Class EFGame.EFGFxWidgetCommon
// 0x0010 (0x00D0 - 0x00C0)
class UEFGFxWidgetCommon : public UEFUIFrame
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCommon");
		return ptr;
	}


	void SetPartyMemberValue();
	void SetCommonObjectAvailableSkip();
	void ShowCommonObjectAvailableSkip();
	void WidgetInitialized();
};


// Class EFGame.EFGFxWidgetContentsUnlock
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetContentsUnlock : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetContentsUnlock");
		return ptr;
	}


	void STATIC_ContentsUnlockCallbackTypeID();
	void OnContentsUnlockCallbackTypeID();
};


// Class EFGame.EFGFxWidgetDamage
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetDamage : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetDamage");
		return ptr;
	}


	void STATIC_EFDataBinding_UpdateData();
};


// Class EFGame.EFGFxWidgetExcavationMiniGame
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetExcavationMiniGame : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetExcavationMiniGame");
		return ptr;
	}


	void MiniGameStateChanged();
	void OnChangeGameState();
	void STATIC_ArcheologyResultComplete();
	void OnResultComplete();
};


// Class EFGame.EFGFxWidgetFishingNetMiniGame
// 0x003C (0x00FC - 0x00C0)
class UEFGFxWidgetFishingNetMiniGame : public UEFUIFrame
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00C0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetFishingNetMiniGame");
		return ptr;
	}


	void MiniGameStateChanged();
	void OnChangeGameState();
	void STATIC_FishingGameOver();
	void OnFishingGameOver();
};


// Class EFGame.EFGFxWidgetHeadStatus
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHeadStatus : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHeadStatus");
		return ptr;
	}


	void MoveHeadStatus();
};


// Class EFGame.EFGFxWidgetHudCommon
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHudCommon : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHudCommon");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetHudCommonExp
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHudCommonExp : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHudCommonExp");
		return ptr;
	}


	void HUD_CommonTabIndex();
	void STATIC_CommonTabIndex();
};


// Class EFGame.EFGFxWidgetHudIdentity
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHudIdentity : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHudIdentity");
		return ptr;
	}


	void SummonerSkillButtonClick();
};


// Class EFGame.EFGFxWidgetHudLeftTop
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHudLeftTop : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHudLeftTop");
		return ptr;
	}


	void STATIC_TopHUDAlarmListRightBtnClick();
	void STATIC_TopHUDAlarmListLeftBtnClick();
	void STATIC_TopHUDAlarmListItemClick();
};


// Class EFGame.EFGFxWidgetInteraction
// 0x0010 (0x00D0 - 0x00C0)
class UEFGFxWidgetInteraction : public UEFUIFrame
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteraction");
		return ptr;
	}


	void RelationShipLevelUp();
	void CloseBackGround();
	void InteractionCloseBackGround();
	void OpenBackGround();
	void InteractionOpenBackGround();
	void SelectQuestListIndex();
	void SelectQuestList();
	void SelectFunctionType();
	void SelectFunctionContainer();
	void ShowMaxIntimatePoint();
	void ShowMaximumIntimatePoint();
	void ClearInteractionState();
	void STATIC_ClearFunctionButtonState();
	void InteractionCommonCloseBtnClick();
	void STATIC_EndInteractionMode();
	void InteractionCommonPlayerTalkListClick();
	void STATIC_ClickInteractionTalkSelectList();
	void InteractionCommonNPCTalkListClick();
	void STATIC_ClickInteractionTalkList();
	void InteractionCommonMenuListClick();
	void STATIC_ClickInteractionFunctionMenu();
	void WidgetInitialized();
};


// Class EFGame.EFGFxWidgetInteractionKeyIcon
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetInteractionKeyIcon : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionKeyIcon");
		return ptr;
	}


	void InteractionKeySelected();
	void STATIC_FinishSwitchInteractionMode();
};


// Class EFGame.EFGFxWidgetInteractionMark
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetInteractionMark : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionMark");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetLifeToolDurability
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetLifeToolDurability : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetLifeToolDurability");
		return ptr;
	}


	void HideLifeDurability();
	void DecreaseLifeDurability();
	void ShowLifeDurability();
};


// Class EFGame.EFGFxWidgetLifeVessel
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetLifeVessel : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetLifeVessel");
		return ptr;
	}


	void LifeVesselCompleteAnimationEnd();
};


// Class EFGame.EFGFxWidgetMenu
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMenu : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMenu");
		return ptr;
	}


	void QuickSlotMenuClick();
	void GetMenu();
	void SetEnableButton();
	void SetToolTip();
	void SetBindKey();
	void SetSelectButton();
	void SelectButton();
};


// Class EFGame.EFGFxWidgetMinimap
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMinimap : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMinimap");
		return ptr;
	}


	void RequestShowMinimapChannelList();
};


// Class EFGame.EFGFxWidgetMOD_Cube
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMOD_Cube : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMOD_Cube");
		return ptr;
	}


	void ModCommonMergeCompensation();
	void STATIC_FinishMergeCompensation();
	void ModCommonEndCubeEffect();
	void STATIC_EndBuffEffect();
	void PlayModCommonMergeCompensation();
	void SetModCommonRandomState();
	void SetModCommonCurrentCompensation();
	void SetModCommonAccumulateCompensation();
	void UpdateModCommonCubeState();
	void RemoveModCommonCubeState();
	void AddModCommonCubeState();
	void SetModCommonStateList();
	void SetModCommonWaveStep();
	void SetModCommonHudType();
};


// Class EFGame.EFGFxWidgetMOD_PlatinumArea
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMOD_PlatinumArea : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMOD_PlatinumArea");
		return ptr;
	}


	void ModPlatinumCoopComplete();
};


// Class EFGame.EFGFxWidgetMODEntrance
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMODEntrance : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMODEntrance");
		return ptr;
	}


	void ModEntranceMapCanvasItemClick();
};


// Class EFGame.EFGFxWidgetNotice
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetNotice : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetNotice");
		return ptr;
	}


	void setNoticeIcon();
	void NoticeFrameAlarmBtnClick();
};


// Class EFGame.EFGFxWidgetPcCreateHUD
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetPcCreateHUD : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetPcCreateHUD");
		return ptr;
	}


	void SetDefaultClassData();
	void RequestStopMovie();
	void RequestPlayMovieClassSelectPreview();
	void RequestUpdateClassSelectData();
};


// Class EFGame.EFGFxWidgetPcCustomizing
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetPcCustomizing : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetPcCustomizing");
		return ptr;
	}


	void previewImg();
	void setCostume();
	void setClassID();
	void setPreviewcostumeData();
	void setPresetData();
	void STATIC_CustomizingSettingValueChanged();
};


// Class EFGame.EFGFxWidgetPcSelect
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetPcSelect : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetPcSelect");
		return ptr;
	}


	void ShowAnim();
	void ShowNotice();
	void SetCharacterSelect();
	void STATIC_CharacterSelectMoving();
	void STATIC_WallpaperCancel();
	void STATIC_WallpaperSelected();
	void STATIC_WallpaperConfirm();
	void STATIC_CharacterSelectDeleteCancel();
	void STATIC_CharacterSelectedIndex();
	void RequestNewCharacter();
};


// Class EFGame.EFGFxWidgetRaidClear
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetRaidClear : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRaidClear");
		return ptr;
	}


	void RaidProcessResultComplete();
};


// Class EFGame.EFGFxWidgetRaidExitNotice
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetRaidExitNotice : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRaidExitNotice");
		return ptr;
	}


	void RaidProcessNoticeTimeOut();
};


// Class EFGame.EFGFxWidgetRaidFail
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetRaidFail : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRaidFail");
		return ptr;
	}


	void RaidProcessResultComplete();
};


// Class EFGame.EFGFxWidgetRaidHUD
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetRaidHUD : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRaidHUD");
		return ptr;
	}


	void RaidProcessTimeOut();
};


// Class EFGame.EFUIWindow
// 0x0008 (0x00C8 - 0x00C0)
class UEFUIWindow : public UEFUIFrame
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIWindow");
		return ptr;
	}

};


// Class EFGame.EFUISlotData
// 0x0000 (0x00BC - 0x00BC)
class UEFUISlotData : public UEFUIComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlotData");
		return ptr;
	}


	void SetTownShow();
	void SetToolTip();
	void SetRecommend();
	void SetFriendshipShow();
	void SetAdvBookShow();
	void SetTemporary();
	void SetTrash();
	void SetDisableType();
	void SetTableID();
	void GetTableID();
	void SetUniqueData();
	void GetUniqueData();
	void SetLocked();
	void IsLocked();
	void SetItemGrade();
	void GetItemGrade();
	void SetSoundTheme();
	void GetSoundTheme();
	void SetDisabled();
	void STATIC_IsDisabled();
	void SetLabelName();
	void GetLabelName();
	void SetCooltime();
	void GetTotalCoolTime();
	void GetRemainCoolTime();
	void SetIconHeight();
	void GetIconHeight();
	void SetIconWidth();
	void GetIconWidth();
	void SetIconY();
	void GetIconY();
	void SetIconX();
	void GetIconX();
	void SetIconCount();
	void GetIconCount();
	void SetIconPath();
	void GetIconPath();
	void SetWindowType();
	void GetWindowType();
	void SetSlotIndex();
	void GetSlotIndex();
	void SetBindID();
	void GetBindID();
	void SetSlotType();
	void GetSlotType();
	void SetIconData_New();
	void SetIconData();
	void SetImageData_New();
	void SetImageData();
};


// Class EFGame.EFInterpGroupSpawn
// 0x0010 (0x00B0 - 0x00A0)
class UEFInterpGroupSpawn : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpGroupSpawn");
		return ptr;
	}

};


// Class EFGame.EFInterpGroupSpawnInfo
// 0x0028 (0x00C8 - 0x00A0)
class UEFInterpGroupSpawnInfo : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpGroupSpawnInfo");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSpawnAnimControl
// 0x0008 (0x0104 - 0x00FC)
class UEFInterpTrackSpawnAnimControl : public UInterpTrackAnimControl
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00FC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSpawnAnimControl");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSpawnEffectControl
// 0x0000 (0x00CC - 0x00CC)
class UEFInterpTrackSpawnEffectControl : public UInterpTrackToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSpawnEffectControl");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSpawnEvent
// 0x0000 (0x00CC - 0x00CC)
class UEFInterpTrackSpawnEvent : public UInterpTrackEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSpawnEvent");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSpawnMove
// 0x001A (0x0120 - 0x0106)
class UEFInterpTrackSpawnMove : public UInterpTrackMove
{
public:
	unsigned char                                      UnknownData00[0x1A];                                      // 0x0106(0x001A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSpawnMove");
		return ptr;
	}

};


// Class EFGame.EFSpawnEnvirNpc
// 0x0074 (0x02E8 - 0x0274)
class AEFSpawnEnvirNpc : public AActor
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0274(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSpawnEnvirNpc");
		return ptr;
	}

};


// Class EFGame.EFSpawnMatineeActor
// 0x0014 (0x0288 - 0x0274)
class AEFSpawnMatineeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSpawnMatineeActor");
		return ptr;
	}

};


// Class EFGame.EFGameViewportClient
// 0x00F8 (0x0298 - 0x01A0)
class UEFGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x01A0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameViewportClient");
		return ptr;
	}


	void Tick();
	void PostRender();
	void STATIC_CreateScreenshot();
	void InitRelativeTimeFadeInfo();
	void STATIC_CacheViewProjectionMatrix();
	void PostFadeInOutRender();
	void SetHardwareMouseCursorVisibility();
};


// Class EFGame.EFNxForceFieldTornado
// 0x0000 (0x030C - 0x030C)
class AEFNxForceFieldTornado : public ANxForceFieldTornado
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFNxForceFieldTornado");
		return ptr;
	}


	void STATIC_UpdateDynamicProperty();
	void OnUpdatePropertyHeightOffset();
	void OnUpdatePropertyForceHeight();
	void OnUpdatePropertyEscapeVelocity();
	void OnUpdatePropertyLiftFalloffHeight();
	void OnUpdatePropertyForceTopRadius();
	void OnUpdatePropertyForceRadius();
	void OnUpdatePropertyLiftStrength();
	void OnUpdatePropertyRotationalStrength();
	void OnUpdatePropertyRadialStrength();
};


// Class EFGame.EFAbilityEffectInfo
// 0x0010 (0x0068 - 0x0058)
class UEFAbilityEffectInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAbilityEffectInfo");
		return ptr;
	}

};


// Class EFGame.EFCommonDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFCommonDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCommonDataDefine");
		return ptr;
	}

};


// Class EFGame.EFData
// 0x000C (0x0064 - 0x0058)
class UEFData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData");
		return ptr;
	}

};


// Class EFGame.EFData_Action
// 0x0010 (0x0074 - 0x0064)
class UEFData_Action : public UEFData
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_Action");
		return ptr;
	}

};


// Class EFGame.EFData_CharacterCustomizing
// 0x00DC (0x0140 - 0x0064)
class UEFData_CharacterCustomizing : public UEFData
{
public:
	unsigned char                                      UnknownData00[0xDC];                                      // 0x0064(0x00DC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_CharacterCustomizing");
		return ptr;
	}

};


// Class EFGame.EFData_CharacterCustomizingRule
// 0x013C (0x01A0 - 0x0064)
class UEFData_CharacterCustomizingRule : public UEFData
{
public:
	unsigned char                                      UnknownData00[0x13C];                                     // 0x0064(0x013C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_CharacterCustomizingRule");
		return ptr;
	}

};


// Class EFGame.EFData_CustomizeBoneScaleItem
// 0x0020 (0x0084 - 0x0064)
class UEFData_CustomizeBoneScaleItem : public UEFData
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0064(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_CustomizeBoneScaleItem");
		return ptr;
	}

};


// Class EFGame.EFData_MeshLookInfo
// 0x0030 (0x0094 - 0x0064)
class UEFData_MeshLookInfo : public UEFData
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0064(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_MeshLookInfo");
		return ptr;
	}

};


// Class EFGame.EFData_NpcPartInfo
// 0x0040 (0x00A4 - 0x0064)
class UEFData_NpcPartInfo : public UEFData
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0064(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_NpcPartInfo");
		return ptr;
	}

};


// Class EFGame.EFData_PaletteItemBase
// 0x0010 (0x0074 - 0x0064)
class UEFData_PaletteItemBase : public UEFData
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_PaletteItemBase");
		return ptr;
	}

};


// Class EFGame.EFData_ColorPaletteItem
// 0x0030 (0x00A4 - 0x0074)
class UEFData_ColorPaletteItem : public UEFData_PaletteItemBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0074(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_ColorPaletteItem");
		return ptr;
	}

};


// Class EFGame.EFData_TexturePaletteItem
// 0x0010 (0x0084 - 0x0074)
class UEFData_TexturePaletteItem : public UEFData_PaletteItemBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0074(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_TexturePaletteItem");
		return ptr;
	}

};


// Class EFGame.EFData_PartsMesh
// 0x0124 (0x0188 - 0x0064)
class UEFData_PartsMesh : public UEFData
{
public:
	unsigned char                                      UnknownData00[0x124];                                     // 0x0064(0x0124) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_PartsMesh");
		return ptr;
	}

};


// Class EFGame.EFData_AnimNotify_Trails
// 0x0008 (0x0060 - 0x0058)
class UEFData_AnimNotify_Trails : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_AnimNotify_Trails");
		return ptr;
	}

};


// Class EFGame.EFData_MaskInfo
// 0x0010 (0x0068 - 0x0058)
class UEFData_MaskInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_MaskInfo");
		return ptr;
	}


	void GetProperLevel();
};


// Class EFGame.EFData_SkelControlGroup
// 0x0010 (0x0068 - 0x0058)
class UEFData_SkelControlGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_SkelControlGroup");
		return ptr;
	}

};


// Class EFGame.EFExcelShell
// 0x0058 (0x00B0 - 0x0058)
class UEFExcelShell : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFExcelShell");
		return ptr;
	}


	void GetColumNum();
	void NewLine();
	void ResetEdit();
	void SetLookPresetPosition();
	void SetLookPresetRange();
	void ReadStringRange();
	void ReadString();
	void STATIC_WriteString();
	void STATIC_WriteName();
	void STATIC_WriteFloat();
	void STATIC_WriteInt();
	void STATIC_WriteUINT();
	void SetSheetName();
	void SetFont();
	void SetBorder();
	void SetBackgroundColor();
	void GetWorkSheetName();
	void SelectWorkSheet();
	void SelectWorkSheetByName();
	void STATIC_SaveAs();
	void OpenExcelFile();
	void NewSheet();
	void NewExcelFile();
	void STATIC_AutoFitColomn();
	void STATIC_AutoFitColumn();
};


// Class EFGame.EFKismetData_Pack
// 0x0028 (0x0080 - 0x0058)
class UEFKismetData_Pack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFKismetData_Pack");
		return ptr;
	}

};


// Class EFGame.EFKismetData_Unit
// 0x0030 (0x01E4 - 0x01B4)
class UEFKismetData_Unit : public USequence
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01B4(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFKismetData_Unit");
		return ptr;
	}

};


// Class EFGame.EFKismetMapData
// 0x0024 (0x007C - 0x0058)
class UEFKismetMapData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0058(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFKismetMapData");
		return ptr;
	}

};


// Class EFGame.EFLocalTrigger
// 0x0004 (0x0288 - 0x0284)
class AEFLocalTrigger : public ATrigger
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLocalTrigger");
		return ptr;
	}


	void Touch();
	void PostBeginPlay();
	void IsCinematicControl();
	void IsLocalMode();
};


// Class EFGame.EFLocalTriggerVolume
// 0x0004 (0x02B4 - 0x02B0)
class AEFLocalTriggerVolume : public ATriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLocalTriggerVolume");
		return ptr;
	}


	void Touch();
	void PostBeginPlay();
	void IsCinematicControl();
	void IsLocalMode();
};


// Class EFGame.EFParticleBuffInfoBase
// 0x0001 (0x0059 - 0x0058)
class UEFParticleBuffInfoBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0058(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleBuffInfoBase");
		return ptr;
	}

};


// Class EFGame.EFParticleBuffInfo
// 0x0027 (0x0080 - 0x0059)
class UEFParticleBuffInfo : public UEFParticleBuffInfoBase
{
public:
	unsigned char                                      UnknownData00[0x27];                                      // 0x0059(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleBuffInfo");
		return ptr;
	}

};


// Class EFGame.EFParticleStackBuffInfo
// 0x0008 (0x0088 - 0x0080)
class UEFParticleStackBuffInfo : public UEFParticleBuffInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleStackBuffInfo");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainer
// 0x0038 (0x0090 - 0x0058)
class UEFParticleSoundContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0058(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainer");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerArmorHitSet
// 0x0010 (0x00A0 - 0x0090)
class UEFParticleSoundContainerArmorHitSet : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerArmorHitSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerBeHittedSet
// 0x0060 (0x00F0 - 0x0090)
class UEFParticleSoundContainerBeHittedSet : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0090(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerBeHittedSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerBuffSet
// 0x0060 (0x00F0 - 0x0090)
class UEFParticleSoundContainerBuffSet : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0090(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerBuffSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerCommon
// 0x0070 (0x0100 - 0x0090)
class UEFParticleSoundContainerCommon : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0090(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerCommon");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerDown
// 0x0040 (0x00D0 - 0x0090)
class UEFParticleSoundContainerDown : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0090(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerDown");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerFootStep
// 0x0030 (0x00C0 - 0x0090)
class UEFParticleSoundContainerFootStep : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerFootStep");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerGroundEffect
// 0x0070 (0x0100 - 0x0090)
class UEFParticleSoundContainerGroundEffect : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0090(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerGroundEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerKnockback
// 0x0010 (0x00A0 - 0x0090)
class UEFParticleSoundContainerKnockback : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerKnockback");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerPostProcessEffectCamera
// 0x0008 (0x0098 - 0x0090)
class UEFParticleSoundContainerPostProcessEffectCamera : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerPostProcessEffectCamera");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerSkillHitSet
// 0x0060 (0x00F0 - 0x0090)
class UEFParticleSoundContainerSkillHitSet : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0090(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerSkillHitSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerWeaponAttributeEffect
// 0x0108 (0x0198 - 0x0090)
class UEFParticleSoundContainerWeaponAttributeEffect : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0090(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerWeaponAttributeEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerWeaponFX
// 0x0020 (0x00B0 - 0x0090)
class UEFParticleSoundContainerWeaponFX : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerWeaponFX");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerWeaponHitSet
// 0x00B8 (0x0148 - 0x0090)
class UEFParticleSoundContainerWeaponHitSet : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0090(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerWeaponHitSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerSetBase
// 0x0014 (0x006C - 0x0058)
class UEFParticleSoundContainerSetBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerSetBase");
		return ptr;
	}

};


// Class EFGame.EFGameObjectParticleSoundContainerSet
// 0x0040 (0x00AC - 0x006C)
class UEFGameObjectParticleSoundContainerSet : public UEFParticleSoundContainerSetBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x006C(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameObjectParticleSoundContainerSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerSet
// 0x00F0 (0x015C - 0x006C)
class UEFParticleSoundContainerSet : public UEFParticleSoundContainerSetBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x006C(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundData
// 0x0048 (0x00A0 - 0x0058)
class UEFParticleSoundData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundData");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataArmorMaterial
// 0x0070 (0x0110 - 0x00A0)
class UEFParticleSoundDataArmorMaterial : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00A0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataArmorMaterial");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataBeHittedPawnMaterial
// 0x0088 (0x0128 - 0x00A0)
class UEFParticleSoundDataBeHittedPawnMaterial : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00A0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataBeHittedPawnMaterial");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataBuffBeam
// 0x008C (0x012C - 0x00A0)
class UEFParticleSoundDataBuffBeam : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x00A0(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataBuffBeam");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataBuffFX
// 0x0130 (0x01D0 - 0x00A0)
class UEFParticleSoundDataBuffFX : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x00A0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataBuffFX");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataComment
// 0x0038 (0x00D8 - 0x00A0)
class UEFParticleSoundDataComment : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00A0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataComment");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataCommon
// 0x0024 (0x00C4 - 0x00A0)
class UEFParticleSoundDataCommon : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00A0(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataCommon");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataFloorMaterial
// 0x0080 (0x0120 - 0x00A0)
class UEFParticleSoundDataFloorMaterial : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataFloorMaterial");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataFloorMaterialSound
// 0x0080 (0x0120 - 0x00A0)
class UEFParticleSoundDataFloorMaterialSound : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataFloorMaterialSound");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataGroundEffect
// 0x0030 (0x00D0 - 0x00A0)
class UEFParticleSoundDataGroundEffect : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataGroundEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataHittedArmorSet
// 0x0008 (0x00A8 - 0x00A0)
class UEFParticleSoundDataHittedArmorSet : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataHittedArmorSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataHittedSkillSet
// 0x0020 (0x00C0 - 0x00A0)
class UEFParticleSoundDataHittedSkillSet : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataHittedSkillSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataHittedWeaponSet
// 0x0024 (0x00C4 - 0x00A0)
class UEFParticleSoundDataHittedWeaponSet : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00A0(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataHittedWeaponSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponAttribute
// 0x0060 (0x0100 - 0x00A0)
class UEFParticleSoundDataWeaponAttribute : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponAttribute");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponAttributeEffect
// 0x00A8 (0x0148 - 0x00A0)
class UEFParticleSoundDataWeaponAttributeEffect : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00A0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponAttributeEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponFXDir
// 0x0054 (0x00F4 - 0x00A0)
class UEFParticleSoundDataWeaponFXDir : public UEFParticleSoundData
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x00A0(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponFXDir");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataBuffWeaponFXDir
// 0x0004 (0x00F8 - 0x00F4)
class UEFParticleSoundDataBuffWeaponFXDir : public UEFParticleSoundDataWeaponFXDir
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataBuffWeaponFXDir");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponFXAttacker
// 0x0014 (0x006C - 0x0058)
class UEFParticleSoundDataWeaponFXAttacker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponFXAttacker");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponFXDelay
// 0x000C (0x0064 - 0x0058)
class UEFParticleSoundDataWeaponFXDelay : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponFXDelay");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundSet
// 0x0030 (0x0088 - 0x0058)
class UEFParticleSoundSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundSet");
		return ptr;
	}

};


// Class EFGame.EFTeleportLocationActor
// 0x0004 (0x0278 - 0x0274)
class AEFTeleportLocationActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTeleportLocationActor");
		return ptr;
	}

};


// Class EFGame.EFDataContainer
// 0x0060 (0x00B8 - 0x0058)
class UEFDataContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0058(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer");
		return ptr;
	}


	void STATIC_XmlExport();
	void STATIC_XlsExport();
	void STATIC_XlsImport();
};


// Class EFGame.EFDataContainer_Action
// 0x0020 (0x00D8 - 0x00B8)
class UEFDataContainer_Action : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_Action");
		return ptr;
	}

};


// Class EFGame.EFDataContainer_CharacterCustomizing
// 0x00D8 (0x0190 - 0x00B8)
class UEFDataContainer_CharacterCustomizing : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00B8(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_CharacterCustomizing");
		return ptr;
	}


	void STATIC_XmlExport();
};


// Class EFGame.EFDataContainer_ColorPalette
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_ColorPalette : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_ColorPalette");
		return ptr;
	}


	void STATIC_XmlExport();
};


// Class EFGame.EFDataContainer_CustomizeBoneScale
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_CustomizeBoneScale : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_CustomizeBoneScale");
		return ptr;
	}


	void STATIC_XmlExport();
};


// Class EFGame.EFDataContainer_LookInfos
// 0x0001 (0x00B9 - 0x00B8)
class UEFDataContainer_LookInfos : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B8(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_LookInfos");
		return ptr;
	}


	void STATIC_XmlExport();
};


// Class EFGame.EFDataContainer_LookInfosGibs
// 0x0003 (0x00BC - 0x00B9)
class UEFDataContainer_LookInfosGibs : public UEFDataContainer_LookInfos
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_LookInfosGibs");
		return ptr;
	}

};


// Class EFGame.EFDataContainer_LookInfosPC
// 0x0003 (0x00BC - 0x00B9)
class UEFDataContainer_LookInfosPC : public UEFDataContainer_LookInfos
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_LookInfosPC");
		return ptr;
	}

};


// Class EFGame.EFDataContainer_NpcFunction
// 0x0050 (0x0108 - 0x00B8)
class UEFDataContainer_NpcFunction : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_NpcFunction");
		return ptr;
	}


	void STATIC_XmlExport();
};


// Class EFGame.EFDataContainer_Quest
// 0x00F0 (0x01A8 - 0x00B8)
class UEFDataContainer_Quest : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x00B8(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_Quest");
		return ptr;
	}


	void STATIC_XmlExport();
};


// Class EFGame.EFDataContainer_TexturePalette
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_TexturePalette : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_TexturePalette");
		return ptr;
	}


	void STATIC_XmlExport();
};


// Class EFGame.EFEnvironmentInfo
// 0x0078 (0x00D0 - 0x0058)
class UEFEnvironmentInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0058(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentInfo");
		return ptr;
	}

};


// Class EFGame.EFLightBeam
// 0x0028 (0x02A8 - 0x0280)
class AEFLightBeam : public ASpotLightMovable
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0280(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLightBeam");
		return ptr;
	}


	void STATIC_SetActive();
};


// Class EFGame.EFPointLightMovable
// 0x0000 (0x0280 - 0x0280)
class AEFPointLightMovable : public APointLightMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPointLightMovable");
		return ptr;
	}

};


// Class EFGame.EFDropItemEffectInfo
// 0x0794 (0x07EC - 0x0058)
class UEFDropItemEffectInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x794];                                     // 0x0058(0x0794) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDropItemEffectInfo");
		return ptr;
	}

};


// Class EFGame.EFItem
// 0x0000 (0x0318 - 0x0318)
class AEFItem : public AEFSkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFItem");
		return ptr;
	}


	void SetLocationForceUpdateComponent();
	void SetLocationForce();
	void STATIC_ClearAttachedPSIIndex();
	void NotifyChangedBase();
	void EncroachedBy();
	void BaseChange();
	void Destroyed();
};


// Class EFGame.EFInteractiveFoliageActor
// 0x001C (0x0314 - 0x02F8)
class AEFInteractiveFoliageActor : public AInteractiveFoliageActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02F8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInteractiveFoliageActor");
		return ptr;
	}


	void TakeDamage();
};


// Class EFGame.EFDebugTransportComponent
// 0x004C (0x02D0 - 0x0284)
class UEFDebugTransportComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0284(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDebugTransportComponent");
		return ptr;
	}

};


// Class EFGame.EFAction_Notify
// 0x0074 (0x00CC - 0x0058)
class UEFAction_Notify : public UObject
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0058(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAction_Notify");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AddClientStatusEffect
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_AddClientStatusEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AddClientStatusEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AKEvent
// 0x0028 (0x00F4 - 0x00CC)
class UEFActionNotify_AKEvent : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00CC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AKEvent");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AkEventSwitchFloorMaterial
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_AkEventSwitchFloorMaterial : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AkEventSwitchFloorMaterial");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Anim
// 0x0078 (0x0144 - 0x00CC)
class UEFActionNotify_Anim : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00CC(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Anim");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Stance_Anim
// 0x0024 (0x0168 - 0x0144)
class UEFActionNotify_Stance_Anim : public UEFActionNotify_Anim
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0144(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Stance_Anim");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AnimBlendDirectional
// 0x0028 (0x00F4 - 0x00CC)
class UEFActionNotify_AnimBlendDirectional : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00CC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimBlendDirectional");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ChangeFigurePropState
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_ChangeFigurePropState : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00CC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ChangeFigurePropState");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ClientProjectile
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_ClientProjectile : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00CC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ClientProjectile");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_CommonActionExcute
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_CommonActionExcute : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_CommonActionExcute");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_CommonActionVoiceSet
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_CommonActionVoiceSet : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_CommonActionVoiceSet");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Condition
// 0x001C (0x00E8 - 0x00CC)
class UEFActionNotify_Condition : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00CC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Condition");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ConsumeSkillCost
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_ConsumeSkillCost : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ConsumeSkillCost");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_DefaultParticle
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_DefaultParticle : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_DefaultParticle");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_DetachParts
// 0x0020 (0x00EC - 0x00CC)
class UEFActionNotify_DetachParts : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00CC(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_DetachParts");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_DominantDirectionalLight_Control
// 0x0018 (0x00E4 - 0x00CC)
class UEFActionNotify_DominantDirectionalLight_Control : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00CC(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_DominantDirectionalLight_Control");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Down
// 0x0024 (0x00F0 - 0x00CC)
class UEFActionNotify_Down : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00CC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Down");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Effect
// 0x0044 (0x0110 - 0x00CC)
class UEFActionNotify_Effect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x00CC(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Effect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_EmitTriggerSignal
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_EmitTriggerSignal : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00CC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_EmitTriggerSignal");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_EquipCommonActionTool
// 0x0050 (0x011C - 0x00CC)
class UEFActionNotify_EquipCommonActionTool : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00CC(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_EquipCommonActionTool");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_FakeEffect
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_FakeEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00CC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_FakeEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Footstep
// 0x0024 (0x00F0 - 0x00CC)
class UEFActionNotify_Footstep : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00CC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Footstep");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_GameActionExcute
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_GameActionExcute : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_GameActionExcute");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_GameNote
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_GameNote : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_GameNote");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_HidePawn
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_HidePawn : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_HidePawn");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_IdentityParts
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_IdentityParts : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00CC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_IdentityParts");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_InputTiming
// 0x004C (0x0118 - 0x00CC)
class UEFActionNotify_InputTiming : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00CC(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_InputTiming");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_LifeActionRemainCountUI
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_LifeActionRemainCountUI : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_LifeActionRemainCountUI");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_LifeToolDurabilityUI
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_LifeToolDurabilityUI : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00CC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_LifeToolDurabilityUI");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_LookTarget
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_LookTarget : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00CC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_LookTarget");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MaintainHidePawn
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_MaintainHidePawn : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MaintainHidePawn");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MemoryPos
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_MemoryPos : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MemoryPos");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageBase
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_MonsterMoveNextStageBase : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageBase");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStage
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_MonsterMoveNextStage : public UEFActionNotify_MonsterMoveNextStageBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStage");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageConditionBase
// 0x0020 (0x00EC - 0x00CC)
class UEFActionNotify_MonsterMoveNextStageConditionBase : public UEFActionNotify_MonsterMoveNextStageBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00CC(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageConditionBase");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageConditionCheckArea
// 0x0014 (0x0100 - 0x00EC)
class UEFActionNotify_MonsterMoveNextStageConditionCheckArea : public UEFActionNotify_MonsterMoveNextStageConditionBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageConditionCheckArea");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageConditionProbability
// 0x0004 (0x00F0 - 0x00EC)
class UEFActionNotify_MonsterMoveNextStageConditionProbability : public UEFActionNotify_MonsterMoveNextStageConditionBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageConditionProbability");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageConditionSkillEffectHit
// 0x0010 (0x00FC - 0x00EC)
class UEFActionNotify_MonsterMoveNextStageConditionSkillEffectHit : public UEFActionNotify_MonsterMoveNextStageConditionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00EC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageConditionSkillEffectHit");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_NpcLimbState
// 0x0044 (0x0110 - 0x00CC)
class UEFActionNotify_NpcLimbState : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x00CC(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_NpcLimbState");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_NPCSkillMove
// 0x0018 (0x00E4 - 0x00CC)
class UEFActionNotify_NPCSkillMove : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00CC(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_NPCSkillMove");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_NpcStatus
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_NpcStatus : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_NpcStatus");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Paralyzation
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_Paralyzation : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Paralyzation");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ParticleControl
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_ParticleControl : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00CC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ParticleControl");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ParticleHit
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_ParticleHit : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ParticleHit");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PartsAnim
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_PartsAnim : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00CC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PartsAnim");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PawnMaterialChange
// 0x002C (0x00F8 - 0x00CC)
class UEFActionNotify_PawnMaterialChange : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00CC(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PawnMaterialChange");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PawnMaterialParam
// 0x0090 (0x015C - 0x00CC)
class UEFActionNotify_PawnMaterialParam : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00CC(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PawnMaterialParam");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Physics
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_Physics : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00CC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Physics");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PhysicsParam
// 0x0028 (0x00F4 - 0x00CC)
class UEFActionNotify_PhysicsParam : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00CC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PhysicsParam");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayBeamEffect
// 0x01AC (0x0278 - 0x00CC)
class UEFActionNotify_PlayBeamEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1AC];                                     // 0x00CC(0x01AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayBeamEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayCameraParticleEffect
// 0x003D (0x0109 - 0x00CC)
class UEFActionNotify_PlayCameraParticleEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x3D];                                      // 0x00CC(0x003D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayCameraParticleEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayDecalEffect
// 0x0054 (0x0120 - 0x00CC)
class UEFActionNotify_PlayDecalEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x00CC(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayDecalEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayParticleEffect
// 0x00AC (0x0178 - 0x00CC)
class UEFActionNotify_PlayParticleEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0xAC];                                      // 0x00CC(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayPIPUI
// 0x0034 (0x0100 - 0x00CC)
class UEFActionNotify_PlayPIPUI : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00CC(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayPIPUI");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayProjectileDecalEffect
// 0x0024 (0x00F0 - 0x00CC)
class UEFActionNotify_PlayProjectileDecalEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00CC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayProjectileDecalEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlaySkeletalMesh
// 0x0038 (0x0104 - 0x00CC)
class UEFActionNotify_PlaySkeletalMesh : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00CC(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlaySkeletalMesh");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlaySkeletalMeshMaterialParam
// 0x004C (0x0118 - 0x00CC)
class UEFActionNotify_PlaySkeletalMeshMaterialParam : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00CC(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlaySkeletalMeshMaterialParam");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PostProcessChain
// 0x001C (0x00E8 - 0x00CC)
class UEFActionNotify_PostProcessChain : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00CC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PostProcessChain");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PostProcessCrossHair
// 0x0000 (0x00E8 - 0x00E8)
class UEFActionNotify_PostProcessCrossHair : public UEFActionNotify_PostProcessChain
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PostProcessCrossHair");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ReAttachParts
// 0x0002 (0x00CE - 0x00CC)
class UEFActionNotify_ReAttachParts : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x00CC(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ReAttachParts");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Rotate
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_Rotate : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00CC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Rotate");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SendNpcSignal
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_SendNpcSignal : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SendNpcSignal");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SkillCancelEffect
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SkillCancelEffect : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SkillCancelEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetDownMid
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetDownMid : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetDownMid");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetDownSmall
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetDownSmall : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetDownSmall");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetFootStep
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_SoundSetFootStep : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00CC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetFootStep");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetKnockback
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetKnockback : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetKnockback");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetLanding
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetLanding : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetLanding");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetSpringBound
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetSpringBound : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetSpringBound");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetStuff
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_SoundSetStuff : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetStuff");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_StopParticleEffect
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_StopParticleEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00CC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_StopParticleEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SuperArmor
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_SuperArmor : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00CC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SuperArmor");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_TargetPosControl
// 0x001C (0x00E8 - 0x00CC)
class UEFActionNotify_TargetPosControl : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00CC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_TargetPosControl");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_TimingCancel
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_TimingCancel : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_TimingCancel");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ToggleCollision
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_ToggleCollision : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ToggleCollision");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_TrailGhostEffect
// 0x002C (0x00F8 - 0x00CC)
class UEFActionNotify_TrailGhostEffect : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00CC(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_TrailGhostEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Trails
// 0x004C (0x0118 - 0x00CC)
class UEFActionNotify_Trails : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00CC(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Trails");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_UIEventChecker
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_UIEventChecker : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_UIEventChecker");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ViewShake
// 0x0028 (0x00F4 - 0x00CC)
class UEFActionNotify_ViewShake : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00CC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ViewShake");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAdditional
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAdditional : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAdditional");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAttackCast
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAttackCast : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAttackCast");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAttackCastLong
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAttackCastLong : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAttackCastLong");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAttackExec
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAttackExec : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAttackExec");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAttackShot
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAttackShot : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAttackShot");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetDamage
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetDamage : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetDamage");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetDeath
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetDeath : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetDeath");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetDown
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetDown : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetDown");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetIdle
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetIdle : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetIdle");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetRun
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetRun : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetRun");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetSpawn
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetSpawn : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetSpawn");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetStandUp
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetStandUp : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetStandUp");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetWalk
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetWalk : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetWalk");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_WeaponCustomAttach
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_WeaponCustomAttach : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_WeaponCustomAttach");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_WeaponMode
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_WeaponMode : public UEFAction_Notify
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_WeaponMode");
		return ptr;
	}

};


// Class EFGame.EFActionCondition
// 0x0030 (0x0088 - 0x0058)
class UEFActionCondition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionCondition");
		return ptr;
	}

};


// Class EFGame.EFActionConditionAbility
// 0x0004 (0x008C - 0x0088)
class UEFActionConditionAbility : public UEFActionCondition
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionAbility");
		return ptr;
	}

};


// Class EFGame.EFActionConditionAbnormal
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionAbnormal : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionAbnormal");
		return ptr;
	}

};


// Class EFGame.EFActionConditionAlreadyDie
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionAlreadyDie : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionAlreadyDie");
		return ptr;
	}

};


// Class EFGame.EFActionConditionBattleMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionBattleMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionBattleMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionBurrow
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionBurrow : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionBurrow");
		return ptr;
	}

};


// Class EFGame.EFActionConditionComaDuraion
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionComaDuraion : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionComaDuraion");
		return ptr;
	}

};


// Class EFGame.EFActionConditionDespawn
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionDespawn : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionDespawn");
		return ptr;
	}

};


// Class EFGame.EFActionConditionDespawnAnimIndex
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionDespawnAnimIndex : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionDespawnAnimIndex");
		return ptr;
	}

};


// Class EFGame.EFActionConditionDyingType
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionDyingType : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionDyingType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionForcedMove
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionForcedMove : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionForcedMove");
		return ptr;
	}

};


// Class EFGame.EFActionConditionGadgetExitType
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionGadgetExitType : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionGadgetExitType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionGadgetState
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionGadgetState : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionGadgetState");
		return ptr;
	}

};


// Class EFGame.EFActionConditionHitAdditive
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionHitAdditive : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionHitAdditive");
		return ptr;
	}

};


// Class EFGame.EFActionConditionHitReaction
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionHitReaction : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionHitReaction");
		return ptr;
	}

};


// Class EFGame.EFActionConditionIdentity
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionIdentity : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionIdentity");
		return ptr;
	}

};


// Class EFGame.EFActionConditionInputDirLeftRight
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionInputDirLeftRight : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionInputDirLeftRight");
		return ptr;
	}

};


// Class EFGame.EFActionConditionIsDeleteMe
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionIsDeleteMe : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionIsDeleteMe");
		return ptr;
	}

};


// Class EFGame.EFActionConditionLearnCommonActionEffectType
// 0x0001 (0x0089 - 0x0088)
class UEFActionConditionLearnCommonActionEffectType : public UEFActionCondition
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0088(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionLearnCommonActionEffectType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionMoveAni
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionMoveAni : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionMoveAni");
		return ptr;
	}

};


// Class EFGame.EFActionConditionNpcStatus
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionNpcStatus : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionNpcStatus");
		return ptr;
	}

};


// Class EFGame.EFActionConditionPickupMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionPickupMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionPickupMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionPlayerClass
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionPlayerClass : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionPlayerClass");
		return ptr;
	}

};


// Class EFGame.EFActionConditionProbablity
// 0x0004 (0x008C - 0x0088)
class UEFActionConditionProbablity : public UEFActionCondition
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionProbablity");
		return ptr;
	}

};


// Class EFGame.EFActionConditionRandom
// 0x0010 (0x0098 - 0x0088)
class UEFActionConditionRandom : public UEFActionCondition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionRandom");
		return ptr;
	}

};


// Class EFGame.EFActionConditionRidingMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionRidingMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionRidingMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionSelectNpcIdleType
// 0x0010 (0x0098 - 0x0088)
class UEFActionConditionSelectNpcIdleType : public UEFActionCondition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionSelectNpcIdleType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionShipAnchorMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionShipAnchorMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionShipAnchorMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionShipBoostMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionShipBoostMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionShipBoostMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionSkillEffectHit
// 0x0010 (0x0098 - 0x0088)
class UEFActionConditionSkillEffectHit : public UEFActionCondition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionSkillEffectHit");
		return ptr;
	}

};


// Class EFGame.EFActionConditionSpawnAnimIndex
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionSpawnAnimIndex : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionSpawnAnimIndex");
		return ptr;
	}

};


// Class EFGame.EFActionConditionSpawnType
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionSpawnType : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionSpawnType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionStanceMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionStanceMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionStanceMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionStatusEffect
// 0x0008 (0x0090 - 0x0088)
class UEFActionConditionStatusEffect : public UEFActionCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionStatusEffect");
		return ptr;
	}

};


// Class EFGame.EFActionConditionTakeDamage
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionTakeDamage : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionTakeDamage");
		return ptr;
	}

};


// Class EFGame.EFActionConditionWeaponMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionWeaponMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionWeaponMode");
		return ptr;
	}

};


// Class EFGame.EFActionObject
// 0x006C (0x00C4 - 0x0058)
class UEFActionObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0058(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionObject");
		return ptr;
	}

};


// Class EFGame.EFActionObjectGroup
// 0x00C0 (0x0118 - 0x0058)
class UEFActionObjectGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0058(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionObjectGroup");
		return ptr;
	}

};


// Class EFGame.EFActionSkelControl
// 0x0014 (0x006C - 0x0058)
class UEFActionSkelControl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionSkelControl");
		return ptr;
	}

};


// Class EFGame.EFActionStage
// 0x00D4 (0x012C - 0x0058)
class UEFActionStage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD4];                                      // 0x0058(0x00D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionStage");
		return ptr;
	}

};


// Class EFGame.EFMatineePathNode
// 0x002C (0x02A0 - 0x0274)
class AEFMatineePathNode : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0274(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMatineePathNode");
		return ptr;
	}


	void BreakAllConnectionsFrom();
	void BreakAllConnections();
	void BreakConnectionTo();
	void STATIC_IsConnectedTo();
	void AddConnectionTo();
	void STATIC_UpdateConnectedLineComponents();
	void STATIC_UpdateLineComponents();
};


// Class EFGame.EFGlobal
// 0x0000 (0x0058 - 0x0058)
class UEFGlobal : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGlobal");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummons
// 0x0040 (0x01F4 - 0x01B4)
class UEFSequenceSummons : public USequence
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01B4(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummons");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsBase
// 0x0014 (0x0140 - 0x012C)
class UEFSequenceSummonsBase : public USequenceOp
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x012C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsBase");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsAction
// 0x0018 (0x0158 - 0x0140)
class UEFSequenceSummonsAction : public UEFSequenceSummonsBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0140(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsAction");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionAccel
// 0x0010 (0x0168 - 0x0158)
class UEFSequenceSummonsActionAccel : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionAccel");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionAkEvent
// 0x0010 (0x0168 - 0x0158)
class UEFSequenceSummonsActionAkEvent : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionAkEvent");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionAuraBuff
// 0x0010 (0x0168 - 0x0158)
class UEFSequenceSummonsActionAuraBuff : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionAuraBuff");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionBankData
// 0x0040 (0x0198 - 0x0158)
class UEFSequenceSummonsActionBankData : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0158(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionBankData");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionCameraShake
// 0x000C (0x0164 - 0x0158)
class UEFSequenceSummonsActionCameraShake : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionCameraShake");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionCreateFX
// 0x0008 (0x0160 - 0x0158)
class UEFSequenceSummonsActionCreateFX : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionCreateFX");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionPostProcessChainTimeVarying
// 0x000C (0x0164 - 0x0158)
class UEFSequenceSummonsActionPostProcessChainTimeVarying : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionPostProcessChainTimeVarying");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSetSkeletalMesh
// 0x008C (0x01E4 - 0x0158)
class UEFSequenceSummonsActionSetSkeletalMesh : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0158(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSetSkeletalMesh");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSkeletalMeshFX
// 0x00B0 (0x0208 - 0x0158)
class UEFSequenceSummonsActionSkeletalMeshFX : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0158(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSkeletalMeshFX");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSkeletalMeshFXMaterialParam
// 0x0048 (0x01A0 - 0x0158)
class UEFSequenceSummonsActionSkeletalMeshFXMaterialParam : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0158(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSkeletalMeshFXMaterialParam");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSkillEffect
// 0x000C (0x0164 - 0x0158)
class UEFSequenceSummonsActionSkillEffect : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSkillEffect");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSequentialSkillEffect
// 0x0008 (0x016C - 0x0164)
class UEFSequenceSummonsActionSequentialSkillEffect : public UEFSequenceSummonsActionSkillEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0164(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSequentialSkillEffect");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionTimer
// 0x0010 (0x0168 - 0x0158)
class UEFSequenceSummonsActionTimer : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionTimer");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsCondition
// 0x0020 (0x0178 - 0x0158)
class UEFSequenceSummonsCondition : public UEFSequenceSummonsAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsCondition");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionTierChecker
// 0x0010 (0x0188 - 0x0178)
class UEFSequenceSummonsActionTierChecker : public UEFSequenceSummonsCondition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionTierChecker");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionTierChecker4BankData
// 0x0000 (0x0188 - 0x0188)
class UEFSequenceSummonsActionTierChecker4BankData : public UEFSequenceSummonsActionTierChecker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionTierChecker4BankData");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsComment
// 0x0038 (0x0178 - 0x0140)
class UEFSequenceSummonsComment : public UEFSequenceSummonsBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0140(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsComment");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectile
// 0x0094 (0x01D4 - 0x0140)
class UEFSequenceSummonsProjectile : public UEFSequenceSummonsBase
{
public:
	unsigned char                                      UnknownData00[0x94];                                      // 0x0140(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectile");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectileFixArea
// 0x005C (0x0230 - 0x01D4)
class UEFSequenceSummonsProjectileFixArea : public UEFSequenceSummonsProjectile
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x01D4(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectileFixArea");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectileGrenade
// 0x0014 (0x01E8 - 0x01D4)
class UEFSequenceSummonsProjectileGrenade : public UEFSequenceSummonsProjectile
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x01D4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectileGrenade");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectileMissile
// 0x0014 (0x01E8 - 0x01D4)
class UEFSequenceSummonsProjectileMissile : public UEFSequenceSummonsProjectile
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x01D4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectileMissile");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectileTrace
// 0x0028 (0x01FC - 0x01D4)
class UEFSequenceSummonsProjectileTrace : public UEFSequenceSummonsProjectile
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01D4(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectileTrace");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsData
// 0x0008 (0x0060 - 0x0058)
class UEFSequenceSummonsData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsData");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsEditorFilter
// 0x0010 (0x01C4 - 0x01B4)
class UEFSequenceSummonsEditorFilter : public USequence
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B4(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsEditorFilter");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsEditorFilterData
// 0x0034 (0x01E8 - 0x01B4)
class UEFSequenceSummonsEditorFilterData : public USequence
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x01B4(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsEditorFilterData");
		return ptr;
	}

};


// Class EFGame.EFInterpGroupGameOption
// 0x0010 (0x0068 - 0x0058)
class UEFInterpGroupGameOption : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpGroupGameOption");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAnimBlendingControl
// 0x0008 (0x0104 - 0x00FC)
class UEFInterpTrackAnimBlendingControl : public UInterpTrackAnimControl
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00FC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAnimBlendingControl");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAnimNodeBlendWeight
// 0x000C (0x00E4 - 0x00D8)
class UEFInterpTrackAnimNodeBlendWeight : public UInterpTrackSkelControlStrength
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D8(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAnimNodeBlendWeight");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAutoBlendBase
// 0x0000 (0x0058 - 0x0058)
class UEFInterpTrackAutoBlendBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAutoBlendBase");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAutoBlendColorProp
// 0x0010 (0x00E8 - 0x00D8)
class UEFInterpTrackAutoBlendColorProp : public UInterpTrackColorProp
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAutoBlendColorProp");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAutoBlendFloatProp
// 0x0010 (0x00E8 - 0x00D8)
class UEFInterpTrackAutoBlendFloatProp : public UInterpTrackFloatProp
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAutoBlendFloatProp");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAutoBlendVectorProp
// 0x0010 (0x00E8 - 0x00D8)
class UEFInterpTrackAutoBlendVectorProp : public UInterpTrackVectorProp
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAutoBlendVectorProp");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstAnimBlendingControl
// 0x0020 (0x0098 - 0x0078)
class UEFInterpTrackInstAnimBlendingControl : public UInterpTrackInstAnimControl
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstAnimBlendingControl");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstAnimNodeBlendWeight
// 0x0000 (0x005C - 0x005C)
class UEFInterpTrackInstAnimNodeBlendWeight : public UInterpTrackInstSkelControlStrength
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstAnimNodeBlendWeight");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstNearPlaneScale
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstNearPlaneScale : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstNearPlaneScale");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstPlayerClassAkEvent
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstPlayerClassAkEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstPlayerClassAkEvent");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSkelControlMulti
// 0x0010 (0x0068 - 0x0058)
class UEFInterpTrackInstSkelControlMulti : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSkelControlMulti");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSkelControlVector
// 0x0060 (0x00B8 - 0x0058)
class UEFInterpTrackInstSkelControlVector : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0058(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSkelControlVector");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSoundSet
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstSoundSet : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSoundSet");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSubtitle
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstSubtitle : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSubtitle");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSubtitleBalloon
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstSubtitleBalloon : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSubtitleBalloon");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstUnfixedPhysicBody
// 0x0008 (0x0060 - 0x0058)
class UEFInterpTrackInstUnfixedPhysicBody : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstUnfixedPhysicBody");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstVectorParticleParam
// 0x000C (0x0064 - 0x0058)
class UEFInterpTrackInstVectorParticleParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstVectorParticleParam");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstVoiceSet
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstVoiceSet : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstVoiceSet");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackNearPlaneScale
// 0x0000 (0x00D0 - 0x00D0)
class UEFInterpTrackNearPlaneScale : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackNearPlaneScale");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackPlayerClassAkEvent
// 0x0010 (0x00C8 - 0x00B8)
class UEFInterpTrackPlayerClassAkEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackPlayerClassAkEvent");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSkelControlMulti
// 0x0010 (0x00E0 - 0x00D0)
class UEFInterpTrackSkelControlMulti : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSkelControlMulti");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSkelControlVector
// 0x0060 (0x0130 - 0x00D0)
class UEFInterpTrackSkelControlVector : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00D0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSkelControlVector");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSoundSet
// 0x0010 (0x00C8 - 0x00B8)
class UEFInterpTrackSoundSet : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSoundSet");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSubtitle
// 0x002C (0x00E4 - 0x00B8)
class UEFInterpTrackSubtitle : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00B8(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSubtitle");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSubtitleBalloon
// 0x002C (0x00E4 - 0x00B8)
class UEFInterpTrackSubtitleBalloon : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00B8(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSubtitleBalloon");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackUnfixedPhysicBody
// 0x001C (0x00EC - 0x00D0)
class UEFInterpTrackUnfixedPhysicBody : public UInterpTrackBoolProp
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00D0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackUnfixedPhysicBody");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackVectorParticleParam
// 0x0008 (0x00D8 - 0x00D0)
class UEFInterpTrackVectorParticleParam : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackVectorParticleParam");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackVoiceSet
// 0x0010 (0x00C8 - 0x00B8)
class UEFInterpTrackVoiceSet : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackVoiceSet");
		return ptr;
	}

};


// Class EFGame.EFTexture2D
// 0x001C (0x0248 - 0x022C)
class UEFTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x022C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTexture2D");
		return ptr;
	}

};


// Class EFGame.EFTextureRenderTarget
// 0x000C (0x0158 - 0x014C)
class UEFTextureRenderTarget : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x014C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTextureRenderTarget");
		return ptr;
	}

};


// Class EFGame.EFTextureWeb
// 0x000B (0x012F - 0x0124)
class UEFTextureWeb : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xB];                                       // 0x0124(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTextureWeb");
		return ptr;
	}

};


// Class EFGame.EFMinimapData
// 0x0054 (0x00AC - 0x0058)
class UEFMinimapData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0058(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMinimapData");
		return ptr;
	}

};


// Class EFGame.EFExpandedMinimapVolume
// 0x0050 (0x0308 - 0x02B8)
class AEFExpandedMinimapVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFExpandedMinimapVolume");
		return ptr;
	}

};


// Class EFGame.EFInDoorVolume
// 0x002C (0x02E4 - 0x02B8)
class AEFInDoorVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x02B8(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInDoorVolume");
		return ptr;
	}

};


// Class EFGame.EFMinimapVolume
// 0x0090 (0x0348 - 0x02B8)
class AEFMinimapVolume : public AEFVolume
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x02B8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMinimapVolume");
		return ptr;
	}

};


// Class EFGame.EFVoyagemapVolume
// 0x0004 (0x034C - 0x0348)
class AEFVoyagemapVolume : public AEFMinimapVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0348(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFVoyagemapVolume");
		return ptr;
	}

};


// Class EFGame.EFTriggerDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFTriggerDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTriggerDataDefine");
		return ptr;
	}

};


// Class EFGame.EFQuestDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFQuestDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFQuestDataDefine");
		return ptr;
	}

};


// Class EFGame.EFNPCFunctionDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFNPCFunctionDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFNPCFunctionDataDefine");
		return ptr;
	}

};


// Class EFGame.EFUIDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFUIDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIDataDefine");
		return ptr;
	}

};


// Class EFGame.EFLookInfoDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFLookInfoDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLookInfoDataDefine");
		return ptr;
	}

};


// Class EFGame.EFLOAGoDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFLOAGoDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLOAGoDataDefine");
		return ptr;
	}

};


// Class EFGame.EFConst
// 0x0000 (0x0058 - 0x0058)
class UEFConst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFConst");
		return ptr;
	}

};


// Class EFGame.EFGFxHUDWrapper
// 0x0000 (0x0594 - 0x0594)
class AEFGFxHUDWrapper : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxHUDWrapper");
		return ptr;
	}


	void PostRender();
	void PostBeginPlay();
	void Destroyed();
};


// Class EFGame.EFSeqAct_SetPostProcessEffectProperties
// 0x0008 (0x0160 - 0x0158)
class UEFSeqAct_SetPostProcessEffectProperties : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetPostProcessEffectProperties");
		return ptr;
	}


	void GetPostProcessEffects();
};


// Class EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties
// 0x0054 (0x01B4 - 0x0160)
class UEFSeqAct_SetAmbientOcclusionEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0160(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_SetBlurEffectProperties
// 0x0004 (0x0164 - 0x0160)
class UEFSeqAct_SetBlurEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0160(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetBlurEffectProperties");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_SetDOFEffectProperties
// 0x002C (0x018C - 0x0160)
class UEFSeqAct_SetDOFEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0160(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetDOFEffectProperties");
		return ptr;
	}


	void SetProperties();
	void Activated();
};


// Class EFGame.EFSeqAct_SetDOFAndBloomEffectProperties
// 0x0020 (0x01AC - 0x018C)
class UEFSeqAct_SetDOFAndBloomEffectProperties : public UEFSeqAct_SetDOFEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x018C(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetDOFAndBloomEffectProperties");
		return ptr;
	}


	void SetProperties();
};


// Class EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect
// 0x0014 (0x01A0 - 0x018C)
class UEFSeqAct_SetDOFBloomMotionBlurEffect : public UEFSeqAct_SetDOFEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x018C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect");
		return ptr;
	}


	void SetProperties();
};


// Class EFGame.EFSeqAct_SetMaterialEffectProperties
// 0x0010 (0x0170 - 0x0160)
class UEFSeqAct_SetMaterialEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetMaterialEffectProperties");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_SetMotionBlurEffectProperties
// 0x0014 (0x0174 - 0x0160)
class UEFSeqAct_SetMotionBlurEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0160(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetMotionBlurEffectProperties");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_SetUberPostProcessEffect
// 0x0068 (0x01C8 - 0x0160)
class UEFSeqAct_SetUberPostProcessEffect : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0160(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetUberPostProcessEffect");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_TogglePostProcessEffect
// 0x0004 (0x0164 - 0x0160)
class UEFSeqAct_TogglePostProcessEffect : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0160(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_TogglePostProcessEffect");
		return ptr;
	}


	void Activated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
