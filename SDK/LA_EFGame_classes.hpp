#pragma once

// Lost Ark (1.12.11.0) SDK

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
	struct FString                                     Desc;                                                     // 0x0058(0x0010) (NonTransactional, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      IsActive : 1;                                             // 0x0068(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              StartTime;                                                // 0x006C(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              InterpTime;                                               // 0x0070(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     ParamName;                                                // 0x0074(0x0010) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FLinearColor                                StartValue;                                               // 0x0084(0x0010) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FLinearColor                                EndValue;                                                 // 0x0094(0x0010) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     ParamName;                                                // 0x0074(0x0010) (Interp, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              StartValue;                                               // 0x0084(0x0004) (Interp, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              EndValue;                                                 // 0x0088(0x0004) (Interp, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              fTime;                                                    // 0x0058(0x0004)
	struct FVector                                     vPreValue;                                                // 0x005C(0x000C)
	float                                              fMotionRange;                                             // 0x0068(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              fMotionCycle;                                             // 0x006C(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EAxis>                                 eMotionAxis;                                              // 0x0070(0x0001) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              fMotionVel;                                               // 0x0058(0x0004) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EAxis>                                 eMotionAxis;                                              // 0x005C(0x0001) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              fTime;                                                    // 0x0058(0x0004)
	struct FRotator                                    vPreValue;                                                // 0x005C(0x000C)
	float                                              fMotionRange;                                             // 0x0068(0x0004) (Interp, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              fMotionCycle;                                             // 0x006C(0x0004) (Interp, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EAxis>                                 eMotionAxis;                                              // 0x0070(0x0001) (Interp, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     Desc;                                                     // 0x0058(0x0010) (EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      IsActive : 1;                                             // 0x0068(0x0004) (EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              StartTime;                                                // 0x006C(0x0004) (EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              InterpTime;                                               // 0x0070(0x0004) (EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     LookInfoKey;                                              // 0x0074(0x0010) (Interp, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              RelativeSpawnTime;                                        // 0x0084(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DurationTime;                                             // 0x0088(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FEFParticleSystemInfo                       ParticleInfo;                                             // 0x008C(0x0158)
	class UEFParticleData*                             ParticleDataInfo;                                         // 0x01E4(0x0008) (Interp, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSkipIfOwnerIsHidden : 1;                                 // 0x01EC(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              RelativeSpawnTime;                                        // 0x0074(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              Duration;                                                 // 0x0078(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UAnimNotify_Trails*                          AnimTrails;                                               // 0x007C(0x0008) (RepNotify, NonTransactional, EditorOnly, ArchetypeProperty, EditHide)
	TEnumAsByte<EFEQUIP_PART>                          TrailParts;                                               // 0x0084(0x0001) (RepNotify, NonTransactional, EditorOnly, ArchetypeProperty, EditHide)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                TrailPartsIndex;                                          // 0x0088(0x0004) (RepNotify, NonTransactional, EditorOnly, ArchetypeProperty, EditHide)
	unsigned long                                      bSkipIfOwnerIsHidden : 1;                                 // 0x008C(0x0004) (RepNotify, NonTransactional, EditorOnly, ArchetypeProperty, EditHide)

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
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0274(0x0008)

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
	struct FName                                       AttachSocketName;                                         // 0x0588(0x0008)
	class UEFPartsSkelComponent*                       PartsMeshComponent;                                       // 0x0590(0x0008)
	class APawn*                                       ParentPawn;                                               // 0x0598(0x0008)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x05A0(0x0008)
	int                                                AttachedPSIIndex;                                         // 0x05A8(0x0004)
	class AEFPawn*                                     AttachOtherPawn;                                          // 0x05AC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCharacterParts");
		return ptr;
	}


	void OnParticleSystemFinished();
	void ClearAttachedPSIIndex();
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
	TArray<struct FEFAutoCompleteCommand>              EFAutoCompleteCommandList;                                // 0x0268(0x0010)
	unsigned long                                      bInputPaused : 1;                                         // 0x0278(0x0004)

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
	float                                              ApplyOwnerSizeRate;                                       // 0x0284(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      DecalCollisionColor;                                      // 0x0288(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDrawBoundingBox : 1;                                     // 0x028C(0x0004)
	unsigned long                                      bDrawNonColliding : 1;                                    // 0x028C(0x0004)
	unsigned long                                      bAlwaysRenderIfSelected : 1;                              // 0x028C(0x0004)

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
	unsigned long                                      bSkipChangeLocation : 1;                                  // 0x0410(0x0004)
	unsigned long                                      bFirstUpdate : 1;                                         // 0x0410(0x0004)
	unsigned long                                      bSpawnedByParticleModule : 1;                             // 0x0410(0x0004)
	unsigned long                                      bDropDistortion : 1;                                      // 0x0410(0x0004)
	struct FVector                                     SpawnLocation;                                            // 0x0414(0x000C)

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
	unsigned long                                      bUseFloorChecks : 1;                                      // 0x0284(0x0004) (Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFDecalCollisionComponent*                  FloorCollisionComponent;                                  // 0x0288(0x0008) (Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalFloorActor");
		return ptr;
	}


	void GetBoundingCylinder();
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
	int                                                FracturedId;                                              // 0x0310(0x0004) (NonTransactional, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bShowLikeMouseOver : 1;                                   // 0x04C0(0x0004)
	unsigned long                                      bNameTagAlpha : 1;                                        // 0x04C0(0x0004)
	unsigned long                                      bNameTagMonShowAll : 1;                                   // 0x04C0(0x0004)
	unsigned long                                      bIsPIE : 1;                                               // 0x04C0(0x0004)
	unsigned long                                      bIsMapLoaded : 1;                                         // 0x04C0(0x0004)
	struct FNameTagAlphaInfo                           sNameTagAlpha;                                            // 0x04C4(0x0010)
	struct FNameTagMonInfo                             sDefaultNameTagMon;                                       // 0x04D4(0x0004)
	struct FNameTagMonInfo                             sMouseOverNameTagMon;                                     // 0x04D8(0x0004)
	float                                              fNameTagHeight;                                           // 0x04DC(0x0004)
	struct FString                                     DefaultServerAddress;                                     // 0x04E0(0x0010)
	int                                                DefaultServerPort;                                        // 0x04F0(0x0004)
	int                                                DefaultPCClassId;                                         // 0x04F4(0x0004)
	struct FString                                     DefaultPCName;                                            // 0x04F8(0x0010)
	struct FString                                     DefaultLoginID;                                           // 0x0508(0x0010)
	struct FString                                     DefaultLoginPass;                                         // 0x0518(0x0010)
	int                                                DefaultMapID;                                             // 0x0528(0x0004)
	int                                                CurrentMapIndex;                                          // 0x052C(0x0004)
	TEnumAsByte<EZoneLevel>                            MapLevel;                                                 // 0x0530(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	struct FString                                     QuestBalloonTalkFxPath;                                   // 0x0534(0x0010)
	struct FString                                     FriendshipFxPath;                                         // 0x0544(0x0010)
	struct FString                                     QuestUnableStartFxPath;                                   // 0x0554(0x0010)
	struct FString                                     QuestReadyFxPath;                                         // 0x0564(0x0010)
	struct FString                                     QuestStartFxPath;                                         // 0x0574(0x0010)
	struct FString                                     QuestProgressFxPath;                                      // 0x0584(0x0010)
	struct FString                                     QuestCompleteFxPath;                                      // 0x0594(0x0010)
	struct FString                                     StartQuestPropFxPath;                                     // 0x05A4(0x0010)
	struct FString                                     QuestBasicInteractionFxPath;                              // 0x05B4(0x0010)
	struct FString                                     QuestEmptyMeshInteractionFxPath;                          // 0x05C4(0x0010)
	struct FString                                     QuestVolumeInteractionFxPath;                             // 0x05D4(0x0010)
	struct FString                                     QuestLifeProfessionInteractionFxPath;                     // 0x05E4(0x0010)
	struct FString                                     StaticIslandWithContinentQuestFxPath;                     // 0x05F4(0x0010)
	struct FString                                     LifeProfessionMonsterHuntingMarkFxPath;                   // 0x0604(0x0010)
	struct FString                                     QuestFxAttachBoneName;                                    // 0x0614(0x0010)
	struct FVector                                     QuestRelativeLoc;                                         // 0x0624(0x000C)
	struct FString                                     AnchorModeCamAnim;                                        // 0x0630(0x0010)
	float                                              AnchorModeCamDegree;                                      // 0x0640(0x0004)
	struct FString                                     InteractionCamAnim_Ship;                                  // 0x0644(0x0010)
	int                                                InteractionDistance_Ship;                                 // 0x0654(0x0004)
	struct FString                                     InteractionCamAnim_Low;                                   // 0x0658(0x0010)
	int                                                InteractionDistance_Low;                                  // 0x0668(0x0004)
	struct FString                                     InteractionCamAnim_Middle;                                // 0x066C(0x0010)
	int                                                InteractionDistance_Middle;                               // 0x067C(0x0004)
	struct FString                                     InteractionCamAnim_High;                                  // 0x0680(0x0010)
	int                                                InteractionDistance_High;                                 // 0x0690(0x0004)
	int                                                ApproachEvent_Distance;                                   // 0x0694(0x0004)
	struct FString                                     InteractionNextLinkSound;                                 // 0x0698(0x0010)
	TArray<class UMaterialInstanceConstant*>           EffectFenceMICs;                                          // 0x06A8(0x0010)
	TArray<class AEFSceneCapture2DActor*>              CaptureActors;                                            // 0x06B8(0x0010)
	TArray<class AEFSceneCaptureObjectLocation*>       CaptureObjectLocations;                                   // 0x06C8(0x0010)
	TArray<class AActor*>                              HeadStatusActors;                                         // 0x06D8(0x0010)
	TArray<int>                                        HeadStatusActorIndexPools;                                // 0x06E8(0x0010)
	TArray<class AActor*>                              PoolBindActors;                                           // 0x06F8(0x0010)

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
	void RestartPlayer();
	void InitGame();
	void GenericPlayerInitialization();
};


// Class EFGame.EFMotionSkeletalMeshActor
// 0x002C (0x033C - 0x0310)
class AEFMotionSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	struct FVector                                     vOriginLocation;                                          // 0x0310(0x000C)
	struct FRotator                                    vOriginRotation;                                          // 0x031C(0x000C)
	unsigned long                                      bSaveSMCLocNRot : 1;                                      // 0x0328(0x0004)
	unsigned long                                      bMotionToggle : 1;                                        // 0x0328(0x0004) (RepNotify, RepRetry, ProtectedWrite, EditHide)
	TArray<class UEFActorMotionBase*>                  MotionArr;                                                // 0x032C(0x0010) (RepNotify, RepRetry, ProtectedWrite, EditHide)

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
	struct FVector                                     vOriginLocation;                                          // 0x0310(0x000C)
	struct FRotator                                    vOriginRotation;                                          // 0x031C(0x000C)
	unsigned long                                      bSaveSMCLocNRot : 1;                                      // 0x0328(0x0004)
	unsigned long                                      bMotionToggle : 1;                                        // 0x0328(0x0004) (RepNotify, RepRetry, ProtectedWrite, EditHide)
	TArray<class UEFActorMotionBase*>                  MotionArr;                                                // 0x032C(0x0010) (RepNotify, RepRetry, ProtectedWrite, EditHide)

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
	TArray<struct FEFAnimDataItem>                     AnimDataList;                                             // 0x0274(0x0010)
	int                                                CurAnimDataIndex;                                         // 0x0284(0x0004)
	struct FName                                       CurAnimSeqName;                                           // 0x0288(0x0008)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0290(0x0008) (NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFSkeletalMeshComponent*                    Mesh;                                                     // 0x0298(0x0008) (NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFSkeletalMeshComponent*>            ManagedPartMeshs;                                         // 0x02A0(0x0010)
	TArray<struct FEFExtraSkelMeshInfo>                ExtraSkelMeshList;                                        // 0x02B0(0x0010)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x02C0(0x0010)
	class AActor*                                      OwnerActor;                                               // 0x02D0(0x0008)
	struct FString                                     OwnerLookInfoKey;                                         // 0x02D8(0x0010)
	float                                              NonAniGuaranteeDuration;                                  // 0x02E8(0x0004)
	unsigned long                                      bActionSpawned : 1;                                       // 0x02EC(0x0004)
	unsigned long                                      NeedStopAction : 1;                                       // 0x02EC(0x0004)
	TArray<struct FString>                             ActionNotifyTagList;                                      // 0x02F0(0x0010)
	float                                              PlayRate;                                                 // 0x0300(0x0004)
	int                                                AttachedPSIIndex;                                         // 0x0304(0x0004)

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
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0588(0x0008) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFActionObjectGroup*                        ActionObjectGroup;                                        // 0x0590(0x0008)
	unsigned long                                      bDefaultMeshHide : 1;                                     // 0x0598(0x0004)
	unsigned long                                      bRootMotionFallingCheck : 1;                              // 0x0598(0x0004)
	unsigned long                                      bCanDoFloorConform : 1;                                   // 0x0598(0x0004)
	unsigned long                                      bCanDoStepsSmoothing : 1;                                 // 0x0598(0x0004) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      IsMatineePlay : 1;                                        // 0x0598(0x0004)
	unsigned long                                      PhysFallingByAction : 1;                                  // 0x0598(0x0004)
	unsigned long                                      bMergeAction : 1;                                         // 0x0598(0x0004)
	unsigned long                                      bIgnoreBlockActors : 1;                                   // 0x0598(0x0004)
	unsigned long                                      bEnableMaxRootMotionDistance : 1;                         // 0x0598(0x0004)
	unsigned long                                      RootMotionBeHitControlHeight : 1;                         // 0x0598(0x0004)
	unsigned long                                      bForceUniformVelocity : 1;                                // 0x0598(0x0004)
	unsigned long                                      bNeedMoveChangedBase : 1;                                 // 0x0598(0x0004)
	unsigned long                                      IsJustFinishedCinematicAnim : 1;                          // 0x0598(0x0004)
	unsigned long                                      bUseDynamicFoliage : 1;                                   // 0x0598(0x0004)
	unsigned long                                      bValidCurrentFloorTypeCheck : 1;                          // 0x0598(0x0004)
	unsigned long                                      bUseMeshMerge : 1;                                        // 0x0598(0x0004)
	unsigned long                                      bHideOnNextMeshMergeRequest : 1;                          // 0x0598(0x0004)
	unsigned long                                      bDisableJumpOffPawn : 1;                                  // 0x0598(0x0004)
	unsigned long                                      bGrabbed : 1;                                             // 0x0598(0x0004)
	unsigned long                                      bIgnoreStartFalling : 1;                                  // 0x0598(0x0004)
	unsigned long                                      bCinematicUnfixed : 1;                                    // 0x0598(0x0004)
	unsigned long                                      bCinematicChangeAngularSpring : 1;                        // 0x0598(0x0004)
	class UEFSkeletalMeshComponent*                    ExtendMesh;                                               // 0x059C(0x0008)
	TEnumAsByte<ERootBoneAxis>                         RootBoneOption[0x3];                                      // 0x05A4(0x0001)
	TEnumAsByte<EPhysics>                              ForceActionPhysics;                                       // 0x05A7(0x0001)
	TEnumAsByte<EBlockPCRootMotionSkillPenetrateType>  BlockPCRootMotionSkillPenetrate;                          // 0x05A8(0x0001)
	TEnumAsByte<EFMATERIAL_FOOTSTEP>                   CurrentFloorType;                                         // 0x05A9(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05AA(0x0002) MISSED OFFSET
	struct FVector                                     LastFloorConformLocation;                                 // 0x05AC(0x000C)
	float                                              MTO_FloorConformZTranslation;                             // 0x05B8(0x0004)
	float                                              MTO_BlendedFloorConformZTranslation;                      // 0x05BC(0x0004)
	struct FVector                                     MRO_FloorConformRotationAxis;                             // 0x05C0(0x000C)
	float                                              MRO_FloorConformRotationAngle;                            // 0x05CC(0x0004)
	float                                              MRO_BlendedFloorConformRotationAngle;                     // 0x05D0(0x0004)
	float                                              MTO_MeshLocSmootherZOffset;                               // 0x05D4(0x0004)
	struct FVector                                     MeshOffset;                                               // 0x05D8(0x000C)
	struct FVector                                     LastLocation;                                             // 0x05E4(0x000C)
	float                                              DefaultGroundSpeed;                                       // 0x05F0(0x0004)
	float                                              GravityFactor;                                            // 0x05F4(0x0004)
	struct FVector                                     SkillStartPos;                                            // 0x05F8(0x000C)
	struct FVector                                     HitReactionPushLoc;                                       // 0x0604(0x000C)
	struct FVector                                     LastRootMotionAccumTranslation;                           // 0x0610(0x000C)
	struct FVector                                     RootMotionStartLoc;                                       // 0x061C(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0628(0x0008) MISSED OFFSET
	struct FMatrix                                     RootMotionStartRot;                                       // 0x0630(0x0040)
	struct FVector                                     TargetRootMotionLoc;                                      // 0x0670(0x000C)
	float                                              MaxRootMotionDistance;                                    // 0x067C(0x0004)
	float                                              MaxRootMotionSquaredDistance;                             // 0x0680(0x0004)
	int                                                ChangeRootMotion;                                         // 0x0684(0x0004)
	int                                                PrevChangeRootMotion;                                     // 0x0688(0x0004)
	float                                              RootMotionBeHitControlSetTime;                            // 0x068C(0x0004)
	float                                              RootMotionBeHitControlDuration;                           // 0x0690(0x0004)
	float                                              RootMotionBeHitMaxHeight;                                 // 0x0694(0x0004)
	struct FRotator                                    MoveRotation;                                             // 0x0698(0x000C)
	class AEFPawn*                                     BlockedPawnWhenSkillStart;                                // 0x06A4(0x0008)
	class AActor*                                      CinematicActor;                                           // 0x06AC(0x0008)
	struct FBasedPosition                              CachedBasePositionBySelf;                                 // 0x06B4(0x0038)
	struct FBasedPosition                              CachedBasePositionByTarget;                               // 0x06EC(0x0038)
	struct FVector                                     SyncDeltaMove;                                            // 0x0724(0x000C)
	struct FVector                                     SaveLocation;                                             // 0x0730(0x000C)
	struct FRotator                                    SaveRotation;                                             // 0x073C(0x000C)
	struct FPlayerLocationInfo                         CinematicPlayerLocation;                                  // 0x0748(0x0008)
	struct FVector                                     UniformVelocity;                                          // 0x0750(0x000C)
	class AEFPawn*                                     DrivenEFVehicle;                                          // 0x075C(0x0008)
	struct FQWord                                      TryNextMoveTransitIndex;                                  // 0x0764(0x0008)
	TArray<class UMaterialInstanceConstant*>           AffectedFoliageMICs;                                      // 0x076C(0x0010)
	int                                                AttachedPSIIndex;                                         // 0x077C(0x0004)
	struct FEFBasedLocation                            PrevFloorCheckLocation;                                   // 0x0780(0x0010)
	struct FVector                                     LastRootMotionPosition;                                   // 0x0790(0x000C)
	float                                              LastRootMotionRecordedTime;                               // 0x079C(0x0004)
	class UEFMainSkelComponent*                        OriginMesh;                                               // 0x07A0(0x0008)
	struct FPointer                                    MeshMergeSourceLookInfoPointer;                           // 0x07A8(0x0008)
	TArray<struct FPointer>                            MeshMergeSourcePartsArray;                                // 0x07B0(0x0010)
	struct FVector                                     Momentum;                                                 // 0x07C0(0x000C)
	unsigned char                                      UnknownData02[0x48];                                      // 0x07CC(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFPawn.TrailNotifyToParticleSystemMap
	class UAnimNodeAimOffset*                          AimOffsetAnimNode;                                        // 0x0814(0x0008)
	TArray<class AEFParticleSkeletalMeshActor*>        ActionParticleSkeletalMeshActors;                         // 0x081C(0x0010)
	struct FEFCharacterAfterImageEffectInfo            AfterImageInfo;                                           // 0x082C(0x0030)
	TArray<struct FEFAfterImageChildInfo>              AfterImageChildren;                                       // 0x085C(0x0010)
	class UEFActionObjectGroup*                        ActionGroup;                                              // 0x086C(0x0008)
	class UEFData_SkelControlGroup*                    SkelControlGroup;                                         // 0x0874(0x0008)
	struct FActorTickDropRate                          TickDropRate;                                             // 0x087C(0x0014)
	int                                                TickDropRatePriority;                                     // 0x0890(0x0004)
	TArray<int>                                        CinematicUnfixedBodyIndices;                              // 0x0894(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPawn");
		return ptr;
	}


	void StopAfterImageEffect();
	void StartAfterImageEffect();
	void GetAnimTrailParticleSystem();
	void ApplyFluidSurfaceContinuousForce();
	void ApplyFluidSurfaceImpact();
	void NotifyChangedBase();
	void BaseChange();
	void MAT_FinishAnimControl();
	void MAT_BeginAnimControl();
	void InterpolationFinished();
	void InterpolationStarted();
	void RigidBodyCollision();
	void DoKismetAttachment();
	void AttachmentCameraActor();
	void GetGravityZ();
	void OnForceFieldDestroy();
	void CreateForceField();
	void ExplodeActor();
	void FinishDyingDelay();
	void SetDefaultStateColor();
	void SetStateColor();
	void AttackFreezeAnim();
	void AttackContinueAnim();
	void SetPPOutlineWidth();
	void SetPPOutlineColor();
	void SetPPOutline();
	void SetCloakMode();
	void SetOccludedOutlineColor();
	void SetOccludedOutline();
	void OutsideWorldBounds();
	void FellOutOfWorld();
	void Landed();
	void Falling();
	void SetDesiredRotation();
	void OnParticleSystemFinished();
	void PostInitAll();
	void ClearAttachedPSIIndex();
	void Destroyed();
	void GetDefaultCameraMode();
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
	class ULightEnvironmentComponent*                  PickupPropLightEnvironment;                               // 0x08A4(0x0008)
	int                                                PickupPropLightEnvironmentCount;                          // 0x08AC(0x0004)
	unsigned long                                      ControlledByTrackMove : 1;                                // 0x08B0(0x0004)
	unsigned long                                      ControlledByTrackMoveOnServer : 1;                        // 0x08B0(0x0004)
	float                                              TrackMoveStartPosition;                                   // 0x08B4(0x0004)

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
	int                                                TransitIndex;                                             // 0x08A4(0x0004)
	struct FVector                                     CollisionBoxExtent;                                       // 0x08A8(0x000C)

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
	TEnumAsByte<EFMATERIAL_FOOTSTEP>                   MaterialFootstep;                                         // 0x0058(0x0001) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFInputState>                       m_InputStateFlow;                                         // 0x0790(0x0010)
	unsigned long                                      bGamePadInput : 1;                                        // 0x07A0(0x0004)
	unsigned long                                      bInteractionMode : 1;                                     // 0x07A0(0x0004)
	unsigned long                                      bCallFromTargetCastMode : 1;                              // 0x07A0(0x0004)
	unsigned long                                      bHideSwitch : 1;                                          // 0x07A0(0x0004)
	unsigned long                                      bPickMe : 1;                                              // 0x07A0(0x0004)
	unsigned long                                      bForceMoveReservation : 1;                                // 0x07A0(0x0004)
	unsigned long                                      bForceMoveRelease : 1;                                    // 0x07A0(0x0004)
	unsigned long                                      bCruiseMode : 1;                                          // 0x07A0(0x0004)
	unsigned long                                      bCruiseBoostMode : 1;                                     // 0x07A0(0x0004)
	unsigned long                                      bPrevCruiseMode : 1;                                      // 0x07A0(0x0004)
	struct FEFInputCommand                             m_CurInputCommand;                                        // 0x07A4(0x0040)
	TEnumAsByte<EFPlayerControlInputCondition>         m_CurInputCondition;                                      // 0x07E4(0x0001)
	TEnumAsByte<ETargetCastMode>                       TargetCastMode;                                           // 0x07E5(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07E6(0x0002) MISSED OFFSET
	float                                              fCheckPathTime;                                           // 0x07E8(0x0004)
	float                                              fCheckPickEffectTime;                                     // 0x07EC(0x0004)
	float                                              fUpdateMaxPathTime;                                       // 0x07F0(0x0004)
	class AActor*                                      HitWorldActor;                                            // 0x07F4(0x0008)
	class AActor*                                      HitActor;                                                 // 0x07FC(0x0008)
	struct FVector                                     HitWorldLocation;                                         // 0x0804(0x000C)
	struct FVector                                     HitActorLocation;                                         // 0x0810(0x000C)
	class AEmitter*                                    PickingEffect;                                            // 0x081C(0x0008)
	TArray<class AEFPickingEmitter*>                   PickingEffectArr;                                         // 0x0824(0x0010)
	TArray<class AEFPickingEmitter*>                   PickingEffectUseArr;                                      // 0x0834(0x0010)
	int                                                PickingEffectCount;                                       // 0x0844(0x0004)
	class UEFPlayerInput*                              EFPlayerInput;                                            // 0x0848(0x0008)
	class AActor*                                      SelectedActor;                                            // 0x0850(0x0008)
	class AActor*                                      PreSelectedActor;                                         // 0x0858(0x0008)
	class AActor*                                      OverActor;                                                // 0x0860(0x0008)
	struct FVector                                     OverActorHitLocation;                                     // 0x0868(0x000C)
	float                                              SelectedMaxDistance;                                      // 0x0874(0x0004)
	struct FVector                                     ForceMoveReservationPos;                                  // 0x0878(0x000C)
	struct FQWord                                      DebugOverObjectId;                                        // 0x0884(0x0008)
	struct FEFBasedLocation                            LastMoveToPos;                                            // 0x088C(0x0010)
	struct FVector                                     CruiseModeDirection;                                      // 0x089C(0x000C)
	float                                              fPressedMoveIgnoreRadius;                                 // 0x08A8(0x0004)
	float                                              fPressedMoveIgnoreAngle;                                  // 0x08AC(0x0004)
	struct FPostProcessSettings                        WithOutDominantLightPPSettings;                           // 0x08B0(0x0174)
	float                                              WithOutDominantLightPPAlpha;                              // 0x0A24(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerController");
		return ptr;
	}


	void ConsoleCommand();
	void ProcessCinematic();
	void GetPlayerInitPosition();
	void GetPlayerViewPointQuat();
	void GetPlayerViewPoint();
	void DisplayDebug();
	void DrawHUD();
	void SpawnDefaultHUD();
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
	struct FVector2D                                   CurMouseDeltaPos;                                         // 0x02B8(0x0008)
	struct FVector2D                                   OldMouseDeltaPos;                                         // 0x02C0(0x0008)
	struct FIntPoint                                   CurMousePos;                                              // 0x02C8(0x0008)
	struct FIntPoint                                   OldMousePos;                                              // 0x02D0(0x0008)
	unsigned long                                      bCtrl : 1;                                                // 0x02D8(0x0004)
	unsigned long                                      bShift : 1;                                               // 0x02D8(0x0004)
	unsigned long                                      bAlt : 1;                                                 // 0x02D8(0x0004)
	unsigned long                                      bMouseLButton_Pressed : 1;                                // 0x02D8(0x0004)
	unsigned long                                      bMouseLButton_Released : 1;                               // 0x02D8(0x0004)
	unsigned long                                      bMouseLButton_Repeated : 1;                               // 0x02D8(0x0004)
	unsigned long                                      bMouseRButton_Pressed : 1;                                // 0x02D8(0x0004)
	unsigned long                                      bMouseRButton_Released : 1;                               // 0x02D8(0x0004)
	unsigned long                                      bMouseRButton_Repeated : 1;                               // 0x02D8(0x0004)
	unsigned long                                      bMouseButtonSwap : 1;                                     // 0x02D8(0x0004)
	unsigned long                                      bMoveKey_Pressed : 1;                                     // 0x02D8(0x0004)
	unsigned long                                      bMoveKey_Released : 1;                                    // 0x02D8(0x0004)
	unsigned long                                      bMoveKey_Repeated : 1;                                    // 0x02D8(0x0004)
	unsigned char                                      bRotateButton;                                            // 0x02DC(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	float                                              MouseDeltaX;                                              // 0x02E0(0x0004)
	float                                              MouseDeltaY;                                              // 0x02E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerInput");
		return ptr;
	}


	void DefaultPositionControlPanel();
	void FocusControlPanel();
	void ToggleControlPanel();
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
	struct FQWord                                      CasterId;                                                 // 0x02D0(0x0008)
	int                                                ProjectileId;                                             // 0x02D8(0x0004)
	struct FPointer                                    ProjectileData;                                           // 0x02DC(0x0008)
	struct FPointer                                    ProjectileBankData;                                       // 0x02E4(0x0008)
	float                                              InstigatorModelScaleRate;                                 // 0x02EC(0x0004)
	int                                                TrailEmitterPSGroupIndex;                                 // 0x02F0(0x0004)
	int                                                AttachedPSIIndex;                                         // 0x02F4(0x0004)
	struct FSet_Mirror                                 TouchedActorList;                                         // 0x02F8(0x0048)
	struct FEFBasedLocation                            StartLocation;                                            // 0x0340(0x0010)
	struct FEFBasedLocation                            TargetLocation;                                           // 0x0350(0x0010)
	float                                              Lifetime;                                                 // 0x0360(0x0004)
	float                                              CurTime;                                                  // 0x0364(0x0004)
	float                                              CurSpeed;                                                 // 0x0368(0x0004)
	float                                              MaxDistance;                                              // 0x036C(0x0004)
	float                                              CreateDelay;                                              // 0x0370(0x0004)
	unsigned long                                      PlayerControl : 1;                                        // 0x0374(0x0004)
	unsigned long                                      SendedRemovePacket : 1;                                   // 0x0374(0x0004)
	unsigned long                                      HitSkip : 1;                                              // 0x0374(0x0004)
	unsigned long                                      DestroyCalled : 1;                                        // 0x0374(0x0004)
	unsigned long                                      RemoveCalled : 1;                                         // 0x0374(0x0004)
	unsigned long                                      ArriveMaxDistance : 1;                                    // 0x0374(0x0004)
	unsigned long                                      TimerStopWhenBaseDestroy : 1;                             // 0x0374(0x0004)
	unsigned long                                      CycleHitFalg : 1;                                         // 0x0374(0x0004)
	unsigned long                                      AmITarget : 1;                                            // 0x0374(0x0004)
	TEnumAsByte<EUnpublishReason>                      DestroyReasonforPacket;                                   // 0x0378(0x0001)
	TEnumAsByte<ESkillEffectTarget>                    TargetType;                                               // 0x0379(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x037A(0x0002) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x037C(0x0008)
	int                                                TargetActorLimbId;                                        // 0x0384(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0388(0x0008)
	int                                                HitNpcPartMask;                                           // 0x0390(0x0004)
	float                                              DestroyAfterTime;                                         // 0x0394(0x0004)
	struct FVector                                     BaseVelocity;                                             // 0x0398(0x000C)
	class AActor*                                      MoveBasedActor;                                           // 0x03A4(0x0008)
	struct FVector                                     PrevMoveBasedLocation;                                    // 0x03AC(0x000C)
	struct FRotator                                    PrevMoveBasedRotation;                                    // 0x03B8(0x000C)
	float                                              RevScale;                                                 // 0x03C4(0x0004)
	int                                                JudgmentRotationSpeed;                                    // 0x03C8(0x0004)
	struct FRotator                                    RelativeJudgmentRotation;                                 // 0x03CC(0x000C)
	float                                              ElapsedTime;                                              // 0x03D8(0x0004)
	int                                                AccelType;                                                // 0x03DC(0x0004)
	float                                              AccelStartValue;                                          // 0x03E0(0x0004)
	float                                              AccelMaxSpeedElapseTime;                                  // 0x03E4(0x0004)
	TArray<struct FEFProjectileTimerData>              Timer;                                                    // 0x03E8(0x0010)
	TArray<struct FEFProjectileAkEventData>            AkEventDatas;                                             // 0x03F8(0x0010)
	class USkeletalMeshComponent*                      SkeletalMeshComponentData;                                // 0x0408(0x0008)
	TArray<struct FEFProjectileMultiUseData>           SkeletalMeshMaterialParameterArray;                       // 0x0410(0x0010)
	int                                                FromSkillLV;                                              // 0x0420(0x0004)
	int                                                FromSkillID;                                              // 0x0424(0x0004)
	int                                                FromSkillStageIndex;                                      // 0x0428(0x0004)
	int                                                FromEffectID;                                             // 0x042C(0x0004)
	int                                                Tier[0x3];                                                // 0x0430(0x0004)
	struct FEFProjectileCustomData                     CustomData;                                               // 0x043C(0x0018)
	float                                              CycleHitLife;                                             // 0x0454(0x0004)
	struct FVector                                     CycleHitBeforeLoc;                                        // 0x0458(0x000C)
	struct FSet_Mirror                                 HittedCycleHitTargetList;                                 // 0x0464(0x0048)
	struct FVector                                     BeforeLocation;                                           // 0x04AC(0x000C)
	TArray<class AEFParticleSkeletalMeshActor*>        ActionParticleSkeletalMeshActors;                         // 0x04B8(0x0010)
	TArray<int>                                        Lineage;                                                  // 0x04C8(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectile");
		return ptr;
	}


	void ClearAttachedPSIIndex();
	void Destroyed();
	void BaseChange();
	void NotifyBaseChange();
	void ProcessTouch();
};


// Class EFGame.EFProjectileFixArea
// 0x0048 (0x0520 - 0x04D8)
class AEFProjectileFixArea : public AEFProjectile
{
public:
	int                                                SpawnedStartFX;                                           // 0x04D8(0x0004)
	int                                                SpawnedStartDecalFX;                                      // 0x04DC(0x0004)
	int                                                SpawnedLoopFX;                                            // 0x04E0(0x0004)
	int                                                SpawnedLoopDecalFX;                                       // 0x04E4(0x0004)
	struct FRotator                                    RandomRotate;                                             // 0x04E8(0x000C)
	unsigned long                                      PlayEndEffect : 1;                                        // 0x04F4(0x0004)
	float                                              LastRepeatTime;                                           // 0x04F8(0x0004)
	float                                              StartFXParticleOriginDrawScale;                           // 0x04FC(0x0004)
	float                                              StartDecalParticleOriginDrawScale;                        // 0x0500(0x0004)
	float                                              LoopFXParticleOriginDrawScale;                            // 0x0504(0x0004)
	float                                              LoopDecalParticleOriginDrawScale;                         // 0x0508(0x0004)
	float                                              StartIndexDecalOriginDrawScale;                           // 0x050C(0x0004)
	TArray<struct FEFSummonsFixAreaStartIndexDecal>    StartIndexDecalInfos;                                     // 0x0510(0x0010)

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
	float                                              ExplodeUpperHeight;                                       // 0x04D8(0x0004)
	float                                              TimeTilNextGravUpdate;                                    // 0x04DC(0x0004)

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
	float                                              TargetSearchRadius;                                       // 0x04D8(0x0004)
	float                                              TargetSearchStartTime;                                    // 0x04DC(0x0004)
	float                                              TurnVelocity;                                             // 0x04E0(0x0004)
	float                                              TargetSearchAngle;                                        // 0x04E4(0x0004)
	unsigned long                                      bEnableTraceGiveUp : 1;                                   // 0x04E8(0x0004)
	unsigned long                                      bTargetChanged : 1;                                       // 0x04E8(0x0004)
	unsigned long                                      bTraceGiveUpFinish : 1;                                   // 0x04E8(0x0004)
	unsigned long                                      bEnableTraceDuration : 1;                                 // 0x04E8(0x0004)
	float                                              TraceGiveUpAngle;                                         // 0x04EC(0x0004)
	float                                              TraceGiveUpRadius;                                        // 0x04F0(0x0004)
	TEnumAsByte<ETraceProjectileState>                 TraceState;                                               // 0x04F4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	float                                              TraceDurationRemain;                                      // 0x04F8(0x0004)

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
	int                                                AttachedPSIIndex;                                         // 0x0310(0x0004)
	unsigned long                                      bTraceGameLand : 1;                                       // 0x0314(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshActor");
		return ptr;
	}


	void ClearAttachedPSIIndex();
	void NotifyChangedBase();
	void BaseChange();
	void Destroyed();
};


// Class EFGame.EFSkeletalMeshActorLookInfoMAT
// 0x00A0 (0x03C0 - 0x0320)
class AEFSkeletalMeshActorLookInfoMAT : public ASkeletalMeshActorMAT
{
public:
	struct FString                                     LookInfoKey;                                              // 0x0320(0x0010) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	class UEFData_SkelControlGroup*                    SkelControlGroup;                                         // 0x0330(0x0008) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	struct FEFLookInfoSMActorPartMaterialInfo          DefaultMeshMaterialInfo;                                  // 0x0338(0x0030)
	TArray<struct FEFLookInfoSMActorAdditionalPartInfo> AdditionalPartsEx;                                        // 0x0368(0x0010) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	TArray<struct FEFLookInfoSMActorSocketAttachedPartInfo> AdditionalPartsAttachedToSocketEx;                        // 0x0378(0x0010) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	TArray<class USkeletalMeshComponent*>              AdditionalParts;                                          // 0x0388(0x0010)
	TArray<struct FAttachment>                         AdditionalPartsAttachedToSocket;                          // 0x0398(0x0010)
	int                                                SpawnedParticleGroupID;                                   // 0x03A8(0x0004)
	unsigned long                                      bApplyLookInfoOnLoad : 1;                                 // 0x03AC(0x0004) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bLookInfoApplied : 1;                                     // 0x03AC(0x0004)
	unsigned long                                      bSpawnDefaultParticles : 1;                               // 0x03AC(0x0004) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bLowerFidelity : 1;                                       // 0x03AC(0x0004)
	unsigned long                                      bCinematicUnfixed : 1;                                    // 0x03AC(0x0004)
	unsigned long                                      bCinematicChangeAngularSpring : 1;                        // 0x03AC(0x0004)
	TArray<int>                                        CinematicUnfixedBodyIndices;                              // 0x03B0(0x0010)

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
	unsigned long                                      bAttachWeaponToBattleStateSockeet : 1;                    // 0x03C0(0x0004) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bNameTagAdded : 1;                                        // 0x03C0(0x0004)
	struct FString                                     NameTagString;                                            // 0x03C4(0x0010) (RepNotify, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	TEnumAsByte<EPCLookInfoActorNameTagType>           NameTagType;                                              // 0x03D4(0x0001) (RepNotify, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)

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
	unsigned long                                      bMeshHide : 1;                                            // 0x08E8(0x0004)
	unsigned long                                      bDynamicPhysicsParamEnable : 1;                           // 0x08E8(0x0004)
	struct FEFDynamicPhysicsParam                      DynamicPhysicsParamInfo;                                  // 0x08EC(0x0018)
	TArray<class UMaterialInterface*>                  DefaultMaterialsMIC;                                      // 0x0904(0x0010)
	TArray<struct FEFMaterialVariation>                MaterialsVariation;                                       // 0x0914(0x0010)
	class USkeletalMesh*                               SkeletalMeshForSocket;                                    // 0x0924(0x0008)
	unsigned char                                      UnknownData00[0x48];                                      // 0x092C(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFSkeletalMeshComponent.SocketInfoMap

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
	unsigned long                                      bDefaultMeshHide : 1;                                     // 0x0974(0x0004)
	int                                                LODIndexForPhysics;                                       // 0x0978(0x0004)
	TArray<struct FName>                               PhysicsBoneListForPhysics;                                // 0x097C(0x0010)
	TArray<unsigned char>                              PhysicsBoneIndexListForPhysics;                           // 0x098C(0x0010)
	TArray<struct FName>                               RequiredBoneListForPhysics;                               // 0x099C(0x0010)
	TArray<struct FName>                               FixedBoneListForPhysics;                                  // 0x09AC(0x0010)

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
	class AEFPawn*                                     ParentPawn;                                               // 0x0974(0x0008)
	struct FPointer                                    PartsMeshPointer;                                         // 0x097C(0x0008)
	struct FEFSocketGroup                              SocketGroup;                                              // 0x0984(0x0030)
	struct FName                                       AttachSocketName;                                         // 0x09B4(0x0008)
	class UAnimNodeSlot*                               CustomAnimNode;                                           // 0x09BC(0x0008)
	class UMorphNodeMultiPose*                         MorphNodePose;                                            // 0x09C4(0x0008)
	TArray<int>                                        DefaultParticleSystemList;                                // 0x09CC(0x0010)
	TArray<struct FPointer>                            DefaultParticleDataArray;                                 // 0x09DC(0x0010)
	TArray<class UEFParticleData*>                     DefaultParticleDataArr;                                   // 0x09EC(0x0010)
	TArray<int>                                        AttributeParticleSystemList;                              // 0x09FC(0x0010)
	TArray<class UEFParticleData*>                     AttributeParticleDataArr;                                 // 0x0A0C(0x0010)
	TArray<int>                                        AttributeBaseDefaultParticleSpawnIndexArr;                // 0x0A1C(0x0010)
	TArray<struct FPointer>                            AttributeBaseDefaultParticleDataArray;                    // 0x0A2C(0x0010)
	TArray<class UEFParticleData*>                     AttributeBaseDefaultParticleDataArr;                      // 0x0A3C(0x0010)
	float                                              TranslucencySortKeyFactor;                                // 0x0A4C(0x0004)
	class UTexture*                                    AOTexture;                                                // 0x0A50(0x0008)

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
	TEnumAsByte<ETextureAddress>                       SamplerAddressX;                                          // 0x0140(0x0001)
	TEnumAsByte<ETextureAddress>                       SamplerAddressY;                                          // 0x0141(0x0001)
	TEnumAsByte<ETextureAddress>                       SamplerAddressZ;                                          // 0x0142(0x0001)

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
	unsigned long                                      bCollisionEnable : 1;                                     // 0x02B0(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              fLastTimeInVolume;                                        // 0x02B4(0x0004)

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
	int                                                SpawnIndex;                                               // 0x02B8(0x0004) (Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	class AActor*                                      DeployPropActor;                                          // 0x02BC(0x0008)
	class AEFMacroCameraActor*                         MacroCameraActor;                                         // 0x02C4(0x0008) (NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bUseMacroCamera : 1;                                      // 0x02CC(0x0004) (NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bPendingOnEnter : 1;                                      // 0x02CC(0x0004)
	float                                              TargetPointDistance;                                      // 0x02D0(0x0004) (NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	float                                              EnterElapsedTime;                                         // 0x02D4(0x0004) (NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	float                                              LeaveElapsedTime;                                         // 0x02D8(0x0004) (NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	class USeqAct_Interp*                              Matinee;                                                  // 0x02DC(0x0008) (NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	TEnumAsByte<EPropVolumeType>                       VolumePropType;                                           // 0x02E4(0x0001)

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
	unsigned long                                      bStandalone : 1;                                          // 0x0AD4(0x0004)
	unsigned long                                      bCreateServerObjectPC : 1;                                // 0x0AD4(0x0004)
	unsigned long                                      bCreateServerObjectNPC : 1;                               // 0x0AD4(0x0004)
	struct FMap_Mirror                                 GroundHeightCache;                                        // 0x0AD8(0x0048)
	TArray<class AInstancedFoliageActor*>              InstancedFoliageActorsCache;                              // 0x0B20(0x0010)
	TArray<class AEFCharPerfOptionOverrideVolume*>     CachedCharPerfOptionOverrideVolumes;                      // 0x0B30(0x0010)
	struct FPointer                                    AsyncMeshMerger;                                          // 0x0B40(0x0008)
	struct FAsyncMeshMergerInfo                        CurrentMeshMergeInfo;                                     // 0x0B48(0x0030)
	TArray<struct FAsyncMeshMergerInfo>                AsyncMeshMergers;                                         // 0x0B78(0x0010)
	TArray<struct FMergedSkelMeshInfo>                 CachedMergedSkelMeshes;                                   // 0x0B88(0x0010)
	struct FVector                                     AsyncMeshMergeBaseLocation;                               // 0x0B98(0x000C)
	float                                              ParticleLODDistance;                                      // 0x0BA4(0x0004)

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
	struct FMAPINFO_CAMERAVALUE                        DefaultCameraValue;                                       // 0x0058(0x002C) (NonTransactional, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UTexture*                                    IBLTexture;                                               // 0x0084(0x0008) (RepNotify, RepRetry, ProtectedWrite, ArchetypeProperty)
	unsigned long                                      CPL_bEnabled : 1;                                         // 0x008C(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bConvert : 1;                                             // 0x008C(0x0004)
	unsigned long                                      bOverrideGlobalMaxDrawDistance : 1;                       // 0x008C(0x0004) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CPL_Brightness;                                           // 0x0090(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      CPL_LightColor;                                           // 0x0094(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CPL_Radius;                                               // 0x0098(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CPL_FalloffExponent;                                      // 0x009C(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CPL_ShadowFalloffExponent;                                // 0x00A0(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     CPL_Translation;                                          // 0x00A4(0x000C) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FLightingChannelContainer                   CPL_LightingChannels;                                     // 0x00B0(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FEFDMap_PathEngineData                      PathEngineData;                                           // 0x00B4(0x0020) (NonTransactional, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              GlobalMaxDrawDistance;                                    // 0x00D4(0x0004) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	int                                                PrevAimMode;                                              // 0x01B0(0x0004)
	TEnumAsByte<EFAnimNodeAimMode>                     AimMode;                                                  // 0x01B4(0x0001) (Interp, NonTransactional, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FVector                                     MoveDir;                                                  // 0x01CC(0x000C)

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
	int                                                iForceActiveIndex;                                        // 0x01F4(0x0004) (RepNotify, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                iNextForceActiveIndex;                                    // 0x01F8(0x0004)
	float                                              fSkipBlendInTime;                                         // 0x01FC(0x0004)

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
	float                                              InterpolateFactor;                                        // 0x0208(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bActiveLookAt : 1;                                        // 0x020C(0x0004)
	struct FVector2D                                   TargetLookDir;                                            // 0x0210(0x0008)

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
	class UAkEvent*                                    AkEvent;                                                  // 0x0060(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSwitchCharacterAKEvent : 1;                              // 0x0068(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFollowActor : 1;                                         // 0x0068(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FName                                       BoneName;                                                 // 0x006C(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	class UAkEvent*                                    AkEvent;                                                  // 0x0060(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSwitchCharacterAKEvent : 1;                              // 0x0068(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FName                                       BoneName;                                                 // 0x006C(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                Probability;                                              // 0x0074(0x0004) (NotForConsole, EditTextBox, CrossLevelPassive)

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
	struct FName                                       NotifyName;                                               // 0x0060(0x0008) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EFDropItemEventType>                   DropItemEvent;                                            // 0x0068(0x0001) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bLimitDisplacement : 1;                                   // 0x00EC(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bNoZSpring : 1;                                           // 0x00EC(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bRotateX : 1;                                             // 0x00EC(0x0004) (RepNotify, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bRotateY : 1;                                             // 0x00EC(0x0004) (RepNotify, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bRotateZ : 1;                                             // 0x00EC(0x0004) (RepNotify, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bHadValidStrength : 1;                                    // 0x00EC(0x0004)
	float                                              MaxDisplacement;                                          // 0x00F0(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              SpringStiffness;                                          // 0x00F4(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              SpringDamping;                                            // 0x00F8(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              ErrorResetThresh;                                         // 0x00FC(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              ThisTimstep;                                              // 0x0100(0x0004)
	struct FVector                                     BoneLocation;                                             // 0x0104(0x000C)
	struct FVector                                     BoneVelocity;                                             // 0x0110(0x000C)

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
	float                                              BaseBoneScale;                                            // 0x00EC(0x0004) (NotForConsole, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	int                                                nDB_ID;                                                   // 0x0058(0x0004)
	int                                                nFieldCount;                                              // 0x005C(0x0004)
	int                                                nDataCount;                                               // 0x0060(0x0004)
	TArray<struct FEFTable_Define>                     aDataDefine;                                              // 0x0064(0x0010)
	TArray<struct FEFTable_DataRow>                    aDataRows;                                                // 0x0074(0x0010)
	struct FString                                     SourceFilePath;                                           // 0x0084(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileTimestamp;                                      // 0x0094(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	class AEFPlayerCamera*                             PlayerCamera;                                             // 0x0058(0x0008)
	float                                              DefaultFOV;                                               // 0x0060(0x0004)
	unsigned long                                      bZoomInterpolation : 1;                                   // 0x0064(0x0004)
	unsigned long                                      ApplySkeletalMeshForceLOD : 1;                            // 0x0064(0x0004)
	unsigned long                                      bResetCameraInterpolation : 1;                            // 0x0064(0x0004)
	float                                              MaxZoomDist;                                              // 0x0068(0x0004)
	float                                              MinZoomDist;                                              // 0x006C(0x0004)
	float                                              IncrementZoom;                                            // 0x0070(0x0004)
	float                                              CurrentZoomDist;                                          // 0x0074(0x0004)
	float                                              DesiredZoomDist;                                          // 0x0078(0x0004)
	float                                              CurrentYaw;                                               // 0x007C(0x0004)
	float                                              CurrentPitch;                                             // 0x0080(0x0004)
	float                                              CurrentFOV;                                               // 0x0084(0x0004)
	struct FVector                                     RelativeCenterPos;                                        // 0x0088(0x000C)
	struct FVector                                     CurrentRelativeCenterPos;                                 // 0x0094(0x000C)
	struct FName                                       CameraTargetBoneName;                                     // 0x00A0(0x0008)

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
	void ActivateSkeletalMeshForceLOD();
	void ChangeZoomStep();
	void CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void BecomeViewTarget();
	void UpdateCamera();
	void ResetInterpolation();
	void OnBecomeInActive();
	void OnBecomeActive();
	void Init();
};


// Class EFGame.EFBackViewCamera
// 0x0010 (0x00B8 - 0x00A8)
class UEFBackViewCamera : public UEFCameraBase
{
public:
	float                                              BackDistance;                                             // 0x00A8(0x0004)
	float                                              FrontDistance;                                            // 0x00AC(0x0004)
	float                                              RightDistance;                                            // 0x00B0(0x0004)
	float                                              UpDistance;                                               // 0x00B4(0x0004)

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
	TArray<struct FCutomizingZoomStepInfo>             ZoomStepInfos;                                            // 0x00A8(0x0010)
	int                                                CurrentZoomStep;                                          // 0x00B8(0x0004)
	float                                              InterpolationRatio;                                       // 0x00BC(0x0004)
	float                                              InZoomStepDiff;                                           // 0x00C0(0x0004)

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
	struct FVector                                     FinalViewLocation;                                        // 0x00A8(0x000C)
	struct FRotator                                    FinalViewRotation;                                        // 0x00B4(0x000C)
	float                                              FinalViewFOV;                                             // 0x00C0(0x0004)
	unsigned long                                      bIsTracking : 1;                                          // 0x00C4(0x0004)
	struct FVector                                     TrackingStart;                                            // 0x00C8(0x000C)
	struct FVector                                     TrackingEnd;                                              // 0x00D4(0x000C)
	float                                              OriginalFOVForRecoil;                                     // 0x00E0(0x0004)
	float                                              FOVVelocity;                                              // 0x00E4(0x0004)
	float                                              CameraSpeed;                                              // 0x00E8(0x0004)

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
	float                                              DesiredFOV;                                               // 0x00A8(0x0004)
	float                                              DesiredYaw;                                               // 0x00AC(0x0004)
	float                                              MinimumYaw;                                               // 0x00B0(0x0004)
	float                                              MaximumYaw;                                               // 0x00B4(0x0004)
	float                                              DesiredPitch;                                             // 0x00B8(0x0004)
	float                                              MinimumPitch;                                             // 0x00BC(0x0004)
	float                                              MaximumPitch;                                             // 0x00C0(0x0004)
	struct FVector                                     DesiredLocation;                                          // 0x00C4(0x000C)
	struct FVector                                     CurrentLocation;                                          // 0x00D0(0x000C)
	float                                              RotationSensitivity;                                      // 0x00DC(0x0004)
	float                                              MoveSensitivity;                                          // 0x00E0(0x0004)
	float                                              FovBlendTime;                                             // 0x00E4(0x0004)
	float                                              RotationBlendTime;                                        // 0x00E8(0x0004)
	float                                              MoveBlendTime;                                            // 0x00EC(0x0004)
	unsigned long                                      bInitialize : 1;                                          // 0x00F0(0x0004)

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
	TArray<struct FZoomStepInfo>                       IsometricZoomStepInfos;                                   // 0x00A8(0x0010)
	TArray<struct FZoomStepInfo>                       CurIsometricZoomStepInfos;                                // 0x00B8(0x0010)
	struct FOverrideZoomStepInfo                       OverrideZoomStep;                                         // 0x00C8(0x000C)
	float                                              ChangeSkeletalMeshForceLODZoomDistance;                   // 0x00D4(0x0004)
	int                                                ZoomOutAdditionSkeletalMeshForceLODIndex;                 // 0x00D8(0x0004)
	TArray<float>                                      BoostFactorForMipmaps;                                    // 0x00DC(0x0010)
	int                                                CurrentZoomStep;                                          // 0x00EC(0x0004)
	float                                              InterpolationRatio;                                       // 0x00F0(0x0004)
	float                                              ZoomOutInterpolationRatio;                                // 0x00F4(0x0004)
	float                                              InZoomStepDiff;                                           // 0x00F8(0x0004)
	unsigned long                                      bUseLookAtBlend : 1;                                      // 0x00FC(0x0004)
	unsigned long                                      bInitLookAtBlend : 1;                                     // 0x00FC(0x0004)
	unsigned long                                      bShowLookAtBlend : 1;                                     // 0x00FC(0x0004)
	float                                              LookAtBlendDiv;                                           // 0x0100(0x0004)
	float                                              LookAtBlendMul;                                           // 0x0104(0x0004)
	struct FVector                                     InterpLookAt;                                             // 0x0108(0x000C)
	struct FVector                                     LastCenterPos;                                            // 0x0114(0x000C)
	float                                              LastCameraInterpSpeedXY;                                  // 0x0120(0x0004)
	float                                              LastCameraInterpSpeedZ;                                   // 0x0124(0x0004)
	struct FVector                                     FixedLookAtPos;                                           // 0x0128(0x000C)
	struct FFixedCameraInterpSpeed                     FixedCameraInterpInfo;                                    // 0x0134(0x000C)
	int                                                CurrCamPostProcessID;                                     // 0x0140(0x0004)
	TEnumAsByte<EISOCamPPMethod>                       ChangePostProcessMethod;                                  // 0x0144(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	float                                              CurrOverridePostProcessAlpha;                             // 0x0148(0x0004)

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
	void ActivateSkeletalMeshForceLOD();
	void ChangeZoomStep();
	void CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void ResetInterpolation();
};


// Class EFGame.EFMacroCamera
// 0x0080 (0x0128 - 0x00A8)
class UEFMacroCamera : public UEFCameraBase
{
public:
	class AEFVolumeProp*                               LastVolumeProp;                                           // 0x00A8(0x0008)
	class AEFVolumeProp*                               VolumeProp;                                               // 0x00B0(0x0008)
	TArray<class AEFMacroCameraActor*>                 CameraList;                                               // 0x00B8(0x0010)
	float                                              CameraPosValue;                                           // 0x00C8(0x0004)
	float                                              TargetCameraPosValue;                                     // 0x00CC(0x0004)
	class UEFCameraBase*                               PrevCamera;                                               // 0x00D0(0x0008)
	unsigned long                                      StartTransition : 1;                                      // 0x00D8(0x0004)
	unsigned long                                      EndTransition : 1;                                        // 0x00D8(0x0004)
	float                                              StartTime;                                                // 0x00DC(0x0004)
	float                                              EndTime;                                                  // 0x00E0(0x0004)
	struct FTPOV                                       StartPOV;                                                 // 0x00E4(0x001C)
	struct FTPOV                                       EndPOV;                                                   // 0x0100(0x001C)
	float                                              ConstraintPitch;                                          // 0x011C(0x0004)
	float                                              maxPitch;                                                 // 0x0120(0x0004)
	float                                              IncrementRot;                                             // 0x0124(0x0004)

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
	float                                              DesiredFOV;                                               // 0x00A8(0x0004)
	float                                              DesiredYaw;                                               // 0x00AC(0x0004)
	float                                              MinimumYaw;                                               // 0x00B0(0x0004)
	float                                              MaximumYaw;                                               // 0x00B4(0x0004)
	float                                              DesiredPitch;                                             // 0x00B8(0x0004)
	float                                              MinimumPitch;                                             // 0x00BC(0x0004)
	float                                              MaximumPitch;                                             // 0x00C0(0x0004)
	struct FVector                                     DesiredLocation;                                          // 0x00C4(0x000C)
	struct FVector                                     CurrentLocation;                                          // 0x00D0(0x000C)
	float                                              RotationSensitivity;                                      // 0x00DC(0x0004)
	float                                              MoveSensitivity;                                          // 0x00E0(0x0004)
	float                                              FovBlendTime;                                             // 0x00E4(0x0004)
	float                                              RotationBlendTime;                                        // 0x00E8(0x0004)
	float                                              MoveBlendTime;                                            // 0x00EC(0x0004)
	unsigned long                                      bInitialize : 1;                                          // 0x00F0(0x0004)
	float                                              MoveSpeed;                                                // 0x00F4(0x0004)
	struct FVector                                     CharacterDesiredLocation;                                 // 0x00F8(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPanningCamera");
		return ptr;
	}


	void OnBecomeInActive();
	void OnBecomeActive();
	void EndPanningCamera();
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
	float                                              maxPitch;                                                 // 0x00A8(0x0004)
	float                                              IncrementRot;                                             // 0x00AC(0x0004)

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
	TArray<struct FViewPointInfo>                      ViewPoints;                                               // 0x00A8(0x0010)
	int                                                ActivateCameraCutDistanceSeq;                             // 0x00B8(0x0004)
	struct FString                                     PlayedCameraPostProcessKey;                               // 0x00BC(0x0010)

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
	void ActivateSkeletalMeshForceLOD();
	void ChangeZoomStep();
	void CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void ResetInterpolation();
};


// Class EFGame.EFTPSCamera
// 0x0080 (0x0128 - 0x00A8)
class UEFTPSCamera : public UEFCameraBase
{
public:
	struct FTPSCameraInfo                              StartCameraInfo;                                          // 0x00A8(0x0040)
	float                                              ChangeSkeletalMeshForceLODZoomDistance;                   // 0x00E8(0x0004)
	int                                                ZoomOutAdditionSkeletalMeshForceLODIndex;                 // 0x00EC(0x0004)
	struct FRotator                                    LastRot;                                                  // 0x00F0(0x000C)
	struct FVector                                     LastCenterPos;                                            // 0x00FC(0x000C)
	float                                              LastCameraInterpSpeedXY;                                  // 0x0108(0x0004)
	float                                              LastCameraInterpSpeedZ;                                   // 0x010C(0x0004)
	struct FVector                                     FixedLookAtPos;                                           // 0x0110(0x000C)
	struct FFixedCameraInterpSpeed                     FixedCameraInterpInfo;                                    // 0x011C(0x000C)

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
	void ActivateSkeletalMeshForceLOD();
	void ChangeZoomStep();
	void CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void ResetInterpolation();
};


// Class EFGame.EFWatchCamera
// 0x0030 (0x00D8 - 0x00A8)
class UEFWatchCamera : public UEFCameraBase
{
public:
	TArray<struct FEFWatchCameraModeInfo>              WatchCameraModeTypes;                                     // 0x00A8(0x0010)
	struct FEFWatchCameraModeInfo                      ApplyCameraModeType;                                      // 0x00B8(0x0010)
	TEnumAsByte<EFWatchCameraMode>                     WatchCameraMode;                                          // 0x00C8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	struct FVector                                     FixedLookAtPos;                                           // 0x00CC(0x000C)

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
	class UEFCameraShakePlayGroup*                     EFShakeGroup;                                             // 0x008C(0x0008)
	int                                                MaxShakeAmplitudeSize;                                    // 0x0094(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraModifier_CameraShake");
		return ptr;
	}


	void AddCameraShakeGame();
	void RemoveGameCameraShake();
	void OnRemoveGameCameraShake();
	void OnAddGameCameraShake();
	void ModifyCamera();
	void RemoveAllEFViewShakes();
	void RemoveEFViewShake();
	void AddEFCameraViewShake();
	void RemoveAllCameraShakes();
};


// Class EFGame.EFCameraShakePlayGroup
// 0x0018 (0x0070 - 0x0058)
class UEFCameraShakePlayGroup : public UObject
{
public:
	int                                                NextActivateShakeID;                                      // 0x0058(0x0004)
	TArray<struct FEFShakeInstance>                    ActivateShakeInstances;                                   // 0x005C(0x0010)
	int                                                MaxAmplitudeSize;                                         // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraShakePlayGroup");
		return ptr;
	}


	void UpdateViewShake();
	void PreUpdateViewShake();
	void RemoveAllViewShake();
	void RemoveViewShake();
	void AddViewShakeInstance();
	void AddViewShake();
};


// Class EFGame.EFCameraViewShake
// 0x006C (0x00C4 - 0x0058)
class UEFCameraViewShake : public UObject
{
public:
	int                                                GroupPriority;                                            // 0x0058(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	float                                              MaxDistance;                                              // 0x005C(0x0004) (RepNotify, Interp, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive)
	float                                              AttenuateStartDistance;                                   // 0x0060(0x0004) (RepNotify, Interp, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive)
	float                                              Duration;                                                 // 0x0064(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlendInTime;                                              // 0x0068(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlendOutTime;                                             // 0x006C(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVOscillator                                LocOscillation;                                           // 0x0070(0x0024) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FFOscillator                                FOVOscillation;                                           // 0x0094(0x000C) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FROscillator                                RotOscillation;                                           // 0x00A0(0x0024) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	class UCameraAnim*                                 Anim;                                                     // 0x0058(0x0008) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite)
	float                                              AnimPlayRate;                                             // 0x0060(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite)
	float                                              AnimScale;                                                // 0x0064(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite)
	float                                              AnimBlendInTime;                                          // 0x0068(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite)
	float                                              AnimBlendOutTime;                                         // 0x006C(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite)
	unsigned long                                      bRandomAnimSegment : 1;                                   // 0x0070(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite)
	unsigned long                                      bForceFinished : 1;                                       // 0x0070(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite)
	float                                              RandomAnimSegmentDuration;                                // 0x0074(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite)

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
	unsigned long                                      bActivateInputRotMode : 1;                                // 0x0450(0x0004)
	unsigned long                                      bBlendOutRotMode : 1;                                     // 0x0450(0x0004)
	unsigned long                                      bMouseRotation : 1;                                       // 0x0450(0x0004)
	unsigned long                                      bMouseRestore : 1;                                        // 0x0450(0x0004)
	unsigned long                                      MouseDoubleClickCheckStart : 1;                           // 0x0450(0x0004)
	float                                              BlendOutTime;                                             // 0x0454(0x0004)
	float                                              BlendOutToGo;                                             // 0x0458(0x0004)
	struct FRotator                                    InputOffsetRot;                                           // 0x045C(0x000C)
	struct FVector                                     InputOffsetLoc;                                           // 0x0468(0x000C)
	float                                              RestorePlayTime;                                          // 0x0474(0x0004)
	float                                              RestoreTime;                                              // 0x0478(0x0004)
	struct FDouble                                     MouseDoubleClickStartTime;                                // 0x047C(0x0008)
	struct FIntPoint                                   MouseDoubleClickStartPos;                                 // 0x0484(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInputRotCameraActor");
		return ptr;
	}


	void GetCameraView();
	void EndViewTarget();
	void BecomeViewTarget();
	void ActivateInputRotMode();
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
	class AEFVolumeProp*                               VolumeProp;                                               // 0x00B8(0x0008)
	TArray<class AEFMacroCameraActor*>                 CameraList;                                               // 0x00C0(0x0010)

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
	class AEFVolumeProp*                               VolumeProp;                                               // 0x0450(0x0008)
	class AEFMacroCameraActor*                         PrevCamera;                                               // 0x0458(0x0008) (RepNotify, NonTransactional, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class AEFMacroCameraActor*                         NextCamera;                                               // 0x0460(0x0008) (RepNotify, NonTransactional, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              MoveDuration;                                             // 0x0468(0x0004) (RepNotify, NonTransactional, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FMacroCameraConnection>              Connections;                                              // 0x046C(0x0010)
	struct FVector                                     SplineActorTangent;                                       // 0x047C(0x000C)
	TArray<class AEFMacroCameraSplineActor*>           LinksFrom;                                                // 0x0488(0x0010)
	struct FVector                                     TargetPoint;                                              // 0x0498(0x000C) (RepNotify, Interp, NonTransactional, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04A4(0x000C) MISSED OFFSET
	struct FMatrix                                     BaseMatrix;                                               // 0x04B0(0x0040)
	unsigned long                                      LockRotationToTargetPoint : 1;                            // 0x04F0(0x0004) (RepNotify, Interp, NonTransactional, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      MoveWithTargetPoint : 1;                                  // 0x04F0(0x0004) (RepNotify, Interp, NonTransactional, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DistanceFromTargetPoint;                                  // 0x04F4(0x0004) (RepNotify, Interp, NonTransactional, EditTextBox, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCameraSplineActor");
		return ptr;
	}


	void BreakAllConnections();
	void BreakConnectionTo();
	void IsConnectedTo();
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
	class UEFCameraBase*                               IsometricCamera;                                          // 0x05D4(0x0008)
	class UClass*                                      IsometricCameraClass;                                     // 0x05DC(0x0008)
	class UEFCameraBase*                               ThridPersonCamera;                                        // 0x05E4(0x0008)
	class UClass*                                      ThridPersonCameraClass;                                   // 0x05EC(0x0008)
	class UEFCameraBase*                               MacroCamera;                                              // 0x05F4(0x0008)
	class UClass*                                      MacroCameraClass;                                         // 0x05FC(0x0008)
	class UEFCameraBase*                               CustomizingCamera;                                        // 0x0604(0x0008)
	class UClass*                                      CustomizingCameraClass;                                   // 0x060C(0x0008)
	class UEFCameraBase*                               InteractionCamera;                                        // 0x0614(0x0008)
	class UClass*                                      InteractionCameraClass;                                   // 0x061C(0x0008)
	class UEFCameraBase*                               FreeCamera;                                               // 0x0624(0x0008)
	class UClass*                                      FreeCameraClass;                                          // 0x062C(0x0008)
	class UEFCameraBase*                               WatchCamera;                                              // 0x0634(0x0008)
	class UClass*                                      WatchCameraClass;                                         // 0x063C(0x0008)
	class UEFCameraBase*                               BackViewCamera;                                           // 0x0644(0x0008)
	class UClass*                                      BackViewCameraClass;                                      // 0x064C(0x0008)
	class UEFCameraBase*                               PanningCamera;                                            // 0x0654(0x0008)
	class UClass*                                      PanningCameraClass;                                       // 0x065C(0x0008)
	class UEFCameraBase*                               TPSCamera;                                                // 0x0664(0x0008)
	class UClass*                                      TPSCameraClass;                                           // 0x066C(0x0008)
	class UEFCameraBase*                               EditorViewCamera;                                         // 0x0674(0x0008)
	class UClass*                                      EditorViewCameraClass;                                    // 0x067C(0x0008)
	class UEFCameraBase*                               TopViewCamera;                                            // 0x0684(0x0008)
	class UClass*                                      TopViewCameraClass;                                       // 0x068C(0x0008)
	class UEFCameraBase*                               CurrentCamera;                                            // 0x0694(0x0008)
	class UEFCameraBase*                               LastCamera;                                               // 0x069C(0x0008)
	int                                                DefaultGameSkeletalMeshForceLOD;                          // 0x06A4(0x0004)
	unsigned long                                      bUpdateOccludedActor : 1;                                 // 0x06A8(0x0004)
	unsigned long                                      bUpdateTranslucentActor : 1;                              // 0x06A8(0x0004)
	unsigned long                                      bDebugOccludedActorCollisionLine : 1;                     // 0x06A8(0x0004)
	unsigned long                                      bRequiredClearBackupMatineeCamera : 1;                    // 0x06A8(0x0004)
	unsigned long                                      bUseTargetBlend : 1;                                      // 0x06A8(0x0004)
	unsigned long                                      bPossessViewTargetChangeMode : 1;                         // 0x06A8(0x0004)
	unsigned long                                      bUseVehicleFOVAngle : 1;                                  // 0x06A8(0x0004)
	float                                              OccludedActorBlendMaxTime;                                // 0x06AC(0x0004)
	TArray<struct FOccludedActorInfo>                  OccludedStaticActors;                                     // 0x06B0(0x0010)
	TArray<struct FOccludedActorInfo>                  OccludedDynamicActors;                                    // 0x06C0(0x0010)
	float                                              fOccludedOutlineWidth;                                    // 0x06D0(0x0004)
	float                                              fOccludedOutlineColorScale;                               // 0x06D4(0x0004)
	struct FVector                                     vOccludedOutlineColor;                                    // 0x06D8(0x000C)
	class ACameraActor*                                AttachCameraActor;                                        // 0x06E4(0x0008)
	struct FVector                                     LastTargetLocation;                                       // 0x06EC(0x000C)
	class APawn*                                       OverTarget;                                               // 0x06F8(0x0008)
	TArray<struct FString>                             OverTargetList;                                           // 0x0700(0x0010)
	int                                                OverCurTargetIndex;                                       // 0x0710(0x0004)
	class ACameraActor*                                OverBackupMatineeCamera;                                  // 0x0714(0x0008)
	float                                              OverTargetBlendTime;                                      // 0x071C(0x0004)
	float                                              OverTargetBlendExp;                                       // 0x0720(0x0004)
	float                                              TargetBlendDiv;                                           // 0x0724(0x0004)
	float                                              TargetBlendMul;                                           // 0x0728(0x0004)
	struct FEFCameraOverrideFogSettings                CamOverrideFogSettings;                                   // 0x072C(0x0008)
	float                                              CamOverrideFogAlpha;                                      // 0x0734(0x0004)
	float                                              VehicleFOVAngle;                                          // 0x0738(0x0004)
	int                                                CameraSettingID;                                          // 0x073C(0x0004)
	int                                                CameraContentsSettingID;                                  // 0x0740(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerCamera");
		return ptr;
	}


	void LoadOutlineData();
	void UpdateTranslucentActorBlend();
	void UpdateOccludedActorBlend();
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
	void ChangeCameraMode();
	void ChangeCameraContentsSetting();
	void ChangeCameraZoomStep();
	void ChangeCameraSetting();
	void ApplyVehicleFOVAngle();
	void SetVehicleFOVAngle();
	void ApplyCamOverrideFogSetting();
	void ProcessTargetCameraActorBlend();
	void ResetAttachCameraActor();
	void FindBestCameraType();
	void GetCurrentCameraMode();
	void CreateCamera();
	void PostBeginPlay();
	void GetFOV();
	void GetCameraDistance();
	void Destroyed();
	void CalcVerticalFOV();
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
	unsigned long                                      bUseTargetCastLocation : 1;                               // 0x0058(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bLocFromActorMesh : 1;                                    // 0x0058(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bApplayScaleByCharge : 1;                                 // 0x0058(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              ParticlePlayRate;                                         // 0x005C(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                TranslucencySortPriority;                                 // 0x0060(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              ScalarScaleByCharge;                                      // 0x0064(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     VectorScaleByCharge;                                      // 0x0068(0x000C) (RepNotify, Interp, NonTransactional, EditorOnly, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             ParticleData;                                             // 0x0074(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bUseHitTest : 1;                                          // 0x0058(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bApplySkillEffectDistance : 1;                            // 0x0058(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bApplyPosCurve : 1;                                       // 0x0058(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bApplyAlwaysShowHitEffect : 1;                            // 0x0058(0x0004) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bApplyShowHitEffect : 1;                                  // 0x0058(0x0004) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bApplyHitNormal : 1;                                      // 0x0058(0x0004) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bApplyHitNormalOwner : 1;                                 // 0x0058(0x0004) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	float                                              MaxBeamDistance;                                          // 0x005C(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)
	int                                                AddBeamRotationAngle;                                     // 0x0060(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)
	struct FEFParticleSystemInfo                       HitPSInfo;                                                // 0x0064(0x0158)
	struct FEFParticleSystemInfo                       HitEffectPSInfo;                                          // 0x01BC(0x0158)
	class UEFParticleData*                             HitPSDataInfo;                                            // 0x0314(0x0008) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	class UEFParticleData*                             HitEffectPSDataInfo;                                      // 0x031C(0x0008) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)

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
	unsigned long                                      bUseSocketMove : 1;                                       // 0x0058(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)
	struct FEFBeamSocketMoveInfo                       StartSocketMoveInfo;                                      // 0x005C(0x001C) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)
	struct FEFBeamSocketMoveInfo                       EndSocketMoveInfo;                                        // 0x0078(0x001C) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)

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
	unsigned long                                      bUseHitTest : 1;                                          // 0x0058(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bApplyAlwaysShowHitEffect : 1;                            // 0x0058(0x0004) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bApplyShowHitEffect : 1;                                  // 0x0058(0x0004) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bApplyHitNormal : 1;                                      // 0x0058(0x0004) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bApplyHitNormalOwner : 1;                                 // 0x0058(0x0004) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	struct FEFParticleSystemInfo                       HitPSInfo;                                                // 0x005C(0x0158)
	struct FEFParticleSystemInfo                       HitEffectPSInfo;                                          // 0x01B4(0x0158)
	class UEFParticleData*                             HitPSDataInfo;                                            // 0x030C(0x0008) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)
	class UEFParticleData*                             HitEffectPSDataInfo;                                      // 0x0314(0x0008) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)

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
	TArray<class UEFParticleDataBase*>                 ParticleDataSet;                                          // 0x0058(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class USoundCue*                                   Sound;                                                    // 0x02A8(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UParticleSystem*                             ParticleSystem;                                           // 0x02B0(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditTextBox, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEmitter");
		return ptr;
	}


	void HideSelf();
	void PostBeginPlay();
};


// Class EFGame.EFEnvironmentActionEmitter
// 0x0010 (0x02C8 - 0x02B8)
class AEFEnvironmentActionEmitter : public AEFEmitter
{
public:
	float                                              CameraOffset;                                             // 0x02B8(0x0004)
	float                                              BaseFOV;                                                  // 0x02BC(0x0004)
	class ACamera*                                     PlayerCamera;                                             // 0x02C0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentActionEmitter");
		return ptr;
	}


	void ClearExtendPool();
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
	void ClearExtendPool();
	void OnParticleSystemFinished();
};


// Class EFGame.EFEmitterPool
// 0x00B8 (0x039C - 0x02E4)
class AEFEmitterPool : public AEmitterPool
{
public:
	TArray<class UParticleSystemComponent*>            PoolPSInfoComponents;                                     // 0x02E4(0x0010)
	TArray<class UPointLightComponent*>                PoolPointLightComponents;                                 // 0x02F4(0x0010)
	TArray<class UParticleSystemComponent*>            ActivePSInfoComponents;                                   // 0x0304(0x0010)
	TArray<class UParticleSystemComponent*>            ManagedPSCs;                                              // 0x0314(0x0010)
	TArray<int>                                        PoolManagedPSCIndexs;                                     // 0x0324(0x0010)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0334(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFEmitterPool.LimitedPSCInfoMap
	TArray<struct FLimitedPSCUnit>                     LimitedPSCInfoArr;                                        // 0x037C(0x0010)
	TArray<struct FDelayedSpawnBakeDataReference>      DelayedSpawnBakeDataRefs;                                 // 0x038C(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEmitterPool");
		return ptr;
	}


	void ClearPoolPSInfoComponents();
	void OnPSInfoFinished();
	void ClearExtendPool();
};


// Class EFGame.EFEnvironmentEmitter
// 0x000C (0x02B4 - 0x02A8)
class AEFEnvironmentEmitter : public AEmitter
{
public:
	float                                              CameraOffset;                                             // 0x02A8(0x0004) (RepNotify, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class ACamera*                                     PlayerCamera;                                             // 0x02AC(0x0008)

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
	TArray<class UEFParticleGroundData*>               ParticleDataSet;                                          // 0x0058(0x0010) (RepNotify, EditorOnly, RepRetry, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFGroundParticleSystemInfo>         ParticleSet;                                              // 0x0068(0x0010)
	TArray<struct FEFGroundDecalSystemInfo>            DecalSet;                                                 // 0x0078(0x0010) (RepNotify, EditorOnly, RepRetry, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x0058(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFGroundEffectContainer.DataMap
	class UEFGroundEffect*                             DefaultRange;                                             // 0x00A0(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFGroundEffect*                             DefaultTarget;                                            // 0x00A8(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bLoop : 1;                                                // 0x02A8(0x0004)

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
	TArray<struct FEFMarkParticleSystemInfo>           ParticleSystemSet;                                        // 0x0274(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     Desc;                                                     // 0x0058(0x0010) (Interp, NonTransactional, NotForConsole)
	int                                                FXLod;                                                    // 0x0068(0x0004) (Interp, EditorOnly, ArchetypeProperty, EditHide, CrossLevelActive)
	TEnumAsByte<EF_PARTICLE_DATA_TYPE>                 ParticleDataType;                                         // 0x006C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	int                                                DataIndex;                                                // 0x0070(0x0004)
	unsigned long                                      EditorDirty : 1;                                          // 0x0074(0x0004)

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
	class UParticleSystem*                             ParticleSystem;                                           // 0x0078(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSpawnedEmitter : 1;                                      // 0x0080(0x0004) (Interp, NotForConsole, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bSpawnedEmitterAbsoluteRotation : 1;                      // 0x0080(0x0004) (Interp, NotForConsole, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bAttach : 1;                                              // 0x0080(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bIgnoreAttachLocation : 1;                                // 0x0080(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bIgnoreAttachRotation : 1;                                // 0x0080(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bIgnoreAttachWorldRotation : 1;                           // 0x0080(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bApplyLocalRotation : 1;                                  // 0x0080(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bApplyPawnRotation : 1;                                   // 0x0080(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      bUseCastShadow : 1;                                       // 0x0080(0x0004) (RepNotify, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bBeamParticle : 1;                                        // 0x0080(0x0004) (NonTransactional, RepRetry, EditTextBox)
	TEnumAsByte<EFEQUIP_PART>                          OwnerPartsType;                                           // 0x0084(0x0001) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                OwnerPartsMeshIndex;                                      // 0x0088(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	TArray<struct FString>                             OwnerBoneName;                                            // 0x008C(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	TArray<struct FString>                             OwnerSoketName;                                           // 0x009C(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	TArray<TEnumAsByte<EFPBS_SpawnType>>               OwnerBoneSocketSpawnType;                                 // 0x00AC(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	int                                                OwnerBoneSocketRandomMaxCount;                            // 0x00BC(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	float                                              ModifyParentVelocity;                                     // 0x00C0(0x0004)
	float                                              ModifyParentAcceleration;                                 // 0x00C4(0x0004)
	struct FVector                                     RelativeLocation;                                         // 0x00C8(0x000C) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	struct FVector                                     RelativeWorldLocation;                                    // 0x00D4(0x000C) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	struct FRotator                                    RelativeRotation;                                         // 0x00E0(0x000C) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	struct FVector                                     RelativeScale;                                            // 0x00EC(0x000C) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	TArray<struct FParticleSysParam>                   ParticleSystemParamList;                                  // 0x00F8(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	class UEFParticleDataModuleSoundBase*              SoundModule;                                              // 0x0108(0x0008) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide)
	class UEFParticleDataModulePawnMaterialParam*      OwnerMaterialParamModule;                                 // 0x0110(0x0008) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide)

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
	int                                                IdentityIndex;                                            // 0x0078(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                IdentityPoint;                                            // 0x007C(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0080(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EFEQUIP_PART>                          OwnerPartsType;                                           // 0x0088(0x0001) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                OwnerPartsMeshIndex;                                      // 0x008C(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FString>                             OwnerBoneName;                                            // 0x0090(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FString>                             OwnerSoketName;                                           // 0x00A0(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<TEnumAsByte<EFPBS_SpawnType>>               OwnerBoneSocketSpawnType;                                 // 0x00B0(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                OwnerBoneSocketRandomMaxCount;                            // 0x00C0(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreAttachLocation : 1;                                // 0x00C4(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreAttachRotation : 1;                                // 0x00C4(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreAttachWorldRotation : 1;                           // 0x00C4(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ModifyParentVelocity;                                     // 0x00C8(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ModifyParentAcceleration;                                 // 0x00CC(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	class UParticleSystem*                             ParticleSystem;                                           // 0x0078(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FLinearColor                                MaterialColorValue;                                       // 0x0080(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     Key;                                                      // 0x0058(0x0010) (Interp, NonTransactional, RepRetry, ArchetypeProperty, CrossLevelActive)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0068(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseChangeParticleParam : 1;                              // 0x0070(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	TArray<struct FParticleSysParam>                   ParticleSystemParamList;                                  // 0x0074(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)

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
	struct FEFParticlePawnMaterialParamData            MaterialParamData;                                        // 0x0058(0x004C) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     VoiceKeyWord;                                             // 0x0058(0x0010) (Interp, NonTransactional, ProtectedWrite, EditHide, EditTextBox)
	TEnumAsByte<EF_PARTICLE_DATAMODULE_TYPE>           DataModuleType;                                           // 0x0068(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                DataIndex;                                                // 0x006C(0x0004)
	unsigned long                                      EditorDirty : 1;                                          // 0x0070(0x0004)

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
	class UAkEvent*                                    AkEvent;                                                  // 0x0074(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	unsigned long                                      bSwitchCharacterAKEvent : 1;                              // 0x007C(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	unsigned long                                      bSwitchHittedAKEvent : 1;                                 // 0x007C(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)

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
	struct FString                                     Key;                                                      // 0x0058(0x0010) (Interp, NonTransactional, RepRetry, ArchetypeProperty, CrossLevelActive)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0068(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreRotator : 1;                                       // 0x0070(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FLinearColor                                ActiveColorValue;                                         // 0x0074(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FLinearColor                                DeactiveColorValue;                                       // 0x0084(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DefaultWidth;                                             // 0x0094(0x0004) (NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DefaultHeight;                                            // 0x0098(0x0004) (NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Desc;                                                     // 0x009C(0x0010) (Interp, NonTransactional, NotForConsole)
	int                                                FXLod;                                                    // 0x00AC(0x0004) (Interp, EditorOnly, ArchetypeProperty, EditHide, CrossLevelActive)

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
	class UAkEvent*                                    StartSound;                                               // 0x0064(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive, CrossLevelActive)
	class UAkEvent*                                    EndSound;                                                 // 0x006C(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive, CrossLevelActive)

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
	struct FRawDistributionFloat                       Length;                                                   // 0x0064(0x0024) (NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	unsigned long                                      bApplyPSysScale : 1;                                      // 0x0088(0x0004) (NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelActive)

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
	TEnumAsByte<ECircleSurfaceAxis>                    SurfaceAxis;                                              // 0x0064(0x0001) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	unsigned long                                      bNegativeAxis : 1;                                        // 0x0068(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bHalfMode : 1;                                            // 0x0068(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      Velocity : 1;                                             // 0x0068(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FRawDistributionFloat                       VelocityScale;                                            // 0x006C(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FRawDistributionVector                      StartLocation;                                            // 0x0090(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FRawDistributionFloat                       StartRadius;                                              // 0x00B4(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	int                                                SplitCircleCount;                                         // 0x00D8(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)

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
	struct FVector                                     OffsetPos;                                                // 0x006C(0x000C) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)

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
	float                                              fCheckBounds;                                             // 0x0064(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	float                                              fOffsetHeight;                                            // 0x0068(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bEnableSkipHeight : 1;                                    // 0x006C(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bContinousCheck : 1;                                      // 0x006C(0x0004)
	unsigned long                                      bTickUpdate : 1;                                          // 0x006C(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	float                                              fSkipHeight;                                              // 0x0070(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FRawDistributionVector                      AdjustLocation;                                           // 0x0074(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FRawDistributionFloat                       SkipLocation;                                             // 0x0098(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)

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
	class UPrefab*                                     PathPrefab;                                               // 0x0064(0x0008) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	int                                                LoopCount;                                                // 0x006C(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	struct FVector                                     StartLocation;                                            // 0x0070(0x000C) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              StartTime;                                                // 0x007C(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              SleepTime;                                                // 0x0080(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)

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
	unsigned long                                      RadialVelocity : 1;                                       // 0x00B0(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bAdjustForWorldSpace : 1;                                 // 0x00B0(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FRawDistributionFloat                       StartRadius;                                              // 0x00B4(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FRawDistributionFloat                       StartHeight;                                              // 0x00D8(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FRawDistributionFloat                       StartCylinderRot;                                         // 0x00FC(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	TEnumAsByte<ECylinderSpinAxis>                     SpinAxis;                                                 // 0x0120(0x0001) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FRawDistributionFloat                       SpinAngle;                                                // 0x0124(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)

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
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x0148(0x001C) (NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class UStaticMesh*                                 Mesh;                                                     // 0x00B0(0x0008) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)

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
	struct FRawDistributionFloat                       StartRadius;                                              // 0x00B0(0x0024) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive)

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
	TEnumAsByte<EFPS_SORTDIRECTION>                    SortDirection;                                            // 0x00BC(0x0001) (Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	int                                                MaxSamples;                                               // 0x00C0(0x0004) (Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FSkelLocationData>                   SampleSourceDataTable;                                    // 0x00C4(0x0010)
	struct FString                                     RefSkeletalMeshName;                                      // 0x00D4(0x0010)

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
	TEnumAsByte<EFPS_SORTDIRECTION>                    SortDirection;                                            // 0x00AC(0x0001) (Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	int                                                MaxSamples;                                               // 0x00B0(0x0004) (Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FStaticLocationData>                 SampleSourceDataTable;                                    // 0x00B4(0x0010)
	struct FString                                     RefStaticMeshName;                                        // 0x00C4(0x0010)

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
	struct FVector2D                                   DefaultSize;                                              // 0x0064(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              NearPlane;                                                // 0x006C(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              FarPlane;                                                 // 0x0070(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FRotator                                    Rotation;                                                 // 0x0074(0x000C) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FVector2D                                   BlendRange;                                               // 0x0080(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUsePlayerCharacterRotation : 1;                          // 0x0088(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAlwaysDecalUpdate : 1;                                   // 0x0088(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bOnlyCalcRotationYaw : 1;                                 // 0x0088(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class UPointLightComponent*                        PointLightComponent;                                      // 0x0064(0x0008) (Interp, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, EditTextBox)

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
	struct FRawDistributionVector                      VelOverLife;                                              // 0x0068(0x0024) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      Absolute : 1;                                             // 0x008C(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              DirX;                                                     // 0x0068(0x0004) (RepNotify, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              DirY;                                                     // 0x006C(0x0004) (RepNotify, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              DirZ;                                                     // 0x0070(0x0004) (RepNotify, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              PosX;                                                     // 0x0074(0x0004) (RepNotify, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              PosY;                                                     // 0x0078(0x0004) (RepNotify, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              PosZ;                                                     // 0x007C(0x0004) (RepNotify, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              Power;                                                    // 0x0080(0x0004) (RepNotify, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	struct FRawDistributionFloat                       PowerAcceleration;                                        // 0x0084(0x0024) (RepNotify, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)

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
	class UParticleSystem*                             ParticleSystem;                                           // 0x0058(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ParticlePlayRate;                                         // 0x0060(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseTargetCastLocation : 1;                               // 0x0064(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseLinearColorValue : 1;                                 // 0x0064(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)
	unsigned long                                      bAttach : 1;                                              // 0x0064(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	unsigned long                                      bIgnoreAttachLocation : 1;                                // 0x0064(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	unsigned long                                      bIgnoreAttachRotation : 1;                                // 0x0064(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	unsigned long                                      bIgnoreAttachWorldRotation : 1;                           // 0x0064(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	unsigned long                                      bApplyLocalRotation : 1;                                  // 0x0064(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	unsigned long                                      AutoPlayRateBySpeed : 1;                                  // 0x0064(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSpawnedEmitter : 1;                                      // 0x0064(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bLocFromActorMesh : 1;                                    // 0x0064(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	unsigned long                                      StopSound : 1;                                            // 0x0064(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	unsigned long                                      bSwitchCharacterAKEvent : 1;                              // 0x0064(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	unsigned long                                      bBeamParticle : 1;                                        // 0x0064(0x0004) (NonTransactional, RepRetry, EditTextBox)
	unsigned long                                      bUseCastShadow : 1;                                       // 0x0064(0x0004) (Interp, NonTransactional, EditorOnly, ProtectedWrite, EditHide, CrossLevelActive)
	class UPostProcessChain*                           PPChain;                                                  // 0x0068(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       MaterialParamName;                                        // 0x0070(0x0008) (RepNotify, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)
	float                                              MaterialFloatValue;                                       // 0x0078(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)
	struct FLinearColor                                MaterialLinearColorValue;                                 // 0x007C(0x0010) (RepNotify, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)
	struct FVector                                     RelativeWorldLocation;                                    // 0x008C(0x000C) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	struct FVector                                     RelativeLocation;                                         // 0x0098(0x000C) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	struct FRotator                                    RelativeRotation;                                         // 0x00A4(0x000C) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	struct FVector                                     RelativeScale;                                            // 0x00B0(0x000C) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	TEnumAsByte<EFEQUIP_PART>                          ePartsType;                                               // 0x00BC(0x0001) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	int                                                iPartsMeshIndex;                                          // 0x00C0(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	int                                                AttachPriority;                                           // 0x00C4(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	TArray<struct FString>                             ParticleAttachBoneName;                                   // 0x00C8(0x0010) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	TArray<struct FString>                             ParticleAttachSoketName;                                  // 0x00D8(0x0010) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	TArray<TEnumAsByte<EPst_SpawnType>>                ParticleSpawnType;                                        // 0x00E8(0x0010) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	int                                                ParticleAttachRandomMaxCount;                             // 0x00F8(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	float                                              AutoPlayRateTime;                                         // 0x00FC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              ModifyParentVelocity;                                     // 0x0100(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	float                                              ModifyParentAcceleration;                                 // 0x0104(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	class UAkEvent*                                    AkEvent;                                                  // 0x0108(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	TArray<struct FParticleSysParam>                   ParticleSystemParamList;                                  // 0x0110(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)

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
	unsigned long                                      bActivatePicking : 1;                                     // 0x02A8(0x0004)
	unsigned long                                      bTryParticleActivate : 1;                                 // 0x02A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPickingEmitter");
		return ptr;
	}


	void IsActivateEffect();
	void DeactivateEffect();
	void ActivateEffect();
	void OnParticleSystemFinished();
};


// Class EFGame.EFPostProcessMaterialContainer
// 0x0030 (0x0088 - 0x0058)
class UEFPostProcessMaterialContainer : public UObject
{
public:
	class UEFPostProcessMaterialHPEffect*              HPEffect;                                                 // 0x0058(0x0008) (NonTransactional, RepRetry, ProtectedWrite, ArchetypeProperty)
	class UEFPostProcessMaterialDeadEffect*            DeadEffect;                                               // 0x0060(0x0008) (NonTransactional, RepRetry, ProtectedWrite, ArchetypeProperty)
	class UEFPostProcessMaterialShipWreckEffect*       ShipWreckEffect;                                          // 0x0068(0x0008) (NonTransactional, RepRetry, ProtectedWrite, ArchetypeProperty)
	class UEFPostProcessMaterialChaosGateEffect*       ChaosGateEffect;                                          // 0x0070(0x0008) (NonTransactional, RepRetry, ProtectedWrite, ArchetypeProperty)
	TArray<class UEFPostProcessMaterialEffect*>        GlobalMaterialEffects;                                    // 0x0078(0x0010)

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
	class UMaterialInterface*                          Material;                                                 // 0x0058(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive)
	TArray<struct FEFPPMaterialScalarParam>            ScalarParamArr;                                           // 0x0060(0x0010) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	TArray<struct FEFPPMaterialVectorParam>            VectorParamArr;                                           // 0x0070(0x0010) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	TArray<struct FEFPPMaterialTextureParam>           TextureParamArr;                                          // 0x0080(0x0010) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)
	TEnumAsByte<EF_POSTPROCESS_MATERIALEFFECT_TYPE>    MaterialEffectType;                                       // 0x0090(0x0001)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FEFPPMEChaosGateValue                       ChaosGateValue;                                           // 0x0094(0x0014) (RepNotify, Interp, EditorOnly, RepRetry, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FEFPPMEDeadValue                            DeadValue;                                                // 0x0094(0x000C) (NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FString                                     EffectDesc;                                               // 0x0094(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	float                                              FadeInTime;                                               // 0x00A4(0x0004) (NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	float                                              FadeOutTime;                                              // 0x00A8(0x0004) (NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	float                                              MaxOpacity;                                               // 0x00AC(0x0004) (NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FEFPPMEHitValue                             SkillValue;                                               // 0x0094(0x0010) (EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelActive)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FString                                     EffectDesc;                                               // 0x0094(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	int                                                GroupPriority;                                            // 0x00A4(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	struct FString                                     Keyword;                                                  // 0x00A8(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bOnlyPlayLocalPlayer : 1;                                 // 0x00B8(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FEFPPMESkillValue                           SkillValue;                                               // 0x00BC(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FString                                     EffectDesc;                                               // 0x0094(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	struct FEFPPMEStatusValue                          StatusValue;                                              // 0x00A4(0x000C) (NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	TArray<struct FEFPPMEHPPersentValue>               HPPersentValues;                                          // 0x0094(0x0010) (RepNotify, Interp, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	struct FEFPPMEHPPersentValueCriticalHit            HPCriticalHitValue;                                       // 0x00A4(0x0014) (RepNotify, Interp, ArchetypeProperty, EditTextBox, CrossLevelPassive)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FEFPPMEShipWreckValue                       ShipWreckValue;                                           // 0x0094(0x000C) (NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive)

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
	float                                              ParticlePlayRate;                                         // 0x0058(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      AutoPlayRateBySpeed : 1;                                  // 0x005C(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      ApplyEFSkeletalMeshActorDLE : 1;                          // 0x005C(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              AutoPlayRateTime;                                         // 0x0060(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              AutoPlayMaxRate;                                          // 0x0064(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              AutoPlayMinRate;                                          // 0x0068(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                TranslucencySortPriority;                                 // 0x006C(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             ParticleData;                                             // 0x0070(0x0008) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFParticleData*>                     AdditionalParticleDataArr;                                // 0x0078(0x0010) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFSimpleParticleSystemInfo>         ParticleSystemSet;                                        // 0x0274(0x0010)
	TArray<class UEFParticleDataBase*>                 ParticleDataSet;                                          // 0x0284(0x0010) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFParticleSystemInfo>               ParticleSystemSet;                                        // 0x0274(0x0010)
	TArray<class UEFParticleDataBase*>                 ParticleDataSet;                                          // 0x0284(0x0010) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	float                                              CullDistanceScaleOverride;                                // 0x0158(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIsScaleOverridden : 1;                                   // 0x015C(0x0004)
	float                                              SavedDecalCullDistanceScale;                              // 0x0160(0x0004)
	float                                              SavedFractureCullDistanceScale;                           // 0x0164(0x0004)
	float                                              SavedMaxDrawDistanceScale;                                // 0x0168(0x0004)

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
	struct FName                                       EventName;                                                // 0x0158(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class AActor*                                      Activator;                                                // 0x026C(0x0008)
	TArray<class UObject*>                             ObjListInGame;                                            // 0x0274(0x0010)
	int                                                MatineeIndex;                                             // 0x0284(0x0004) (RepNotify, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSkipJump : 1;                                            // 0x0288(0x0004) (Interp, NonTransactional, ProtectedWrite, EditHide)
	unsigned long                                      bUsingMuteEvent : 1;                                      // 0x0288(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	unsigned long                                      bUsingMuteEvent_WithoutAmbient : 1;                       // 0x0288(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	unsigned long                                      bIsApplyMuteEvent : 1;                                    // 0x0288(0x0004)
	unsigned long                                      bNeedApplySkipSoundEvent : 1;                             // 0x0288(0x0004)
	class UAkEvent*                                    SkipEffectSoundEvent;                                     // 0x028C(0x0008) (Interp, NonTransactional, ProtectedWrite, EditHide)
	class UAkEvent*                                    SkipBGMEvent;                                             // 0x0294(0x0008) (Interp, NonTransactional, ProtectedWrite, EditHide)
	TEnumAsByte<EFAutoBlendState>                      eAutoBlendState;                                          // 0x029C(0x0001)

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
	unsigned long                                      bUseDefaultMoveSpeed : 1;                                 // 0x0158(0x0004) (RepNotify, NonTransactional, ArchetypeProperty, EditHide)
	unsigned long                                      bDelayMoveTime : 1;                                       // 0x0158(0x0004) (RepNotify, NonTransactional, ArchetypeProperty, EditHide)
	unsigned long                                      bRestoreInputLock : 1;                                    // 0x0158(0x0004)
	float                                              MoveTime;                                                 // 0x015C(0x0004) (RepNotify, NonTransactional, ArchetypeProperty, EditHide)
	struct FVector                                     DestLocation;                                             // 0x0160(0x000C) (RepNotify, NonTransactional, ArchetypeProperty, EditHide)
	float                                              RemainingTime;                                            // 0x016C(0x0004)

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
	class AActor*                                      Target;                                                   // 0x0170(0x0008)
	struct FName                                       AnimListName;                                             // 0x0178(0x0008) (Interp, NonTransactional, ProtectedWrite)
	class UAnimNodeBlendList*                          AnimList;                                                 // 0x0180(0x0008)
	class UAnimNodeSequence*                           sAnimeNodeSeq;                                            // 0x0188(0x0008)
	class UAnimNodeSequence*                           eAnimeNodeSeq;                                            // 0x0190(0x0008)
	unsigned long                                      bForEverLoop : 1;                                         // 0x0198(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      isEventMove : 1;                                          // 0x0198(0x0004)
	unsigned long                                      isWaitTime : 1;                                           // 0x0198(0x0004)
	float                                              PosOffset;                                                // 0x019C(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              RandomPosOffset;                                          // 0x01A0(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FSNPC_MovingState>                   MovePoints;                                               // 0x01A4(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FSNPC_MovingState>                   EventMovePoints;                                          // 0x01B4(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	TEnumAsByte<EUNM_SNPC_workCompletedState>          emCompledted_Work;                                        // 0x01C4(0x0001) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	TEnumAsByte<ENUM_SNPC_PlayAnimationName>           ewWaitAnimation;                                          // 0x01C5(0x0001) (NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	TEnumAsByte<EUNM_SNPC_workCompletedState>          ewCompledted_Work;                                        // 0x01C6(0x0001) (NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	TEnumAsByte<ENUM_SNPC_PlayAnimationName>           BackUpAnimName;                                           // 0x01C7(0x0001)
	TEnumAsByte<ENUM_SNPC_NPCState>                    EN_MoveState;                                             // 0x01C8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	float                                              ewWaitTime;                                               // 0x01CC(0x0004) (NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              ewBlendTime;                                              // 0x01D0(0x0004) (NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	struct FString                                     ewForcedAnim;                                             // 0x01D4(0x0010) (NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              CheckWaitTime;                                            // 0x01E4(0x0004)
	int                                                BackUpCurrentCount;                                       // 0x01E8(0x0004)
	int                                                MainCount;                                                // 0x01EC(0x0004)
	int                                                CurrentCount;                                             // 0x01F0(0x0004)
	struct FSNPC_MovingState                           MainState;                                                // 0x01F4(0x0034)
	struct FVector                                     vC;                                                       // 0x0228(0x000C)
	struct FVector                                     vB;                                                       // 0x0234(0x000C)
	float                                              vD;                                                       // 0x0240(0x0004)
	float                                              CurrentTime;                                              // 0x0244(0x0004)
	struct FRotator                                    PendingRotator;                                           // 0x0248(0x000C)
	float                                              MainSPEED;                                                // 0x0254(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_NPCController");
		return ptr;
	}


	void Update();
	void Activated();
	void BackupMainMovingState();
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
	class UEFSwfMovie*                                 SwfObject;                                                // 0x0158(0x0008) (RepNotify, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              UnLoadTime;                                               // 0x0160(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              RemainingTime;                                            // 0x0164(0x0004)
	class UEFGFxMovieWidget*                           LoadedWidget;                                             // 0x0168(0x0008)

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
	struct FVector                                     VelocityDir;                                              // 0x0158(0x000C) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              VelocityMag;                                              // 0x0164(0x0004) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       BoneName;                                                 // 0x0168(0x0008) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bRagdoll : 1;                                             // 0x0170(0x0004) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bVelocityRelativeToActorRotation : 1;                     // 0x0170(0x0004) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseBoneImpulse : 1;                                      // 0x0170(0x0004) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bLocalPlayer : 1;                                         // 0x0170(0x0004) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              ApexDamage;                                               // 0x0174(0x0004) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              ApexRadius;                                               // 0x0178(0x0004) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UObject*                                     Target;                                                   // 0x017C(0x0008)
	class UObject*                                     HitLocaiton;                                              // 0x0184(0x0008)

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
	float                                              GravityZ;                                                 // 0x0158(0x0004) (RepNotify, NonTransactional, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bIsStop : 1;                                              // 0x0158(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FName                                       EventName;                                                // 0x0158(0x0008) (RepNotify, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                EventParams[0x3];                                         // 0x0160(0x0004) (RepNotify, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bIsOnOff : 1;                                             // 0x0158(0x0004) (Interp, EditorOnly, PrivateWrite, CrossLevelActive)
	unsigned long                                      bPartyAll : 1;                                            // 0x0158(0x0004) (Interp, EditorOnly, PrivateWrite, CrossLevelActive)

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
	class UClass*                                      DefaultChildClass;                                        // 0x01B4(0x0008)

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
	int                                                SpawnIndex;                                               // 0x00F4(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<ENameplatetype>                        eNamePlateType;                                           // 0x00F8(0x0001) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                WallPaperPirmaryKey;                                      // 0x0274(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, CrossLevelActive)
	int                                                PCSelectPositionIndex;                                    // 0x0278(0x0004) (NonTransactional, NotForConsole, PrivateWrite, CrossLevelPassive)
	TEnumAsByte<EPCSelectStartActionType>              PCSelectActionType;                                       // 0x027C(0x0001) (NonTransactional, NotForConsole, PrivateWrite, CrossLevelPassive)

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
	TEnumAsByte<EBindCaptureType>                      BindType;                                                 // 0x0284(0x0001) (Interp, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	class AActor*                                      FocusActor;                                               // 0x0288(0x0008)
	int                                                SnapShotEventStep;                                        // 0x0290(0x0004)
	int                                                SnapShotNextEventStepFrame;                               // 0x0294(0x0004)
	float                                              SnapShotLastRenderTimeseconds;                            // 0x0298(0x0004)

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
	unsigned long                                      bKeepOriginalSurface : 1;                                 // 0x0170(0x0004) (EditorOnly, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	unsigned long                                      bParticleCapture : 1;                                     // 0x0170(0x0004)
	unsigned long                                      bUseCustomView : 1;                                       // 0x0170(0x0004)
	unsigned long                                      bEnablePostProcessAA : 1;                                 // 0x0170(0x0004)
	unsigned long                                      bEnableOpacityCapture : 1;                                // 0x0170(0x0004)
	struct FVector                                     ViewOriginOffset;                                         // 0x0174(0x000C)
	struct FVector                                     CustomCameraLocation;                                     // 0x0180(0x000C)
	struct FRotator                                    CustomCameraRotation;                                     // 0x018C(0x000C)
	class UTexture2D*                                  BackgroundTexture;                                        // 0x0198(0x0008)

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
	TEnumAsByte<EBindCaptureType>                      BindType;                                                 // 0x0274(0x0001) (Interp, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	struct FColor                                      OriPointColor;                                            // 0x0278(0x0004) (Interp, ProtectedWrite, EditTextBox, CrossLevelPassive)
	class APointLightMovable*                          BindLight;                                                // 0x027C(0x0008) (Interp, ProtectedWrite, EditTextBox, CrossLevelPassive)
	struct FLightingChannelContainer                   LightingChannels;                                         // 0x0284(0x0004) (RepNotify, EditHide, EditTextBox)

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
	unsigned long                                      EHF_Override : 1;                                         // 0x0058(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      CPL_Override : 1;                                         // 0x0058(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      CPL_bEnabled : 1;                                         // 0x0058(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      CPL_OverrideLightingChannels : 1;                         // 0x0058(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      WLE_Override : 1;                                         // 0x0058(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, CrossLevelActive)
	unsigned long                                      DDL_Override : 1;                                         // 0x0058(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              EHF_FogDensity;                                           // 0x005C(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              EHF_FogHeightFalloff;                                     // 0x0060(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              EHF_FogMaxOpacity;                                        // 0x0064(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              EHF_StartDistance;                                        // 0x0068(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              EHF_LightTerminatorAngle;                                 // 0x006C(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              EHF_OppositeLightBrightness;                              // 0x0070(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      EHF_OppositeLightColor;                                   // 0x0074(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              EHF_LightInscatteringBrightness;                          // 0x0078(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      EHF_LightInscatteringColor;                               // 0x007C(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CPL_Brightness;                                           // 0x0080(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      CPL_LightColor;                                           // 0x0084(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CPL_Radius;                                               // 0x0088(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CPL_FalloffExponent;                                      // 0x008C(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CPL_ShadowFalloffExponent;                                // 0x0090(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     CPL_Translation;                                          // 0x0094(0x000C) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FLightingChannelContainer                   CPL_LightingChannels;                                     // 0x00A0(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              WLE_CharacterLitIndirectBrightness;                       // 0x00A4(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, CrossLevelActive)
	float                                              WLE_CharacterLitIndirectContrastFactor;                   // 0x00A8(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, CrossLevelActive)
	float                                              WLE_CharacterShadowedIndirectBrightness;                  // 0x00AC(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, CrossLevelActive)
	float                                              WLE_CharacterShadowedIndirectContrastFactor;              // 0x00B0(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, CrossLevelActive)
	float                                              WLE_CharacterLightingContrastFactor;                      // 0x00B4(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, EditHide, CrossLevelActive)
	float                                              DDL_Brightness;                                           // 0x00B8(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      DDL_LightColor;                                           // 0x00BC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	class AEmitter*                                    Emitter_Actor;                                            // 0x00C0(0x0008) (Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CamOffset;                                                // 0x00C8(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UMaterialInstanceConstant*                   MIC_Original;                                             // 0x00CC(0x0008) (NonTransactional, EditorOnly, RepRetry, ArchetypeProperty, EditTextBox, CrossLevelActive)
	class UMaterialInstanceConstant*                   MIC_Target;                                               // 0x00D4(0x0008) (NonTransactional, EditorOnly, RepRetry, ArchetypeProperty, EditTextBox, CrossLevelActive)
	class UEFCameraViewShake*                          CameraViewShakeParam;                                     // 0x00DC(0x0008) (Interp, NonTransactional, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFCameraViewShakeAnim*                      CameraViewShakeAnim;                                      // 0x00E4(0x0008) (Interp, NonTransactional, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              PlayRate;                                                 // 0x00EC(0x0004) (Interp, NonTransactional, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UMaterialInstanceConstant*                   PPM_Material;                                             // 0x00F0(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive)
	float                                              PPM_Opacity;                                              // 0x00F8(0x0004)
	class UAkEvent*                                    InAkEvent_Music;                                          // 0x00FC(0x0008) (RepNotify, EditorOnly, NotForConsole, EditTextBox, CrossLevelPassive)
	class UAkEvent*                                    OutAkEvent_Music;                                         // 0x0104(0x0008) (RepNotify, EditorOnly, NotForConsole, EditTextBox, CrossLevelPassive)
	class UAkEvent*                                    InAkEvent_Ambient;                                        // 0x010C(0x0008) (NonTransactional, NotForConsole, EditTextBox, CrossLevelPassive)
	class UAkEvent*                                    OutAkEvent_Ambient;                                       // 0x0114(0x0008) (NonTransactional, NotForConsole, EditTextBox, CrossLevelPassive)

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
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x0434(0x0008)
	int                                                VolumeIndex;                                              // 0x043C(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFEnvironmentInfoData*                      EnviromentValue;                                          // 0x0440(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              BlendTimeIn;                                              // 0x0448(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              BlendTimeOut;                                             // 0x044C(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bCastDynamicShadow : 1;                                   // 0x0450(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bActivateByPlayerLocation : 1;                            // 0x0450(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIsInit : 1;                                              // 0x0450(0x0004)
	unsigned long                                      bPlayInEditor : 1;                                        // 0x0450(0x0004)
	unsigned long                                      bEnableMIC : 1;                                           // 0x0450(0x0004)
	TArray<class AStaticMeshActor*>                    ExcludedActors;                                           // 0x0454(0x0010) (RepNotify, Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UTexture*                                    IBL_Texture;                                              // 0x0464(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EnvVolumeState>                        eVolumeState;                                             // 0x046C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	float                                              BlendTime;                                                // 0x0470(0x0004)
	float                                              LastBlendTime;                                            // 0x0474(0x0004)
	float                                              LastAlpha;                                                // 0x0478(0x0004)
	float                                              fAlpha;                                                   // 0x047C(0x0004)
	class UEFEnvironmentInfoData*                      TargetEnvData;                                            // 0x0480(0x0008)
	class UEFEnvironmentInfoData*                      OriginalEnvData;                                          // 0x0488(0x0008)
	class UEFEnvironmentInfoData*                      CurrentEnvData;                                           // 0x0490(0x0008)
	class AExponentialHeightFog*                       EHFogActor;                                               // 0x0498(0x0008)
	class ADominantDirectionalLight*                   DDLightActor;                                             // 0x04A0(0x0008)
	class UFunction*                                   DDLColorFucntion;                                         // 0x04A8(0x0008)
	struct FMICParamInfo                               OriginalMICParamData;                                     // 0x04B0(0x0030)
	struct FMICParamInfo                               CurrentMICParamData;                                      // 0x04E0(0x0030)
	struct FMICParamInfo                               TargetMICParamData;                                       // 0x0510(0x0030)
	int                                                CameraShakeGroupType;                                     // 0x0540(0x0004)
	int                                                CameraShakePlayId;                                        // 0x0544(0x0004)
	class UMaterialEffect*                             EnvMaterialEffect;                                        // 0x0548(0x0008)
	class UMaterialInterface*                          PrevMaterialEffectMIC;                                    // 0x0550(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentInfoVolume");
		return ptr;
	}


	void UnTouch();
	void Touch();
	void UpdateEnvironment();
	void OnToggle();
};


// Class EFGame.EFLevelStreamingVolume
// 0x0010 (0x02DC - 0x02CC)
class AEFLevelStreamingVolume : public ALevelStreamingVolume
{
public:
	struct FString                                     VolumeName;                                               // 0x02CC(0x0010) (RepNotify, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FstGameMsgID                                AreaName;                                                 // 0x02B8(0x0024) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bSynthesizeSHLight : 1;                                   // 0x02B8(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseBooleanEnvironmentShadowing : 1;                      // 0x02B8(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAllowDynamicShadowsOnTranslucency : 1;                   // 0x02B8(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bEnableLineCheckWithBounds : 1;                           // 0x02B8(0x0004) (NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUpdateSkelWhenNotRendered : 1;                           // 0x02B8(0x0004) (NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreControllersWhenNotRendered : 1;                    // 0x02B8(0x0004) (NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bTickAnimNodesWhenNotRendered : 1;                        // 0x02B8(0x0004) (NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAcceptsStaticDecals : 1;                                 // 0x02B8(0x0004) (NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAcceptsDynamicDecals : 1;                                // 0x02B8(0x0004) (NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bPerBoneMotionBlur : 1;                                   // 0x02B8(0x0004) (NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bPC : 1;                                                  // 0x02B8(0x0004) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bNPC : 1;                                                 // 0x02B8(0x0004) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bMonster : 1;                                             // 0x02B8(0x0004) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bBossMonster : 1;                                         // 0x02B8(0x0004) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bVehicle : 1;                                             // 0x02B8(0x0004) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bItem : 1;                                                // 0x02B8(0x0004) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)

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
	struct FString                                     TLinkMatinee_Matinee;                                     // 0x02B8(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class AEFMatineePathNode*                          MatineePathNode;                                          // 0x02C8(0x0008) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bEnableRewind : 1;                                        // 0x02D0(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bActivate : 1;                                            // 0x02D0(0x0004)
	class USeqAct_Interp*                              Matinee;                                                  // 0x02D4(0x0008)
	struct FQWord                                      m_PlayerUid;                                              // 0x02DC(0x0008)
	float                                              m_fPathTotalLength;                                       // 0x02E4(0x0004)
	float                                              m_fMatineeTotalTime;                                      // 0x02E8(0x0004)
	TArray<class AEFMatineePathNode*>                  m_MatineePathNodeArr;                                     // 0x02EC(0x0010)
	int                                                m_iClosestPathNode;                                       // 0x02FC(0x0004)
	struct FVector                                     m_vClosestLoc;                                            // 0x0300(0x000C)
	struct FVector                                     m_vPlayerLoc;                                             // 0x030C(0x000C)

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
	struct FString                                     Naming;                                                   // 0x02B8(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     VolumeName;                                               // 0x02B8(0x0010) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UAkEvent*                                    InAkEvent;                                                // 0x02C8(0x0008) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UAkEvent*                                    OutAkEvent;                                               // 0x02D0(0x0008) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                Priority;                                                 // 0x02D8(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     Auxilliary;                                               // 0x02B8(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              AuxilliaryValue;                                          // 0x02C8(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FString>                             IncludedAmbientsSounds;                                   // 0x02CC(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                Priority;                                                 // 0x02DC(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bPendingOnEnter : 1;                                      // 0x02B8(0x0004)

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
	struct FString                                     SourceDirectoryPath;                                      // 0x0058(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName;                                           // 0x0068(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      NormalHotSpotX;                                           // 0x0078(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      NormalHotSpotY;                                           // 0x0079(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargeHotSpotX;                                            // 0x007A(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargeHotSpotY;                                            // 0x007B(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullHotSpotX;                                             // 0x007C(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullHotSpotY;                                             // 0x007D(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset1HotSpotX;                                          // 0x007E(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset1HotSpotY;                                          // 0x007F(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset2HotSpotX;                                          // 0x0080(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset2HotSpotY;                                          // 0x0081(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset3HotSpotX;                                          // 0x0082(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset3HotSpotY;                                          // 0x0083(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset4HotSpotX;                                          // 0x0084(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset4HotSpotY;                                          // 0x0085(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset5HotSpotX;                                          // 0x0086(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      Preset5HotSpotY;                                          // 0x0087(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset1HotSpotX;                                     // 0x0088(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset1HotSpotY;                                     // 0x0089(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset2HotSpotX;                                     // 0x008A(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset2HotSpotY;                                     // 0x008B(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset3HotSpotX;                                     // 0x008C(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset3HotSpotY;                                     // 0x008D(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset4HotSpotX;                                     // 0x008E(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset4HotSpotY;                                     // 0x008F(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset5HotSpotX;                                     // 0x0090(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      LargePreset5HotSpotY;                                     // 0x0091(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset1HotSpotX;                                      // 0x0092(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset1HotSpotY;                                      // 0x0093(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset2HotSpotX;                                      // 0x0094(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset2HotSpotY;                                      // 0x0095(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset3HotSpotX;                                      // 0x0096(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset3HotSpotY;                                      // 0x0097(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset4HotSpotX;                                      // 0x0098(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset4HotSpotY;                                      // 0x0099(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset5HotSpotX;                                      // 0x009A(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      FullPreset5HotSpotY;                                      // 0x009B(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     NormalSize;                                               // 0x009C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_Large;                                     // 0x00AC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     LargeSize;                                                // 0x00BC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_Full;                                      // 0x00CC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FullSize;                                                 // 0x00DC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     CursorDescription;                                        // 0x00EC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<unsigned char>                              CursorData;                                               // 0x00FC(0x0010)
	TArray<unsigned char>                              CursorData_Large;                                         // 0x010C(0x0010)
	TArray<unsigned char>                              CursorData_Full;                                          // 0x011C(0x0010)
	struct FString                                     ResourceTimeStamp;                                        // 0x012C(0x0010)
	struct FString                                     SourceFileName_Preset1;                                   // 0x013C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Preset1Size;                                              // 0x014C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_Preset2;                                   // 0x015C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Preset2Size;                                              // 0x016C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_Preset3;                                   // 0x017C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Preset3Size;                                              // 0x018C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_Preset4;                                   // 0x019C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Preset4Size;                                              // 0x01AC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_Preset5;                                   // 0x01BC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Preset5Size;                                              // 0x01CC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<unsigned char>                              CursorData_Preset1;                                       // 0x01DC(0x0010)
	TArray<unsigned char>                              CursorData_Preset2;                                       // 0x01EC(0x0010)
	TArray<unsigned char>                              CursorData_Preset3;                                       // 0x01FC(0x0010)
	TArray<unsigned char>                              CursorData_Preset4;                                       // 0x020C(0x0010)
	TArray<unsigned char>                              CursorData_Preset5;                                       // 0x021C(0x0010)
	struct FString                                     SourceFileName_LargePreset1;                              // 0x022C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     LargePreset1Size;                                         // 0x023C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_LargePreset2;                              // 0x024C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     LargePreset2Size;                                         // 0x025C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_LargePreset3;                              // 0x026C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     LargePreset3Size;                                         // 0x027C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_LargePreset4;                              // 0x028C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     LargePreset4Size;                                         // 0x029C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_LargePreset5;                              // 0x02AC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     LargePreset5Size;                                         // 0x02BC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<unsigned char>                              CursorData_LargePreset1;                                  // 0x02CC(0x0010)
	TArray<unsigned char>                              CursorData_LargePreset2;                                  // 0x02DC(0x0010)
	TArray<unsigned char>                              CursorData_LargePreset3;                                  // 0x02EC(0x0010)
	TArray<unsigned char>                              CursorData_LargePreset4;                                  // 0x02FC(0x0010)
	TArray<unsigned char>                              CursorData_LargePreset5;                                  // 0x030C(0x0010)
	struct FString                                     SourceFileName_FullPreset1;                               // 0x031C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FullPreset1Size;                                          // 0x032C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_FullPreset2;                               // 0x033C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FullPreset2Size;                                          // 0x034C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_FullPreset3;                               // 0x035C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FullPreset3Size;                                          // 0x036C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_FullPreset4;                               // 0x037C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FullPreset4Size;                                          // 0x038C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SourceFileName_FullPreset5;                               // 0x039C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FullPreset5Size;                                          // 0x03AC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<unsigned char>                              CursorData_FullPreset1;                                   // 0x03BC(0x0010)
	TArray<unsigned char>                              CursorData_FullPreset2;                                   // 0x03CC(0x0010)
	TArray<unsigned char>                              CursorData_FullPreset3;                                   // 0x03DC(0x0010)
	TArray<unsigned char>                              CursorData_FullPreset4;                                   // 0x03EC(0x0010)
	TArray<unsigned char>                              CursorData_FullPreset5;                                   // 0x03FC(0x0010)

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
	TArray<struct FEFUIIniStruct>                      EFUIIniList;                                              // 0x01EC(0x0010)
	float                                              MinAppliedAdvanceTime;                                    // 0x01FC(0x0004)
	float                                              AppliedAdvanceTime;                                       // 0x0200(0x0004)
	float                                              MaxAppliedAdvanceTime;                                    // 0x0204(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxMoviePlayer");
		return ptr;
	}


	void GetStringINI();
	void SetStringINI();
	void CreateArrayEx();
	void CreateObjectEx();
	void PostAdvance();
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
	TArray<class UGFxObject*>                          GFxObjectBinding;                                         // 0x0208(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxMovieWidget");
		return ptr;
	}


	void GetExternalTexture();
	void HasGFxObjectBinding();
	void DelGFxObjectBinding();
	void AddGFxObjectBinding();
	void SetVisible();
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
	void ARKSlotMouseDoubleClick();
	void ARKSlotMouseRightClick();
	void ARKSlotMouseLeftClick();
	void ClearBindWidgetByName();
	void ClearBindWidgetByWidget();
	void UnBindWidget();
	void BindWidget();
	void WidgetUnloaded();
	void WidgetInitialized();
};


// Class EFGame.EFSwfMovie
// 0x0014 (0x00F8 - 0x00E4)
class UEFSwfMovie : public USwfMovie
{
public:
	TArray<struct FExternalBind>                       ExternalBinding;                                          // 0x00E4(0x0010) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSetAlwaysNoMipsTexture : 1;                              // 0x00F4(0x0004) (EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      SetVectorDisplacement : 1;                                // 0x00F4(0x0004) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)

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
	void ValidateNow();
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
	void SetVisible();
	void GetName();
	void SetName();
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
	class UEFUISlotData*                               SlotData;                                                 // 0x00BC(0x0008)

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
	void IsDisabled();
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
	int                                                TabID;                                                    // 0x00BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIChatTabControl");
		return ptr;
	}


	void ChatLogInputSelectType();
	void ChatLogMainWidgetTabInsertGroup();
	void ChatLogInTabGroupElementStartDrag();
	void ChatLogLinkClick();
	void ChatLogTabContextMenuShow();
	void ChatLogMainWidgetSizeUpdated();
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
	class UEFGFxDataProvider*                          ListDataProvider;                                         // 0x00BC(0x0008)

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
	TArray<struct FSVariableInfo>                      VariableNameData;                                         // 0x00BC(0x0010)

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
	void IsDisabled();
	void SetItemName();
	void GetItemName();
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


	void AchievementRewardTakeBtnClick();
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


	void AnchorCrewSkillSlotClick();
	void AnchorCrewPageIndexChanged();
};


// Class EFGame.EFGFxWidgetBuddy
// 0x0010 (0x00CC - 0x00BC)
class UEFGFxWidgetBuddy : public UEFUIWindowContent
{
public:
	TArray<struct FGroupExtendedInfo>                  ExtendedInfo;                                             // 0x00BC(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetBuddy");
		return ptr;
	}


	void showNew();
	void setSelectedTab();
	void setAFK();
	void FriendsGroupRendererMouseOver();
	void FriendsGroupRendererRightClick();
	void FriendsGroupRendererExtended();
	void FriendsRendererRightClick();
	void FriendsInvite();
	void FriendsBlock();
	void FriendsUnBlock();
	void FriendsBuddyCancel();
	void FriendsBuddyReject();
	void FriendsBuddyAgree();
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
	void ChatLogFilterOptionAddTab();
	void ChatLogFilterOptionOKWnd();
	void ChatLogFilterOptionResetData();
	void ChatLogFilterOptionAppliedChannelList();
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


	void DungeonEntranceDifficultyIndex();
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
	void SetColor();
	void SetDefaultColor();
	void RequestEventColorPickerCursorDragEnd();
	void RequestEventColorPickerProgressValueChange();
	void ChatMessageInputTextHasFocus();
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


	void CurrencyInfoTreeItemClick();
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
	void SetColor();
	void SetInit();
	void ColorPickerColorChanged();
	void ColorPickerLightnessChanged();
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


	void DungeonEntranceDifficultyIndex();
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
	void ChangeCursor();
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


	void BarterShopPurchaseItem();
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
	TArray<struct FUIMailInfo>                         MailInfoArr;                                              // 0x00BC(0x0010)
	TArray<struct FMailReceiverCategory>               MailReceiverCategoryArr;                                  // 0x00CC(0x0010)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00DC(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFGFxWidgetInteractionMail.MailReceiverIndexingList

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionMail");
		return ptr;
	}


	void SetNextSlotDisable();
	void ASSetNextSlotDisable();
	void SetNextSlotEnable();
	void ASSetNextSlotEnable();
	void SetMailOpenType();
	void SetOpenType();
	void StopLoading();
	void StructReceiverCacheData();
	void AddReceiverData();
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
	void WorldMapZoneIndex();
	void WorldMapContinentType();
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


	void TestLabSendInputMessage();
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
	void ARKQuestTraceButtonClicked();
	void OnClicked_TraceQuestButton();
	void QuestJournalTreeItemListOverPool();
	void OnCheckedTreeItemOverPool();
	void ARKQuestGiveUpButtonClicked();
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
	void ARKQuestSelectedRewardItem();
	void OnClicked_SelectChoiceItem();
	void ARKQuestCompleteButtonClicked();
	void OnClicked_CompleteButton();
	void ARKQuestAcceptButtonClicked();
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


	void SystemOptionButtonClickHandler();
	void SystemOptionListIndexChange();
	void OpenChattingOptionColorPicker();
	void OptionHotKeyKillFocus();
	void OptionHotKeyButtonChange();
	void SystemOptionWndCloseButtonClicked();
	void SystemOptionChangedSlider();
	void SystemOptionSelectedComboBox();
	void SystemOptionSelectedCheckBox();
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


	void UnlockBoxItemComplete();
	void UnlockBoxItemClosed();
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
	void ASSetOtherTradeReady();
	void SetMyTradeReady();
	void ASSetMyTradeReady();
	void SetOtherTradeConfirm();
	void ASSetOtherTradeConfirm();
	void SetMyTradeConfirm();
	void ASSetMyTradeConfirm();
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


	void VictoryCrestWindowConfirmBtnClick();
	void VictoryCrestWindowExchangeBtnClick();
	void VictoryCrestWindowUnlockBtnClick();
};


// Class EFGame.EFUIFrame
// 0x0004 (0x00C0 - 0x00BC)
class UEFUIFrame : public UEFUIComponent
{
public:
	unsigned long                                      OnlyModal : 1;                                            // 0x00BC(0x0004)

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


	void AnnounceFrameMotionComplete();
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
	TArray<int>                                        ClassPreviewClassArr;                                     // 0x00C0(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetClassPreview");
		return ptr;
	}


	void SetEnableResetButton();
	void SetShowType();
	void SetClassUpgradeChoiceInfo();
	void SetPlayingClassData();
	void ClassUpgradeCancelRelease();
	void ClassUpgradeSelectClassID();
	void ClassUpgradeConfirmClass();
	void ClassUpgradeReturnRelease();
	void ClassUpgradeAddBossMonster();
	void ClassUpgradeAddNormalMonster();
	void ClassUpgradePlayReset();
	void RequestStopMovie();
	void RequestPlayMovieClassUpgradePreview();
	void ClassUpgradePreviewRequestCloseWnd();
	void ClassUpgradePreviewPlaySelectClass();
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
	TArray<struct FCommonWidgetBinding>                CommonWidgetBindings;                                     // 0x00C0(0x0010)

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


	void ContentsUnlockCallbackTypeID();
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


	void EFDataBinding_UpdateData();
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
	void ArcheologyResultComplete();
	void OnResultComplete();
};


// Class EFGame.EFGFxWidgetFishingNetMiniGame
// 0x003C (0x00FC - 0x00C0)
class UEFGFxWidgetFishingNetMiniGame : public UEFUIFrame
{
public:
	int                                                UpValue1;                                                 // 0x00C0(0x0004)
	int                                                DownValuePerSec1;                                         // 0x00C4(0x0004)
	int                                                UpValue2;                                                 // 0x00C8(0x0004)
	int                                                DownValuePerSec2;                                         // 0x00CC(0x0004)
	int                                                UpValue3;                                                 // 0x00D0(0x0004)
	int                                                DownValuePerSec3;                                         // 0x00D4(0x0004)
	int                                                InputPower1;                                              // 0x00D8(0x0004)
	int                                                InputPower2;                                              // 0x00DC(0x0004)
	int                                                InputPower3;                                              // 0x00E0(0x0004)
	int                                                InputStamina1;                                            // 0x00E4(0x0004)
	int                                                InputStamina2;                                            // 0x00E8(0x0004)
	int                                                InputStamina3;                                            // 0x00EC(0x0004)
	int                                                MaxPower1;                                                // 0x00F0(0x0004)
	int                                                MaxPower2;                                                // 0x00F4(0x0004)
	int                                                MaxPower3;                                                // 0x00F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetFishingNetMiniGame");
		return ptr;
	}


	void MiniGameStateChanged();
	void OnChangeGameState();
	void FishingGameOver();
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
	void CommonTabIndex();
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


	void TopHUDAlarmListRightBtnClick();
	void TopHUDAlarmListLeftBtnClick();
	void TopHUDAlarmListItemClick();
};


// Class EFGame.EFGFxWidgetInteraction
// 0x0010 (0x00D0 - 0x00C0)
class UEFGFxWidgetInteraction : public UEFUIFrame
{
public:
	class UEFGFxWidgetInteractionWarehouse*            InteractionWarehouse;                                     // 0x00C0(0x0008)
	class UEFGFxWidgetInteractionColosseum*            InteractionColosseum;                                     // 0x00C8(0x0008)

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
	void ClearFunctionButtonState();
	void InteractionCommonCloseBtnClick();
	void EndInteractionMode();
	void InteractionCommonPlayerTalkListClick();
	void ClickInteractionTalkSelectList();
	void InteractionCommonNPCTalkListClick();
	void ClickInteractionTalkList();
	void InteractionCommonMenuListClick();
	void ClickInteractionFunctionMenu();
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
	void FinishSwitchInteractionMode();
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
	void FinishMergeCompensation();
	void ModCommonEndCubeEffect();
	void EndBuffEffect();
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
	void CustomizingSettingValueChanged();
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
	void CharacterSelectMoving();
	void WallpaperCancel();
	void WallpaperSelected();
	void WallpaperConfirm();
	void CharacterSelectDeleteCancel();
	void CharacterSelectedIndex();
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
	class UEFUIWindowContent*                          Content;                                                  // 0x00C0(0x0008)

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
	void IsDisabled();
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
	class UInterpGroupInst*                            GroupInst;                                                // 0x00A0(0x0008)
	class AEFSpawnMatineeActor*                        SpawnMatineeActor;                                        // 0x00A8(0x0008)

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
	struct FString                                     NpcName;                                                  // 0x00A0(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                NpcKey;                                                   // 0x00B0(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                NpcCount;                                                 // 0x00B4(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFInterpGroupSpawn*>                 SpawnGroup;                                               // 0x00B8(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FPointer                                    m_pLastPlayAnimKey;                                       // 0x00FC(0x0008)

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
	unsigned char                                      UnknownData00[0x2];                                       // 0x0106(0x0002) MISSED OFFSET
	struct FRotator                                    SpawnRotation;                                            // 0x0108(0x000C)
	struct FVector                                     PrevMovePos;                                              // 0x0114(0x000C)

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
	class USkeletalMesh*                               EN_SkelMesh;                                              // 0x0274(0x0008) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	class UAnimSet*                                    EN_AnimSet;                                               // 0x027C(0x0008) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	TEnumAsByte<EN_AI_Type>                            EN_eAiType;                                               // 0x0284(0x0001) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	class UAkEvent*                                    EN_SoundEvent;                                            // 0x0288(0x0008) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      EN_Air : 1;                                               // 0x0290(0x0004) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      EN_DieAfterMove : 1;                                      // 0x0290(0x0004) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      EN_UseInitRot : 1;                                        // 0x0290(0x0004) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	float                                              EN_EscapeDistance;                                        // 0x0294(0x0004) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	struct FVector2D                                   EN_vIdleSecond;                                           // 0x0298(0x0008) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	float                                              EN_fRadiusForDeath;                                       // 0x02A0(0x0004) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	float                                              EN_fHeightForDeath;                                       // 0x02A4(0x0004) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	float                                              EN_fInitScale;                                            // 0x02A8(0x0004) (NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	int                                                EN_iMovingChance;                                         // 0x02AC(0x0004) (EditHide, EditTextBox, CrossLevelActive)
	struct FVector2D                                   EN_vMovingDistance;                                       // 0x02B0(0x0008) (EditHide, EditTextBox, CrossLevelActive)
	struct FVector2D                                   EN_vMovingHeight;                                         // 0x02B8(0x0008) (EditHide, EditTextBox, CrossLevelActive)
	struct FVector2D                                   EN_vMovingRot;                                            // 0x02C0(0x0008) (EditHide, EditTextBox, CrossLevelActive)
	float                                              EN_fMovingVelocity;                                       // 0x02C8(0x0004) (EditHide, EditTextBox, CrossLevelActive)
	float                                              EN_fEscapeVelocity;                                       // 0x02CC(0x0004) (EditHide, EditTextBox, CrossLevelActive)
	struct FVector                                     EN_LastLocation;                                          // 0x02D0(0x000C)
	struct FRotator                                    EN_LastRotation;                                          // 0x02DC(0x000C)

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
	class USequence*                                   Sequence;                                                 // 0x0274(0x0008)
	class USeqAct_Interp*                              Matinee;                                                  // 0x027C(0x0008)
	unsigned long                                      SpawnInAHiddenState : 1;                                  // 0x0284(0x0004) (RepNotify, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	float                                              last_time_seconds;                                        // 0x01A0(0x0004)
	TEnumAsByte<EFCursor>                              CurrentMouseCursor;                                       // 0x01A4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	TArray<class UEFCursorData*>                       EFMouseCursorData;                                        // 0x01A8(0x0010)
	TArray<struct FPointer>                            MouseCursorResource;                                      // 0x01B8(0x0010)
	TArray<class UTextureRenderTarget2D*>              RenderTargetArr;                                          // 0x01C8(0x0010)
	unsigned long                                      bReady : 1;                                               // 0x01D8(0x0004)
	unsigned long                                      bActivateFade : 1;                                        // 0x01D8(0x0004)
	unsigned long                                      bInfinityFadeOut : 1;                                     // 0x01D8(0x0004)
	struct FColor                                      FadeColor;                                                // 0x01DC(0x0004)
	float                                              FadeCurrAlpha;                                            // 0x01E0(0x0004)
	float                                              FadeEndTime;                                              // 0x01E4(0x0004)
	struct FInterpCurveFloat                           FadeAlphaValue;                                           // 0x01E8(0x0014)
	struct FEFRelativeTimeFadeInfo                     RelativeTimeFadeInfo;                                     // 0x01FC(0x002C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET
	struct FMatrix                                     CachedViewProjectionMatrix;                               // 0x0230(0x0040)
	struct FVector2D                                   CachedViewportSize;                                       // 0x0270(0x0008)
	struct FQWord                                      CachedFrameNumber;                                        // 0x0278(0x0008)
	int                                                CurrentMouseCursorPreset;                                 // 0x0280(0x0004)
	TArray<struct FEFCursorPresetInfo>                 MouseCursorPreset;                                        // 0x0284(0x0010)
	int                                                CurrentMouseCursorSize;                                   // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameViewportClient");
		return ptr;
	}


	void Tick();
	void PostRender();
	void CreateScreenshot();
	void InitRelativeTimeFadeInfo();
	void CacheViewProjectionMatrix();
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


	void UpdateDynamicProperty();
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
	TArray<struct FEFAbilityParticleEvent>             ParticleDataList;                                         // 0x0058(0x0010) (RepRetry, ProtectedWrite, CrossLevelActive)

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
	int                                                PrimaryKey;                                               // 0x0058(0x0004) (Interp, NonTransactional, RepRetry, ArchetypeProperty, CrossLevelActive)
	int                                                SecondaryKey;                                             // 0x005C(0x0004) (Interp, NonTransactional, RepRetry, ArchetypeProperty, CrossLevelActive)
	unsigned long                                      bUpdatedObjectsFromPaths : 1;                             // 0x0060(0x0004)
	unsigned long                                      bPostUpdateObjectsFromPaths : 1;                          // 0x0060(0x0004)

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
	TArray<struct FEFParamActionInfo>                  ActionInfoArray;                                          // 0x0064(0x0010)

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
	int                                                CharacterClass;                                           // 0x0064(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, CrossLevelPassive)
	struct FString                                     strCustomizingName;                                       // 0x0068(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, CrossLevelPassive)
	struct FString                                     strCustomizingRuleName;                                   // 0x0078(0x0010)
	class UEFData_CharacterCustomizingRule*            pCustomizingRule;                                         // 0x0088(0x0008)
	struct FString                                     strFullName;                                              // 0x0090(0x0010) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FCustomPartItemValue>                arrCustomPartItem;                                        // 0x00A0(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, EditTextBox)
	TArray<struct FstBoneMorphGroupWeight>             arrBoneMorphGroupWeight;                                  // 0x00B0(0x0010) (Interp, NonTransactional, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FstBoneMorphWeight>                  arrBoneMorphWeight;                                       // 0x00C0(0x0010) (Interp, NonTransactional, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FstMeshMorphWeight>                  arrMeshMorphWeight;                                       // 0x00D0(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty)
	TArray<struct FstMaterialExpressionParameterGroupFactor> arrMaterialExpressionParamGroupFactor;                    // 0x00E0(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, ArchetypeProperty)
	struct FEFIconInfo                                 GameIcon;                                                 // 0x00F0(0x0024) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bUseFacePreset : 1;                                       // 0x0114(0x0004) (NonTransactional, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	int                                                FacePresetID;                                             // 0x0118(0x0004) (NonTransactional, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	struct FEFIconInfo                                 FaceGameIcon;                                             // 0x011C(0x0024) (NonTransactional, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)

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
	int                                                CharacterClass;                                           // 0x0064(0x0004) (RepNotify, NonTransactional, CrossLevelPassive)
	struct FString                                     strCustomizingRuleName;                                   // 0x0068(0x0010) (RepNotify, NonTransactional, CrossLevelPassive)
	struct FString                                     strFullName;                                              // 0x0078(0x0010)
	TArray<struct FCustomizingMotionActionItem>        MotionActionArr;                                          // 0x0088(0x0010) (RepNotify, EditorOnly, RepRetry, ProtectedWrite, EditHide)
	class UAnimSet*                                    FaceActionAnimSet;                                        // 0x0098(0x0008) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FCustomizingFaceActionItem>          FaceActionArr;                                            // 0x00A0(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FEFIconInfo                                 LeftEyeIcon;                                              // 0x00B0(0x0024) (RepNotify, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)
	struct FEFIconInfo                                 RightEyeIcon;                                             // 0x00D4(0x0024) (RepNotify, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)
	TArray<struct FCustomPartItemLook>                 arrCustomPartItemLook;                                    // 0x00F8(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, EditTextBox)
	TArray<struct FCostumeDataSet>                     arrCostumeDataSet;                                        // 0x0108(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     strCostumePreview;                                        // 0x0118(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UAnimSet*                                    BoneMorphAnimset;                                         // 0x0128(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FstBoneMorphGroup>                   arrBoneMorphTargetGroup;                                  // 0x0130(0x0010) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FstBoneMorph>                        arrBoneMorphTarget;                                       // 0x0140(0x0010) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	struct FObjectPath                                 PATH_BoneMorphAnimSet;                                    // 0x0150(0x0020)
	TArray<struct FBoneMorphAnimData>                  arrBoneMorphAnimData;                                     // 0x0170(0x0010)
	TArray<struct FstMeshMorphRule>                    arrMeshMorphRuleArray;                                    // 0x0180(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty)
	TArray<struct FstMaterialExpressionParameterGroup> arrMaterialExpressionParamGroup;                          // 0x0190(0x0010) (Interp, NonTransactional, EditorOnly, RepRetry, ArchetypeProperty)

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
	struct FString                                     CustomizeBoneScalePresetName;                             // 0x0064(0x0010) (RepNotify, Interp, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFCustomizeSkelControlValue>        SkelControlValueArr;                                      // 0x0074(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, CrossLevelPassive)

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
	class UEFData_PartsMesh*                           PartsMesh;                                                // 0x0064(0x0008) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	class UObject*                                     DefaultEFEffectSpawn;                                     // 0x006C(0x0008) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	struct FObjectPath                                 PATH_DefaultEFEffectSpawn;                                // 0x0074(0x0020)

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
	TArray<struct FActionNpcPartExtentInfo>            ActionNpcPartExtentInfoArray;                             // 0x0064(0x0010)
	TArray<struct FActionNpcPartTransformInfoSet>      ActionNpcPartTransformInfoSetArray;                       // 0x0074(0x0010)
	TArray<struct FActionNpcMoveInfo>                  ActionNpcMoveInfoArray;                                   // 0x0084(0x0010)
	TArray<struct FNpcPartSampleExportDataByAction>    partSampleDatas;                                          // 0x0094(0x0010)

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
	struct FString                                     PaletteName;                                              // 0x0064(0x0010) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FColorSwatchItem>                    SwatchList;                                               // 0x0074(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              SaturationMin;                                            // 0x0084(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              SaturationMax;                                            // 0x0088(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              LightnessMin;                                             // 0x008C(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              LightnessMax;                                             // 0x0090(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FColor>                              ColorPalettePixelData;                                    // 0x0094(0x0010)

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
	TArray<struct FTextureSwatchItem>                  SwatchList;                                               // 0x0074(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFEQUIP_PART>                          eMeshPartsType;                                           // 0x0064(0x0001) (RepNotify, NonTransactional, EditorOnly, RepRetry, ArchetypeProperty, EditHide, EditTextBox)
	unsigned char                                      RequireStance;                                            // 0x0065(0x0001) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	class USkeletalMesh*                               PartsMesh;                                                // 0x0068(0x0008) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0070(0x0010) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	TArray<struct FEFMaterialVariation>                MaterialsVariation;                                       // 0x0080(0x0010) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	class UAnimSet*                                    AnimSetTemplate;                                          // 0x0090(0x0008) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0098(0x0008) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	struct FString                                     SocketGroupName;                                          // 0x00A0(0x0010) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	TArray<class UEFActionSkelControl*>                SkelControlList;                                          // 0x00B0(0x0010)
	class UEFData_SkelControlGroup*                    SkelControllGroup;                                        // 0x00C0(0x0008)
	class UEFData_SkelControlGroup*                    SkelControlGroup;                                         // 0x00C8(0x0008) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	class UMorphTargetSet*                             MorphSet;                                                 // 0x00D0(0x0008) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	class UAnimNotify_Trails*                          Trail_Default;                                            // 0x00D8(0x0008)
	class UEFData_AnimNotify_Trails*                   Trails_Default;                                           // 0x00E0(0x0008) (Interp, NotForConsole, ArchetypeProperty, EditHide)
	struct FObjectPath                                 PATH_PartsMesh;                                           // 0x00E8(0x0020)
	TArray<struct FObjectPath>                         PATH_Material;                                            // 0x0108(0x0010)
	struct FObjectPath                                 PATH_AnimSetTemplate;                                     // 0x0118(0x0020)
	struct FObjectPath                                 PATH_PhysicsAsset;                                        // 0x0138(0x0020)
	struct FObjectPath                                 PATH_MorphTargetSet;                                      // 0x0158(0x0020)
	unsigned long                                      bUseOnePassLightingOnTranslucency : 1;                    // 0x0178(0x0004) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              fPartsScale;                                              // 0x017C(0x0004) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              TranslucencySortKeyFactor;                                // 0x0180(0x0004) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	int                                                TranslucencySortPriority;                                 // 0x0184(0x0004) (RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)

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
	class UAnimNotify_Trails*                          Trail_Default;                                            // 0x0058(0x0008) (RepNotify, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFMaskData>                         m_MaskDataArr;                                            // 0x0058(0x0010) (RepNotify, Interp, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<class UEFActionSkelControl*>                SkelControlList;                                          // 0x0058(0x0010) (RepNotify, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFLookPreset>                       LookPresets;                                              // 0x0058(0x0010)
	int                                                CurRow;                                                   // 0x0068(0x0004)
	int                                                StartCol;                                                 // 0x006C(0x0004)
	TArray<struct FString>                             ColumnTitles;                                             // 0x0070(0x0010)
	TArray<struct FString>                             ColumnDataTypes;                                          // 0x0080(0x0010)
	TArray<struct FString>                             ColumnDataMinMax;                                         // 0x0090(0x0010)
	TArray<struct FString>                             DataArr;                                                  // 0x00A0(0x0010)

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
	void WriteString();
	void WriteName();
	void WriteFloat();
	void WriteInt();
	void WriteUINT();
	void SetSheetName();
	void SetFont();
	void SetBorder();
	void SetBackgroundColor();
	void GetWorkSheetName();
	void SelectWorkSheet();
	void SelectWorkSheetByName();
	void SaveAs();
	void OpenExcelFile();
	void NewSheet();
	void NewExcelFile();
	void AutoFitColomn();
	void AutoFitColumn();
};


// Class EFGame.EFKismetData_Pack
// 0x0028 (0x0080 - 0x0058)
class UEFKismetData_Pack : public UObject
{
public:
	struct FString                                     PackName;                                                 // 0x0058(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)
	class UEFKismetData_Unit*                          KismetUnit;                                               // 0x0068(0x0008) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)
	TArray<class UEFKismetData_Unit*>                  KismetUnits;                                              // 0x0070(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox)

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
	int                                                UniqueId;                                                 // 0x01B4(0x0004)
	int                                                UnitIndex;                                                // 0x01B8(0x0004)
	struct FString                                     UnitName;                                                 // 0x01BC(0x0010)
	struct FString                                     UnitDesc;                                                 // 0x01CC(0x0010)
	int                                                Editor_Version;                                           // 0x01DC(0x0004)
	unsigned long                                      Editor_IsUpdate : 1;                                      // 0x01E0(0x0004)
	unsigned long                                      Editor_IsExist : 1;                                       // 0x01E0(0x0004)

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
	struct FString                                     MapName;                                                  // 0x0058(0x0010) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                MapIndex;                                                 // 0x0068(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFKismetData_Unit*>                  KismetUnitArray;                                          // 0x006C(0x0010) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bCinematicControl : 1;                                    // 0x0284(0x0004) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox)

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
	unsigned long                                      bCinematicControl : 1;                                    // 0x02B0(0x0004) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox)

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
	TEnumAsByte<EF_PARTICLE_BUFF_INFO_TYPE>            BuffInfoType;                                             // 0x0058(0x0001)

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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              DelayTime;                                                // 0x005C(0x0004) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFParticleData*>                     PSData;                                                   // 0x0060(0x0010) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<int>                                        BuffParticleType;                                         // 0x0070(0x0010)

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
	TEnumAsByte<EeParticleStackBuffInfoAddType>        AddType;                                                  // 0x0080(0x0001) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                ApplyStackCount;                                          // 0x0084(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<class UEFParticleSoundData*>                TempEditorChildData;                                      // 0x0058(0x0010)
	TArray<class UEFParticleSoundDataComment*>         CommentList;                                              // 0x0068(0x0010)
	struct FString                                     ContainerName;                                            // 0x0078(0x0010) (RepNotify, Interp, NonTransactional, ProtectedWrite, EditTextBox, CrossLevelPassive)
	TEnumAsByte<EF_PARTICLE_SOUND_TYPE>                ParticleSoundType;                                        // 0x0088(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	unsigned long                                      EditorDirty : 1;                                          // 0x008C(0x0004)

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
	class UEFParticleSoundDataHittedArmorSet*          Default;                                                  // 0x0090(0x0008)
	class UTexture2D*                                  EditorImage_Armor;                                        // 0x0098(0x0008) (Interp, NonTransactional, NotForConsole)

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerBeHittedSet.PawnMaterialBeHittedMap
	TArray<class UEFParticleSoundDataBeHittedPawnMaterial*> PawnMaterialBeHittedArr;                                  // 0x00D8(0x0010)
	class UTexture2D*                                  EditorImage_BeHitted;                                     // 0x00E8(0x0008) (Interp, NonTransactional, NotForConsole)

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerBuffSet.BuffFXMap
	TArray<class UEFParticleSoundDataBuffFX*>          BuffFXArr;                                                // 0x00D8(0x0010)
	class UTexture2D*                                  EditorImage_Buff;                                         // 0x00E8(0x0008) (Interp, NonTransactional, NotForConsole)

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerCommon.CommonFXMap
	TArray<class UEFParticleSoundDataCommon*>          CommonFXArr;                                              // 0x00D8(0x0010)
	class UEFDropItemEffectInfo*                       DropItemEffect;                                           // 0x00E8(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFAbilityEffectInfo*                        AbilityEffect;                                            // 0x00F0(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, CrossLevelActive)
	class UTexture2D*                                  EditorImage_Common;                                       // 0x00F8(0x0008) (Interp, NonTransactional, NotForConsole)

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
	class UEFParticleSoundDataFloorMaterial*           Small;                                                    // 0x0090(0x0008)
	class UEFParticleSoundDataFloorMaterial*           Medium;                                                   // 0x0098(0x0008)
	class UEFParticleSoundDataFloorMaterial*           SpingBound_Small;                                         // 0x00A0(0x0008)
	class UEFParticleSoundDataFloorMaterial*           SpingBound_Medium;                                        // 0x00A8(0x0008)
	class UTexture2D*                                  EditorImage_Small;                                        // 0x00B0(0x0008) (Interp, NonTransactional, NotForConsole)
	class UTexture2D*                                  EditorImage_Medium;                                       // 0x00B8(0x0008) (Interp, NonTransactional, NotForConsole)
	class UTexture2D*                                  EditorImage_SpingBound_Small;                             // 0x00C0(0x0008) (Interp, NonTransactional, NotForConsole)
	class UTexture2D*                                  EditorImage_SpingBound_Medium;                            // 0x00C8(0x0008) (Interp, NonTransactional, NotForConsole)

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
	class UEFParticleSoundDataFloorMaterial*           Left;                                                     // 0x0090(0x0008)
	class UEFParticleSoundDataFloorMaterial*           Right;                                                    // 0x0098(0x0008)
	class UEFParticleSoundDataArmorMaterial*           ArmorEffect;                                              // 0x00A0(0x0008)
	class UTexture2D*                                  EditorImage_Left;                                         // 0x00A8(0x0008) (Interp, NonTransactional, NotForConsole)
	class UTexture2D*                                  EditorImage_Right;                                        // 0x00B0(0x0008) (Interp, NonTransactional, NotForConsole)
	class UTexture2D*                                  EditorImage_ArmorEffect;                                  // 0x00B8(0x0008) (Interp, NonTransactional, NotForConsole)

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerGroundEffect.GroundEffectMap
	TArray<class UEFParticleSoundDataGroundEffect*>    GroundEffectArr;                                          // 0x00D8(0x0010)
	class UEFParticleSoundDataGroundEffect*            DefaultRange;                                             // 0x00E8(0x0008)
	class UEFParticleSoundDataGroundEffect*            DefaultTarget;                                            // 0x00F0(0x0008)
	class UTexture2D*                                  EditorImage_GroundEffect;                                 // 0x00F8(0x0008) (Interp, NonTransactional, NotForConsole)

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
	class UEFParticleSoundDataFloorMaterial*           KnockbackEffect;                                          // 0x0090(0x0008)
	class UTexture2D*                                  EditorImage_Knockback;                                    // 0x0098(0x0008) (Interp, NonTransactional, NotForConsole)

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
	class UEFPostProcessMaterialEffectCamera*          CameraEffect;                                             // 0x0090(0x0008) (RepNotify, Interp, EditorOnly, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerSkillHitSet.SkillMap
	TArray<class UEFParticleSoundDataHittedSkillSet*>  SkillSetEffectArr;                                        // 0x00D8(0x0010)
	class UTexture2D*                                  EditorImage_Skill;                                        // 0x00E8(0x0008) (Interp, NonTransactional, NotForConsole)

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerWeaponAttributeEffect.WeaponAttributeEffectMap
	TArray<class UEFParticleSoundDataWeaponAttributeEffect*> WeaponAttributeEffectArr;                                 // 0x00D8(0x0010)
	class UTexture2D*                                  EditorImage_WeaponAttributeEffect;                        // 0x00E8(0x0008) (Interp, NonTransactional, NotForConsole)
	TArray<class UEFParticleSoundDataWeaponAttributeEffect*> DefaultAttributeEffectArr;                                // 0x00F0(0x0010)
	class UEFParticleSoundDataWeaponAttributeEffect*   Sword;                                                    // 0x0100(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Bow;                                                      // 0x0108(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Gun;                                                      // 0x0110(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Spear;                                                    // 0x0118(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Gauntlet;                                                 // 0x0120(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Instrument;                                               // 0x0128(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Hammer;                                                   // 0x0130(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Dagger;                                                   // 0x0138(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Wand;                                                     // 0x0140(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Carddeck;                                                 // 0x0148(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Symbol;                                                   // 0x0150(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Longlance;                                                // 0x0158(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   Shortlance;                                               // 0x0160(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   DemonicWeapon;                                            // 0x0168(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   DemonClow;                                                // 0x0170(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   BladeDuelSword;                                           // 0x0178(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   BladeLongSword;                                           // 0x0180(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   HolySword;                                                // 0x0188(0x0008)
	class UEFParticleSoundDataWeaponAttributeEffect*   HolySwordEnhanced;                                        // 0x0190(0x0008)

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
	class UParticleSystem*                             Defaul_Trail;                                             // 0x0090(0x0008) (Interp, NotForConsole, ArchetypeProperty, EditHide)
	TArray<class UEFParticleSoundDataWeaponFXDir*>     WeaponDir;                                                // 0x0098(0x0010)
	class UTexture2D*                                  EditorImage_Weapon;                                       // 0x00A8(0x0008) (Interp, NonTransactional, NotForConsole)

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
	TArray<class UEFParticleSoundDataHittedWeaponSet*> WeaponSetEffectArr;                                       // 0x0090(0x0010)
	class UEFParticleSoundDataHittedWeaponSet*         Default;                                                  // 0x00A0(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Sword;                                                    // 0x00A8(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Bow;                                                      // 0x00B0(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Gun;                                                      // 0x00B8(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Spear;                                                    // 0x00C0(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Gauntlet;                                                 // 0x00C8(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Instrument;                                               // 0x00D0(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Hammer;                                                   // 0x00D8(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Dagger;                                                   // 0x00E0(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Wand;                                                     // 0x00E8(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Carddeck;                                                 // 0x00F0(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Symbol;                                                   // 0x00F8(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Longlance;                                                // 0x0100(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         Shortlance;                                               // 0x0108(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         DemonicWeapon;                                            // 0x0110(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         DemonClow;                                                // 0x0118(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         BladeDuelSword;                                           // 0x0120(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         BladeLongSword;                                           // 0x0128(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         HolySword;                                                // 0x0130(0x0008)
	class UEFParticleSoundDataHittedWeaponSet*         HolySwordEnhanced;                                        // 0x0138(0x0008)
	class UTexture2D*                                  EditorImage_Weapon;                                       // 0x0140(0x0008) (Interp, NonTransactional, NotForConsole)

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
	struct FString                                     Desc;                                                     // 0x0058(0x0010) (Interp, NonTransactional, NotForConsole)
	unsigned long                                      EditorDirty : 1;                                          // 0x0068(0x0004)

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
	class UEFParticleSoundContainerFootStep*           Footstep;                                                 // 0x006C(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFParticleSoundContainerKnockback*          Knockback;                                                // 0x0074(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFParticleSoundContainerDown*               Down;                                                     // 0x007C(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFParticleSoundContainerSkillHitSet*        SkillHitSet;                                              // 0x0084(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFParticleSoundContainerWeaponHitSet*       WeaponHitSet;                                             // 0x008C(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFParticleSoundContainerArmorHitSet*        ArmorHitSet;                                              // 0x0094(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFParticleSoundContainerWeaponFX*           WeaponFX;                                                 // 0x009C(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFParticleSoundContainerBeHittedSet*        BeHittedSet;                                              // 0x00A4(0x0008) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     ContainerSetName;                                         // 0x006C(0x0010) (RepNotify, Interp, NonTransactional, ProtectedWrite, EditTextBox, CrossLevelPassive)
	TArray<struct FString>                             FootstepArrays;                                           // 0x007C(0x0010)
	TArray<struct FString>                             DownArrays;                                               // 0x008C(0x0010)
	TArray<struct FString>                             SkillHitSetArrays;                                        // 0x009C(0x0010)
	TArray<struct FString>                             WeaponHitSetArrays;                                       // 0x00AC(0x0010)
	TArray<struct FString>                             ArmorHitSetArrays;                                        // 0x00BC(0x0010)
	TArray<struct FString>                             WeaponFXArrays;                                           // 0x00CC(0x0010)
	TArray<struct FString>                             BeHittedSetArrays;                                        // 0x00DC(0x0010)
	struct FString                                     Footstep;                                                 // 0x00EC(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Down;                                                     // 0x00FC(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SkillHitSet;                                              // 0x010C(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     WeaponHitSet;                                             // 0x011C(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     ArmorHitSet;                                              // 0x012C(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     WeaponFX;                                                 // 0x013C(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     BeHittedSet;                                              // 0x014C(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	int                                                X;                                                        // 0x0058(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                Y;                                                        // 0x005C(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UTexture2D*                                  Image;                                                    // 0x0060(0x0008) (Interp, NonTransactional, NotForConsole)
	struct FString                                     Desc;                                                     // 0x0068(0x0010) (Interp, NonTransactional, NotForConsole)
	struct FString                                     Keyword;                                                  // 0x0078(0x0010) (Interp, NonTransactional, NotForConsole)
	unsigned long                                      EditorDirty : 1;                                          // 0x0088(0x0004)
	int                                                DataIndex;                                                // 0x008C(0x0004)
	struct FString                                     ParticleSoundDataName;                                    // 0x0090(0x0010)

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
	TArray<class UEFParticleData*>                     ArmorMaterialEffectDataArr;                               // 0x00A0(0x0010)
	class UEFParticleData*                             Data_Water;                                               // 0x00B0(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Air;                                                 // 0x00B8(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Stone;                                               // 0x00C0(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Flesh1;                                              // 0x00C8(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Flesh2;                                              // 0x00D0(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Metal;                                               // 0x00D8(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Wood;                                                // 0x00E0(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Leather;                                             // 0x00E8(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Ice;                                                 // 0x00F0(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Lava;                                                // 0x00F8(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Mucus;                                               // 0x0100(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Exoskeletal;                                         // 0x0108(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     LookInfoKey;                                              // 0x00A0(0x0010) (Interp, NonTransactional, RepRetry, ArchetypeProperty, CrossLevelActive)
	struct FEFPawnMaterialBeHittedCurveInfo            PawnMaterialHittedInfo;                                   // 0x00B0(0x0060) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      bSkipAttackerEffect : 1;                                  // 0x0110(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide)
	unsigned long                                      bSkipDirectionEffect : 1;                                 // 0x0110(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide)
	unsigned long                                      bSkipBloodEffect : 1;                                     // 0x0110(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide)
	unsigned long                                      bUseHitDirection : 1;                                     // 0x0110(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide)
	TEnumAsByte<EParticleSoundDataBeHittedPawnMaterial_HitParticleType> HitEffectType;                                            // 0x0114(0x0001) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	TArray<class UEFParticleData*>                     HitEffectData;                                            // 0x0118(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide)

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
	struct FString                                     BuffKey;                                                  // 0x00A0(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              DelayTime;                                                // 0x00B0(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UParticleSystem*                             BeamParticleSystem;                                       // 0x00B4(0x0008) (NonTransactional, RepRetry, EditTextBox)
	TArray<struct FParticleSysParam>                   BeamParticleSystemParamList;                              // 0x00BC(0x0010) (NonTransactional, RepRetry, EditTextBox)
	class UParticleSystem*                             BeamSourceParticleSystem;                                 // 0x00CC(0x0008) (NonTransactional, RepRetry, EditTextBox)
	TArray<struct FParticleSysParam>                   BeamSourceParticleSystemParamList;                        // 0x00D4(0x0010) (NonTransactional, RepRetry, EditTextBox)
	class UParticleSystem*                             BeamCasterParticleSystem;                                 // 0x00E4(0x0008) (NonTransactional, RepRetry, EditTextBox)
	TArray<struct FParticleSysParam>                   BeamCasterParticleSystemParamList;                        // 0x00EC(0x0010) (NonTransactional, RepRetry, EditTextBox)
	struct FName                                       BeamCasterSocketName;                                     // 0x00FC(0x0008) (NonTransactional, RepRetry, EditTextBox)
	struct FVector                                     BeamCasterOffset;                                         // 0x0104(0x000C) (NonTransactional, RepRetry, EditTextBox)
	struct FVector                                     BeamScale;                                                // 0x0110(0x000C) (NonTransactional, RepRetry, EditTextBox)
	TArray<struct FEFBeamUpdateInfo>                   BeamEmitterUpdateInfos;                                   // 0x011C(0x0010)

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
	struct FString                                     BuffKey;                                                  // 0x00A0(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bUseBloodColor : 1;                                       // 0x00B0(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bDefaultParticleRemove : 1;                               // 0x00B0(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bBuffEndShake : 1;                                        // 0x00B0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bLocalPlayerOnly : 1;                                     // 0x00B0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bUseHitDirection : 1;                                     // 0x00B0(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bSkipAttackerEffect : 1;                                  // 0x00B0(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bSkipDirectionEffect : 1;                                 // 0x00B0(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bSkipBloodEffect : 1;                                     // 0x00B0(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TEnumAsByte<EParticleSoundDataBuffFX_ScaleOption>  BuffScaleOption;                                          // 0x00B4(0x0001) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TEnumAsByte<EParticleSoundDataBuffFXSet_HitParticleType> HitEffectType;                                            // 0x00B5(0x0001) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	TArray<class UEFParticleBuffInfoBase*>             StartEffect;                                              // 0x00B8(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFParticleDataModuleSingleAKEvent*          StartSound;                                               // 0x00C8(0x0008) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<class UEFParticleBuffInfoBase*>             LoopEffect;                                               // 0x00D0(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFParticleDataModuleSingleAKEvent*          LoopSound;                                                // 0x00E0(0x0008) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<class UEFParticleBuffInfoBase*>             EndEffect;                                                // 0x00E8(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              EndSoundFadeOutTime;                                      // 0x00F8(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<class UEFParticleBuffInfoBase*>             ForcedEndEffect;                                          // 0x00FC(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFParticleDataModuleSingleAKEvent*          ForcedEndSound;                                           // 0x010C(0x0008) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<class UEFParticleBuffInfoBase*>             SkillEffectUnitParticle;                                  // 0x0114(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFParticleDataModuleSingleAKEvent*          SkillEffectUnitSound;                                     // 0x0124(0x0008) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              FadeIn;                                                   // 0x012C(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              FadeOut;                                                  // 0x0130(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UPostProcessChain*                           PPChain;                                                  // 0x0134(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FScalarTimeVarying>                  ScalarParameterList;                                      // 0x013C(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFPostProcessMaterialEffectStatus*          BuffPostProcessMaterialData;                              // 0x014C(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFCameraViewShake*                          NewViewShake;                                             // 0x0154(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFParticleData*                             CameraEffect;                                             // 0x015C(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              BuffHitOffsetScale;                                       // 0x0164(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<class UEFParticleData*>                     BuffHitEffectData;                                        // 0x0168(0x0010) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFParticleDataModuleSingleAKEvent*          BuffHitSoundData;                                         // 0x0178(0x0008) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFPostProcessMaterialEffectHit*             BuffBeHittedProcessMaterialData;                          // 0x0180(0x0008) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFCameraViewShake*                          NewBuffBeHittedCameraShakeParams;                         // 0x0188(0x0008) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<class UEFParticleSoundDataBuffWeaponFXDir*> BuffHitChangeWeaponDirArr;                                // 0x0190(0x0010) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	struct FString                                     CommonHittedSkillKey;                                     // 0x01A0(0x0010) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFPostProcessMaterialEffectHit*             BuffWeaponHittedProcessMaterialData;                      // 0x01B0(0x0008) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	class UEFCameraViewShake*                          NewBuffWeaponHittedCameraShakeParams;                     // 0x01B8(0x0008) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<class UEFParticleSoundDataWeaponFXDir*>     CacheHitChangeWeaponDir;                                  // 0x01C0(0x0010)

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
	struct FString                                     Comment;                                                  // 0x00A0(0x0010) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SizeX;                                                    // 0x00B0(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SizeY;                                                    // 0x00B4(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                BorderWidth;                                              // 0x00B8(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDrawBox : 1;                                             // 0x00BC(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFilled : 1;                                              // 0x00BC(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bTileFill : 1;                                            // 0x00BC(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      BorderColor;                                              // 0x00C0(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      FillColor;                                                // 0x00C4(0x0004) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFParticleSoundData*>                GroupDataArr;                                             // 0x00C8(0x0010)

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
	struct FString                                     Key;                                                      // 0x00A0(0x0010) (Interp, NonTransactional, RepRetry, ArchetypeProperty, CrossLevelActive)
	TArray<class UEFParticleDataBase*>                 ParticleDataSet;                                          // 0x00B0(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseAbsoluteScale : 1;                                    // 0x00C0(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	TArray<class UEFParticleData*>                     FloorTypeEffectDataArr;                                   // 0x00A0(0x0010)
	class UEFParticleData*                             Data_Default;                                             // 0x00B0(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Dirt;                                                // 0x00B8(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Grass;                                               // 0x00C0(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_WaterDeep;                                           // 0x00C8(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_WaterSwamp;                                          // 0x00D0(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_WoodFloor;                                           // 0x00D8(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_WoodTree;                                            // 0x00E0(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_MetalHeavy;                                          // 0x00E8(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_MetalLight;                                          // 0x00F0(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Stone;                                               // 0x00F8(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Mud;                                                 // 0x0100(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Carpet;                                              // 0x0108(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Snow;                                                // 0x0110(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Magic01;                                             // 0x0118(0x0008) (RepNotify, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<class UEFParticleDataModuleSoundBase*>      FloorTypeEffectDataArr;                                   // 0x00A0(0x0010)
	class UEFParticleDataModuleSoundBase*              Data_Default;                                             // 0x00B0(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_Dirt;                                                // 0x00B8(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_Grass;                                               // 0x00C0(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_WaterDeep;                                           // 0x00C8(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_WaterSwamp;                                          // 0x00D0(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_WoodFloor;                                           // 0x00D8(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_WoodTree;                                            // 0x00E0(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_MetalHeavy;                                          // 0x00E8(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_MetalLight;                                          // 0x00F0(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_Stone;                                               // 0x00F8(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_Mud;                                                 // 0x0100(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_Carpet;                                              // 0x0108(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_Snow;                                                // 0x0110(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleDataModuleSoundBase*              Data_Magic01;                                             // 0x0118(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     Key;                                                      // 0x00A0(0x0010) (Interp, NonTransactional, RepRetry, ArchetypeProperty, CrossLevelActive)
	TArray<class UEFParticleGroundData*>               ParticleDataSet;                                          // 0x00B0(0x0010) (RepNotify, Interp, NotForConsole, RepRetry, EditHide, CrossLevelPassive)
	TArray<struct FEFGroundDecalSystemInfo>            DecalSet;                                                 // 0x00C0(0x0010) (RepNotify, Interp, NotForConsole, RepRetry, EditHide, CrossLevelPassive)

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
	class UEFParticleSoundDataArmorMaterial*           TargetArmorEffect;                                        // 0x00A0(0x0008) (RepNotify, EditHide, EditTextBox)

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
	struct FString                                     Key;                                                      // 0x00A0(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleSystemData*                       Default;                                                  // 0x00B0(0x0008)
	class UEFParticleData*                             DefaultData;                                              // 0x00B8(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EMaterialWeapon>                       Key;                                                      // 0x00A0(0x0001) (NonTransactional, EditorOnly, PrivateWrite, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	class UEFParticleSoundDataWeaponAttribute*         AttackerWeaponEffect;                                     // 0x00A4(0x0008) (RepNotify, Interp, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	class UEFParticleSoundDataWeaponAttribute*         AttackerWeaponCriticalEffect;                             // 0x00AC(0x0008) (RepNotify, Interp, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	class UEFParticleSoundDataWeaponAttribute*         AttackerWeaponBackAttackEffect;                           // 0x00B4(0x0008) (RepNotify, Interp, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	class UEFParticleSoundDataWeaponAttribute*         AttackerWeaponBackAttackCriticalEffect;                   // 0x00BC(0x0008) (RepNotify, Interp, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)

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
	TArray<class UEFParticleData*>                     WeaponAttributeEffectDataArr;                             // 0x00A0(0x0010)
	class UEFParticleData*                             Data_Default;                                             // 0x00B0(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Fire;                                                // 0x00B8(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Ice;                                                 // 0x00C0(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Electric;                                            // 0x00C8(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Wind;                                                // 0x00D0(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Earth;                                               // 0x00D8(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Dark;                                                // 0x00E0(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Holy;                                                // 0x00E8(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Water;                                               // 0x00F0(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFParticleData*                             Data_Lava;                                                // 0x00F8(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FName                                       EffectKey;                                                // 0x00A0(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, CrossLevelActive)
	TArray<struct FPointer>                            Attribute;                                                // 0x00A8(0x0010)
	TArray<class UEFParticleData*>                     Fire;                                                     // 0x00B8(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, ArchetypeProperty, CrossLevelActive)
	TArray<class UEFParticleData*>                     Ice;                                                      // 0x00C8(0x0010) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide)
	TArray<class UEFParticleData*>                     Electric;                                                 // 0x00D8(0x0010) (Interp, NonTransactional, NotForConsole, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFParticleData*>                     Wind;                                                     // 0x00E8(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	TArray<class UEFParticleData*>                     Earth;                                                    // 0x00F8(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFParticleData*>                     Dark;                                                     // 0x0108(0x0010) (RepNotify, Interp, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFParticleData*>                     Holy;                                                     // 0x0118(0x0010) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	TArray<class UEFParticleData*>                     Water;                                                    // 0x0128(0x0010) (RepNotify, Interp, ProtectedWrite, ArchetypeProperty, EditTextBox)
	TArray<class UEFParticleData*>                     BaseDefault;                                              // 0x0138(0x0010) (RepNotify, NonTransactional, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelActive)

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
	int                                                MaxSpawn;                                                 // 0x00A0(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                FXIndex;                                                  // 0x00A4(0x0004) (Interp, NonTransactional, RepRetry, ArchetypeProperty, CrossLevelActive)
	TArray<struct FEFParticleSoundWeaponFXAttacker>    AttackerParticles;                                        // 0x00A8(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFParticleSoundWeaponFXDelay>       Particles;                                                // 0x00B8(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FEFParticleSoundWeaponFXBlood               BloodParticle;                                            // 0x00C8(0x0014) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FEFParticleSoundWeaponFXRandomBlood         RandomBloods;                                             // 0x00DC(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFCameraViewShake*                          NewHitCameraShake;                                        // 0x00EC(0x0008) (Interp, NonTransactional, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	int                                                ChangeFXIndex;                                            // 0x00F4(0x0004) (ArchetypeProperty, CrossLevelPassive, CrossLevelActive)

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
	float                                              DelayTime;                                                // 0x0058(0x0004)
	float                                              Duration;                                                 // 0x005C(0x0004)
	unsigned long                                      bSpawnAll : 1;                                            // 0x0060(0x0004)
	class UEFParticleData*                             ParticleData;                                             // 0x0064(0x0008)

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
	float                                              DelayTime;                                                // 0x0058(0x0004)
	class UEFParticleData*                             ParticleData;                                             // 0x005C(0x0008)

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
	TArray<class UEFParticleSoundContainerSet*>        ParticleSoundContainerSetArr;                             // 0x0058(0x0010)
	TArray<class UEFParticleSoundContainer*>           ParticleSoundContainerArr;                                // 0x0068(0x0010)
	struct FString                                     strName;                                                  // 0x0078(0x0010) (NotForConsole, ArchetypeProperty, EditHide, EditTextBox)

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
	int                                                TeleportIndex;                                            // 0x0274(0x0004) (RepNotify, Interp, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<class UObject*>                             DataList;                                                 // 0x0058(0x0010)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer.DataListCache
	TEnumAsByte<EUPKDataType>                          DataType;                                                 // 0x00B0(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	unsigned long                                      bCanXlsImport : 1;                                        // 0x00B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer");
		return ptr;
	}


	void XmlExport();
	void XlsExport();
	void XlsImport();
};


// Class EFGame.EFDataContainer_Action
// 0x0020 (0x00D8 - 0x00B8)
class UEFDataContainer_Action : public UEFDataContainer
{
public:
	struct FString                                     CategoryName;                                             // 0x00B8(0x0010)
	TArray<class UEFActionObjectGroup*>                ActionObjectGroupList;                                    // 0x00C8(0x0010) (NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, CrossLevelActive)

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_CharacterCustomizing.DataListCache0
	unsigned char                                      UnknownData01[0x48];                                      // 0x0100(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_CharacterCustomizing.DataListCache1
	unsigned char                                      UnknownData02[0x48];                                      // 0x0148(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_CharacterCustomizing.CachedCustomDataArrayMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_CharacterCustomizing");
		return ptr;
	}


	void XmlExport();
};


// Class EFGame.EFDataContainer_ColorPalette
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_ColorPalette : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_ColorPalette.CachedPaletteItemsByName

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_ColorPalette");
		return ptr;
	}


	void XmlExport();
};


// Class EFGame.EFDataContainer_CustomizeBoneScale
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_CustomizeBoneScale : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_CustomizeBoneScale.CachedCustomizeBoneScaleByName

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_CustomizeBoneScale");
		return ptr;
	}


	void XmlExport();
};


// Class EFGame.EFDataContainer_LookInfos
// 0x0001 (0x00B9 - 0x00B8)
class UEFDataContainer_LookInfos : public UEFDataContainer
{
public:
	unsigned char                                      DataUnitType;                                             // 0x00B8(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_LookInfos");
		return ptr;
	}


	void XmlExport();
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
	TArray<class UEFKismetMapData*>                    NpcFunctionMapDataArray;                                  // 0x00B8(0x0010) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UCameraAnim*                                 InteractionCamAnim_Low;                                   // 0x00C8(0x0008) (Interp, RepRetry, ProtectedWrite)
	int                                                InteractionDistance_Low;                                  // 0x00D0(0x0004) (Interp, RepRetry, ProtectedWrite)
	class UCameraAnim*                                 InteractionCamAnim_Middle;                                // 0x00D4(0x0008) (Interp, RepRetry, ProtectedWrite)
	int                                                InteractionDistance_Middle;                               // 0x00DC(0x0004) (Interp, RepRetry, ProtectedWrite)
	class UCameraAnim*                                 InteractionCamAnim_High;                                  // 0x00E0(0x0008) (Interp, RepRetry, ProtectedWrite)
	int                                                InteractionDistance_High;                                 // 0x00E8(0x0004) (Interp, RepRetry, ProtectedWrite)
	int                                                ApproachEvent_Distance;                                   // 0x00EC(0x0004) (RepNotify, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	class UAkEvent*                                    InteractionStartSound;                                    // 0x00F0(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	class UAkEvent*                                    InteractionEndSound;                                      // 0x00F8(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	class UAkEvent*                                    InteractionNextLinkSound;                                 // 0x0100(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_NpcFunction");
		return ptr;
	}


	void XmlExport();
};


// Class EFGame.EFDataContainer_Quest
// 0x00F0 (0x01A8 - 0x00B8)
class UEFDataContainer_Quest : public UEFDataContainer
{
public:
	TArray<class UEFKismetMapData*>                    QuestMapDataArray;                                        // 0x00B8(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      RootQuestDataContainer : 1;                               // 0x00C8(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UAkEvent*                                    StartSound;                                               // 0x00CC(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	class UAkEvent*                                    CompleteSound;                                            // 0x00D4(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	class UAkEvent*                                    ObjectiveCountingSound;                                   // 0x00DC(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	class UAkEvent*                                    SuccessSound;                                             // 0x00E4(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	class UAkEvent*                                    GiveUpSound;                                              // 0x00EC(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	class UAkEvent*                                    FailSound;                                                // 0x00F4(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, EditHide)
	struct FString                                     UnableStartFxPath;                                        // 0x00FC(0x0010) (RepNotify, NonTransactional, RepRetry, ProtectedWrite, EditTextBox)
	struct FString                                     StartFxPath;                                              // 0x010C(0x0010) (RepNotify, NonTransactional, RepRetry, ProtectedWrite, EditTextBox)
	struct FString                                     ProgressFxPath;                                           // 0x011C(0x0010) (RepNotify, NonTransactional, RepRetry, ProtectedWrite, EditTextBox)
	struct FString                                     CompleteFxPath;                                           // 0x012C(0x0010) (RepNotify, NonTransactional, RepRetry, ProtectedWrite, EditTextBox)
	struct FString                                     BalloonTalkFxPath;                                        // 0x013C(0x0010) (RepNotify, NonTransactional, RepRetry, ProtectedWrite, EditTextBox)
	struct FString                                     BasicInteractionFxPath;                                   // 0x014C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	struct FString                                     EmptyMeshInteractionFxPath;                               // 0x015C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	struct FString                                     VolumeInteractionFxPath;                                  // 0x016C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	struct FString                                     LifeLevelInteractionFxPath;                               // 0x017C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	struct FString                                     FxAttachBoneName;                                         // 0x018C(0x0010) (Interp, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     RelativeLocation;                                         // 0x019C(0x000C) (Interp, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_Quest");
		return ptr;
	}


	void XmlExport();
};


// Class EFGame.EFDataContainer_TexturePalette
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_TexturePalette : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_TexturePalette.CachedPaletteItemsByName

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_TexturePalette");
		return ptr;
	}


	void XmlExport();
};


// Class EFGame.EFEnvironmentInfo
// 0x0078 (0x00D0 - 0x0058)
class UEFEnvironmentInfo : public UObject
{
public:
	class UDominantDirectionalLightComponent*          LightComponent;                                           // 0x0058(0x0008) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseGlobalIllumination : 1;                               // 0x0060(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, EditHide, CrossLevelActive)
	unsigned long                                      bForceNoPrecomputedLighting : 1;                          // 0x0060(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, EditHide, CrossLevelActive)
	struct FLightmassWorldInfoSettings                 LightmassSettings;                                        // 0x0064(0x0058) (RepNotify, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, EditHide, CrossLevelActive)
	TEnumAsByte<ELightingBuildQuality>                 LevelLightingQuality;                                     // 0x00BC(0x0001) (RepNotify, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, EditHide, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UExponentialHeightFogComponent*              FogComponent;                                             // 0x00C0(0x0008) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	class UPostProcessChain*                           WorldPostProcessChain;                                    // 0x00C8(0x0008) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)

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
	class UStaticMeshComponent*                        BeamMesh;                                                 // 0x0280(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              BeamMeshRadius;                                           // 0x0288(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              BeamMeshHeight;                                           // 0x028C(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              AutoRotation;                                             // 0x0290(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bActive : 1;                                              // 0x0294(0x0004)
	TArray<struct FEFLightBeamIntersectInfo>           IntersectInfos;                                           // 0x0298(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLightBeam");
		return ptr;
	}


	void SetActive();
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
	float                                              TopGradePlayRate;                                         // 0x0058(0x0004) (Interp, NonTransactional, EditorOnly, ProtectedWrite, EditTextBox, CrossLevelActive)
	TArray<struct FEFDropItemEffectEventTimeInfo>      EventInfoArr;                                             // 0x005C(0x0010) (Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditHide)
	struct FEFDropItemEffectGroup                      NormalItem;                                               // 0x006C(0x0140) (Interp, EditorOnly, ProtectedWrite, EditTextBox)
	struct FEFDropItemEffectGroup                      RareItem;                                                 // 0x01AC(0x0140) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	struct FEFDropItemEffectGroup                      EliteItem;                                                // 0x02EC(0x0140) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FEFDropItemEffectGroup                      EpicItem;                                                 // 0x042C(0x0140) (EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FEFDropItemEffectGroup                      UniqueItem;                                               // 0x056C(0x0140) (RepNotify, Interp, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	struct FEFDropItemEffectGroup                      LegendItem;                                               // 0x06AC(0x0140) (RepNotify, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox)

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
	void ClearAttachedPSIIndex();
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
	class UParticleSystem*                             BurnParticleSystem;                                       // 0x02F8(0x0008) (RepNotify, NonTransactional, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bStateMaterialMIC : 1;                                    // 0x0300(0x0004)
	unsigned long                                      bState : 1;                                               // 0x0300(0x0004)
	unsigned long                                      bUpdateStateMaterial : 1;                                 // 0x0300(0x0004)
	unsigned long                                      bJustTickStateMaterial : 1;                               // 0x0300(0x0004)
	float                                              CurStateTime;                                             // 0x0304(0x0004)
	float                                              MaxStateTime;                                             // 0x0308(0x0004)
	float                                              CurDissolveTime;                                          // 0x030C(0x0004)
	float                                              MaxDissolveTime;                                          // 0x0310(0x0004)

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
	class USkeletalMeshComponent*                      DebugSkeletalMeshComponent;                               // 0x0284(0x0008)
	class UPhysicsAsset*                               DebugPhysicAsset;                                         // 0x028C(0x0008)
	class USkeletalMesh*                               DebugSkeletalMesh;                                        // 0x0294(0x0008)
	class UMaterialInterface*                          DebugPhysicAssetMaterial;                                 // 0x029C(0x0008)
	class UMaterialInterface*                          DebugNavMeshAssetMaterial;                                // 0x02A4(0x0008)
	int                                                DebugTransitIndex;                                        // 0x02AC(0x0004)
	TArray<struct FBoneAtom>                           DebugSpaceBases;                                          // 0x02B0(0x0010)
	TArray<struct FVector>                             DebugNavMeshVertexes;                                     // 0x02C0(0x0010)

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
	int                                                TriggerSkillEffectId;                                     // 0x0058(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      ActiveByMemoryPos : 1;                                    // 0x005C(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      FullRange : 1;                                            // 0x005C(0x0004) (NonTransactional, EditorOnly, PrivateWrite, EditTextBox)
	unsigned long                                      Enable : 1;                                               // 0x005C(0x0004)
	unsigned long                                      PrivateTemplate : 1;                                      // 0x005C(0x0004) (RepNotify, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      OverwriteTemplate : 1;                                    // 0x005C(0x0004) (RepNotify, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              Time;                                                     // 0x0060(0x0004) (NonTransactional, EditorOnly, PrivateWrite, EditTextBox)
	float                                              OriginalTime;                                             // 0x0064(0x0004)
	float                                              Duration;                                                 // 0x0068(0x0004) (NonTransactional, EditorOnly, PrivateWrite, EditTextBox)
	TEnumAsByte<ECTE_NOTIFY_ACTIVATE_TYPE>             NotifyType;                                               // 0x006C(0x0001) (NonTransactional, EditorOnly, PrivateWrite, EditTextBox)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	int                                                RepeatCount;                                              // 0x0070(0x0004) (RepNotify, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              RepeatTerm;                                               // 0x0074(0x0004) (RepNotify, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	struct FString                                     ToolTip;                                                  // 0x0078(0x0010) (RepNotify, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     NotifyName;                                               // 0x0088(0x0010) (RepNotify, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SortPriority;                                             // 0x0098(0x0004)
	struct FColor                                      NotifyColor;                                              // 0x009C(0x0004)
	struct FString                                     GroupName;                                                // 0x00A0(0x0010)
	TArray<struct FString>                             ViewGroupList;                                            // 0x00B0(0x0010)
	struct FPointer                                    TmpActionNotifyData;                                      // 0x00C0(0x0008)
	int                                                Probability;                                              // 0x00C8(0x0004) (NotForConsole, EditTextBox, CrossLevelPassive)

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
	unsigned long                                      bRemoveNotifyEnd : 1;                                     // 0x00CC(0x0004) (NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	TArray<struct FEFAddStatusEffectByAbilityInfo>     ChangeToolInfo;                                           // 0x00D0(0x0010) (NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)

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
	class UAkEvent*                                    AkEvent;                                                  // 0x00CC(0x0008) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSwitchCharacterAKEvent : 1;                              // 0x00D4(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFollowActor : 1;                                         // 0x00D4(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bStopWhenNotifyEnd : 1;                                   // 0x00D4(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bMute : 1;                                                // 0x00D4(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bStopWhenChangeAction : 1;                                // 0x00D4(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       BoneName;                                                 // 0x00D8(0x0008) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              StopWhenNotifyEndFadeTime;                                // 0x00E0(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              StopWhenChangeActionFadeTime;                             // 0x00E4(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EFActionNotifyFixSoundPosType>         FixSoundPosType;                                          // 0x00E8(0x0001) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              AkEventDuration;                                          // 0x00EC(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                AkEventPlayingID;                                         // 0x00F0(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class UAkEvent*                                    AkEvent;                                                  // 0x00CC(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSwitchCharacterAKEvent : 1;                              // 0x00D4(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       AttachBoneName;                                           // 0x00D8(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FName                                       anim_name;                                                // 0x00CC(0x0008) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                MoveSpeed_Anim1;                                          // 0x00D4(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       anim_name2;                                               // 0x00D8(0x0008) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                MoveSpeed_Anim2;                                          // 0x00E0(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       anim_name3;                                               // 0x00E4(0x0008) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                MoveSpeed_Anim3;                                          // 0x00EC(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     landstage_name;                                           // 0x00F0(0x0010) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FEFAnimInfo                                 anim_info;                                                // 0x0100(0x0030) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      AnimErrorAlert : 1;                                       // 0x0130(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      DurationFitFromAni : 1;                                   // 0x0130(0x0004) (EditorOnly, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	unsigned long                                      DurationFitFromStageEnd : 1;                              // 0x0130(0x0004) (EditorOnly, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	unsigned long                                      StageDurationFitToEnd : 1;                                // 0x0130(0x0004) (EditorOnly, ArchetypeProperty, EditTextBox, CrossLevelPassive)
	unsigned long                                      ValidAnimName1 : 1;                                       // 0x0130(0x0004)
	unsigned long                                      ValidAnimName2 : 1;                                       // 0x0130(0x0004)
	unsigned long                                      ValidAnimName3 : 1;                                       // 0x0130(0x0004)
	struct FName                                       AnimName;                                                 // 0x0134(0x0008)
	float                                              StageRootMotionMoveDistance;                              // 0x013C(0x0004)
	float                                              StageRootMotionMaxMoveDistance;                           // 0x0140(0x0004)

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
	unsigned long                                      WeaponMode : 1;                                           // 0x0144(0x0004) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      IgnoreWeaponMode : 1;                                     // 0x0144(0x0004) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       stance00_anim_name;                                       // 0x0148(0x0008) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       stance01_anim_name;                                       // 0x0150(0x0008) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       stance02_anim_name;                                       // 0x0158(0x0008) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       stance03_anim_name;                                       // 0x0160(0x0008) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	float                                              BlendingTime;                                             // 0x00CC(0x0004) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DirDegreesPerSecond;                                      // 0x00D0(0x0004) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       AnimName_Front;                                           // 0x00D4(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       AnimName_Back;                                            // 0x00DC(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       AnimName_Left;                                            // 0x00E4(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       AnimName_Right;                                           // 0x00EC(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EPropState>                            ePropState;                                               // 0x00CC(0x0001) (Interp, NonTransactional, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	unsigned long                                      bLoopAnimation : 1;                                       // 0x00D0(0x0004) (Interp, NonTransactional, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bDespawnNotify : 1;                                       // 0x00D0(0x0004) (Interp, NonTransactional, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive)

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
	TArray<struct FEFSkillEffectInfo>                  SkillEffectInfoList;                                      // 0x00CC(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFCommonActionVoiceSetType>            CommonActionType;                                         // 0x00CC(0x0001) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FString                                     Keyword;                                                  // 0x00D0(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class UEFActionCondition*                          Condition;                                                // 0x00CC(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                ConditionOutputCount;                                     // 0x00D4(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FString>                             ConditionOutputDesc;                                      // 0x00D8(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<int>                                        SelectDPIndexArr;                                         // 0x00CC(0x0010) (RepNotify, NonTransactional, NotForConsole, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDeactivate : 1;                                          // 0x00DC(0x0004) (RepNotify, NonTransactional, NotForConsole, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bActivate : 1;                                            // 0x00DC(0x0004) (RepNotify, NonTransactional, NotForConsole, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFEQUIP_PART>                          ePartsType;                                               // 0x00CC(0x0001) (RepNotify, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FVector                                     Velocity;                                                 // 0x00D0(0x000C) (RepNotify, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UParticleSystem*                             PSTemplate;                                               // 0x00DC(0x0008) (RepNotify, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       SocketName;                                               // 0x00E4(0x0008) (RepNotify, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (RepNotify, Interp, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      RollBackOrigin : 1;                                       // 0x00CC(0x0004) (RepNotify, Interp, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      EndIsRelease : 1;                                         // 0x00CC(0x0004) (RepNotify, Interp, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      EnableBrightness : 1;                                     // 0x00CC(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      EnableLightColor : 1;                                     // 0x00CC(0x0004) (Interp, EditorOnly, NotForConsole, PrivateWrite)
	float                                              ChangeTime;                                               // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DirectionGuaranteeTime;                                   // 0x00D4(0x0004) (RepNotify, Interp, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              ReleaseTime;                                              // 0x00D8(0x0004) (RepNotify, Interp, NonTransactional, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              Brightness;                                               // 0x00DC(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive)
	struct FColor                                      LightColor;                                               // 0x00E0(0x0004) (Interp, EditorOnly, NotForConsole, PrivateWrite)

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
	TEnumAsByte<EPARTICLE_SOUND_DOWN_DATA_TYPE>        ParticleDownType;                                         // 0x00CC(0x0001) (RepNotify, EditorOnly, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	TArray<struct FString>                             ParticleAttachBoneName;                                   // 0x00D0(0x0010) (RepNotify, EditorOnly, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FString>                             ParticleAttachSoketName;                                  // 0x00E0(0x0010) (RepNotify, EditorOnly, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFSkillEffectInfo>                  SkillEffectInfoList;                                      // 0x00CC(0x0010) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     TestParticleSoundHittedKeyword;                           // 0x00DC(0x0010) (Interp, NonTransactional, NotForConsole)
	class UEFParticleSoundContainerSkillHitSet*        TestUsedSkillHitSetContainer;                             // 0x00EC(0x0008) (Interp, NonTransactional, NotForConsole)
	TEnumAsByte<EFTestBuffMode>                        TestParticleSoundBuffMode;                                // 0x00F4(0x0001) (Interp, NonTransactional, NotForConsole)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	struct FString                                     TestParticleSoundBuffKeyword;                             // 0x00F8(0x0010) (Interp, NonTransactional, NotForConsole)
	float                                              TestParticleSoundBuffLifeTime;                            // 0x0108(0x0004) (Interp, NonTransactional, NotForConsole)
	float                                              TestParticleSoundBuffValue;                               // 0x010C(0x0004) (Interp, NonTransactional, NotForConsole)

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
	struct FString                                     SignalString;                                             // 0x00CC(0x0010) (Interp, NonTransactional, ProtectedWrite, ArchetypeProperty, CrossLevelPassive)

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
	TEnumAsByte<ECommonActionAttachType>               AttachType;                                               // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	TArray<struct FPlaySkeletalMeshActor>              SkeletalMeshActors;                                       // 0x00D0(0x0010) (RepNotify, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FName                                       AttachName;                                               // 0x00E0(0x0008) (RepNotify, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	TArray<struct FEFChangeMeshInfo>                   ChangeMeshInfo;                                           // 0x00E8(0x0010) (RepNotify, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bNotifyEndDetach : 1;                                     // 0x00F8(0x0004) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	struct FString                                     strAttachToolLookInfo;                                    // 0x00FC(0x0010) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)
	TArray<struct FEFChageToolByAbilityInfo>           ChangeToolInfo;                                           // 0x010C(0x0010) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox)

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
	TArray<struct FEFSkillEffectInfo>                  SkillEffectInfoList;                                      // 0x00CC(0x0010) (RepNotify, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                FootDown;                                                 // 0x00CC(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FString>                             ParticleAttachBoneName;                                   // 0x00D0(0x0010) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FString>                             ParticleAttachSoketName;                                  // 0x00E0(0x0010) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                GameNoteTableIndex;                                       // 0x00CC(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      HidePawn : 1;                                             // 0x00CC(0x0004) (RepNotify, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bWeaponTypeIgnoresGadget : 1;                             // 0x00CC(0x0004) (RepNotify, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bHideBaseMeshWithFX : 1;                                  // 0x00CC(0x0004) (RepNotify, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bExecuteNotifyEnd : 1;                                    // 0x00CC(0x0004) (RepNotify, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FHideInfoUnit>                       sHideInfoUnitArr;                                         // 0x00D0(0x0010) (RepNotify, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      MakeParts : 1;                                            // 0x00CC(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      FailCompleteCancel : 1;                                   // 0x00CC(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                changeStance;                                             // 0x00D0(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FInputTimingInfo                            InputTiming;                                              // 0x00CC(0x0028) (RepNotify, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FInputTimingInfo>                    InputTimings;                                             // 0x00F4(0x0010)
	TArray<int>                                        StartHotKeyIdArray;                                       // 0x0104(0x0010)
	unsigned long                                      TriggerDelayMoveCancel : 1;                               // 0x0114(0x0004)
	unsigned long                                      TriggerMoveCancel : 1;                                    // 0x0114(0x0004)
	unsigned long                                      TriggerDelaySkillCancel : 1;                              // 0x0114(0x0004)
	unsigned long                                      TriggerSkillCancel : 1;                                   // 0x0114(0x0004)
	unsigned long                                      TriggerMoveDirInput : 1;                                  // 0x0114(0x0004)
	unsigned long                                      TriggerSkillDirInput : 1;                                 // 0x0114(0x0004)

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
	unsigned long                                      bHideNotifyEnd : 1;                                       // 0x00CC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EProfessionType>                       LifeToolType;                                             // 0x00CC(0x0001) (RepNotify, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	unsigned long                                      bHideNotifyEnd : 1;                                       // 0x00D0(0x0004) (RepNotify, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFActionNotify_LookTarget_Type>        LookType;                                                 // 0x00CC(0x0001) (RepNotify, Interp, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              InterpolationTime;                                        // 0x00D0(0x0004) (RepNotify, Interp, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EMemoryPosType>                        eMemoryPosType;                                           // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<int>                                        OutputStageIndex;                                         // 0x00CC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, EditHide)
	TArray<struct FString>                             OutputStageDesc;                                          // 0x00DC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, EditHide)

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
	unsigned long                                      ANDOperation : 1;                                         // 0x00EC(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive)
	TArray<struct FEFCheckAreaInfo>                    AreaInfos;                                                // 0x00F0(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive)

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
	int                                                ProbabilityValue;                                         // 0x00EC(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive)

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
	TArray<int>                                        SkillEffectId;                                            // 0x00EC(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive)

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
	TArray<int>                                        LimbIdArray;                                              // 0x00CC(0x0010) (Interp, NonTransactional, RepRetry, ArchetypeProperty, EditHide, EditTextBox)
	unsigned long                                      LimbHitEnabled : 1;                                       // 0x00DC(0x0004) (Interp, NonTransactional, RepRetry, ArchetypeProperty, EditHide, EditTextBox)
	struct FEFPartsHighlightInfo                       PartsHighlightInfo;                                       // 0x00E0(0x0030) (RepNotify, Interp, NonTransactional, RepRetry, ArchetypeProperty, EditHide, EditTextBox)

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
	TEnumAsByte<EFActionNotify_NPCSkillMoveType>       MoveType;                                                 // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              MoveSpeed;                                                // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              TargetingCycleTime;                                       // 0x00D4(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              PursuitSightDegree;                                       // 0x00D8(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              PursuitRange;                                             // 0x00DC(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              MoveDegree;                                               // 0x00E0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<ENpcStatus>                            NpcStatusType;                                            // 0x00CC(0x0001) (RepNotify, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bActive : 1;                                              // 0x00CC(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     ControlNotifyName;                                        // 0x00CC(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                WeaponFXIndex;                                            // 0x00CC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFEQUIP_PART>                          ePartsType;                                               // 0x00CC(0x0001) (RepNotify, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                iPartsIndex;                                              // 0x00D0(0x0004) (RepNotify, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       anim_name;                                                // 0x00D4(0x0008) (RepNotify, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bActionType : 1;                                          // 0x00CC(0x0004) (RepNotify, Interp, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FMaterialChangeUnit                         sUnit;                                                    // 0x00D0(0x0018) (RepNotify, Interp, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FMaterialLookChangeUnit>             sUnitArr;                                                 // 0x00E8(0x0010) (RepNotify, Interp, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bActionType : 1;                                          // 0x00CC(0x0004) (RepNotify, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FMaterialParamUnit                          sUnit;                                                    // 0x00D0(0x007C) (RepNotify, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FMaterialLookParamUnit>              sUnitArr;                                                 // 0x014C(0x0010) (RepNotify, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EPhysics>                              StartPhysics;                                             // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	unsigned long                                      bRestorePrevPhysics : 1;                                  // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FPhysicsParam                               Param;                                                    // 0x00CC(0x0028) (RepNotify, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bSkipIfOwnerIsHidden : 1;                                 // 0x00CC(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreAnimRate : 1;                                      // 0x00CC(0x0004)
	struct FEFParticleSystemInfo                       PSInfo;                                                   // 0x00D0(0x0158)
	class UEFActionParticleData*                       ActionParticleData;                                       // 0x0228(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     SyncSkillEffectNotify;                                    // 0x0230(0x0010)
	struct FEFBeamActionParam                          SourceInfo;                                               // 0x0240(0x0018) (NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelActive)
	struct FEFBeamActionParam                          TargetInfo;                                               // 0x0258(0x0018) (RepNotify, EditHide, EditTextBox)
	class UEFBeamActionBase*                           BeamAction;                                               // 0x0270(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)

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
	unsigned long                                      bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004)
	unsigned long                                      bIgnoreAnimRate : 1;                                      // 0x00CC(0x0004)
	class UParticleSystem*                             CameraParticle;                                           // 0x00D0(0x0008) (NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	float                                              CameraOffset;                                             // 0x00D8(0x0004) (NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	struct FRotator                                    ParticleRotation;                                         // 0x00DC(0x000C) (NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	struct FVector                                     ParticleSize3D;                                           // 0x00E8(0x000C) (NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FParticleSysParam>                   ParticleSystemParamList;                                  // 0x00F4(0x0010) (NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	int                                                ActionParticleId;                                         // 0x0104(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EACTION_PARTICLE_DATA_TYPE>            ActionParticleDataType;                                   // 0x0108(0x0001) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                DecalTableIndex;                                          // 0x00CC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bPlayActionAgentDecal : 1;                                // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      OffsetIsTargetPosition : 1;                               // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUsingRootMotionAffectedOffset : 1;                       // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      AutoDirectionAngle : 1;                                   // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bOnlyLocalPlayer : 1;                                     // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFrontTarget : 1;                                         // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      ForcedOutput : 1;                                         // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              OffsetX;                                                  // 0x00D4(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              OffsetY;                                                  // 0x00D8(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              SizeWidth;                                                // 0x00DC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              SizeHeight;                                               // 0x00E0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalDirectionAngle;                                      // 0x00E4(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SkillEffectId;                                            // 0x00E8(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                EffectAngle;                                              // 0x00EC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     RootMotionAffectedOffset;                                 // 0x00F0(0x000C) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              AdjustSize;                                               // 0x00FC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalBlendInTime;                                         // 0x0100(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalScaleTime;                                           // 0x0104(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalFillTime;                                            // 0x0108(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalBlendOutTime;                                        // 0x010C(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FLinearColor                                DecalColor;                                               // 0x0110(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bPlayOnlyFirstLoop : 1;                                   // 0x00CC(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bOriginScale : 1;                                         // 0x00CC(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bCharge : 1;                                              // 0x00CC(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSkillEndDetach : 1;                                      // 0x00CC(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSkipIfOwnerIsHidden : 1;                                 // 0x00CC(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreAnimRate : 1;                                      // 0x00CC(0x0004)
	unsigned long                                      bFloorCheck : 1;                                          // 0x00CC(0x0004) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	unsigned long                                      bUseRandomTransform : 1;                                  // 0x00CC(0x0004) (Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	int                                                AbilityTypeCondition;                                     // 0x00D0(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<int>                                        AbilityTypeConditionNotExistArray;                        // 0x00D4(0x0010) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<ECommonActionEffectType>               CommonActionEffectTypeCondition;                          // 0x00E4(0x0001) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<ECommonActionEffectType>               CommonActionEffectTypeConditionNotExist;                  // 0x00E5(0x0001) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EACTION_PARTICLE_DATA_TYPE>            ActionParticleDataType;                                   // 0x00E6(0x0001) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00E7(0x0001) MISSED OFFSET
	struct FString                                     SyncPosSkillEffectNotifyName;                             // 0x00E8(0x0010)
	int                                                ActionParticleId;                                         // 0x00F8(0x0004) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     StartTimePawnLocation;                                    // 0x00FC(0x000C)
	class UEFActionParticleData*                       ParticleData;                                             // 0x0108(0x0008) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFParticleDataModifier*>             PSLookSet;                                                // 0x0110(0x0010) (RepNotify, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFActionPSFloorInfo>                PSFloorSet;                                               // 0x0120(0x0010) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	struct FEFPSRandomVector                           RandomTransformLocation;                                  // 0x0130(0x0018) (Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	struct FEFPSRandomRotator                          RandomTransformRotation;                                  // 0x0148(0x0018) (Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	struct FEFPSRandomVector                           RandomTransformScale;                                     // 0x0160(0x0018) (Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)

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
	struct FString                                     SuccessMovieName;                                         // 0x00CC(0x0010) (RepNotify, Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     GreatSuccessMovieName;                                    // 0x00DC(0x0010) (RepNotify, Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FailMovieName;                                            // 0x00EC(0x0010) (RepNotify, Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bHideNotifyEnd : 1;                                       // 0x00FC(0x0004) (RepNotify, Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                DecalTableIndex;                                          // 0x00CC(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bPlayActionAgentDecal : 1;                                // 0x00D0(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      ForcedOutput : 1;                                         // 0x00D0(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SkillEffectId;                                            // 0x00D4(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                ProjectileSkillEffectId;                                  // 0x00D8(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              AdjustSize;                                               // 0x00DC(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalBlendInTime;                                         // 0x00E0(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalScaleTime;                                           // 0x00E4(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalFillTime;                                            // 0x00E8(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DecalBlendOutTime;                                        // 0x00EC(0x0004) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class UEFAN_Params*                                dummy01;                                                  // 0x00CC(0x0008)
	class UEFActionNotify_AnimEvent*                   dummy02;                                                  // 0x00D4(0x0008)
	unsigned long                                      bSkipIfOwnerIsHidden : 1;                                 // 0x00DC(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      SpawnFromMouseTargetPos : 1;                              // 0x00DC(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreAnimRate : 1;                                      // 0x00DC(0x0004)
	TArray<struct FPlaySkeletalMeshActor>              SkeletalMeshActors;                                       // 0x00E0(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              RootMotionScaleBaseDist;                                  // 0x00F0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       AttachName;                                               // 0x00F4(0x0008) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x00FC(0x0008)

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
	unsigned long                                      ApplyWhenChangeAction : 1;                                // 0x00CC(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     ActionNotifyTag;                                          // 0x00D0(0x0010) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FActionNotify_SM_AnimEventData              AnimEventData;                                            // 0x00E0(0x0038) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bStageEndClear : 1;                                       // 0x00CC(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UPostProcessChain*                           PPChain;                                                  // 0x00D0(0x0008) (RepNotify, Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UPostProcessChain*                           PPChain_Clone;                                            // 0x00D8(0x0008)
	class UEFPostProcessMaterialEffectSkill*           PostProcessMaterialData;                                  // 0x00E0(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFEQUIP_PART>                          ePartsType;                                               // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EFSOCKET_STATE>                        eSocketState;                                             // 0x00CD(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFActionNotify_Rotate_Type>            LookType;                                                 // 0x00CC(0x0001) (RepNotify, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              Degree;                                                   // 0x00D0(0x0004) (RepNotify, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                NpcId;                                                    // 0x00CC(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, CrossLevelPassive)
	struct FString                                     NpcSignal;                                                // 0x00D0(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, CrossLevelPassive)

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
	struct FString                                     AttachBoneName;                                           // 0x00CC(0x0010) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFSoundSetStuffType>                   StuffType;                                                // 0x00CC(0x0001) (RepNotify, Interp, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EACTION_PARTICLE_DATA_TYPE>            ActionParticleDataType;                                   // 0x00CC(0x0001) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                ActionParticleId;                                         // 0x00D0(0x0004) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<ESuperArmorType>                       SuperArmorTypeValue;                                      // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	unsigned long                                      bShowEffect : 1;                                          // 0x00D0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	float                                              StartDistance;                                            // 0x00CC(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              EndDistance;                                              // 0x00D0(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                Rotation;                                                 // 0x00D4(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     ControlDecalNotifyName;                                   // 0x00D8(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bCollide : 1;                                             // 0x00CC(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bForceRemovePreviousEffect : 1;                           // 0x00CC(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bStopWhenNotifyEnd : 1;                                   // 0x00CC(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bForceChildAllRemove : 1;                                 // 0x00CC(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              TrailDuration;                                            // 0x00D0(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              TrailDeltaSecondsBetweenChildren;                         // 0x00D4(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              TrailPerChildLifetime;                                    // 0x00D8(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              InitialAlphaValue;                                        // 0x00DC(0x0004) (NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	float                                              InitialAlphaDuration;                                     // 0x00E0(0x0004) (NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	float                                              SourceColorIntensity;                                     // 0x00E4(0x0004) (NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	struct FColor                                      AmbientGlowColorS;                                        // 0x00E8(0x0004) (NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	struct FColor                                      AmbientGlowColorE;                                        // 0x00EC(0x0004) (NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	struct FColor                                      RimLightColorS;                                           // 0x00F0(0x0004) (NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	struct FColor                                      RimLightColorE;                                           // 0x00F4(0x0004) (NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)

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
	TEnumAsByte<EFEQUIP_PART>                          TrailParts;                                               // 0x00CC(0x0001) (RepNotify, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                TrailPartsIndex;                                          // 0x00D0(0x0004) (RepNotify, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UAnimNotify_Trails*                          AnimTrails;                                               // 0x00D4(0x0008)
	class UEFData_AnimNotify_Trails*                   AnimNotifyTrailsData;                                     // 0x00DC(0x0008) (RepNotify, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFParticleDataModifier*>             TrailLookSet;                                             // 0x00E4(0x0010) (RepNotify, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UParticleSystem*                             PSTemplate;                                               // 0x00F4(0x0008) (NonTransactional, EditorOnly, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FParticleSysParam>                   DefaultTrailParamList;                                    // 0x00FC(0x0010) (NonTransactional, EditorOnly, RepRetry, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSetTemplate : 1;                                         // 0x010C(0x0004)
	int                                                TrailSampledDataCount;                                    // 0x0110(0x0004) (RepNotify, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              DistanceTessellationStepSize;                             // 0x0114(0x0004) (RepNotify, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bInstant : 1;                                             // 0x00CC(0x0004) (RepNotify, Interp, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSyncAnimEnd : 1;                                         // 0x00CC(0x0004) (RepNotify, Interp, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bChangeStageServer : 1;                                   // 0x00CC(0x0004) (RepNotify, Interp, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                NextStageIndex;                                           // 0x00D0(0x0004) (RepNotify, Interp, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                UIUnitIndex;                                              // 0x00D4(0x0004) (RepNotify, Interp, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EActionNotifyUIEventKey>               UIEventKey;                                               // 0x00D8(0x0001) (RepNotify, Interp, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                SendServerSuccessValue;                                   // 0x00DC(0x0004) (RepNotify, Interp, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (RepNotify, NonTransactional, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreAnimRate : 1;                                      // 0x00CC(0x0004)
	unsigned long                                      StopShakeOnNotifyEnd : 1;                                 // 0x00CC(0x0004) (RepNotify, NonTransactional, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      ViewShakeSpawn : 1;                                       // 0x00CC(0x0004)
	float                                              SkipDistance;                                             // 0x00D0(0x0004) (RepNotify, NonTransactional, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFCameraViewShake*                          NewViewShake;                                             // 0x00D4(0x0008) (RepNotify, NonTransactional, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFCameraViewShakeAnim*                      NewViewShakeAnim;                                         // 0x00DC(0x0008) (RepNotify, NonTransactional, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     ViewShakePrefix;                                          // 0x00E4(0x0010)

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
	TEnumAsByte<EFVoiceSetAdditionalType>              AdditionalType;                                           // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetAttackCastType>              AttackCastType;                                           // 0x00CC(0x0001) (RepNotify, EditorOnly, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetAttackCastLongType>          AttackCastLongType;                                       // 0x00CC(0x0001) (RepNotify, Interp, EditorOnly, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetAttackExecType>              AttackExecType;                                           // 0x00CC(0x0001) (RepNotify, NonTransactional, EditorOnly, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetAttackShotType>              AttackShotType;                                           // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetDamageType>                  DamageType;                                               // 0x00CC(0x0001) (RepNotify, NotForConsole, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetDeathType>                   DeathType;                                                // 0x00CC(0x0001) (RepNotify, Interp, NotForConsole, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetDownType>                    DownType;                                                 // 0x00CC(0x0001) (RepNotify, NonTransactional, NotForConsole, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetIdleType>                    IdleType;                                                 // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, NotForConsole, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetRunType>                     RunType;                                                  // 0x00CC(0x0001) (RepNotify, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetSpawnType>                   SpawnType;                                                // 0x00CC(0x0001) (RepNotify, Interp, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetStandUpType>                 StandUpType;                                              // 0x00CC(0x0001) (RepNotify, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFVoiceSetWalkType>                    WalkType;                                                 // 0x00CC(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bExecuteNotifyEnd : 1;                                    // 0x00CC(0x0004) (RepNotify, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<int>                                        WeapeonSubIdArr;                                          // 0x00D0(0x0010) (RepNotify, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      EquipWhenStart : 1;                                       // 0x00CC(0x0004) (RepNotify, Interp, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<int>                                        OutputStageIndex;                                         // 0x0058(0x0010)
	TArray<struct FString>                             OutputStageDesc;                                          // 0x0068(0x0010)
	TArray<int>                                        ValidOutputStageIndex;                                    // 0x0078(0x0010)

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
	int                                                AbilityTypeCondition;                                     // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<ECommonActionEffectType>               LearnCommonActionEffectType;                              // 0x0088(0x0001) (RepNotify, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                Probability;                                              // 0x0088(0x0004) (RepNotify, Interp, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FName>                               ValidOutputStageAnimName;                                 // 0x0088(0x0010) (RepNotify, NonTransactional, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FExceptionalNpcIdleData>             ExceptionalNpcIdleDataArray;                              // 0x0088(0x0010) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<int>                                        SkillEffectId;                                            // 0x0088(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                AddedStatusEffectId;                                      // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                RemovedStatusEffectId;                                    // 0x008C(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                MilestoneVersion;                                         // 0x0058(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                ActionId;                                                 // 0x005C(0x0004) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     ActionName;                                               // 0x0060(0x0010) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      MergeActionStage : 1;                                     // 0x0070(0x0004)
	unsigned long                                      LayerMergeActionStage : 1;                                // 0x0070(0x0004) (EditorOnly, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      LayerZeroExtentLineCheck : 1;                             // 0x0070(0x0004) (EditorOnly, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bSetPerfectZoneInfo : 1;                                  // 0x0070(0x0004)
	TArray<struct FNpcPartInfo>                        NpcPartInfoArray;                                         // 0x0074(0x0010) (RepNotify, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFStageLayer>                       StageLayerList;                                           // 0x0084(0x0010)
	int                                                LayerIndex;                                               // 0x0094(0x0004) (EditorOnly, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	struct FString                                     LayerName;                                                // 0x0098(0x0010) (EditorOnly, NotForConsole, PrivateWrite, EditTextBox, CrossLevelPassive)
	TArray<int>                                        ChargeSkillLayerIndexArray;                               // 0x00A8(0x0010)
	int                                                EditorSkillTierIndex1;                                    // 0x00B8(0x0004) (Interp, NonTransactional, NotForConsole)
	int                                                EditorSkillTierIndex2;                                    // 0x00BC(0x0004) (Interp, NonTransactional, NotForConsole)
	int                                                EditorSkillTierIndex3;                                    // 0x00C0(0x0004) (Interp, NonTransactional, NotForConsole)

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
	struct FEFNPCIdleReferenceData                     NPCIdleReferenceData;                                     // 0x0058(0x0024)
	struct FString                                     ExportGUID;                                               // 0x007C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Category;                                                 // 0x008C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     GroupName;                                                // 0x009C(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     PackageName;                                              // 0x00AC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     LookInfoKey;                                              // 0x00BC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UAnimSet*>                            ReferenceAnimSetList;                                     // 0x00CC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     Comment;                                                  // 0x00DC(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFActionObjectGroup*                        Template;                                                 // 0x00EC(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFActionObject*>                     ActionList;                                               // 0x00F4(0x0010)
	unsigned long                                      bNpcPartInfoExport : 1;                                   // 0x0104(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      SetStageTransitionInfoComplete : 1;                       // 0x0104(0x0004)
	unsigned long                                      SetNpcDestructionPartsRadiusInfoComplete : 1;             // 0x0104(0x0004)
	TArray<struct FEFActionGroupReference>             ActionGroupReferenceList;                                 // 0x0108(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      Enable : 1;                                               // 0x0058(0x0004) (RepNotify, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FName                                       AffectBoneName;                                           // 0x005C(0x0008) (RepNotify, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class USkelControlBase*                            SkelControl;                                              // 0x0064(0x0008) (RepNotify, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFSkill_NotifyGroup>                NotifyGroupList;                                          // 0x0058(0x0010)
	struct FEFSkill_NotifyGroup                        AnimGroup;                                                // 0x0068(0x0018)
	float                                              ViewPosX;                                                 // 0x0080(0x0004) (Interp, NonTransactional, NotForConsole)
	float                                              ViewPosY;                                                 // 0x0084(0x0004) (Interp, NonTransactional, NotForConsole)
	unsigned long                                      Differ : 1;                                               // 0x0088(0x0004)
	unsigned long                                      InfiniteStage : 1;                                        // 0x0088(0x0004) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      AtkSpeedStage : 1;                                        // 0x0088(0x0004) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bTimingBarReverse : 1;                                    // 0x0088(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, CrossLevelActive)
	unsigned long                                      bTestTimingBarCategory : 1;                               // 0x0088(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, CrossLevelActive)
	unsigned long                                      EnableESCCancel : 1;                                      // 0x0088(0x0004) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      EnableStageBuff : 1;                                      // 0x0088(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bUseAimOffset : 1;                                        // 0x0088(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	unsigned long                                      bUsePreviousStageMouseTargetPos : 1;                      // 0x0088(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	unsigned long                                      AnimError : 1;                                            // 0x0088(0x0004)
	unsigned long                                      bNpcPartInfoExportStage : 1;                              // 0x0088(0x0004) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bChargeScaleStage : 1;                                    // 0x0088(0x0004) (Interp, RepRetry, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FString                                     StageName;                                                // 0x008C(0x0010) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              StageLength;                                              // 0x009C(0x0004) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              StagePlayRate;                                            // 0x00A0(0x0004) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	TEnumAsByte<EFSTAGE_TIMINGBARTYPE>                 TimingBarType;                                            // 0x00A4(0x0001) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, CrossLevelActive)
	TEnumAsByte<EFSTAGE_TIMINGBARTEXTTYPE>             TimingBarTextType;                                        // 0x00A5(0x0001) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, CrossLevelActive)
	TEnumAsByte<EFSTAGE_TIMINGBARCATEGORY>             TestTimingBarCategory;                                    // 0x00A6(0x0001) (Interp, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty, CrossLevelActive)
	TEnumAsByte<EFSTAGE_CHANGEDIRTYPE>                 StageChangeDirType;                                       // 0x00A7(0x0001) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	TEnumAsByte<EFSTAGE_MOVEPOSTYPE>                   StageChangeMovePosType;                                   // 0x00A8(0x0001) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	TEnumAsByte<ESkipCollidePawnType>                  SkipPawnCollision;                                        // 0x00A9(0x0001) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	int                                                NextStageIndex;                                           // 0x00AC(0x0004) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	int                                                StageBuffId;                                              // 0x00B0(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              StageChangeDirInterpolationTime;                          // 0x00B4(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	int                                                StageChangeDirLimitDegree;                                // 0x00B8(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	float                                              MovePosValue;                                             // 0x00BC(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	float                                              MovePosOffsetValue;                                       // 0x00C0(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, CrossLevelPassive)
	TArray<class UEFAction_Notify*>                    NotifyList;                                               // 0x00C4(0x0010)
	int                                                AnimNotifyIndex;                                          // 0x00D4(0x0004)
	struct FVector                                     MaxRootMotionDelta;                                       // 0x00D8(0x000C) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	struct FVector                                     MinRootMotionDelta;                                       // 0x00E4(0x000C) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              RootMotionSampleTime;                                     // 0x00F0(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	TArray<struct FVector>                             RootMotionSample;                                         // 0x00F4(0x0010) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	TArray<int>                                        RootMotionRotationYawSample;                              // 0x0104(0x0010) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              StageCancelTime;                                          // 0x0114(0x0004) (Interp, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	int                                                ChargeParticleScale;                                      // 0x0118(0x0004) (Interp, RepRetry, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	int                                                ChargeDamageScale;                                        // 0x011C(0x0004) (Interp, RepRetry, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FEFStageTransitionInfo                      StageTransitionInfo;                                      // 0x0120(0x000C)

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
	TArray<struct FMatineePathNodeConnection>          Connections;                                              // 0x0274(0x0010) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<class AEFMatineePathNode*>                  LinksFrom;                                                // 0x0284(0x0010)
	struct FName                                       PathName;                                                 // 0x0294(0x0008) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      LineColor;                                                // 0x029C(0x0004) (RepNotify, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMatineePathNode");
		return ptr;
	}


	void BreakAllConnectionsFrom();
	void BreakAllConnections();
	void BreakConnectionTo();
	void IsConnectedTo();
	void AddConnectionTo();
	void UpdateConnectedLineComponents();
	void UpdateLineComponents();
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
	struct FString                                     SummonsName;                                              // 0x01B4(0x0010) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SummonsID;                                                // 0x01C4(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFSequenceSummonsProjectile*                SequenceSummonsProjectile;                                // 0x01C8(0x0008)
	TArray<class UEFSequenceSummonsBase*>              NoneUseList;                                              // 0x01D0(0x0010)
	int                                                EditorSkillTierIndex1;                                    // 0x01E0(0x0004) (Interp, NonTransactional, NotForConsole)
	int                                                EditorSkillTierIndex2;                                    // 0x01E4(0x0004) (Interp, NonTransactional, NotForConsole)
	int                                                EditorSkillTierIndex3;                                    // 0x01E8(0x0004) (Interp, NonTransactional, NotForConsole)
	unsigned long                                      EditorDirty : 1;                                          // 0x01EC(0x0004)
	int                                                MilestoneVersion;                                         // 0x01F0(0x0004) (RepNotify, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     SummonsDesc;                                              // 0x012C(0x0010)
	unsigned long                                      IsExportSet : 1;                                          // 0x013C(0x0004)

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
	TArray<class UEFSequenceSummonsAction*>            ActivateActionList;                                       // 0x0140(0x0010)
	TEnumAsByte<EFSummonsSummonProjectileUsePlatformType> ProjectileUsePlatform;                                    // 0x0150(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	unsigned long                                      IsUseProjectile_Missile : 1;                              // 0x0154(0x0004)
	unsigned long                                      IsUseProjectile_FixArea : 1;                              // 0x0154(0x0004)
	unsigned long                                      IsUseProjectile_Grenade : 1;                              // 0x0154(0x0004)
	unsigned long                                      IsUseProjectile_Trace : 1;                                // 0x0154(0x0004)
	unsigned long                                      IsTierCheckData : 1;                                      // 0x0154(0x0004)

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
	unsigned long                                      bEnableAccel : 1;                                         // 0x0158(0x0004) (ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EFSummonsAAType>                       AccelType;                                                // 0x015C(0x0001) (ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	float                                              AccelStartValue;                                          // 0x0160(0x0004) (ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              AccelMaxSpeedElapseTime;                                  // 0x0164(0x0004) (ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class UAkEvent*                                    AkEvent;                                                  // 0x0158(0x0008) (Interp, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSwitchCharacterAKEvent : 1;                              // 0x0160(0x0004) (Interp, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      StopWhenBaseDestroy : 1;                                  // 0x0160(0x0004) (Interp, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              StopWhenBaseDestroyFadeTime;                              // 0x0164(0x0004) (Interp, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                BuffID;                                                   // 0x0158(0x0004) (NonTransactional, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                BuffID2;                                                  // 0x015C(0x0004) (NonTransactional, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              Delay;                                                    // 0x0160(0x0004) (NonTransactional, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              Lifetime;                                                 // 0x0164(0x0004) (NonTransactional, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFSequenceSummonsActionBankDataParticle> ParticleDatas;                                            // 0x0158(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFSequenceSummonsActionBankDataFloatValue> FloatValueDatas;                                          // 0x0168(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFSequenceSummonsActionBankDataBOOLValue> BOOLValueDatas;                                           // 0x0178(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFSequenceSummonsActionBankDataMultiUseValueDataArray> SkillEffectMultiUseArrayDataArray;                        // 0x0188(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide)

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
	unsigned long                                      ApplySelfOnly : 1;                                        // 0x0158(0x0004) (EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFCameraViewShake*                          NewViewShake;                                             // 0x015C(0x0008) (EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class UEFProjectileParticleData*                   ParticleData;                                             // 0x0158(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bUseOnlyLocalPlayer : 1;                                  // 0x0158(0x0004) (NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFPostProcessMaterialEffectSkill*           ProcessMaterialData;                                      // 0x015C(0x0008) (RepNotify, Interp, EditorOnly, RepRetry, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	class USkeletalMeshComponent*                      SkeletalMeshComponentData;                                // 0x0158(0x0008)
	class USkeletalMesh*                               SkeletalMeshData;                                         // 0x0160(0x0008) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	TArray<class UAnimSet*>                            AnimSets;                                                 // 0x0168(0x0010) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FString                                     PlayAniName;                                              // 0x0178(0x0010) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	float                                              AnimPlayRate;                                             // 0x0188(0x0004) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	float                                              AnimPlayStartTime;                                        // 0x018C(0x0004) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FVector                                     RelativeScale;                                            // 0x0190(0x000C) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FVector                                     Translation;                                              // 0x019C(0x000C) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	struct FVector                                     Rotation;                                                 // 0x01A8(0x000C) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bAniChange : 1;                                           // 0x01B4(0x0004) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bAnimIsLoop : 1;                                          // 0x01B4(0x0004) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      IsTrailParticleRemove : 1;                                // 0x01B4(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bApplyFxArleadySkeletalMesh : 1;                          // 0x01B4(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      IsCollisionResize : 1;                                    // 0x01B4(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bDeleteAleardyProjectileActionSkeletalMeshMaterialParameterArray : 1;// 0x01B4(0x0004) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFProjectileParticleData*                   AppearParticleData;                                       // 0x01B8(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<class UEFProjectileParticleData*>           AttachParticleDataArray;                                  // 0x01C0(0x0010) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CollisionReSize;                                          // 0x01D0(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	TArray<struct FEFProjectileActionSkeletalMeshMaterialParameter> EFProjectileActionSkeletalMeshMaterialParameterArray;     // 0x01D4(0x0010) (Interp, NonTransactional, EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FPlaySkeletalMeshActor                      SkeletalMeshActors;                                       // 0x0158(0x00B0) (Interp, NotForConsole, ProtectedWrite, EditHide, EditTextBox, CrossLevelPassive)

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
	struct FString                                     ActionNotifyTag;                                          // 0x0158(0x0010) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FActionNotify_SM_AnimEventData              AnimEventData;                                            // 0x0168(0x0038) (Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned char                                      UniqueId;                                                 // 0x0158(0x0001) (RepNotify, NonTransactional, EditorOnly, ProtectedWrite, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	int                                                SkillEffectId;                                            // 0x015C(0x0004) (NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SkillEffectCheckCount;                                    // 0x0160(0x0004) (NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TEnumAsByte<EFHitSegmentDirType>                   HitDirType;                                               // 0x0164(0x0001) (NonTransactional, RepRetry, ProtectedWrite, CrossLevelPassive)
	unsigned char                                      SequentialSkillEffectExecuteCount;                        // 0x0165(0x0001) (NonTransactional, RepRetry, ProtectedWrite, CrossLevelPassive)
	unsigned char                                      SequentialSkillEffectAreaRate;                            // 0x0166(0x0001) (NonTransactional, RepRetry, ProtectedWrite, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0167(0x0001) MISSED OFFSET
	float                                              SequentialSkillEffectDuration;                            // 0x0168(0x0004) (NonTransactional, RepRetry, ProtectedWrite, CrossLevelPassive)

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
	float                                              EventDelay;                                               // 0x0158(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)
	int                                                EventCount;                                               // 0x015C(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)
	float                                              EventTerm;                                                // 0x0160(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)
	unsigned long                                      StopWhenBaseDestroy : 1;                                  // 0x0164(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)

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
	TArray<class UEFSequenceSummonsAction*>            ifActionList;                                             // 0x0158(0x0010)
	TArray<class UEFSequenceSummonsAction*>            elseActionList;                                           // 0x0168(0x0010)

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
	TArray<struct FEFSequenceSummonsActionTierCheckerData> EFSequenceSummonsActionTierCheckerDataArray;              // 0x0178(0x0010) (NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     Comment;                                                  // 0x0140(0x0010) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SizeX;                                                    // 0x0150(0x0004) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                SizeY;                                                    // 0x0154(0x0004) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                BorderWidth;                                              // 0x0158(0x0004) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDrawBox : 1;                                             // 0x015C(0x0004) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFilled : 1;                                              // 0x015C(0x0004) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bTileFill : 1;                                            // 0x015C(0x0004) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      BorderColor;                                              // 0x0160(0x0004) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      FillColor;                                                // 0x0164(0x0004) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UTexture2D*                                  FillTexture;                                              // 0x0168(0x0008) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UMaterial*                                   FillMaterial;                                             // 0x0170(0x0008) (RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      LocalControl : 1;                                         // 0x0140(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	unsigned long                                      DestroyWhenSkillEnd : 1;                                  // 0x0140(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	unsigned long                                      DestroyWhenSkillStageEnd : 1;                             // 0x0140(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	unsigned long                                      DestroyWhenOwnerDied : 1;                                 // 0x0140(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	unsigned long                                      DestroyWhenEnterParalyzation : 1;                         // 0x0140(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	unsigned long                                      ReversedDirection : 1;                                    // 0x0140(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	unsigned long                                      IsMoveableProjectile : 1;                                 // 0x0140(0x0004)
	unsigned long                                      Penerate : 1;                                             // 0x0140(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      CollisionPreCheck : 1;                                    // 0x0140(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              CreateDelay;                                              // 0x0144(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	int                                                UniqueGroupIndex;                                         // 0x0148(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	int                                                MaxIdentityGaugeRecoveryCount;                            // 0x014C(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditTextBox)
	TEnumAsByte<EFSummonsATSelect>                     TargetSelectType;                                         // 0x0150(0x0001) (RepNotify, EditHide, EditTextBox)
	TEnumAsByte<EFSummonsHitCheckType>                 HitCheckType;                                             // 0x0151(0x0001) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	class UEFProjectileParticleData*                   TrailParticleData;                                        // 0x0154(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFProjectileParticleData*                   ExplodeParticleData;                                      // 0x015C(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UEFProjectileParticleData*                   EnvExplodeParticleData;                                   // 0x0164(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ResScale;                                                 // 0x016C(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CollisionSize;                                            // 0x0170(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              CollisionSize_HeightClientOnly;                           // 0x0174(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	int                                                Speed;                                                    // 0x0178(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                MaxSpeed;                                                 // 0x017C(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              Lifetime;                                                 // 0x0180(0x0004) (NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive)
	int                                                MaxDistance;                                              // 0x0184(0x0004) (NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive)
	int                                                MaxApplyCount;                                            // 0x0188(0x0004) (NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive)
	struct FEFSummonsObjectMask                        ObjectMask;                                               // 0x018C(0x0004) (NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox)
	int                                                ObjectMaskValue;                                          // 0x0190(0x0004)
	TArray<class UEFSequenceSummonsAction*>            StartActionList;                                          // 0x0194(0x0010)
	TArray<class UEFSequenceSummonsAction*>            HitActionList;                                            // 0x01A4(0x0010)
	TArray<class UEFSequenceSummonsAction*>            EndActionList;                                            // 0x01B4(0x0010)
	TArray<class UEFSequenceSummonsAction*>            BGCollisionActionList;                                    // 0x01C4(0x0010)

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
	class UEFProjectileParticleData*                   StartFXParticleData;                                      // 0x01D4(0x0008) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFProjectileParticleData*                   StartDecalParticleData;                                   // 0x01DC(0x0008) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFSummonsFixAreaStartIndexDecal>    StartIndexDecalDatas;                                     // 0x01E4(0x0010) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFProjectileParticleData*                   LoopFXParticleData;                                       // 0x01F4(0x0008) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class UEFProjectileParticleData*                   LoopDecalParticleData;                                    // 0x01FC(0x0008) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              fLoopFXStartTime;                                         // 0x0204(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDecalOverPrevent : 1;                                    // 0x0208(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bInitialLocGround : 1;                                    // 0x0208(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              fDecalFadeOutTime;                                        // 0x020C(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FRotator                                    RandomRotateMin;                                          // 0x0210(0x000C) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FRotator                                    RandomRotateMax;                                          // 0x021C(0x000C) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FEFSummonsJudgmentRotation                  JudgmentRotation;                                         // 0x0228(0x0008) (NonTransactional, RepRetry, PrivateWrite, EditHide, EditTextBox)

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
	int                                                GrenadeMinHeight;                                         // 0x01D4(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive)
	int                                                GrenadeMaxHeight;                                         // 0x01D8(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive)
	float                                              GrenadeMaxheightRatio;                                    // 0x01DC(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive)
	float                                              GrenadeMaxheightStartDist;                                // 0x01E0(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive)
	float                                              StandardDistance;                                         // 0x01E4(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, EditTextBox, CrossLevelPassive)

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
	class UEFProjectileParticleData*                   NaturalDieParticleData;                                   // 0x01D4(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseAttachHitParticle : 1;                                // 0x01DC(0x0004) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIsIgnoreBGround : 1;                                     // 0x01DC(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	struct FEFSummonsJudgmentRotation                  JudgmentRotation;                                         // 0x01E0(0x0008) (NonTransactional, RepRetry, PrivateWrite, EditHide, EditTextBox)

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
	class UEFProjectileParticleData*                   NaturalDieParticleData;                                   // 0x01D4(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIsIgnoreBGround : 1;                                     // 0x01DC(0x0004) (RepNotify, Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	TEnumAsByte<ETraceProjectileStartMoveType>         StartMoveType;                                            // 0x01E0(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)
	TEnumAsByte<ETraceProjectileEndMoveType>           EndMoveType;                                              // 0x01E1(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)
	TEnumAsByte<ETraceProjectileTargetSelectType>      TraceTargetSelectType;                                    // 0x01E2(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01E3(0x0001) MISSED OFFSET
	float                                              TurnVelocity;                                             // 0x01E4(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)
	float                                              TargetSearchStartTime;                                    // 0x01E8(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)
	float                                              TargetSearchRadius;                                       // 0x01EC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)
	float                                              TargetSearchAngle;                                        // 0x01F0(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)
	float                                              TraceGiveUpRadius;                                        // 0x01F4(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)
	float                                              TraceDuration;                                            // 0x01F8(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide)

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
	class USequence*                                   SummonsSequence;                                          // 0x0058(0x0008)

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
	TArray<struct FSummonsEditorFilterData>            SubFilters;                                               // 0x01B4(0x0010)

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
	struct FString                                     FilterName;                                               // 0x01B4(0x0010) (NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      UnkownFilter : 1;                                         // 0x01C4(0x0004)
	TArray<class UEFSequenceSummons*>                  summons;                                                  // 0x01C8(0x0010)
	TArray<class UEFSequenceSummonsEditorFilterData*>  SubFilters;                                               // 0x01D8(0x0010)

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
	struct FString                                     Comment;                                                  // 0x0058(0x0010) (Interp, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	float                                              BeginBlendTime;                                           // 0x00FC(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelActive)
	float                                              EndBlendTime;                                             // 0x0100(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, EditTextBox, CrossLevelActive)

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
	struct FName                                       AnimNodeBlendName;                                        // 0x00D8(0x0008) (Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              EndAnimBlendTime;                                         // 0x00E0(0x0004) (Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FPointer                                    VfTable_IEFInterpTrackAutoBlendBase;                      // 0x00D8(0x0008)
	float                                              BlendInTimeFromOriginal;                                  // 0x00E0(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              BlendOutTimeToOriginal;                                   // 0x00E4(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FPointer                                    VfTable_IEFInterpTrackAutoBlendBase;                      // 0x00D8(0x0008)
	float                                              BlendInTimeFromOriginal;                                  // 0x00E0(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              BlendOutTimeToOriginal;                                   // 0x00E4(0x0004) (NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FPointer                                    VfTable_IEFInterpTrackAutoBlendBase;                      // 0x00D8(0x0008)
	float                                              BlendInTimeFromOriginal;                                  // 0x00E0(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              BlendOutTimeToOriginal;                                   // 0x00E4(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FName                                       BeginBlendingAnimName;                                    // 0x0078(0x0008)
	struct FName                                       EndBlendingAnimName;                                      // 0x0080(0x0008)
	float                                              BeginAnimStartTime;                                       // 0x0088(0x0004)
	float                                              BeginAnimTime;                                            // 0x008C(0x0004)
	float                                              EndAnimTime;                                              // 0x0090(0x0004)
	float                                              CurrentWeight;                                            // 0x0094(0x0004)

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
	float                                              StandardNearPlaneValue;                                   // 0x0058(0x0004)

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
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

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
	TArray<unsigned long>                              SavedControlledByAnimMetaDataList;                        // 0x0058(0x0010)

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
	TArray<unsigned long>                              AnimMetaDataFlagList_PositiveX;                           // 0x0058(0x0010)
	TArray<unsigned long>                              AnimMetaDataFlagList_NegativeX;                           // 0x0068(0x0010)
	TArray<unsigned long>                              AnimMetaDataFlagList_PositiveY;                           // 0x0078(0x0010)
	TArray<unsigned long>                              AnimMetaDataFlagList_NegativeY;                           // 0x0088(0x0010)
	TArray<unsigned long>                              AnimMetaDataFlagList_PositiveZ;                           // 0x0098(0x0010)
	TArray<unsigned long>                              AnimMetaDataFlagList_NegativeZ;                           // 0x00A8(0x0010)

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
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

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
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

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
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

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
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)
	unsigned long                                      bLastActivateUnfixedPhysicBody : 1;                       // 0x005C(0x0004)

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
	struct FVector                                     ResetVector;                                              // 0x0058(0x000C)

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
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

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
	TArray<struct FEFPlayerClassAkEventTrackKey>       AkEvents;                                                 // 0x00B8(0x0010) (Interp, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FName>                               SkelControlNameList;                                      // 0x00D0(0x0010) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FName>                               SKelControlNameList_PositiveX;                            // 0x00D0(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               SKelControlNameList_NegativeX;                            // 0x00E0(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               SKelControlNameList_PositiveY;                            // 0x00F0(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               SKelControlNameList_NegativeY;                            // 0x0100(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               SKelControlNameList_PositiveZ;                            // 0x0110(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               SKelControlNameList_NegativeZ;                            // 0x0120(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFInterpTrackSoundSetInfo>          SoundSets;                                                // 0x00B8(0x0010) (RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFSubtitleInfo>                     SubtitleInfoArr;                                          // 0x00B8(0x0010) (EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	TEnumAsByte<ESubtitleDisplayMethod>                SubtitleDisplayMethod;                                    // 0x00C8(0x0001) (EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	TEnumAsByte<ECinematicSubtitlePositionType>        PositionType;                                             // 0x00C9(0x0001) (EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00CA(0x0002) MISSED OFFSET
	unsigned long                                      bUseSubtitleBackground : 1;                               // 0x00CC(0x0004) (EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      bApplyFacialAnim : 1;                                     // 0x00CC(0x0004)
	struct FEFFacialAnimInfo                           FacialAnimInfo;                                           // 0x00D0(0x0010) (NonTransactional, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                PrevKeyIndex;                                             // 0x00E0(0x0004)

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
	TArray<struct FEFSubtitleBalloonInfo>              SubtitleBalloonInfoArr;                                   // 0x00B8(0x0010) (EditorOnly, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	int                                                GroupActorIndex;                                          // 0x00C8(0x0004)
	struct FEFFacialAnimInfo                           FacialAnimInfo;                                           // 0x00CC(0x0010) (NonTransactional, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bApplyFacialAnim : 1;                                     // 0x00DC(0x0004)
	int                                                PrevKeyIndex;                                             // 0x00E0(0x0004)

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
	unsigned long                                      bUsePlayerUnfixedBoneNames : 1;                           // 0x00D0(0x0004) (RepRetry, PrivateWrite, CrossLevelActive)
	unsigned long                                      bEnableBoneSpringAngular : 1;                             // 0x00D0(0x0004) (Interp, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               UnfixedBoneNames;                                         // 0x00D4(0x0010) (RepRetry, PrivateWrite, CrossLevelActive)
	float                                              BoneAngularSpring;                                        // 0x00E4(0x0004) (Interp, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	float                                              BoneAngularDamping;                                       // 0x00E8(0x0004) (Interp, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FName                                       ParamName;                                                // 0x00D0(0x0008) (EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FEFInterpTrackVoiceSetInfo>          VoiceSets;                                                // 0x00B8(0x0010) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bAtlas : 1;                                               // 0x022C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FEFTexture2DHitPixel>                HitTestPixelArray;                                        // 0x0230(0x0010)
	int                                                EachWidth;                                                // 0x0240(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                EachHeight;                                               // 0x0244(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x014C(0x0008)
	unsigned long                                      bResizeToFitViewport : 1;                                 // 0x0154(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                SizeX;                                                    // 0x0124(0x0004)
	int                                                SizeY;                                                    // 0x0128(0x0004)
	TEnumAsByte<EPixelFormat>                          Format;                                                   // 0x012C(0x0001)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x012D(0x0001) (NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x012E(0x0001) (NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                ZoneID;                                                   // 0x0058(0x0004)
	TArray<class AEFMinimapVolume*>                    MinimapVolumes;                                           // 0x005C(0x0010)
	TArray<class AEFMinimapVolume*>                    IndoorLinkVolumes;                                        // 0x006C(0x0010)
	TArray<class AEFInDoorVolume*>                     IndoorVolumes;                                            // 0x007C(0x0010)
	TArray<class AEFExpandedMinimapVolume*>            ExMinimapVolumes;                                         // 0x008C(0x0010)
	TArray<class AEFVoyagemapVolume*>                  VoyagemapVolumes;                                         // 0x009C(0x0010)

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
	int                                                VolumeIndex;                                              // 0x02B8(0x0004) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     PackageName;                                              // 0x02BC(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     GroupName;                                                // 0x02CC(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     TextureName;                                              // 0x02DC(0x0010) (NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FBox                                        BoundingBox;                                              // 0x02EC(0x001C)

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
	int                                                VolumeIndex;                                              // 0x02B8(0x0004) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                MinimapVolumeIndex;                                       // 0x02BC(0x0004) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class AEFMinimapVolume*                            MinimapVolume;                                            // 0x02C0(0x0008) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FBox                                        BoundingBox;                                              // 0x02C8(0x001C) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                VolumeIndex;                                              // 0x02B8(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                UnitWidth;                                                // 0x02BC(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                UnitHeight;                                               // 0x02C0(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                VolumeCutSize;                                            // 0x02C4(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     PackageName;                                              // 0x02C8(0x0010) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     GroupName;                                                // 0x02D8(0x0010) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FullTextureName;                                          // 0x02E8(0x0010) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	TArray<struct FMinimapPeiceInfo>                   PieceInfos;                                               // 0x02F8(0x0010) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FBox                                        BoundingBox;                                              // 0x0308(0x001C) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                InDoorVolumeIndex;                                        // 0x0324(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	class AEFInDoorVolume*                             InDoorVolume;                                             // 0x0328(0x0008) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseIndoorExMinimap : 1;                                  // 0x0330(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDefaultFloor : 1;                                        // 0x0330(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	int                                                Floor;                                                    // 0x0334(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FloorName;                                                // 0x0338(0x0010) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	int                                                VolumeHeightCutSize;                                      // 0x0348(0x0004) (EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive, CrossLevelActive)

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
	struct FName                                       PostProcessEffectName;                                    // 0x0158(0x0008) (NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FLinearColor                                OcclusionColor;                                           // 0x0160(0x0010) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              OcclusionPower;                                           // 0x0170(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              OcclusionScale;                                           // 0x0174(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              OcclusionBias;                                            // 0x0178(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MinOcclusion;                                             // 0x017C(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAngleBasedSSAO : 1;                                      // 0x0180(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              OcclusionRadius;                                          // 0x0184(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EAmbientOcclusionQuality>              OcclusionQuality;                                         // 0x0188(0x0001) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              OcclusionFadeoutMinDistance;                              // 0x018C(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              OcclusionFadeoutMaxDistance;                              // 0x0190(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              HaloDistanceThreshold;                                    // 0x0194(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              HaloDistanceScale;                                        // 0x0198(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              HaloOcclusion;                                            // 0x019C(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              EdgeDistanceThreshold;                                    // 0x01A0(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              EdgeDistanceScale;                                        // 0x01A4(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              FilterDistanceScale;                                      // 0x01A8(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              HistoryConvergenceTime;                                   // 0x01AC(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              HistoryWeightConvergenceTime;                             // 0x01B0(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              BlurKernelSize;                                           // 0x0160(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              FalloffExponent;                                          // 0x0160(0x0004) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlurKernelSize;                                           // 0x0164(0x0004) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MaxNearBlurAmount;                                        // 0x0168(0x0004) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MinBlurAmount;                                            // 0x016C(0x0004) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MaxFarBlurAmount;                                         // 0x0170(0x0004) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EFocusType>                            FocusType;                                                // 0x0174(0x0001) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	float                                              FocusInnerRadius;                                         // 0x0178(0x0004) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              FocusDistance;                                            // 0x017C(0x0004) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     FocusPosition;                                            // 0x0180(0x000C) (RepNotify, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              BloomScale;                                               // 0x018C(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BloomThreshold;                                           // 0x0190(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      BloomTint;                                                // 0x0194(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BloomScreenBlendThreshold;                                // 0x0198(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlurBloomKernelSize;                                      // 0x019C(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EDOFType>                              DepthOfFieldType;                                         // 0x01A0(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EDOFQuality>                           DepthOfFieldQuality;                                      // 0x01A1(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01A2(0x0002) MISSED OFFSET
	class UTexture2D*                                  BokehTexture;                                             // 0x01A4(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              MaxVelocity;                                              // 0x018C(0x0004) (RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MotionBlurAmount;                                         // 0x0190(0x0004) (RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      FullMotionBlur : 1;                                       // 0x0194(0x0004) (RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CameraRotationThreshold;                                  // 0x0198(0x0004) (RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CameraTranslationThreshold;                               // 0x019C(0x0004) (RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)

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
	class UMaterialInterface*                          Material;                                                 // 0x0160(0x0008) (Interp, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	class UObject*                                     ObjectReference;                                          // 0x0168(0x0008)

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
	float                                              MaxVelocity;                                              // 0x0160(0x0004) (RepNotify, Interp, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MotionBlurAmount;                                         // 0x0164(0x0004) (RepNotify, Interp, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      FullMotionBlur : 1;                                       // 0x0168(0x0004) (RepNotify, Interp, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CameraRotationThreshold;                                  // 0x016C(0x0004) (RepNotify, Interp, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CameraTranslationThreshold;                               // 0x0170(0x0004) (RepNotify, Interp, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FVector                                     SceneShadows;                                             // 0x0160(0x000C) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     SceneHighLights;                                          // 0x016C(0x000C) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     SceneMidTones;                                            // 0x0178(0x000C) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              SceneDesaturation;                                        // 0x0184(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     SceneColorize;                                            // 0x0188(0x000C) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<ETonemapperType>                       TonemapperType;                                           // 0x0194(0x0001) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              TonemapperRange;                                          // 0x0198(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              TonemapperToeFactor;                                      // 0x019C(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              TonemapperScale;                                          // 0x01A0(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MotionBlurSoftEdgeKernelSize;                             // 0x01A4(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bEnableImageGrain : 1;                                    // 0x01A8(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bScaleEffectsWithViewSize : 1;                            // 0x01A8(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              SceneImageGrainScale;                                     // 0x01AC(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BloomWeightSmall;                                         // 0x01B0(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BloomWeightMedium;                                        // 0x01B4(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BloomWeightLarge;                                         // 0x01B8(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BloomSizeScaleSmall;                                      // 0x01BC(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BloomSizeScaleMedium;                                     // 0x01C0(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BloomSizeScaleLarge;                                      // 0x01C4(0x0004) (RepNotify, NonTransactional, RepRetry, EditHide, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      Value : 1;                                                // 0x0160(0x0004)

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
