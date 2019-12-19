#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_GameFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameFramework.DynamicSpriteComponent
// 0x004C (0x02F8 - 0x02AC)
class UDynamicSpriteComponent : public USpriteComponent
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x02AC(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DynamicSpriteComponent");
		return ptr;
	}

};


// Class GameFramework.FrameworkGame
// 0x0010 (0x04D0 - 0x04C0)
class AFrameworkGame : public AGameInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.FrameworkGame");
		return ptr;
	}

};


// Class GameFramework.GameAIController
// 0x004C (0x04D0 - 0x0484)
class AGameAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0484(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAIController");
		return ptr;
	}


	void GetActionString();
	void STATIC_SetDesiredRotation();
	void AILog_Internal();
	void STATIC_RecordDemoAILog();
	void Destroyed();
	void STATIC_ReachedIntermediateMoveGoal();
	void STATIC_ReachedMoveGoal();
	void STATIC_GetDestinationOffset();
	void STATIC_GetAICommandInStack();
	void STATIC_FindCommandOfClass();
	void STATIC_DumpCommandStack();
	void STATIC_CheckCommandCount();
	void STATIC_GetActiveCommand();
	void STATIC_AbortCommand();
	void STATIC_PopCommand();
	void STATIC_PushCommand();
	void STATIC_AllCommands();
};


// Class GameFramework.GameAICommand
// 0x0024 (0x007C - 0x0058)
class UGameAICommand : public UAICommandBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0058(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICommand");
		return ptr;
	}


	void HandlePathObstruction();
	void MoveUnreachable();
	void STATIC_NotifyNeedRepath();
	void GetDebugVerboseText();
	void STATIC_GetDebugOverheadText();
	void DrawDebug();
	void GetDumpString();
	void STATIC_Resumed();
	void Paused();
	void STATIC_Popped();
	void STATIC_Pushed();
	void STATIC_PostPopped();
	void STATIC_PrePushed();
	void STATIC_AllowStateTransitionTo();
	void STATIC_AllowTransitionTo();
	void Tick();
	void STATIC_ShouldIgnoreNotifies();
	void InternalTick();
	void InternalResumed();
	void InternalPaused();
	void InternalPopped();
	void InternalPushed();
	void InternalPrePushed();
	void STATIC_InitCommand();
	void STATIC_InitCommandUserActor();
};


// Class GameFramework.GameCameraBlockingVolume
// 0x0000 (0x02B4 - 0x02B4)
class AGameCameraBlockingVolume : public ABlockingVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCameraBlockingVolume");
		return ptr;
	}

};


// Class GameFramework.GamePlayerController
// 0x0010 (0x0790 - 0x0780)
class AGamePlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerController");
		return ptr;
	}


	void STATIC_ClientColorFade();
	void WarmupPause();
	void STATIC_CanUnpauseWarmup();
	void STATIC_GetCurrentMovie();
	void ClientStopMovie();
	void ClientPlayMovie();
	void STATIC_KeepPlayingLoadingMovie();
	void STATIC_ShowLoadingMovie();
	void STATIC_SetSoundMode();
	void DoForceFeedbackForScreenShake();
	void NotifyCrowdAgentInRadius();
	void NotifyCrowdAgentRefresh();
	void STATIC_CrowdDebug();
	void STATIC_GetUIPlayerIndex();
	void STATIC_OnToggleMouseCursor();
};


// Class GameFramework.GameCheatManager
// 0x0020 (0x0098 - 0x0078)
class UGameCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCheatManager");
		return ptr;
	}


	void STATIC_EnableDebugCamera();
	void STATIC_TeleportPawnToCamera();
	void STATIC_ToggleDebugCamera();
	void STATIC_PatchDebugCameraController();
};


// Class GameFramework.GameCrowdAgent
// 0x0278 (0x04F4 - 0x027C)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	unsigned char                                      UnknownData00[0x278];                                     // 0x027C(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgent");
		return ptr;
	}


	void STATIC_InitDebugColor();
	void STATIC_GetBehaviorString();
	void STATIC_GetDestString();
	void PostRenderFor();
	void STATIC_NativePostRenderFor();
	void GeneratePathToActor();
	void InitNavigationHandle();
	void OverlappedActorEvent();
	void TakeDamage();
	void FireDeathEvent();
	void STATIC_PlayDeath();
	void UpdateIntermediatePoint();
	void CalcCamera();
	void STATIC_IsIdle();
	void STATIC_SetCurrentBehavior();
	void StopBehavior();
	void HandleBehaviorEvent();
	void STATIC_ActivateInstancedBehavior();
	void ActivateBehavior();
	void STATIC_ResetSeePlayer();
	void STATIC_TryRandomBehavior();
	void NotifySeePlayer();
	void STATIC_PlaySpawnBehavior();
	void HandlePotentialAgentEncounter();
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void STATIC_OnPlayAgentAnimation();
	void STATIC_InitializeAgent();
	void STATIC_GetAttemptedSpawnLocation();
	void STATIC_SetLighting();
	void DisplayDebug();
	void Destroyed();
	void STATIC_ResetPooledAgent();
	void KillAgent();
	void PostBeginPlay();
	void STATIC_SetMaxSpeed();
	void SetCurrentDestination();
	void WaitForGroupMembers();
	void STATIC_PickBehaviorFrom();
	void STATIC_IsPanicked();
	void FellOutOfWorld();
	void STATIC_GetCollisionExtent();
};


// Class GameFramework.GameCrowdAgentSkeletal
// 0x00B4 (0x05A8 - 0x04F4)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x04F4(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentSkeletal");
		return ptr;
	}


	void STATIC_CreateAttachments();
	void OnAnimEnd();
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void ClearLatentAnimation();
	void STATIC_OnPlayAgentAnimation();
	void STATIC_SetRootMotion();
	void STATIC_PlayDeath();
	void STATIC_SetLighting();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdAgentSM
// 0x0010 (0x0504 - 0x04F4)
class AGameCrowdAgentSM : public AGameCrowdAgent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04F4(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentSM");
		return ptr;
	}


	void StopBehavior();
	void ActivateBehavior();
	void STATIC_ChangeDebugColor();
	void STATIC_InitDebugColor();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdAgentBehavior
// 0x003C (0x0094 - 0x0058)
class UGameCrowdAgentBehavior : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0058(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentBehavior");
		return ptr;
	}


	void STATIC_AllowBehaviorAt();
	void STATIC_AllowThisDestination();
	void PropagateViralBehaviorTo();
	void STATIC_GetBehaviorInstigator();
	void STATIC_ActivatedBy();
	void STATIC_GetDestinationActor();
	void STATIC_ChangingDestination();
	void STATIC_GetBehaviorString();
	void OnAnimEnd();
	void StopBehavior();
	void STATIC_InitBehavior();
	void STATIC_HandleMovement();
	void FinishedTargetRotation();
	void STATIC_CanBeUsedBy();
	void Tick();
	void STATIC_ShouldEndIdle();
	void STATIC_TriggerCrowdBehavior();
};


// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x0038 (0x00CC - 0x0094)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0094(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_PlayAnimation");
		return ptr;
	}


	void STATIC_GetBehaviorString();
	void StopBehavior();
	void STATIC_PlayAgentAnimationNow();
	void OnAnimEnd();
	void STATIC_SetSequenceOutput();
	void FinishedTargetRotation();
	void STATIC_InitBehavior();
};


// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x0008 (0x009C - 0x0094)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_RunFromPanic");
		return ptr;
	}


	void STATIC_GetBehaviorString();
	void STATIC_AllowBehaviorAt();
	void STATIC_AllowThisDestination();
	void STATIC_GetBehaviorInstigator();
	void StopBehavior();
	void STATIC_InitBehavior();
	void STATIC_ActivatedBy();
};


// Class GameFramework.GameCrowdBehavior_WaitForGroup
// 0x0000 (0x0094 - 0x0094)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitForGroup");
		return ptr;
	}


	void StopBehavior();
	void STATIC_ShouldEndIdle();
	void STATIC_GetBehaviorString();
	void STATIC_InitBehavior();
};


// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x000C (0x00A0 - 0x0094)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0094(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitInQueue");
		return ptr;
	}


	void StopBehavior();
	void STATIC_ShouldEndIdle();
	void STATIC_GetBehaviorString();
	void STATIC_GetDestinationActor();
	void STATIC_ChangingDestination();
	void STATIC_HandleMovement();
};


// Class GameFramework.GameCrowdGroup
// 0x0010 (0x0068 - 0x0058)
class UGameCrowdGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdGroup");
		return ptr;
	}


	void STATIC_UpdateDestinations();
	void STATIC_RemoveMember();
	void STATIC_AddMember();
};


// Class GameFramework.GameCrowdInfoVolume
// 0x0010 (0x02C0 - 0x02B0)
class AGameCrowdInfoVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInfoVolume");
		return ptr;
	}


	void UnTouch();
	void Touch();
};


// Class GameFramework.GameCrowdInteractionPoint
// 0x000C (0x0280 - 0x0274)
class AGameCrowdInteractionPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionPoint");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class GameFramework.GameCrowdBehaviorPoint
// 0x0018 (0x0298 - 0x0280)
class AGameCrowdBehaviorPoint : public AGameCrowdInteractionPoint
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0280(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehaviorPoint");
		return ptr;
	}


	void Touch();
	void STATIC_DestroySelf();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdDestination
// 0x00A8 (0x0328 - 0x0280)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0280(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestination");
		return ptr;
	}


	void DrawDebug();
	void STATIC_GetDestinationRadius();
	void STATIC_PrioritizeSpawnPoint();
	void STATIC_AnalyzeSpawnPoint();
	void STATIC_GetSpawnPosition();
	void STATIC_GetSpawnRadius();
	void AllowableDestinationFor();
	void AtCapacity();
	void IncrementCustomerCount();
	void DecrementCustomerCount();
	void STATIC_PickNewDestinationFor();
	void ReachedDestination();
	void Destroyed();
	void PostBeginPlay();
	void STATIC_ReachedByAgent();
};


// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x0030 (0x02B0 - 0x0280)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0280(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestinationQueuePoint");
		return ptr;
	}


	void STATIC_HasCustomer();
	void STATIC_ClearQueue();
	void STATIC_AddCustomer();
	void STATIC_ActuallyAdvance();
	void STATIC_AdvanceCustomerTo();
	void ReachedDestination();
	void STATIC_HasSpace();
	void STATIC_QueueReachedBy();
};


// Class GameFramework.GameCrowdPopulationManager
// 0x00FC (0x0370 - 0x0274)
class AGameCrowdPopulationManager : public ACrowdPopulationManagerBase
{
public:
	unsigned char                                      UnknownData00[0xFC];                                      // 0x0274(0x00FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdPopulationManager");
		return ptr;
	}


	void CreateNewAgent();
	void STATIC_Warmup();
	void STATIC_SpawnAgent();
	void STATIC_SpawnAgentByIdx();
	void STATIC_ValidateSpawnAt();
	void STATIC_AddPrioritizedSpawnPoint();
	void STATIC_AnalyzeSpawnPoints();
	void PrioritizeSpawnPoints();
	void STATIC_StaticGetPlayerInfo();
	void STATIC_GetPlayerInfo();
	void PickSpawnPoint();
	void UpdateSpawner();
	void STATIC_UpdateAllSpawners();
	void Tick();
	void STATIC_ShouldDebugDestinations();
	void STATIC_IsSpawningActive();
	void DisplayDebug();
	void STATIC_AgentDestroyed();
	void FlushAllAgents();
	void FlushAgents();
	void CreateSpawner();
	void STATIC_SetCrowdInfoVolume();
	void STATIC_RemoveSpawnPoint();
	void STATIC_AddSpawnPoint();
	void NotifyPathChanged();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdReplicationActor
// 0x0010 (0x0284 - 0x0274)
class AGameCrowdReplicationActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0274(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdReplicationActor");
		return ptr;
	}


	void ReplicatedEvent();
};


// Class GameFramework.GameCrowdSpawnRelativeActor
// 0x0000 (0x0274 - 0x0274)
class AGameCrowdSpawnRelativeActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnRelativeActor");
		return ptr;
	}

};


// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x0284 - 0x0284)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDestinationConnRenderingComponent");
		return ptr;
	}

};


// Class GameFramework.GameExplosion
// 0x00E8 (0x0140 - 0x0058)
class UGameExplosion : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0058(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosion");
		return ptr;
	}

};


// Class GameFramework.GameExplosionActor
// 0x0078 (0x02EC - 0x0274)
class AGameExplosionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0274(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionActor");
		return ptr;
	}


	void STATIC_ChooseCameraShake();
	void STATIC_SpawnCameraLensEffects();
	void STATIC_DoExplosionCameraEffects();
	void DrawDebug();
	void STATIC_DelayedExplosionDamage();
	void Explode();
	void STATIC_SpawnExplosionFogVolume();
	void STATIC_SpawnExplosionDecal();
	void STATIC_SpawnExplosionParticleSystem();
	void STATIC_UpdateExplosionTemplateWithPerMaterialFX();
	void STATIC_SpecialCringeEffectsFor();
	void STATIC_SpecialPawnEffectsFor();
	void STATIC_GetEffectCheckRadius();
	void STATIC_DoExplosionDamage();
	void STATIC_BoxDistanceToPoint();
	void STATIC_IsBehindExplosion();
	void STATIC_DoFullDamageToActor();
	void STATIC_GetPhysicalMaterial();
	void PreBeginPlay();
};


// Class GameFramework.GamePawn
// 0x0004 (0x058C - 0x0588)
class AGamePawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0588(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePawn");
		return ptr;
	}


	void STATIC_ReattachMeshWithoutBeingSeen();
	void STATIC_ReattachMesh();
	void UpdateShadowSettings();
};


// Class GameFramework.DebugCameraController
// 0x004C (0x07DC - 0x0790)
class ADebugCameraController : public AGamePlayerController
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0790(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DebugCameraController");
		return ptr;
	}


	void ConsoleCommand();
	void STATIC_ShowDebugSelectedInfo();
	void STATIC_NativeInputKey();
	void STATIC_InitDebugInputSystem();
	void STATIC_DisableDebugCamera();
	void STATIC_NormalSpeed();
	void STATIC_MoreSpeed();
	void STATIC_SetFreezeRendering();
	void STATIC_OnDeactivate();
	void STATIC_OnActivate();
	void PostBeginPlay();
	void STATIC_Unselect();
	void STATIC_SecondarySelect();
	void STATIC_PrimarySelect();
};


// Class GameFramework.GameTypes
// 0x0000 (0x0058 - 0x0058)
class UGameTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameTypes");
		return ptr;
	}

};


// Class GameFramework.MobileHUD
// 0x011C (0x06B0 - 0x0594)
class AMobileHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x11C];                                     // 0x0594(0x011C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileHUD");
		return ptr;
	}


	void STATIC_RenderKismetHud();
	void STATIC_AddKismetRenderEvent();
	void RefreshKismetLinks();
	void STATIC_DrawMobileZone_Slider();
	void STATIC_DrawMobileTilt();
	void STATIC_DrawMobileZone_Trackball();
	void STATIC_DrawMobileZone_Joystick();
	void STATIC_DrawMobileZone_Button();
	void STATIC_DrawInputZoneOverlays();
	void STATIC_RenderMobileMenu();
	void STATIC_ShowMobileHud();
	void STATIC_DrawMobileDebugString();
	void PostRender();
	void PostBeginPlay();
};


// Class GameFramework.MobileInputZone
// 0x0200 (0x0258 - 0x0058)
class UMobileInputZone : public UObject
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0058(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileInputZone");
		return ptr;
	}


	void STATIC_AddKismetEventHandler();
	void OnPostDrawZone();
	void OnPreDrawZone();
	void OnProcessSlide();
	void OnDoubleTapDelegate();
	void OnTapDelegate();
	void OnProcessInputDelegate();
	void STATIC_DeactivateZone();
	void STATIC_ActivateZone();
};


// Class GameFramework.MobileMenuObject
// 0x007C (0x00D4 - 0x0058)
class UMobileMenuObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0058(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuObject");
		return ptr;
	}


	void STATIC_GetIconIndexes();
	void STATIC_RenderObject();
	void STATIC_SetCanvasPos();
	void STATIC_InitMenuObject();
	void GetRealPosition();
	void OnTouch();
};


// Class GameFramework.MobileMenuImage
// 0x0030 (0x0104 - 0x00D4)
class UMobileMenuImage : public UMobileMenuObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00D4(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuImage");
		return ptr;
	}


	void STATIC_RenderObject();
};


// Class GameFramework.MobileMenuScene
// 0x0070 (0x00C8 - 0x0058)
class UMobileMenuScene : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0058(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuScene");
		return ptr;
	}


	void STATIC_MobileMenuCommand();
	void STATIC_FindMenuObject();
	void STATIC_CleanUpScene();
	void STATIC_Closed();
	void STATIC_Closing();
	void STATIC_MadeTopMenu();
	void STATIC_Opened();
	void OnSceneTouch();
	void OnTouch();
	void STATIC_PostRenderMenuObject();
	void STATIC_PreRenderMenuObject();
	void STATIC_RenderScene();
	void STATIC_GetSceneFont();
	void InitMenuScene();
	void STATIC_GetGlobalScaleY();
	void STATIC_GetGlobalScaleX();
};


// Class GameFramework.MobilePlayerInput
// 0x0294 (0x054C - 0x02B8)
class UMobilePlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[0x294];                                     // 0x02B8(0x0294) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobilePlayerInput");
		return ptr;
	}


	void STATIC_OpenMobileMenuMode();
	void STATIC_OpenMobileMenu();
	void STATIC_MobileMenuCommand();
	void STATIC_SceneRenderToggle();
	void PreClientTravel();
	void RenderMenus();
	void CloseAllMenus();
	void CloseMenuScene();
	void OpenMenuScene();
	void STATIC_SetMobileInputConfig();
	void STATIC_ActivateInputGroup();
	void STATIC_GetCurrentZones();
	void STATIC_HasZones();
	void STATIC_FindorAddZone();
	void STATIC_FindZone();
	void STATIC_AddKismetRawInputEventHandler();
	void STATIC_AddKismetEventHandler();
	void RefreshKismetLinks();
	void STATIC_SwapZoneOwners();
	void STATIC_InitializeInputZones();
	void STATIC_InitTouchSystem();
	void ClientInitInputSystem();
	void InitInputSystem();
	void STATIC_ProcessWorldTouch();
	void STATIC_SendInputAxis();
	void STATIC_SendInputKey();
	void STATIC_ConditionalUpdateInputZones();
	void STATIC_NativeInitializeInputZones();
	void STATIC_NativeInitializeInputSystem();
	void OnInputTouch();
	void OnPreviewTouch();
	void OnTouchNotHandledInMenu();
	void PlayerInput();
	void CancelMobileInput();
	void STATIC_ProcessMobileInput();
};


// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0018 (0x008C - 0x0074)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0074(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshGoal_OutOfViewFrom");
		return ptr;
	}


	void Recycle();
	void STATIC_MustBeHiddenFromThisPoint();
	void STATIC_RecycleNative();
};


// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x002C (0x009C - 0x0070)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0070(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations");
		return ptr;
	}


	void Recycle();
	void STATIC_BiasAgainstPolysWithinDistanceOfLocations();
};


// Class GameFramework.SecondaryViewportClient
// 0x0000 (0x0060 - 0x0060)
class USecondaryViewportClient : public UScriptViewportClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SecondaryViewportClient");
		return ptr;
	}


	void PostRender();
};


// Class GameFramework.MobileSecondaryViewportClient
// 0x0000 (0x0060 - 0x0060)
class UMobileSecondaryViewportClient : public USecondaryViewportClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileSecondaryViewportClient");
		return ptr;
	}


	void PostRender();
};


// Class GameFramework.SeqAct_ControlGameMovie
// 0x0018 (0x0188 - 0x0170)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0170(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_ControlGameMovie");
		return ptr;
	}

};


// Class GameFramework.SeqAct_Deproject
// 0x002C (0x0184 - 0x0158)
class USeqAct_Deproject : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0158(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_Deproject");
		return ptr;
	}

};


// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle
// 0x004C (0x01A4 - 0x0158)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0158(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle");
		return ptr;
	}


	void STATIC_AgentDestroyed();
	void STATIC_GetMaxSpawnDist();
	void FillCrowdSpawnInfoItem();
	void GetObjClassVersion();
};


// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0000 (0x01A4 - 0x01A4)
class USeqAct_GameCrowdSpawner : public USeqAct_GameCrowdPopulationManagerToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdSpawner");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class GameFramework.SeqAct_MobileAddInputZones
// 0x0010 (0x0168 - 0x0158)
class USeqAct_MobileAddInputZones : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_MobileAddInputZones");
		return ptr;
	}

};


// Class GameFramework.SeqAct_MobileClearInputZones
// 0x0000 (0x0158 - 0x0158)
class USeqAct_MobileClearInputZones : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_MobileClearInputZones");
		return ptr;
	}

};


// Class GameFramework.SeqAct_MobileRemoveInputZone
// 0x0010 (0x0168 - 0x0158)
class USeqAct_MobileRemoveInputZone : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_MobileRemoveInputZone");
		return ptr;
	}

};


// Class GameFramework.SeqAct_MobileSaveLoadValue
// 0x0000 (0x0158 - 0x0158)
class USeqAct_MobileSaveLoadValue : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_MobileSaveLoadValue");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class GameFramework.SeqAct_ModifyProperty
// 0x0010 (0x0168 - 0x0158)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_ModifyProperty");
		return ptr;
	}

};


// Class GameFramework.SeqAct_PlayAgentAnimation
// 0x002C (0x019C - 0x0170)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0170(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_PlayAgentAnimation");
		return ptr;
	}


	void STATIC_SetCurrentAnimationActionFor();
	void GetObjClassVersion();
};


// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_CrowdAgentReachedDestination");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_HudRender
// 0x0018 (0x0180 - 0x0168)
class USeqEvent_HudRender : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_HudRender");
		return ptr;
	}


	void Render();
	void RegisterEvent();
};


// Class GameFramework.SeqEvent_MobileBase
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_MobileBase : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileBase");
		return ptr;
	}


	void AddToMobileInput();
	void RegisterEvent();
};


// Class GameFramework.SeqEvent_MobileMotion
// 0x0018 (0x0180 - 0x0168)
class USeqEvent_MobileMotion : public USeqEvent_MobileBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileMotion");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class GameFramework.SeqEvent_MobileZoneBase
// 0x0010 (0x0178 - 0x0168)
class USeqEvent_MobileZoneBase : public USeqEvent_MobileBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0168(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileZoneBase");
		return ptr;
	}


	void AddToMobileInput();
};


// Class GameFramework.SeqEvent_MobileButton
// 0x0004 (0x017C - 0x0178)
class USeqEvent_MobileButton : public USeqEvent_MobileZoneBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0178(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileButton");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_MobileInput
// 0x0018 (0x0190 - 0x0178)
class USeqEvent_MobileInput : public USeqEvent_MobileZoneBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0178(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileInput");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_MobileLook
// 0x0014 (0x018C - 0x0178)
class USeqEvent_MobileLook : public USeqEvent_MobileZoneBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0178(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileLook");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_MobileRawInput
// 0x0014 (0x017C - 0x0168)
class USeqEvent_MobileRawInput : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0168(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileRawInput");
		return ptr;
	}


	void RegisterEvent();
};


// Class GameFramework.SeqEvent_MobileObjectPicker
// 0x0038 (0x01B4 - 0x017C)
class USeqEvent_MobileObjectPicker : public USeqEvent_MobileRawInput
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x017C(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileObjectPicker");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_MobileSwipe
// 0x0024 (0x01A0 - 0x017C)
class USeqEvent_MobileSwipe : public USeqEvent_MobileRawInput
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x017C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileSwipe");
		return ptr;
	}

};


// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x0168 - 0x00EC)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x00EC(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSkelCtrl_Recoil");
		return ptr;
	}

};


// Class GameFramework.GameCameraBase
// 0x000C (0x0064 - 0x0058)
class UGameCameraBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCameraBase");
		return ptr;
	}


	void ModifyPostProcessSettings();
	void Init();
	void DisplayDebug();
	void STATIC_ProcessViewRotation();
	void UpdateCamera();
	void STATIC_ResetInterpolation();
	void OnBecomeInActive();
	void OnBecomeActive();
};


// Class GameFramework.GameThirdPersonCamera
// 0x0168 (0x01CC - 0x0064)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0064(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCamera");
		return ptr;
	}


	void STATIC_ResetInterpolation();
	void ModifyPostProcessSettings();
	void OnBecomeActive();
	void STATIC_ProcessViewRotation();
	void STATIC_UpdateCameraMode();
	void STATIC_FindBestCameraMode();
	void STATIC_AdjustFocusPointInterpolation();
	void STATIC_GetActualFocusLocation();
	void UpdateFocusPoint();
	void STATIC_ClearFocusPoint();
	void STATIC_GetFocusActor();
	void STATIC_SetFocusOnActor();
	void STATIC_SetFocusOnLoc();
	void STATIC_AdjustTurn();
	void STATIC_EndTurn();
	void STATIC_BeginTurn();
	void STATIC_PlayerUpdateCamera();
	void UpdateCamera();
	void GetDesiredFOV();
	void Init();
	void STATIC_Reset();
	void STATIC_CreateCameraMode();
};


// Class GameFramework.GamePlayerCamera
// 0x008C (0x0660 - 0x05D4)
class AGamePlayerCamera : public ACamera
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x05D4(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerCamera");
		return ptr;
	}


	void STATIC_AdjustFOVForViewport();
	void STATIC_ProcessViewRotation();
	void STATIC_ResetInterpolation();
	void STATIC_SetColorScale();
	void DisplayDebug();
	void STATIC_UpdateCameraLensEffects();
	void UpdateViewTarget();
	void STATIC_ShouldConstrainAspectRatio();
	void STATIC_FindBestCameraType();
	void STATIC_Reset();
	void PostBeginPlay();
	void STATIC_CacheLastTargetBaseInfo();
	void STATIC_CreateCamera();
};


// Class GameFramework.GameThirdPersonCameraMode
// 0x01F5 (0x024D - 0x0058)
class UGameThirdPersonCameraMode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x77];                                      // 0x0058(0x0077) MISSED OFFSET
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[0x6];                      // 0x00CF(0x0024)
	unsigned char                                      UnknownData01[0xA6];                                      // 0x01A7(0x00A6) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode");
		return ptr;
	}


	void STATIC_SetViewOffset();
	void ModifyPostProcessSettings();
	void STATIC_UpdatePostProcess();
	void STATIC_DOFTrace();
	void STATIC_GetDOFFocusLoc();
	void STATIC_ProcessViewRotation();
	void STATIC_SetFocusPoint();
	void GetCameraWorstCaseLoc();
	void GetDesiredFOV();
	void AdjustViewOffset();
	void OnBecomeInActive();
	void OnBecomeActive();
	void Init();
};


// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000F (0x025C - 0x024D)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	unsigned char                                      UnknownData00[0xF];                                       // 0x024D(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode_Default");
		return ptr;
	}

};


// Class GameFramework.GameSpecialMove
// 0x0048 (0x00A0 - 0x0058)
class UGameSpecialMove : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSpecialMove");
		return ptr;
	}


	void STATIC_RelativeToWorldOffset();
	void STATIC_WorldToRelativeOffset();
	void STATIC_ForcePawnRotation();
	void STATIC_MessageEvent();
	void STATIC_ResetFacePreciseRotation();
	void ReachedPrecisePosition();
	void STATIC_SetFacePreciseRotation();
	void STATIC_SetReachPreciseDestination();
	void STATIC_ShouldReplicate();
	void STATIC_SpecialMoveFlagsUpdated();
	void Tick();
	void STATIC_SpecialMoveEnded();
	void STATIC_SpecialMoveStarted();
	void STATIC_InternalCanDoSpecialMove();
	void STATIC_CanDoSpecialMove();
	void STATIC_CanOverrideSpecialMove();
	void STATIC_CanOverrideMoveWith();
	void STATIC_CanChainMove();
	void STATIC_ExtractSpecialMoveFlags();
	void STATIC_InitSpecialMoveFlags();
	void STATIC_InitSpecialMove();
};


// Class GameFramework.GameStateObject
// 0x0030 (0x00B0 - 0x0080)
class UGameStateObject : public UGameplayEventsHandler
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameStateObject");
		return ptr;
	}


	void STATIC_Reset();
	void PreProcessStream();
};


// Class GameFramework.GameStatsAggregator
// 0x0248 (0x02C8 - 0x0080)
class UGameStatsAggregator : public UGameplayEventsHandler
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0080(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameStatsAggregator");
		return ptr;
	}


	void STATIC_GetAggregateMappingIDs();
	void STATIC_Reset();
	void PostProcessStream();
	void PreProcessStream();
};


// Class GameFramework.SeqAct_ToggleMouseCursor
// 0x0000 (0x0158 - 0x0158)
class USeqAct_ToggleMouseCursor : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_ToggleMouseCursor");
		return ptr;
	}

};


// Class GameFramework.GameWaveForms
// 0x0020 (0x0078 - 0x0058)
class UGameWaveForms : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameWaveForms");
		return ptr;
	}

};


// Class GameFramework.DebugCameraHUD
// 0x0004 (0x0598 - 0x0594)
class ADebugCameraHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0594(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DebugCameraHUD");
		return ptr;
	}


	void PostRender();
	void STATIC_DisplayMaterials();
	void PostBeginPlay();
};


// Class GameFramework.DebugCameraInput
// 0x0000 (0x02B8 - 0x02B8)
class UDebugCameraInput : public UPlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DebugCameraInput");
		return ptr;
	}


	void InputKey();
};


// Class GameFramework.GameCrowdSpawnerInterface
// 0x0000 (0x0058 - 0x0058)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnerInterface");
		return ptr;
	}


	void STATIC_GetMaxSpawnDist();
	void STATIC_AgentDestroyed();
};


// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x0058 - 0x0058)
class UGameCrowdSpawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnInterface");
		return ptr;
	}


	void STATIC_GetSpawnPosition();
};


// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x0328 - 0x0328)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DynamicGameCrowdDestination");
		return ptr;
	}

};


// Class GameFramework.GameAICmd_Hover_MoveToGoal
// 0x0044 (0x00C0 - 0x007C)
class UGameAICmd_Hover_MoveToGoal : public UGameAICommand
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x007C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICmd_Hover_MoveToGoal");
		return ptr;
	}


	void STATIC_IsEnemyBasedOnInterpActor();
	void HandlePathObstruction();
	void STATIC_Pushed();
	void STATIC_MoveToGoal();
};


// Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh
// 0x0098 (0x0114 - 0x007C)
class UGameAICmd_Hover_MoveToGoal_Mesh : public UGameAICommand
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x007C(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh");
		return ptr;
	}


	void DrawDebug();
	void STATIC_IsEnemyBasedOnInterpActor();
	void STATIC_ShouldUpdateBreadCrumbs();
	void STATIC_HasReachedGoal();
	void STATIC_ReEvaluatePath();
	void HandlePathObstruction();
	void Tick();
	void STATIC_Popped();
	void STATIC_Pushed();
	void STATIC_HoverBackToMesh();
	void STATIC_HoverToPoint();
	void STATIC_HoverToGoal();
};


// Class GameFramework.GameCrowd_ListOfAgents
// 0x0010 (0x0068 - 0x0058)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowd_ListOfAgents");
		return ptr;
	}

};


// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x0328 - 0x0328)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionDestination");
		return ptr;
	}

};


// Class GameFramework.GameExplosionContent
// 0x0070 (0x00C8 - 0x0058)
class UGameExplosionContent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0058(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionContent");
		return ptr;
	}

};


// Class GameFramework.GameFixedCamera
// 0x0004 (0x0068 - 0x0064)
class UGameFixedCamera : public UGameCameraBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameFixedCamera");
		return ptr;
	}


	void OnBecomeActive();
	void UpdateCamera();
};


// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x03A8 - 0x03A8)
class AGameKActorSpawnableEffect : public AKActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameKActorSpawnableEffect");
		return ptr;
	}


	void STATIC_StartScalingDown();
	void FellOutOfWorld();
	void PostBeginPlay();
};


// Class GameFramework.MobileDebugCameraController
// 0x000C (0x07E8 - 0x07DC)
class AMobileDebugCameraController : public ADebugCameraController
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x07DC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileDebugCameraController");
		return ptr;
	}


	void STATIC_SetupDebugZones();
	void InitInputSystem();
	void STATIC_OnDeactivate();
	void STATIC_InitDebugInputSystem();
	void STATIC_OnActivate();
};


// Class GameFramework.MobileDebugCameraInput
// 0x0000 (0x054C - 0x054C)
class UMobileDebugCameraInput : public UMobilePlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileDebugCameraInput");
		return ptr;
	}


	void InputKey();
};


// Class GameFramework.MobileDebugCameraHUD
// 0x0004 (0x06B4 - 0x06B0)
class AMobileDebugCameraHUD : public AMobileHUD
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileDebugCameraHUD");
		return ptr;
	}


	void PostRender();
	void STATIC_DisplayMaterials();
	void PostBeginPlay();
};


// Class GameFramework.MobileMenuBar
// 0x001C (0x00F0 - 0x00D4)
class UMobileMenuBar : public UMobileMenuObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00D4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuBar");
		return ptr;
	}


	void STATIC_UpdateItemViewports();
	void STATIC_SetFirstItem();
	void STATIC_RenderItem();
	void STATIC_RenderObject();
	void OnTouch();
	void STATIC_GetSelected();
	void STATIC_Num();
	void AddItem();
	void STATIC_InitMenuObject();
};


// Class GameFramework.MobileMenuBarItem
// 0x0010 (0x0068 - 0x0058)
class UMobileMenuBarItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuBarItem");
		return ptr;
	}


	void STATIC_RenderItem();
};


// Class GameFramework.MobileMenuButton
// 0x0068 (0x013C - 0x00D4)
class UMobileMenuButton : public UMobileMenuObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00D4(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuButton");
		return ptr;
	}


	void STATIC_RenderCaption();
	void STATIC_RenderObject();
	void STATIC_InitMenuObject();
};


// Class GameFramework.MobileMenuElement
// 0x0014 (0x006C - 0x0058)
class UMobileMenuElement : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuElement");
		return ptr;
	}


	void STATIC_GetIconIndexes();
	void STATIC_RenderElement();
	void OnTouch();
};


// Class GameFramework.MobileMenuGame
// 0x0008 (0x04C8 - 0x04C0)
class AMobileMenuGame : public AGameInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuGame");
		return ptr;
	}


	void STATIC_RestartPlayer();
	void StartMatch();
	void PostLogin();
};


// Class GameFramework.MobileMenuPlayerController
// 0x0000 (0x0790 - 0x0790)
class AMobileMenuPlayerController : public AGamePlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuPlayerController");
		return ptr;
	}

};


// Class GameFramework.MobileMenuInventory
// 0x0090 (0x0164 - 0x00D4)
class UMobileMenuInventory : public UMobileMenuObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00D4(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuInventory");
		return ptr;
	}


	void STATIC_GetIconIndexes();
	void STATIC_RenderDragItem();
	void STATIC_RenderObject();
	void STATIC_GetIndexOfItem();
	void STATIC_FindSlotIndexAt();
	void STATIC_InitDragAt();
	void STATIC_UpdateItemInSlot();
	void STATIC_AddItemToSlot();
	void STATIC_SwapItemsInSlots();
	void OnTouch();
	void STATIC_CanPutItemInSlot();
	void STATIC_ScaleSlot();
	void STATIC_AddSlot();
	void STATIC_InitMenuObject();
	void STATIC_OnUpdateDrag();
	void STATIC_DoCanPutItemInSlot();
	void STATIC_OnUpdateItemInSlot();
};


// Class GameFramework.MobileMenuLabel
// 0x002C (0x0100 - 0x00D4)
class UMobileMenuLabel : public UMobileMenuObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00D4(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuLabel");
		return ptr;
	}


	void STATIC_RenderObject();
};


// Class GameFramework.MobileMenuList
// 0x00BC (0x0190 - 0x00D4)
class UMobileMenuList : public UMobileMenuObject
{
public:
	unsigned char                                      UnknownData00[0xBC];                                      // 0x00D4(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuList");
		return ptr;
	}


	void STATIC_GetIconIndexes();
	void STATIC_ItemScrollSize();
	void STATIC_RenderObject();
	void STATIC_UpdateScroll();
	void STATIC_CalculateSelectedItem();
	void STATIC_GetItemClickPosition();
	void OnTouch();
	void STATIC_SetSelectedItem();
	void STATIC_GetNumVisible();
	void STATIC_SetSelectedToVisibleIndex();
	void STATIC_GetVisibleIndexOfSelected();
	void STATIC_GetAmountSelected();
	void STATIC_GetSelected();
	void STATIC_Num();
	void AddItem();
	void STATIC_InitMenuObject();
};


// Class GameFramework.MobileMenuListItem
// 0x0008 (0x0074 - 0x006C)
class UMobileMenuListItem : public UMobileMenuElement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x006C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuListItem");
		return ptr;
	}


	void STATIC_RenderItem();
};


// Class GameFramework.MobileMenuObjectProxy
// 0x0020 (0x00F4 - 0x00D4)
class UMobileMenuObjectProxy : public UMobileMenuObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D4(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuObjectProxy");
		return ptr;
	}


	void STATIC_RenderObject();
	void OnTouch();
	void STATIC_OnRenderObject();
	void STATIC_OnTouchEvent();
};


// Class GameFramework.MobileTouchInputVolume
// 0x0004 (0x02B4 - 0x02B0)
class AMobileTouchInputVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileTouchInputVolume");
		return ptr;
	}


	void STATIC_HandleDragOver();
	void STATIC_HandleDoubleClick();
	void STATIC_HandleClick();
	void STATIC_OnToggle();
};


// Class GameFramework.SeqEvent_MobileTouchInputVolume
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_MobileTouchInputVolume : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileTouchInputVolume");
		return ptr;
	}

};


// Class GameFramework.TouchableElement3D
// 0x0000 (0x0058 - 0x0058)
class UTouchableElement3D : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.TouchableElement3D");
		return ptr;
	}


	void STATIC_HandleDragOver();
	void STATIC_HandleDoubleClick();
	void STATIC_HandleClick();
};


// Class GameFramework.PlayerCollectorGame
// 0x0014 (0x04D4 - 0x04C0)
class APlayerCollectorGame : public AGameInfo
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x04C0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.PlayerCollectorGame");
		return ptr;
	}


	void GetSeamlessTravelActorList();
	void Login();
};


// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0008 (0x0060 - 0x0058)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.PMESTG_LeaveADecalBase");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_HudRenderImage
// 0x003C (0x01BC - 0x0180)
class USeqEvent_HudRenderImage : public USeqEvent_HudRender
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0180(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_HudRenderImage");
		return ptr;
	}


	void Render();
};


// Class GameFramework.SeqEvent_HudRenderText
// 0x0029 (0x01A9 - 0x0180)
class USeqEvent_HudRenderText : public USeqEvent_HudRender
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x0180(0x0029) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_HudRenderText");
		return ptr;
	}


	void GetObjClassVersion();
	void Render();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
