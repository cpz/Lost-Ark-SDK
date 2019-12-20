#pragma once

// Lost Ark (1.12.11.0) SDK

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
	struct FInterpCurveFloat                           AnimatedScale;                                            // 0x02AC(0x0014) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FInterpCurveLinearColor                     AnimatedColor;                                            // 0x02C0(0x0014) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FInterpCurveVector2D                        AnimatedPosition;                                         // 0x02D4(0x0014) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     LocationOffset;                                           // 0x02E8(0x000C) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                LoopCount;                                                // 0x02F4(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FRequiredMobileInputConfig>          RequiredMobileInputConfigs;                               // 0x04C0(0x0010)

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
	class UGameAICommand*                              CommandList;                                              // 0x0484(0x0008) (RepNotify, Interp, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bHasRunawayCommandList : 1;                               // 0x048C(0x0004)
	unsigned long                                      bAILogging : 1;                                           // 0x048C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bAILogToWindow : 1;                                       // 0x048C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bFlushAILogEachLine : 1;                                  // 0x048C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bMapBasedLogName : 1;                                     // 0x048C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bAIDrawDebug : 1;                                         // 0x048C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bAIBroken : 1;                                            // 0x048C(0x0004)
	class AFileLog*                                    AILogFile;                                                // 0x0490(0x0008)
	float                                              DebugTextMaxLen;                                          // 0x0498(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	TArray<struct FAICmdHistoryItem>                   CommandHistory;                                           // 0x049C(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	int                                                CommandHistoryNum;                                        // 0x04AC(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	TArray<struct FName>                               AILogFilter;                                              // 0x04B0(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	struct FString                                     DemoActionString;                                         // 0x04C0(0x0010) (EditConst, GlobalConfig, AlwaysInit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAIController");
		return ptr;
	}


	void GetActionString();
	void SetDesiredRotation();
	void AILog_Internal();
	void RecordDemoAILog();
	void Destroyed();
	void ReachedIntermediateMoveGoal();
	void ReachedMoveGoal();
	void GetDestinationOffset();
	void GetAICommandInStack();
	void FindCommandOfClass();
	void DumpCommandStack();
	void CheckCommandCount();
	void GetActiveCommand();
	void AbortCommand();
	void PopCommand();
	void PushCommand();
	void AllCommands();
};


// Class GameFramework.GameAICommand
// 0x0024 (0x007C - 0x0058)
class UGameAICommand : public UAICommandBase
{
public:
	class UGameAICommand*                              ChildCommand;                                             // 0x0058(0x0008) (RepNotify, NonTransactional, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FName                                       ChildStatus;                                              // 0x0060(0x0008) (RepNotify, NonTransactional, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AGameAIController*                           GameAIOwner;                                              // 0x0068(0x0008) (RepNotify, NonTransactional, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FName                                       Status;                                                   // 0x0070(0x0008) (RepNotify, NonTransactional, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAllowNewSameClassInstance : 1;                           // 0x0078(0x0004)
	unsigned long                                      bReplaceActiveSameClassInstance : 1;                      // 0x0078(0x0004)
	unsigned long                                      bAborted : 1;                                             // 0x0078(0x0004)
	unsigned long                                      bIgnoreNotifies : 1;                                      // 0x0078(0x0004)
	unsigned long                                      bIgnoreStepAside : 1;                                     // 0x0078(0x0004)
	unsigned long                                      bPendingPop : 1;                                          // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICommand");
		return ptr;
	}


	void HandlePathObstruction();
	void MoveUnreachable();
	void NotifyNeedRepath();
	void GetDebugVerboseText();
	void GetDebugOverheadText();
	void DrawDebug();
	void GetDumpString();
	void Resumed();
	void Paused();
	void Popped();
	void Pushed();
	void PostPopped();
	void PrePushed();
	void AllowStateTransitionTo();
	void AllowTransitionTo();
	void Tick();
	void ShouldIgnoreNotifies();
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
	unsigned long                                      bWarnCrowdMembers : 1;                                    // 0x0780(0x0004)
	unsigned long                                      bDebugCrowdAwareness : 1;                                 // 0x0780(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bIsWarmupPaused : 1;                                      // 0x0780(0x0004)
	float                                              AgentAwareRadius;                                         // 0x0784(0x0004)
	struct FName                                       CurrentSoundMode;                                         // 0x0788(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerController");
		return ptr;
	}


	void ClientColorFade();
	void WarmupPause();
	void CanUnpauseWarmup();
	void GetCurrentMovie();
	void ClientStopMovie();
	void ClientPlayMovie();
	void STATIC_KeepPlayingLoadingMovie();
	void STATIC_ShowLoadingMovie();
	void SetSoundMode();
	void DoForceFeedbackForScreenShake();
	void NotifyCrowdAgentInRadius();
	void NotifyCrowdAgentRefresh();
	void CrowdDebug();
	void GetUIPlayerIndex();
	void OnToggleMouseCursor();
};


// Class GameFramework.GameCheatManager
// 0x0020 (0x0098 - 0x0078)
class UGameCheatManager : public UCheatManager
{
public:
	class ADebugCameraController*                      DebugCameraControllerRef;                                 // 0x0078(0x0008)
	class UClass*                                      DebugCameraControllerClass;                               // 0x0080(0x0008)
	struct FString                                     DebugCameraControllerClassName;                           // 0x0088(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCheatManager");
		return ptr;
	}


	void EnableDebugCamera();
	void TeleportPawnToCamera();
	void ToggleDebugCamera();
	void PatchDebugCameraController();
};


// Class GameFramework.GameCrowdAgent
// 0x0278 (0x04F4 - 0x027C)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	struct FPointer                                    VfTable_IInterface_RVO;                                   // 0x027C(0x0008)
	class UGameCrowdGroup*                             MyGroup;                                                  // 0x0284(0x0008)
	struct FVector                                     PreferredVelocity;                                        // 0x028C(0x000C)
	struct FVector                                     PendingVelocity;                                          // 0x0298(0x000C)
	class AGameCrowdDestination*                       CurrentDestination;                                       // 0x02A4(0x0008)
	class AGameCrowdDestination*                       BehaviorDestination;                                      // 0x02AC(0x0008)
	class AGameCrowdDestination*                       PreviousDestination;                                      // 0x02B4(0x0008)
	float                                              InterpZTranslation;                                       // 0x02BC(0x0004)
	int                                                Health;                                                   // 0x02C0(0x0004) (RepNotify, NonTransactional, EditorOnly, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DeadBodyDuration;                                         // 0x02C4(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x02C8(0x0008)
	int                                                ConformTraceFrameCount;                                   // 0x02D0(0x0004)
	TArray<struct FNearbyDynamicItem>                  NearbyDynamics;                                           // 0x02D4(0x0010)
	unsigned long                                      bUniformScale : 1;                                        // 0x02E4(0x0004)
	unsigned long                                      bCheckForObstacles : 1;                                   // 0x02E4(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	unsigned long                                      bUseNavMeshPathing : 1;                                   // 0x02E4(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	unsigned long                                      bWantsSeePlayerNotification : 1;                          // 0x02E4(0x0004)
	unsigned long                                      bAllowPitching : 1;                                       // 0x02E4(0x0004) (RepNotify, NonTransactional, EditorOnly, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bHitObstacle : 1;                                         // 0x02E4(0x0004)
	unsigned long                                      bBadHitNormal : 1;                                        // 0x02E4(0x0004)
	unsigned long                                      bSimulateThisTick : 1;                                    // 0x02E4(0x0004)
	unsigned long                                      bPotentialEncounter : 1;                                  // 0x02E4(0x0004)
	unsigned long                                      bIsPanicked : 1;                                          // 0x02E4(0x0004)
	unsigned long                                      bWantsGroupIdle : 1;                                      // 0x02E4(0x0004)
	unsigned long                                      bPreferVisibleDestination : 1;                            // 0x02E4(0x0004) (RepNotify, NonTransactional, EditorOnly, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bPreferVisibleDestinationOnSpawn : 1;                     // 0x02E4(0x0004) (RepNotify, NonTransactional, EditorOnly, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bHasNotifiedSpawner : 1;                                  // 0x02E4(0x0004)
	unsigned long                                      bIsInSpawnPool : 1;                                       // 0x02E4(0x0004)
	unsigned long                                      bPaused : 1;                                              // 0x02E4(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	TEnumAsByte<EConformType>                          ConformType;                                              // 0x02E8(0x0001) (RepNotify, NonTransactional, EditorOnly, EditHide, EditTextBox, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	float                                              ConformTraceDist;                                         // 0x02EC(0x0004) (RepNotify, NonTransactional, EditorOnly, EditHide, EditTextBox, CrossLevelActive)
	int                                                ConformTraceInterval;                                     // 0x02F0(0x0004) (RepNotify, NonTransactional, EditorOnly, EditHide, EditTextBox, CrossLevelActive)
	int                                                CurrentConformTraceInterval;                              // 0x02F4(0x0004)
	float                                              LastGroundZ;                                              // 0x02F8(0x0004)
	float                                              AwareRadius;                                              // 0x02FC(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              AvoidOtherRadius;                                         // 0x0300(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	TArray<struct FAvoidOtherSampleItem>               AvoidOtherSampleList;                                     // 0x0304(0x0010) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              PENALTY_COEFF_ANGLETOGOAL;                                // 0x0314(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              PENALTY_COEFF_ANGLETOVEL;                                 // 0x0318(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              PENALTY_COEFF_MAG;                                        // 0x031C(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              MIN_PENALTY_THRESHOLD;                                    // 0x0320(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              LastProgressTime;                                         // 0x0324(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              LastFallbackActiveTime;                                   // 0x0328(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              MaxPathLaneValue;                                         // 0x032C(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              CurrentPathLaneValue;                                     // 0x0330(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	int                                                ExtraPathCost;                                            // 0x0334(0x0004) (RepNotify, EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              RotateToTargetSpeed;                                      // 0x0338(0x0004) (RepNotify, NonTransactional, EditorOnly, EditHide, EditTextBox, CrossLevelActive)
	float                                              MaxYawRate;                                               // 0x033C(0x0004) (RepNotify, NonTransactional, EditorOnly, EditHide, EditTextBox, CrossLevelActive)
	struct FVector                                     MeshMinScale3D;                                           // 0x0340(0x000C) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     MeshMaxScale3D;                                           // 0x034C(0x000C) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              EyeZOffset;                                               // 0x0358(0x0004)
	float                                              ProximityLODDist;                                         // 0x035C(0x0004) (Interp, EditorOnly, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              VisibleProximityLODDist;                                  // 0x0360(0x0004) (Interp, EditorOnly, ArchetypeProperty, EditHide, CrossLevelActive)
	struct FVector                                     LastKnownGoodPosition;                                    // 0x0364(0x000C)
	float                                              GroundOffset;                                             // 0x0370(0x0004) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     IntermediatePoint;                                        // 0x0374(0x000C)
	struct FVector                                     SearchExtent;                                             // 0x0380(0x000C)
	class UClass*                                      NavigationHandleClass;                                    // 0x038C(0x0008)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x0394(0x0008)
	int                                                ObstacleCheckCount;                                       // 0x039C(0x0004)
	float                                              WalkableFloorZ;                                           // 0x03A0(0x0004)
	float                                              LastPathingAttempt;                                       // 0x03A4(0x0004)
	float                                              LastUpdateTime;                                           // 0x03A8(0x0004)
	float                                              NotVisibleLifeSpan;                                       // 0x03AC(0x0004) (Interp, EditorOnly, ArchetypeProperty, EditHide, CrossLevelActive)
	class AGameCrowdAgent*                             MyArchetype;                                              // 0x03B0(0x0008)
	float                                              MaxWalkingSpeed;                                          // 0x03B8(0x0004) (RepNotify, NonTransactional, EditorOnly, EditHide, EditTextBox, CrossLevelActive)
	float                                              MaxRunningSpeed;                                          // 0x03BC(0x0004) (RepNotify, NonTransactional, EditorOnly, EditHide, EditTextBox, CrossLevelActive)
	float                                              MaxSpeed;                                                 // 0x03C0(0x0004)
	TArray<struct FRecentInteraction>                  RecentInteractions;                                       // 0x03C4(0x0010)
	float                                              BeaconMaxDist;                                            // 0x03D4(0x0004)
	struct FVector                                     BeaconOffset;                                             // 0x03D8(0x000C)
	class UTexture2D*                                  BeaconTexture;                                            // 0x03E4(0x0008)
	struct FLinearColor                                BeaconColor;                                              // 0x03EC(0x0010)
	class USoundCue*                                   AmbientSoundCue;                                          // 0x03FC(0x0008) (RepNotify, NonTransactional, EditorOnly, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UAudioComponent*                             AmbientSoundComponent;                                    // 0x0404(0x0008)
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                                          // 0x040C(0x0008)
	float                                              CurrentBehaviorActivationTime;                            // 0x0414(0x0004)
	TArray<struct FBehaviorEntry>                      EncounterAgentBehaviors;                                  // 0x0418(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	TArray<struct FBehaviorEntry>                      SeePlayerBehaviors;                                       // 0x0428(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	float                                              MaxSeePlayerDistSq;                                       // 0x0438(0x0004)
	float                                              SeePlayerInterval;                                        // 0x043C(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	TArray<struct FBehaviorEntry>                      SpawnBehaviors;                                           // 0x0440(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	TArray<struct FBehaviorEntry>                      UneasyBehaviors;                                          // 0x0450(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	TArray<struct FBehaviorEntry>                      AlertBehaviors;                                           // 0x0460(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	TArray<struct FBehaviorEntry>                      PanicBehaviors;                                           // 0x0470(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	TArray<struct FBehaviorEntry>                      RandomBehaviors;                                          // 0x0480(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	TArray<struct FBehaviorEntry>                      TakeDamageBehaviors;                                      // 0x0490(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	float                                              RandomBehaviorInterval;                                   // 0x04A0(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	float                                              ForceUpdateTime;                                          // 0x04A4(0x0004)
	float                                              ReachThreshold;                                           // 0x04A8(0x0004)
	TArray<struct FBehaviorEntry>                      GroupWaitingBehaviors;                                    // 0x04AC(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	float                                              DesiredGroupRadius;                                       // 0x04BC(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	float                                              DesiredGroupRadiusSq;                                     // 0x04C0(0x0004)
	float                                              MaxLOSLifeDistanceSq;                                     // 0x04C4(0x0004)
	TScriptInterface<class UGameCrowdSpawnerInterface> MySpawner;                                                // 0x04C8(0x0010)
	struct FVector                                     SpawnOffset;                                              // 0x04D8(0x000C)
	float                                              InitialLastRenderTime;                                    // 0x04E4(0x0004)
	struct FColor                                      DebugAgentColor;                                          // 0x04E8(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	class AGameCrowdDestination*                       DebugSpawnDest;                                           // 0x04EC(0x0008) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgent");
		return ptr;
	}


	void InitDebugColor();
	void GetBehaviorString();
	void GetDestString();
	void PostRenderFor();
	void NativePostRenderFor();
	void GeneratePathToActor();
	void InitNavigationHandle();
	void OverlappedActorEvent();
	void TakeDamage();
	void FireDeathEvent();
	void PlayDeath();
	void UpdateIntermediatePoint();
	void CalcCamera();
	void IsIdle();
	void SetCurrentBehavior();
	void StopBehavior();
	void HandleBehaviorEvent();
	void ActivateInstancedBehavior();
	void ActivateBehavior();
	void ResetSeePlayer();
	void TryRandomBehavior();
	void NotifySeePlayer();
	void PlaySpawnBehavior();
	void HandlePotentialAgentEncounter();
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void OnPlayAgentAnimation();
	void InitializeAgent();
	void GetAttemptedSpawnLocation();
	void SetLighting();
	void DisplayDebug();
	void Destroyed();
	void ResetPooledAgent();
	void KillAgent();
	void PostBeginPlay();
	void SetMaxSpeed();
	void SetCurrentDestination();
	void WaitForGroupMembers();
	void PickBehaviorFrom();
	void IsPanicked();
	void FellOutOfWorld();
	void GetCollisionExtent();
};


// Class GameFramework.GameCrowdAgentSkeletal
// 0x00B4 (0x05A8 - 0x04F4)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x04F4(0x0008) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	class UAnimNodeBlend*                              SpeedBlendNode;                                           // 0x04FC(0x0008)
	class UAnimNodeSlot*                               FullBodySlot;                                             // 0x0504(0x0008)
	class UAnimNodeSequence*                           ActionSeqNode;                                            // 0x050C(0x0008)
	class UAnimNodeSequence*                           WalkSeqNode;                                              // 0x0514(0x0008)
	class UAnimNodeSequence*                           RunSeqNode;                                               // 0x051C(0x0008)
	class UAnimTree*                                   AgentTree;                                                // 0x0524(0x0008)
	TArray<struct FName>                               WalkAnimNames;                                            // 0x052C(0x0010) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               RunAnimNames;                                             // 0x053C(0x0010) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               IdleAnimNames;                                            // 0x054C(0x0010) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               DeathAnimNames;                                           // 0x055C(0x0010) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	float                                              SpeedBlendStart;                                          // 0x056C(0x0004) (RepNotify, Interp, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              SpeedBlendEnd;                                            // 0x0570(0x0004) (RepNotify, Interp, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              AnimVelRate;                                              // 0x0574(0x0004) (RepNotify, Interp, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              MaxSpeedBlendChangeSpeed;                                 // 0x0578(0x0004) (RepNotify, Interp, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	struct FName                                       MoveSyncGroupName;                                        // 0x057C(0x0008) (RepNotify, Interp, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	TArray<struct FGameCrowdAttachmentList>            Attachments;                                              // 0x0584(0x0010) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              MaxTargetAcquireTime;                                     // 0x0594(0x0004) (RepNotify, Interp, EditorOnly, PrivateWrite, ArchetypeProperty, CrossLevelActive)
	unsigned long                                      bUseRootMotionVelocity : 1;                               // 0x0598(0x0004) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAllowSkeletonUpdateChangeBasedOnTickResult : 1;          // 0x0598(0x0004) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bTickWhenNotVisible : 1;                                  // 0x0598(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	unsigned long                                      bIsPlayingIdleAnimation : 1;                              // 0x0598(0x0004)
	unsigned long                                      bIsPlayingDeathAnimation : 1;                             // 0x0598(0x0004)
	unsigned long                                      bIsPlayingImportantAnimation : 1;                         // 0x0598(0x0004)
	unsigned long                                      bAnimateThisTick : 1;                                     // 0x0598(0x0004)
	float                                              NotVisibleDisableTickTime;                                // 0x059C(0x0004) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, ArchetypeProperty)
	float                                              MaxAnimationDistance;                                     // 0x05A0(0x0004) (Interp, EditorOnly, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              MaxAnimationDistanceSq;                                   // 0x05A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentSkeletal");
		return ptr;
	}


	void CreateAttachments();
	void OnAnimEnd();
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void ClearLatentAnimation();
	void OnPlayAgentAnimation();
	void SetRootMotion();
	void PlayDeath();
	void SetLighting();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdAgentSM
// 0x0010 (0x0504 - 0x04F4)
class AGameCrowdAgentSM : public AGameCrowdAgent
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x04F4(0x0008) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	class UMaterialInstanceConstant*                   MeshColor;                                                // 0x04FC(0x0008) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentSM");
		return ptr;
	}


	void StopBehavior();
	void ActivateBehavior();
	void ChangeDebugColor();
	void InitDebugColor();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdAgentBehavior
// 0x003C (0x0094 - 0x0058)
class UGameCrowdAgentBehavior : public UObject
{
public:
	TEnumAsByte<ECrowdBehaviorEvent>                   MyEventType;                                              // 0x0058(0x0001)
	TEnumAsByte<ECrowdBehaviorEvent>                   ViralBehaviorEvent;                                       // 0x0059(0x0001) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              DurationOfBehavior;                                       // 0x005C(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              TimeUntilStopBehavior;                                    // 0x0060(0x0004)
	unsigned long                                      bIdleBehavior : 1;                                        // 0x0064(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFaceActionTargetFirst : 1;                               // 0x0064(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIsViralBehavior : 1;                                     // 0x0064(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bPassOnIsViralBehaviorFlag : 1;                           // 0x0064(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AActor*                                      ActionTarget;                                             // 0x0068(0x0008)
	float                                              MaxPlayerDistance;                                        // 0x0070(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ViralRadius;                                              // 0x0074(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DurationBeforeBecomesViral;                               // 0x0078(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              TimeToBecomeViral;                                        // 0x007C(0x0004)
	float                                              DurationOfViralBehaviorPropagation;                       // 0x0080(0x0004) (RepNotify, Interp, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              TimeToStopPropagatingViralBehavior;                       // 0x0084(0x0004)
	class AGameCrowdAgent*                             MyAgent;                                                  // 0x0088(0x0008)
	struct FColor                                      DebugBehaviorColor;                                       // 0x0090(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentBehavior");
		return ptr;
	}


	void AllowBehaviorAt();
	void AllowThisDestination();
	void PropagateViralBehaviorTo();
	void GetBehaviorInstigator();
	void ActivatedBy();
	void GetDestinationActor();
	void ChangingDestination();
	void GetBehaviorString();
	void OnAnimEnd();
	void StopBehavior();
	void InitBehavior();
	void HandleMovement();
	void FinishedTargetRotation();
	void CanBeUsedBy();
	void Tick();
	void ShouldEndIdle();
	void STATIC_TriggerCrowdBehavior();
};


// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x0038 (0x00CC - 0x0094)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	TArray<struct FName>                               AnimationList;                                            // 0x0094(0x0010) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlendInTime;                                              // 0x00A4(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlendOutTime;                                             // 0x00A8(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x00AC(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bLookAtPlayer : 1;                                        // 0x00AC(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bLooping : 1;                                             // 0x00AC(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bBlendBetweenAnims : 1;                                   // 0x00AC(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AActor*                                      CustomActionTarget;                                       // 0x00B0(0x0008)
	int                                                LoopIndex;                                                // 0x00B8(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              LoopTime;                                                 // 0x00BC(0x0004) (RepNotify, NonTransactional, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                             // 0x00C0(0x0008)
	int                                                AnimationIndex;                                           // 0x00C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_PlayAnimation");
		return ptr;
	}


	void GetBehaviorString();
	void StopBehavior();
	void PlayAgentAnimationNow();
	void OnAnimEnd();
	void SetSequenceOutput();
	void FinishedTargetRotation();
	void InitBehavior();
};


// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x0008 (0x009C - 0x0094)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                               // 0x0094(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_RunFromPanic");
		return ptr;
	}


	void GetBehaviorString();
	void AllowBehaviorAt();
	void AllowThisDestination();
	void GetBehaviorInstigator();
	void StopBehavior();
	void InitBehavior();
	void ActivatedBy();
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
	void ShouldEndIdle();
	void GetBehaviorString();
	void InitBehavior();
};


// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x000C (0x00A0 - 0x0094)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned long                                      bStoppingBehavior : 1;                                    // 0x0094(0x0004)
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                            // 0x0098(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitInQueue");
		return ptr;
	}


	void StopBehavior();
	void ShouldEndIdle();
	void GetBehaviorString();
	void GetDestinationActor();
	void ChangingDestination();
	void HandleMovement();
};


// Class GameFramework.GameCrowdGroup
// 0x0010 (0x0068 - 0x0058)
class UGameCrowdGroup : public UObject
{
public:
	TArray<class AGameCrowdAgent*>                     Members;                                                  // 0x0058(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdGroup");
		return ptr;
	}


	void UpdateDestinations();
	void RemoveMember();
	void AddMember();
};


// Class GameFramework.GameCrowdInfoVolume
// 0x0010 (0x02C0 - 0x02B0)
class AGameCrowdInfoVolume : public AVolume
{
public:
	TArray<class AGameCrowdDestination*>               PotentialSpawnPoints;                                     // 0x02B0(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bIsEnabled : 1;                                           // 0x0274(0x0004) (GlobalConfig, AlwaysInit, RepNotify, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0278(0x0008) (RepNotify, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionPoint");
		return ptr;
	}


	void OnToggle();
};


// Class GameFramework.GameCrowdBehaviorPoint
// 0x0018 (0x0298 - 0x0280)
class AGameCrowdBehaviorPoint : public AGameCrowdInteractionPoint
{
public:
	float                                              RadiusOfBehaviorEvent;                                    // 0x0280(0x0004)
	float                                              DurationOfBehaviorEvent;                                  // 0x0284(0x0004)
	TEnumAsByte<ECrowdBehaviorEvent>                   EventType;                                                // 0x0288(0x0001) (RepNotify, Interp, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	unsigned long                                      bRequireLOS : 1;                                          // 0x028C(0x0004) (RepNotify, Interp, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AActor*                                      Initiator;                                                // 0x0290(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehaviorPoint");
		return ptr;
	}


	void Touch();
	void DestroySelf();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdDestination
// 0x00A8 (0x0328 - 0x0280)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;                    // 0x0280(0x0008)
	unsigned long                                      bKillWhenReached : 1;                                     // 0x0288(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAllowAsPreviousDestination : 1;                          // 0x0288(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAvoidWhenPanicked : 1;                                   // 0x0288(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSkipBehaviorIfPanicked : 1;                              // 0x0288(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFleeDestination : 1;                                     // 0x0288(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bMustReachExactly : 1;                                    // 0x0288(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bHasRestrictions : 1;                                     // 0x0288(0x0004)
	unsigned long                                      bAllowsSpawning : 1;                                      // 0x0288(0x0004) (Interp, NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bAllowCloudSpawning : 1;                                  // 0x0288(0x0004) (Interp, NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bAllowVisibleSpawning : 1;                                // 0x0288(0x0004) (Interp, NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bLineSpawner : 1;                                         // 0x0288(0x0004) (Interp, NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bSpawnAtEdge : 1;                                         // 0x0288(0x0004) (Interp, NotForConsole, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bSoftPerimeter : 1;                                       // 0x0288(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIsVisible : 1;                                           // 0x0288(0x0004)
	unsigned long                                      bWillBeVisible : 1;                                       // 0x0288(0x0004)
	unsigned long                                      bCanSpawnHereNow : 1;                                     // 0x0288(0x0004)
	unsigned long                                      bIsBeyondSpawnDistance : 1;                               // 0x0288(0x0004)
	unsigned long                                      bAdjacentToVisibleNode : 1;                               // 0x0288(0x0004)
	unsigned long                                      bHasNavigationMesh : 1;                                   // 0x0288(0x0004)
	TArray<class AGameCrowdDestination*>               NextDestinations;                                         // 0x028C(0x0010) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                                // 0x029C(0x0008) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                Capacity;                                                 // 0x02A4(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              Frequency;                                                // 0x02A8(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                CustomerCount;                                            // 0x02AC(0x0004)
	TArray<class UClass*>                              SupportedAgentClasses;                                    // 0x02B0(0x0010) (EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	TArray<class UObject*>                             SupportedArchetypes;                                      // 0x02C0(0x0010) (EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	TArray<class UClass*>                              RestrictedAgentClasses;                                   // 0x02D0(0x0010) (EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	TArray<class UObject*>                             RestrictedArchetypes;                                     // 0x02E0(0x0010) (EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              ExactReachTolerance;                                      // 0x02F0(0x0004)
	struct FName                                       InteractionTag;                                           // 0x02F4(0x0008) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              InteractionDelay;                                         // 0x02FC(0x0004) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FBehaviorEntry>                      ReachedBehaviors;                                         // 0x0300(0x0010) (Interp, NonTransactional, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AGameCrowdAgent*                             AgentEnRoute;                                             // 0x0310(0x0008)
	float                                              Priority;                                                 // 0x0318(0x0004)
	float                                              LastSpawnTime;                                            // 0x031C(0x0004)
	class AGameCrowdPopulationManager*                 MyPopMgr;                                                 // 0x0320(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestination");
		return ptr;
	}


	void DrawDebug();
	void GetDestinationRadius();
	void PrioritizeSpawnPoint();
	void AnalyzeSpawnPoint();
	void GetSpawnPosition();
	void GetSpawnRadius();
	void AllowableDestinationFor();
	void AtCapacity();
	void IncrementCustomerCount();
	void DecrementCustomerCount();
	void PickNewDestinationFor();
	void ReachedDestination();
	void Destroyed();
	void PostBeginPlay();
	void ReachedByAgent();
};


// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x0030 (0x02B0 - 0x0280)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                                        // 0x0280(0x0008) (EditorOnly, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                                    // 0x0288(0x0008)
	class AGameCrowdAgent*                             QueuedAgent;                                              // 0x0290(0x0008)
	class AGameCrowdDestination*                       QueueDestination;                                         // 0x0298(0x0008)
	unsigned long                                      bClearingQueue : 1;                                       // 0x02A0(0x0004)
	unsigned long                                      bPendingAdvance : 1;                                      // 0x02A0(0x0004)
	float                                              AverageReactionTime;                                      // 0x02A4(0x0004) (EditorOnly, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UClass*                                      QueueBehaviorClass;                                       // 0x02A8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestinationQueuePoint");
		return ptr;
	}


	void HasCustomer();
	void ClearQueue();
	void AddCustomer();
	void ActuallyAdvance();
	void AdvanceCustomerTo();
	void ReachedDestination();
	void HasSpace();
	void QueueReachedBy();
};


// Class GameFramework.GameCrowdPopulationManager
// 0x00FC (0x0370 - 0x0274)
class AGameCrowdPopulationManager : public ACrowdPopulationManagerBase
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;                      // 0x0274(0x0008)
	struct FCrowdSpawnInfoItem                         CloudSpawnInfo;                                           // 0x027C(0x0090)
	TArray<struct FCrowdSpawnInfoItem>                 ScriptedSpawnInfo;                                        // 0x030C(0x0010)
	class AGameCrowdInfoVolume*                        ActiveCrowdInfoVolume;                                    // 0x031C(0x0008)
	TArray<class AGameCrowdDestination*>               GlobalPotentialSpawnPoints;                               // 0x0324(0x0010)
	float                                              SplitScreenNumReduction;                                  // 0x0334(0x0004)
	float                                              PlayerPositionPredictionTime;                             // 0x0338(0x0004)
	float                                              HeadVisibilityOffset;                                     // 0x033C(0x0004)
	class UClass*                                      NavigationHandleClass;                                    // 0x0340(0x0008)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x0348(0x0008)
	class AGameCrowdAgent*                             QueryingAgent;                                            // 0x0350(0x0008)
	TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo;                                               // 0x0358(0x0010)
	float                                              LastPlayerInfoUpdateTime;                                 // 0x0368(0x0004)
	unsigned long                                      bDebugSpawns : 1;                                         // 0x036C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bPauseCrowd : 1;                                          // 0x036C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdPopulationManager");
		return ptr;
	}


	void CreateNewAgent();
	void Warmup();
	void SpawnAgent();
	void SpawnAgentByIdx();
	void ValidateSpawnAt();
	void AddPrioritizedSpawnPoint();
	void AnalyzeSpawnPoints();
	void PrioritizeSpawnPoints();
	void STATIC_StaticGetPlayerInfo();
	void GetPlayerInfo();
	void PickSpawnPoint();
	void UpdateSpawner();
	void UpdateAllSpawners();
	void Tick();
	void ShouldDebugDestinations();
	void IsSpawningActive();
	void DisplayDebug();
	void AgentDestroyed();
	void FlushAllAgents();
	void FlushAgents();
	void CreateSpawner();
	void SetCrowdInfoVolume();
	void RemoveSpawnPoint();
	void AddSpawnPoint();
	void NotifyPathChanged();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdReplicationActor
// 0x0010 (0x0284 - 0x0274)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                                  // 0x0274(0x0008) (GlobalConfig, AlwaysInit)
	unsigned long                                      bSpawningActive : 1;                                      // 0x027C(0x0004) (EditConst, GlobalConfig, AlwaysInit)
	int                                                DestroyAllCount;                                          // 0x0280(0x0004) (EditConst, GlobalConfig, AlwaysInit)

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
	unsigned long                                      bDirectionalExplosion : 1;                                // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIgnoreInstigator : 1;                                    // 0x0058(0x0004)
	unsigned long                                      bAllowTeammateCringes : 1;                                // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFullDamageToAttachee : 1;                                // 0x0058(0x0004)
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;                    // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bPerformRadialBlurRelevanceCheck : 1;                     // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bCausesFracture : 1;                                      // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAllowPerMaterialFX : 1;                                  // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;// 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSkipDefaultPhysMatParticleSystem : 1;                    // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseMapSpecificValues : 1;                                // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseOverlapCheck : 1;                                     // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;                   // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAutoControllerVibration : 1;                             // 0x0058(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DirectionalExplosionAngleDeg;                             // 0x005C(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DamageDelay;                                              // 0x0060(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              Damage;                                                   // 0x0064(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DamageRadius;                                             // 0x0068(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DamageFalloffExponent;                                    // 0x006C(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AActor*                                      ActorToIgnoreForDamage;                                   // 0x0070(0x0008)
	class UClass*                                      ActorClassToIgnoreForDamage;                              // 0x0078(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;                // 0x0080(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UClass*                                      MyDamageType;                                             // 0x0088(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              KnockDownRadius;                                          // 0x0090(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              KnockDownStrength;                                        // 0x0094(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CringeRadius;                                             // 0x0098(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector2D                                   CringeDuration;                                           // 0x009C(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MomentumTransferScale;                                    // 0x00A4(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UParticleSystem*                             ParticleEmitterTemplate;                                  // 0x00A8(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ExplosionEmitterScale;                                    // 0x00B0(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AActor*                                      HitActor;                                                 // 0x00B4(0x0008)
	struct FVector                                     HitLocation;                                              // 0x00BC(0x000C)
	struct FVector                                     HitNormal;                                                // 0x00C8(0x000C)
	class USoundCue*                                   ExplosionSound;                                           // 0x00D4(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class USoundCue*                                   ExplosionSoundHurtSomeone;                                // 0x00DC(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UPointLightComponent*                        ExploLight;                                               // 0x00E4(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ExploLightFadeOutTime;                                    // 0x00EC(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class URadialBlurComponent*                        ExploRadialBlur;                                          // 0x00F0(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ExploRadialBlurFadeOutTime;                               // 0x00F8(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ExploRadialBlurMaxBlur;                                   // 0x00FC(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              FractureMeshRadius;                                       // 0x0100(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              FracturePartVel;                                          // 0x0104(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UCameraShake*                                CamShake;                                                 // 0x0108(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UCameraShake*                                CamShake_Left;                                            // 0x0110(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UCameraShake*                                CamShake_Right;                                           // 0x0118(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UCameraShake*                                CamShake_Rear;                                            // 0x0120(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CamShakeInnerRadius;                                      // 0x0128(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CamShakeOuterRadius;                                      // 0x012C(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CamShakeFalloff;                                          // 0x0130(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UClass*                                      CameraLensEffect;                                         // 0x0134(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              CameraLensEffectRadius;                                   // 0x013C(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bHasExploded : 1;                                         // 0x0274(0x0004)
	unsigned long                                      bExplodeMoreThanOnce : 1;                                 // 0x0274(0x0004) (NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bTrackExplosionParticleSystemLifespan : 1;                // 0x0274(0x0004)
	unsigned long                                      bDrawDebug : 1;                                           // 0x0274(0x0004)
	class UPointLightComponent*                        ExplosionLight;                                           // 0x0278(0x0008)
	class URadialBlurComponent*                        ExplosionRadialBlur;                                      // 0x0280(0x0008)
	float                                              LightFadeTime;                                            // 0x0288(0x0004)
	float                                              LightFadeTimeRemaining;                                   // 0x028C(0x0004)
	float                                              LightInitialBrightness;                                   // 0x0290(0x0004)
	float                                              RadialBlurFadeTime;                                       // 0x0294(0x0004)
	float                                              RadialBlurFadeTimeRemaining;                              // 0x0298(0x0004)
	float                                              RadialBlurMaxBlurAmount;                                  // 0x029C(0x0004)
	class UGameExplosion*                              ExplosionTemplate;                                        // 0x02A0(0x0008)
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                                   // 0x02A8(0x0008)
	class AController*                                 InstigatorController;                                     // 0x02B0(0x0008)
	class AActor*                                      HitActorFromPhysMaterialTrace;                            // 0x02B8(0x0008)
	struct FVector                                     HitLocationFromPhysMaterialTrace;                         // 0x02C0(0x000C)
	class AActor*                                      Attachee;                                                 // 0x02CC(0x0008)
	class AController*                                 AttacheeController;                                       // 0x02D4(0x0008)
	float                                              DirectionalExplosionMinDot;                               // 0x02DC(0x0004)
	struct FVector                                     ExplosionDirection;                                       // 0x02E0(0x000C) (GlobalConfig, AlwaysInit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionActor");
		return ptr;
	}


	void ChooseCameraShake();
	void SpawnCameraLensEffects();
	void DoExplosionCameraEffects();
	void DrawDebug();
	void DelayedExplosionDamage();
	void Explode();
	void SpawnExplosionFogVolume();
	void SpawnExplosionDecal();
	void SpawnExplosionParticleSystem();
	void UpdateExplosionTemplateWithPerMaterialFX();
	void SpecialCringeEffectsFor();
	void SpecialPawnEffectsFor();
	void GetEffectCheckRadius();
	void DoExplosionDamage();
	void STATIC_BoxDistanceToPoint();
	void IsBehindExplosion();
	void DoFullDamageToActor();
	void GetPhysicalMaterial();
	void PreBeginPlay();
};


// Class GameFramework.GamePawn
// 0x0004 (0x058C - 0x0588)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bLastHitWasHeadShot : 1;                                  // 0x0588(0x0004) (EditConst, AlwaysInit, DuplicateTransient)
	unsigned long                                      bRespondToExplosions : 1;                                 // 0x0588(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePawn");
		return ptr;
	}


	void ReattachMeshWithoutBeingSeen();
	void ReattachMesh();
	void UpdateShadowSettings();
};


// Class GameFramework.DebugCameraController
// 0x004C (0x07DC - 0x0790)
class ADebugCameraController : public AGamePlayerController
{
public:
	struct FName                                       PrimaryKey;                                               // 0x0790(0x0008)
	struct FName                                       SecondaryKey;                                             // 0x0798(0x0008)
	struct FName                                       UnselectKey;                                              // 0x07A0(0x0008)
	unsigned long                                      bShowSelectedInfo : 1;                                    // 0x07A8(0x0004)
	unsigned long                                      bDrawDebugText : 1;                                       // 0x07A8(0x0004)
	unsigned long                                      bIsFrozenRendering : 1;                                   // 0x07A8(0x0004)
	class UClass*                                      HUDClass;                                                 // 0x07AC(0x0008)
	class APlayerController*                           OriginalControllerRef;                                    // 0x07B4(0x0008)
	class UPlayer*                                     OriginalPlayer;                                           // 0x07BC(0x0008)
	class UDrawFrustumComponent*                       DrawFrustum;                                              // 0x07C4(0x0008)
	class AActor*                                      SelectedActor;                                            // 0x07CC(0x0008)
	class UPrimitiveComponent*                         SelectedComponent;                                        // 0x07D4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DebugCameraController");
		return ptr;
	}


	void ConsoleCommand();
	void ShowDebugSelectedInfo();
	void NativeInputKey();
	void InitDebugInputSystem();
	void DisableDebugCamera();
	void NormalSpeed();
	void MoreSpeed();
	void SetFreezeRendering();
	void OnDeactivate();
	void OnActivate();
	void PostBeginPlay();
	void Unselect();
	void SecondarySelect();
	void PrimarySelect();
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
	unsigned long                                      bShowGameHud : 1;                                         // 0x0594(0x0004)
	unsigned long                                      bShowMobileHud : 1;                                       // 0x0594(0x0004)
	unsigned long                                      bForceMobileHUD : 1;                                      // 0x0594(0x0004)
	unsigned long                                      bShowMobileTilt : 1;                                      // 0x0594(0x0004)
	unsigned long                                      bDebugTouches : 1;                                        // 0x0594(0x0004)
	unsigned long                                      bDebugZones : 1;                                          // 0x0594(0x0004)
	unsigned long                                      bDebugZonePresses : 1;                                    // 0x0594(0x0004)
	unsigned long                                      bShowMotionDebug : 1;                                     // 0x0594(0x0004)
	class UTexture2D*                                  JoystickBackground;                                       // 0x0598(0x0008)
	struct FTextureUVs                                 JoystickBackgroundUVs;                                    // 0x05A0(0x0010)
	class UTexture2D*                                  JoystickHat;                                              // 0x05B0(0x0008)
	struct FTextureUVs                                 JoystickHatUVs;                                           // 0x05B8(0x0010)
	class UTexture2D*                                  ButtonImages[0x2];                                        // 0x05C8(0x0008)
	struct FTextureUVs                                 ButtonUVs[0x2];                                           // 0x05D8(0x0010)
	class UFont*                                       ButtonFont;                                               // 0x05F8(0x0008)
	struct FColor                                      ButtonCaptionColor;                                       // 0x0600(0x0004)
	class UTexture2D*                                  TrackballBackground;                                      // 0x0604(0x0008)
	struct FTextureUVs                                 TrackballBackgroundUVs;                                   // 0x060C(0x0010)
	class UTexture2D*                                  TrackballTouchIndicator;                                  // 0x061C(0x0008)
	struct FTextureUVs                                 TrackballTouchIndicatorUVs;                               // 0x0624(0x0010)
	class UTexture2D*                                  SliderImages[0x4];                                        // 0x0634(0x0008)
	struct FTextureUVs                                 SliderUVs[0x4];                                           // 0x0654(0x0010)
	float                                              MobileTiltX;                                              // 0x0694(0x0004)
	float                                              MobileTiltY;                                              // 0x0698(0x0004)
	float                                              MobileTiltSize;                                           // 0x069C(0x0004)
	TArray<class USeqEvent_HudRender*>                 KismetRenderEvents;                                       // 0x06A0(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileHUD");
		return ptr;
	}


	void RenderKismetHud();
	void AddKismetRenderEvent();
	void RefreshKismetLinks();
	void DrawMobileZone_Slider();
	void DrawMobileTilt();
	void DrawMobileZone_Trackball();
	void DrawMobileZone_Joystick();
	void DrawMobileZone_Button();
	void DrawInputZoneOverlays();
	void RenderMobileMenu();
	void ShowMobileHud();
	void DrawMobileDebugString();
	void PostRender();
	void PostBeginPlay();
};


// Class GameFramework.MobileInputZone
// 0x0200 (0x0258 - 0x0058)
class UMobileInputZone : public UObject
{
public:
	TEnumAsByte<EZoneType>                             Type;                                                     // 0x0058(0x0001) (RepNotify, NonTransactional, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	unsigned char                                      TouchpadIndex;                                            // 0x0059(0x0001) (RepNotify, NonTransactional, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	TEnumAsByte<EZoneState>                            State;                                                    // 0x005A(0x0001)
	TEnumAsByte<EZoneSlideType>                        SlideType;                                                // 0x005B(0x0001) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	struct FString                                     Caption;                                                  // 0x005C(0x0010) (RepNotify, NonTransactional, RepRetry, ArchetypeProperty, EditHide, EditTextBox, CrossLevelActive)
	struct FName                                       InputKey;                                                 // 0x006C(0x0008) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	struct FName                                       HorizontalInputKey;                                       // 0x0074(0x0008) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	struct FName                                       TapInputKey;                                              // 0x007C(0x0008) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	struct FName                                       DoubleTapInputKey;                                        // 0x0084(0x0008) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              VertMultiplier;                                           // 0x008C(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              HorizMultiplier;                                          // 0x0090(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              Acceleration;                                             // 0x0094(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              Smoothing;                                                // 0x0098(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              EscapeVelocityStrength;                                   // 0x009C(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	unsigned long                                      bScalePawnMovement : 1;                                   // 0x00A0(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	unsigned long                                      bRelativeX : 1;                                           // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bRelativeY : 1;                                           // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bRelativeSizeX : 1;                                       // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bRelativeSizeY : 1;                                       // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bActiveSizeYFromX : 1;                                    // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bSizeYFromSizeX : 1;                                      // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bApplyGlobalScaleToActiveSizes : 1;                       // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bCenterX : 1;                                             // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bCenterY : 1;                                             // 0x00A0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bIsInvisible : 1;                                         // 0x00A0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bQuickDoubleTap : 1;                                      // 0x00A0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bCenterOnEvent : 1;                                       // 0x00A0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bSliderHasTrack : 1;                                      // 0x00A0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bFloatingTiltZone : 1;                                    // 0x00A0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bUseGentleTransitions : 1;                                // 0x00A0(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	unsigned long                                      bAllowFirstDeltaForTrackballZone : 1;                     // 0x00A0(0x0004) (RepNotify, Interp, EditorOnly, NotForConsole, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bRenderGuides : 1;                                        // 0x00A0(0x0004) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIsDoubleTapAndHold : 1;                                  // 0x00A0(0x0004)
	float                                              X;                                                        // 0x00A4(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              Y;                                                        // 0x00A8(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              SizeX;                                                    // 0x00AC(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              SizeY;                                                    // 0x00B0(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              ActiveSizeX;                                              // 0x00B4(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              ActiveSizeY;                                              // 0x00B8(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              InitialX;                                                 // 0x00BC(0x0004)
	float                                              InitialY;                                                 // 0x00C0(0x0004)
	float                                              InitialSizeX;                                             // 0x00C4(0x0004)
	float                                              InitialSizeY;                                             // 0x00C8(0x0004)
	float                                              InitialActiveSizeX;                                       // 0x00CC(0x0004)
	float                                              InitialActiveSizeY;                                       // 0x00D0(0x0004)
	float                                              AuthoredGlobalScale;                                      // 0x00D4(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              Border;                                                   // 0x00D8(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              ResetCenterAfterInactivityTime;                           // 0x00DC(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              TapDistanceConstraint;                                    // 0x00E0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              ActivateTime;                                             // 0x00E4(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              DeactivateTime;                                           // 0x00E8(0x0004) (RepNotify, Interp, NonTransactional, PrivateWrite, ProtectedWrite, EditHide, EditTextBox, CrossLevelActive)
	struct FColor                                      RenderColor;                                              // 0x00EC(0x0004) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              InactiveAlpha;                                            // 0x00F0(0x0004) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CaptionXAdjustment;                                       // 0x00F4(0x0004) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              CaptionYAdjustment;                                       // 0x00F8(0x0004) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	class UTexture2D*                                  OverrideTexture1;                                         // 0x00FC(0x0008) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FString                                     OverrideTexture1Name;                                     // 0x0104(0x0010)
	struct FTextureUVs                                 OverrideUVs1;                                             // 0x0114(0x0010) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	class UTexture2D*                                  OverrideTexture2;                                         // 0x0124(0x0008) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FString                                     OverrideTexture2Name;                                     // 0x012C(0x0010)
	struct FTextureUVs                                 OverrideUVs2;                                             // 0x013C(0x0010) (Interp, NonTransactional, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FVector2D                                   InitialLocation;                                          // 0x014C(0x0008)
	struct FVector2D                                   CurrentLocation;                                          // 0x0154(0x0008)
	struct FVector2D                                   CurrentCenter;                                            // 0x015C(0x0008)
	struct FVector2D                                   InitialCenter;                                            // 0x0164(0x0008)
	struct FVector2D                                   PreviousLocations[0x6];                                   // 0x016C(0x0008)
	float                                              PreviousMoveDeltaTimes[0x6];                              // 0x019C(0x0004)
	int                                                PreviousLocationCount;                                    // 0x01B4(0x0004)
	float                                              LastTouchTime;                                            // 0x01B8(0x0004)
	float                                              TimeSinceLastTapRepeat;                                   // 0x01BC(0x0004)
	float                                              AnimatingFadeOpacity;                                     // 0x01C0(0x0004)
	class UMobilePlayerInput*                          InputOwner;                                               // 0x01C4(0x0008)
	float                                              TransitionTime;                                           // 0x01CC(0x0004)
	struct FVector2D                                   EscapeVelocity;                                           // 0x01D0(0x0008)
	TArray<class USeqEvent_MobileZoneBase*>            MobileSeqEventHandlers;                                   // 0x01D8(0x0010)
	struct FVector2D                                   LastAxisValues;                                           // 0x01E8(0x0008)
	float                                              TotalActiveTime;                                          // 0x01F0(0x0004)
	float                                              LastWentActiveTime;                                       // 0x01F4(0x0004)
	struct FScriptDelegate                             __OnProcessInputDelegate__Delegate;                       // 0x01F8(0x0010)
	struct FScriptDelegate                             __OnTapDelegate__Delegate;                                // 0x0208(0x0010)
	struct FScriptDelegate                             __OnDoubleTapDelegate__Delegate;                          // 0x0218(0x0010)
	struct FScriptDelegate                             __OnProcessSlide__Delegate;                               // 0x0228(0x0010)
	struct FScriptDelegate                             __OnPreDrawZone__Delegate;                                // 0x0238(0x0010)
	struct FScriptDelegate                             __OnPostDrawZone__Delegate;                               // 0x0248(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileInputZone");
		return ptr;
	}


	void AddKismetEventHandler();
	void OnPostDrawZone();
	void OnPreDrawZone();
	void OnProcessSlide();
	void OnDoubleTapDelegate();
	void OnTapDelegate();
	void OnProcessInputDelegate();
	void DeactivateZone();
	void ActivateZone();
};


// Class GameFramework.MobileMenuObject
// 0x007C (0x00D4 - 0x0058)
class UMobileMenuObject : public UObject
{
public:
	unsigned long                                      bHasBeenInitialized : 1;                                  // 0x0058(0x0004)
	unsigned long                                      bRelativeLeft : 1;                                        // 0x0058(0x0004)
	unsigned long                                      bRelativeTop : 1;                                         // 0x0058(0x0004)
	unsigned long                                      bRelativeWidth : 1;                                       // 0x0058(0x0004)
	unsigned long                                      bRelativeHeight : 1;                                      // 0x0058(0x0004)
	unsigned long                                      bApplyGlobalScaleLeft : 1;                                // 0x0058(0x0004)
	unsigned long                                      bApplyGlobalScaleTop : 1;                                 // 0x0058(0x0004)
	unsigned long                                      bApplyGlobalScaleWidth : 1;                               // 0x0058(0x0004)
	unsigned long                                      bApplyGlobalScaleHeight : 1;                              // 0x0058(0x0004)
	unsigned long                                      bHeightRelativeToWidth : 1;                               // 0x0058(0x0004)
	unsigned long                                      bXOffsetIsActual : 1;                                     // 0x0058(0x0004)
	unsigned long                                      bYOffsetIsActual : 1;                                     // 0x0058(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x0058(0x0004)
	unsigned long                                      bIsHidden : 1;                                            // 0x0058(0x0004)
	unsigned long                                      bIsTouched : 1;                                           // 0x0058(0x0004)
	unsigned long                                      bIsHighlighted : 1;                                       // 0x0058(0x0004)
	unsigned long                                      bTellSceneBeforeRendering : 1;                            // 0x0058(0x0004)
	float                                              Left;                                                     // 0x005C(0x0004)
	float                                              Top;                                                      // 0x0060(0x0004)
	float                                              Width;                                                    // 0x0064(0x0004)
	float                                              Height;                                                   // 0x0068(0x0004)
	float                                              InitialLeft;                                              // 0x006C(0x0004)
	float                                              InitialTop;                                               // 0x0070(0x0004)
	float                                              InitialWidth;                                             // 0x0074(0x0004)
	float                                              InitialHeight;                                            // 0x0078(0x0004)
	float                                              AuthoredGlobalScale;                                      // 0x007C(0x0004) (Interp, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	float                                              TopLeeway;                                                // 0x0080(0x0004)
	float                                              BottomLeeway;                                             // 0x0084(0x0004)
	float                                              LeftLeeway;                                               // 0x0088(0x0004)
	float                                              RightLeeway;                                              // 0x008C(0x0004)
	float                                              XOffset;                                                  // 0x0090(0x0004)
	float                                              YOffset;                                                  // 0x0094(0x0004)
	struct FString                                     Tag;                                                      // 0x0098(0x0010)
	class UMobilePlayerInput*                          InputOwner;                                               // 0x00A8(0x0008)
	float                                              Opacity;                                                  // 0x00B0(0x0004)
	class UMobileMenuScene*                            OwnerScene;                                               // 0x00B4(0x0008)
	struct FString                                     RelativeToTag;                                            // 0x00BC(0x0010)
	class UMobileMenuObject*                           RelativeTo;                                               // 0x00CC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuObject");
		return ptr;
	}


	void GetIconIndexes();
	void RenderObject();
	void SetCanvasPos();
	void InitMenuObject();
	void GetRealPosition();
	void OnTouch();
};


// Class GameFramework.MobileMenuImage
// 0x0030 (0x0104 - 0x00D4)
class UMobileMenuImage : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Image;                                                    // 0x00D4(0x0008)
	TEnumAsByte<EMenuImageDrawStyle>                   ImageDrawStyle;                                           // 0x00DC(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	struct FUVCoords                                   ImageUVs;                                                 // 0x00E0(0x0014)
	struct FLinearColor                                ImageColor;                                               // 0x00F4(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuImage");
		return ptr;
	}


	void RenderObject();
};


// Class GameFramework.MobileMenuScene
// 0x0070 (0x00C8 - 0x0058)
class UMobileMenuScene : public UObject
{
public:
	struct FString                                     MenuName;                                                 // 0x0058(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide)
	TArray<class UMobileMenuObject*>                   MenuObjects;                                              // 0x0068(0x0010) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide)
	class UFont*                                       SceneCaptionFont;                                         // 0x0078(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide)
	class UMobilePlayerInput*                          InputOwner;                                               // 0x0080(0x0008) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bSceneDoesNotRequireInput : 1;                            // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bRelativeLeft : 1;                                        // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bRelativeTop : 1;                                         // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bRelativeWidth : 1;                                       // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bRelativeHeight : 1;                                      // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bApplyGlobalScaleLeft : 1;                                // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bApplyGlobalScaleTop : 1;                                 // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bApplyGlobalScaleWidth : 1;                               // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned long                                      bApplyGlobalScaleHeight : 1;                              // 0x0088(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	unsigned char                                      TouchpadIndex;                                            // 0x008C(0x0001) (RepNotify, Interp, NonTransactional, EditorOnly, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              Left;                                                     // 0x0090(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              Top;                                                      // 0x0094(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              Width;                                                    // 0x0098(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              Height;                                                   // 0x009C(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              InitialLeft;                                              // 0x00A0(0x0004)
	float                                              InitialTop;                                               // 0x00A4(0x0004)
	float                                              InitialWidth;                                             // 0x00A8(0x0004)
	float                                              InitialHeight;                                            // 0x00AC(0x0004)
	float                                              AuthoredGlobalScale;                                      // 0x00B0(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	float                                              Opacity;                                                  // 0x00B4(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, ProtectedWrite, EditTextBox, CrossLevelPassive)
	class USoundCue*                                   UITouchSound;                                             // 0x00B8(0x0008) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	class USoundCue*                                   UIUnTouchSound;                                           // 0x00C0(0x0008) (RepNotify, Interp, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuScene");
		return ptr;
	}


	void MobileMenuCommand();
	void FindMenuObject();
	void CleanUpScene();
	void Closed();
	void Closing();
	void MadeTopMenu();
	void Opened();
	void OnSceneTouch();
	void OnTouch();
	void PostRenderMenuObject();
	void PreRenderMenuObject();
	void RenderScene();
	void GetSceneFont();
	void InitMenuScene();
	void STATIC_GetGlobalScaleY();
	void STATIC_GetGlobalScaleX();
};


// Class GameFramework.MobilePlayerInput
// 0x0294 (0x054C - 0x02B8)
class UMobilePlayerInput : public UPlayerInput
{
public:
	struct FTouchData                                  Touches[0x5];                                             // 0x02B8(0x0050) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	class UMobileMenuObject*                           InteractiveObject;                                        // 0x0448(0x0008)
	struct FDouble                                     InteractiveObjectLastTime;                                // 0x0450(0x0008)
	TArray<struct FMobileInputGroup>                   MobileInputGroups;                                        // 0x0458(0x0010) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	int                                                CurrentMobileGroup;                                       // 0x0468(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	TArray<class UMobileInputZone*>                    MobileInputZones;                                         // 0x046C(0x0010) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	TArray<struct FMobileInputZoneClassMap>            MobileInputZoneClasses;                                   // 0x047C(0x0010)
	float                                              MobilePitch;                                              // 0x048C(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobilePitchCenter;                                        // 0x0490(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobilePitchMultiplier;                                    // 0x0494(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobileYaw;                                                // 0x0498(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobileYawCenter;                                          // 0x049C(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobileYawMultiplier;                                      // 0x04A0(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobilePitchDeadzoneSize;                                  // 0x04A4(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobileYawDeadzoneSize;                                    // 0x04A8(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobileDoubleTapTime;                                      // 0x04AC(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobileMinHoldForTap;                                      // 0x04B0(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	float                                              MobileTapRepeatTime;                                      // 0x04B4(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	unsigned long                                      bAllowTouchesInCinematic : 1;                             // 0x04B8(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	unsigned long                                      bDisableTouchInput : 1;                                   // 0x04B8(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	unsigned long                                      bAbsoluteTouchLocations : 1;                              // 0x04B8(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	unsigned long                                      bCollapseTouchInput : 1;                                  // 0x04B8(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	unsigned long                                      bFakeMobileTouches : 1;                                   // 0x04B8(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bDisableSceneRender : 1;                                  // 0x04B8(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	float                                              ZoneTimeout;                                              // 0x04BC(0x0004) (RepNotify, EditorOnly, ProtectedWrite, EditHide)
	TArray<class UMobileMenuScene*>                    MobileMenuStack;                                          // 0x04C0(0x0010) (Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelActive)
	class UMobileMenuScene*                            CurrentRenderMenu;                                        // 0x04D0(0x0008) (Interp, EditorOnly, RepRetry, ProtectedWrite, EditTextBox, CrossLevelActive)
	struct FString                                     NativeDebugString;                                        // 0x04D8(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	float                                              MobileInactiveTime;                                       // 0x04E8(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive)
	TArray<class USeqEvent_MobileBase*>                MobileSeqEventHandlers;                                   // 0x04EC(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive)
	TArray<class USeqEvent_MobileRawInput*>            MobileRawInputSeqEventHandlers;                           // 0x04FC(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, EditHide, EditTextBox, CrossLevelPassive)
	struct FVector2D                                   MobileViewportOffset;                                     // 0x050C(0x0008)
	struct FVector2D                                   MobileViewportSize;                                       // 0x0514(0x0008)
	struct FScriptDelegate                             __OnTouchNotHandledInMenu__Delegate;                      // 0x051C(0x0010)
	struct FScriptDelegate                             __OnPreviewTouch__Delegate;                               // 0x052C(0x0010)
	struct FScriptDelegate                             __OnInputTouch__Delegate;                                 // 0x053C(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobilePlayerInput");
		return ptr;
	}


	void OpenMobileMenuMode();
	void OpenMobileMenu();
	void MobileMenuCommand();
	void SceneRenderToggle();
	void PreClientTravel();
	void RenderMenus();
	void CloseAllMenus();
	void CloseMenuScene();
	void OpenMenuScene();
	void SetMobileInputConfig();
	void ActivateInputGroup();
	void GetCurrentZones();
	void HasZones();
	void FindorAddZone();
	void FindZone();
	void AddKismetRawInputEventHandler();
	void AddKismetEventHandler();
	void RefreshKismetLinks();
	void SwapZoneOwners();
	void InitializeInputZones();
	void InitTouchSystem();
	void ClientInitInputSystem();
	void InitInputSystem();
	void ProcessWorldTouch();
	void SendInputAxis();
	void SendInputKey();
	void ConditionalUpdateInputZones();
	void NativeInitializeInputZones();
	void NativeInitializeInputSystem();
	void OnInputTouch();
	void OnPreviewTouch();
	void OnTouchNotHandledInMenu();
	void PlayerInput();
	void CancelMobileInput();
	void ProcessMobileInput();
};


// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0018 (0x008C - 0x0074)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                                 // 0x0074(0x0008)
	struct FVector                                     OutOfViewLocation;                                        // 0x007C(0x000C)
	unsigned long                                      bShowDebug : 1;                                           // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshGoal_OutOfViewFrom");
		return ptr;
	}


	void Recycle();
	void STATIC_MustBeHiddenFromThisPoint();
	void RecycleNative();
};


// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x002C (0x009C - 0x0070)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                                 // 0x0070(0x000C)
	struct FVector                                     Rotation;                                                 // 0x007C(0x000C)
	float                                              DistanceToCheck;                                          // 0x0088(0x0004)
	TArray<struct FVector>                             LocationsToCheck;                                         // 0x008C(0x0010)

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
	struct FString                                     MovieName;                                                // 0x0170(0x0010) (NonTransactional, CrossLevelActive)
	int                                                StartOfRenderingMovieFrame;                               // 0x0180(0x0004) (NonTransactional, CrossLevelActive)
	int                                                EndOfRenderingMovieFrame;                                 // 0x0184(0x0004) (NonTransactional, CrossLevelActive)

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
	float                                              ScreenX;                                                  // 0x0158(0x0004) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              ScreenY;                                                  // 0x015C(0x0004) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              TraceDistance;                                            // 0x0160(0x0004) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UObject*                                     HitObject;                                                // 0x0164(0x0008)
	struct FVector                                     HitLocation;                                              // 0x016C(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0178(0x000C)

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
	float                                              WarmupPopulationPct;                                      // 0x0158(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                           // 0x015C(0x0008) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bClearOldArchetypes : 1;                                  // 0x0164(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x0164(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bCastShadows : 1;                                         // 0x0164(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFillPotentialSpawnPoints : 1;                            // 0x0164(0x0004)
	unsigned long                                      bForceObstacleChecking : 1;                               // 0x0164(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bForceNavMeshPathing : 1;                                 // 0x0164(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIndividualSpawner : 1;                                   // 0x0164(0x0004)
	int                                                MaxAgents;                                                // 0x0168(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              SpawnRate;                                                // 0x016C(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // 0x0170(0x0004)
	float                                              MaxSpawnDist;                                             // 0x0174(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              MinBehindSpawnDist;                                       // 0x0178(0x0004)
	TArray<class AGameCrowdDestination*>               PotentialSpawnPoints;                                     // 0x017C(0x0010)
	float                                              AgentWarmupTime;                                          // 0x018C(0x0004)
	int                                                NumAgentsToTickPerFrame;                                  // 0x0190(0x0004) (NonTransactional, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<class AGameCrowdAgent*>                     LastSpawnedList;                                          // 0x0194(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle");
		return ptr;
	}


	void AgentDestroyed();
	void GetMaxSpawnDist();
	void FillCrowdSpawnInfoItem();
	void STATIC_GetObjClassVersion();
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


	void STATIC_GetObjClassVersion();
};


// Class GameFramework.SeqAct_MobileAddInputZones
// 0x0010 (0x0168 - 0x0158)
class USeqAct_MobileAddInputZones : public USequenceAction
{
public:
	struct FName                                       ZoneName;                                                 // 0x0158(0x0008) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UMobileInputZone*                            NewZone;                                                  // 0x0160(0x0008) (EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	struct FString                                     ZoneName;                                                 // 0x0158(0x0010) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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


	void STATIC_GetObjClassVersion();
};


// Class GameFramework.SeqAct_ModifyProperty
// 0x0010 (0x0168 - 0x0158)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray<struct FPropertyInfo>                       Properties;                                               // 0x0158(0x0010) (RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	TArray<struct FName>                               AnimationList;                                            // 0x0170(0x0010) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlendInTime;                                              // 0x0180(0x0004) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlendOutTime;                                             // 0x0184(0x0004) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x0188(0x0004) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFaceActionTargetFirst : 1;                               // 0x0188(0x0004) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bLooping : 1;                                             // 0x0188(0x0004) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bBlendBetweenAnims : 1;                                   // 0x0188(0x0004) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                LoopIndex;                                                // 0x018C(0x0004) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              LoopTime;                                                 // 0x0190(0x0004) (Interp, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class AActor*                                      ActionTarget;                                             // 0x0194(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_PlayAgentAnimation");
		return ptr;
	}


	void SetCurrentAnimationActionFor();
	void STATIC_GetObjClassVersion();
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
	TArray<class UObject*>                             Targets;                                                  // 0x0168(0x0010) (Interp, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bIsActive : 1;                                            // 0x0178(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              AuthoredGlobalScale;                                      // 0x017C(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)

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
	float                                              Roll;                                                     // 0x0168(0x0004)
	float                                              Pitch;                                                    // 0x016C(0x0004)
	float                                              Yaw;                                                      // 0x0170(0x0004)
	float                                              DeltaRoll;                                                // 0x0174(0x0004)
	float                                              DeltaPitch;                                               // 0x0178(0x0004)
	float                                              DeltaYaw;                                                 // 0x017C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileMotion");
		return ptr;
	}


	void STATIC_GetObjClassVersion();
};


// Class GameFramework.SeqEvent_MobileZoneBase
// 0x0010 (0x0178 - 0x0168)
class USeqEvent_MobileZoneBase : public USeqEvent_MobileBase
{
public:
	struct FString                                     TargetZoneName;                                           // 0x0168(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	unsigned long                                      bWasActiveLastFrame : 1;                                  // 0x0178(0x0004)
	unsigned long                                      bSendPressedOnlyOnTouchDown : 1;                          // 0x0178(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSendPressedOnlyOnTouchUp : 1;                            // 0x0178(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              XAxisValue;                                               // 0x0178(0x0004)
	float                                              YAxisValue;                                               // 0x017C(0x0004)
	float                                              CenterX;                                                  // 0x0180(0x0004)
	float                                              CenterY;                                                  // 0x0184(0x0004)
	float                                              CurrentX;                                                 // 0x0188(0x0004)
	float                                              CurrentY;                                                 // 0x018C(0x0004)

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
	float                                              Yaw;                                                      // 0x0178(0x0004)
	float                                              StickStrength;                                            // 0x017C(0x0004)
	struct FVector                                     RotationVector;                                           // 0x0180(0x000C)

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
	int                                                TouchIndex;                                               // 0x0168(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)
	int                                                TouchpadIndex;                                            // 0x016C(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)
	float                                              TouchLocationX;                                           // 0x0170(0x0004)
	float                                              TouchLocationY;                                           // 0x0174(0x0004)
	float                                              TimeStamp;                                                // 0x0178(0x0004)

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
	float                                              TraceDistance;                                            // 0x017C(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)
	unsigned long                                      bCheckonTouch : 1;                                        // 0x0180(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)
	struct FVector                                     FinalTouchLocation;                                       // 0x0184(0x000C)
	struct FVector                                     FinalTouchNormal;                                         // 0x0190(0x000C)
	class UObject*                                     FinalTouchObject;                                         // 0x019C(0x0008)
	TArray<class UObject*>                             Targets;                                                  // 0x01A4(0x0010) (Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	float                                              Tolerance;                                                // 0x017C(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	float                                              MinDistance;                                              // 0x0180(0x0004) (RepNotify, Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, EditHide, EditTextBox, CrossLevelActive)
	struct FVector2D                                   InitialTouch;                                             // 0x0184(0x0008)
	TArray<class AActor*>                              TouchedActors;                                            // 0x018C(0x0010) (RepNotify, Interp, EditorOnly, ProtectedWrite, EditHide, CrossLevelActive)
	float                                              TraceDistance;                                            // 0x019C(0x0004) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, ProtectedWrite, EditTextBox)

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
	unsigned long                                      bBoneSpaceRecoil : 1;                                     // 0x00EC(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bPlayRecoil : 1;                                          // 0x00EC(0x0004) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bOldPlayRecoil : 1;                                       // 0x00EC(0x0004)
	unsigned long                                      bApplyControl : 1;                                        // 0x00EC(0x0004)
	struct FRecoilDef                                  Recoil;                                                   // 0x00F0(0x0070) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector2D                                   Aim;                                                      // 0x0160(0x0008) (Interp, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)

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
	class AGamePlayerCamera*                           PlayerCamera;                                             // 0x0058(0x0008)
	unsigned long                                      bResetCameraInterpolation : 1;                            // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCameraBase");
		return ptr;
	}


	void ModifyPostProcessSettings();
	void Init();
	void DisplayDebug();
	void ProcessViewRotation();
	void UpdateCamera();
	void ResetInterpolation();
	void OnBecomeInActive();
	void OnBecomeActive();
};


// Class GameFramework.GameThirdPersonCamera
// 0x0168 (0x01CC - 0x0064)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	float                                              WorstLocBlockedPct;                                       // 0x0064(0x0004)
	float                                              WorstLocPenetrationExtentScale;                           // 0x0068(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              PenetrationBlendOutTime;                                  // 0x006C(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              PenetrationBlendInTime;                                   // 0x0070(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              PenetrationBlockedPct;                                    // 0x0074(0x0004)
	float                                              PenetrationExtentScale;                                   // 0x0078(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     LastActualOriginOffset;                                   // 0x007C(0x000C)
	struct FVector                                     LastActualCameraOrigin;                                   // 0x0088(0x000C)
	struct FRotator                                    LastActualCameraOriginRot;                                // 0x0094(0x000C)
	float                                              OriginOffsetInterpSpeed;                                  // 0x00A0(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     LastViewOffset;                                           // 0x00A4(0x000C)
	float                                              LastCamFOV;                                               // 0x00B0(0x0004)
	struct FVector                                     LastIdealCameraOrigin;                                    // 0x00B4(0x000C)
	struct FRotator                                    LastIdealCameraOriginRot;                                 // 0x00C0(0x000C)
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                                    // 0x00CC(0x0008) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UClass*                                      ThirdPersonCamDefaultClass;                               // 0x00D4(0x0008) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                           // 0x00DC(0x0008) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              LastHeightAdjustment;                                     // 0x00E4(0x0004)
	float                                              LastPitchAdjustment;                                      // 0x00E8(0x0004)
	float                                              LastYawAdjustment;                                        // 0x00EC(0x0004)
	float                                              LeftoverPitchAdjustment;                                  // 0x00F0(0x0004)
	float                                              Focus_BackOffStrength;                                    // 0x00F4(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, CrossLevelActive)
	float                                              Focus_StepHeightAdjustment;                               // 0x00F8(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, CrossLevelActive)
	int                                                Focus_MaxTries;                                           // 0x00FC(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, CrossLevelActive)
	float                                              Focus_FastAdjustKickInTime;                               // 0x0100(0x0004) (Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, CrossLevelActive)
	float                                              LastFocusChangeTime;                                      // 0x0104(0x0004)
	struct FVector                                     ActualFocusPointWorldLoc;                                 // 0x0108(0x000C)
	struct FVector                                     LastFocusPointLoc;                                        // 0x0114(0x000C)
	struct FCamFocusPointParams                        FocusPoint;                                               // 0x0120(0x0038) (Interp, NonTransactional, EditorOnly, RepRetry, ProtectedWrite, ArchetypeProperty, CrossLevelActive)
	unsigned long                                      bFocusPointSet : 1;                                       // 0x0158(0x0004)
	unsigned long                                      bFocusPointSuccessful : 1;                                // 0x0158(0x0004)
	unsigned long                                      bDoingACameraTurn : 1;                                    // 0x0158(0x0004)
	unsigned long                                      bTurnAlignTargetWhenFinished : 1;                         // 0x0158(0x0004)
	unsigned long                                      bDrawDebug : 1;                                           // 0x0158(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDoingDirectLook : 1;                                     // 0x0158(0x0004)
	unsigned long                                      bDebugChangedCameraMode : 1;                              // 0x0158(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide)
	unsigned long                                      bDoSeamlessPivotTransition : 1;                           // 0x0158(0x0004)
	float                                              TurnCurTime;                                              // 0x015C(0x0004)
	int                                                TurnStartAngle;                                           // 0x0160(0x0004)
	int                                                TurnEndAngle;                                             // 0x0164(0x0004)
	float                                              TurnTotalTime;                                            // 0x0168(0x0004)
	float                                              TurnDelay;                                                // 0x016C(0x0004)
	int                                                LastPostCamTurnYaw;                                       // 0x0170(0x0004)
	int                                                DirectLookYaw;                                            // 0x0174(0x0004)
	float                                              DirectLookInterpSpeed;                                    // 0x0178(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              WorstLocInterpSpeed;                                      // 0x017C(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     LastWorstLocationLocal;                                   // 0x0180(0x000C)
	struct FVector                                     LastWorstLocation;                                        // 0x018C(0x000C)
	struct FVector                                     LastPreModifierCameraLoc;                                 // 0x0198(0x000C)
	struct FRotator                                    LastPreModifierCameraRot;                                 // 0x01A4(0x000C)
	TArray<struct FPenetrationAvoidanceFeeler>         PenetrationAvoidanceFeelers;                              // 0x01B0(0x0010) (Interp, NonTransactional, EditorOnly, NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     LastOffsetAdjustment;                                     // 0x01C0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCamera");
		return ptr;
	}


	void ResetInterpolation();
	void ModifyPostProcessSettings();
	void OnBecomeActive();
	void ProcessViewRotation();
	void UpdateCameraMode();
	void FindBestCameraMode();
	void AdjustFocusPointInterpolation();
	void GetActualFocusLocation();
	void UpdateFocusPoint();
	void ClearFocusPoint();
	void GetFocusActor();
	void SetFocusOnActor();
	void SetFocusOnLoc();
	void AdjustTurn();
	void EndTurn();
	void BeginTurn();
	void PlayerUpdateCamera();
	void UpdateCamera();
	void GetDesiredFOV();
	void Init();
	void Reset();
	void CreateCameraMode();
};


// Class GameFramework.GamePlayerCamera
// 0x008C (0x0660 - 0x05D4)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                           // 0x05D4(0x0008) (Interp, RepRetry, ProtectedWrite)
	class UClass*                                      ThirdPersonCameraClass;                                   // 0x05DC(0x0008) (Interp, RepRetry, ProtectedWrite)
	class UGameCameraBase*                             FixedCam;                                                 // 0x05E4(0x0008) (Interp, RepRetry, ProtectedWrite)
	class UClass*                                      FixedCameraClass;                                         // 0x05EC(0x0008) (Interp, RepRetry, ProtectedWrite)
	class UGameCameraBase*                             CurrentCamera;                                            // 0x05F4(0x0008) (Interp, RepRetry, ProtectedWrite)
	unsigned long                                      bUseForcedCamFOV : 1;                                     // 0x05FC(0x0004)
	unsigned long                                      bInterpolateCamChanges : 1;                               // 0x05FC(0x0004)
	unsigned long                                      bResetInterp : 1;                                         // 0x05FC(0x0004)
	float                                              ForcedCamFOV;                                             // 0x0600(0x0004)
	class AActor*                                      LastViewTarget;                                           // 0x0604(0x0008)
	float                                              SplitScreenShakeScale;                                    // 0x060C(0x0004) (ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class AActor*                                      LastTargetBase;                                           // 0x0610(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	struct FMatrix                                     LastTargetBaseTM;                                         // 0x0620(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerCamera");
		return ptr;
	}


	void AdjustFOVForViewport();
	void ProcessViewRotation();
	void ResetInterpolation();
	void SetColorScale();
	void DisplayDebug();
	void UpdateCameraLensEffects();
	void UpdateViewTarget();
	void ShouldConstrainAspectRatio();
	void FindBestCameraType();
	void Reset();
	void PostBeginPlay();
	void CacheLastTargetBaseInfo();
	void CreateCamera();
};


// Class GameFramework.GameThirdPersonCameraMode
// 0x01F5 (0x024D - 0x0058)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                           // 0x0058(0x0008)
	float                                              FOVAngle;                                                 // 0x0060(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              BlendTime;                                                // 0x0064(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bLockedToViewTarget : 1;                                  // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDirectLook : 1;                                          // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bFollowTarget : 1;                                        // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bInterpLocation : 1;                                      // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bUsePerAxisOriginLocInterp : 1;                           // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bInterpRotation : 1;                                      // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bRotInterpSpeedConstant : 1;                              // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bDoPredictiveAvoidance : 1;                               // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bValidateWorstLoc : 1;                                    // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSkipCameraCollision : 1;                                 // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSmoothViewOffsetPitchChanges : 1;                        // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bApplyDeltaViewOffset : 1;                                // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bAdjustDOF : 1;                                           // 0x0068(0x0004) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	unsigned long                                      bDOFUpdated : 1;                                          // 0x0068(0x0004)
	unsigned long                                      bNoFOVPostProcess : 1;                                    // 0x0068(0x0004)
	unsigned long                                      bInterpViewOffsetOnlyForCamTransition : 1;                // 0x0068(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              FollowingInterpSpeed_Pitch;                               // 0x006C(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              FollowingInterpSpeed_Yaw;                                 // 0x0070(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              FollowingInterpSpeed_Roll;                                // 0x0074(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              FollowingCameraVelThreshold;                              // 0x0078(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              OriginLocInterpSpeed;                                     // 0x007C(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     PerAxisOriginLocInterpSpeed;                              // 0x0080(0x000C) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              OriginRotInterpSpeed;                                     // 0x008C(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     StrafeLeftAdjustment;                                     // 0x0090(0x000C) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     StrafeRightAdjustment;                                    // 0x009C(0x000C) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              StrafeOffsetScalingThreshold;                             // 0x00A8(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              StrafeOffsetInterpSpeedIn;                                // 0x00AC(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              StrafeOffsetInterpSpeedOut;                               // 0x00B0(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     LastStrafeOffset;                                         // 0x00B4(0x000C)
	struct FVector                                     RunFwdAdjustment;                                         // 0x00C0(0x000C) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     RunBackAdjustment;                                        // 0x00CC(0x000C) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              RunOffsetScalingThreshold;                                // 0x00D8(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              RunOffsetInterpSpeedIn;                                   // 0x00DC(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              RunOffsetInterpSpeedOut;                                  // 0x00E0(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     LastRunOffset;                                            // 0x00E4(0x000C)
	struct FVector                                     WorstLocOffset;                                           // 0x00F0(0x000C) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     TargetRelativeCameraOriginOffset;                         // 0x00FC(0x000C) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FViewOffsetData                             ViewOffset;                                               // 0x0108(0x0024) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[0x6];                      // 0x012C(0x0024) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	float                                              DOF_FalloffExponent;                                      // 0x0204(0x0004) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	float                                              DOF_BlurKernelSize;                                       // 0x0208(0x0004) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	float                                              DOF_FocusInnerRadius;                                     // 0x020C(0x0004) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	float                                              DOF_MaxNearBlurAmount;                                    // 0x0210(0x0004) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	float                                              DOF_MaxFarBlurAmount;                                     // 0x0214(0x0004) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	float                                              LastDOFRadius;                                            // 0x0218(0x0004)
	float                                              LastDOFDistance;                                          // 0x021C(0x0004)
	float                                              DOFDistanceInterpSpeed;                                   // 0x0220(0x0004) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	struct FVector                                     DOFTraceExtent;                                           // 0x0224(0x000C) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	float                                              DOF_RadiusFalloff;                                        // 0x0230(0x0004) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	struct FVector2D                                   DOF_RadiusRange;                                          // 0x0234(0x0008) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	struct FVector2D                                   DOF_RadiusDistRange;                                      // 0x023C(0x0008) (Interp, PrivateWrite, ProtectedWrite, CrossLevelPassive)
	float                                              ViewOffsetInterp;                                         // 0x0244(0x0004)
	float                                              OffsetAdjustmentInterpSpeed;                              // 0x0248(0x0004) (Interp, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<ECameraViewportTypes>                  CurrentViewportType;                                      // 0x024C(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode");
		return ptr;
	}


	void SetViewOffset();
	void ModifyPostProcessSettings();
	void UpdatePostProcess();
	void DOFTrace();
	void GetDOFFocusLoc();
	void ProcessViewRotation();
	void SetFocusPoint();
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
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	float                                              WorstLocAimingZOffset;                                    // 0x0250(0x0004) (NonTransactional, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bTemporaryOriginRotInterp : 1;                            // 0x0254(0x0004)
	float                                              TemporaryOriginRotInterpSpeed;                            // 0x0258(0x0004) (NonTransactional, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

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
	class AGamePawn*                                   PawnOwner;                                                // 0x0058(0x0008)
	struct FName                                       Handle;                                                   // 0x0060(0x0008)
	float                                              LastCanDoSpecialMoveTime;                                 // 0x0068(0x0004)
	unsigned long                                      bLastCanDoSpecialMove : 1;                                // 0x006C(0x0004)
	unsigned long                                      bReachPreciseDestination : 1;                             // 0x006C(0x0004)
	unsigned long                                      bReachedPreciseDestination : 1;                           // 0x006C(0x0004)
	unsigned long                                      bReachPreciseRotation : 1;                                // 0x006C(0x0004)
	unsigned long                                      bReachedPreciseRotation : 1;                              // 0x006C(0x0004)
	unsigned long                                      bForcePrecisePosition : 1;                                // 0x006C(0x0004)
	struct FVector                                     PreciseDestination;                                       // 0x0070(0x000C)
	class AActor*                                      PreciseDestBase;                                          // 0x007C(0x0008)
	struct FVector                                     PreciseDestRelOffset;                                     // 0x0084(0x000C)
	float                                              PreciseRotationInterpolationTime;                         // 0x0090(0x0004)
	struct FRotator                                    PreciseRotation;                                          // 0x0094(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSpecialMove");
		return ptr;
	}


	void RelativeToWorldOffset();
	void WorldToRelativeOffset();
	void ForcePawnRotation();
	void MessageEvent();
	void ResetFacePreciseRotation();
	void ReachedPrecisePosition();
	void SetFacePreciseRotation();
	void SetReachPreciseDestination();
	void ShouldReplicate();
	void SpecialMoveFlagsUpdated();
	void Tick();
	void SpecialMoveEnded();
	void SpecialMoveStarted();
	void InternalCanDoSpecialMove();
	void CanDoSpecialMove();
	void CanOverrideSpecialMove();
	void CanOverrideMoveWith();
	void CanChainMove();
	void ExtractSpecialMoveFlags();
	void InitSpecialMoveFlags();
	void InitSpecialMove();
};


// Class GameFramework.GameStateObject
// 0x0030 (0x00B0 - 0x0080)
class UGameStateObject : public UGameplayEventsHandler
{
public:
	struct FArray_Mirror                               TeamStates;                                               // 0x0080(0x0010)
	struct FArray_Mirror                               PlayerStates;                                             // 0x0090(0x0010)
	TEnumAsByte<EGameSessionType>                      SessionType;                                              // 0x00A0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	unsigned long                                      bIsMatchStarted : 1;                                      // 0x00A4(0x0004)
	unsigned long                                      bIsRoundStarted : 1;                                      // 0x00A4(0x0004)
	int                                                RoundNumber;                                              // 0x00A8(0x0004)
	int                                                MaxRoundNumber;                                           // 0x00AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameStateObject");
		return ptr;
	}


	void Reset();
	void PreProcessStream();
};


// Class GameFramework.GameStatsAggregator
// 0x0248 (0x02C8 - 0x0080)
class UGameStatsAggregator : public UGameplayEventsHandler
{
public:
	class UGameStateObject*                            GameState;                                                // 0x0080(0x0008)
	TArray<struct FAggregateEventMapping>              AggregatesList;                                           // 0x0088(0x0010)
	struct FMap_Mirror                                 AggregateEventsMapping;                                   // 0x0098(0x0048)
	TArray<struct FGameplayEventMetaData>              AggregateEvents;                                          // 0x00E0(0x0010)
	TArray<int>                                        AggregatesFound;                                          // 0x00F0(0x0010)
	struct FGameEvents                                 AllGameEvents;                                            // 0x0100(0x0048)
	TArray<struct FTeamEvents>                         AllTeamEvents;                                            // 0x0148(0x0010)
	TArray<struct FPlayerEvents>                       AllPlayerEvents;                                          // 0x0158(0x0010)
	struct FWeaponEvents                               AllWeaponEvents;                                          // 0x0168(0x0058)
	struct FProjectileEvents                           AllProjectileEvents;                                      // 0x01C0(0x0058)
	struct FPawnEvents                                 AllPawnEvents;                                            // 0x0218(0x0058)
	struct FDamageEvents                               AllDamageEvents;                                          // 0x0270(0x0058)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameStatsAggregator");
		return ptr;
	}


	void GetAggregateMappingIDs();
	void Reset();
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
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                                   // 0x0058(0x0008)
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                                    // 0x0060(0x0008)
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                                      // 0x0068(0x0008)
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                                       // 0x0070(0x0008)

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
	unsigned long                                      bDrawDebugText : 1;                                       // 0x0594(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DebugCameraHUD");
		return ptr;
	}


	void PostRender();
	void DisplayMaterials();
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


	void GetMaxSpawnDist();
	void AgentDestroyed();
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


	void GetSpawnPosition();
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
	class AActor*                                      Path;                                                     // 0x007C(0x0008)
	class AActor*                                      Find;                                                     // 0x0084(0x0008)
	class AActor*                                      Goal;                                                     // 0x008C(0x0008)
	float                                              Radius;                                                   // 0x0094(0x0004)
	unsigned long                                      bWasFiring : 1;                                           // 0x0098(0x0004)
	float                                              DesiredHoverHeight;                                       // 0x009C(0x0004)
	float                                              CurrentHoverHeight;                                       // 0x00A0(0x0004)
	float                                              SubGoalReachDist;                                         // 0x00A4(0x0004)
	float                                              GoalDistance;                                             // 0x00A8(0x0004)
	struct FVector                                     MoveVectDest;                                             // 0x00AC(0x000C)
	class UReachSpec*                                  CurrentSpec;                                              // 0x00B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICmd_Hover_MoveToGoal");
		return ptr;
	}


	void IsEnemyBasedOnInterpActor();
	void HandlePathObstruction();
	void Pushed();
	void STATIC_MoveToGoal();
};


// Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh
// 0x0098 (0x0114 - 0x007C)
class UGameAICmd_Hover_MoveToGoal_Mesh : public UGameAICommand
{
public:
	class AActor*                                      Find;                                                     // 0x007C(0x0008)
	float                                              Radius;                                                   // 0x0084(0x0004)
	unsigned long                                      bWasFiring : 1;                                           // 0x0088(0x0004)
	unsigned long                                      bFinalApproach : 1;                                       // 0x0088(0x0004)
	unsigned long                                      bFallbackMoveToMesh : 1;                                  // 0x0088(0x0004)
	float                                              DesiredHoverHeight;                                       // 0x008C(0x0004)
	float                                              CurrentHoverHeight;                                       // 0x0090(0x0004)
	float                                              SubGoalReachDist;                                         // 0x0094(0x0004)
	float                                              GoalDistance;                                             // 0x0098(0x0004)
	struct FVector                                     IntermediatePoint;                                        // 0x009C(0x000C)
	struct FVector                                     LastMovePoint;                                            // 0x00A8(0x000C)
	int                                                NumMovePointFails;                                        // 0x00B4(0x0004)
	int                                                MaxMovePointFails;                                        // 0x00B8(0x0004)
	struct FVector                                     FallbackDest;                                             // 0x00BC(0x000C)
	class AActor*                                      MoveToActor;                                              // 0x00C8(0x0008)
	struct FBasedPosition                              LastMoveTargetPathLocation;                               // 0x00D0(0x0038)
	struct FVector                                     InitialFinalDestination;                                  // 0x0108(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh");
		return ptr;
	}


	void DrawDebug();
	void IsEnemyBasedOnInterpActor();
	void ShouldUpdateBreadCrumbs();
	void HasReachedGoal();
	void ReEvaluatePath();
	void HandlePathObstruction();
	void Tick();
	void Popped();
	void Pushed();
	void STATIC_HoverBackToMesh();
	void STATIC_HoverToPoint();
	void STATIC_HoverToGoal();
};


// Class GameFramework.GameCrowd_ListOfAgents
// 0x0010 (0x0068 - 0x0058)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	TArray<struct FAgentArchetypeInfo>                 ListOfAgents;                                             // 0x0058(0x0010) (RepNotify, Interp, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)

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
	unsigned long                                      bAutoControllerVibration : 1;                             // 0x0058(0x0004) (RepNotify, Interp, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;                   // 0x0058(0x0004) (Interp, RepRetry, ProtectedWrite)
	class USoundCue*                                   ExplosionSound;                                           // 0x005C(0x0008) (RepNotify, Interp, NonTransactional, NotForConsole, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UCameraShake*                                CamShake;                                                 // 0x0064(0x0008) (Interp, RepRetry, ProtectedWrite)
	class UCameraShake*                                CamShake_Left;                                            // 0x006C(0x0008) (Interp, RepRetry, ProtectedWrite)
	class UCameraShake*                                CamShake_Right;                                           // 0x0074(0x0008) (Interp, RepRetry, ProtectedWrite)
	class UCameraShake*                                CamShake_Rear;                                            // 0x007C(0x0008) (Interp, RepRetry, ProtectedWrite)
	float                                              CamShakeInnerRadius;                                      // 0x0084(0x0004) (Interp, RepRetry, ProtectedWrite)
	float                                              CamShakeOuterRadius;                                      // 0x0088(0x0004) (Interp, RepRetry, ProtectedWrite)
	float                                              CamShakeFalloff;                                          // 0x008C(0x0004) (Interp, RepRetry, ProtectedWrite)
	class UClass*                                      CameraLensEffect;                                         // 0x0090(0x0008) (Interp, RepRetry, ProtectedWrite)
	float                                              CameraLensEffectRadius;                                   // 0x0098(0x0004) (Interp, RepRetry, ProtectedWrite)
	class UPointLightComponent*                        ExploLight;                                               // 0x009C(0x0008) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              ExploLightFadeOutTime;                                    // 0x00A4(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	class URadialBlurComponent*                        ExploRadialBlur;                                          // 0x00A8(0x0008) (Interp, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              ExploRadialBlurFadeOutTime;                               // 0x00B0(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	float                                              ExploRadialBlurMaxBlur;                                   // 0x00B4(0x0004) (Interp, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)
	class UParticleSystem*                             ParticleEmitterTemplate;                                  // 0x00B8(0x0008) (RepNotify, NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                                       // 0x00C0(0x0008) (RepNotify, NonTransactional, EditorOnly, NotForConsole, RepRetry, ProtectedWrite, ArchetypeProperty, EditTextBox, CrossLevelActive)

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
	float                                              DefaultFOV;                                               // 0x0064(0x0004) (NonTransactional, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, CrossLevelActive)

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


	void StartScalingDown();
	void FellOutOfWorld();
	void PostBeginPlay();
};


// Class GameFramework.MobileDebugCameraController
// 0x000C (0x07E8 - 0x07DC)
class AMobileDebugCameraController : public ADebugCameraController
{
public:
	int                                                OldMobileGroup;                                           // 0x07DC(0x0004)
	class UMobilePlayerInput*                          MPI;                                                      // 0x07E0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileDebugCameraController");
		return ptr;
	}


	void SetupDebugZones();
	void InitInputSystem();
	void OnDeactivate();
	void InitDebugInputSystem();
	void OnActivate();
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
	unsigned long                                      bDrawDebugText : 1;                                       // 0x06B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileDebugCameraHUD");
		return ptr;
	}


	void PostRender();
	void DisplayMaterials();
	void PostBeginPlay();
};


// Class GameFramework.MobileMenuBar
// 0x001C (0x00F0 - 0x00D4)
class UMobileMenuBar : public UMobileMenuObject
{
public:
	unsigned long                                      bIsVertical : 1;                                          // 0x00D4(0x0004) (NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, CrossLevelActive)
	unsigned long                                      bDirty : 1;                                               // 0x00D4(0x0004)
	int                                                SelectedIndex;                                            // 0x00D8(0x0004) (NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, CrossLevelActive)
	int                                                FirstItem;                                                // 0x00DC(0x0004)
	TArray<class UMobileMenuBarItem*>                  Items;                                                    // 0x00E0(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuBar");
		return ptr;
	}


	void UpdateItemViewports();
	void SetFirstItem();
	void RenderItem();
	void RenderObject();
	void OnTouch();
	void GetSelected();
	void Num();
	void AddItem();
	void InitMenuObject();
};


// Class GameFramework.MobileMenuBarItem
// 0x0010 (0x0068 - 0x0058)
class UMobileMenuBarItem : public UObject
{
public:
	int                                                Width;                                                    // 0x0058(0x0004)
	int                                                Height;                                                   // 0x005C(0x0004)
	struct FVector2D                                   VpPos;                                                    // 0x0060(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuBarItem");
		return ptr;
	}


	void RenderItem();
};


// Class GameFramework.MobileMenuButton
// 0x0068 (0x013C - 0x00D4)
class UMobileMenuButton : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Images[0x2];                                              // 0x00D4(0x0008)
	struct FUVCoords                                   ImagesUVs[0x2];                                           // 0x00E4(0x0014)
	struct FLinearColor                                ImageColor;                                               // 0x010C(0x0010)
	struct FString                                     Caption;                                                  // 0x011C(0x0010)
	struct FLinearColor                                CaptionColor;                                             // 0x012C(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuButton");
		return ptr;
	}


	void RenderCaption();
	void RenderObject();
	void InitMenuObject();
};


// Class GameFramework.MobileMenuElement
// 0x0014 (0x006C - 0x0058)
class UMobileMenuElement : public UObject
{
public:
	struct FVector2D                                   VpPos;                                                    // 0x0058(0x0008)
	struct FVector2D                                   VpSize;                                                   // 0x0060(0x0008)
	unsigned long                                      bIsVisible : 1;                                           // 0x0068(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuElement");
		return ptr;
	}


	void GetIconIndexes();
	void RenderElement();
	void OnTouch();
};


// Class GameFramework.MobileMenuGame
// 0x0008 (0x04C8 - 0x04C0)
class AMobileMenuGame : public AGameInfo
{
public:
	class UClass*                                      InitialSceneToDisplayClass;                               // 0x04C0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuGame");
		return ptr;
	}


	void RestartPlayer();
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
	TArray<class UMobileMenuElement*>                  Slots;                                                    // 0x00D4(0x0010)
	TArray<class UMobileMenuElement*>                  Items;                                                    // 0x00E4(0x0010)
	float                                              SideLeewayPercent;                                        // 0x00F4(0x0004)
	struct FRenderElementInfo                          CurrentElement;                                           // 0x00F8(0x0008)
	struct FDragElementInfo                            Drag;                                                     // 0x0100(0x0028)
	struct FVector2D                                   ScaleSize;                                                // 0x0128(0x0008)
	unsigned long                                      bRenderDragItem : 1;                                      // 0x0130(0x0004)
	unsigned long                                      bInitialzed : 1;                                          // 0x0130(0x0004)
	struct FScriptDelegate                             __OnUpdateItemInSlot__Delegate;                           // 0x0134(0x0010)
	struct FScriptDelegate                             __DoCanPutItemInSlot__Delegate;                           // 0x0144(0x0010)
	struct FScriptDelegate                             __OnUpdateDrag__Delegate;                                 // 0x0154(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuInventory");
		return ptr;
	}


	void GetIconIndexes();
	void RenderDragItem();
	void RenderObject();
	void GetIndexOfItem();
	void FindSlotIndexAt();
	void InitDragAt();
	void UpdateItemInSlot();
	void AddItemToSlot();
	void SwapItemsInSlots();
	void OnTouch();
	void CanPutItemInSlot();
	void ScaleSlot();
	void AddSlot();
	void InitMenuObject();
	void OnUpdateDrag();
	void DoCanPutItemInSlot();
	void OnUpdateItemInSlot();
};


// Class GameFramework.MobileMenuLabel
// 0x002C (0x0100 - 0x00D4)
class UMobileMenuLabel : public UMobileMenuObject
{
public:
	struct FString                                     Caption;                                                  // 0x00D4(0x0010)
	class UFont*                                       TextFont;                                                 // 0x00E4(0x0008)
	struct FColor                                      TextColor;                                                // 0x00EC(0x0004)
	struct FColor                                      TouchedColor;                                             // 0x00F0(0x0004)
	float                                              TextXScale;                                               // 0x00F4(0x0004)
	float                                              TextYScale;                                               // 0x00F8(0x0004)
	unsigned long                                      bAutoSize : 1;                                            // 0x00FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuLabel");
		return ptr;
	}


	void RenderObject();
};


// Class GameFramework.MobileMenuList
// 0x00BC (0x0190 - 0x00D4)
class UMobileMenuList : public UMobileMenuObject
{
public:
	unsigned long                                      bIsVerticalList : 1;                                      // 0x00D4(0x0004) (NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, CrossLevelActive)
	unsigned long                                      bDisableScrolling : 1;                                    // 0x00D4(0x0004) (NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, CrossLevelActive)
	unsigned long                                      bForceSelectedToLineup : 1;                               // 0x00D4(0x0004) (NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, CrossLevelActive)
	unsigned long                                      bTapToScrollToItem : 1;                                   // 0x00D4(0x0004)
	unsigned long                                      bLoops : 1;                                               // 0x00D4(0x0004)
	float                                              SelectedOffset;                                           // 0x00D8(0x0004) (NonTransactional, EditorOnly, PrivateWrite, ProtectedWrite, EditHide, CrossLevelActive)
	TArray<class UMobileMenuListItem*>                 Items;                                                    // 0x00DC(0x0010)
	struct FSelectedMenuItem                           SelectedItem;                                             // 0x00EC(0x000C)
	struct FMenuListDragInfo                           Drag;                                                     // 0x00F8(0x0054)
	struct FMenuListMovementInfo                       Movement;                                                 // 0x014C(0x001C)
	float                                              Deacceleration;                                           // 0x0168(0x0004)
	float                                              EaseOutExp;                                               // 0x016C(0x0004)
	struct FIntPoint                                   ScreenSize;                                               // 0x0170(0x0008)
	int                                                FirstVisible;                                             // 0x0178(0x0004)
	int                                                LastVisible;                                              // 0x017C(0x0004)
	int                                                NumShowEndOfList;                                         // 0x0180(0x0004)
	float                                              EndOfListSupression;                                      // 0x0184(0x0004)
	struct FVector2D                                   MaskSize;                                                 // 0x0188(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuList");
		return ptr;
	}


	void GetIconIndexes();
	void ItemScrollSize();
	void RenderObject();
	void UpdateScroll();
	void CalculateSelectedItem();
	void GetItemClickPosition();
	void OnTouch();
	void SetSelectedItem();
	void GetNumVisible();
	void SetSelectedToVisibleIndex();
	void GetVisibleIndexOfSelected();
	void GetAmountSelected();
	void GetSelected();
	void Num();
	void AddItem();
	void InitMenuObject();
};


// Class GameFramework.MobileMenuListItem
// 0x0008 (0x0074 - 0x006C)
class UMobileMenuListItem : public UMobileMenuElement
{
public:
	float                                              Width;                                                    // 0x006C(0x0004)
	float                                              Height;                                                   // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuListItem");
		return ptr;
	}


	void RenderItem();
};


// Class GameFramework.MobileMenuObjectProxy
// 0x0020 (0x00F4 - 0x00D4)
class UMobileMenuObjectProxy : public UMobileMenuObject
{
public:
	struct FScriptDelegate                             __OnTouchEvent__Delegate;                                 // 0x00D4(0x0010)
	struct FScriptDelegate                             __OnRenderObject__Delegate;                               // 0x00E4(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuObjectProxy");
		return ptr;
	}


	void RenderObject();
	void OnTouch();
	void OnRenderObject();
	void OnTouchEvent();
};


// Class GameFramework.MobileTouchInputVolume
// 0x0004 (0x02B4 - 0x02B0)
class AMobileTouchInputVolume : public AVolume
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x02B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileTouchInputVolume");
		return ptr;
	}


	void HandleDragOver();
	void HandleDoubleClick();
	void HandleClick();
	void OnToggle();
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


	void HandleDragOver();
	void HandleDoubleClick();
	void HandleClick();
};


// Class GameFramework.PlayerCollectorGame
// 0x0014 (0x04D4 - 0x04C0)
class APlayerCollectorGame : public AGameInfo
{
public:
	int                                                NumberOfClientsToWaitFor;                                 // 0x04C0(0x0004)
	struct FString                                     URLToLoad;                                                // 0x04C4(0x0010)

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
	class UClass*                                      PhysicalMaterialPropertyClass;                            // 0x0058(0x0008)

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
	struct FLinearColor                                DisplayColor;                                             // 0x0180(0x0010) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     DisplayLocation;                                          // 0x0190(0x000C) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	class UTexture2D*                                  DisplayTexture;                                           // 0x019C(0x0008) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              XL;                                                       // 0x01A4(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              YL;                                                       // 0x01A8(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              U;                                                        // 0x01AC(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              V;                                                        // 0x01B0(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              UL;                                                       // 0x01B4(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	float                                              VL;                                                       // 0x01B8(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)

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
	class UFont*                                       DisplayFont;                                              // 0x0180(0x0008) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FColor                                      DisplayColor;                                             // 0x0188(0x0004) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FVector                                     DisplayLocation;                                          // 0x018C(0x000C) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	struct FString                                     DisplayText;                                              // 0x0198(0x0010) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<ETextDrawMethod>                       TextDrawMethod;                                           // 0x01A8(0x0001) (EditorOnly, NotForConsole, PrivateWrite, ArchetypeProperty, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_HudRenderText");
		return ptr;
	}


	void STATIC_GetObjClassVersion();
	void Render();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
